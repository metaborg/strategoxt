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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
ATerm term_n_64;
ATerm term_a_64;
ATerm term_m_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_x_62;
ATerm term_v_62;
ATerm term_u_62;
ATerm term_s_62;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_n_61;
ATerm term_m_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_v_59;
ATerm term_r_59;
ATerm term_r_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_e_58;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_s_57;
ATerm term_l_57;
ATerm term_i_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_q_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_e_56;
ATerm term_w_55;
ATerm term_c_55;
ATerm term_x_54;
ATerm term_x_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_h_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_j_47;
ATerm term_c_47;
ATerm term_s_46;
ATerm term_o_46;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_b_45;
ATerm term_n_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_g_43;
ATerm term_c_43;
ATerm term_t_42;
ATerm term_p_42;
ATerm term_l_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_y_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_b_41;
ATerm term_r_40;
ATerm term_h_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_v_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_z_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_h_35;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_r_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_x_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_y_22;
ATerm term_s_22;
ATerm term_d_22;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_s_20;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_w_17;
ATerm term_q_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
void init_constant_terms (void)
{
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_23, term_d_22, term_y_23);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_24, term_k_24, term_l_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_24, term_s_24, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_24, term_e_25, term_f_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_25, term_r_25, term_y_25);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_26, term_h_26, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_26, term_r_26, term_s_26);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_27, term_k_27, term_l_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_28, term_b_28, term_c_28);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_28, term_f_28, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_28, term_j_28, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_28, term_n_28, term_o_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_28, term_r_28, term_s_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_28, term_v_28, term_w_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_29, term_d_29, term_e_29);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_29, term_h_29, term_i_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_30, term_c_30, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_30, term_g_30, term_h_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_30, term_k_30, term_r_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_30, term_i_18, term_x_30);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_30, term_a_31, term_b_31);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_31, term_s_31, term_t_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_31, term_w_31, term_x_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_31, term_s_32, term_t_32);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_33, term_d_33, term_e_33);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_33, term_m_33, term_n_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_33, term_q_33, term_r_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_33, term_u_33, term_v_33);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__2, term_h_35, term_j_35);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym__2, term_h_35, term_n_39);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_y_51);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym__2, term_l_52, term_g_43);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym__2, term_e_44, term_p_42);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_e_56);
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_56);
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym__2, term_v_56, term_g_43);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym__2, term_l_57, term_g_43);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(sym__2, term_l_61, term_m_61);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(sym__2, term_p_62, term_g_43);
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(sym__2, term_s_62, term_g_43);
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(sym__2, term_v_59, term_g_43);
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(sym__3, term_l_61, term_m_61, (ATerm) ATempty);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm add_extension_0_0 (ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm at_suffix_rev_1_0 (ATerm o_89 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Imports_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm _2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm unzip_1_0 (ATerm d_91 (ATerm), ATerm);
ATerm unzip_0_0 (ATerm);
ATerm get_stratego_imports_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm Snd_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm union_1_0 (ATerm t_92 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm u_106 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm g_110 (ATerm), ATerm);
ATerm assert_1_0 (ATerm j_99 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm v_100 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm z_72 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm o_100 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm h_102 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm c_89 (ATerm), ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm find_module_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm get_module_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm Fst_0_0 (ATerm);
ATerm GnUndefined_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm diff_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm);
ATerm zip_1_0 (ATerm y_90 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm);
ATerm GnExit_0_0 (ATerm);
ATerm GnInitRoots_0_0 (ATerm);
ATerm while_not_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm);
ATerm graph_nodes_roots_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm);
ATerm filter_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm pack_stratego_modules_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_89 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm f_99 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm);
ATerm crush_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm p_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm o_106 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_89 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm t_106 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm r_106 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm q_106 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm);
ATerm xtc_iowrap_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,o_1 = NULL,p_1 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm q_1 = NULL,u_1 = NULL,v_1 = NULL;
    t = not_null(o_1);
    if(((q_1 != NULL) && (q_1 != t)))
      _fail(t);
    else
      q_1 = t;
    t = not_null(p_1);
    if(((u_1 != NULL) && (u_1 != t)))
      _fail(t);
    else
      u_1 = t;
    t = not_null(j_1);
    t = SSL_write_term_to_stream_baf(not_null(q_1), not_null(u_1));
    {
      ATerm w_1 = NULL;
      ATerm l_2 (ATerm t)
      {
        t = not_null(w_1);
        if(((v_1 != NULL) && (v_1 != t)))
          _fail(t);
        else
          v_1 = t;
        t = not_null(w_1);
        return(t);
      }
      if(((w_1 != NULL) && (w_1 != t)))
        _fail(t);
      else
        w_1 = t;
      t = l_2(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_1));
    }
    return(t);
  }
  if(((j_1 != NULL) && (j_1 != t)))
    _fail(t);
  else
    j_1 = t;
  t = not_null(j_1);
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
      t = not_null(k_1);
      if(match_cons(t, sym_Stream_1))
        {
          o_1 = ATgetArgument(t, 0);
          t = k_2(t);
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
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm z_2 = NULL,d_3 = NULL;
    t = not_null(y_2);
    if(((z_2 != NULL) && (z_2 != t)))
      _fail(t);
    else
      z_2 = t;
    t = not_null(y_2);
    {
      ATerm e_3 = NULL;
      ATerm g_3 (ATerm t)
      {
        t = not_null(e_3);
        if(((d_3 != NULL) && (d_3 != t)))
          _fail(t);
        else
          d_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), not_null(z_2));
        t = WriteToBinaryFile_0_0(t);
        t = not_null(d_3);
        t = close_file_0_0(t);
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((e_3 != NULL) && (e_3 != t)))
        _fail(t);
      else
        e_3 = t;
      t = g_3(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_3));
    }
    return(t);
  }
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = f_3(t);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  ATerm r_3 (ATerm t)
  {
    ATerm n_3 = NULL,o_3 = NULL;
    t = not_null(l_3);
    if(((n_3 != NULL) && (n_3 != t)))
      _fail(t);
    else
      n_3 = t;
    t = not_null(m_3);
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = not_null(o_3);
    {
      ATerm s_3 = t;
      int m_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          ;
          LocalPopChoice(m_7);
        }
      else
        {
          t = s_3;
          {
            ATerm c_0 (ATerm t)
            {
              ATerm s_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Nil_0_0(t);
                  ;
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = s_16;
                  {
                    ATerm p_3 = NULL;
                    t = Cons_2_0(_id, c_0, t);
                    {
                      ATerm q_3 = NULL;
                      ATerm t_3 (ATerm t)
                      {
                        t = not_null(q_3);
                        if(((p_3 != NULL) && (p_3 != t)))
                          _fail(t);
                        else
                          p_3 = t;
                        t = not_null(q_3);
                        return(t);
                      }
                      if(((q_3 != NULL) && (q_3 != t)))
                        _fail(t);
                      else
                        q_3 = t;
                      t = t_3(t);
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_3)), not_null(n_3));
                    }
                  }
                }
              return(t);
            }
            t = Cons_2_0(_id, c_0, t);
          }
        }
    }
    return(t);
  }
  if(((k_3 != NULL) && (k_3 != t)))
    _fail(t);
  else
    k_3 = t;
  t = not_null(k_3);
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
      t = r_3(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  ATerm b_4 (ATerm t)
  {
    ATerm z_3 = NULL,a_4 = NULL;
    t = not_null(x_3);
    if(((z_3 != NULL) && (z_3 != t)))
      _fail(t);
    else
      z_3 = t;
    t = not_null(y_3);
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_4)), term_c_17), not_null(z_3));
    t = concat_strings_0_0(t);
    return(t);
  }
  if(((w_3 != NULL) && (w_3 != t)))
    _fail(t);
  else
    w_3 = t;
  t = not_null(w_3);
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
      t = b_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm j_4 = NULL;
  ATerm x_4 (ATerm t)
  {
    ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
    t = not_null(j_4);
    if(((k_4 != NULL) && (k_4 != t)))
      _fail(t);
    else
      k_4 = t;
    t = not_null(j_4);
    {
      ATerm p_4 = NULL;
      ATerm y_4 (ATerm t)
      {
        ATerm q_4 = NULL;
        ATerm z_4 (ATerm t)
        {
          ATerm r_4 = NULL,t_4 = NULL;
          ATerm b_5 (ATerm t)
          {
            ATerm u_4 = NULL;
            ATerm c_5 (ATerm t)
            {
              ATerm v_4 = NULL;
              t = not_null(u_4);
              if(((o_4 != NULL) && (o_4 != t)))
                _fail(t);
              else
                o_4 = t;
              t = not_null(u_4);
              {
                ATerm w_4 = NULL;
                ATerm d_5 (ATerm t)
                {
                  t = not_null(w_4);
                  if(((v_4 != NULL) && (v_4 != t)))
                    _fail(t);
                  else
                    v_4 = t;
                  t = not_null(w_4);
                  return(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(CheckATermList(not_null(k_4)), term_e_17));
                t = separate_by_0_0(t);
                if(((w_4 != NULL) && (w_4 != t)))
                  _fail(t);
                else
                  w_4 = t;
                t = d_5(t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), (ATerm) ATinsert(CheckATermList(not_null(v_4)), not_null(n_4)));
                t = printnl_0_0(t);
                t = not_null(o_4);
                t = close_file_0_0(t);
              }
              return(t);
            }
            t = not_null(t_4);
            if(((m_4 != NULL) && (m_4 != t)))
              _fail(t);
            else
              m_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), term_f_17);
            t = open_file_0_0(t);
            if(((u_4 != NULL) && (u_4 != t)))
              _fail(t);
            else
              u_4 = t;
            t = c_5(t);
            return(t);
          }
          t = not_null(q_4);
          if(((n_4 != NULL) && (n_4 != t)))
            _fail(t);
          else
            n_4 = t;
          t = not_null(q_4);
          {
            ATerm s_4 = NULL;
            ATerm a_5 (ATerm t)
            {
              t = not_null(s_4);
              if(((r_4 != NULL) && (r_4 != t)))
                _fail(t);
              else
                r_4 = t;
              t = not_null(s_4);
              return(t);
            }
            if(((s_4 != NULL) && (s_4 != t)))
              _fail(t);
            else
              s_4 = t;
            t = a_5(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), term_q_17);
            t = add_extension_0_0(t);
            if(((t_4 != NULL) && (t_4 != t)))
              _fail(t);
            else
              t_4 = t;
            t = b_5(t);
          }
          return(t);
        }
        t = not_null(p_4);
        if(((l_4 != NULL) && (l_4 != t)))
          _fail(t);
        else
          l_4 = t;
        t = not_null(p_4);
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_w_17;
              t = get_config_0_0(t);
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm x_17 = t;
                if((PushChoice() == 0))
                  {
                    t = term_g_18;
                    t = get_config_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_17;
                  }
              }
            }
          if(((q_4 != NULL) && (q_4 != t)))
            _fail(t);
          else
            q_4 = t;
          t = z_4(t);
        }
        return(t);
      }
      t = term_h_18;
      t = get_config_0_0(t);
      if(((p_4 != NULL) && (p_4 != t)))
        _fail(t);
      else
        p_4 = t;
      t = y_4(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_4));
    }
    return(t);
  }
  if(((j_4 != NULL) && (j_4 != t)))
    _fail(t);
  else
    j_4 = t;
  t = x_4(t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  ATerm q_5 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
    t = not_null(j_5);
    if(((m_5 != NULL) && (m_5 != t)))
      _fail(t);
    else
      m_5 = t;
    t = not_null(l_5);
    if(((n_5 != NULL) && (n_5 != t)))
      _fail(t);
    else
      n_5 = t;
    t = not_null(i_5);
    t = SSL_fputc(not_null(m_5), not_null(n_5));
    {
      ATerm p_5 = NULL;
      ATerm r_5 (ATerm t)
      {
        t = not_null(p_5);
        if(((o_5 != NULL) && (o_5 != t)))
          _fail(t);
        else
          o_5 = t;
        t = not_null(p_5);
        return(t);
      }
      if(((p_5 != NULL) && (p_5 != t)))
        _fail(t);
      else
        p_5 = t;
      t = r_5(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_5));
    }
    return(t);
  }
  if(((i_5 != NULL) && (i_5 != t)))
    _fail(t);
  else
    i_5 = t;
  t = not_null(i_5);
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      t = not_null(k_5);
      if(match_cons(t, sym_Stream_1))
        {
          l_5 = ATgetArgument(t, 0);
          t = q_5(t);
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
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
  ATerm e_6 (ATerm t)
  {
    ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
    t = not_null(y_5);
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    t = not_null(z_5);
    if(((b_6 != NULL) && (b_6 != t)))
      _fail(t);
    else
      b_6 = t;
    t = not_null(w_5);
    t = SSL_write_term_to_stream_text(not_null(a_6), not_null(b_6));
    {
      ATerm d_6 = NULL;
      ATerm f_6 (ATerm t)
      {
        t = not_null(d_6);
        if(((c_6 != NULL) && (c_6 != t)))
          _fail(t);
        else
          c_6 = t;
        t = not_null(d_6);
        return(t);
      }
      if(((d_6 != NULL) && (d_6 != t)))
        _fail(t);
      else
        d_6 = t;
      t = f_6(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_6));
    }
    return(t);
  }
  if(((w_5 != NULL) && (w_5 != t)))
    _fail(t);
  else
    w_5 = t;
  t = not_null(w_5);
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      t = not_null(x_5);
      if(match_cons(t, sym_Stream_1))
        {
          y_5 = ATgetArgument(t, 0);
          t = e_6(t);
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
ATerm WriteToFile_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  ATerm t_6 (ATerm t)
  {
    ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,r_6 = NULL;
    t = not_null(l_6);
    if(((n_6 != NULL) && (n_6 != t)))
      _fail(t);
    else
      n_6 = t;
    t = not_null(m_6);
    if(((o_6 != NULL) && (o_6 != t)))
      _fail(t);
    else
      o_6 = t;
    t = not_null(n_6);
    {
      ATerm q_6 = NULL;
      ATerm u_6 (ATerm t)
      {
        t = not_null(q_6);
        if(((p_6 != NULL) && (p_6 != t)))
          _fail(t);
        else
          p_6 = t;
        t = not_null(q_6);
        return(t);
      }
      if(((q_6 != NULL) && (q_6 != t)))
        _fail(t);
      else
        q_6 = t;
      t = u_6(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), term_f_17);
      t = open_stream_0_0(t);
      {
        ATerm s_6 = NULL;
        ATerm v_6 (ATerm t)
        {
          t = not_null(s_6);
          if(((r_6 != NULL) && (r_6 != t)))
            _fail(t);
          else
            r_6 = t;
          t = not_null(s_6);
          return(t);
        }
        if(((s_6 != NULL) && (s_6 != t)))
          _fail(t);
        else
          s_6 = t;
        t = v_6(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), not_null(o_6));
        t = c_101(t);
        t = fclose_0_0(t);
        t = not_null(o_6);
      }
    }
    return(t);
  }
  if(((k_6 != NULL) && (k_6 != t)))
    _fail(t);
  else
    k_6 = t;
  t = not_null(k_6);
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
      t = t_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm x_6 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm y_6 = NULL;
      ATerm z_6 (ATerm t)
      {
        t = not_null(y_6);
        if(((x_6 != NULL) && (x_6 != t)))
          _fail(t);
        else
          x_6 = t;
        t = not_null(y_6);
        return(t);
      }
      if(((y_6 != NULL) && (y_6 != t)))
        _fail(t);
      else
        y_6 = t;
      t = z_6(t);
      t = (ATerm) ATmakeAppl(sym__2, term_i_18, not_null(x_6));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(e_0, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  ATerm g_7 (ATerm t)
  {
    ATerm d_7 = NULL,e_7 = NULL;
    t = not_null(c_7);
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = not_null(c_7);
    {
      ATerm f_7 = NULL;
      ATerm h_7 (ATerm t)
      {
        t = not_null(f_7);
        if(((e_7 != NULL) && (e_7 != t)))
          _fail(t);
        else
          e_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), not_null(d_7));
        t = WriteToTextFile_0_0(t);
        t = not_null(e_7);
        t = close_file_0_0(t);
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((f_7 != NULL) && (f_7 != t)))
        _fail(t);
      else
        f_7 = t;
      t = h_7(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_7));
    }
    return(t);
  }
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  t = g_7(t);
  return(t);
}
ATerm basename_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, m_0, t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          {
            ATerm w_18 = t;
            int x_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm k_7 = NULL;
                  if(((k_7 != NULL) && (k_7 != t)))
                    _fail(t);
                  else
                    k_7 = t;
                  t = not_null(k_7);
                  if(match_int(t, 47))
                    {
                      t = not_null(k_7);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2_0(p_0, _id, t);
                ;
                LocalPopChoice(x_18);
              }
            else
              {
                t = w_18;
                {
                  ATerm q_0 (ATerm t)
                  {
                    ATerm l_7 = NULL;
                    if(((l_7 != NULL) && (l_7 != t)))
                      _fail(t);
                    else
                      l_7 = t;
                    t = not_null(l_7);
                    if(match_int(t, 46))
                      {
                        t = not_null(l_7);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2_0(q_0, n_97, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(m_0, t);
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm e_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_7, t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = e_19;
        t = o_89(t);
      }
    return(t);
  }
  t = n_7(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm r_7 = NULL;
  t = explode_string_0_0(t);
  {
    ATerm r_0 (ATerm t)
    {
      ATerm s_0 (ATerm t)
      {
        ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
        ATerm v_7 (ATerm t)
        {
          t = not_null(u_7);
          if(((r_7 != NULL) && (r_7 != t)))
            _fail(t);
          else
            r_7 = t;
          t = not_null(s_7);
          return(t);
        }
        if(((s_7 != NULL) && (s_7 != t)))
          _fail(t);
        else
          s_7 = t;
        t = not_null(s_7);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_7 = ATgetFirst((ATermList) t);
            u_7 = (ATerm) ATgetNext((ATermList) t);
            t = not_null(t_7);
            if(match_int(t, 47))
              {
                t = v_7(t);
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
      t = at_suffix_rev_1_0(s_0, t);
      t = not_null(r_7);
      return(t);
    }
    t = try_1_0(r_0, t);
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm map_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = Cons_2_0(q_88, w_7, t);
      }
    return(t);
  }
  t = w_7(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = u_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(t_0, t);
            ;
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
              ATerm o_8 (ATerm t)
              {
                ATerm g_8 = NULL;
                t = not_null(e_8);
                if(((g_8 != NULL) && (g_8 != t)))
                  _fail(t);
                else
                  g_8 = t;
                t = not_null(g_8);
                return(t);
              }
              ATerm p_8 (ATerm t)
              {
                ATerm h_8 = NULL;
                t = not_null(e_8);
                if(((h_8 != NULL) && (h_8 != t)))
                  _fail(t);
                else
                  h_8 = t;
                t = not_null(h_8);
                {
                  ATerm b_20 = t;
                  int o_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_20);
                    }
                  else
                    {
                      t = b_20;
                      {
                        ATerm u_0 (ATerm t)
                        {
                          t = term_s_20;
                          return(t);
                        }
                        t = debug_1_0(u_0, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm q_8 (ATerm t)
              {
                ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,m_8 = NULL;
                t = not_null(e_8);
                if(((i_8 != NULL) && (i_8 != t)))
                  _fail(t);
                else
                  i_8 = t;
                t = not_null(f_8);
                if(((j_8 != NULL) && (j_8 != t)))
                  _fail(t);
                else
                  j_8 = t;
                t = not_null(d_8);
                {
                  ATerm w_20;
                  w_20 = t;
                  {
                    ATerm l_8 = NULL;
                    ATerm r_8 (ATerm t)
                    {
                      t = not_null(l_8);
                      if(((k_8 != NULL) && (k_8 != t)))
                        _fail(t);
                      else
                        k_8 = t;
                      t = not_null(l_8);
                      return(t);
                    }
                    t = not_null(i_8);
                    t = eval_config_0_0(t);
                    if(((l_8 != NULL) && (l_8 != t)))
                      _fail(t);
                    else
                      l_8 = t;
                    t = r_8(t);
                  }
                  t = w_20;
                  {
                    ATerm n_8 = NULL;
                    ATerm s_8 (ATerm t)
                    {
                      t = not_null(n_8);
                      if(((m_8 != NULL) && (m_8 != t)))
                        _fail(t);
                      else
                        m_8 = t;
                      t = not_null(n_8);
                      return(t);
                    }
                    t = not_null(j_8);
                    t = eval_config_0_0(t);
                    if(((n_8 != NULL) && (n_8 != t)))
                      _fail(t);
                    else
                      n_8 = t;
                    t = s_8(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((d_8 != NULL) && (d_8 != t)))
                _fail(t);
              else
                d_8 = t;
              t = not_null(d_8);
              if(match_cons(t, sym_Path_1))
                {
                  e_8 = ATgetArgument(t, 0);
                  t = o_8(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_8 = ATgetArgument(t, 0);
                      t = p_8(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_8 = ATgetArgument(t, 0);
                          f_8 = ATgetArgument(t, 1);
                          t = q_8(t);
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
  ATerm v_8 = NULL;
  ATerm z_8 (ATerm t)
  {
    ATerm w_8 = NULL;
    t = not_null(v_8);
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_21, not_null(w_8));
    t = table_get_0_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm b_21;
          b_21 = t;
          {
            ATerm x_8 = NULL;
            ATerm y_8 = NULL;
            ATerm a_9 (ATerm t)
            {
              t = not_null(y_8);
              if(((x_8 != NULL) && (x_8 != t)))
                _fail(t);
              else
                x_8 = t;
              t = not_null(y_8);
              return(t);
            }
            if(((y_8 != NULL) && (y_8 != t)))
              _fail(t);
            else
              y_8 = t;
            t = a_9(t);
            t = (ATerm) ATmakeAppl(sym__3, term_a_21, not_null(w_8), not_null(x_8));
            t = table_put_0_0(t);
          }
          t = b_21;
        }
        return(t);
      }
      t = try_1_0(v_0, t);
    }
    return(t);
  }
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  t = z_8(t);
  return(t);
}
ATerm Imports_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  ATerm q_9 (ATerm t)
  {
    ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,m_9 = NULL;
    ATerm s_9 (ATerm t)
    {
      ATerm n_9 = NULL,o_9 = NULL;
      t = not_null(m_9);
      if(((n_9 != NULL) && (n_9 != t)))
        _fail(t);
      else
        n_9 = t;
      t = not_null(m_9);
      {
        ATerm p_9 = NULL;
        ATerm t_9 (ATerm t)
        {
          t = not_null(p_9);
          if(((o_9 != NULL) && (o_9 != t)))
            _fail(t);
          else
            o_9 = t;
          t = not_null(p_9);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(n_9)), not_null(k_9));
        if(((p_9 != NULL) && (p_9 != t)))
          _fail(t);
        else
          p_9 = t;
        t = t_9(t);
        t = not_null(o_9);
      }
      return(t);
    }
    t = not_null(g_9);
    if(((i_9 != NULL) && (i_9 != t)))
      _fail(t);
    else
      i_9 = t;
    t = not_null(h_9);
    if(((j_9 != NULL) && (j_9 != t)))
      _fail(t);
    else
      j_9 = t;
    t = not_null(g_9);
    {
      ATerm l_9 = NULL;
      ATerm r_9 (ATerm t)
      {
        t = not_null(l_9);
        if(((k_9 != NULL) && (k_9 != t)))
          _fail(t);
        else
          k_9 = t;
        t = not_null(l_9);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_9));
      if(((l_9 != NULL) && (l_9 != t)))
        _fail(t);
      else
        l_9 = t;
      t = r_9(t);
      t = not_null(j_9);
      t = o_73(t);
      if(((m_9 != NULL) && (m_9 != t)))
        _fail(t);
      else
        m_9 = t;
      t = s_9(t);
    }
    return(t);
  }
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  t = not_null(g_9);
  if(match_cons(t, sym_Imports_1))
    {
      h_9 = ATgetArgument(t, 0);
      t = q_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm x_9 = NULL,y_9 = NULL;
    ATerm c_10 (ATerm t)
    {
      ATerm z_9 = NULL;
      t = not_null(y_9);
      if(((z_9 != NULL) && (z_9 != t)))
        _fail(t);
      else
        z_9 = t;
      t = not_null(z_9);
      {
        ATerm x_0 (ATerm t)
        {
          ATerm j_21 = t;
          if((PushChoice() == 0))
            {
              t = Imports_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_21;
            }
          return(t);
        }
        t = filter_1_0(x_0, t);
      }
      return(t);
    }
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    t = not_null(x_9);
    if(match_cons(t, sym_Specification_1))
      {
        y_9 = ATgetArgument(t, 0);
        t = c_10(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1_0(w_0, t);
  t = concat_0_0(t);
  {
    ATerm b_10 = NULL;
    ATerm d_10 (ATerm t)
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
    t = d_10(t);
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(a_10));
  }
  return(t);
}
ATerm _2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  ATerm y_10 (ATerm t)
  {
    ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,s_10 = NULL;
    ATerm a_11 (ATerm t)
    {
      ATerm t_10 = NULL,u_10 = NULL;
      ATerm b_11 (ATerm t)
      {
        ATerm v_10 = NULL,w_10 = NULL;
        t = not_null(u_10);
        if(((v_10 != NULL) && (v_10 != t)))
          _fail(t);
        else
          v_10 = t;
        t = not_null(u_10);
        {
          ATerm x_10 = NULL;
          ATerm c_11 (ATerm t)
          {
            t = not_null(x_10);
            if(((w_10 != NULL) && (w_10 != t)))
              _fail(t);
            else
              w_10 = t;
            t = not_null(x_10);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_10), not_null(v_10)), not_null(q_10));
          if(((x_10 != NULL) && (x_10 != t)))
            _fail(t);
          else
            x_10 = t;
          t = c_11(t);
          t = not_null(w_10);
        }
        return(t);
      }
      t = not_null(s_10);
      if(((t_10 != NULL) && (t_10 != t)))
        _fail(t);
      else
        t_10 = t;
      t = not_null(p_10);
      t = a_66(t);
      if(((u_10 != NULL) && (u_10 != t)))
        _fail(t);
      else
        u_10 = t;
      t = b_11(t);
      return(t);
    }
    t = not_null(k_10);
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    t = not_null(l_10);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = not_null(m_10);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    t = not_null(k_10);
    {
      ATerm r_10 = NULL;
      ATerm z_10 (ATerm t)
      {
        t = not_null(r_10);
        if(((q_10 != NULL) && (q_10 != t)))
          _fail(t);
        else
          q_10 = t;
        t = not_null(r_10);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_10));
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
      t = z_10(t);
      t = not_null(o_10);
      t = z_65(t);
      if(((s_10 != NULL) && (s_10 != t)))
        _fail(t);
      else
        s_10 = t;
      t = a_11(t);
    }
    return(t);
  }
  if(((k_10 != NULL) && (k_10 != t)))
    _fail(t);
  else
    k_10 = t;
  t = not_null(k_10);
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      t = y_10(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  ATerm s_11 (ATerm t)
  {
    ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
    t = not_null(j_11);
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    t = not_null(k_11);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    t = not_null(m_11);
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = not_null(n_11);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_11)), not_null(o_11)), (ATerm) ATinsert(CheckATermList(not_null(r_11)), not_null(q_11)));
    return(t);
  }
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  t = not_null(h_11);
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
      t = not_null(i_11);
      if(match_cons(t, sym__2))
        {
          j_11 = ATgetArgument(t, 0);
          k_11 = ATgetArgument(t, 1);
          t = not_null(l_11);
          if(match_cons(t, sym__2))
            {
              m_11 = ATgetArgument(t, 0);
              n_11 = ATgetArgument(t, 1);
              t = s_11(t);
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
ATerm UnZip3_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  ATerm a_12 (ATerm t)
  {
    ATerm y_11 = NULL,z_11 = NULL;
    t = not_null(w_11);
    if(((y_11 != NULL) && (y_11 != t)))
      _fail(t);
    else
      y_11 = t;
    t = not_null(x_11);
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_11), not_null(z_11));
    return(t);
  }
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = not_null(v_11);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_11 = ATgetFirst((ATermList) t);
      x_11 = (ATerm) ATgetNext((ATermList) t);
      t = a_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm d_12 = NULL;
  ATerm e_12 (ATerm t)
  {
    t = term_k_21;
    return(t);
  }
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = not_null(d_12);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, d_91, t);
  return(t);
}
ATerm unzip_0_0 (ATerm t)
{
  t = unzip_1_0(_id, t);
  return(t);
}
ATerm get_stratego_imports_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  ATerm s_12 (ATerm t)
  {
    ATerm o_12 = NULL;
    t = not_null(n_12);
    if(((o_12 != NULL) && (o_12 != t)))
      _fail(t);
    else
      o_12 = t;
    t = not_null(o_12);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm p_12 = NULL,q_12 = NULL;
        ATerm t_12 (ATerm t)
        {
          ATerm r_12 = NULL;
          t = not_null(q_12);
          if(((r_12 != NULL) && (r_12 != t)))
            _fail(t);
          else
            r_12 = t;
          t = not_null(r_12);
          return(t);
        }
        if(((p_12 != NULL) && (p_12 != t)))
          _fail(t);
        else
          p_12 = t;
        t = not_null(p_12);
        if(match_cons(t, sym_Imports_1))
          {
            q_12 = ATgetArgument(t, 0);
            t = t_12(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = filter_1_0(y_0, t);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = not_null(k_12);
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
      t = not_null(m_12);
      if(match_cons(t, sym_Specification_1))
        {
          n_12 = ATgetArgument(t, 0);
          t = s_12(t);
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
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  ATerm g_13 (ATerm t)
  {
    ATerm b_13 = NULL;
    t = not_null(z_12);
    {
      ATerm c_13 = NULL;
      ATerm i_13 (ATerm t)
      {
        t = not_null(c_13);
        if(((b_13 != NULL) && (b_13 != t)))
          _fail(t);
        else
          b_13 = t;
        t = not_null(c_13);
        return(t);
      }
      t = term_l_21;
      t = ReadFromFile_0_0(t);
      if(((c_13 != NULL) && (c_13 != t)))
        _fail(t);
      else
        c_13 = t;
      t = i_13(t);
      t = not_null(b_13);
    }
    return(t);
  }
  ATerm h_13 (ATerm t)
  {
    ATerm d_13 = NULL,e_13 = NULL;
    t = not_null(a_13);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    t = not_null(z_12);
    {
      ATerm f_13 = NULL;
      ATerm j_13 (ATerm t)
      {
        t = not_null(f_13);
        if(((e_13 != NULL) && (e_13 != t)))
          _fail(t);
        else
          e_13 = t;
        t = not_null(f_13);
        return(t);
      }
      t = not_null(d_13);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((f_13 != NULL) && (f_13 != t)))
        _fail(t);
      else
        f_13 = t;
      t = j_13(t);
      t = not_null(e_13);
    }
    return(t);
  }
  if(((z_12 != NULL) && (z_12 != t)))
    _fail(t);
  else
    z_12 = t;
  t = not_null(z_12);
  if(match_cons(t, sym_stdin_0))
    {
      t = g_13(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          a_13 = ATgetArgument(t, 0);
          t = h_13(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm f_14 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
    t = not_null(r_13);
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = not_null(r_13);
    {
      ATerm w_13 = NULL;
      ATerm g_14 (ATerm t)
      {
        ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
        ATerm h_14 (ATerm t)
        {
          t = not_null(b_14);
          if(((t_13 != NULL) && (t_13 != t)))
            _fail(t);
          else
            t_13 = t;
          t = not_null(d_14);
          if(((v_13 != NULL) && (v_13 != t)))
            _fail(t);
          else
            v_13 = t;
          t = not_null(e_14);
          if(((u_13 != NULL) && (u_13 != t)))
            _fail(t);
          else
            u_13 = t;
          t = not_null(y_13);
          return(t);
        }
        t = not_null(w_13);
        if(((x_13 != NULL) && (x_13 != t)))
          _fail(t);
        else
          x_13 = t;
        t = not_null(w_13);
        t = SSL_explode_term(not_null(x_13));
        if(((y_13 != NULL) && (y_13 != t)))
          _fail(t);
        else
          y_13 = t;
        t = not_null(y_13);
        if(match_cons(t, sym__2))
          {
            z_13 = ATgetArgument(t, 0);
            a_14 = ATgetArgument(t, 1);
            t = not_null(z_13);
            if(match_string(t, ""))
              {
                t = not_null(a_14);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_14 = ATgetFirst((ATermList) t);
                    c_14 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(c_14);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        d_14 = ATgetFirst((ATermList) t);
                        e_14 = (ATerm) ATgetNext((ATermList) t);
                        t = h_14(t);
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
      t = not_null(s_13);
      if(((w_13 != NULL) && (w_13 != t)))
        _fail(t);
      else
        w_13 = t;
      t = g_14(t);
      t = not_null(v_13);
    }
    return(t);
  }
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = f_14(t);
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm l_14 = NULL,n_14 = NULL;
  ATerm p_14 (ATerm t)
  {
    t = not_null(n_14);
    if(((k_14 != NULL) && (k_14 != t)))
      _fail(t);
    else
      k_14 = t;
    t = not_null(n_14);
    return(t);
  }
  ATerm m_14 = NULL;
  ATerm o_14 (ATerm t)
  {
    t = not_null(m_14);
    if(((l_14 != NULL) && (l_14 != t)))
      _fail(t);
    else
      l_14 = t;
    t = not_null(m_14);
    return(t);
  }
  t = term_m_21;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = term_d_22;
      }
    if(((m_14 != NULL) && (m_14 != t)))
      _fail(t);
    else
      m_14 = t;
    t = o_14(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_d_22);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((n_14 != NULL) && (n_14 != t)))
    _fail(t);
  else
    n_14 = t;
  t = p_14(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_14)), term_m_21);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  ATerm x_14 (ATerm t)
  {
    ATerm v_14 = NULL,w_14 = NULL;
    t = not_null(t_14);
    if(((v_14 != NULL) && (v_14 != t)))
      _fail(t);
    else
      v_14 = t;
    t = not_null(u_14);
    if(((w_14 != NULL) && (w_14 != t)))
      _fail(t);
    else
      w_14 = t;
    t = not_null(s_14);
    {
      ATerm e_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(v_14), not_null(w_14));
          ;
          LocalPopChoice(r_22);
        }
      else
        {
          t = e_22;
          t = SSL_subtr(not_null(v_14), not_null(w_14));
        }
    }
    return(t);
  }
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = not_null(s_14);
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      t = x_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm b_15 = NULL,d_15 = NULL;
  ATerm f_15 (ATerm t)
  {
    t = not_null(d_15);
    if(((a_15 != NULL) && (a_15 != t)))
      _fail(t);
    else
      a_15 = t;
    t = not_null(d_15);
    return(t);
  }
  ATerm c_15 = NULL;
  ATerm e_15 (ATerm t)
  {
    t = not_null(c_15);
    if(((b_15 != NULL) && (b_15 != t)))
      _fail(t);
    else
      b_15 = t;
    t = not_null(c_15);
    return(t);
  }
  t = term_s_22;
  {
    ATerm t_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = t_22;
        t = term_d_22;
      }
    if(((c_15 != NULL) && (c_15 != t)))
      _fail(t);
    else
      c_15 = t;
    t = e_15(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), term_d_22);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  t = f_15(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_15)), term_s_22);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(p_110, q_110, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm j_15 (ATerm t)
  {
    ATerm i_15 = NULL;
    t = not_null(h_15);
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = not_null(h_15);
    t = SSL_close_file(not_null(i_15));
    return(t);
  }
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = j_15(t);
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  ATerm r_15 (ATerm t)
  {
    ATerm p_15 = NULL,q_15 = NULL;
    t = not_null(n_15);
    if(((p_15 != NULL) && (p_15 != t)))
      _fail(t);
    else
      p_15 = t;
    t = not_null(o_15);
    if(((q_15 != NULL) && (q_15 != t)))
      _fail(t);
    else
      q_15 = t;
    t = not_null(m_15);
    t = SSL_execvp(not_null(p_15), not_null(q_15));
    return(t);
  }
  if(((m_15 != NULL) && (m_15 != t)))
    _fail(t);
  else
    m_15 = t;
  t = not_null(m_15);
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      t = r_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm t_15 = NULL;
  ATerm v_15 (ATerm t)
  {
    ATerm u_15 = NULL;
    t = not_null(t_15);
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = not_null(t_15);
    t = SSL_int_to_string(not_null(u_15));
    return(t);
  }
  if(((t_15 != NULL) && (t_15 != t)))
    _fail(t);
  else
    t_15 = t;
  t = v_15(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  ATerm n_16 (ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL;
    t = not_null(c_16);
    if(((f_16 != NULL) && (f_16 != t)))
      _fail(t);
    else
      f_16 = t;
    t = not_null(b_16);
    {
      ATerm h_16 = NULL;
      ATerm p_16 (ATerm t)
      {
        t = not_null(h_16);
        if(((g_16 != NULL) && (g_16 != t)))
          _fail(t);
        else
          g_16 = t;
        t = not_null(h_16);
        return(t);
      }
      t = not_null(f_16);
      t = int_to_string_0_0(t);
      if(((h_16 != NULL) && (h_16 != t)))
        _fail(t);
      else
        h_16 = t;
      t = p_16(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_23), not_null(g_16)), term_y_22);
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  ATerm o_16 (ATerm t)
  {
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
    t = not_null(c_16);
    if(((i_16 != NULL) && (i_16 != t)))
      _fail(t);
    else
      i_16 = t;
    t = not_null(d_16);
    if(((j_16 != NULL) && (j_16 != t)))
      _fail(t);
    else
      j_16 = t;
    t = not_null(e_16);
    if(((k_16 != NULL) && (k_16 != t)))
      _fail(t);
    else
      k_16 = t;
    t = not_null(b_16);
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
      t = not_null(j_16);
      t = int_to_string_0_0(t);
      if(((m_16 != NULL) && (m_16 != t)))
        _fail(t);
      else
        m_16 = t;
      t = q_16(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_16)), term_i_23), not_null(l_16)), term_d_23), not_null(i_16));
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  if(((b_16 != NULL) && (b_16 != t)))
    _fail(t);
  else
    b_16 = t;
  t = not_null(b_16);
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_16 = ATgetArgument(t, 0);
      t = n_16(t);
    }
  else
    {
      if(match_cons(t, sym_Signal_3))
        {
          c_16 = ATgetArgument(t, 0);
          d_16 = ATgetArgument(t, 1);
          e_16 = ATgetArgument(t, 2);
          t = o_16(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  ATerm a_17 (ATerm t)
  {
    ATerm v_16 = NULL;
    t = not_null(u_16);
    if(((v_16 != NULL) && (v_16 != t)))
      _fail(t);
    else
      v_16 = t;
    t = not_null(u_16);
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_33), term_s_33), term_o_33), term_f_33), term_a_33), term_y_31), term_u_31), term_c_31), term_y_30), term_v_30), term_i_30), term_e_30), term_a_30), term_f_29), term_y_28), term_t_28), term_p_28), term_l_28), term_h_28), term_d_28), term_x_27), term_i_27), term_p_26), term_c_26), term_m_25), term_u_24), term_m_24), term_c_24);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
              ATerm b_17 (ATerm t)
              {
                t = not_null(y_16);
                if(((v_16 != NULL) && (v_16 != t)))
                  _fail(t);
                else
                  v_16 = t;
                t = not_null(w_16);
                return(t);
              }
              if(((w_16 != NULL) && (w_16 != t)))
                _fail(t);
              else
                w_16 = t;
              t = not_null(w_16);
              if(match_cons(t, sym_Signal_3))
                {
                  x_16 = ATgetArgument(t, 0);
                  y_16 = ATgetArgument(t, 1);
                  z_16 = ATgetArgument(t, 2);
                  t = b_17(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_elem_1_0(z_0, t);
          }
          ;
          LocalPopChoice(k_23);
        }
      else
        {
          t = j_23;
          t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(v_16));
        }
    }
    return(t);
  }
  if(((u_16 != NULL) && (u_16 != t)))
    _fail(t);
  else
    u_16 = t;
  t = a_17(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm x_33;
  x_33 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
      ATerm o_17 (ATerm t)
      {
        ATerm k_17 = NULL,m_17 = NULL;
        t = not_null(i_17);
        if(((k_17 != NULL) && (k_17 != t)))
          _fail(t);
        else
          k_17 = t;
        t = not_null(k_17);
        {
          ATerm j_34 = t;
          if((PushChoice() == 0))
            {
              ATerm l_17 = NULL;
              if(((l_17 != NULL) && (l_17 != t)))
                _fail(t);
              else
                l_17 = t;
              t = not_null(l_17);
              if(match_int(t, -1))
                {
                  t = not_null(l_17);
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
              t = j_34;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          {
            ATerm n_17 = NULL;
            ATerm p_17 (ATerm t)
            {
              t = not_null(n_17);
              if(((m_17 != NULL) && (m_17 != t)))
                _fail(t);
              else
                m_17 = t;
              t = not_null(n_17);
              return(t);
            }
            if(((n_17 != NULL) && (n_17 != t)))
              _fail(t);
            else
              n_17 = t;
            t = p_17(t);
            t = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_17)), term_r_34));
            t = printnl_0_0(t);
          }
        }
        return(t);
      }
      if(((g_17 != NULL) && (g_17 != t)))
        _fail(t);
      else
        g_17 = t;
      t = not_null(g_17);
      if(match_cons(t, sym_WaitStatus_3))
        {
          h_17 = ATgetArgument(t, 0);
          i_17 = ATgetArgument(t, 1);
          j_17 = ATgetArgument(t, 2);
          t = o_17(t);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1_0(a_1, t);
  }
  t = x_33;
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm r_17 = NULL;
  ATerm t_17 (ATerm t)
  {
    ATerm s_17 = NULL;
    t = not_null(r_17);
    if(((s_17 != NULL) && (s_17 != t)))
      _fail(t);
    else
      s_17 = t;
    t = not_null(r_17);
    t = SSL_waitpid(not_null(s_17));
    return(t);
  }
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = t_17(t);
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm y_17 = NULL;
  ATerm d_18 (ATerm t)
  {
    ATerm z_17 = NULL,a_18 = NULL;
    ATerm e_18 (ATerm t)
    {
      ATerm b_18 = NULL;
      t = not_null(a_18);
      if(((b_18 != NULL) && (b_18 != t)))
        _fail(t);
      else
        b_18 = t;
      t = not_null(a_18);
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_18 = NULL;
            ATerm f_18 (ATerm t)
            {
              t = not_null(z_17);
              t = v_102(t);
              return(t);
            }
            if(((c_18 != NULL) && (c_18 != t)))
              _fail(t);
            else
              c_18 = t;
            t = not_null(c_18);
            if(match_int(t, 0))
              {
                t = f_18(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(z_17));
            t = w_102(t);
          }
      }
      return(t);
    }
    t = not_null(y_17);
    if(((z_17 != NULL) && (z_17 != t)))
      _fail(t);
    else
      z_17 = t;
    t = not_null(y_17);
    t = fork_0_0(t);
    if(((a_18 != NULL) && (a_18 != t)))
      _fail(t);
    else
      a_18 = t;
    t = e_18(t);
    return(t);
  }
  if(((y_17 != NULL) && (y_17 != t)))
    _fail(t);
  else
    y_17 = t;
  t = d_18(t);
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm l_18 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
    ATerm u_18 (ATerm t)
    {
      ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
      ATerm v_18 (ATerm t)
      {
        t = not_null(l_18);
        return(t);
      }
      t = not_null(n_18);
      if(((p_18 != NULL) && (p_18 != t)))
        _fail(t);
      else
        p_18 = t;
      t = not_null(o_18);
      if(((l_18 != NULL) && (l_18 != t)))
        _fail(t);
      else
        l_18 = t;
      t = not_null(p_18);
      t = waitpid_0_0(t);
      t = warn_ifsignaled_0_0(t);
      if(((q_18 != NULL) && (q_18 != t)))
        _fail(t);
      else
        q_18 = t;
      t = not_null(q_18);
      if(match_cons(t, sym_WaitStatus_3))
        {
          r_18 = ATgetArgument(t, 0);
          s_18 = ATgetArgument(t, 1);
          t_18 = ATgetArgument(t, 2);
          t = not_null(r_18);
          if(match_int(t, 0))
            {
              t = v_18(t);
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
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(m_18);
    if(match_cons(t, sym__2))
      {
        n_18 = ATgetArgument(t, 0);
        o_18 = ATgetArgument(t, 1);
        t = u_18(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2_0(x_102, b_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  ATerm d_19 (ATerm t)
  {
    ATerm b_19 = NULL,c_19 = NULL;
    t = not_null(z_18);
    if(((b_19 != NULL) && (b_19 != t)))
      _fail(t);
    else
      b_19 = t;
    t = not_null(a_19);
    if(((c_19 != NULL) && (c_19 != t)))
      _fail(t);
    else
      c_19 = t;
    t = not_null(y_18);
    {
      ATerm c_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(c_19));
        t = execvp_0_0(t);
        return(t);
      }
      t = fork_and_wait_1_0(c_1, t);
    }
    return(t);
  }
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  t = not_null(y_18);
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      t = d_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm f_19 = NULL;
  ATerm h_19 (ATerm t)
  {
    ATerm g_19 = NULL;
    t = not_null(f_19);
    if(((g_19 != NULL) && (g_19 != t)))
      _fail(t);
    else
      g_19 = t;
    t = not_null(f_19);
    t = SSL_table_keys(not_null(g_19));
    return(t);
  }
  if(((f_19 != NULL) && (f_19 != t)))
    _fail(t);
  else
    f_19 = t;
  t = h_19(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm r_19 (ATerm t)
  {
    ATerm m_19 = NULL;
    t = not_null(l_19);
    if(((m_19 != NULL) && (m_19 != t)))
      _fail(t);
    else
      m_19 = t;
    t = not_null(l_19);
    t = table_keys_0_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm n_19 = NULL;
        ATerm s_19 (ATerm t)
        {
          ATerm o_19 = NULL,p_19 = NULL;
          t = not_null(n_19);
          if(((o_19 != NULL) && (o_19 != t)))
            _fail(t);
          else
            o_19 = t;
          t = not_null(n_19);
          {
            ATerm q_19 = NULL;
            ATerm t_19 (ATerm t)
            {
              t = not_null(q_19);
              if(((p_19 != NULL) && (p_19 != t)))
                _fail(t);
              else
                p_19 = t;
              t = not_null(q_19);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(o_19));
            t = table_get_0_0(t);
            if(((q_19 != NULL) && (q_19 != t)))
              _fail(t);
            else
              q_19 = t;
            t = t_19(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(p_19));
          }
          return(t);
        }
        if(((n_19 != NULL) && (n_19 != t)))
          _fail(t);
        else
          n_19 = t;
        t = s_19(t);
        return(t);
      }
      t = map_1_0(d_1, t);
    }
    return(t);
  }
  if(((l_19 != NULL) && (l_19 != t)))
    _fail(t);
  else
    l_19 = t;
  t = r_19(t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm d_35;
    d_35 = t;
    {
      ATerm v_19 = NULL;
      ATerm w_19 = NULL;
      ATerm x_19 (ATerm t)
      {
        t = not_null(w_19);
        if(((v_19 != NULL) && (v_19 != t)))
          _fail(t);
        else
          v_19 = t;
        t = not_null(w_19);
        return(t);
      }
      t = term_s_22;
      t = get_config_0_0(t);
      if(((w_19 != NULL) && (w_19 != t)))
        _fail(t);
      else
        w_19 = t;
      t = x_19(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_d_33);
      t = geq_0_0(t);
    }
    t = d_35;
    t = j_102(t);
    return(t);
  }
  t = try_1_0(e_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  ATerm l_20 (ATerm t)
  {
    ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
    t = not_null(d_20);
    if(((f_20 != NULL) && (f_20 != t)))
      _fail(t);
    else
      f_20 = t;
    t = not_null(e_20);
    if(((g_20 != NULL) && (g_20 != t)))
      _fail(t);
    else
      g_20 = t;
    t = not_null(c_20);
    t = (ATerm) ATmakeAppl(sym__2, term_h_35, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_20)));
    t = table_get_0_0(t);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
        ATerm m_20 (ATerm t)
        {
          t = not_null(j_20);
          if(((g_20 != NULL) && (g_20 != t)))
            _fail(t);
          else
            g_20 = t;
          t = not_null(k_20);
          if(((h_20 != NULL) && (h_20 != t)))
            _fail(t);
          else
            h_20 = t;
          t = not_null(i_20);
          return(t);
        }
        if(((i_20 != NULL) && (i_20 != t)))
          _fail(t);
        else
          i_20 = t;
        t = not_null(i_20);
        if(match_cons(t, sym__2))
          {
            j_20 = ATgetArgument(t, 0);
            k_20 = ATgetArgument(t, 1);
            t = m_20(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(f_1, t);
    }
    t = not_null(h_20);
    return(t);
  }
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  t = not_null(c_20);
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
      t = l_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm n_20 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = b_82(t);
      t = n_20(t);
      return(t);
    }
    t = try_1_0(g_1, t);
    return(t);
  }
  t = n_20(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm i_35;
  i_35 = t;
  {
    ATerm h_1 (ATerm t)
    {
      t = term_k_35;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm l_35 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_35;
          }
      }
      return(t);
    }
    t = repeat_1_0(h_1, t);
  }
  t = i_35;
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm m_35;
  m_35 = t;
  {
    ATerm p_20 = NULL;
    ATerm q_20 = NULL;
    ATerm r_20 (ATerm t)
    {
      t = not_null(q_20);
      if(((p_20 != NULL) && (p_20 != t)))
        _fail(t);
      else
        p_20 = t;
      t = not_null(q_20);
      return(t);
    }
    if(((q_20 != NULL) && (q_20 != t)))
      _fail(t);
    else
      q_20 = t;
    t = r_20(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATinsert(ATempty, not_null(p_20)));
    t = printnl_0_0(t);
  }
  t = m_35;
  return(t);
}
ATerm say_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm n_35;
  n_35 = t;
  t = s_100(t);
  t = debug_0_0(t);
  t = n_35;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm o_35;
    o_35 = t;
    {
      ATerm t_20 = NULL;
      ATerm u_20 = NULL;
      ATerm v_20 (ATerm t)
      {
        t = not_null(u_20);
        if(((t_20 != NULL) && (t_20 != t)))
          _fail(t);
        else
          t_20 = t;
        t = not_null(u_20);
        return(t);
      }
      t = term_s_22;
      t = get_config_0_0(t);
      if(((u_20 != NULL) && (u_20 != t)))
        _fail(t);
      else
        u_20 = t;
      t = v_20(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), term_n_28);
      t = geq_0_0(t);
    }
    t = o_35;
    t = i_102(t);
    return(t);
  }
  t = try_1_0(i_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm p_35;
    p_35 = t;
    {
      ATerm x_20 = NULL;
      ATerm y_20 = NULL;
      ATerm z_20 (ATerm t)
      {
        t = not_null(y_20);
        if(((x_20 != NULL) && (x_20 != t)))
          _fail(t);
        else
          x_20 = t;
        t = not_null(y_20);
        return(t);
      }
      t = term_s_22;
      t = get_config_0_0(t);
      if(((y_20 != NULL) && (y_20 != t)))
        _fail(t);
      else
        y_20 = t;
      t = z_20(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_20), term_e_25);
      t = geq_0_0(t);
    }
    t = p_35;
    t = k_102(t);
    return(t);
  }
  t = try_1_0(l_1, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm union_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  ATerm h_21 (ATerm t)
  {
    ATerm f_21 = NULL,g_21 = NULL;
    t = not_null(d_21);
    if(((g_21 != NULL) && (g_21 != t)))
      _fail(t);
    else
      g_21 = t;
    t = not_null(e_21);
    if(((f_21 != NULL) && (f_21 != t)))
      _fail(t);
    else
      f_21 = t;
    t = not_null(g_21);
    {
      ATerm i_21 (ATerm t)
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(f_21);
            ;
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            {
              ATerm s_35 = t;
              int t_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = not_null(f_21);
                    return(t);
                  }
                  t = HdMember_p__2_0(t_92, m_1, t);
                  t = i_21(t);
                  ;
                  LocalPopChoice(t_35);
                }
              else
                {
                  t = s_35;
                  t = Cons_2_0(_id, i_21, t);
                }
            }
          }
        return(t);
      }
      t = i_21(t);
    }
    return(t);
  }
  if(((c_21 != NULL) && (c_21 != t)))
    _fail(t);
  else
    c_21 = t;
  t = not_null(c_21);
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
      t = h_21(t);
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
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  ATerm y_21 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
    t = not_null(o_21);
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = not_null(p_21);
    if(((s_21 != NULL) && (s_21 != t)))
      _fail(t);
    else
      s_21 = t;
    t = not_null(q_21);
    if(((t_21 != NULL) && (t_21 != t)))
      _fail(t);
    else
      t_21 = t;
    t = not_null(n_21);
    {
      ATerm u_35;
      u_35 = t;
      {
        ATerm u_21 = NULL;
        ATerm v_21 = NULL,x_21 = NULL;
        ATerm a_22 (ATerm t)
        {
          t = not_null(x_21);
          if(((u_21 != NULL) && (u_21 != t)))
            _fail(t);
          else
            u_21 = t;
          t = not_null(x_21);
          return(t);
        }
        ATerm w_21 = NULL;
        ATerm z_21 (ATerm t)
        {
          t = not_null(w_21);
          if(((v_21 != NULL) && (v_21 != t)))
            _fail(t);
          else
            v_21 = t;
          t = not_null(w_21);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), not_null(s_21));
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_0_0(t);
              ;
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              t = (ATerm) ATempty;
            }
          if(((w_21 != NULL) && (w_21 != t)))
            _fail(t);
          else
            w_21 = t;
          t = z_21(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), not_null(t_21));
        t = union_0_0(t);
        if(((x_21 != NULL) && (x_21 != t)))
          _fail(t);
        else
          x_21 = t;
        t = a_22(t);
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_21), not_null(s_21), not_null(u_21));
        t = set_0_0(t);
      }
      t = u_35;
    }
    return(t);
  }
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = not_null(n_21);
  if(match_cons(t, sym__3))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
      q_21 = ATgetArgument(t, 2);
      t = y_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  ATerm p_22 (ATerm t)
  {
    ATerm i_22 = NULL,j_22 = NULL;
    t = not_null(g_22);
    if(((j_22 != NULL) && (j_22 != t)))
      _fail(t);
    else
      j_22 = t;
    t = not_null(h_22);
    if(((i_22 != NULL) && (i_22 != t)))
      _fail(t);
    else
      i_22 = t;
    t = not_null(i_22);
    {
      ATerm n_1 (ATerm t)
      {
        ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
        ATerm q_22 (ATerm t)
        {
          ATerm n_22 = NULL,o_22 = NULL;
          t = not_null(l_22);
          if(((n_22 != NULL) && (n_22 != t)))
            _fail(t);
          else
            n_22 = t;
          t = not_null(m_22);
          if(((o_22 != NULL) && (o_22 != t)))
            _fail(t);
          else
            o_22 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(j_22), not_null(n_22), not_null(o_22));
          t = u_106(t);
          return(t);
        }
        if(((k_22 != NULL) && (k_22 != t)))
          _fail(t);
        else
          k_22 = t;
        t = not_null(k_22);
        if(match_cons(t, sym__2))
          {
            l_22 = ATgetArgument(t, 0);
            m_22 = ATgetArgument(t, 1);
            t = q_22(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1_0(n_1, t);
    }
    return(t);
  }
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  t = not_null(f_22);
  if(match_cons(t, sym__2))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
      t = p_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  ATerm a_23 (ATerm t)
  {
    ATerm w_22 = NULL;
    t = not_null(u_22);
    if(((w_22 != NULL) && (w_22 != t)))
      _fail(t);
    else
      w_22 = t;
    t = not_null(v_22);
    t = SSL_fclose(not_null(w_22));
    return(t);
  }
  ATerm b_23 (ATerm t)
  {
    ATerm z_22 = NULL;
    t = not_null(v_22);
    if(((z_22 != NULL) && (z_22 != t)))
      _fail(t);
    else
      z_22 = t;
    t = not_null(v_22);
    t = SSL_fclose(not_null(z_22));
    return(t);
  }
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = not_null(v_22);
  if(match_cons(t, sym_Stream_1))
    {
      u_22 = ATgetArgument(t, 0);
      {
        ATerm n_36 = t;
        int o_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_23(t);
            ;
            LocalPopChoice(o_36);
          }
        else
          {
            t = n_36;
            t = b_23(t);
          }
      }
    }
  else
    {
      t = b_23(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  ATerm h_23 (ATerm t)
  {
    ATerm g_23 = NULL;
    t = not_null(f_23);
    if(((g_23 != NULL) && (g_23 != t)))
      _fail(t);
    else
      g_23 = t;
    t = not_null(e_23);
    t = SSL_read_term_from_stream(not_null(g_23));
    return(t);
  }
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  t = not_null(e_23);
  if(match_cons(t, sym_Stream_1))
    {
      f_23 = ATgetArgument(t, 0);
      t = h_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  ATerm s_23 (ATerm t)
  {
    ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
    t = not_null(m_23);
    if(((o_23 != NULL) && (o_23 != t)))
      _fail(t);
    else
      o_23 = t;
    t = not_null(n_23);
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    t = not_null(l_23);
    t = SSL_fopen(not_null(o_23), not_null(p_23));
    {
      ATerm r_23 = NULL;
      ATerm t_23 (ATerm t)
      {
        t = not_null(r_23);
        if(((q_23 != NULL) && (q_23 != t)))
          _fail(t);
        else
          q_23 = t;
        t = not_null(r_23);
        return(t);
      }
      if(((r_23 != NULL) && (r_23 != t)))
        _fail(t);
      else
        r_23 = t;
      t = t_23(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_23));
    }
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
      t = s_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm x_23 (ATerm t)
  {
    ATerm w_23 = NULL;
    t = not_null(v_23);
    if(((w_23 != NULL) && (w_23 != t)))
      _fail(t);
    else
      w_23 = t;
    t = not_null(v_23);
    t = SSL_is_string(not_null(w_23));
    return(t);
  }
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = x_23(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_23 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm a_24 = NULL;
    ATerm b_24 (ATerm t)
    {
      t = not_null(a_24);
      if(((z_23 != NULL) && (z_23 != t)))
        _fail(t);
      else
        z_23 = t;
      t = not_null(a_24);
      return(t);
    }
    if(((a_24 != NULL) && (a_24 != t)))
      _fail(t);
    else
      a_24 = t;
    t = b_24(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_23));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_24 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm e_24 = NULL;
    ATerm f_24 (ATerm t)
    {
      t = not_null(e_24);
      if(((d_24 != NULL) && (d_24 != t)))
        _fail(t);
      else
        d_24 = t;
      t = not_null(e_24);
      return(t);
    }
    if(((e_24 != NULL) && (e_24 != t)))
      _fail(t);
    else
      e_24 = t;
    t = f_24(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_24));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_24 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm i_24 = NULL;
    ATerm j_24 (ATerm t)
    {
      t = not_null(i_24);
      if(((h_24 != NULL) && (h_24 != t)))
        _fail(t);
      else
        h_24 = t;
      t = not_null(i_24);
      return(t);
    }
    if(((i_24 != NULL) && (i_24 != t)))
      _fail(t);
    else
      i_24 = t;
    t = j_24(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_24));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm o_24 = NULL;
  ATerm p_24 (ATerm t)
  {
    t = not_null(o_24);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm q_24 (ATerm t)
  {
    t = not_null(o_24);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm r_24 (ATerm t)
  {
    t = not_null(o_24);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((o_24 != NULL) && (o_24 != t)))
    _fail(t);
  else
    o_24 = t;
  t = not_null(o_24);
  if(match_cons(t, sym_stderr_0))
    {
      t = p_24(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_24(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = r_24(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  ATerm c_25 (ATerm t)
  {
    t = not_null(w_24);
    {
      ATerm a_37 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(b_37);
        }
      else
        {
          t = a_37;
          {
            ATerm c_37 = t;
            int d_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm z_24 = NULL,a_25 = NULL;
                  ATerm d_25 (ATerm t)
                  {
                    ATerm b_25 = NULL;
                    t = not_null(a_25);
                    if(((b_25 != NULL) && (b_25 != t)))
                      _fail(t);
                    else
                      b_25 = t;
                    t = not_null(b_25);
                    return(t);
                  }
                  if(((z_24 != NULL) && (z_24 != t)))
                    _fail(t);
                  else
                    z_24 = t;
                  t = not_null(z_24);
                  if(match_cons(t, sym_Path_1))
                    {
                      a_25 = ATgetArgument(t, 0);
                      t = d_25(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(r_1, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(d_37);
              }
            else
              {
                t = c_37;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((w_24 != NULL) && (w_24 != t)))
    _fail(t);
  else
    w_24 = t;
  t = not_null(w_24);
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
      t = c_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_25 = NULL;
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_25 = NULL;
      ATerm h_25 = NULL;
      ATerm k_25 (ATerm t)
      {
        t = not_null(h_25);
        if(((g_25 != NULL) && (g_25 != t)))
          _fail(t);
        else
          g_25 = t;
        t = not_null(h_25);
        return(t);
      }
      if(((h_25 != NULL) && (h_25 != t)))
        _fail(t);
      else
        h_25 = t;
      t = k_25(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), term_w_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_x_37;
          return(t);
        }
        t = debug_1_0(s_1, t);
        _fail(t);
      }
    }
  {
    ATerm y_37;
    y_37 = t;
    {
      ATerm j_25 = NULL;
      ATerm l_25 (ATerm t)
      {
        t = not_null(j_25);
        if(((i_25 != NULL) && (i_25 != t)))
          _fail(t);
        else
          i_25 = t;
        t = not_null(j_25);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((j_25 != NULL) && (j_25 != t)))
        _fail(t);
      else
        j_25 = t;
      t = l_25(t);
    }
    t = y_37;
    t = fclose_0_0(t);
    t = not_null(i_25);
  }
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm n_25 = NULL;
  ATerm o_25 = NULL;
  ATerm p_25 (ATerm t)
  {
    t = not_null(o_25);
    if(((n_25 != NULL) && (n_25 != t)))
      _fail(t);
    else
      n_25 = t;
    t = not_null(o_25);
    return(t);
  }
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  t = p_25(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_25), (ATerm) ATinsert(ATempty, term_z_37));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(b_38);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_38;
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_38 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_38;
              }
            {
              ATerm t_1 (ATerm t)
              {
                t = term_f_38;
                return(t);
              }
              t = debug_1_0(t_1, t);
            }
            ;
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            {
              ATerm x_1 (ATerm t)
              {
                t = term_g_38;
                return(t);
              }
              t = debug_1_0(x_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_25 = NULL;
  ATerm w_25 (ATerm t)
  {
    ATerm t_25 = NULL,u_25 = NULL;
    t = not_null(s_25);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = not_null(s_25);
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          t = term_v_38;
          return(t);
        }
        t = debug_1_0(z_1, t);
        return(t);
      }
      t = if_verbose5_1_0(y_1, t);
      {
        ATerm w_38 = t;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_35, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_25)));
            t = table_get_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_38;
          }
        {
          ATerm x_38;
          x_38 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_h_35, term_n_39, (ATerm) ATinsert(ATempty, not_null(t_25)));
          t = table_put_0_0(t);
          t = x_38;
          {
            ATerm a_2 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = term_o_39;
                return(t);
              }
              t = debug_1_0(b_2, t);
              return(t);
            }
            t = if_verbose4_1_0(a_2, t);
            t = read_repository_file_0_0(t);
            {
              ATerm c_2 (ATerm t)
              {
                ATerm d_2 (ATerm t)
                {
                  t = term_u_39;
                  return(t);
                }
                t = say_1_0(d_2, t);
                return(t);
              }
              t = if_verbose6_1_0(c_2, t);
              {
                ATerm v_25 = NULL;
                ATerm x_25 (ATerm t)
                {
                  t = not_null(v_25);
                  if(((u_25 != NULL) && (u_25 != t)))
                    _fail(t);
                  else
                    u_25 = t;
                  t = not_null(v_25);
                  return(t);
                }
                if(((v_25 != NULL) && (v_25 != t)))
                  _fail(t);
                else
                  v_25 = t;
                t = x_25(t);
                t = (ATerm) ATmakeAppl(sym__2, term_h_35, not_null(u_25));
                t = table_putlist_1_0(table_append_0_0, t);
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm f_2 (ATerm t)
                    {
                      t = term_v_39;
                      return(t);
                    }
                    t = say_1_0(f_2, t);
                    return(t);
                  }
                  t = if_verbose6_1_0(e_2, t);
                  t = (ATerm) ATmakeAppl(sym__3, term_h_35, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_25)), (ATerm) ATempty);
                  t = table_put_0_0(t);
                  {
                    ATerm g_2 (ATerm t)
                    {
                      ATerm h_2 (ATerm t)
                      {
                        t = term_u_39;
                        return(t);
                      }
                      t = say_1_0(h_2, t);
                      return(t);
                    }
                    t = if_verbose4_1_0(g_2, t);
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
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  t = w_25(t);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm z_25 = NULL;
  ATerm b_26 (ATerm t)
  {
    ATerm a_26 = NULL;
    t = not_null(z_25);
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = not_null(z_25);
    t = SSL_getenv(not_null(a_26));
    return(t);
  }
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  t = b_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_39 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = w_39;
      {
        ATerm p_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_40;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(q_40);
          }
        else
          {
            t = p_40;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm j_2 (ATerm t)
    {
      t = term_b_41;
      return(t);
    }
    t = debug_1_0(j_2, t);
    return(t);
  }
  t = if_verbose5_1_0(i_2, t);
  {
    ATerm c_41;
    c_41 = t;
    {
      ATerm j_41 = t;
      int k_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_41;
          t = table_get_0_0(t);
          ;
          LocalPopChoice(k_41);
        }
      else
        {
          t = j_41;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t = xtc_import_0_0(t);
        }
    }
    t = c_41;
    {
      ATerm m_2 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          t = term_m_41;
          return(t);
        }
        t = debug_1_0(n_2, t);
        return(t);
      }
      t = if_verbose5_1_0(m_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm p_2 (ATerm t)
        {
          t = term_y_41;
          return(t);
        }
        t = debug_1_0(p_2, t);
        return(t);
      }
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm c_42 = t;
        int d_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(d_42);
          }
        else
          {
            t = c_42;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm q_2 (ATerm t)
          {
            ATerm r_2 (ATerm t)
            {
              t = term_y_41;
              return(t);
            }
            t = debug_1_0(r_2, t);
            return(t);
          }
          t = if_verbose5_1_0(q_2, t);
        }
      }
      ;
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      {
        ATerm d_26 = NULL;
        ATerm e_26 = NULL;
        ATerm f_26 (ATerm t)
        {
          t = not_null(e_26);
          if(((d_26 != NULL) && (d_26 != t)))
            _fail(t);
          else
            d_26 = t;
          t = not_null(e_26);
          return(t);
        }
        if(((e_26 != NULL) && (e_26 != t)))
          _fail(t);
        else
          e_26 = t;
        t = f_26(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_42), not_null(d_26)), term_e_42);
        t = error_0_0(t);
        {
          ATerm s_2 (ATerm t)
          {
            t = term_h_35;
            t = table_getlist_0_0(t);
            {
              ATerm t_2 (ATerm t)
              {
                t = term_l_42;
                return(t);
              }
              t = debug_1_0(t_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(s_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm i_26 = NULL;
  ATerm m_42;
  m_42 = t;
  {
    ATerm j_26 = NULL;
    ATerm m_26 (ATerm t)
    {
      t = not_null(j_26);
      if(((i_26 != NULL) && (i_26 != t)))
        _fail(t);
      else
        i_26 = t;
      t = not_null(j_26);
      return(t);
    }
    t = g_110(t);
    t = xtc_find_warning_0_0(t);
    if(((j_26 != NULL) && (j_26 != t)))
      _fail(t);
    else
      j_26 = t;
    t = m_26(t);
  }
  t = m_42;
  {
    ATerm n_42;
    n_42 = t;
    {
      ATerm k_26 = NULL;
      ATerm l_26 = NULL;
      ATerm n_26 (ATerm t)
      {
        t = not_null(l_26);
        if(((k_26 != NULL) && (k_26 != t)))
          _fail(t);
        else
          k_26 = t;
        t = not_null(l_26);
        return(t);
      }
      if(((l_26 != NULL) && (l_26 != t)))
        _fail(t);
      else
        l_26 = t;
      t = n_26(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), not_null(k_26));
      t = call_0_0(t);
    }
    t = n_42;
  }
  return(t);
}
ATerm assert_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  ATerm f_27 (ATerm t)
  {
    ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
    t = not_null(u_26);
    if(((w_26 != NULL) && (w_26 != t)))
      _fail(t);
    else
      w_26 = t;
    t = not_null(v_26);
    if(((x_26 != NULL) && (x_26 != t)))
      _fail(t);
    else
      x_26 = t;
    t = not_null(t_26);
    {
      ATerm o_42;
      o_42 = t;
      {
        ATerm b_27 = NULL;
        ATerm g_27 (ATerm t)
        {
          ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
          ATerm h_27 (ATerm t)
          {
            t = not_null(d_27);
            if(((z_26 != NULL) && (z_26 != t)))
              _fail(t);
            else
              z_26 = t;
            t = not_null(e_27);
            if(((a_27 != NULL) && (a_27 != t)))
              _fail(t);
            else
              a_27 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_26), term_p_42, (ATerm) ATinsert(CheckATermList(not_null(a_27)), (ATerm) ATinsert(CheckATermList(not_null(z_26)), not_null(w_26))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(b_27);
          if(((y_26 != NULL) && (y_26 != t)))
            _fail(t);
          else
            y_26 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(y_26), not_null(w_26), not_null(x_26));
          t = table_push_0_0(t);
          {
            ATerm q_42 = t;
            int r_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), term_p_42);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(r_42);
              }
            else
              {
                t = q_42;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((c_27 != NULL) && (c_27 != t)))
              _fail(t);
            else
              c_27 = t;
            t = not_null(c_27);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_27 = ATgetFirst((ATermList) t);
                e_27 = (ATerm) ATgetNext((ATermList) t);
                t = h_27(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = j_99(t);
        if(((b_27 != NULL) && (b_27 != t)))
          _fail(t);
        else
          b_27 = t;
        t = g_27(t);
      }
      t = o_42;
    }
    return(t);
  }
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  t = not_null(t_26);
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
      t = f_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm s_42;
  s_42 = t;
  t = v_100(t);
  {
    ATerm u_2 (ATerm t)
    {
      t = term_t_42;
      return(t);
    }
    t = debug_1_0(u_2, t);
  }
  t = s_42;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  ATerm v_27 (ATerm t)
  {
    ATerm p_27 = NULL;
    t = not_null(m_27);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    t = not_null(m_27);
    {
      ATerm u_42 = t;
      if((PushChoice() == 0))
        {
          ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
          if(((q_27 != NULL) && (q_27 != t)))
            _fail(t);
          else
            q_27 = t;
          t = not_null(q_27);
          if(match_cons(t, sym__2))
            {
              r_27 = ATgetArgument(t, 0);
              s_27 = ATgetArgument(t, 1);
              t = not_null(q_27);
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
          t = u_42;
        }
      {
        ATerm v_2 (ATerm t)
        {
          t = term_c_43;
          return(t);
        }
        t = obsolete_1_0(v_2, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), term_f_17);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm w_27 (ATerm t)
  {
    ATerm t_27 = NULL,u_27 = NULL;
    t = not_null(n_27);
    if(((t_27 != NULL) && (t_27 != t)))
      _fail(t);
    else
      t_27 = t;
    t = not_null(o_27);
    if(((u_27 != NULL) && (u_27 != t)))
      _fail(t);
    else
      u_27 = t;
    t = not_null(m_27);
    t = SSL_open_file(not_null(t_27), not_null(u_27));
    return(t);
  }
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = not_null(m_27);
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
      {
        ATerm d_43 = t;
        int e_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_27(t);
            ;
            LocalPopChoice(e_43);
          }
        else
          {
            t = d_43;
            t = w_27(t);
          }
      }
    }
  else
    {
      t = v_27(t);
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm y_27 = NULL;
  ATerm z_27 = NULL;
  ATerm x_28 (ATerm t)
  {
    t = not_null(z_27);
    if(((y_27 != NULL) && (y_27 != t)))
      _fail(t);
    else
      y_27 = t;
    t = not_null(z_27);
    return(t);
  }
  t = term_g_43;
  t = new_0_0(t);
  if(((z_27 != NULL) && (z_27 != t)))
    _fail(t);
  else
    z_27 = t;
  t = x_28(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_27), term_c_44);
  t = conc_strings_0_0(t);
  {
    ATerm w_2 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(w_2, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_28 = NULL;
  ATerm b_29 (ATerm t)
  {
    ATerm a_29 = NULL;
    t = not_null(z_28);
    if(((a_29 != NULL) && (a_29 != t)))
      _fail(t);
    else
      a_29 = t;
    t = not_null(z_28);
    {
      ATerm d_44;
      d_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), term_f_17);
      t = open_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), term_g_43);
      {
        ATerm x_2 (ATerm t)
        {
          t = term_e_44;
          return(t);
        }
        t = assert_1_0(x_2, t);
      }
      t = d_44;
    }
    return(t);
  }
  t = new_file_0_0(t);
  if(((z_28 != NULL) && (z_28 != t)))
    _fail(t);
  else
    z_28 = t;
  t = b_29(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  ATerm u_29 (ATerm t)
  {
    ATerm l_29 = NULL;
    t = not_null(j_29);
    {
      ATerm m_29 = NULL;
      ATerm w_29 (ATerm t)
      {
        ATerm n_29 = NULL;
        t = not_null(m_29);
        if(((l_29 != NULL) && (l_29 != t)))
          _fail(t);
        else
          l_29 = t;
        t = not_null(m_29);
        {
          ATerm o_29 = NULL;
          ATerm x_29 (ATerm t)
          {
            t = not_null(o_29);
            if(((n_29 != NULL) && (n_29 != t)))
              _fail(t);
            else
              n_29 = t;
            t = not_null(o_29);
            return(t);
          }
          t = o_0(t);
          if(((o_29 != NULL) && (o_29 != t)))
            _fail(t);
          else
            o_29 = t;
          t = x_29(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_29), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_29)), term_h_18));
          t = conc_0_0(t);
          t = xtc_command_1_0(n_0, t);
          t = not_null(l_29);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((m_29 != NULL) && (m_29 != t)))
        _fail(t);
      else
        m_29 = t;
      t = w_29(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_29));
    }
    return(t);
  }
  ATerm v_29 (ATerm t)
  {
    ATerm p_29 = NULL,q_29 = NULL;
    t = not_null(k_29);
    if(((p_29 != NULL) && (p_29 != t)))
      _fail(t);
    else
      p_29 = t;
    t = not_null(j_29);
    {
      ATerm r_29 = NULL;
      ATerm y_29 (ATerm t)
      {
        ATerm s_29 = NULL;
        t = not_null(r_29);
        if(((q_29 != NULL) && (q_29 != t)))
          _fail(t);
        else
          q_29 = t;
        t = not_null(r_29);
        {
          ATerm t_29 = NULL;
          ATerm z_29 (ATerm t)
          {
            t = not_null(t_29);
            if(((s_29 != NULL) && (s_29 != t)))
              _fail(t);
            else
              s_29 = t;
            t = not_null(t_29);
            return(t);
          }
          t = o_0(t);
          if(((t_29 != NULL) && (t_29 != t)))
            _fail(t);
          else
            t_29 = t;
          t = z_29(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_29), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_29)), term_h_18), not_null(p_29)), term_n_44));
          t = conc_0_0(t);
          t = xtc_command_1_0(n_0, t);
          t = not_null(q_29);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = not_null(p_29);
      t = xtc_new_file_0_0(t);
      if(((r_29 != NULL) && (r_29 != t)))
        _fail(t);
      else
        r_29 = t;
      t = y_29(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_29));
    }
    return(t);
  }
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = not_null(j_29);
  if(match_cons(t, sym_stdin_0))
    {
      t = u_29(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          k_29 = ATgetArgument(t, 0);
          t = v_29(t);
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
  ATerm l_30 = NULL;
  ATerm s_30 (ATerm t)
  {
    ATerm m_30 = NULL,n_30 = NULL,p_30 = NULL;
    t = not_null(l_30);
    if(((m_30 != NULL) && (m_30 != t)))
      _fail(t);
    else
      m_30 = t;
    t = not_null(l_30);
    {
      ATerm r_44;
      r_44 = t;
      {
        ATerm o_30 = NULL;
        ATerm t_30 (ATerm t)
        {
          t = not_null(o_30);
          if(((n_30 != NULL) && (n_30 != t)))
            _fail(t);
          else
            n_30 = t;
          t = not_null(o_30);
          return(t);
        }
        t = SSLgetAnnotations(not_null(m_30));
        if(((o_30 != NULL) && (o_30 != t)))
          _fail(t);
        else
          o_30 = t;
        t = t_30(t);
      }
      t = r_44;
      {
        ATerm q_30 = NULL;
        ATerm u_30 (ATerm t)
        {
          t = not_null(q_30);
          if(((p_30 != NULL) && (p_30 != t)))
            _fail(t);
          else
            p_30 = t;
          t = not_null(q_30);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(n_30));
        if(((q_30 != NULL) && (q_30 != t)))
          _fail(t);
        else
          q_30 = t;
        t = u_30(t);
        t = not_null(p_30);
      }
    }
    return(t);
  }
  if(((l_30 != NULL) && (l_30 != t)))
    _fail(t);
  else
    l_30 = t;
  t = not_null(l_30);
  if(match_cons(t, sym_stdin_0))
    {
      t = s_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm z_72 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  ATerm o_31 (ATerm t)
  {
    ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,k_31 = NULL;
    ATerm q_31 (ATerm t)
    {
      ATerm l_31 = NULL,m_31 = NULL;
      t = not_null(k_31);
      if(((l_31 != NULL) && (l_31 != t)))
        _fail(t);
      else
        l_31 = t;
      t = not_null(k_31);
      {
        ATerm n_31 = NULL;
        ATerm r_31 (ATerm t)
        {
          t = not_null(n_31);
          if(((m_31 != NULL) && (m_31 != t)))
            _fail(t);
          else
            m_31 = t;
          t = not_null(n_31);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(l_31)), not_null(i_31));
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = r_31(t);
        t = not_null(m_31);
      }
      return(t);
    }
    t = not_null(e_31);
    if(((g_31 != NULL) && (g_31 != t)))
      _fail(t);
    else
      g_31 = t;
    t = not_null(f_31);
    if(((h_31 != NULL) && (h_31 != t)))
      _fail(t);
    else
      h_31 = t;
    t = not_null(e_31);
    {
      ATerm j_31 = NULL;
      ATerm p_31 (ATerm t)
      {
        t = not_null(j_31);
        if(((i_31 != NULL) && (i_31 != t)))
          _fail(t);
        else
          i_31 = t;
        t = not_null(j_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_31));
      if(((j_31 != NULL) && (j_31 != t)))
        _fail(t);
      else
        j_31 = t;
      t = p_31(t);
      t = not_null(h_31);
      t = z_72(t);
      if(((k_31 != NULL) && (k_31 != t)))
        _fail(t);
      else
        k_31 = t;
      t = q_31(t);
    }
    return(t);
  }
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  t = not_null(e_31);
  if(match_cons(t, sym_FILE_1))
    {
      f_31 = ATgetArgument(t, 0);
      t = o_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm t)
{
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_44 = t;
      int v_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_44);
        }
      else
        {
          t = u_44;
          t = stdin_0_0(t);
        }
      LocalPopChoice(t_44);
      t = xtc_transform_file_2_0(i_110, j_110, t);
    }
  else
    {
      t = s_44;
      t = xtc_transform_term_2_0(i_110, j_110, t);
    }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_32 = NULL;
      ATerm a_3 (ATerm t)
      {
        ATerm y_44 = t;
        if((PushChoice() == 0))
          {
            ATerm b_32 = NULL;
            if(((b_32 != NULL) && (b_32 != t)))
              _fail(t);
            else
              b_32 = t;
            t = not_null(b_32);
            if(match_string(t, "rtree"))
              {
                t = not_null(b_32);
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
            t = y_44;
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm c_32 = NULL;
        ATerm n_32 (ATerm t)
        {
          t = not_null(c_32);
          if(((a_32 != NULL) && (a_32 != t)))
            _fail(t);
          else
            a_32 = t;
          t = not_null(c_32);
          return(t);
        }
        if(((c_32 != NULL) && (c_32 != t)))
          _fail(t);
        else
          c_32 = t;
        t = n_32(t);
        return(t);
      }
      t = _2_0(a_3, b_3, t);
      t = Snd_0_0(t);
      {
        ATerm z_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              t = term_b_45;
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              ATerm d_32 = NULL,f_32 = NULL,h_32 = NULL;
              ATerm d_45;
              d_45 = t;
              {
                ATerm e_32 = NULL;
                ATerm o_32 (ATerm t)
                {
                  t = not_null(e_32);
                  if(((d_32 != NULL) && (d_32 != t)))
                    _fail(t);
                  else
                    d_32 = t;
                  t = not_null(e_32);
                  return(t);
                }
                t = pass_verbose_0_0(t);
                if(((e_32 != NULL) && (e_32 != t)))
                  _fail(t);
                else
                  e_32 = t;
                t = o_32(t);
              }
              t = d_45;
              {
                ATerm e_45;
                e_45 = t;
                {
                  ATerm g_32 = NULL;
                  ATerm p_32 (ATerm t)
                  {
                    t = not_null(g_32);
                    if(((f_32 != NULL) && (f_32 != t)))
                      _fail(t);
                    else
                      f_32 = t;
                    t = not_null(g_32);
                    return(t);
                  }
                  t = pass_keep_0_0(t);
                  if(((g_32 != NULL) && (g_32 != t)))
                    _fail(t);
                  else
                    g_32 = t;
                  t = p_32(t);
                }
                t = e_45;
                {
                  ATerm i_32 = NULL;
                  ATerm q_32 (ATerm t)
                  {
                    t = not_null(i_32);
                    if(((h_32 != NULL) && (h_32 != t)))
                      _fail(t);
                    else
                      h_32 = t;
                    t = not_null(i_32);
                    return(t);
                  }
                  t = term_j_45;
                  t = get_config_0_0(t);
                  if(((i_32 != NULL) && (i_32 != t)))
                    _fail(t);
                  else
                    i_32 = t;
                  t = q_32(t);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_32)), not_null(f_32)), not_null(d_32));
                  t = concat_0_0(t);
                }
              }
              return(t);
            }
            t = xtc_transform_2_0(c_3, h_3, t);
            t = read_from_0_0(t);
            ;
            LocalPopChoice(a_45);
          }
        else
          {
            t = z_44;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_32)), term_k_45);
            t = fatal_error_0_0(t);
          }
      }
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      {
        ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
        ATerm r_32 (ATerm t)
        {
          ATerm m_32 = NULL;
          t = not_null(l_32);
          if(((m_32 != NULL) && (m_32 != t)))
            _fail(t);
          else
            m_32 = t;
          t = not_null(j_32);
          t = Snd_0_0(t);
          {
            ATerm d_46 = t;
            int e_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = read_from_0_0(t);
                ;
                LocalPopChoice(e_46);
              }
            else
              {
                t = d_46;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_32)), term_k_45);
                t = fatal_error_0_0(t);
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
            t = not_null(k_32);
            if(match_string(t, "rtree"))
              {
                t = r_32(t);
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
  return(t);
}
ATerm debug_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm j_46;
  j_46 = t;
  {
    ATerm u_32 = NULL,w_32 = NULL;
    ATerm k_46;
    k_46 = t;
    {
      ATerm v_32 = NULL;
      ATerm y_32 (ATerm t)
      {
        t = not_null(v_32);
        if(((u_32 != NULL) && (u_32 != t)))
          _fail(t);
        else
          u_32 = t;
        t = not_null(v_32);
        return(t);
      }
      t = o_100(t);
      if(((v_32 != NULL) && (v_32 != t)))
        _fail(t);
      else
        v_32 = t;
      t = y_32(t);
    }
    t = k_46;
    {
      ATerm x_32 = NULL;
      ATerm z_32 (ATerm t)
      {
        t = not_null(x_32);
        if(((w_32 != NULL) && (w_32 != t)))
          _fail(t);
        else
          w_32 = t;
        t = not_null(x_32);
        return(t);
      }
      if(((x_32 != NULL) && (x_32 != t)))
        _fail(t);
      else
        x_32 = t;
      t = z_32(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_32)), not_null(u_32)));
      t = printnl_0_0(t);
    }
  }
  t = j_46;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm l_46;
    l_46 = t;
    {
      ATerm b_33 = NULL;
      ATerm g_33 = NULL;
      ATerm h_33 (ATerm t)
      {
        t = not_null(g_33);
        if(((b_33 != NULL) && (b_33 != t)))
          _fail(t);
        else
          b_33 = t;
        t = not_null(g_33);
        return(t);
      }
      t = term_s_22;
      t = get_config_0_0(t);
      if(((g_33 != NULL) && (g_33 != t)))
        _fail(t);
      else
        g_33 = t;
      t = h_33(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_33), term_s_24);
      t = geq_0_0(t);
    }
    t = l_46;
    t = h_102(t);
    return(t);
  }
  t = try_1_0(i_3, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm m_46;
  m_46 = t;
  {
    ATerm j_33 = NULL;
    ATerm k_33 = NULL;
    ATerm l_33 (ATerm t)
    {
      t = not_null(k_33);
      if(((j_33 != NULL) && (j_33 != t)))
        _fail(t);
      else
        j_33 = t;
      t = not_null(k_33);
      return(t);
    }
    if(((k_33 != NULL) && (k_33 != t)))
      _fail(t);
    else
      k_33 = t;
    t = l_33(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_34, not_null(j_33));
    t = printnl_0_0(t);
  }
  t = m_46;
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm n_46;
  n_46 = t;
  t = error_0_0(t);
  t = term_d_22;
  t = exit_0_0(t);
  t = n_46;
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm y_33 = NULL;
  ATerm h_34 (ATerm t)
  {
    ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
    t = not_null(y_33);
    if(((z_33 != NULL) && (z_33 != t)))
      _fail(t);
    else
      z_33 = t;
    t = not_null(y_33);
    {
      ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
      ATerm i_34 (ATerm t)
      {
        t = not_null(e_34);
        if(((a_34 != NULL) && (a_34 != t)))
          _fail(t);
        else
          a_34 = t;
        t = not_null(f_34);
        if(((b_34 != NULL) && (b_34 != t)))
          _fail(t);
        else
          b_34 = t;
        t = not_null(c_34);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, term_h_35, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_33)));
      t = table_get_0_0(t);
      if(((c_34 != NULL) && (c_34 != t)))
        _fail(t);
      else
        c_34 = t;
      t = not_null(c_34);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_34 = ATgetFirst((ATermList) t);
          g_34 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(d_34);
          if(match_cons(t, sym__2))
            {
              e_34 = ATgetArgument(t, 0);
              f_34 = ATgetArgument(t, 1);
              t = i_34(t);
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
      t = not_null(b_34);
    }
    return(t);
  }
  if(((y_33 != NULL) && (y_33 != t)))
    _fail(t);
  else
    y_33 = t;
  t = h_34(t);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm k_34 = NULL;
  ATerm m_34 (ATerm t)
  {
    ATerm l_34 = NULL;
    t = not_null(k_34);
    if(((l_34 != NULL) && (l_34 != t)))
      _fail(t);
    else
      l_34 = t;
    t = not_null(k_34);
    t = SSL_implode_string(not_null(l_34));
    return(t);
  }
  if(((k_34 != NULL) && (k_34 != t)))
    _fail(t);
  else
    k_34 = t;
  t = m_34(t);
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm o_34 = NULL;
  ATerm q_34 (ATerm t)
  {
    ATerm p_34 = NULL;
    t = not_null(o_34);
    if(((p_34 != NULL) && (p_34 != t)))
      _fail(t);
    else
      p_34 = t;
    t = not_null(o_34);
    t = SSL_explode_string(not_null(p_34));
    return(t);
  }
  if(((o_34 != NULL) && (o_34 != t)))
    _fail(t);
  else
    o_34 = t;
  t = q_34(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm s_34 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm t_34 = NULL;
    ATerm u_34 (ATerm t)
    {
      t = not_null(t_34);
      if(((s_34 != NULL) && (s_34 != t)))
        _fail(t);
      else
        s_34 = t;
      t = not_null(t_34);
      return(t);
    }
    t = c_89(t);
    if(((t_34 != NULL) && (t_34 != t)))
      _fail(t);
    else
      t_34 = t;
    t = u_34(t);
    return(t);
  }
  t = fetch_1_0(j_3, t);
  t = not_null(s_34);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  ATerm c_35 (ATerm t)
  {
    ATerm a_35 = NULL,b_35 = NULL;
    t = not_null(y_34);
    if(((a_35 != NULL) && (a_35 != t)))
      _fail(t);
    else
      a_35 = t;
    t = not_null(z_34);
    if(((b_35 != NULL) && (b_35 != t)))
      _fail(t);
    else
      b_35 = t;
    t = not_null(x_34);
    t = SSL_access(not_null(a_35), not_null(b_35));
    return(t);
  }
  if(((x_34 != NULL) && (x_34 != t)))
    _fail(t);
  else
    x_34 = t;
  t = not_null(x_34);
  if(match_cons(t, sym__2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
      t = c_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm e_35 = NULL;
  ATerm f_35 = NULL;
  ATerm g_35 (ATerm t)
  {
    t = not_null(f_35);
    if(((e_35 != NULL) && (e_35 != t)))
      _fail(t);
    else
      e_35 = t;
    t = not_null(f_35);
    return(t);
  }
  if(((f_35 != NULL) && (f_35 != t)))
    _fail(t);
  else
    f_35 = t;
  t = g_35(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_35), (ATerm) ATinsert(ATempty, term_o_46));
  t = access_0_0(t);
  return(t);
}
ATerm find_module_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  ATerm s_36 (ATerm t)
  {
    ATerm a_36 = NULL,b_36 = NULL;
    t = not_null(y_35);
    if(((b_36 != NULL) && (b_36 != t)))
      _fail(t);
    else
      b_36 = t;
    t = not_null(z_35);
    if(((a_36 != NULL) && (a_36 != t)))
      _fail(t);
    else
      a_36 = t;
    t = not_null(x_35);
    t = e_81(t);
    {
      ATerm p_46 = t;
      int q_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm c_36 = NULL;
            ATerm t_36 (ATerm t)
            {
              ATerm d_36 = NULL;
              t = not_null(c_36);
              if(((d_36 != NULL) && (d_36 != t)))
                _fail(t);
              else
                d_36 = t;
              t = not_null(a_36);
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm e_36 = NULL,g_36 = NULL;
                  ATerm r_46;
                  r_46 = t;
                  {
                    ATerm f_36 = NULL;
                    ATerm u_36 (ATerm t)
                    {
                      t = not_null(f_36);
                      if(((e_36 != NULL) && (e_36 != t)))
                        _fail(t);
                      else
                        e_36 = t;
                      t = not_null(f_36);
                      return(t);
                    }
                    if(((f_36 != NULL) && (f_36 != t)))
                      _fail(t);
                    else
                      f_36 = t;
                    t = u_36(t);
                  }
                  t = r_46;
                  {
                    ATerm h_36 = NULL,j_36 = NULL;
                    ATerm w_36 (ATerm t)
                    {
                      t = not_null(j_36);
                      if(((g_36 != NULL) && (g_36 != t)))
                        _fail(t);
                      else
                        g_36 = t;
                      t = not_null(j_36);
                      return(t);
                    }
                    ATerm i_36 = NULL;
                    ATerm v_36 (ATerm t)
                    {
                      t = not_null(i_36);
                      if(((h_36 != NULL) && (h_36 != t)))
                        _fail(t);
                      else
                        h_36 = t;
                      t = not_null(i_36);
                      return(t);
                    }
                    if(((i_36 != NULL) && (i_36 != t)))
                      _fail(t);
                    else
                      i_36 = t;
                    t = v_36(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_36)), term_c_17), not_null(b_36)), term_s_46), not_null(d_36));
                    t = concat_strings_0_0(t);
                    t = file_exists_0_0(t);
                    if(((j_36 != NULL) && (j_36 != t)))
                      _fail(t);
                    else
                      j_36 = t;
                    t = w_36(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_36), (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_36)));
                  }
                  return(t);
                }
                t = fetch_elem_1_0(v_3, t);
              }
              return(t);
            }
            if(((c_36 != NULL) && (c_36 != t)))
              _fail(t);
            else
              c_36 = t;
            t = t_36(t);
            return(t);
          }
          t = fetch_elem_1_0(u_3, t);
          ;
          LocalPopChoice(q_46);
        }
      else
        {
          t = p_46;
          {
            ATerm t_46 = t;
            int a_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = not_null(a_36);
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm k_36 = NULL,m_36 = NULL;
                    ATerm b_47;
                    b_47 = t;
                    {
                      ATerm l_36 = NULL;
                      ATerm x_36 (ATerm t)
                      {
                        t = not_null(l_36);
                        if(((k_36 != NULL) && (k_36 != t)))
                          _fail(t);
                        else
                          k_36 = t;
                        t = not_null(l_36);
                        return(t);
                      }
                      if(((l_36 != NULL) && (l_36 != t)))
                        _fail(t);
                      else
                        l_36 = t;
                      t = x_36(t);
                    }
                    t = b_47;
                    {
                      ATerm p_36 = NULL,r_36 = NULL;
                      ATerm z_36 (ATerm t)
                      {
                        t = not_null(r_36);
                        if(((m_36 != NULL) && (m_36 != t)))
                          _fail(t);
                        else
                          m_36 = t;
                        t = not_null(r_36);
                        return(t);
                      }
                      ATerm q_36 = NULL;
                      ATerm y_36 (ATerm t)
                      {
                        t = not_null(q_36);
                        if(((p_36 != NULL) && (p_36 != t)))
                          _fail(t);
                        else
                          p_36 = t;
                        t = not_null(q_36);
                        return(t);
                      }
                      if(((q_36 != NULL) && (q_36 != t)))
                        _fail(t);
                      else
                        q_36 = t;
                      t = y_36(t);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_36)), term_c_17), not_null(b_36));
                      t = concat_strings_0_0(t);
                      t = xtc_find_loc_0_0(t);
                      if(((r_36 != NULL) && (r_36 != t)))
                        _fail(t);
                      else
                        r_36 = t;
                      t = z_36(t);
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_36)));
                    }
                    return(t);
                  }
                  t = fetch_elem_1_0(c_4, t);
                }
                ;
                LocalPopChoice(a_47);
              }
            else
              {
                t = t_46;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_47), not_null(b_36)), term_c_47);
                t = fatal_error_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((x_35 != NULL) && (x_35 != t)))
    _fail(t);
  else
    x_35 = t;
  t = not_null(x_35);
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
      t = s_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_module_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm g_37 = NULL;
  ATerm s_37 (ATerm t)
  {
    ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
    t = not_null(g_37);
    if(((h_37 != NULL) && (h_37 != t)))
      _fail(t);
    else
      h_37 = t;
    t = not_null(g_37);
    {
      ATerm l_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
      ATerm u_37 (ATerm t)
      {
        ATerm r_37 = NULL;
        ATerm v_37 (ATerm t)
        {
          t = not_null(r_37);
          if(((k_37 != NULL) && (k_37 != t)))
            _fail(t);
          else
            k_37 = t;
          t = not_null(r_37);
          return(t);
        }
        t = not_null(o_37);
        if(((i_37 != NULL) && (i_37 != t)))
          _fail(t);
        else
          i_37 = t;
        t = not_null(q_37);
        if(((j_37 != NULL) && (j_37 != t)))
          _fail(t);
        else
          j_37 = t;
        t = not_null(n_37);
        {
          ATerm d_4 (ATerm t)
          {
            ATerm k_47;
            k_47 = t;
            t = not_null(j_37);
            {
              ATerm e_4 (ATerm t)
              {
                t = term_l_47;
                return(t);
              }
              t = debug_1_0(e_4, t);
            }
            t = k_47;
            return(t);
          }
          t = if_verbose3_1_0(d_4, t);
          t = parse_module_0_0(t);
          if(((r_37 != NULL) && (r_37 != t)))
            _fail(t);
          else
            r_37 = t;
          t = v_37(t);
        }
        return(t);
      }
      ATerm m_37 = NULL;
      ATerm t_37 (ATerm t)
      {
        t = not_null(m_37);
        if(((l_37 != NULL) && (l_37 != t)))
          _fail(t);
        else
          l_37 = t;
        t = not_null(m_37);
        return(t);
      }
      t = not_null(h_37);
      t = basename_0_0(t);
      if(((m_37 != NULL) && (m_37 != t)))
        _fail(t);
      else
        m_37 = t;
      t = t_37(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_37), term_t_47), term_s_47), term_m_47));
      t = find_module_1_0(d_81, t);
      if(((n_37 != NULL) && (n_37 != t)))
        _fail(t);
      else
        n_37 = t;
      t = not_null(n_37);
      if(match_cons(t, sym__2))
        {
          o_37 = ATgetArgument(t, 0);
          p_37 = ATgetArgument(t, 1);
          t = not_null(p_37);
          if(match_cons(t, sym_FILE_1))
            {
              q_37 = ATgetArgument(t, 0);
              t = u_37(t);
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_37), not_null(k_37));
    }
    return(t);
  }
  if(((g_37 != NULL) && (g_37 != t)))
    _fail(t);
  else
    g_37 = t;
  t = s_37(t);
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm s_38 (ATerm t)
  {
    ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
    t = not_null(h_38);
    if(((i_38 != NULL) && (i_38 != t)))
      _fail(t);
    else
      i_38 = t;
    t = not_null(h_38);
    {
      ATerm l_38 = NULL;
      ATerm t_38 (ATerm t)
      {
        ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
        ATerm u_38 (ATerm t)
        {
          t = not_null(q_38);
          if(((k_38 != NULL) && (k_38 != t)))
            _fail(t);
          else
            k_38 = t;
          t = not_null(r_38);
          if(((j_38 != NULL) && (j_38 != t)))
            _fail(t);
          else
            j_38 = t;
          t = not_null(n_38);
          return(t);
        }
        t = not_null(l_38);
        if(((m_38 != NULL) && (m_38 != t)))
          _fail(t);
        else
          m_38 = t;
        t = not_null(l_38);
        t = SSL_explode_term(not_null(m_38));
        if(((n_38 != NULL) && (n_38 != t)))
          _fail(t);
        else
          n_38 = t;
        t = not_null(n_38);
        if(match_cons(t, sym__2))
          {
            o_38 = ATgetArgument(t, 0);
            p_38 = ATgetArgument(t, 1);
            t = not_null(o_38);
            if(match_string(t, ""))
              {
                t = not_null(p_38);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_38 = ATgetFirst((ATermList) t);
                    r_38 = (ATerm) ATgetNext((ATermList) t);
                    t = u_38(t);
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
      t = not_null(i_38);
      if(((l_38 != NULL) && (l_38 != t)))
        _fail(t);
      else
        l_38 = t;
      t = t_38(t);
      t = not_null(k_38);
    }
    return(t);
  }
  if(((h_38 != NULL) && (h_38 != t)))
    _fail(t);
  else
    h_38 = t;
  t = s_38(t);
  return(t);
}
ATerm GnUndefined_0_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  ATerm m_39 (ATerm t)
  {
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
    t = not_null(a_39);
    if(((k_39 != NULL) && (k_39 != t)))
      _fail(t);
    else
      k_39 = t;
    t = not_null(b_39);
    if(((g_39 != NULL) && (g_39 != t)))
      _fail(t);
    else
      g_39 = t;
    t = not_null(c_39);
    if(((h_39 != NULL) && (h_39 != t)))
      _fail(t);
    else
      h_39 = t;
    t = not_null(d_39);
    if(((i_39 != NULL) && (i_39 != t)))
      _fail(t);
    else
      i_39 = t;
    t = not_null(e_39);
    if(((j_39 != NULL) && (j_39 != t)))
      _fail(t);
    else
      j_39 = t;
    t = not_null(f_39);
    if(((l_39 != NULL) && (l_39 != t)))
      _fail(t);
    else
      l_39 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(g_39), not_null(h_39), not_null(i_39), not_null(j_39), (ATerm) ATinsert(CheckATermList(not_null(l_39)), not_null(k_39)));
    return(t);
  }
  if(((y_38 != NULL) && (y_38 != t)))
    _fail(t);
  else
    y_38 = t;
  t = not_null(y_38);
  if(match_cons(t, sym__5))
    {
      z_38 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
      d_39 = ATgetArgument(t, 2);
      e_39 = ATgetArgument(t, 3);
      f_39 = ATgetArgument(t, 4);
      t = not_null(z_38);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_39 = ATgetFirst((ATermList) t);
          b_39 = (ATerm) ATgetNext((ATermList) t);
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
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  ATerm t_39 (ATerm t)
  {
    ATerm s_39 = NULL;
    t = not_null(q_39);
    if(((s_39 != NULL) && (s_39 != t)))
      _fail(t);
    else
      s_39 = t;
    t = not_null(r_39);
    if(((s_39 != NULL) && (s_39 != t)))
      _fail(t);
    else
      s_39 = t;
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
ATerm HdMember_p__2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  ATerm e_40 (ATerm t)
  {
    ATerm a_40 = NULL,b_40 = NULL;
    t = not_null(y_39);
    if(((b_40 != NULL) && (b_40 != t)))
      _fail(t);
    else
      b_40 = t;
    t = not_null(z_39);
    if(((a_40 != NULL) && (a_40 != t)))
      _fail(t);
    else
      a_40 = t;
    t = not_null(x_39);
    t = y_92(t);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm c_40 = NULL;
        ATerm f_40 (ATerm t)
        {
          ATerm d_40 = NULL;
          t = not_null(c_40);
          if(((d_40 != NULL) && (d_40 != t)))
            _fail(t);
          else
            d_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_40), not_null(d_40));
          t = x_92(t);
          return(t);
        }
        if(((c_40 != NULL) && (c_40 != t)))
          _fail(t);
        else
          c_40 = t;
        t = f_40(t);
        return(t);
      }
      t = fetch_1_0(f_4, t);
    }
    t = not_null(a_40);
    return(t);
  }
  if(((x_39 != NULL) && (x_39 != t)))
    _fail(t);
  else
    x_39 = t;
  t = not_null(x_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_39 = ATgetFirst((ATermList) t);
      z_39 = (ATerm) ATgetNext((ATermList) t);
      t = e_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  ATerm n_40 (ATerm t)
  {
    ATerm l_40 = NULL,m_40 = NULL;
    t = not_null(j_40);
    if(((m_40 != NULL) && (m_40 != t)))
      _fail(t);
    else
      m_40 = t;
    t = not_null(k_40);
    if(((l_40 != NULL) && (l_40 != t)))
      _fail(t);
    else
      l_40 = t;
    t = not_null(m_40);
    {
      ATerm o_40 (ATerm t)
      {
        ATerm b_48 = t;
        int c_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(c_48);
          }
        else
          {
            t = b_48;
            {
              ATerm f_48 = t;
              int g_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_4 (ATerm t)
                  {
                    t = not_null(l_40);
                    return(t);
                  }
                  t = HdMember_p__2_0(p_92, g_4, t);
                  t = o_40(t);
                  ;
                  LocalPopChoice(g_48);
                }
              else
                {
                  t = f_48;
                  t = Cons_2_0(_id, o_40, t);
                }
            }
          }
        return(t);
      }
      t = o_40(t);
    }
    return(t);
  }
  if(((i_40 != NULL) && (i_40 != t)))
    _fail(t);
  else
    i_40 = t;
  t = not_null(i_40);
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
      t = n_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  ATerm a_41 (ATerm t)
  {
    ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
    t = not_null(t_40);
    if(((y_40 != NULL) && (y_40 != t)))
      _fail(t);
    else
      y_40 = t;
    t = not_null(v_40);
    if(((x_40 != NULL) && (x_40 != t)))
      _fail(t);
    else
      x_40 = t;
    t = not_null(w_40);
    if(((z_40 != NULL) && (z_40 != t)))
      _fail(t);
    else
      z_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_40)), not_null(x_40)), not_null(z_40));
    return(t);
  }
  if(((s_40 != NULL) && (s_40 != t)))
    _fail(t);
  else
    s_40 = t;
  t = not_null(s_40);
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      t = not_null(u_40);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_40 = ATgetFirst((ATermList) t);
          w_40 = (ATerm) ATgetNext((ATermList) t);
          t = a_41(t);
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
ATerm Zip3_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  ATerm i_41 (ATerm t)
  {
    ATerm g_41 = NULL,h_41 = NULL;
    t = not_null(e_41);
    if(((g_41 != NULL) && (g_41 != t)))
      _fail(t);
    else
      g_41 = t;
    t = not_null(f_41);
    if(((h_41 != NULL) && (h_41 != t)))
      _fail(t);
    else
      h_41 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(h_41)), not_null(g_41));
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
      t = i_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  ATerm b_42 (ATerm t)
  {
    ATerm u_41 = NULL,v_41 = NULL,z_41 = NULL,a_42 = NULL;
    t = not_null(p_41);
    if(((u_41 != NULL) && (u_41 != t)))
      _fail(t);
    else
      u_41 = t;
    t = not_null(q_41);
    if(((z_41 != NULL) && (z_41 != t)))
      _fail(t);
    else
      z_41 = t;
    t = not_null(s_41);
    if(((v_41 != NULL) && (v_41 != t)))
      _fail(t);
    else
      v_41 = t;
    t = not_null(t_41);
    if(((a_42 != NULL) && (a_42 != t)))
      _fail(t);
    else
      a_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_41), not_null(v_41)), (ATerm) ATmakeAppl(sym__2, not_null(z_41), not_null(a_42)));
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
      r_41 = ATgetArgument(t, 1);
      t = not_null(o_41);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_41 = ATgetFirst((ATermList) t);
          q_41 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(r_41);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_41 = ATgetFirst((ATermList) t);
              t_41 = (ATerm) ATgetNext((ATermList) t);
              t = b_42(t);
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
ATerm Zip1_0_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  ATerm j_42 (ATerm t)
  {
    t = (ATerm) ATempty;
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
      t = not_null(h_42);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(i_42);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = j_42(t);
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
ATerm genzip_4_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t)
{
  ATerm k_42 (ATerm t)
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_90(t);
        ;
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        t = u_90(t);
        t = _2_0(w_90, k_42, t);
        t = v_90(t);
      }
    return(t);
  }
  t = k_42(t);
  return(t);
}
ATerm zip_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, y_90, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  ATerm w_43 (ATerm t)
  {
    ATerm a_43 = NULL,b_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL,o_43 = NULL,u_43 = NULL;
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
    t = not_null(z_42);
    if(((f_43 != NULL) && (f_43 != t)))
      _fail(t);
    else
      f_43 = t;
    t = not_null(v_42);
    {
      ATerm j_48;
      j_48 = t;
      {
        ATerm j_43 = NULL;
        ATerm x_43 (ATerm t)
        {
          ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
          ATerm y_43 (ATerm t)
          {
            t = not_null(m_43);
            if(((h_43 != NULL) && (h_43 != t)))
              _fail(t);
            else
              h_43 = t;
            t = not_null(n_43);
            if(((i_43 != NULL) && (i_43 != t)))
              _fail(t);
            else
              i_43 = t;
            t = not_null(l_43);
            return(t);
          }
          t = not_null(j_43);
          if(((k_43 != NULL) && (k_43 != t)))
            _fail(t);
          else
            k_43 = t;
          t = not_null(j_43);
          t = SSL_explode_term(not_null(k_43));
          if(((l_43 != NULL) && (l_43 != t)))
            _fail(t);
          else
            l_43 = t;
          t = not_null(l_43);
          if(match_cons(t, sym__2))
            {
              m_43 = ATgetArgument(t, 0);
              n_43 = ATgetArgument(t, 1);
              t = y_43(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(b_43);
        if(((j_43 != NULL) && (j_43 != t)))
          _fail(t);
        else
          j_43 = t;
        t = x_43(t);
      }
      t = j_48;
      {
        ATerm k_48;
        k_48 = t;
        {
          ATerm p_43 = NULL;
          ATerm z_43 (ATerm t)
          {
            ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
            ATerm a_44 (ATerm t)
            {
              t = not_null(s_43);
              if(((h_43 != NULL) && (h_43 != t)))
                _fail(t);
              else
                h_43 = t;
              t = not_null(t_43);
              if(((o_43 != NULL) && (o_43 != t)))
                _fail(t);
              else
                o_43 = t;
              t = not_null(r_43);
              return(t);
            }
            t = not_null(p_43);
            if(((q_43 != NULL) && (q_43 != t)))
              _fail(t);
            else
              q_43 = t;
            t = not_null(p_43);
            t = SSL_explode_term(not_null(q_43));
            if(((r_43 != NULL) && (r_43 != t)))
              _fail(t);
            else
              r_43 = t;
            t = not_null(r_43);
            if(match_cons(t, sym__2))
              {
                s_43 = ATgetArgument(t, 0);
                t_43 = ATgetArgument(t, 1);
                t = a_44(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(a_43);
          if(((p_43 != NULL) && (p_43 != t)))
            _fail(t);
          else
            p_43 = t;
          t = z_43(t);
        }
        t = k_48;
        {
          ATerm v_43 = NULL;
          ATerm b_44 (ATerm t)
          {
            t = not_null(v_43);
            if(((u_43 != NULL) && (u_43 != t)))
              _fail(t);
            else
              u_43 = t;
            t = not_null(v_43);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_43), not_null(i_43));
          t = zip_1_0(_id, t);
          if(((v_43 != NULL) && (v_43 != t)))
            _fail(t);
          else
            v_43 = t;
          t = b_44(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(f_43));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((v_42 != NULL) && (v_42 != t)))
    _fail(t);
  else
    v_42 = t;
  t = not_null(v_42);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_42 = ATgetFirst((ATermList) t);
      z_42 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(w_42);
      if(match_cons(t, sym__2))
        {
          x_42 = ATgetArgument(t, 0);
          y_42 = ATgetArgument(t, 1);
          t = w_43(t);
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
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  ATerm m_44 (ATerm t)
  {
    ATerm k_44 = NULL,l_44 = NULL;
    t = not_null(h_44);
    if(((k_44 != NULL) && (k_44 != t)))
      _fail(t);
    else
      k_44 = t;
    t = not_null(i_44);
    if(((k_44 != NULL) && (k_44 != t)))
      _fail(t);
    else
      k_44 = t;
    t = not_null(j_44);
    if(((l_44 != NULL) && (l_44 != t)))
      _fail(t);
    else
      l_44 = t;
    t = not_null(l_44);
    return(t);
  }
  if(((f_44 != NULL) && (f_44 != t)))
    _fail(t);
  else
    f_44 = t;
  t = not_null(f_44);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_44 = ATgetFirst((ATermList) t);
      j_44 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(g_44);
      if(match_cons(t, sym__2))
        {
          h_44 = ATgetArgument(t, 0);
          i_44 = ATgetArgument(t, 1);
          t = m_44(t);
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
ATerm diff_0_0 (ATerm t)
{
  ATerm l_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_4 (ATerm t)
      {
        ATerm o_44 = NULL;
        ATerm q_44 (ATerm t)
        {
          ATerm p_44 = NULL;
          t = not_null(o_44);
          if(((p_44 != NULL) && (p_44 != t)))
            _fail(t);
          else
            p_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_44));
          return(t);
        }
        if(((o_44 != NULL) && (o_44 != t)))
          _fail(t);
        else
          o_44 = t;
        t = q_44(t);
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        ATerm t_48 = t;
        int u_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              ATerm v_48 = t;
              int w_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(w_48);
                }
              else
                {
                  t = v_48;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, f_5, t);
            ;
            LocalPopChoice(u_48);
          }
        else
          {
            t = t_48;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(h_4, i_4, e_5, t);
      ;
      LocalPopChoice(m_48);
    }
  else
    {
      t = l_48;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  ATerm i_46 (ATerm t)
  {
    ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,a_46 = NULL,c_46 = NULL,g_46 = NULL;
    t = not_null(g_45);
    if(((o_45 != NULL) && (o_45 != t)))
      _fail(t);
    else
      o_45 = t;
    t = not_null(h_45);
    if(((p_45 != NULL) && (p_45 != t)))
      _fail(t);
    else
      p_45 = t;
    t = not_null(i_45);
    if(((q_45 != NULL) && (q_45 != t)))
      _fail(t);
    else
      q_45 = t;
    t = not_null(l_45);
    if(((r_45 != NULL) && (r_45 != t)))
      _fail(t);
    else
      r_45 = t;
    t = not_null(m_45);
    if(((s_45 != NULL) && (s_45 != t)))
      _fail(t);
    else
      s_45 = t;
    t = not_null(n_45);
    if(((t_45 != NULL) && (t_45 != t)))
      _fail(t);
    else
      t_45 = t;
    t = not_null(c_45);
    {
      ATerm z_48;
      z_48 = t;
      {
        ATerm x_45 = NULL;
        ATerm u_46 (ATerm t)
        {
          ATerm y_45 = NULL;
          ATerm v_46 (ATerm t)
          {
            ATerm z_45 = NULL;
            ATerm w_46 (ATerm t)
            {
              t = not_null(z_45);
              if(((w_45 != NULL) && (w_45 != t)))
                _fail(t);
              else
                w_45 = t;
              t = not_null(z_45);
              return(t);
            }
            t = not_null(y_45);
            if(((v_45 != NULL) && (v_45 != t)))
              _fail(t);
            else
              v_45 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_45), not_null(q_45));
            t = diff_0_0(t);
            if(((z_45 != NULL) && (z_45 != t)))
              _fail(t);
            else
              z_45 = t;
            t = w_46(t);
            return(t);
          }
          t = not_null(x_45);
          if(((u_45 != NULL) && (u_45 != t)))
            _fail(t);
          else
            u_45 = t;
          t = not_null(u_45);
          t = p_111(t);
          if(((y_45 != NULL) && (y_45 != t)))
            _fail(t);
          else
            y_45 = t;
          t = v_46(t);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_45), not_null(r_45));
        t = o_111(t);
        if(((x_45 != NULL) && (x_45 != t)))
          _fail(t);
        else
          x_45 = t;
        t = u_46(t);
      }
      t = z_48;
      {
        ATerm a_49;
        a_49 = t;
        {
          ATerm b_46 = NULL;
          ATerm x_46 (ATerm t)
          {
            t = not_null(b_46);
            if(((a_46 != NULL) && (a_46 != t)))
              _fail(t);
            else
              a_46 = t;
            t = not_null(b_46);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), not_null(p_45));
          t = conc_0_0(t);
          if(((b_46 != NULL) && (b_46 != t)))
            _fail(t);
          else
            b_46 = t;
          t = x_46(t);
        }
        t = a_49;
        {
          ATerm e_49;
          e_49 = t;
          {
            ATerm f_46 = NULL;
            ATerm y_46 (ATerm t)
            {
              t = not_null(f_46);
              if(((c_46 != NULL) && (c_46 != t)))
                _fail(t);
              else
                c_46 = t;
              t = not_null(f_46);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), not_null(q_45));
            t = conc_0_0(t);
            if(((f_46 != NULL) && (f_46 != t)))
              _fail(t);
            else
              f_46 = t;
            t = y_46(t);
          }
          t = e_49;
          {
            ATerm h_46 = NULL;
            ATerm z_46 (ATerm t)
            {
              t = not_null(h_46);
              if(((g_46 != NULL) && (g_46 != t)))
                _fail(t);
              else
                g_46 = t;
              t = not_null(h_46);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_45), not_null(u_45), not_null(s_45));
            t = q_111(t);
            if(((h_46 != NULL) && (h_46 != t)))
              _fail(t);
            else
              h_46 = t;
            t = z_46(t);
            t = (ATerm) ATmakeAppl(sym__5, not_null(a_46), not_null(c_46), not_null(r_45), not_null(g_46), not_null(t_45));
          }
        }
      }
    }
    return(t);
  }
  if(((c_45 != NULL) && (c_45 != t)))
    _fail(t);
  else
    c_45 = t;
  t = not_null(c_45);
  if(match_cons(t, sym__5))
    {
      f_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
      l_45 = ATgetArgument(t, 2);
      m_45 = ATgetArgument(t, 3);
      n_45 = ATgetArgument(t, 4);
      t = not_null(f_45);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_45 = ATgetFirst((ATermList) t);
          h_45 = (ATerm) ATgetNext((ATermList) t);
          t = i_46(t);
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
ATerm GnExit_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  ATerm r_47 (ATerm t)
  {
    ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
    t = not_null(f_47);
    if(((n_47 != NULL) && (n_47 != t)))
      _fail(t);
    else
      n_47 = t;
    t = not_null(g_47);
    if(((o_47 != NULL) && (o_47 != t)))
      _fail(t);
    else
      o_47 = t;
    t = not_null(h_47);
    if(((p_47 != NULL) && (p_47 != t)))
      _fail(t);
    else
      p_47 = t;
    t = not_null(i_47);
    if(((q_47 != NULL) && (q_47 != t)))
      _fail(t);
    else
      q_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_47), not_null(q_47));
    return(t);
  }
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = not_null(d_47);
  if(match_cons(t, sym__5))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
      g_47 = ATgetArgument(t, 2);
      h_47 = ATgetArgument(t, 3);
      i_47 = ATgetArgument(t, 4);
      t = not_null(e_47);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_47(t);
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
ATerm GnInitRoots_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  ATerm d_48 (ATerm t)
  {
    ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
    t = not_null(v_47);
    if(((y_47 != NULL) && (y_47 != t)))
      _fail(t);
    else
      y_47 = t;
    t = not_null(w_47);
    if(((z_47 != NULL) && (z_47 != t)))
      _fail(t);
    else
      z_47 = t;
    t = not_null(x_47);
    if(((a_48 != NULL) && (a_48 != t)))
      _fail(t);
    else
      a_48 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(y_47), not_null(y_47), not_null(z_47), not_null(a_48), (ATerm) ATempty);
    return(t);
  }
  if(((u_47 != NULL) && (u_47 != t)))
    _fail(t);
  else
    u_47 = t;
  t = not_null(u_47);
  if(match_cons(t, sym__3))
    {
      v_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
      x_47 = ATgetArgument(t, 2);
      t = d_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm e_48 (ATerm t)
  {
    ATerm f_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_82(t);
        ;
        LocalPopChoice(g_49);
      }
    else
      {
        t = f_49;
        t = r_82(t);
        t = e_48(t);
      }
    return(t);
  }
  t = e_48(t);
  return(t);
}
ATerm for_3_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  t = t_82(t);
  t = while_not_2_0(u_82, v_82, t);
  return(t);
}
ATerm graph_nodes_undef_roots_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(w_110, x_110, y_110, t);
        ;
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        t = GnUndefined_0_0(t);
      }
    return(t);
  }
  t = for_3_0(GnInitRoots_0_0, GnExit_0_0, g_5, t);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  ATerm s_48 (ATerm t)
  {
    ATerm q_48 = NULL,r_48 = NULL;
    t = not_null(o_48);
    if(((q_48 != NULL) && (q_48 != t)))
      _fail(t);
    else
      q_48 = t;
    t = not_null(p_48);
    if(((r_48 != NULL) && (r_48 != t)))
      _fail(t);
    else
      r_48 = t;
    t = not_null(q_48);
    return(t);
  }
  t = graph_nodes_undef_roots_3_0(l_111, m_111, n_111, t);
  if(((n_48 != NULL) && (n_48 != t)))
    _fail(t);
  else
    n_48 = t;
  t = not_null(n_48);
  if(match_cons(t, sym__2))
    {
      o_48 = ATgetArgument(t, 0);
      p_48 = ATgetArgument(t, 1);
      t = s_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm j_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(a_50);
    }
  else
    {
      t = j_49;
      {
        ATerm b_50 = t;
        int h_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 (ATerm t)
            {
              t = filter_1_0(u_95, t);
              return(t);
            }
            t = Cons_2_0(u_95, h_5, t);
            ;
            LocalPopChoice(h_50);
          }
        else
          {
            t = b_50;
            {
              ATerm x_48 = NULL,y_48 = NULL,b_49 = NULL;
              ATerm d_49 (ATerm t)
              {
                ATerm c_49 = NULL;
                t = not_null(b_49);
                if(((c_49 != NULL) && (c_49 != t)))
                  _fail(t);
                else
                  c_49 = t;
                t = not_null(c_49);
                t = filter_1_0(u_95, t);
                return(t);
              }
              if(((x_48 != NULL) && (x_48 != t)))
                _fail(t);
              else
                x_48 = t;
              t = not_null(x_48);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_48 = ATgetFirst((ATermList) t);
                  b_49 = (ATerm) ATgetNext((ATermList) t);
                  t = d_49(t);
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
ATerm pack_stratego_modules_0_0 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL;
  ATerm x_49 (ATerm t)
  {
    ATerm m_49 = NULL,n_49 = NULL;
    t = not_null(l_49);
    if(((m_49 != NULL) && (m_49 != t)))
      _fail(t);
    else
      m_49 = t;
    t = not_null(k_49);
    {
      ATerm p_49 = NULL;
      ATerm y_49 (ATerm t)
      {
        t = not_null(p_49);
        if(((n_49 != NULL) && (n_49 != t)))
          _fail(t);
        else
          n_49 = t;
        t = not_null(p_49);
        return(t);
      }
      ATerm j_50 = t;
      int k_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_45;
          t = get_config_0_0(t);
          {
            ATerm s_5 (ATerm t)
            {
              ATerm l_50 = t;
              if((PushChoice() == 0))
                {
                  ATerm o_49 = NULL;
                  if(((o_49 != NULL) && (o_49 != t)))
                    _fail(t);
                  else
                    o_49 = t;
                  t = not_null(o_49);
                  if(match_string(t, "-I"))
                    {
                      t = not_null(o_49);
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
                  t = l_50;
                }
              return(t);
            }
            t = filter_1_0(s_5, t);
          }
          ;
          LocalPopChoice(k_50);
        }
      else
        {
          t = j_50;
          t = (ATerm) ATempty;
        }
      if(((p_49 != NULL) && (p_49 != t)))
        _fail(t);
      else
        p_49 = t;
      t = y_49(t);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(m_49)), term_n_50), term_m_50), term_g_43, (ATerm) ATempty);
      {
        ATerm t_5 (ATerm t)
        {
          t = Fst_0_0(t);
          {
            ATerm v_5 (ATerm t)
            {
              t = (ATerm) ATinsert(CheckATermList(not_null(n_49)), term_c_17);
              return(t);
            }
            t = get_module_1_0(v_5, t);
          }
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
          ATerm z_49 (ATerm t)
          {
            ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
            t = not_null(r_49);
            if(((u_49 != NULL) && (u_49 != t)))
              _fail(t);
            else
              u_49 = t;
            t = not_null(s_49);
            if(((v_49 != NULL) && (v_49 != t)))
              _fail(t);
            else
              v_49 = t;
            t = not_null(t_49);
            if(((w_49 != NULL) && (w_49 != t)))
              _fail(t);
            else
              w_49 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(w_49)), not_null(v_49));
            return(t);
          }
          if(((q_49 != NULL) && (q_49 != t)))
            _fail(t);
          else
            q_49 = t;
          t = not_null(q_49);
          if(match_cons(t, sym__3))
            {
              r_49 = ATgetArgument(t, 0);
              s_49 = ATgetArgument(t, 1);
              t_49 = ATgetArgument(t, 2);
              t = z_49(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = graph_nodes_roots_3_0(t_5, get_stratego_imports_0_0, u_5, t);
        t = unzip_0_0(t);
        t = _2_0(_id, flatten_stratego_0_0, t);
      }
    }
    return(t);
  }
  if(((k_49 != NULL) && (k_49 != t)))
    _fail(t);
  else
    k_49 = t;
  t = not_null(k_49);
  if(match_cons(t, sym_FILE_1))
    {
      l_49 = ATgetArgument(t, 0);
      t = x_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_51 = t;
  int b_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(b_51);
    }
  else
    {
      t = a_51;
      {
        ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
        ATerm i_50 (ATerm t)
        {
          ATerm f_50 = NULL,g_50 = NULL;
          t = not_null(d_50);
          if(((f_50 != NULL) && (f_50 != t)))
            _fail(t);
          else
            f_50 = t;
          t = not_null(e_50);
          if(((g_50 != NULL) && (g_50 != t)))
            _fail(t);
          else
            g_50 = t;
          t = not_null(f_50);
          {
            ATerm g_6 (ATerm t)
            {
              t = not_null(g_50);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(g_6, t);
          }
          return(t);
        }
        if(((c_50 != NULL) && (c_50 != t)))
          _fail(t);
        else
          c_50 = t;
        t = not_null(c_50);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_50 = ATgetFirst((ATermList) t);
            e_50 = (ATerm) ATgetNext((ATermList) t);
            t = i_50(t);
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
  ATerm o_50 = NULL;
  ATerm w_50 (ATerm t)
  {
    ATerm p_50 = NULL,q_50 = NULL;
    t = not_null(o_50);
    if(((p_50 != NULL) && (p_50 != t)))
      _fail(t);
    else
      p_50 = t;
    t = not_null(o_50);
    {
      ATerm r_50 = NULL;
      ATerm x_50 (ATerm t)
      {
        ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
        ATerm y_50 (ATerm t)
        {
          t = not_null(v_50);
          if(((q_50 != NULL) && (q_50 != t)))
            _fail(t);
          else
            q_50 = t;
          t = not_null(t_50);
          return(t);
        }
        t = not_null(r_50);
        if(((s_50 != NULL) && (s_50 != t)))
          _fail(t);
        else
          s_50 = t;
        t = not_null(r_50);
        t = SSL_explode_term(not_null(s_50));
        if(((t_50 != NULL) && (t_50 != t)))
          _fail(t);
        else
          t_50 = t;
        t = not_null(t_50);
        if(match_cons(t, sym__2))
          {
            u_50 = ATgetArgument(t, 0);
            v_50 = ATgetArgument(t, 1);
            t = not_null(u_50);
            if(match_string(t, ""))
              {
                t = y_50(t);
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
      t = not_null(p_50);
      if(((r_50 != NULL) && (r_50 != t)))
        _fail(t);
      else
        r_50 = t;
      t = x_50(t);
      t = not_null(q_50);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  t = w_50(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm z_50 (ATerm t)
  {
    ATerm i_51 = t;
    int j_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_50, t);
        ;
        LocalPopChoice(j_51);
      }
    else
      {
        t = i_51;
        t = Nil_0_0(t);
        t = g_89(t);
      }
    return(t);
  }
  t = z_50(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  ATerm h_51 (ATerm t)
  {
    ATerm f_51 = NULL,g_51 = NULL;
    t = not_null(d_51);
    if(((g_51 != NULL) && (g_51 != t)))
      _fail(t);
    else
      g_51 = t;
    t = not_null(e_51);
    if(((f_51 != NULL) && (f_51 != t)))
      _fail(t);
    else
      f_51 = t;
    t = not_null(g_51);
    {
      ATerm h_6 (ATerm t)
      {
        t = not_null(f_51);
        return(t);
      }
      t = at_end_1_0(h_6, t);
    }
    return(t);
  }
  if(((c_51 != NULL) && (c_51 != t)))
    _fail(t);
  else
    c_51 = t;
  t = not_null(c_51);
  if(match_cons(t, sym__2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
      t = h_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(l_51);
    }
  else
    {
      t = k_51;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  ATerm e_52 (ATerm t)
  {
    ATerm t_51 = NULL,u_51 = NULL,a_52 = NULL;
    t = not_null(n_51);
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    t = not_null(o_51);
    if(((u_51 != NULL) && (u_51 != t)))
      _fail(t);
    else
      u_51 = t;
    t = not_null(m_51);
    {
      ATerm b_52 = NULL,d_52 = NULL;
      ATerm g_52 (ATerm t)
      {
        t = not_null(d_52);
        if(((a_52 != NULL) && (a_52 != t)))
          _fail(t);
        else
          a_52 = t;
        t = not_null(d_52);
        return(t);
      }
      ATerm c_52 = NULL;
      ATerm f_52 (ATerm t)
      {
        t = not_null(c_52);
        if(((b_52 != NULL) && (b_52 != t)))
          _fail(t);
        else
          b_52 = t;
        t = not_null(c_52);
        return(t);
      }
      t = not_null(t_51);
      {
        ATerm p_51 = t;
        int q_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(q_51);
          }
        else
          {
            t = p_51;
            t = (ATerm) ATempty;
          }
        if(((c_52 != NULL) && (c_52 != t)))
          _fail(t);
        else
          c_52 = t;
        t = f_52(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_51), not_null(b_52));
      t = conc_0_0(t);
      if(((d_52 != NULL) && (d_52 != t)))
        _fail(t);
      else
        d_52 = t;
      t = g_52(t);
      t = (ATerm) ATmakeAppl(sym__3, term_a_21, not_null(t_51), not_null(a_52));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((m_51 != NULL) && (m_51 != t)))
    _fail(t);
  else
    m_51 = t;
  t = not_null(m_51);
  if(match_cons(t, sym__2))
    {
      n_51 = ATgetArgument(t, 0);
      o_51 = ATgetArgument(t, 1);
      t = e_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6 (ATerm t)
      {
        ATerm n_52 = NULL;
        if(((n_52 != NULL) && (n_52 != t)))
          _fail(t);
        else
          n_52 = t;
        t = not_null(n_52);
        if(match_string(t, "-I"))
          {
            t = not_null(n_52);
          }
        else
          {
            if(match_string(t, "--Include"))
              {
                t = not_null(n_52);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        ATerm o_52 = NULL;
        ATerm p_52 = NULL;
        ATerm v_52 (ATerm t)
        {
          t = not_null(p_52);
          if(((o_52 != NULL) && (o_52 != t)))
            _fail(t);
          else
            o_52 = t;
          t = not_null(p_52);
          return(t);
        }
        if(((p_52 != NULL) && (p_52 != t)))
          _fail(t);
        else
          p_52 = t;
        t = v_52(t);
        t = (ATerm) ATmakeAppl(sym__2, term_j_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_52)), term_j_45));
        t = extend_config_0_0(t);
        t = term_g_43;
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = term_v_51;
        return(t);
      }
      t = ArgOption_3_0(i_6, j_6, w_6, t);
      ;
      LocalPopChoice(s_51);
    }
  else
    {
      t = r_51;
      {
        ATerm w_51 = t;
        int x_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_7 (ATerm t)
            {
              ATerm q_52 = NULL;
              if(((q_52 != NULL) && (q_52 != t)))
                _fail(t);
              else
                q_52 = t;
              t = not_null(q_52);
              if(match_string(t, "--nodep"))
                {
                  t = not_null(q_52);
                }
              else
                {
                  if(match_string(t, "-nodep"))
                    {
                      t = not_null(q_52);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_7 (ATerm t)
            {
              t = term_z_51;
              t = set_config_0_0(t);
              t = term_g_43;
              return(t);
            }
            ATerm i_7 (ATerm t)
            {
              t = term_h_52;
              return(t);
            }
            t = Option_3_0(a_7, b_7, i_7, t);
            ;
            LocalPopChoice(x_51);
          }
        else
          {
            t = w_51;
            {
              ATerm i_52 = t;
              int j_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm r_52 = NULL;
                    if(((r_52 != NULL) && (r_52 != t)))
                      _fail(t);
                    else
                      r_52 = t;
                    t = not_null(r_52);
                    if(match_string(t, "--dep"))
                      {
                        t = not_null(r_52);
                      }
                    else
                      {
                        if(match_string(t, "-d"))
                          {
                            t = not_null(r_52);
                          }
                        else
                          {
                            if(match_string(t, "-dep"))
                              {
                                t = not_null(r_52);
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm o_7 (ATerm t)
                  {
                    ATerm s_52 = NULL;
                    ATerm t_52 = NULL;
                    ATerm w_52 (ATerm t)
                    {
                      t = not_null(t_52);
                      if(((s_52 != NULL) && (s_52 != t)))
                        _fail(t);
                      else
                        s_52 = t;
                      t = not_null(t_52);
                      return(t);
                    }
                    if(((t_52 != NULL) && (t_52 != t)))
                      _fail(t);
                    else
                      t_52 = t;
                    t = w_52(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(s_52));
                    t = set_config_0_0(t);
                    t = term_g_43;
                    return(t);
                  }
                  ATerm p_7 (ATerm t)
                  {
                    t = term_k_52;
                    return(t);
                  }
                  t = ArgOption_3_0(j_7, o_7, p_7, t);
                  ;
                  LocalPopChoice(j_52);
                }
              else
                {
                  t = i_52;
                  {
                    ATerm q_7 (ATerm t)
                    {
                      ATerm u_52 = NULL;
                      if(((u_52 != NULL) && (u_52 != t)))
                        _fail(t);
                      else
                        u_52 = t;
                      t = not_null(u_52);
                      if(match_string(t, "--imports"))
                        {
                          t = not_null(u_52);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm x_7 (ATerm t)
                    {
                      t = term_m_52;
                      t = set_config_0_0(t);
                      t = term_g_43;
                      return(t);
                    }
                    ATerm y_7 (ATerm t)
                    {
                      t = term_x_52;
                      return(t);
                    }
                    t = Option_3_0(q_7, x_7, y_7, t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  ATerm j_53 (ATerm t)
  {
    ATerm e_53 = NULL,i_53 = NULL;
    t = not_null(c_53);
    if(((e_53 != NULL) && (e_53 != t)))
      _fail(t);
    else
      e_53 = t;
    t = not_null(d_53);
    if(((i_53 != NULL) && (i_53 != t)))
      _fail(t);
    else
      i_53 = t;
    t = not_null(b_53);
    t = SSL_copy(not_null(e_53), not_null(i_53));
    return(t);
  }
  if(((b_53 != NULL) && (b_53 != t)))
    _fail(t);
  else
    b_53 = t;
  t = not_null(b_53);
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      d_53 = ATgetArgument(t, 1);
      t = j_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  ATerm x_53 = NULL;
  ATerm d_54 (ATerm t)
  {
    ATerm y_53 = NULL,z_53 = NULL,b_54 = NULL;
    t = not_null(x_53);
    if(((y_53 != NULL) && (y_53 != t)))
      _fail(t);
    else
      y_53 = t;
    t = not_null(x_53);
    {
      ATerm y_52;
      y_52 = t;
      {
        ATerm a_54 = NULL;
        ATerm e_54 (ATerm t)
        {
          t = not_null(a_54);
          if(((z_53 != NULL) && (z_53 != t)))
            _fail(t);
          else
            z_53 = t;
          t = not_null(a_54);
          return(t);
        }
        t = SSLgetAnnotations(not_null(y_53));
        if(((a_54 != NULL) && (a_54 != t)))
          _fail(t);
        else
          a_54 = t;
        t = e_54(t);
      }
      t = y_52;
      {
        ATerm c_54 = NULL;
        ATerm g_54 (ATerm t)
        {
          t = not_null(c_54);
          if(((b_54 != NULL) && (b_54 != t)))
            _fail(t);
          else
            b_54 = t;
          t = not_null(c_54);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(z_53));
        if(((c_54 != NULL) && (c_54 != t)))
          _fail(t);
        else
          c_54 = t;
        t = g_54(t);
        t = not_null(b_54);
      }
    }
    return(t);
  }
  if(((x_53 != NULL) && (x_53 != t)))
    _fail(t);
  else
    x_53 = t;
  t = not_null(x_53);
  if(match_cons(t, sym_stderr_0))
    {
      t = d_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  ATerm m_54 = NULL;
  ATerm s_54 (ATerm t)
  {
    ATerm n_54 = NULL,o_54 = NULL,q_54 = NULL;
    t = not_null(m_54);
    if(((n_54 != NULL) && (n_54 != t)))
      _fail(t);
    else
      n_54 = t;
    t = not_null(m_54);
    {
      ATerm z_52;
      z_52 = t;
      {
        ATerm p_54 = NULL;
        ATerm t_54 (ATerm t)
        {
          t = not_null(p_54);
          if(((o_54 != NULL) && (o_54 != t)))
            _fail(t);
          else
            o_54 = t;
          t = not_null(p_54);
          return(t);
        }
        t = SSLgetAnnotations(not_null(n_54));
        if(((p_54 != NULL) && (p_54 != t)))
          _fail(t);
        else
          p_54 = t;
        t = t_54(t);
      }
      t = z_52;
      {
        ATerm r_54 = NULL;
        ATerm u_54 (ATerm t)
        {
          t = not_null(r_54);
          if(((q_54 != NULL) && (q_54 != t)))
            _fail(t);
          else
            q_54 = t;
          t = not_null(r_54);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(o_54));
        if(((r_54 != NULL) && (r_54 != t)))
          _fail(t);
        else
          r_54 = t;
        t = u_54(t);
        t = not_null(q_54);
      }
    }
    return(t);
  }
  if(((m_54 != NULL) && (m_54 != t)))
    _fail(t);
  else
    m_54 = t;
  t = not_null(m_54);
  if(match_cons(t, sym_stdout_0))
    {
      t = s_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  ATerm o_55 (ATerm t)
  {
    ATerm f_55 = NULL,g_55 = NULL;
    t = not_null(e_55);
    if(((f_55 != NULL) && (f_55 != t)))
      _fail(t);
    else
      f_55 = t;
    t = not_null(d_55);
    {
      ATerm h_55 = NULL;
      ATerm r_55 (ATerm t)
      {
        t = not_null(h_55);
        if(((g_55 != NULL) && (g_55 != t)))
          _fail(t);
        else
          g_55 = t;
        t = not_null(h_55);
        {
          ATerm a_53 = t;
          int f_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(f_53);
            }
          else
            {
              t = a_53;
              t = stderr_0_0(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_55), not_null(g_55));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = l_0(t);
      if(((h_55 != NULL) && (h_55 != t)))
        _fail(t);
      else
        h_55 = t;
      t = r_55(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_55));
    }
    return(t);
  }
  ATerm p_55 (ATerm t)
  {
    ATerm i_55 = NULL,j_55 = NULL;
    t = not_null(e_55);
    if(((i_55 != NULL) && (i_55 != t)))
      _fail(t);
    else
      i_55 = t;
    t = not_null(d_55);
    {
      ATerm k_55 = NULL;
      ATerm s_55 (ATerm t)
      {
        t = not_null(k_55);
        if(((j_55 != NULL) && (j_55 != t)))
          _fail(t);
        else
          j_55 = t;
        t = not_null(k_55);
        {
          ATerm g_53 = t;
          if((PushChoice() == 0))
            {
              ATerm h_53 = t;
              int k_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  ;
                  LocalPopChoice(k_53);
                }
              else
                {
                  t = h_53;
                  {
                    ATerm l_53 = t;
                    int m_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stderr_0_0(t);
                        ;
                        LocalPopChoice(m_53);
                      }
                    else
                      {
                        t = l_53;
                        {
                          ATerm l_55 = NULL;
                          ATerm t_55 (ATerm t)
                          {
                            t = not_null(l_55);
                            if(((i_55 != NULL) && (i_55 != t)))
                              _fail(t);
                            else
                              i_55 = t;
                            t = not_null(l_55);
                            return(t);
                          }
                          if(((l_55 != NULL) && (l_55 != t)))
                            _fail(t);
                          else
                            l_55 = t;
                          t = t_55(t);
                        }
                      }
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_53;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_55), not_null(j_55));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = l_0(t);
      if(((k_55 != NULL) && (k_55 != t)))
        _fail(t);
      else
        k_55 = t;
      t = s_55(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_55));
    }
    return(t);
  }
  ATerm q_55 (ATerm t)
  {
    ATerm m_55 = NULL;
    t = not_null(e_55);
    if(((m_55 != NULL) && (m_55 != t)))
      _fail(t);
    else
      m_55 = t;
    t = not_null(d_55);
    {
      ATerm n_55 = NULL;
      ATerm u_55 (ATerm t)
      {
        t = not_null(n_55);
        if(((m_55 != NULL) && (m_55 != t)))
          _fail(t);
        else
          m_55 = t;
        t = not_null(n_55);
        return(t);
      }
      t = l_0(t);
      if(((n_55 != NULL) && (n_55 != t)))
        _fail(t);
      else
        n_55 = t;
      t = u_55(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_55));
    }
    return(t);
  }
  if(((d_55 != NULL) && (d_55 != t)))
    _fail(t);
  else
    d_55 = t;
  t = not_null(d_55);
  if(match_cons(t, sym_FILE_1))
    {
      e_55 = ATgetArgument(t, 0);
      {
        ATerm n_53 = t;
        int o_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_55(t);
            ;
            LocalPopChoice(o_53);
          }
        else
          {
            t = n_53;
            {
              ATerm p_53 = t;
              int q_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_55(t);
                  ;
                  LocalPopChoice(q_53);
                }
              else
                {
                  t = p_53;
                  t = q_55(t);
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
ATerm Tl_0_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  ATerm b_56 (ATerm t)
  {
    ATerm a_56 = NULL;
    t = not_null(z_55);
    if(((a_56 != NULL) && (a_56 != t)))
      _fail(t);
    else
      a_56 = t;
    t = not_null(a_56);
    return(t);
  }
  if(((x_55 != NULL) && (x_55 != t)))
    _fail(t);
  else
    x_55 = t;
  t = not_null(x_55);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_55 = ATgetFirst((ATermList) t);
      z_55 = (ATerm) ATgetNext((ATermList) t);
      t = b_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  ATerm m_56 (ATerm t)
  {
    ATerm i_56 = NULL,j_56 = NULL;
    t = not_null(g_56);
    if(((i_56 != NULL) && (i_56 != t)))
      _fail(t);
    else
      i_56 = t;
    t = not_null(h_56);
    if(((j_56 != NULL) && (j_56 != t)))
      _fail(t);
    else
      j_56 = t;
    t = not_null(f_56);
    {
      ATerm r_53;
      r_53 = t;
      {
        ATerm k_56 = NULL;
        ATerm l_56 = NULL;
        ATerm n_56 (ATerm t)
        {
          t = not_null(l_56);
          if(((k_56 != NULL) && (k_56 != t)))
            _fail(t);
          else
            k_56 = t;
          t = not_null(l_56);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_56), not_null(j_56));
        {
          ATerm s_53 = t;
          int t_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(t_53);
            }
          else
            {
              t = s_53;
              t = (ATerm) ATempty;
            }
          if(((l_56 != NULL) && (l_56 != t)))
            _fail(t);
          else
            l_56 = t;
          t = n_56(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(i_56), not_null(j_56), not_null(k_56));
        t = table_put_0_0(t);
      }
      t = r_53;
    }
    return(t);
  }
  if(((f_56 != NULL) && (f_56 != t)))
    _fail(t);
  else
    f_56 = t;
  t = not_null(f_56);
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
      t = m_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  ATerm u_53;
  u_53 = t;
  {
    ATerm a_57 = NULL;
    ATerm p_57 (ATerm t)
    {
      ATerm b_57 = NULL,c_57 = NULL,m_57 = NULL;
      ATerm q_57 (ATerm t)
      {
        t = not_null(c_57);
        if(((y_56 != NULL) && (y_56 != t)))
          _fail(t);
        else
          y_56 = t;
        t = not_null(m_57);
        if(((x_56 != NULL) && (x_56 != t)))
          _fail(t);
        else
          x_56 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_56), term_p_42, not_null(x_56));
        t = table_put_0_0(t);
        t = not_null(y_56);
        {
          ATerm z_7 (ATerm t)
          {
            ATerm n_57 = NULL;
            ATerm r_57 (ATerm t)
            {
              ATerm o_57 = NULL;
              t = not_null(n_57);
              if(((o_57 != NULL) && (o_57 != t)))
                _fail(t);
              else
                o_57 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_56), not_null(o_57));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((n_57 != NULL) && (n_57 != t)))
              _fail(t);
            else
              n_57 = t;
            t = r_57(t);
            return(t);
          }
          t = map_1_0(z_7, t);
        }
        return(t);
      }
      t = not_null(a_57);
      if(((z_56 != NULL) && (z_56 != t)))
        _fail(t);
      else
        z_56 = t;
      t = not_null(a_57);
      {
        ATerm v_53 = t;
        int w_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_56), term_p_42);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(w_53);
          }
        else
          {
            t = v_53;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((b_57 != NULL) && (b_57 != t)))
          _fail(t);
        else
          b_57 = t;
        t = not_null(b_57);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_57 = ATgetFirst((ATermList) t);
            m_57 = (ATerm) ATgetNext((ATermList) t);
            t = q_57(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = g_99(t);
    if(((a_57 != NULL) && (a_57 != t)))
      _fail(t);
    else
      a_57 = t;
    t = p_57(t);
  }
  t = u_53;
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm t_57 = NULL;
  ATerm v_57 (ATerm t)
  {
    ATerm u_57 = NULL;
    t = not_null(t_57);
    if(((u_57 != NULL) && (u_57 != t)))
      _fail(t);
    else
      u_57 = t;
    t = not_null(t_57);
    t = SSL_remove(not_null(u_57));
    return(t);
  }
  if(((t_57 != NULL) && (t_57 != t)))
    _fail(t);
  else
    t_57 = t;
  t = v_57(t);
  return(t);
}
ATerm restore_always_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  ATerm f_54 = t;
  int h_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_81(t);
      t = v_81(t);
      ;
      LocalPopChoice(h_54);
    }
  else
    {
      t = f_54;
      t = v_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm y_57 = NULL;
  ATerm i_54;
  i_54 = t;
  {
    ATerm z_57 = NULL;
    ATerm h_58 (ATerm t)
    {
      ATerm a_58 = NULL;
      t = not_null(z_57);
      if(((y_57 != NULL) && (y_57 != t)))
        _fail(t);
      else
        y_57 = t;
      t = not_null(z_57);
      {
        ATerm b_58 = NULL;
        ATerm i_58 (ATerm t)
        {
          t = not_null(b_58);
          if(((a_58 != NULL) && (a_58 != t)))
            _fail(t);
          else
            a_58 = t;
          t = not_null(b_58);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_57), term_p_42);
        {
          ATerm j_54 = t;
          int k_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(k_54);
            }
          else
            {
              t = j_54;
              t = (ATerm) ATempty;
            }
          if(((b_58 != NULL) && (b_58 != t)))
            _fail(t);
          else
            b_58 = t;
          t = i_58(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(y_57), term_p_42, (ATerm) ATinsert(CheckATermList(not_null(a_58)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = f_99(t);
    if(((z_57 != NULL) && (z_57 != t)))
      _fail(t);
    else
      z_57 = t;
    t = h_58(t);
  }
  t = i_54;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  ATerm a_8 (ATerm t)
  {
    t = term_e_44;
    return(t);
  }
  t = begin_scope_1_0(a_8, t);
  {
    ATerm b_8 (ATerm t)
    {
      ATerm l_54;
      l_54 = t;
      {
        ATerm y_58 = NULL,z_58 = NULL,b_59 = NULL;
        ATerm c_59 (ATerm t)
        {
          t = not_null(z_58);
          if(((q_58 != NULL) && (q_58 != t)))
            _fail(t);
          else
            q_58 = t;
          t = not_null(b_59);
          if(((p_58 != NULL) && (p_58 != t)))
            _fail(t);
          else
            p_58 = t;
          t = not_null(q_58);
          {
            ATerm c_8 (ATerm t)
            {
              t = try_1_0(remove_file_0_0, t);
              return(t);
            }
            t = map_1_0(c_8, t);
          }
          return(t);
        }
        ATerm v_54 = t;
        int w_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_54;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(w_54);
          }
        else
          {
            t = v_54;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((y_58 != NULL) && (y_58 != t)))
          _fail(t);
        else
          y_58 = t;
        t = not_null(y_58);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_58 = ATgetFirst((ATermList) t);
            b_59 = (ATerm) ATgetNext((ATermList) t);
            t = c_59(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = l_54;
      {
        ATerm t_8 (ATerm t)
        {
          t = term_e_44;
          return(t);
        }
        t = end_scope_1_0(t_8, t);
      }
      return(t);
    }
    t = restore_always_2_0(s_109, b_8, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm y_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL;
        ATerm f_59 = NULL;
        ATerm g_59 (ATerm t)
        {
          t = not_null(f_59);
          if(((e_59 != NULL) && (e_59 != t)))
            _fail(t);
          else
            e_59 = t;
          t = not_null(f_59);
          return(t);
        }
        t = term_n_44;
        t = get_config_0_0(t);
        if(((f_59 != NULL) && (f_59 != t)))
          _fail(t);
        else
          f_59 = t;
        t = g_59(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_59));
        ;
        LocalPopChoice(z_54);
      }
    else
      {
        t = y_54;
        t = term_l_21;
      }
    t = t_109(t);
    {
      ATerm b_9 (ATerm t)
      {
        ATerm a_55 = t;
        int b_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_18;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(b_55);
          }
        else
          {
            t = a_55;
            t = term_c_55;
          }
        return(t);
      }
      t = copy_to_1_0(b_9, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(u_8, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm j_59 = NULL;
    if(((j_59 != NULL) && (j_59 != t)))
      _fail(t);
    else
      j_59 = t;
    t = not_null(j_59);
    if(match_string(t, "-k"))
      {
        t = not_null(j_59);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(j_59);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    ATerm v_55;
    v_55 = t;
    {
      ATerm k_59 = NULL;
      ATerm l_59 = NULL;
      ATerm m_59 (ATerm t)
      {
        t = not_null(l_59);
        if(((k_59 != NULL) && (k_59 != t)))
          _fail(t);
        else
          k_59 = t;
        t = not_null(l_59);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((l_59 != NULL) && (l_59 != t)))
        _fail(t);
      else
        l_59 = t;
      t = m_59(t);
      t = (ATerm) ATmakeAppl(sym__2, term_m_21, not_null(k_59));
      t = set_config_0_0(t);
    }
    t = v_55;
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    t = term_w_55;
    return(t);
  }
  t = ArgOption_3_0(c_9, d_9, e_9, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
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
    t = SSL_string_to_int(not_null(p_59));
    return(t);
  }
  if(((o_59 != NULL) && (o_59 != t)))
    _fail(t);
  else
    o_59 = t;
  t = q_59(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_9 (ATerm t)
      {
        ATerm w_59 = NULL;
        if(((w_59 != NULL) && (w_59 != t)))
          _fail(t);
        else
          w_59 = t;
        t = not_null(w_59);
        if(match_string(t, "-S"))
          {
            t = not_null(w_59);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(w_59);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_9 (ATerm t)
      {
        t = term_o_56;
        t = set_config_0_0(t);
        t = term_p_56;
        return(t);
      }
      ATerm v_9 (ATerm t)
      {
        t = term_q_56;
        return(t);
      }
      t = Option_3_0(f_9, u_9, v_9, t);
      ;
      LocalPopChoice(d_56);
    }
  else
    {
      t = c_56;
      {
        ATerm r_56 = t;
        int s_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_9 (ATerm t)
            {
              ATerm x_59 = NULL;
              if(((x_59 != NULL) && (x_59 != t)))
                _fail(t);
              else
                x_59 = t;
              t = not_null(x_59);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(x_59);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_10 (ATerm t)
            {
              ATerm a_60 = NULL;
              ATerm t_56;
              t_56 = t;
              {
                ATerm y_59 = NULL;
                ATerm z_59 = NULL;
                ATerm d_60 (ATerm t)
                {
                  t = not_null(z_59);
                  if(((y_59 != NULL) && (y_59 != t)))
                    _fail(t);
                  else
                    y_59 = t;
                  t = not_null(z_59);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((z_59 != NULL) && (z_59 != t)))
                  _fail(t);
                else
                  z_59 = t;
                t = d_60(t);
                t = (ATerm) ATmakeAppl(sym__2, term_s_22, not_null(y_59));
                t = set_config_0_0(t);
              }
              t = t_56;
              {
                ATerm b_60 = NULL;
                ATerm e_60 (ATerm t)
                {
                  t = not_null(b_60);
                  if(((a_60 != NULL) && (a_60 != t)))
                    _fail(t);
                  else
                    a_60 = t;
                  t = not_null(b_60);
                  return(t);
                }
                if(((b_60 != NULL) && (b_60 != t)))
                  _fail(t);
                else
                  b_60 = t;
                t = e_60(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_60));
              }
              return(t);
            }
            ATerm f_10 (ATerm t)
            {
              t = term_u_56;
              return(t);
            }
            t = ArgOption_3_0(w_9, e_10, f_10, t);
            ;
            LocalPopChoice(s_56);
          }
        else
          {
            t = r_56;
            {
              ATerm g_10 (ATerm t)
              {
                ATerm c_60 = NULL;
                if(((c_60 != NULL) && (c_60 != t)))
                  _fail(t);
                else
                  c_60 = t;
                t = not_null(c_60);
                if(match_string(t, "-s"))
                  {
                    t = not_null(c_60);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_10 (ATerm t)
              {
                t = term_w_56;
                t = set_config_0_0(t);
                t = term_d_57;
                return(t);
              }
              ATerm i_10 (ATerm t)
              {
                t = term_e_57;
                return(t);
              }
              t = Option_3_0(g_10, h_10, i_10, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(g_57);
    }
  else
    {
      t = f_57;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm j_10 (ATerm t)
  {
    ATerm i_60 = NULL;
    if(((i_60 != NULL) && (i_60 != t)))
      _fail(t);
    else
      i_60 = t;
    t = not_null(i_60);
    if(match_string(t, "-o"))
      {
        t = not_null(i_60);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(i_60);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    ATerm l_60 = NULL;
    ATerm h_57;
    h_57 = t;
    {
      ATerm j_60 = NULL;
      ATerm k_60 = NULL;
      ATerm n_60 (ATerm t)
      {
        t = not_null(k_60);
        if(((j_60 != NULL) && (j_60 != t)))
          _fail(t);
        else
          j_60 = t;
        t = not_null(k_60);
        return(t);
      }
      if(((k_60 != NULL) && (k_60 != t)))
        _fail(t);
      else
        k_60 = t;
      t = n_60(t);
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, not_null(j_60));
      t = set_config_0_0(t);
    }
    t = h_57;
    {
      ATerm m_60 = NULL;
      ATerm o_60 (ATerm t)
      {
        t = not_null(m_60);
        if(((l_60 != NULL) && (l_60 != t)))
          _fail(t);
        else
          l_60 = t;
        t = not_null(m_60);
        return(t);
      }
      if(((m_60 != NULL) && (m_60 != t)))
        _fail(t);
      else
        m_60 = t;
      t = o_60(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_60));
    }
    return(t);
  }
  ATerm e_11 (ATerm t)
  {
    t = term_i_57;
    return(t);
  }
  t = ArgOption_3_0(j_10, d_11, e_11, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
      {
        ATerm f_11 (ATerm t)
        {
          ATerm q_60 = NULL;
          if(((q_60 != NULL) && (q_60 != t)))
            _fail(t);
          else
            q_60 = t;
          t = not_null(q_60);
          if(match_string(t, "-b"))
            {
              t = not_null(q_60);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_11 (ATerm t)
        {
          t = term_s_57;
          t = set_config_0_0(t);
          t = term_w_57;
          return(t);
        }
        ATerm t_11 (ATerm t)
        {
          t = term_x_57;
          return(t);
        }
        t = Option_3_0(f_11, g_11, t_11, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
  ATerm g_61 (ATerm t)
  {
    t = not_null(w_60);
    t = register_usage_1_0(k_0, t);
    return(t);
  }
  ATerm h_61 (ATerm t)
  {
    ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
    t = not_null(x_60);
    if(((b_61 != NULL) && (b_61 != t)))
      _fail(t);
    else
      b_61 = t;
    t = not_null(z_60);
    if(((c_61 != NULL) && (c_61 != t)))
      _fail(t);
    else
      c_61 = t;
    t = not_null(a_61);
    if(((d_61 != NULL) && (d_61 != t)))
      _fail(t);
    else
      d_61 = t;
    t = not_null(w_60);
    {
      ATerm c_58;
      c_58 = t;
      t = not_null(b_61);
      t = h_0(t);
      t = c_58;
      {
        ATerm f_61 = NULL;
        ATerm s_61 (ATerm t)
        {
          t = not_null(f_61);
          if(((e_61 != NULL) && (e_61 != t)))
            _fail(t);
          else
            e_61 = t;
          t = not_null(f_61);
          return(t);
        }
        t = not_null(c_61);
        t = i_0(t);
        if(((f_61 != NULL) && (f_61 != t)))
          _fail(t);
        else
          f_61 = t;
        t = s_61(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(d_61)), not_null(e_61));
      }
    }
    return(t);
  }
  if(((w_60 != NULL) && (w_60 != t)))
    _fail(t);
  else
    w_60 = t;
  t = not_null(w_60);
  if(match_string(t, "register-usage-info"))
    {
      t = g_61(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_60 = ATgetFirst((ATermList) t);
          y_60 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(y_60);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_60 = ATgetFirst((ATermList) t);
              a_61 = (ATerm) ATgetNext((ATermList) t);
              t = h_61(t);
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
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm x_61 = NULL;
    if(((x_61 != NULL) && (x_61 != t)))
      _fail(t);
    else
      x_61 = t;
    t = not_null(x_61);
    if(match_string(t, "-i"))
      {
        t = not_null(x_61);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(x_61);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_12 (ATerm t)
  {
    ATerm a_62 = NULL;
    ATerm d_58;
    d_58 = t;
    {
      ATerm y_61 = NULL;
      ATerm z_61 = NULL;
      ATerm c_62 (ATerm t)
      {
        t = not_null(z_61);
        if(((y_61 != NULL) && (y_61 != t)))
          _fail(t);
        else
          y_61 = t;
        t = not_null(z_61);
        return(t);
      }
      if(((z_61 != NULL) && (z_61 != t)))
        _fail(t);
      else
        z_61 = t;
      t = c_62(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_44, not_null(y_61));
      t = set_config_0_0(t);
    }
    t = d_58;
    {
      ATerm b_62 = NULL;
      ATerm d_62 (ATerm t)
      {
        t = not_null(b_62);
        if(((a_62 != NULL) && (a_62 != t)))
          _fail(t);
        else
          a_62 = t;
        t = not_null(b_62);
        return(t);
      }
      if(((b_62 != NULL) && (b_62 != t)))
        _fail(t);
      else
        b_62 = t;
      t = d_62(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_62));
    }
    return(t);
  }
  ATerm c_12 (ATerm t)
  {
    t = term_e_58;
    return(t);
  }
  t = ArgOption_3_0(u_11, b_12, c_12, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm f_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_58);
    }
  else
    {
      t = f_58;
      {
        ATerm j_58 = t;
        int k_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(k_58);
          }
        else
          {
            t = j_58;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_58;
  l_58 = t;
  {
    ATerm f_62 = NULL;
    ATerm g_62 = NULL;
    ATerm t_62 (ATerm t)
    {
      t = not_null(g_62);
      if(((f_62 != NULL) && (f_62 != t)))
        _fail(t);
      else
        f_62 = t;
      t = not_null(g_62);
      return(t);
    }
    t = term_g_43;
    t = whoami_0_0(t);
    if(((g_62 != NULL) && (g_62 != t)))
      _fail(t);
    else
      g_62 = t;
    t = t_62(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_58), not_null(f_62)), term_m_58));
    t = printnl_0_0(t);
    t = term_d_22;
    t = exit_0_0(t);
  }
  t = l_58;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_62 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm z_62 = NULL;
    ATerm a_63 (ATerm t)
    {
      t = not_null(z_62);
      if(((w_62 != NULL) && (w_62 != t)))
        _fail(t);
      else
        w_62 = t;
      t = not_null(z_62);
      return(t);
    }
    t = term_g_43;
    t = whoami_0_0(t);
    if(((z_62 != NULL) && (z_62 != t)))
      _fail(t);
    else
      z_62 = t;
    t = a_63(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATinsert(ATinsert(ATempty, term_o_58), not_null(w_62)));
    t = printnl_0_0(t);
    t = term_d_22;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_58;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm d_63 = NULL;
  ATerm f_63 (ATerm t)
  {
    ATerm e_63 = NULL;
    t = not_null(d_63);
    if(((e_63 != NULL) && (e_63 != t)))
      _fail(t);
    else
      e_63 = t;
    t = not_null(d_63);
    t = SSL_TicksToSeconds(not_null(e_63));
    return(t);
  }
  if(((d_63 != NULL) && (d_63 != t)))
    _fail(t);
  else
    d_63 = t;
  t = f_63(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  ATerm w_63 (ATerm t)
  {
    ATerm u_63 = NULL,v_63 = NULL;
    t = not_null(s_63);
    if(((u_63 != NULL) && (u_63 != t)))
      _fail(t);
    else
      u_63 = t;
    t = not_null(t_63);
    if(((v_63 != NULL) && (v_63 != t)))
      _fail(t);
    else
      v_63 = t;
    t = not_null(r_63);
    {
      ATerm s_58 = t;
      int t_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(u_63), not_null(v_63));
          ;
          LocalPopChoice(t_58);
        }
      else
        {
          t = s_58;
          t = SSL_addr(not_null(u_63), not_null(v_63));
        }
    }
    return(t);
  }
  if(((r_63 != NULL) && (r_63 != t)))
    _fail(t);
  else
    r_63 = t;
  t = not_null(r_63);
  if(match_cons(t, sym__2))
    {
      s_63 = ATgetArgument(t, 0);
      t_63 = ATgetArgument(t, 1);
      t = w_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t)
{
  ATerm u_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = r_94(t);
      ;
      LocalPopChoice(v_58);
    }
  else
    {
      t = u_58;
      {
        ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
        ATerm v_64 (ATerm t)
        {
          ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
          t = not_null(p_64);
          if(((r_64 != NULL) && (r_64 != t)))
            _fail(t);
          else
            r_64 = t;
          t = not_null(q_64);
          if(((s_64 != NULL) && (s_64 != t)))
            _fail(t);
          else
            s_64 = t;
          t = not_null(o_64);
          {
            ATerm u_64 = NULL;
            ATerm w_64 (ATerm t)
            {
              t = not_null(u_64);
              if(((t_64 != NULL) && (t_64 != t)))
                _fail(t);
              else
                t_64 = t;
              t = not_null(u_64);
              return(t);
            }
            t = not_null(s_64);
            t = foldr_2_0(r_94, s_94, t);
            if(((u_64 != NULL) && (u_64 != t)))
              _fail(t);
            else
              u_64 = t;
            t = w_64(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_64), not_null(t_64));
            t = s_94(t);
          }
          return(t);
        }
        if(((o_64 != NULL) && (o_64 != t)))
          _fail(t);
        else
          o_64 = t;
        t = not_null(o_64);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_64 = ATgetFirst((ATermList) t);
            q_64 = (ATerm) ATgetNext((ATermList) t);
            t = v_64(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm t)
{
  ATerm n_65 = NULL;
  ATerm e_66 (ATerm t)
  {
    ATerm o_65 = NULL,r_65 = NULL;
    t = not_null(n_65);
    if(((o_65 != NULL) && (o_65 != t)))
      _fail(t);
    else
      o_65 = t;
    t = not_null(n_65);
    {
      ATerm s_65 = NULL;
      ATerm f_66 (ATerm t)
      {
        ATerm y_65 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
        ATerm g_66 (ATerm t)
        {
          t = not_null(d_66);
          if(((r_65 != NULL) && (r_65 != t)))
            _fail(t);
          else
            r_65 = t;
          t = not_null(b_66);
          return(t);
        }
        t = not_null(s_65);
        if(((y_65 != NULL) && (y_65 != t)))
          _fail(t);
        else
          y_65 = t;
        t = not_null(s_65);
        t = SSL_explode_term(not_null(y_65));
        if(((b_66 != NULL) && (b_66 != t)))
          _fail(t);
        else
          b_66 = t;
        t = not_null(b_66);
        if(match_cons(t, sym__2))
          {
            c_66 = ATgetArgument(t, 0);
            d_66 = ATgetArgument(t, 1);
            t = g_66(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(o_65);
      if(((s_65 != NULL) && (s_65 != t)))
        _fail(t);
      else
        s_65 = t;
      t = f_66(t);
      t = not_null(r_65);
      t = foldr_2_0(k_98, l_98, t);
    }
    return(t);
  }
  if(((n_65 != NULL) && (n_65 != t)))
    _fail(t);
  else
    n_65 = t;
  t = e_66(t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm f_12 (ATerm t)
    {
      t = term_e_56;
      return(t);
    }
    t = crush_2_0(f_12, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  ATerm o_66 (ATerm t)
  {
    ATerm m_66 = NULL,n_66 = NULL;
    t = not_null(k_66);
    if(((m_66 != NULL) && (m_66 != t)))
      _fail(t);
    else
      m_66 = t;
    t = not_null(l_66);
    if(((n_66 != NULL) && (n_66 != t)))
      _fail(t);
    else
      n_66 = t;
    t = not_null(j_66);
    {
      ATerm w_58;
      w_58 = t;
      {
        ATerm x_58 = t;
        int a_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(m_66), not_null(n_66));
            ;
            LocalPopChoice(a_59);
          }
        else
          {
            t = x_58;
            t = SSL_gtr(not_null(m_66), not_null(n_66));
          }
      }
      t = w_58;
    }
    return(t);
  }
  if(((j_66 != NULL) && (j_66 != t)))
    _fail(t);
  else
    j_66 = t;
  t = not_null(j_66);
  if(match_cons(t, sym__2))
    {
      k_66 = ATgetArgument(t, 0);
      l_66 = ATgetArgument(t, 1);
      t = o_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_66 = NULL;
  ATerm d_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
      ATerm v_66 (ATerm t)
      {
        t = not_null(t_66);
        if(((r_66 != NULL) && (r_66 != t)))
          _fail(t);
        else
          r_66 = t;
        t = not_null(u_66);
        if(((r_66 != NULL) && (r_66 != t)))
          _fail(t);
        else
          r_66 = t;
        t = not_null(s_66);
        return(t);
      }
      if(((s_66 != NULL) && (s_66 != t)))
        _fail(t);
      else
        s_66 = t;
      t = not_null(s_66);
      if(match_cons(t, sym__2))
        {
          t_66 = ATgetArgument(t, 0);
          u_66 = ATgetArgument(t, 1);
          t = v_66(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(h_59);
    }
  else
    {
      t = d_59;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm g_12 (ATerm t)
  {
    ATerm i_59;
    i_59 = t;
    {
      ATerm x_66 = NULL;
      ATerm y_66 = NULL;
      ATerm z_66 (ATerm t)
      {
        t = not_null(y_66);
        if(((x_66 != NULL) && (x_66 != t)))
          _fail(t);
        else
          x_66 = t;
        t = not_null(y_66);
        return(t);
      }
      t = term_s_22;
      t = get_config_0_0(t);
      if(((y_66 != NULL) && (y_66 != t)))
        _fail(t);
      else
        y_66 = t;
      t = z_66(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_66), term_d_22);
      t = geq_0_0(t);
    }
    t = i_59;
    t = f_102(t);
    return(t);
  }
  t = try_1_0(g_12, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm c_67 = NULL,e_67 = NULL;
    ATerm n_59;
    n_59 = t;
    {
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
      t = run_time_0_0(t);
      if(((d_67 != NULL) && (d_67 != t)))
        _fail(t);
      else
        d_67 = t;
      t = g_67(t);
    }
    t = n_59;
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
      t = term_g_43;
      t = whoami_0_0(t);
      if(((f_67 != NULL) && (f_67 != t)))
        _fail(t);
      else
        f_67 = t;
      t = h_67(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_59), not_null(c_67)), term_d_23), not_null(e_67)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(h_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_e_56;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm o_67 = NULL;
  ATerm u_67 (ATerm t)
  {
    ATerm p_67 = NULL,q_67 = NULL,s_67 = NULL;
    t = not_null(o_67);
    if(((p_67 != NULL) && (p_67 != t)))
      _fail(t);
    else
      p_67 = t;
    t = not_null(o_67);
    {
      ATerm s_59;
      s_59 = t;
      {
        ATerm r_67 = NULL;
        ATerm v_67 (ATerm t)
        {
          t = not_null(r_67);
          if(((q_67 != NULL) && (q_67 != t)))
            _fail(t);
          else
            q_67 = t;
          t = not_null(r_67);
          return(t);
        }
        t = SSLgetAnnotations(not_null(p_67));
        if(((r_67 != NULL) && (r_67 != t)))
          _fail(t);
        else
          r_67 = t;
        t = v_67(t);
      }
      t = s_59;
      {
        ATerm t_67 = NULL;
        ATerm w_67 (ATerm t)
        {
          t = not_null(t_67);
          if(((s_67 != NULL) && (s_67 != t)))
            _fail(t);
          else
            s_67 = t;
          t = not_null(t_67);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_67));
        if(((t_67 != NULL) && (t_67 != t)))
          _fail(t);
        else
          t_67 = t;
        t = w_67(t);
        t = not_null(s_67);
      }
    }
    return(t);
  }
  if(((o_67 != NULL) && (o_67 != t)))
    _fail(t);
  else
    o_67 = t;
  t = not_null(o_67);
  if(match_cons(t, sym_Version_0))
    {
      t = u_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_59;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_59);
    }
  else
    {
      t = t_59;
      {
        ATerm i_12 (ATerm t)
        {
          ATerm f_60 = t;
          int g_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(g_60);
            }
          else
            {
              t = f_60;
              {
                ATerm h_60 = t;
                int p_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(p_60);
                  }
                else
                  {
                    t = h_60;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(i_12, t);
      }
    }
  t = a_104(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_67 = NULL;
  ATerm a_68 (ATerm t)
  {
    ATerm z_67 = NULL;
    t = not_null(y_67);
    if(((z_67 != NULL) && (z_67 != t)))
      _fail(t);
    else
      z_67 = t;
    t = not_null(y_67);
    t = SSL_table_create(not_null(z_67));
    return(t);
  }
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  t = a_68(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm c_68 = NULL;
  ATerm e_68 (ATerm t)
  {
    ATerm d_68 = NULL;
    t = not_null(c_68);
    if(((d_68 != NULL) && (d_68 != t)))
      _fail(t);
    else
      d_68 = t;
    t = not_null(c_68);
    {
      ATerm r_60;
      r_60 = t;
      t = term_s_60;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_s_60, term_t_60, not_null(d_68));
      t = table_put_0_0(t);
      t = r_60;
    }
    return(t);
  }
  if(((c_68 != NULL) && (c_68 != t)))
    _fail(t);
  else
    c_68 = t;
  t = e_68(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_68 = NULL;
  ATerm i_68 (ATerm t)
  {
    ATerm h_68 = NULL;
    t = not_null(g_68);
    if(((h_68 != NULL) && (h_68 != t)))
      _fail(t);
    else
      h_68 = t;
    t = not_null(g_68);
    t = SSL_table_destroy(not_null(h_68));
    return(t);
  }
  if(((g_68 != NULL) && (g_68 != t)))
    _fail(t);
  else
    g_68 = t;
  t = i_68(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm k_68 = NULL;
  ATerm m_68 (ATerm t)
  {
    ATerm l_68 = NULL;
    t = not_null(k_68);
    if(((l_68 != NULL) && (l_68 != t)))
      _fail(t);
    else
      l_68 = t;
    t = not_null(k_68);
    t = SSL_exit(not_null(l_68));
    return(t);
  }
  if(((k_68 != NULL) && (k_68 != t)))
    _fail(t);
  else
    k_68 = t;
  t = m_68(t);
  return(t);
}
ATerm long_description_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  ATerm e_69 (ATerm t)
  {
    ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
    t = not_null(t_68);
    if(((w_68 != NULL) && (w_68 != t)))
      _fail(t);
    else
      w_68 = t;
    t = not_null(u_68);
    if(((x_68 != NULL) && (x_68 != t)))
      _fail(t);
    else
      x_68 = t;
    t = not_null(x_68);
    {
      ATerm u_60;
      u_60 = t;
      {
        ATerm z_68 = NULL,b_69 = NULL,d_69 = NULL;
        ATerm i_69 (ATerm t)
        {
          t = not_null(d_69);
          if(((y_68 != NULL) && (y_68 != t)))
            _fail(t);
          else
            y_68 = t;
          t = not_null(d_69);
          return(t);
        }
        ATerm v_60;
        v_60 = t;
        {
          ATerm a_69 = NULL;
          ATerm g_69 (ATerm t)
          {
            t = not_null(a_69);
            if(((z_68 != NULL) && (z_68 != t)))
              _fail(t);
            else
              z_68 = t;
            t = not_null(a_69);
            return(t);
          }
          t = g_0(t);
          if(((a_69 != NULL) && (a_69 != t)))
            _fail(t);
          else
            a_69 = t;
          t = g_69(t);
        }
        t = v_60;
        {
          ATerm c_69 = NULL;
          ATerm h_69 (ATerm t)
          {
            t = not_null(c_69);
            if(((b_69 != NULL) && (b_69 != t)))
              _fail(t);
            else
              b_69 = t;
            t = not_null(c_69);
            return(t);
          }
          t = not_null(w_68);
          t = f_0(t);
          if(((c_69 != NULL) && (c_69 != t)))
            _fail(t);
          else
            c_69 = t;
          t = h_69(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(z_68)), not_null(b_69));
          if(((d_69 != NULL) && (d_69 != t)))
            _fail(t);
          else
            d_69 = t;
          t = i_69(t);
        }
      }
      t = u_60;
      {
        ATerm j_12 (ATerm t)
        {
          t = not_null(y_68);
          return(t);
        }
        t = reverse_acc_2_0(f_0, j_12, t);
      }
    }
    return(t);
  }
  ATerm f_69 (ATerm t)
  {
    t = term_g_43;
    t = g_0(t);
    return(t);
  }
  if(((v_68 != NULL) && (v_68 != t)))
    _fail(t);
  else
    v_68 = t;
  t = not_null(v_68);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_68 = ATgetFirst((ATermList) t);
      u_68 = (ATerm) ATgetNext((ATermList) t);
      t = e_69(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_69(t);
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
  ATerm u_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, u_12, t);
  return(t);
}
ATerm short_description_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm v_72 (ATerm), ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL;
  ATerm y_69 (ATerm t)
  {
    ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL,u_69 = NULL;
    ATerm a_70 (ATerm t)
    {
      ATerm v_69 = NULL,w_69 = NULL;
      t = not_null(u_69);
      if(((v_69 != NULL) && (v_69 != t)))
        _fail(t);
      else
        v_69 = t;
      t = not_null(u_69);
      {
        ATerm x_69 = NULL;
        ATerm b_70 (ATerm t)
        {
          t = not_null(x_69);
          if(((w_69 != NULL) && (w_69 != t)))
            _fail(t);
          else
            w_69 = t;
          t = not_null(x_69);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_69)), not_null(s_69));
        if(((x_69 != NULL) && (x_69 != t)))
          _fail(t);
        else
          x_69 = t;
        t = b_70(t);
        t = not_null(w_69);
      }
      return(t);
    }
    t = not_null(o_69);
    if(((q_69 != NULL) && (q_69 != t)))
      _fail(t);
    else
      q_69 = t;
    t = not_null(p_69);
    if(((r_69 != NULL) && (r_69 != t)))
      _fail(t);
    else
      r_69 = t;
    t = not_null(o_69);
    {
      ATerm t_69 = NULL;
      ATerm z_69 (ATerm t)
      {
        t = not_null(t_69);
        if(((s_69 != NULL) && (s_69 != t)))
          _fail(t);
        else
          s_69 = t;
        t = not_null(t_69);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_69));
      if(((t_69 != NULL) && (t_69 != t)))
        _fail(t);
      else
        t_69 = t;
      t = z_69(t);
      t = not_null(r_69);
      t = v_72(t);
      if(((u_69 != NULL) && (u_69 != t)))
        _fail(t);
      else
        u_69 = t;
      t = a_70(t);
    }
    return(t);
  }
  if(((o_69 != NULL) && (o_69 != t)))
    _fail(t);
  else
    o_69 = t;
  t = not_null(o_69);
  if(match_cons(t, sym_Program_1))
    {
      p_69 = ATgetArgument(t, 0);
      t = y_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_70 = NULL;
  ATerm i_61 = t;
  int j_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_70 = NULL;
      ATerm n_70 (ATerm t)
      {
        t = not_null(h_70);
        if(((g_70 != NULL) && (g_70 != t)))
          _fail(t);
        else
          g_70 = t;
        t = not_null(h_70);
        return(t);
      }
      t = term_r_58;
      t = get_config_0_0(t);
      if(((h_70 != NULL) && (h_70 != t)))
        _fail(t);
      else
        h_70 = t;
      t = n_70(t);
      ;
      LocalPopChoice(j_61);
    }
  else
    {
      t = i_61;
      {
        ATerm v_12 (ATerm t)
        {
          ATerm w_12 (ATerm t)
          {
            ATerm i_70 = NULL;
            ATerm o_70 (ATerm t)
            {
              t = not_null(i_70);
              if(((g_70 != NULL) && (g_70 != t)))
                _fail(t);
              else
                g_70 = t;
              t = not_null(i_70);
              return(t);
            }
            if(((i_70 != NULL) && (i_70 != t)))
              _fail(t);
            else
              i_70 = t;
            t = o_70(t);
            return(t);
          }
          t = Program_1_0(w_12, t);
          return(t);
        }
        t = option_defined_1_0(v_12, t);
      }
    }
  {
    ATerm x_12 (ATerm t)
    {
      ATerm y_12 (ATerm t)
      {
        t = not_null(g_70);
        return(t);
      }
      t = short_description_1_0(y_12, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(x_12, t);
    t = term_k_61;
    t = echo_0_0(t);
    t = term_n_61;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm k_13 (ATerm t)
      {
        ATerm j_70 = NULL;
        ATerm k_70 = NULL;
        ATerm p_70 (ATerm t)
        {
          t = not_null(k_70);
          if(((j_70 != NULL) && (j_70 != t)))
            _fail(t);
          else
            j_70 = t;
          t = not_null(k_70);
          return(t);
        }
        if(((k_70 != NULL) && (k_70 != t)))
          _fail(t);
        else
          k_70 = t;
        t = p_70(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_70)), term_o_61);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(k_13, t);
      {
        ATerm l_13 (ATerm t)
        {
          ATerm l_70 = NULL;
          ATerm m_70 = NULL;
          ATerm q_70 (ATerm t)
          {
            t = not_null(m_70);
            if(((l_70 != NULL) && (l_70 != t)))
              _fail(t);
            else
              l_70 = t;
            t = not_null(m_70);
            return(t);
          }
          ATerm m_13 (ATerm t)
          {
            t = not_null(g_70);
            return(t);
          }
          t = long_description_1_0(m_13, t);
          if(((m_70 != NULL) && (m_70 != t)))
            _fail(t);
          else
            m_70 = t;
          t = q_70(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(l_70)), term_p_61);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(l_13, t);
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
  ATerm q_61 = t;
  int r_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(r_61);
    }
  else
    {
      t = q_61;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
  ATerm y_70 (ATerm t)
  {
    ATerm w_70 = NULL,x_70 = NULL;
    t = not_null(u_70);
    if(((w_70 != NULL) && (w_70 != t)))
      _fail(t);
    else
      w_70 = t;
    t = not_null(v_70);
    if(((x_70 != NULL) && (x_70 != t)))
      _fail(t);
    else
      x_70 = t;
    t = not_null(t_70);
    {
      ATerm t_61;
      t_61 = t;
      t = SSL_printnl(not_null(w_70), not_null(x_70));
      t = t_61;
    }
    return(t);
  }
  if(((t_70 != NULL) && (t_70 != t)))
    _fail(t);
  else
    t_70 = t;
  t = not_null(t_70);
  if(match_cons(t, sym__2))
    {
      u_70 = ATgetArgument(t, 0);
      v_70 = ATgetArgument(t, 1);
      t = y_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm w_72 (ATerm), ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL;
  ATerm o_71 (ATerm t)
  {
    ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,k_71 = NULL;
    ATerm q_71 (ATerm t)
    {
      ATerm l_71 = NULL,m_71 = NULL;
      t = not_null(k_71);
      if(((l_71 != NULL) && (l_71 != t)))
        _fail(t);
      else
        l_71 = t;
      t = not_null(k_71);
      {
        ATerm n_71 = NULL;
        ATerm r_71 (ATerm t)
        {
          t = not_null(n_71);
          if(((m_71 != NULL) && (m_71 != t)))
            _fail(t);
          else
            m_71 = t;
          t = not_null(n_71);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_71)), not_null(i_71));
        if(((n_71 != NULL) && (n_71 != t)))
          _fail(t);
        else
          n_71 = t;
        t = r_71(t);
        t = not_null(m_71);
      }
      return(t);
    }
    t = not_null(e_71);
    if(((g_71 != NULL) && (g_71 != t)))
      _fail(t);
    else
      g_71 = t;
    t = not_null(f_71);
    if(((h_71 != NULL) && (h_71 != t)))
      _fail(t);
    else
      h_71 = t;
    t = not_null(e_71);
    {
      ATerm j_71 = NULL;
      ATerm p_71 (ATerm t)
      {
        t = not_null(j_71);
        if(((i_71 != NULL) && (i_71 != t)))
          _fail(t);
        else
          i_71 = t;
        t = not_null(j_71);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_71));
      if(((j_71 != NULL) && (j_71 != t)))
        _fail(t);
      else
        j_71 = t;
      t = p_71(t);
      t = not_null(h_71);
      t = w_72(t);
      if(((k_71 != NULL) && (k_71 != t)))
        _fail(t);
      else
        k_71 = t;
      t = q_71(t);
    }
    return(t);
  }
  if(((e_71 != NULL) && (e_71 != t)))
    _fail(t);
  else
    e_71 = t;
  t = not_null(e_71);
  if(match_cons(t, sym_Undefined_1))
    {
      f_71 = ATgetArgument(t, 0);
      t = o_71(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm s_71 (ATerm t)
  {
    ATerm u_61 = t;
    int v_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_89, _id, t);
        ;
        LocalPopChoice(v_61);
      }
    else
      {
        t = u_61;
        t = Cons_2_0(_id, s_71, t);
      }
    return(t);
  }
  t = s_71(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  t = fetch_1_0(o_105, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
  if(((u_71 != NULL) && (u_71 != t)))
    _fail(t);
  else
    u_71 = t;
  t = not_null(u_71);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(u_71);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_71 = ATgetFirst((ATermList) t);
          w_71 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(u_71);
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
  ATerm w_61;
  w_61 = t;
  {
    ATerm z_71 = NULL;
    ATerm c_72 = NULL;
    ATerm e_72 (ATerm t)
    {
      t = not_null(c_72);
      if(((z_71 != NULL) && (z_71 != t)))
        _fail(t);
      else
        z_71 = t;
      t = not_null(c_72);
      return(t);
    }
    ATerm e_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(h_62);
      }
    else
      {
        t = e_62;
        {
          ATerm a_72 = NULL;
          ATerm b_72 = NULL;
          ATerm d_72 (ATerm t)
          {
            t = not_null(b_72);
            if(((a_72 != NULL) && (a_72 != t)))
              _fail(t);
            else
              a_72 = t;
            t = not_null(b_72);
            return(t);
          }
          if(((b_72 != NULL) && (b_72 != t)))
            _fail(t);
          else
            b_72 = t;
          t = d_72(t);
          t = (ATerm) ATinsert(ATempty, not_null(a_72));
        }
      }
    if(((c_72 != NULL) && (c_72 != t)))
      _fail(t);
    else
      c_72 = t;
    t = e_72(t);
    t = (ATerm) ATmakeAppl(sym__2, term_c_55, not_null(z_71));
    t = printnl_0_0(t);
  }
  t = w_61;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_58;
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
  ATerm i_62 = t;
  int j_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(j_62);
    }
  else
    {
      t = i_62;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm j_72 = NULL;
  ATerm p_72 (ATerm t)
  {
    ATerm k_72 = NULL,l_72 = NULL,n_72 = NULL;
    t = not_null(j_72);
    if(((k_72 != NULL) && (k_72 != t)))
      _fail(t);
    else
      k_72 = t;
    t = not_null(j_72);
    {
      ATerm k_62;
      k_62 = t;
      {
        ATerm m_72 = NULL;
        ATerm q_72 (ATerm t)
        {
          t = not_null(m_72);
          if(((l_72 != NULL) && (l_72 != t)))
            _fail(t);
          else
            l_72 = t;
          t = not_null(m_72);
          return(t);
        }
        t = SSLgetAnnotations(not_null(k_72));
        if(((m_72 != NULL) && (m_72 != t)))
          _fail(t);
        else
          m_72 = t;
        t = q_72(t);
      }
      t = k_62;
      {
        ATerm o_72 = NULL;
        ATerm r_72 (ATerm t)
        {
          t = not_null(o_72);
          if(((n_72 != NULL) && (n_72 != t)))
            _fail(t);
          else
            n_72 = t;
          t = not_null(o_72);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_72));
        if(((o_72 != NULL) && (o_72 != t)))
          _fail(t);
        else
          o_72 = t;
        t = r_72(t);
        t = not_null(n_72);
      }
    }
    return(t);
  }
  if(((j_72 != NULL) && (j_72 != t)))
    _fail(t);
  else
    j_72 = t;
  t = not_null(j_72);
  if(match_cons(t, sym_Help_0))
    {
      t = p_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm l_62 = t;
  int m_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_81(t);
      ;
      LocalPopChoice(m_62);
    }
  else
    {
      t = l_62;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_62 = t;
  int o_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_13 (ATerm t)
      {
        ATerm u_72 = NULL;
        if(((u_72 != NULL) && (u_72 != t)))
          _fail(t);
        else
          u_72 = t;
        t = not_null(u_72);
        if(match_string(t, "--about"))
          {
            t = not_null(u_72);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm o_13 (ATerm t)
      {
        t = term_q_62;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm p_13 (ATerm t)
      {
        t = term_r_62;
        return(t);
      }
      t = Option_3_0(n_13, o_13, p_13, t);
      ;
      LocalPopChoice(o_62);
    }
  else
    {
      t = n_62;
      {
        ATerm q_13 (ATerm t)
        {
          ATerm x_72 = NULL;
          if(((x_72 != NULL) && (x_72 != t)))
            _fail(t);
          else
            x_72 = t;
          t = not_null(x_72);
          if(match_string(t, "--version"))
            {
              t = not_null(x_72);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_14 (ATerm t)
        {
          t = term_q_62;
          t = set_config_0_0(t);
          t = term_u_62;
          t = set_config_0_0(t);
          t = term_v_62;
          return(t);
        }
        ATerm j_14 (ATerm t)
        {
          t = term_x_62;
          return(t);
        }
        t = Option_3_0(q_13, i_14, j_14, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  ATerm g_73 (ATerm t)
  {
    ATerm e_73 = NULL,f_73 = NULL;
    t = not_null(c_73);
    if(((e_73 != NULL) && (e_73 != t)))
      _fail(t);
    else
      e_73 = t;
    t = not_null(d_73);
    if(((f_73 != NULL) && (f_73 != t)))
      _fail(t);
    else
      f_73 = t;
    t = not_null(b_73);
    t = SSL_table_get(not_null(e_73), not_null(f_73));
    return(t);
  }
  if(((b_73 != NULL) && (b_73 != t)))
    _fail(t);
  else
    b_73 = t;
  t = not_null(b_73);
  if(match_cons(t, sym__2))
    {
      c_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
      t = g_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  ATerm u_73 (ATerm t)
  {
    ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
    t = not_null(l_73);
    if(((q_73 != NULL) && (q_73 != t)))
      _fail(t);
    else
      q_73 = t;
    t = not_null(m_73);
    if(((r_73 != NULL) && (r_73 != t)))
      _fail(t);
    else
      r_73 = t;
    t = not_null(n_73);
    if(((p_73 != NULL) && (p_73 != t)))
      _fail(t);
    else
      p_73 = t;
    t = not_null(k_73);
    {
      ATerm y_62;
      y_62 = t;
      {
        ATerm s_73 = NULL;
        ATerm t_73 = NULL;
        ATerm v_73 (ATerm t)
        {
          t = not_null(t_73);
          if(((s_73 != NULL) && (s_73 != t)))
            _fail(t);
          else
            s_73 = t;
          t = not_null(t_73);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_73), not_null(r_73));
        {
          ATerm b_63 = t;
          int c_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(c_63);
            }
          else
            {
              t = b_63;
              t = (ATerm) ATempty;
            }
          if(((t_73 != NULL) && (t_73 != t)))
            _fail(t);
          else
            t_73 = t;
          t = v_73(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(q_73), not_null(r_73), (ATerm) ATinsert(CheckATermList(not_null(s_73)), not_null(p_73)));
        t = table_put_0_0(t);
      }
      t = y_62;
    }
    return(t);
  }
  if(((k_73 != NULL) && (k_73 != t)))
    _fail(t);
  else
    k_73 = t;
  t = not_null(k_73);
  if(match_cons(t, sym__3))
    {
      l_73 = ATgetArgument(t, 0);
      m_73 = ATgetArgument(t, 1);
      n_73 = ATgetArgument(t, 2);
      t = u_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm x_73 = NULL;
  ATerm y_73 = NULL;
  ATerm z_73 (ATerm t)
  {
    t = not_null(y_73);
    if(((x_73 != NULL) && (x_73 != t)))
      _fail(t);
    else
      x_73 = t;
    t = not_null(y_73);
    return(t);
  }
  t = term_g_43;
  t = t_106(t);
  if(((y_73 != NULL) && (y_73 != t)))
    _fail(t);
  else
    y_73 = t;
  t = z_73(t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_61, term_m_61, not_null(x_73));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL;
  ATerm l_74 (ATerm t)
  {
    t = not_null(e_74);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm m_74 (ATerm t)
  {
    ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
    t = not_null(f_74);
    if(((h_74 != NULL) && (h_74 != t)))
      _fail(t);
    else
      h_74 = t;
    t = not_null(g_74);
    if(((i_74 != NULL) && (i_74 != t)))
      _fail(t);
    else
      i_74 = t;
    t = not_null(e_74);
    {
      ATerm g_63;
      g_63 = t;
      t = not_null(h_74);
      t = a_0(t);
      t = g_63;
      {
        ATerm k_74 = NULL;
        ATerm n_74 (ATerm t)
        {
          t = not_null(k_74);
          if(((j_74 != NULL) && (j_74 != t)))
            _fail(t);
          else
            j_74 = t;
          t = not_null(k_74);
          return(t);
        }
        t = term_g_43;
        t = b_0(t);
        if(((k_74 != NULL) && (k_74 != t)))
          _fail(t);
        else
          k_74 = t;
        t = n_74(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(i_74)), not_null(j_74));
      }
    }
    return(t);
  }
  if(((e_74 != NULL) && (e_74 != t)))
    _fail(t);
  else
    e_74 = t;
  t = not_null(e_74);
  if(match_string(t, "register-usage-info"))
    {
      t = l_74(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_74 = ATgetFirst((ATermList) t);
          g_74 = (ATerm) ATgetNext((ATermList) t);
          t = m_74(t);
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
  ATerm q_14 (ATerm t)
  {
    ATerm p_74 = NULL;
    if(((p_74 != NULL) && (p_74 != t)))
      _fail(t);
    else
      p_74 = t;
    t = not_null(p_74);
    if(match_string(t, "--help"))
      {
        t = not_null(p_74);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(p_74);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(p_74);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_14 (ATerm t)
  {
    t = term_h_63;
    t = set_config_0_0(t);
    t = term_i_63;
    return(t);
  }
  ATerm y_14 (ATerm t)
  {
    t = term_j_63;
    return(t);
  }
  t = Option_3_0(q_14, r_14, y_14, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  ATerm x_74 (ATerm t)
  {
    ATerm v_74 = NULL,w_74 = NULL;
    t = not_null(t_74);
    if(((v_74 != NULL) && (v_74 != t)))
      _fail(t);
    else
      v_74 = t;
    t = not_null(u_74);
    if(((w_74 != NULL) && (w_74 != t)))
      _fail(t);
    else
      w_74 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(w_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_74)));
    return(t);
  }
  if(((s_74 != NULL) && (s_74 != t)))
    _fail(t);
  else
    s_74 = t;
  t = not_null(s_74);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_74 = ATgetFirst((ATermList) t);
      u_74 = (ATerm) ATgetNext((ATermList) t);
      t = x_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  ATerm s_75 (ATerm t)
  {
    ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,m_75 = NULL;
    ATerm u_75 (ATerm t)
    {
      ATerm n_75 = NULL,o_75 = NULL;
      ATerm v_75 (ATerm t)
      {
        ATerm p_75 = NULL,q_75 = NULL;
        t = not_null(o_75);
        if(((p_75 != NULL) && (p_75 != t)))
          _fail(t);
        else
          p_75 = t;
        t = not_null(o_75);
        {
          ATerm r_75 = NULL;
          ATerm w_75 (ATerm t)
          {
            t = not_null(r_75);
            if(((q_75 != NULL) && (q_75 != t)))
              _fail(t);
            else
              q_75 = t;
            t = not_null(r_75);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_75)), not_null(n_75)), not_null(k_75));
          if(((r_75 != NULL) && (r_75 != t)))
            _fail(t);
          else
            r_75 = t;
          t = w_75(t);
          t = not_null(q_75);
        }
        return(t);
      }
      t = not_null(m_75);
      if(((n_75 != NULL) && (n_75 != t)))
        _fail(t);
      else
        n_75 = t;
      t = not_null(j_75);
      t = j_67(t);
      if(((o_75 != NULL) && (o_75 != t)))
        _fail(t);
      else
        o_75 = t;
      t = v_75(t);
      return(t);
    }
    t = not_null(e_75);
    if(((h_75 != NULL) && (h_75 != t)))
      _fail(t);
    else
      h_75 = t;
    t = not_null(f_75);
    if(((i_75 != NULL) && (i_75 != t)))
      _fail(t);
    else
      i_75 = t;
    t = not_null(g_75);
    if(((j_75 != NULL) && (j_75 != t)))
      _fail(t);
    else
      j_75 = t;
    t = not_null(e_75);
    {
      ATerm l_75 = NULL;
      ATerm t_75 (ATerm t)
      {
        t = not_null(l_75);
        if(((k_75 != NULL) && (k_75 != t)))
          _fail(t);
        else
          k_75 = t;
        t = not_null(l_75);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_75));
      if(((l_75 != NULL) && (l_75 != t)))
        _fail(t);
      else
        l_75 = t;
      t = t_75(t);
      t = not_null(i_75);
      t = i_67(t);
      if(((m_75 != NULL) && (m_75 != t)))
        _fail(t);
      else
        m_75 = t;
      t = u_75(t);
    }
    return(t);
  }
  if(((e_75 != NULL) && (e_75 != t)))
    _fail(t);
  else
    e_75 = t;
  t = not_null(e_75);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_75 = ATgetFirst((ATermList) t);
      g_75 = (ATerm) ATgetNext((ATermList) t);
      t = s_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm b_76 = NULL;
  ATerm h_76 (ATerm t)
  {
    ATerm c_76 = NULL,d_76 = NULL,f_76 = NULL;
    t = not_null(b_76);
    if(((c_76 != NULL) && (c_76 != t)))
      _fail(t);
    else
      c_76 = t;
    t = not_null(b_76);
    {
      ATerm k_63;
      k_63 = t;
      {
        ATerm e_76 = NULL;
        ATerm i_76 (ATerm t)
        {
          t = not_null(e_76);
          if(((d_76 != NULL) && (d_76 != t)))
            _fail(t);
          else
            d_76 = t;
          t = not_null(e_76);
          return(t);
        }
        t = SSLgetAnnotations(not_null(c_76));
        if(((e_76 != NULL) && (e_76 != t)))
          _fail(t);
        else
          e_76 = t;
        t = i_76(t);
      }
      t = k_63;
      {
        ATerm g_76 = NULL;
        ATerm j_76 (ATerm t)
        {
          t = not_null(g_76);
          if(((f_76 != NULL) && (f_76 != t)))
            _fail(t);
          else
            f_76 = t;
          t = not_null(g_76);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(d_76));
        if(((g_76 != NULL) && (g_76 != t)))
          _fail(t);
        else
          g_76 = t;
        t = j_76(t);
        t = not_null(f_76);
      }
    }
    return(t);
  }
  if(((b_76 != NULL) && (b_76 != t)))
    _fail(t);
  else
    b_76 = t;
  t = not_null(b_76);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_76(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
  ATerm r_76 (ATerm t)
  {
    ATerm p_76 = NULL,q_76 = NULL;
    t = not_null(n_76);
    if(((p_76 != NULL) && (p_76 != t)))
      _fail(t);
    else
      p_76 = t;
    t = not_null(o_76);
    if(((q_76 != NULL) && (q_76 != t)))
      _fail(t);
    else
      q_76 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_a_21, not_null(p_76), not_null(q_76));
    t = table_put_0_0(t);
    return(t);
  }
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  t = not_null(m_76);
  if(match_cons(t, sym__2))
    {
      n_76 = ATgetArgument(t, 0);
      o_76 = ATgetArgument(t, 1);
      t = r_76(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm l_63;
  l_63 = t;
  {
    ATerm z_14 (ATerm t)
    {
      t = term_m_63;
      t = r_106(t);
      return(t);
    }
    t = try_1_0(z_14, t);
  }
  t = l_63;
  {
    ATerm g_15 (ATerm t)
    {
      ATerm w_76 = NULL;
      ATerm n_63;
      n_63 = t;
      {
        ATerm u_76 = NULL;
        ATerm v_76 = NULL;
        ATerm y_76 (ATerm t)
        {
          t = not_null(v_76);
          if(((u_76 != NULL) && (u_76 != t)))
            _fail(t);
          else
            u_76 = t;
          t = not_null(v_76);
          return(t);
        }
        if(((v_76 != NULL) && (v_76 != t)))
          _fail(t);
        else
          v_76 = t;
        t = y_76(t);
        t = (ATerm) ATmakeAppl(sym__2, term_r_58, not_null(u_76));
        t = set_config_0_0(t);
      }
      t = n_63;
      {
        ATerm x_76 = NULL;
        ATerm z_76 (ATerm t)
        {
          t = not_null(x_76);
          if(((w_76 != NULL) && (w_76 != t)))
            _fail(t);
          else
            w_76 = t;
          t = not_null(x_76);
          return(t);
        }
        if(((x_76 != NULL) && (x_76 != t)))
          _fail(t);
        else
          x_76 = t;
        t = z_76(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_76));
      }
      return(t);
    }
    ATerm k_15 (ATerm t)
    {
      ATerm o_63 = t;
      int p_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_63 = t;
          int x_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(x_63);
            }
          else
            {
              t = q_63;
              t = r_106(t);
              t = Cons_2_0(_id, k_15, t);
            }
          ;
          LocalPopChoice(p_63);
        }
      else
        {
          t = o_63;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(g_15, k_15, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
  ATerm y_63;
  y_63 = t;
  {
    ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
    ATerm k_77 (ATerm t)
    {
      t = not_null(h_77);
      if(((d_77 != NULL) && (d_77 != t)))
        _fail(t);
      else
        d_77 = t;
      t = not_null(i_77);
      if(((e_77 != NULL) && (e_77 != t)))
        _fail(t);
      else
        e_77 = t;
      t = not_null(j_77);
      if(((f_77 != NULL) && (f_77 != t)))
        _fail(t);
      else
        f_77 = t;
      t = not_null(g_77);
      t = SSL_table_put(not_null(d_77), not_null(e_77), not_null(f_77));
      return(t);
    }
    if(((g_77 != NULL) && (g_77 != t)))
      _fail(t);
    else
      g_77 = t;
    t = not_null(g_77);
    if(match_cons(t, sym__3))
      {
        h_77 = ATgetArgument(t, 0);
        i_77 = ATgetArgument(t, 1);
        j_77 = ATgetArgument(t, 2);
        t = k_77(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = y_63;
  return(t);
}
ATerm parse_options_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm m_77 = NULL;
  ATerm z_63;
  z_63 = t;
  t = term_a_64;
  t = table_put_0_0(t);
  t = z_63;
  {
    ATerm l_15 (ATerm t)
    {
      ATerm b_64 = t;
      int c_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_106(t);
          ;
          LocalPopChoice(c_64);
        }
      else
        {
          t = b_64;
          {
            ATerm d_64 = t;
            int e_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_64);
              }
            else
              {
                t = d_64;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_15, t);
    {
      ATerm s_15 (ATerm t)
      {
        ATerm f_64 = t;
        int g_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_64;
            h_64 = t;
            {
              ATerm i_64 = t;
              int j_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_59;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(j_64);
                }
              else
                {
                  t = i_64;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = h_64;
            t = system_usage_0_0(t);
            t = term_e_56;
            t = exit_0_0(t);
            ;
            LocalPopChoice(g_64);
          }
        else
          {
            t = f_64;
            {
              ATerm k_64 = t;
              int l_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_64;
                  m_64 = t;
                  t = term_p_62;
                  t = get_config_0_0(t);
                  t = m_64;
                  t = system_about_0_0(t);
                  t = term_e_56;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(l_64);
                }
              else
                {
                  t = k_64;
                  {
                    ATerm w_15 (ATerm t)
                    {
                      ATerm x_15 (ATerm t)
                      {
                        ATerm n_77 = NULL;
                        ATerm o_77 (ATerm t)
                        {
                          t = not_null(n_77);
                          if(((m_77 != NULL) && (m_77 != t)))
                            _fail(t);
                          else
                            m_77 = t;
                          t = not_null(n_77);
                          return(t);
                        }
                        if(((n_77 != NULL) && (n_77 != t)))
                          _fail(t);
                        else
                          n_77 = t;
                        t = o_77(t);
                        return(t);
                      }
                      t = Undefined_1_0(x_15, t);
                      return(t);
                    }
                    t = option_defined_1_0(w_15, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_77)), term_n_64));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_d_22;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(s_15, t);
      {
        ATerm x_64;
        x_64 = t;
        t = term_l_61;
        t = table_destroy_0_0(t);
        t = x_64;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm t)
{
  t = parse_options_1_0(c_104, t);
  t = store_options_0_0(t);
  t = e_104(t);
  {
    ATerm y_64 = t;
    int z_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_104, t);
        ;
        LocalPopChoice(z_64);
      }
    else
      {
        t = y_64;
        {
          ATerm a_65 = t;
          int b_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_65);
            }
          else
            {
              t = a_65;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm t)
{
  t = option_wrap_4_0(g_104, default_usage_0_0, _id, h_104, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm t)
{
  ATerm y_15 (ATerm t)
  {
    ATerm c_65 = t;
    int d_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_109(t);
        ;
        LocalPopChoice(d_65);
      }
    else
      {
        t = c_65;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm z_15 (ATerm t)
  {
    t = xtc_io_1_0(y_109, t);
    return(t);
  }
  t = option_wrap_2_0(y_15, z_15, t);
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(d_110, e_110, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL;
  ATerm a_16 (ATerm t)
  {
    ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL;
    ATerm w_77 (ATerm t)
    {
      t = not_null(u_77);
      if(((r_77 != NULL) && (r_77 != t)))
        _fail(t);
      else
        r_77 = t;
      t = not_null(v_77);
      if(((s_77 != NULL) && (s_77 != t)))
        _fail(t);
      else
        s_77 = t;
      t = not_null(t_77);
      {
        ATerm e_65 = t;
        int f_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_52;
            t = get_config_0_0(t);
            t = not_null(r_77);
            {
              ATerm r_16 (ATerm t)
              {
                t = get_filename_0_0(t);
                t = basename_0_0(t);
                return(t);
              }
              t = map_1_0(r_16, t);
              t = write_to_text_0_0(t);
            }
            ;
            LocalPopChoice(f_65);
          }
        else
          {
            t = e_65;
            t = not_null(r_77);
            t = create_dep_file_0_0(t);
            t = not_null(s_77);
            t = write_to_0_0(t);
          }
      }
      return(t);
    }
    t = pack_stratego_modules_0_0(t);
    if(((t_77 != NULL) && (t_77 != t)))
      _fail(t);
    else
      t_77 = t;
    t = not_null(t_77);
    if(match_cons(t, sym__2))
      {
        u_77 = ATgetArgument(t, 0);
        v_77 = ATgetArgument(t, 1);
        t = w_77(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = xtc_iowrap_2_0(pack_stratego_options_0_0, a_16, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
