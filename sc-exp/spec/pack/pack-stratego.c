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
ATerm term_h_46;
ATerm term_a_45;
ATerm term_s_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_l_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_r_43;
ATerm term_l_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_n_40;
ATerm term_f_40;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_j_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_w_37;
ATerm term_i_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_l_36;
ATerm term_c_36;
ATerm term_t_35;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_u_27;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_x_26;
ATerm term_r_26;
ATerm term_n_26;
ATerm term_i_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_c_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_l_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_g_12;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_h_10;
ATerm term_g_10;
void init_constant_terms (void)
{
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_e_13, term_j_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_j_16, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_w_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_f_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_c_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_i_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_w_18, term_x_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_p_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_b_11, term_v_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_a_20, term_g_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_p_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_w_20, term_x_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_g_21, term_h_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_u_21, term_z_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_22, term_c_22, term_d_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_22, term_o_22, term_p_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_h_23);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_u_25);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_n_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_j_28);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_c_28);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_u_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_c_37, term_j_28);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_z_37, term_j_28);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym__2, term_v_41, term_w_41);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym__2, term_g_43, term_j_28);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym__2, term_r_43, term_j_28);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym__2, term_n_40, term_j_28);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__3, term_v_41, term_w_41, (ATerm) ATempty);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_0 (ATerm);
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm a_101 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_text_0 (ATerm);
ATerm basename_1 (ATerm, ATerm l_97 (ATerm));
ATerm basename_0 (ATerm);
ATerm at_suffix_rev_1 (ATerm, ATerm m_89 (ATerm));
ATerm get_filename_0 (ATerm);
ATerm map_1 (ATerm, ATerm o_88 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm m_73 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm b_91 (ATerm));
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm n_110 (ATerm), ATerm o_110 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm t_102 (ATerm), ATerm u_102 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm v_102 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm h_102 (ATerm));
ATerm xtc_find_version_loc_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm z_81 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_100 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm g_102 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm i_102 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm r_92 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm s_106 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm e_110 (ATerm));
ATerm assert_1 (ATerm, ATerm h_99 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_100 (ATerm));
ATerm open_file_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm x_72 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_110 (ATerm), ATerm h_110 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_100 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm f_102 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm a_89 (ATerm));
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_module_1 (ATerm, ATerm c_81 (ATerm));
ATerm get_module_1 (ATerm, ATerm b_81 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_92 (ATerm), ATerm w_92 (ATerm));
ATerm diff_1 (ATerm, ATerm n_92 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm));
ATerm zip_1 (ATerm, ATerm w_90 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm));
ATerm for_3 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm w_110 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm));
ATerm filter_1 (ATerm, ATerm s_95 (ATerm));
ATerm pack_stratego_modules_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_89 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pack_stratego_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm e_99 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm d_99 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm q_109 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm r_109 (ATerm));
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm crush_2 (ATerm, ATerm i_98 (ATerm), ATerm j_98 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_102 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_103 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_106 (ATerm));
ATerm Program_1 (ATerm, ATerm t_72 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_88 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_105 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_81 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_106 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_67 (ATerm), ATerm h_67 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_106 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_106 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm e_104 (ATerm), ATerm f_104 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm v_109 (ATerm), ATerm w_109 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm b_110 (ATerm), ATerm c_110 (ATerm));
ATerm pack_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm k_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  k_1 = t;
  i_1 :
  if(match_cons(k_1, sym__2))
    {
      o_1 = ATgetArgument(k_1, 0);
      q_1 = ATgetArgument(k_1, 1);
      j_1 :
      if(match_cons(o_1, sym_Stream_1))
        {
          p_1 = ATgetArgument(o_1, 0);
          {
            ATerm w_1 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(p_1), not_null(q_1));
            {
              ATerm k_2 = NULL;
              k_2 = t;
              if(((w_1 != NULL) && (w_1 != k_2)))
                _fail(k_2);
              else
                w_1 = k_2;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_1));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm z_2 = NULL;
  ATerm e_3 = NULL;
  z_2 = t;
  {
    ATerm f_3 = NULL;
    t = xtc_new_file_0(t);
    {
      f_3 = t;
      {
        if(((e_3 != NULL) && (e_3 != f_3)))
          _fail(f_3);
        else
          e_3 = f_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), not_null(z_2));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(e_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_3));
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  k_3 :
  if(match_cons(l_3, sym__2))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      {
        t = not_null(n_3);
        {
          ATerm t_3 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(n_7);
            }
          else
            {
              t = t_3;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm e_10 = t;
                  int f_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(f_10);
                    }
                  else
                    {
                      t = e_10;
                      {
                        ATerm q_3 = NULL;
                        t = Cons_2(t, _id, c_0);
                        {
                          ATerm r_3 = NULL;
                          r_3 = t;
                          if(((q_3 != NULL) && (q_3 != r_3)))
                            _fail(r_3);
                          else
                            q_3 = r_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(q_3)), not_null(m_3));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, c_0);
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
ATerm add_extension_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym__2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_3)), term_g_10), not_null(y_3));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  k_4 = t;
  {
    ATerm q_4 = NULL;
    t = term_h_10;
    {
      ATerm r_4 = NULL;
      t = get_config_0(t);
      {
        q_4 = t;
        {
          if(((m_4 != NULL) && (m_4 != q_4)))
            _fail(q_4);
          else
            m_4 = q_4;
          {
            ATerm s_4 = NULL,u_4 = NULL;
            ATerm i_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_10;
                t = get_config_0(t);
                ;
                LocalPopChoice(j_10);
              }
            else
              {
                t = i_10;
                {
                  ATerm p_10 = t;
                  if((PushChoice() == 0))
                    {
                      t = term_q_10;
                      t = get_config_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = p_10;
                    }
                }
              }
            {
              r_4 = t;
              {
                if(((o_4 != NULL) && (o_4 != r_4)))
                  _fail(r_4);
                else
                  o_4 = r_4;
                {
                  ATerm t_4 = NULL;
                  t_4 = t;
                  if(((s_4 != NULL) && (s_4 != t_4)))
                    _fail(t_4);
                  else
                    s_4 = t_4;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_4), term_u_10);
                    {
                      ATerm v_4 = NULL;
                      t = add_extension_0(t);
                      {
                        u_4 = t;
                        {
                          if(((n_4 != NULL) && (n_4 != u_4)))
                            _fail(u_4);
                          else
                            n_4 = u_4;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_w_10);
                            {
                              ATerm w_4 = NULL;
                              t = open_file_0(t);
                              {
                                v_4 = t;
                                {
                                  if(((p_4 != NULL) && (p_4 != v_4)))
                                    _fail(v_4);
                                  else
                                    p_4 = v_4;
                                  {
                                    ATerm x_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(CheckATermList(not_null(k_4)), term_a_11));
                                    {
                                      t = separate_by_0(t);
                                      {
                                        x_4 = t;
                                        if(((w_4 != NULL) && (w_4 != x_4)))
                                          _fail(x_4);
                                        else
                                          w_4 = x_4;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), (ATerm) ATinsert(CheckATermList(not_null(w_4)), not_null(o_4)));
                                      {
                                        t = printnl_0(t);
                                        {
                                          t = not_null(p_4);
                                          t = close_file_0(t);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_4));
  }
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
  j_5 = t;
  h_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      i_5 :
      if(match_cons(l_5, sym_Stream_1))
        {
          m_5 = ATgetArgument(l_5, 0);
          {
            ATerm p_5 = NULL;
            t = SSL_fputc(not_null(k_5), not_null(m_5));
            {
              ATerm q_5 = NULL;
              q_5 = t;
              if(((p_5 != NULL) && (p_5 != q_5)))
                _fail(q_5);
              else
                p_5 = q_5;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_5));
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  x_5 = t;
  v_5 :
  if(match_cons(x_5, sym__2))
    {
      y_5 = ATgetArgument(x_5, 0);
      a_6 = ATgetArgument(x_5, 1);
      w_5 :
      if(match_cons(y_5, sym_Stream_1))
        {
          z_5 = ATgetArgument(y_5, 0);
          {
            ATerm d_6 = NULL;
            t = SSL_write_term_to_stream_text(not_null(z_5), not_null(a_6));
            {
              ATerm e_6 = NULL;
              e_6 = t;
              if(((d_6 != NULL) && (d_6 != e_6)))
                _fail(e_6);
              else
                d_6 = e_6;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_6));
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
ATerm WriteToFile_1 (ATerm t, ATerm a_101 (ATerm))
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym__2))
    {
      m_6 = ATgetArgument(l_6, 0);
      n_6 = ATgetArgument(l_6, 1);
      {
        ATerm q_6 = NULL,s_6 = NULL;
        t = not_null(m_6);
        {
          ATerm r_6 = NULL;
          r_6 = t;
          if(((q_6 != NULL) && (q_6 != r_6)))
            _fail(r_6);
          else
            q_6 = r_6;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), term_w_10);
            {
              t = open_stream_0(t);
              {
                ATerm t_6 = NULL;
                t_6 = t;
                if(((s_6 != NULL) && (s_6 != t_6)))
                  _fail(t_6);
                else
                  s_6 = t_6;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(n_6));
                  {
                    t = a_101(t);
                    {
                      t = fclose_0(t);
                      t = not_null(n_6);
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm y_6 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm z_6 = NULL;
      z_6 = t;
      if(((y_6 != NULL) && (y_6 != z_6)))
        _fail(z_6);
      else
        y_6 = z_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_11, not_null(y_6));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, e_0);
  return(t);
}
ATerm write_to_text_0 (ATerm t)
{
  ATerm d_7 = NULL;
  ATerm f_7 = NULL;
  d_7 = t;
  {
    ATerm g_7 = NULL;
    t = xtc_new_file_0(t);
    {
      g_7 = t;
      {
        if(((f_7 != NULL) && (f_7 != g_7)))
          _fail(g_7);
        else
          f_7 = g_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), not_null(d_7));
          {
            t = WriteToTextFile_0(t);
            {
              t = not_null(f_7);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_7));
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm l_97 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm f_0 (ATerm t)
    {
      ATerm c_11 = t;
      int d_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, f_0);
          ;
          LocalPopChoice(d_11);
        }
      else
        {
          t = c_11;
          {
            ATerm e_11 = t;
            int p_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm l_7 = NULL;
                  l_7 = t;
                  j_7 :
                  if(!(match_int(l_7, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, h_0, _id);
                ;
                LocalPopChoice(p_11);
              }
            else
              {
                t = e_11;
                {
                  ATerm p_0 (ATerm t)
                  {
                    ATerm m_7 = NULL;
                    m_7 = t;
                    k_7 :
                    if(!(match_int(m_7, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, p_0, l_97);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, f_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm at_suffix_rev_1 (ATerm t, ATerm m_89 (ATerm))
{
  ATerm o_7 (ATerm t)
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_7);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = m_89(t);
      }
    return(t);
  }
  t = o_7(t);
  return(t);
}
ATerm get_filename_0 (ATerm t)
{
  ATerm s_7 = NULL;
  t = explode_string_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
        t_7 = t;
        q_7 :
        if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
          {
            u_7 = ATgetFirst((ATermList) t_7);
            v_7 = (ATerm) ATgetNext((ATermList) t_7);
            r_7 :
            if(match_int(u_7, 47))
              {
                if(((s_7 != NULL) && (s_7 != v_7)))
                  _fail(v_7);
                else
                  s_7 = v_7;
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
      t = at_suffix_rev_1(t, r_0);
      t = not_null(s_7);
      return(t);
    }
    t = try_1(t, q_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_88 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = Cons_2(t, o_88, x_7);
      }
    return(t);
  }
  t = x_7(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = u_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_0);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
              e_8 = t;
              d_8 :
              if(match_cons(e_8, sym_Path_1))
                {
                  f_8 = ATgetArgument(e_8, 0);
                  t = not_null(f_8);
                }
              else
                {
                  if(match_cons(e_8, sym_Var_1))
                    {
                      f_8 = ATgetArgument(e_8, 0);
                      {
                        t = not_null(f_8);
                        {
                          ATerm c_12 = t;
                          int f_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_12);
                            }
                          else
                            {
                              t = c_12;
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  t = term_g_12;
                                  return(t);
                                }
                                t = debug_1(t, t_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_8, sym_Prefix_2))
                        {
                          f_8 = ATgetArgument(e_8, 0);
                          g_8 = ATgetArgument(e_8, 1);
                          {
                            ATerm l_8 = NULL,n_8 = NULL;
                            ATerm h_12;
                            h_12 = t;
                            {
                              ATerm m_8 = NULL;
                              t = not_null(f_8);
                              {
                                t = eval_config_0(t);
                                {
                                  m_8 = t;
                                  if(((l_8 != NULL) && (l_8 != m_8)))
                                    _fail(m_8);
                                  else
                                    l_8 = m_8;
                                }
                              }
                            }
                            t = h_12;
                            {
                              ATerm o_8 = NULL;
                              t = not_null(g_8);
                              {
                                t = eval_config_0(t);
                                {
                                  o_8 = t;
                                  if(((n_8 != NULL) && (n_8 != o_8)))
                                    _fail(o_8);
                                  else
                                    n_8 = o_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), not_null(n_8));
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
  ATerm w_8 = NULL;
  w_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_12, not_null(w_8));
    {
      t = table_get_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm s_12;
            s_12 = t;
            {
              ATerm y_8 = NULL;
              ATerm z_8 = NULL;
              z_8 = t;
              if(((y_8 != NULL) && (y_8 != z_8)))
                _fail(z_8);
              else
                y_8 = z_8;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_12, not_null(w_8), not_null(y_8));
                t = table_put_0(t);
              }
            }
            t = s_12;
          }
          return(t);
        }
        t = try_1(t, u_0);
      }
    }
  }
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm h_9 = NULL,i_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_Imports_1))
    {
      i_9 = ATgetArgument(h_9, 0);
      {
        ATerm l_9 = NULL,n_9 = NULL;
        ATerm m_9 = NULL;
        t = SSLgetAnnotations(not_null(h_9));
        {
          m_9 = t;
          if(((l_9 != NULL) && (l_9 != m_9)))
            _fail(m_9);
          else
            l_9 = m_9;
        }
        {
          t = not_null(i_9);
          {
            ATerm p_9 = NULL;
            t = m_73(t);
            {
              n_9 = t;
              {
                ATerm q_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(n_9)), not_null(l_9));
                {
                  q_9 = t;
                  if(((p_9 != NULL) && (p_9 != q_9)))
                    _fail(q_9);
                  else
                    p_9 = q_9;
                }
                t = not_null(p_9);
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
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm b_10 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm y_9 = NULL,z_9 = NULL;
    y_9 = t;
    w_9 :
    if(match_cons(y_9, sym_Specification_1))
      {
        z_9 = ATgetArgument(y_9, 0);
        {
          t = not_null(z_9);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm t_12 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_12;
                }
              return(t);
            }
            t = filter_1(t, w_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, v_0);
  {
    t = concat_0(t);
    {
      ATerm c_10 = NULL;
      c_10 = t;
      if(((b_10 != NULL) && (b_10 != c_10)))
        _fail(c_10);
      else
        b_10 = c_10;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(b_10));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym__2))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      {
        ATerm r_10 = NULL,t_10 = NULL;
        ATerm s_10 = NULL;
        t = SSLgetAnnotations(not_null(l_10));
        {
          s_10 = t;
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
        }
        {
          t = not_null(m_10);
          {
            ATerm v_10 = NULL;
            t = x_65(t);
            {
              t_10 = t;
              {
                t = not_null(n_10);
                {
                  ATerm x_10 = NULL;
                  t = y_65(t);
                  {
                    v_10 = t;
                    {
                      ATerm y_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_10), not_null(v_10)), not_null(r_10));
                      {
                        y_10 = t;
                        if(((x_10 != NULL) && (x_10 != y_10)))
                          _fail(y_10);
                        else
                          x_10 = y_10;
                      }
                      t = not_null(x_10);
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  i_11 = t;
  f_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      m_11 = ATgetArgument(i_11, 1);
      g_11 :
      if(match_cons(j_11, sym__2))
        {
          k_11 = ATgetArgument(j_11, 0);
          l_11 = ATgetArgument(j_11, 1);
          h_11 :
          if(match_cons(m_11, sym__2))
            {
              n_11 = ATgetArgument(m_11, 0);
              o_11 = ATgetArgument(m_11, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_11)), not_null(k_11)), (ATerm) ATinsert(CheckATermList(not_null(o_11)), not_null(l_11)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  w_11 = t;
  v_11 :
  if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
    {
      x_11 = ATgetFirst((ATermList) w_11);
      y_11 = (ATerm) ATgetNext((ATermList) w_11);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), not_null(y_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  d_12 :
  if(((ATgetType(e_12) == AT_LIST) && ATisEmpty(e_12)))
    {
      t = term_u_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_91);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  l_12 = t;
  j_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      k_12 :
      if(match_cons(n_12, sym_Specification_1))
        {
          o_12 = ATgetArgument(n_12, 0);
          {
            t = not_null(o_12);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm q_12 = NULL,r_12 = NULL;
                q_12 = t;
                i_12 :
                if(match_cons(q_12, sym_Imports_1))
                  {
                    r_12 = ATgetArgument(q_12, 0);
                    t = not_null(r_12);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, x_0);
              t = concat_0(t);
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
ATerm read_from_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_stdin_0))
    {
      ATerm c_13 = NULL;
      ATerm d_13 = NULL;
      t = term_v_12;
      {
        t = ReadFromFile_0(t);
        {
          d_13 = t;
          if(((c_13 != NULL) && (c_13 != d_13)))
            _fail(d_13);
          else
            c_13 = d_13;
        }
      }
      t = not_null(c_13);
    }
  else
    {
      if(match_cons(a_13, sym_FILE_1))
        {
          b_13 = ATgetArgument(a_13, 0);
          {
            ATerm f_13 = NULL;
            ATerm g_13 = NULL;
            t = not_null(b_13);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  g_13 = t;
                  if(((f_13 != NULL) && (f_13 != g_13)))
                    _fail(g_13);
                  else
                    f_13 = g_13;
                }
              }
            }
            t = not_null(f_13);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  s_13 = t;
  {
    ATerm x_13 = NULL;
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
    t = not_null(s_13);
    {
      x_13 = t;
      {
        t = SSL_explode_term(not_null(x_13));
        {
          z_13 = t;
          o_13 :
          if(match_cons(z_13, sym__2))
            {
              a_14 = ATgetArgument(z_13, 0);
              b_14 = ATgetArgument(z_13, 1);
              p_13 :
              if(match_string(a_14, ""))
                {
                  q_13 :
                  if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
                    {
                      c_14 = ATgetFirst((ATermList) b_14);
                      d_14 = (ATerm) ATgetNext((ATermList) b_14);
                      r_13 :
                      if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
                        {
                          e_14 = ATgetFirst((ATermList) d_14);
                          f_14 = (ATerm) ATgetNext((ATermList) d_14);
                          {
                            if(((u_13 != NULL) && (u_13 != c_14)))
                              _fail(c_14);
                            else
                              u_13 = c_14;
                            {
                              if(((w_13 != NULL) && (w_13 != e_14)))
                                _fail(e_14);
                              else
                                w_13 = e_14;
                              if(((v_13 != NULL) && (v_13 != f_14)))
                                _fail(f_14);
                              else
                                v_13 = f_14;
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
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(w_13);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm l_14 = NULL;
  ATerm m_14 = NULL,o_14 = NULL;
  ATerm n_14 = NULL;
  t = term_w_12;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = term_e_13;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_e_13);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_w_12);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym__2))
    {
      u_14 = ATgetArgument(t_14, 0);
      v_14 = ATgetArgument(t_14, 1);
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(u_14), not_null(v_14));
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = SSL_subtr(not_null(u_14), not_null(v_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm b_15 = NULL;
  ATerm c_15 = NULL,e_15 = NULL;
  ATerm d_15 = NULL;
  t = term_j_13;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = term_e_13;
      }
    {
      d_15 = t;
      if(((c_15 != NULL) && (c_15 != d_15)))
        _fail(d_15);
      else
        c_15 = d_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), term_e_13);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          e_15 = t;
          if(((b_15 != NULL) && (b_15 != e_15)))
            _fail(e_15);
          else
            b_15 = e_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_15)), term_j_13);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm n_110 (ATerm), ATerm o_110 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, n_110, o_110);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  t = SSL_close_file(not_null(i_15));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym__2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      t = SSL_execvp(not_null(o_15), not_null(p_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = SSL_int_to_string(not_null(u_15));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym_UnknownSignal_1))
    {
      d_16 = ATgetArgument(c_16, 0);
      {
        ATerm h_16 = NULL;
        ATerm i_16 = NULL;
        t = not_null(d_16);
        {
          t = int_to_string_0(t);
          {
            i_16 = t;
            if(((h_16 != NULL) && (h_16 != i_16)))
              _fail(i_16);
            else
              h_16 = i_16;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_13), not_null(h_16)), term_m_13);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(c_16, sym_Signal_3))
        {
          d_16 = ATgetArgument(c_16, 0);
          e_16 = ATgetArgument(c_16, 1);
          f_16 = ATgetArgument(c_16, 2);
          {
            ATerm m_16 = NULL;
            ATerm n_16 = NULL;
            t = not_null(e_16);
            {
              t = int_to_string_0(t);
              {
                n_16 = t;
                if(((m_16 != NULL) && (m_16 != n_16)))
                  _fail(n_16);
                else
                  m_16 = n_16;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_16)), term_y_13), not_null(m_16)), term_t_13), not_null(d_16));
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
ATerm signal_from_number_0 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_22), term_j_22), term_a_22), term_s_21), term_i_21), term_a_21), term_s_20), term_h_20), term_y_19), term_t_19), term_l_19), term_h_19), term_c_19), term_q_18), term_f_18), term_x_17), term_t_17), term_l_17), term_b_17), term_r_16), term_l_16), term_a_16), term_w_15), term_r_15), term_j_15), term_a_15), term_w_14), term_k_14);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
            x_16 = t;
            u_16 :
            if(match_cons(x_16, sym_Signal_3))
              {
                y_16 = ATgetArgument(x_16, 0);
                z_16 = ATgetArgument(x_16, 1);
                a_17 = ATgetArgument(x_16, 2);
                if(((v_16 != NULL) && (v_16 != z_16)))
                  _fail(z_16);
                else
                  v_16 = z_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, y_0);
        }
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(v_16));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm r_22;
  r_22 = t;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
      h_17 = t;
      g_17 :
      if(match_cons(h_17, sym_WaitStatus_3))
        {
          i_17 = ATgetArgument(h_17, 0);
          j_17 = ATgetArgument(h_17, 1);
          k_17 = ATgetArgument(h_17, 2);
          {
            ATerm n_17 = NULL;
            t = not_null(j_17);
            {
              ATerm s_22 = t;
              if((PushChoice() == 0))
                {
                  ATerm m_17 = NULL;
                  m_17 = t;
                  e_17 :
                  if(!(match_int(m_17, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_22;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm o_17 = NULL;
                    o_17 = t;
                    if(((n_17 != NULL) && (n_17 != o_17)))
                      _fail(o_17);
                    else
                      n_17 = o_17;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_17)), term_x_22));
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
    t = try_1(t, z_0);
  }
  t = r_22;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  t = SSL_waitpid(not_null(s_17));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm t_102 (ATerm), ATerm u_102 (ATerm))
{
  ATerm z_17 = NULL;
  ATerm b_18 = NULL;
  z_17 = t;
  {
    t = fork_0(t);
    {
      b_18 = t;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_18 = NULL;
            d_18 = t;
            y_17 :
            if(match_int(d_18, 0))
              {
                t = not_null(z_17);
                t = t_102(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(z_17));
              t = u_102(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm v_102 (ATerm))
{
  ATerm m_18 = NULL;
  ATerm a_1 (ATerm t)
  {
    ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
    n_18 = t;
    l_18 :
    if(match_cons(n_18, sym__2))
      {
        o_18 = ATgetArgument(n_18, 0);
        p_18 = ATgetArgument(n_18, 1);
        {
          ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
          if(((m_18 != NULL) && (m_18 != p_18)))
            _fail(p_18);
          else
            m_18 = p_18;
          {
            t = not_null(o_18);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  r_18 = t;
                  j_18 :
                  if(match_cons(r_18, sym_WaitStatus_3))
                    {
                      s_18 = ATgetArgument(r_18, 0);
                      t_18 = ATgetArgument(r_18, 1);
                      u_18 = ATgetArgument(r_18, 2);
                      k_18 :
                      if(match_int(s_18, 0))
                        {
                          t = not_null(m_18);
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
  t = fork_2(t, v_102, a_1);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym__2))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      {
        ATerm b_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(b_19));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, b_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_table_keys(not_null(g_19));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm o_19 = NULL;
        ATerm q_19 = NULL;
        o_19 = t;
        {
          ATerm r_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(o_19));
          {
            t = table_get_0(t);
            {
              r_19 = t;
              if(((q_19 != NULL) && (q_19 != r_19)))
                _fail(r_19);
              else
                q_19 = r_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(q_19));
        }
        return(t);
      }
      t = map_1(t, c_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    ATerm a_23;
    a_23 = t;
    {
      ATerm w_19 = NULL;
      ATerm x_19 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          x_19 = t;
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_l_21);
        t = geq_0(t);
      }
    }
    t = a_23;
    t = h_102(t);
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym__2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      {
        ATerm i_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_20)));
        {
          t = table_get_0(t);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
              j_20 = t;
              b_20 :
              if(match_cons(j_20, sym__2))
                {
                  k_20 = ATgetArgument(j_20, 0);
                  l_20 = ATgetArgument(j_20, 1);
                  {
                    if(((f_20 != NULL) && (f_20 != k_20)))
                      _fail(k_20);
                    else
                      f_20 = k_20;
                    if(((i_20 != NULL) && (i_20 != l_20)))
                      _fail(l_20);
                    else
                      i_20 = l_20;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, e_1);
          }
        }
        t = not_null(i_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm o_20 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = z_81(t);
      t = o_20(t);
      return(t);
    }
    t = try_1(t, f_1);
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm d_23;
  d_23 = t;
  {
    ATerm g_1 (ATerm t)
    {
      t = term_i_23;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm j_23 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_23;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, g_1);
  }
  t = d_23;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm k_23;
  k_23 = t;
  {
    ATerm q_20 = NULL;
    ATerm r_20 = NULL;
    r_20 = t;
    if(((q_20 != NULL) && (q_20 != r_20)))
      _fail(r_20);
    else
      q_20 = r_20;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATinsert(ATempty, not_null(q_20)));
      t = printnl_0(t);
    }
  }
  t = k_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_100 (ATerm))
{
  ATerm p_23;
  p_23 = t;
  {
    t = q_100(t);
    t = debug_0(t);
  }
  t = p_23;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm g_102 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    ATerm q_23;
    q_23 = t;
    {
      ATerm u_20 = NULL;
      ATerm v_20 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), term_q_17);
        t = geq_0(t);
      }
    }
    t = q_23;
    t = g_102(t);
    return(t);
  }
  t = try_1(t, h_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm i_102 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm t_23;
    t_23 = t;
    {
      ATerm y_20 = NULL;
      ATerm z_20 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          z_20 = t;
          if(((y_20 != NULL) && (y_20 != z_20)))
            _fail(z_20);
          else
            y_20 = z_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), term_g_15);
        t = geq_0(t);
      }
    }
    t = t_23;
    t = i_102(t);
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_92 (ATerm))
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym__2))
    {
      e_21 = ATgetArgument(d_21, 0);
      f_21 = ATgetArgument(d_21, 1);
      {
        t = not_null(e_21);
        {
          ATerm j_21 (ATerm t)
          {
            ATerm u_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_21);
                ;
                LocalPopChoice(v_23);
              }
            else
              {
                t = u_23;
                {
                  ATerm x_23 = t;
                  int y_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_1 (ATerm t)
                      {
                        t = not_null(f_21);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_92, m_1);
                      t = j_21(t);
                      ;
                      LocalPopChoice(y_23);
                    }
                  else
                    {
                      t = x_23;
                      t = Cons_2(t, _id, j_21);
                    }
                }
              }
            return(t);
          }
          t = j_21(t);
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
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym__3))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      r_21 = ATgetArgument(o_21, 2);
      {
        ATerm z_23;
        z_23 = t;
        {
          ATerm v_21 = NULL;
          ATerm w_21 = NULL,y_21 = NULL;
          ATerm x_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), not_null(q_21));
          {
            ATerm c_24 = t;
            int d_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(d_24);
              }
            else
              {
                t = c_24;
                t = (ATerm) ATempty;
              }
            {
              x_21 = t;
              if(((w_21 != NULL) && (w_21 != x_21)))
                _fail(x_21);
              else
                w_21 = x_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), not_null(r_21));
            {
              t = union_0(t);
              {
                y_21 = t;
                if(((v_21 != NULL) && (v_21 != y_21)))
                  _fail(y_21);
                else
                  v_21 = y_21;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_21), not_null(q_21), not_null(v_21));
            t = set_0(t);
          }
        }
        t = z_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym__2))
    {
      h_22 = ATgetArgument(g_22, 0);
      i_22 = ATgetArgument(g_22, 1);
      {
        t = not_null(i_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
            l_22 = t;
            e_22 :
            if(match_cons(l_22, sym__2))
              {
                m_22 = ATgetArgument(l_22, 0);
                n_22 = ATgetArgument(l_22, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_22), not_null(m_22), not_null(n_22));
                  t = s_106(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  ATerm c_23 (ATerm t)
  {
    t = SSL_fclose(not_null(w_22));
    return(t);
  }
  w_22 = t;
  u_22 :
  if(match_cons(w_22, sym_Stream_1))
    {
      v_22 = ATgetArgument(w_22, 0);
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_22));
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = c_23(t);
          }
      }
    }
  else
    {
      t = c_23(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_Stream_1))
    {
      g_23 = ATgetArgument(f_23, 0);
      t = SSL_read_term_from_stream(not_null(g_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      {
        ATerm r_23 = NULL;
        t = SSL_fopen(not_null(n_23), not_null(o_23));
        {
          ATerm s_23 = NULL;
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_23));
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
  ATerm w_23 = NULL;
  w_23 = t;
  t = SSL_is_string(not_null(w_23));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm a_24 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm b_24 = NULL;
    b_24 = t;
    if(((a_24 != NULL) && (a_24 != b_24)))
      _fail(b_24);
    else
      a_24 = b_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_24));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm e_24 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm f_24 = NULL;
    f_24 = t;
    if(((e_24 != NULL) && (e_24 != f_24)))
      _fail(f_24);
    else
      e_24 = f_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_24));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm i_24 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm j_24 = NULL;
    j_24 = t;
    if(((i_24 != NULL) && (i_24 != j_24)))
      _fail(j_24);
    else
      i_24 = j_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_24));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(p_24, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(p_24, sym_stdin_0))
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
ATerm open_stream_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm m_24 = t;
              int n_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm a_25 = NULL,b_25 = NULL;
                    a_25 = t;
                    v_24 :
                    if(match_cons(a_25, sym_Path_1))
                      {
                        b_25 = ATgetArgument(a_25, 0);
                        t = not_null(b_25);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, r_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(n_24);
                }
              else
                {
                  t = m_24;
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
  ATerm j_25 = NULL;
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL;
      ATerm i_25 = NULL;
      i_25 = t;
      if(((h_25 != NULL) && (h_25 != i_25)))
        _fail(i_25);
      else
        h_25 = i_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_25), term_s_24);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_t_24;
          return(t);
        }
        t = debug_1(t, s_1);
        _fail(t);
      }
    }
  {
    ATerm u_24;
    u_24 = t;
    {
      ATerm k_25 = NULL;
      t = read_from_stream_0(t);
      {
        k_25 = t;
        if(((j_25 != NULL) && (j_25 != k_25)))
          _fail(k_25);
        else
          j_25 = k_25;
      }
    }
    t = u_24;
    {
      t = fclose_0(t);
      t = not_null(j_25);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm o_25 = NULL;
  ATerm p_25 = NULL;
  p_25 = t;
  if(((o_25 != NULL) && (o_25 != p_25)))
    _fail(p_25);
  else
    o_25 = p_25;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), (ATerm) ATinsert(ATempty, term_c_25));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(e_25);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = d_25;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_25 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_25;
              }
            {
              ATerm t_1 (ATerm t)
              {
                t = term_m_25;
                return(t);
              }
              t = debug_1(t, t_1);
            }
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            {
              ATerm u_1 (ATerm t)
              {
                t = term_n_25;
                return(t);
              }
              t = debug_1(t, u_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm t_25 = NULL;
  ATerm v_25 = NULL;
  t_25 = t;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        t = term_q_25;
        return(t);
      }
      t = debug_1(t, x_1);
      return(t);
    }
    t = if_verbose5_1(t, v_1);
    {
      ATerm r_25 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_25)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_25;
        }
      {
        ATerm s_25;
        s_25 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_23, term_u_25, (ATerm) ATinsert(ATempty, not_null(t_25)));
          t = table_put_0(t);
        }
        t = s_25;
        {
          ATerm y_1 (ATerm t)
          {
            ATerm z_1 (ATerm t)
            {
              t = term_x_25;
              return(t);
            }
            t = debug_1(t, z_1);
            return(t);
          }
          t = if_verbose4_1(t, y_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm a_2 (ATerm t)
              {
                ATerm b_2 (ATerm t)
                {
                  t = term_y_25;
                  return(t);
                }
                t = say_1(t, b_2);
                return(t);
              }
              t = if_verbose6_1(t, a_2);
              {
                ATerm w_25 = NULL;
                w_25 = t;
                if(((v_25 != NULL) && (v_25 != w_25)))
                  _fail(w_25);
                else
                  v_25 = w_25;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_23, not_null(v_25));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm c_2 (ATerm t)
                      {
                        ATerm d_2 (ATerm t)
                        {
                          t = term_z_25;
                          return(t);
                        }
                        t = say_1(t, d_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, c_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_b_23, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_25)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm f_2 (ATerm t)
                              {
                                t = term_y_25;
                                return(t);
                              }
                              t = say_1(t, f_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, e_2);
                          }
                        }
                      }
                    }
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
  ATerm a_26 = NULL;
  a_26 = t;
  t = SSL_getenv(not_null(a_26));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_26;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_26;
            t = getenv_0(t);
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      t = term_n_26;
      return(t);
    }
    t = debug_1(t, h_2);
    return(t);
  }
  t = if_verbose5_1(t, g_2);
  {
    ATerm o_26;
    o_26 = t;
    {
      ATerm p_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_26;
          t = table_get_0(t);
          ;
          LocalPopChoice(q_26);
        }
      else
        {
          t = p_26;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = o_26;
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_x_26;
          return(t);
        }
        t = debug_1(t, j_2);
        return(t);
      }
      t = if_verbose5_1(t, i_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm y_26 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = debug_1(t, m_2);
        return(t);
      }
      t = if_verbose5_1(t, l_2);
      {
        t = xtc_load_0(t);
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm n_2 (ATerm t)
            {
              ATerm o_2 (ATerm t)
              {
                t = term_h_27;
                return(t);
              }
              t = debug_1(t, o_2);
              return(t);
            }
            t = if_verbose5_1(t, n_2);
          }
        }
      }
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = y_26;
      {
        ATerm e_26 = NULL;
        ATerm f_26 = NULL;
        f_26 = t;
        if(((e_26 != NULL) && (e_26 != f_26)))
          _fail(f_26);
        else
          e_26 = f_26;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_27), not_null(e_26)), term_k_27);
          {
            t = error_0(t);
            {
              ATerm p_2 (ATerm t)
              {
                t = term_b_23;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = term_u_27;
                      return(t);
                    }
                    t = debug_1(t, q_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, p_2);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm e_110 (ATerm))
{
  ATerm j_26 = NULL;
  ATerm v_27;
  v_27 = t;
  {
    ATerm k_26 = NULL;
    t = e_110(t);
    {
      t = xtc_find_warning_0(t);
      {
        k_26 = t;
        if(((j_26 != NULL) && (j_26 != k_26)))
          _fail(k_26);
        else
          j_26 = k_26;
      }
    }
  }
  t = v_27;
  {
    ATerm y_27;
    y_27 = t;
    {
      ATerm l_26 = NULL;
      ATerm m_26 = NULL;
      m_26 = t;
      if(((l_26 != NULL) && (l_26 != m_26)))
        _fail(m_26);
      else
        l_26 = m_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(l_26));
        t = call_0(t);
      }
    }
    t = y_27;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm h_99 (ATerm))
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym__2))
    {
      v_26 = ATgetArgument(u_26, 0);
      w_26 = ATgetArgument(u_26, 1);
      {
        ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
        ATerm z_27;
        z_27 = t;
        {
          ATerm c_27 = NULL;
          ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
          t = h_99(t);
          {
            c_27 = t;
            {
              if(((z_26 != NULL) && (z_26 != c_27)))
                _fail(c_27);
              else
                z_26 = c_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_26), not_null(v_26), not_null(w_26));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_28 = t;
                    int b_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_26), term_c_28);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(b_28);
                      }
                    else
                      {
                        t = a_28;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_27 = t;
                      s_26 :
                      if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
                        {
                          e_27 = ATgetFirst((ATermList) d_27);
                          f_27 = (ATerm) ATgetNext((ATermList) d_27);
                          {
                            if(((a_27 != NULL) && (a_27 != e_27)))
                              _fail(e_27);
                            else
                              a_27 = e_27;
                            {
                              if(((b_27 != NULL) && (b_27 != f_27)))
                                _fail(f_27);
                              else
                                b_27 = f_27;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_26), term_c_28, (ATerm) ATinsert(CheckATermList(not_null(b_27)), (ATerm) ATinsert(CheckATermList(not_null(a_27)), not_null(v_26))));
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
        t = z_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_100 (ATerm))
{
  ATerm d_28;
  d_28 = t;
  {
    t = t_100(t);
    {
      ATerm r_2 (ATerm t)
      {
        t = term_e_28;
        return(t);
      }
      t = debug_1(t, r_2);
    }
  }
  t = d_28;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  ATerm w_27 (ATerm t)
  {
    ATerm f_28 = t;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
        r_27 = t;
        l_27 :
        if(match_cons(r_27, sym__2))
          {
            s_27 = ATgetArgument(r_27, 0);
            t_27 = ATgetArgument(r_27, 1);
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
        t = f_28;
      }
    {
      ATerm s_2 (ATerm t)
      {
        t = term_g_28;
        return(t);
      }
      t = obsolete_1(t, s_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), term_w_10);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm x_27 (ATerm t)
  {
    t = SSL_open_file(not_null(o_27), not_null(p_27));
    return(t);
  }
  n_27 = t;
  m_27 :
  if(match_cons(n_27, sym__2))
    {
      o_27 = ATgetArgument(n_27, 0);
      p_27 = ATgetArgument(n_27, 1);
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_27(t);
            ;
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = x_27(t);
          }
      }
    }
  else
    {
      t = w_27(t);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm v_28 = NULL;
  ATerm w_28 = NULL;
  t = term_j_28;
  {
    t = new_0(t);
    {
      w_28 = t;
      if(((v_28 != NULL) && (v_28 != w_28)))
        _fail(w_28);
      else
        v_28 = w_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), term_k_28);
    {
      t = conc_strings_0(t);
      {
        ATerm t_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, t_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm a_29 = NULL;
  t = new_file_0(t);
  {
    a_29 = t;
    {
      ATerm l_28;
      l_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), term_w_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), term_j_28);
            {
              ATerm u_2 (ATerm t)
              {
                t = term_m_28;
                return(t);
              }
              t = assert_1(t, u_2);
            }
          }
        }
      }
      t = l_28;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_stdin_0))
    {
      ATerm m_29 = NULL;
      ATerm n_29 = NULL;
      ATerm o_29 = NULL;
      t = xtc_new_file_0(t);
      {
        n_29 = t;
        {
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
          {
            ATerm p_29 = NULL;
            t = o_0(t);
            {
              p_29 = t;
              if(((o_29 != NULL) && (o_29 != p_29)))
                _fail(p_29);
              else
                o_29 = p_29;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_29)), term_h_10));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(m_29);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_29));
    }
  else
    {
      if(match_cons(k_29, sym_FILE_1))
        {
          l_29 = ATgetArgument(k_29, 0);
          {
            ATerm r_29 = NULL;
            ATerm s_29 = NULL;
            t = not_null(l_29);
            {
              ATerm t_29 = NULL;
              t = xtc_new_file_0(t);
              {
                s_29 = t;
                {
                  if(((r_29 != NULL) && (r_29 != s_29)))
                    _fail(s_29);
                  else
                    r_29 = s_29;
                  {
                    ATerm u_29 = NULL;
                    t = o_0(t);
                    {
                      u_29 = t;
                      if(((t_29 != NULL) && (t_29 != u_29)))
                        _fail(u_29);
                      else
                        t_29 = u_29;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_29)), term_h_10), not_null(l_29)), term_n_28));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(r_29);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_29));
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
  ATerm m_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym_stdin_0))
    {
      ATerm o_30 = NULL,r_30 = NULL;
      ATerm o_28;
      o_28 = t;
      {
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(m_30));
        {
          q_30 = t;
          if(((o_30 != NULL) && (o_30 != q_30)))
            _fail(q_30);
          else
            o_30 = q_30;
        }
      }
      t = o_28;
      {
        ATerm s_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(o_30));
        {
          s_30 = t;
          if(((r_30 != NULL) && (r_30 != s_30)))
            _fail(s_30);
          else
            r_30 = s_30;
        }
        t = not_null(r_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm f_31 = NULL,g_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym_FILE_1))
    {
      g_31 = ATgetArgument(f_31, 0);
      {
        ATerm j_31 = NULL,l_31 = NULL;
        ATerm k_31 = NULL;
        t = SSLgetAnnotations(not_null(f_31));
        {
          k_31 = t;
          if(((j_31 != NULL) && (j_31 != k_31)))
            _fail(k_31);
          else
            j_31 = k_31;
        }
        {
          t = not_null(g_31);
          {
            ATerm n_31 = NULL;
            t = x_72(t);
            {
              l_31 = t;
              {
                ATerm o_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(l_31)), not_null(j_31));
                {
                  o_31 = t;
                  if(((n_31 != NULL) && (n_31 != o_31)))
                    _fail(o_31);
                  else
                    n_31 = o_31;
                }
                t = not_null(n_31);
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
ATerm xtc_transform_2 (ATerm t, ATerm g_110 (ATerm), ATerm h_110 (ATerm))
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          t = stdin_0(t);
        }
      LocalPopChoice(q_28);
      t = xtc_transform_file_2(t, g_110, h_110);
    }
  else
    {
      t = p_28;
      t = xtc_transform_term_2(t, g_110, h_110);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_32 = NULL;
      ATerm v_2 (ATerm t)
      {
        ATerm x_28 = t;
        if((PushChoice() == 0))
          {
            ATerm c_32 = NULL;
            c_32 = t;
            t_31 :
            if(!(match_string(c_32, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_28;
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        ATerm d_32 = NULL;
        d_32 = t;
        if(((b_32 != NULL) && (b_32 != d_32)))
          _fail(d_32);
        else
          b_32 = d_32;
        return(t);
      }
      t = _2(t, v_2, w_2);
      {
        t = Snd_0(t);
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_2 (ATerm t)
              {
                t = term_b_29;
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                ATerm e_32 = NULL,g_32 = NULL,i_32 = NULL;
                ATerm c_29;
                c_29 = t;
                {
                  ATerm f_32 = NULL;
                  t = pass_verbose_0(t);
                  {
                    f_32 = t;
                    if(((e_32 != NULL) && (e_32 != f_32)))
                      _fail(f_32);
                    else
                      e_32 = f_32;
                  }
                }
                t = c_29;
                {
                  ATerm d_29;
                  d_29 = t;
                  {
                    ATerm h_32 = NULL;
                    t = pass_keep_0(t);
                    {
                      h_32 = t;
                      if(((g_32 != NULL) && (g_32 != h_32)))
                        _fail(h_32);
                      else
                        g_32 = h_32;
                    }
                  }
                  t = d_29;
                  {
                    ATerm j_32 = NULL;
                    t = term_e_29;
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
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_32)), not_null(g_32)), not_null(e_32));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, x_2, y_2);
              t = read_from_0(t);
              ;
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_32)), term_f_29);
                t = fatal_error_0(t);
              }
            }
        }
      }
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
        k_32 = t;
        z_31 :
        if(match_cons(k_32, sym__2))
          {
            l_32 = ATgetArgument(k_32, 0);
            m_32 = ATgetArgument(k_32, 1);
            a_32 :
            if(match_string(l_32, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm g_29 = t;
                  int h_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      ;
                      LocalPopChoice(h_29);
                    }
                  else
                    {
                      t = g_29;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_32)), term_f_29);
                        t = fatal_error_0(t);
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
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_100 (ATerm))
{
  ATerm i_29;
  i_29 = t;
  {
    ATerm v_32 = NULL,x_32 = NULL;
    ATerm q_29;
    q_29 = t;
    {
      ATerm w_32 = NULL;
      t = m_100(t);
      {
        w_32 = t;
        if(((v_32 != NULL) && (v_32 != w_32)))
          _fail(w_32);
        else
          v_32 = w_32;
      }
    }
    t = q_29;
    {
      ATerm y_32 = NULL;
      y_32 = t;
      if(((x_32 != NULL) && (x_32 != y_32)))
        _fail(y_32);
      else
        x_32 = y_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_32)), not_null(v_32)));
        t = printnl_0(t);
      }
    }
  }
  t = i_29;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm f_102 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm v_29;
    v_29 = t;
    {
      ATerm g_33 = NULL;
      ATerm h_33 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), term_y_14);
        t = geq_0(t);
      }
    }
    t = v_29;
    t = f_102(t);
    return(t);
  }
  t = try_1(t, a_3);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_29;
  w_29 = t;
  {
    ATerm s_33 = NULL;
    ATerm t_33 = NULL;
    t_33 = t;
    if(((s_33 != NULL) && (s_33 != t_33)))
      _fail(t_33);
    else
      s_33 = t_33;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(s_33));
      t = printnl_0(t);
    }
  }
  t = w_29;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm x_29;
  x_29 = t;
  {
    t = error_0(t);
    {
      t = term_e_13;
      t = exit_0(t);
    }
  }
  t = x_29;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm z_33 = NULL;
  ATerm b_34 = NULL,c_34 = NULL;
  z_33 = t;
  {
    ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_33)));
    {
      t = table_get_0(t);
      {
        d_34 = t;
        x_33 :
        if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
          {
            e_34 = ATgetFirst((ATermList) d_34);
            h_34 = (ATerm) ATgetNext((ATermList) d_34);
            y_33 :
            if(match_cons(e_34, sym__2))
              {
                f_34 = ATgetArgument(e_34, 0);
                g_34 = ATgetArgument(e_34, 1);
                {
                  if(((b_34 != NULL) && (b_34 != f_34)))
                    _fail(f_34);
                  else
                    b_34 = f_34;
                  if(((c_34 != NULL) && (c_34 != g_34)))
                    _fail(g_34);
                  else
                    c_34 = g_34;
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
    t = not_null(c_34);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  t = SSL_implode_string(not_null(l_34));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = SSL_explode_string(not_null(p_34));
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
ATerm fetch_elem_1 (ATerm t, ATerm a_89 (ATerm))
{
  ATerm t_34 = NULL;
  ATerm b_3 (ATerm t)
  {
    ATerm u_34 = NULL;
    t = a_89(t);
    {
      u_34 = t;
      if(((t_34 != NULL) && (t_34 != u_34)))
        _fail(u_34);
      else
        t_34 = u_34;
    }
    return(t);
  }
  t = fetch_1(t, b_3);
  t = not_null(t_34);
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  x_34 :
  if(match_cons(y_34, sym__2))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      t = SSL_access(not_null(z_34), not_null(a_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm f_35 = NULL;
  ATerm g_35 = NULL;
  g_35 = t;
  if(((f_35 != NULL) && (f_35 != g_35)))
    _fail(g_35);
  else
    f_35 = g_35;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), (ATerm) ATinsert(ATempty, term_y_29));
    t = access_0(t);
  }
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      a_36 = ATgetArgument(y_35, 1);
      {
        t = c_81(t);
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 (ATerm t)
              {
                ATerm d_36 = NULL;
                d_36 = t;
                {
                  t = not_null(a_36);
                  {
                    ATerm d_3 (ATerm t)
                    {
                      ATerm f_36 = NULL,h_36 = NULL;
                      ATerm b_30;
                      b_30 = t;
                      {
                        ATerm g_36 = NULL;
                        g_36 = t;
                        if(((f_36 != NULL) && (f_36 != g_36)))
                          _fail(g_36);
                        else
                          f_36 = g_36;
                      }
                      t = b_30;
                      {
                        ATerm i_36 = NULL,k_36 = NULL;
                        ATerm j_36 = NULL;
                        j_36 = t;
                        if(((i_36 != NULL) && (i_36 != j_36)))
                          _fail(j_36);
                        else
                          i_36 = j_36;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_36)), term_g_10), not_null(z_35)), term_c_30), not_null(d_36));
                          {
                            t = concat_strings_0(t);
                            {
                              t = file_exists_0(t);
                              {
                                k_36 = t;
                                if(((h_36 != NULL) && (h_36 != k_36)))
                                  _fail(k_36);
                                else
                                  h_36 = k_36;
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_36)));
                      }
                      return(t);
                    }
                    t = fetch_elem_1(t, d_3);
                  }
                }
                return(t);
              }
              t = fetch_elem_1(t, c_3);
              ;
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              {
                ATerm d_30 = t;
                int e_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = not_null(a_36);
                    {
                      ATerm g_3 (ATerm t)
                      {
                        ATerm n_36 = NULL,p_36 = NULL;
                        ATerm f_30;
                        f_30 = t;
                        {
                          ATerm o_36 = NULL;
                          o_36 = t;
                          if(((n_36 != NULL) && (n_36 != o_36)))
                            _fail(o_36);
                          else
                            n_36 = o_36;
                        }
                        t = f_30;
                        {
                          ATerm q_36 = NULL,s_36 = NULL;
                          ATerm r_36 = NULL;
                          r_36 = t;
                          if(((q_36 != NULL) && (q_36 != r_36)))
                            _fail(r_36);
                          else
                            q_36 = r_36;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_36)), term_g_10), not_null(z_35));
                            {
                              t = concat_strings_0(t);
                              {
                                t = xtc_find_loc_0(t);
                                {
                                  s_36 = t;
                                  if(((p_36 != NULL) && (p_36 != s_36)))
                                    _fail(s_36);
                                  else
                                    p_36 = s_36;
                                }
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_36), (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_36)));
                        }
                        return(t);
                      }
                      t = fetch_elem_1(t, g_3);
                    }
                    ;
                    LocalPopChoice(e_30);
                  }
                else
                  {
                    t = d_30;
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_30), not_null(z_35)), term_g_30);
                      t = fatal_error_0(t);
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
ATerm get_module_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm h_37 = NULL;
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  h_37 = t;
  {
    ATerm m_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
    ATerm n_37 = NULL;
    t = not_null(h_37);
    {
      t = basename_0(t);
      {
        n_37 = t;
        if(((m_37 != NULL) && (m_37 != n_37)))
          _fail(n_37);
        else
          m_37 = n_37;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_24), term_k_30), term_j_30), term_i_30));
      {
        t = find_module_1(t, b_81);
        {
          o_37 = t;
          f_37 :
          if(match_cons(o_37, sym__2))
            {
              p_37 = ATgetArgument(o_37, 0);
              q_37 = ATgetArgument(o_37, 1);
              g_37 :
              if(match_cons(q_37, sym_FILE_1))
                {
                  r_37 = ATgetArgument(q_37, 0);
                  {
                    ATerm s_37 = NULL;
                    if(((j_37 != NULL) && (j_37 != p_37)))
                      _fail(p_37);
                    else
                      j_37 = p_37;
                    {
                      if(((k_37 != NULL) && (k_37 != r_37)))
                        _fail(r_37);
                      else
                        k_37 = r_37;
                      {
                        ATerm h_3 (ATerm t)
                        {
                          ATerm n_30;
                          n_30 = t;
                          {
                            t = not_null(k_37);
                            {
                              ATerm i_3 (ATerm t)
                              {
                                t = term_p_30;
                                return(t);
                              }
                              t = debug_1(t, i_3);
                            }
                          }
                          t = n_30;
                          return(t);
                        }
                        t = if_verbose3_1(t, h_3);
                        {
                          t = parse_module_0(t);
                          {
                            s_37 = t;
                            if(((l_37 != NULL) && (l_37 != s_37)))
                              _fail(s_37);
                            else
                              l_37 = s_37;
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
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_37), not_null(l_37));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm i_38 = NULL;
  ATerm k_38 = NULL,l_38 = NULL;
  i_38 = t;
  {
    ATerm m_38 = NULL;
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
    t = not_null(i_38);
    {
      m_38 = t;
      {
        t = SSL_explode_term(not_null(m_38));
        {
          o_38 = t;
          f_38 :
          if(match_cons(o_38, sym__2))
            {
              p_38 = ATgetArgument(o_38, 0);
              q_38 = ATgetArgument(o_38, 1);
              g_38 :
              if(match_string(p_38, ""))
                {
                  h_38 :
                  if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
                    {
                      r_38 = ATgetFirst((ATermList) q_38);
                      s_38 = (ATerm) ATgetNext((ATermList) q_38);
                      {
                        if(((l_38 != NULL) && (l_38 != r_38)))
                          _fail(r_38);
                        else
                          l_38 = r_38;
                        if(((k_38 != NULL) && (k_38 != s_38)))
                          _fail(s_38);
                        else
                          k_38 = s_38;
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
    t = not_null(l_38);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  z_38 = t;
  x_38 :
  if(match_cons(z_38, sym__5))
    {
      a_39 = ATgetArgument(z_38, 0);
      d_39 = ATgetArgument(z_38, 1);
      e_39 = ATgetArgument(z_38, 2);
      f_39 = ATgetArgument(z_38, 3);
      g_39 = ATgetArgument(z_38, 4);
      y_38 :
      if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
        {
          b_39 = ATgetFirst((ATermList) a_39);
          c_39 = (ATerm) ATgetNext((ATermList) a_39);
          t = (ATerm) ATmakeAppl(sym__5, not_null(c_39), not_null(d_39), not_null(e_39), not_null(f_39), (ATerm) ATinsert(CheckATermList(not_null(g_39)), not_null(b_39)));
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
ATerm eq_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym__2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      if(((r_39 != NULL) && (r_39 != s_39)))
        _fail(s_39);
      else
        r_39 = s_39;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_92 (ATerm), ATerm w_92 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
    {
      z_39 = ATgetFirst((ATermList) y_39);
      a_40 = (ATerm) ATgetNext((ATermList) y_39);
      {
        t = w_92(t);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm d_40 = NULL;
            d_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_39), not_null(d_40));
              t = v_92(t);
            }
            return(t);
          }
          t = fetch_1(t, j_3);
        }
        t = not_null(a_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym__2))
    {
      k_40 = ATgetArgument(j_40, 0);
      l_40 = ATgetArgument(j_40, 1);
      {
        t = not_null(k_40);
        {
          ATerm p_40 (ATerm t)
          {
            ATerm t_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = t_30;
                {
                  ATerm v_30 = t;
                  int w_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_3 (ATerm t)
                      {
                        t = not_null(l_40);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_92, o_3);
                      t = p_40(t);
                      ;
                      LocalPopChoice(w_30);
                    }
                  else
                    {
                      t = v_30;
                      t = Cons_2(t, _id, p_40);
                    }
                }
              }
            return(t);
          }
          t = p_40(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  t_40 = t;
  r_40 :
  if(match_cons(t_40, sym__2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      s_40 :
      if(((ATgetType(v_40) == AT_LIST) && !(ATisEmpty(v_40))))
        {
          w_40 = ATgetFirst((ATermList) v_40);
          x_40 = (ATerm) ATgetNext((ATermList) v_40);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_40)), not_null(w_40)), not_null(x_40));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym__2))
    {
      f_41 = ATgetArgument(e_41, 0);
      g_41 = ATgetArgument(e_41, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_41)), not_null(f_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,x_41 = NULL;
  o_41 = t;
  l_41 :
  if(match_cons(o_41, sym__2))
    {
      p_41 = ATgetArgument(o_41, 0);
      s_41 = ATgetArgument(o_41, 1);
      m_41 :
      if(((ATgetType(p_41) == AT_LIST) && !(ATisEmpty(p_41))))
        {
          q_41 = ATgetFirst((ATermList) p_41);
          r_41 = (ATerm) ATgetNext((ATermList) p_41);
          n_41 :
          if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
            {
              t_41 = ATgetFirst((ATermList) s_41);
              x_41 = (ATerm) ATgetNext((ATermList) s_41);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_41), not_null(t_41)), (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(x_41)));
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
ATerm Zip1_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  h_42 = t;
  e_42 :
  if(match_cons(h_42, sym__2))
    {
      i_42 = ATgetArgument(h_42, 0);
      j_42 = ATgetArgument(h_42, 1);
      f_42 :
      if(((ATgetType(i_42) == AT_LIST) && ATisEmpty(i_42)))
        {
          g_42 :
          if(((ATgetType(j_42) == AT_LIST) && ATisEmpty(j_42)))
            {
              t = (ATerm) ATempty;
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
ATerm genzip_4 (ATerm t, ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm))
{
  ATerm l_42 (ATerm t)
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_90(t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          t = s_90(t);
          {
            t = _2(t, u_90, l_42);
            t = t_90(t);
          }
        }
      }
    return(t);
  }
  t = l_42(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_90 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_90);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,d_43 = NULL;
  w_42 = t;
  u_42 :
  if(((ATgetType(w_42) == AT_LIST) && !(ATisEmpty(w_42))))
    {
      x_42 = ATgetFirst((ATermList) w_42);
      d_43 = (ATerm) ATgetNext((ATermList) w_42);
      v_42 :
      if(match_cons(x_42, sym__2))
        {
          y_42 = ATgetArgument(x_42, 0);
          z_42 = ATgetArgument(x_42, 1);
          {
            ATerm i_43 = NULL,j_43 = NULL,p_43 = NULL,v_43 = NULL;
            ATerm z_30;
            z_30 = t;
            {
              ATerm k_43 = NULL;
              ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
              t = not_null(z_42);
              {
                k_43 = t;
                {
                  t = SSL_explode_term(not_null(k_43));
                  {
                    m_43 = t;
                    p_42 :
                    if(match_cons(m_43, sym__2))
                      {
                        n_43 = ATgetArgument(m_43, 0);
                        o_43 = ATgetArgument(m_43, 1);
                        {
                          if(((i_43 != NULL) && (i_43 != n_43)))
                            _fail(n_43);
                          else
                            i_43 = n_43;
                          if(((j_43 != NULL) && (j_43 != o_43)))
                            _fail(o_43);
                          else
                            j_43 = o_43;
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
            t = z_30;
            {
              ATerm a_31;
              a_31 = t;
              {
                ATerm q_43 = NULL;
                ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
                t = not_null(y_42);
                {
                  q_43 = t;
                  {
                    t = SSL_explode_term(not_null(q_43));
                    {
                      s_43 = t;
                      s_42 :
                      if(match_cons(s_43, sym__2))
                        {
                          t_43 = ATgetArgument(s_43, 0);
                          u_43 = ATgetArgument(s_43, 1);
                          {
                            if(((i_43 != NULL) && (i_43 != t_43)))
                              _fail(t_43);
                            else
                              i_43 = t_43;
                            if(((p_43 != NULL) && (p_43 != u_43)))
                              _fail(u_43);
                            else
                              p_43 = u_43;
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
              t = a_31;
              {
                ATerm w_43 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_43), not_null(j_43));
                {
                  t = zip_1(t, _id);
                  {
                    w_43 = t;
                    if(((v_43 != NULL) && (v_43 != w_43)))
                      _fail(w_43);
                    else
                      v_43 = w_43;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_43), not_null(d_43));
                  t = conc_0(t);
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
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  g_44 = t;
  e_44 :
  if(((ATgetType(g_44) == AT_LIST) && !(ATisEmpty(g_44))))
    {
      h_44 = ATgetFirst((ATermList) g_44);
      k_44 = (ATerm) ATgetNext((ATermList) g_44);
      f_44 :
      if(match_cons(h_44, sym__2))
        {
          i_44 = ATgetArgument(h_44, 0);
          j_44 = ATgetArgument(h_44, 1);
          {
            ATerm m_44 = NULL;
            if(((i_44 != NULL) && (i_44 != j_44)))
              _fail(j_44);
            else
              i_44 = j_44;
            {
              if(((m_44 != NULL) && (m_44 != k_44)))
                _fail(k_44);
              else
                m_44 = k_44;
              t = not_null(m_44);
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
ATerm diff_0 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm p_44 = NULL;
        p_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_44));
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        ATerm d_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm i_31 = t;
              int m_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(m_31);
                }
              else
                {
                  t = i_31;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, v_3);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = d_31;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_3, s_3, u_3);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  f_45 = t;
  d_45 :
  if(match_cons(f_45, sym__5))
    {
      g_45 = ATgetArgument(f_45, 0);
      l_45 = ATgetArgument(f_45, 1);
      m_45 = ATgetArgument(f_45, 2);
      n_45 = ATgetArgument(f_45, 3);
      o_45 = ATgetArgument(f_45, 4);
      e_45 :
      if(((ATgetType(g_45) == AT_LIST) && !(ATisEmpty(g_45))))
        {
          j_45 = ATgetFirst((ATermList) g_45);
          k_45 = (ATerm) ATgetNext((ATermList) g_45);
          {
            ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,d_46 = NULL,f_46 = NULL,s_46 = NULL;
            ATerm p_31;
            p_31 = t;
            {
              ATerm y_45 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_45), not_null(m_45));
              {
                ATerm z_45 = NULL;
                t = m_111(t);
                {
                  y_45 = t;
                  {
                    if(((v_45 != NULL) && (v_45 != y_45)))
                      _fail(y_45);
                    else
                      v_45 = y_45;
                    {
                      t = not_null(v_45);
                      {
                        ATerm a_46 = NULL;
                        t = n_111(t);
                        {
                          z_45 = t;
                          {
                            if(((w_45 != NULL) && (w_45 != z_45)))
                              _fail(z_45);
                            else
                              w_45 = z_45;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), not_null(l_45));
                              {
                                t = diff_0(t);
                                {
                                  a_46 = t;
                                  if(((x_45 != NULL) && (x_45 != a_46)))
                                    _fail(a_46);
                                  else
                                    x_45 = a_46;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = p_31;
            {
              ATerm q_31;
              q_31 = t;
              {
                ATerm e_46 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_45), not_null(k_45));
                {
                  t = conc_0(t);
                  {
                    e_46 = t;
                    if(((d_46 != NULL) && (d_46 != e_46)))
                      _fail(e_46);
                    else
                      d_46 = e_46;
                  }
                }
              }
              t = q_31;
              {
                ATerm r_31;
                r_31 = t;
                {
                  ATerm g_46 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_45), not_null(l_45));
                  {
                    t = conc_0(t);
                    {
                      g_46 = t;
                      if(((f_46 != NULL) && (f_46 != g_46)))
                        _fail(g_46);
                      else
                        f_46 = g_46;
                    }
                  }
                }
                t = r_31;
                {
                  ATerm t_46 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(j_45), not_null(v_45), not_null(n_45));
                  {
                    t = o_111(t);
                    {
                      t_46 = t;
                      if(((s_46 != NULL) && (s_46 != t_46)))
                        _fail(t_46);
                      else
                        s_46 = t_46;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(d_46), not_null(f_46), not_null(m_45), not_null(s_46), not_null(o_45));
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
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  e_47 = t;
  c_47 :
  if(match_cons(e_47, sym__5))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      l_47 = ATgetArgument(e_47, 2);
      m_47 = ATgetArgument(e_47, 3);
      n_47 = ATgetArgument(e_47, 4);
      d_47 :
      if(((ATgetType(f_47) == AT_LIST) && ATisEmpty(f_47)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_47), not_null(n_47));
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
  v_47 = t;
  u_47 :
  if(match_cons(v_47, sym__3))
    {
      w_47 = ATgetArgument(v_47, 0);
      x_47 = ATgetArgument(v_47, 1);
      y_47 = ATgetArgument(v_47, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(w_47), not_null(w_47), not_null(x_47), not_null(y_47), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm))
{
  ATerm l_48 (ATerm t)
  {
    ATerm s_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_82(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = s_31;
        {
          t = p_82(t);
          t = l_48(t);
        }
      }
    return(t);
  }
  t = l_48(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm))
{
  t = r_82(t);
  t = while_not_2(t, s_82, t_82);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm w_110 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, u_110, v_110, w_110);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, a_4);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm))
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  t = graph_nodes_undef_roots_3(t, j_111, k_111, l_111);
  {
    o_48 = t;
    n_48 :
    if(match_cons(o_48, sym__2))
      {
        p_48 = ATgetArgument(o_48, 0);
        q_48 = ATgetArgument(o_48, 1);
        t = not_null(p_48);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm s_95 (ATerm))
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 (ATerm t)
            {
              t = filter_1(t, s_95);
              return(t);
            }
            t = Cons_2(t, s_95, b_4);
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
              a_49 = t;
              z_48 :
              if(((ATgetType(a_49) == AT_LIST) && !(ATisEmpty(a_49))))
                {
                  b_49 = ATgetFirst((ATermList) a_49);
                  c_49 = (ATerm) ATgetNext((ATermList) a_49);
                  {
                    t = not_null(c_49);
                    t = filter_1(t, s_95);
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
ATerm pack_stratego_modules_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  l_49 = t;
  k_49 :
  if(match_cons(l_49, sym_FILE_1))
    {
      m_49 = ATgetArgument(l_49, 0);
      {
        ATerm o_49 = NULL;
        ATerm q_49 = NULL;
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_29;
            {
              t = get_config_0(t);
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm r_32 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm p_49 = NULL;
                      p_49 = t;
                      g_49 :
                      if(!(match_string(p_49, "-I")))
                        {
                          _fail(t);
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = r_32;
                    }
                  return(t);
                }
                t = filter_1(t, c_4);
              }
            }
            ;
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            t = (ATerm) ATempty;
          }
        {
          q_49 = t;
          if(((o_49 != NULL) && (o_49 != q_49)))
            _fail(q_49);
          else
            o_49 = q_49;
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(m_49)), term_t_32), term_s_32), term_j_28, (ATerm) ATempty);
          {
            ATerm d_4 (ATerm t)
            {
              t = Fst_0(t);
              {
                ATerm f_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_49)), term_g_10);
                  return(t);
                }
                t = get_module_1(t, f_4);
              }
              return(t);
            }
            ATerm e_4 (ATerm t)
            {
              ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
              r_49 = t;
              j_49 :
              if(match_cons(r_49, sym__3))
                {
                  s_49 = ATgetArgument(r_49, 0);
                  t_49 = ATgetArgument(r_49, 1);
                  u_49 = ATgetArgument(r_49, 2);
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_49)), not_null(t_49));
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = graph_nodes_roots_3(t, d_4, get_stratego_imports_0, e_4);
            {
              t = unzip_0(t);
              t = _2(t, _id, flatten_stratego_0);
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
ATerm concat_0 (ATerm t)
{
  ATerm u_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = u_32;
      {
        ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
        d_50 = t;
        c_50 :
        if(((ATgetType(d_50) == AT_LIST) && !(ATisEmpty(d_50))))
          {
            e_50 = ATgetFirst((ATermList) d_50);
            f_50 = (ATerm) ATgetNext((ATermList) d_50);
            {
              t = not_null(e_50);
              {
                ATerm g_4 (ATerm t)
                {
                  t = not_null(f_50);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_4);
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
  ATerm p_50 = NULL;
  ATerm r_50 = NULL;
  p_50 = t;
  {
    ATerm s_50 = NULL;
    ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
    t = not_null(p_50);
    {
      s_50 = t;
      {
        t = SSL_explode_term(not_null(s_50));
        {
          u_50 = t;
          n_50 :
          if(match_cons(u_50, sym__2))
            {
              v_50 = ATgetArgument(u_50, 0);
              w_50 = ATgetArgument(u_50, 1);
              o_50 :
              if(match_string(v_50, ""))
                {
                  if(((r_50 != NULL) && (r_50 != w_50)))
                    _fail(w_50);
                  else
                    r_50 = w_50;
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
      t = not_null(r_50);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm a_51 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_51);
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          t = Nil_0(t);
          t = e_89(t);
        }
      }
    return(t);
  }
  t = a_51(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  c_51 :
  if(match_cons(d_51, sym__2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      {
        t = not_null(e_51);
        {
          ATerm h_4 (ATerm t)
          {
            t = not_null(f_51);
            return(t);
          }
          t = at_end_1(t, h_4);
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
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,y_51 = NULL;
  r_51 = t;
  m_51 :
  if(match_cons(r_51, sym__2))
    {
      s_51 = ATgetArgument(r_51, 0);
      y_51 = ATgetArgument(r_51, 1);
      {
        ATerm b_52 = NULL;
        ATerm c_52 = NULL,e_52 = NULL;
        ATerm d_52 = NULL;
        t = not_null(s_51);
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              t = (ATerm) ATempty;
            }
          {
            d_52 = t;
            if(((c_52 != NULL) && (c_52 != d_52)))
              _fail(d_52);
            else
              c_52 = d_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_51), not_null(c_52));
          {
            t = conc_0(t);
            {
              e_52 = t;
              if(((b_52 != NULL) && (b_52 != e_52)))
                _fail(e_52);
              else
                b_52 = e_52;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_12, not_null(s_51), not_null(b_52));
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
ATerm pack_stratego_options_0 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 (ATerm t)
      {
        ATerm o_52 = NULL;
        o_52 = t;
        i_52 :
        if(!(match_string(o_52, "-I")))
          {
            if(!(match_string(o_52, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        ATerm p_52 = NULL;
        ATerm q_52 = NULL;
        q_52 = t;
        if(((p_52 != NULL) && (p_52 != q_52)))
          _fail(q_52);
        else
          p_52 = q_52;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_52)), term_e_29));
          t = extend_config_0(t);
        }
        t = term_j_28;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_k_33;
        return(t);
      }
      t = ArgOption_3(t, i_4, j_4, l_4);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              ATerm r_52 = NULL;
              r_52 = t;
              k_52 :
              if(!(match_string(r_52, "--nodep")))
                {
                  if(!(match_string(r_52, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              t = term_o_33;
              t = set_config_0(t);
              t = term_j_28;
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              t = term_p_33;
              return(t);
            }
            t = Option_3(t, y_4, z_4, a_5);
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm q_33 = t;
              int r_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm s_52 = NULL;
                    s_52 = t;
                    l_52 :
                    if(!(match_string(s_52, "--dep")))
                      {
                        if(!(match_string(s_52, "-d")))
                          {
                            if(!(match_string(s_52, "-dep")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm c_5 (ATerm t)
                  {
                    ATerm t_52 = NULL;
                    ATerm u_52 = NULL;
                    u_52 = t;
                    if(((t_52 != NULL) && (t_52 != u_52)))
                      _fail(u_52);
                    else
                      t_52 = u_52;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(t_52));
                      t = set_config_0(t);
                    }
                    t = term_j_28;
                    return(t);
                  }
                  ATerm d_5 (ATerm t)
                  {
                    t = term_u_33;
                    return(t);
                  }
                  t = ArgOption_3(t, b_5, c_5, d_5);
                  ;
                  LocalPopChoice(r_33);
                }
              else
                {
                  t = q_33;
                  {
                    ATerm e_5 (ATerm t)
                    {
                      ATerm v_52 = NULL;
                      v_52 = t;
                      n_52 :
                      if(!(match_string(v_52, "--imports")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm f_5 (ATerm t)
                    {
                      t = term_w_33;
                      t = set_config_0(t);
                      t = term_j_28;
                      return(t);
                    }
                    ATerm g_5 (ATerm t)
                    {
                      t = term_a_34;
                      return(t);
                    }
                    t = Option_3(t, e_5, f_5, g_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm c_53 = NULL,g_53 = NULL,h_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym__2))
    {
      g_53 = ATgetArgument(c_53, 0);
      h_53 = ATgetArgument(c_53, 1);
      t = SSL_copy(not_null(g_53), not_null(h_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  x_53 :
  if(match_cons(y_53, sym_stderr_0))
    {
      ATerm a_54 = NULL,c_54 = NULL;
      ATerm i_34;
      i_34 = t;
      {
        ATerm b_54 = NULL;
        t = SSLgetAnnotations(not_null(y_53));
        {
          b_54 = t;
          if(((a_54 != NULL) && (a_54 != b_54)))
            _fail(b_54);
          else
            a_54 = b_54;
        }
      }
      t = i_34;
      {
        ATerm e_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(a_54));
        {
          e_54 = t;
          if(((c_54 != NULL) && (c_54 != e_54)))
            _fail(e_54);
          else
            c_54 = e_54;
        }
        t = not_null(c_54);
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
  ATerm n_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_stdout_0))
    {
      ATerm p_54 = NULL,r_54 = NULL;
      ATerm j_34;
      j_34 = t;
      {
        ATerm q_54 = NULL;
        t = SSLgetAnnotations(not_null(n_54));
        {
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
        }
      }
      t = j_34;
      {
        ATerm s_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_54));
        {
          s_54 = t;
          if(((r_54 != NULL) && (r_54 != s_54)))
            _fail(s_54);
          else
            r_54 = s_54;
        }
        t = not_null(r_54);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm e_55 = NULL,f_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_FILE_1))
    {
      f_55 = ATgetArgument(e_55, 0);
      {
        ATerm k_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_55 = NULL;
            ATerm i_55 = NULL;
            t = m_0(t);
            {
              i_55 = t;
              {
                if(((h_55 != NULL) && (h_55 != i_55)))
                  _fail(i_55);
                else
                  h_55 = i_55;
                {
                  ATerm n_34 = t;
                  int o_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(o_34);
                    }
                  else
                    {
                      t = n_34;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_55), not_null(h_55));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_55));
            ;
            LocalPopChoice(m_34);
          }
        else
          {
            t = k_34;
            {
              ATerm q_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_55 = NULL;
                  ATerm l_55 = NULL;
                  t = m_0(t);
                  {
                    l_55 = t;
                    {
                      if(((k_55 != NULL) && (k_55 != l_55)))
                        _fail(l_55);
                      else
                        k_55 = l_55;
                      {
                        ATerm s_34 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_34 = t;
                            int w_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(w_34);
                              }
                            else
                              {
                                t = v_34;
                                {
                                  ATerm b_35 = t;
                                  int c_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(c_35);
                                    }
                                  else
                                    {
                                      t = b_35;
                                      {
                                        ATerm m_55 = NULL;
                                        m_55 = t;
                                        if(((f_55 != NULL) && (f_55 != m_55)))
                                          _fail(m_55);
                                        else
                                          f_55 = m_55;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = s_34;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_55), not_null(k_55));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_55));
                  ;
                  LocalPopChoice(r_34);
                }
              else
                {
                  t = q_34;
                  {
                    ATerm o_55 = NULL;
                    t = m_0(t);
                    {
                      o_55 = t;
                      if(((f_55 != NULL) && (f_55 != o_55)))
                        _fail(o_55);
                      else
                        f_55 = o_55;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_55));
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
ATerm Tl_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  x_55 :
  if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
    {
      z_55 = ATgetFirst((ATermList) y_55);
      a_56 = (ATerm) ATgetNext((ATermList) y_55);
      t = not_null(a_56);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  f_56 :
  if(match_cons(g_56, sym__2))
    {
      h_56 = ATgetArgument(g_56, 0);
      i_56 = ATgetArgument(g_56, 1);
      {
        ATerm d_35;
        d_35 = t;
        {
          ATerm l_56 = NULL;
          ATerm m_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_56), not_null(i_56));
          {
            ATerm e_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(h_35);
              }
            else
              {
                t = e_35;
                t = (ATerm) ATempty;
              }
            {
              m_56 = t;
              if(((l_56 != NULL) && (l_56 != m_56)))
                _fail(m_56);
              else
                l_56 = m_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_56), not_null(i_56), not_null(l_56));
            t = table_put_0(t);
          }
        }
        t = d_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm e_99 (ATerm))
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  ATerm i_35;
  i_35 = t;
  {
    ATerm k_57 = NULL;
    ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
    t = e_99(t);
    {
      k_57 = t;
      {
        if(((a_57 != NULL) && (a_57 != k_57)))
          _fail(k_57);
        else
          a_57 = k_57;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), term_c_28);
              t = table_get_0(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            l_57 = t;
            x_56 :
            if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
              {
                m_57 = ATgetFirst((ATermList) l_57);
                n_57 = (ATerm) ATgetNext((ATermList) l_57);
                {
                  if(((z_56 != NULL) && (z_56 != m_57)))
                    _fail(m_57);
                  else
                    z_56 = m_57;
                  {
                    if(((y_56 != NULL) && (y_56 != n_57)))
                      _fail(n_57);
                    else
                      y_56 = n_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_57), term_c_28, not_null(y_56));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_56);
                          {
                            ATerm n_5 (ATerm t)
                            {
                              ATerm o_57 = NULL;
                              o_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), not_null(o_57));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_5);
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
  t = i_35;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  t = SSL_remove(not_null(u_57));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_81(t);
      t = t_81(t);
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      {
        t = t_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm z_57 = NULL;
  ATerm n_35;
  n_35 = t;
  {
    ATerm f_58 = NULL;
    ATerm g_58 = NULL;
    t = d_99(t);
    {
      f_58 = t;
      {
        if(((z_57 != NULL) && (z_57 != f_58)))
          _fail(f_58);
        else
          z_57 = f_58;
        {
          ATerm h_58 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_57), term_c_28);
          {
            ATerm o_35 = t;
            int p_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_35);
              }
            else
              {
                t = o_35;
                t = (ATerm) ATempty;
              }
            {
              h_58 = t;
              if(((g_58 != NULL) && (g_58 != h_58)))
                _fail(h_58);
              else
                g_58 = h_58;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_57), term_c_28, (ATerm) ATinsert(CheckATermList(not_null(g_58)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_35;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm q_109 (ATerm))
{
  ATerm x_58 = NULL,z_58 = NULL;
  ATerm o_5 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  t = begin_scope_1(t, o_5);
  {
    ATerm r_5 (ATerm t)
    {
      ATerm q_35;
      q_35 = t;
      {
        ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_35;
            t = table_get_0(t);
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          a_59 = t;
          w_58 :
          if(((ATgetType(a_59) == AT_LIST) && !(ATisEmpty(a_59))))
            {
              b_59 = ATgetFirst((ATermList) a_59);
              c_59 = (ATerm) ATgetNext((ATermList) a_59);
              {
                if(((z_58 != NULL) && (z_58 != b_59)))
                  _fail(b_59);
                else
                  z_58 = b_59;
                {
                  if(((x_58 != NULL) && (x_58 != c_59)))
                    _fail(c_59);
                  else
                    x_58 = c_59;
                  {
                    t = not_null(z_58);
                    {
                      ATerm s_5 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, s_5);
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
      t = q_35;
      {
        ATerm t_5 (ATerm t)
        {
          t = term_m_28;
          return(t);
        }
        t = end_scope_1(t, t_5);
      }
      return(t);
    }
    t = restore_always_2(t, q_109, r_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm r_109 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_59 = NULL;
        ATerm g_59 = NULL;
        t = term_n_28;
        {
          t = get_config_0(t);
          {
            g_59 = t;
            if(((f_59 != NULL) && (f_59 != g_59)))
              _fail(g_59);
            else
              f_59 = g_59;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_59));
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = term_v_12;
      }
    {
      t = r_109(t);
      {
        ATerm b_6 (ATerm t)
        {
          ATerm w_35 = t;
          int b_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_h_10;
              t = get_config_0(t);
              ;
              LocalPopChoice(b_36);
            }
          else
            {
              t = w_35;
              t = term_c_36;
            }
          return(t);
        }
        t = copy_to_1(t, b_6);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, u_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm k_59 = NULL;
    k_59 = t;
    i_59 :
    if(!(match_string(k_59, "-k")))
      {
        if(!(match_string(k_59, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    ATerm e_36;
    e_36 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, not_null(l_59));
        t = set_config_0(t);
      }
    }
    t = e_36;
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_l_36;
    return(t);
  }
  t = ArgOption_3(t, c_6, f_6, g_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  t = SSL_string_to_int(not_null(p_59));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 (ATerm t)
      {
        ATerm x_59 = NULL;
        x_59 = t;
        s_59 :
        if(!(match_string(x_59, "-S")))
          {
            if(!(match_string(x_59, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = term_v_36;
        t = set_config_0(t);
        t = term_w_36;
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = term_x_36;
        return(t);
      }
      t = Option_3(t, h_6, i_6, j_6);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = m_36;
      {
        ATerm y_36 = t;
        int z_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_6 (ATerm t)
            {
              ATerm y_59 = NULL;
              y_59 = t;
              t_59 :
              if(!(match_string(y_59, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_6 (ATerm t)
            {
              ATerm b_60 = NULL;
              ATerm a_37;
              a_37 = t;
              {
                ATerm z_59 = NULL;
                ATerm a_60 = NULL;
                t = string_to_int_0(t);
                {
                  a_60 = t;
                  if(((z_59 != NULL) && (z_59 != a_60)))
                    _fail(a_60);
                  else
                    z_59 = a_60;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(z_59));
                  t = set_config_0(t);
                }
              }
              t = a_37;
              {
                ATerm c_60 = NULL;
                c_60 = t;
                if(((b_60 != NULL) && (b_60 != c_60)))
                  _fail(c_60);
                else
                  b_60 = c_60;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_60));
              }
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_b_37;
              return(t);
            }
            t = ArgOption_3(t, o_6, p_6, u_6);
            ;
            LocalPopChoice(z_36);
          }
        else
          {
            t = y_36;
            {
              ATerm v_6 (ATerm t)
              {
                ATerm d_60 = NULL;
                d_60 = t;
                w_59 :
                if(!(match_string(d_60, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_6 (ATerm t)
              {
                t = term_d_37;
                t = set_config_0(t);
                t = term_e_37;
                return(t);
              }
              ATerm x_6 (ATerm t)
              {
                t = term_i_37;
                return(t);
              }
              t = Option_3(t, v_6, w_6, x_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm j_60 = NULL;
    j_60 = t;
    g_60 :
    if(!(match_string(j_60, "-o")))
      {
        if(!(match_string(j_60, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_7 (ATerm t)
  {
    ATerm m_60 = NULL;
    ATerm v_37;
    v_37 = t;
    {
      ATerm k_60 = NULL;
      ATerm l_60 = NULL;
      l_60 = t;
      if(((k_60 != NULL) && (k_60 != l_60)))
        _fail(l_60);
      else
        k_60 = l_60;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(k_60));
        t = set_config_0(t);
      }
    }
    t = v_37;
    {
      ATerm n_60 = NULL;
      n_60 = t;
      if(((m_60 != NULL) && (m_60 != n_60)))
        _fail(n_60);
      else
        m_60 = n_60;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_60));
    }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  t = ArgOption_3(t, a_7, b_7, c_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(y_37);
    }
  else
    {
      t = x_37;
      {
        ATerm e_7 (ATerm t)
        {
          ATerm r_60 = NULL;
          r_60 = t;
          q_60 :
          if(!(match_string(r_60, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_7 (ATerm t)
        {
          t = term_a_38;
          t = set_config_0(t);
          t = term_b_38;
          return(t);
        }
        ATerm i_7 (ATerm t)
        {
          t = term_c_38;
          return(t);
        }
        t = Option_3(t, e_7, h_7, i_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  x_60 = t;
  v_60 :
  if(match_string(x_60, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(x_60) == AT_LIST) && !(ATisEmpty(x_60))))
        {
          y_60 = ATgetFirst((ATermList) x_60);
          z_60 = (ATerm) ATgetNext((ATermList) x_60);
          w_60 :
          if(((ATgetType(z_60) == AT_LIST) && !(ATisEmpty(z_60))))
            {
              a_61 = ATgetFirst((ATermList) z_60);
              b_61 = (ATerm) ATgetNext((ATermList) z_60);
              {
                ATerm f_61 = NULL;
                ATerm d_38;
                d_38 = t;
                {
                  t = not_null(y_60);
                  t = j_0(t);
                }
                t = d_38;
                {
                  ATerm q_61 = NULL;
                  t = not_null(a_61);
                  {
                    t = k_0(t);
                    {
                      q_61 = t;
                      if(((f_61 != NULL) && (f_61 != q_61)))
                        _fail(q_61);
                      else
                        f_61 = q_61;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_61)), not_null(f_61));
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
ATerm input_option_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm y_61 = NULL;
    y_61 = t;
    v_61 :
    if(!(match_string(y_61, "-i")))
      {
        if(!(match_string(y_61, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_7 (ATerm t)
  {
    ATerm b_62 = NULL;
    ATerm e_38;
    e_38 = t;
    {
      ATerm z_61 = NULL;
      ATerm a_62 = NULL;
      a_62 = t;
      if(((z_61 != NULL) && (z_61 != a_62)))
        _fail(a_62);
      else
        z_61 = a_62;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_28, not_null(z_61));
        t = set_config_0(t);
      }
    }
    t = e_38;
    {
      ATerm c_62 = NULL;
      c_62 = t;
      if(((b_62 != NULL) && (b_62 != c_62)))
        _fail(c_62);
      else
        b_62 = c_62;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_62));
    }
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    t = term_j_38;
    return(t);
  }
  t = ArgOption_3(t, p_7, w_7, y_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = n_38;
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_38;
  w_38 = t;
  {
    ATerm s_62 = NULL;
    ATerm u_62 = NULL;
    t = term_j_28;
    {
      t = whoami_0(t);
      {
        u_62 = t;
        if(((s_62 != NULL) && (s_62 != u_62)))
          _fail(u_62);
        else
          s_62 = u_62;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_39), not_null(s_62)), term_h_39));
      {
        t = printnl_0(t);
        {
          t = term_e_13;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_38;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm z_62 = NULL;
  t = report_run_time_0(t);
  {
    ATerm b_63 = NULL;
    t = term_j_28;
    {
      t = whoami_0(t);
      {
        b_63 = t;
        if(((z_62 != NULL) && (z_62 != b_63)))
          _fail(b_63);
        else
          z_62 = b_63;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_j_39), not_null(z_62)));
      {
        t = printnl_0(t);
        {
          t = term_e_13;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_k_39;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_63 = NULL;
  h_63 = t;
  t = SSL_TicksToSeconds(not_null(h_63));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  r_63 :
  if(match_cons(s_63, sym__2))
    {
      t_63 = ATgetArgument(s_63, 0);
      u_63 = ATgetArgument(s_63, 1);
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_63), not_null(u_63));
            ;
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            t = SSL_addr(not_null(t_63), not_null(u_63));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_94(t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      {
        ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL;
        p_64 = t;
        o_64 :
        if(((ATgetType(p_64) == AT_LIST) && !(ATisEmpty(p_64))))
          {
            q_64 = ATgetFirst((ATermList) p_64);
            r_64 = (ATerm) ATgetNext((ATermList) p_64);
            {
              ATerm u_64 = NULL;
              ATerm v_64 = NULL;
              t = not_null(r_64);
              {
                t = foldr_2(t, p_94, q_94);
                {
                  v_64 = t;
                  if(((u_64 != NULL) && (u_64 != v_64)))
                    _fail(v_64);
                  else
                    u_64 = v_64;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(u_64));
                t = q_94(t);
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
ATerm crush_2 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm))
{
  ATerm q_65 = NULL;
  ATerm z_65 = NULL;
  q_65 = t;
  {
    ATerm a_66 = NULL;
    ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
    t = not_null(q_65);
    {
      a_66 = t;
      {
        t = SSL_explode_term(not_null(a_66));
        {
          c_66 = t;
          p_65 :
          if(match_cons(c_66, sym__2))
            {
              d_66 = ATgetArgument(c_66, 0);
              e_66 = ATgetArgument(c_66, 1);
              if(((z_65 != NULL) && (z_65 != e_66)))
                _fail(e_66);
              else
                z_65 = e_66;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_65);
      t = foldr_2(t, i_98, j_98);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm z_7 (ATerm t)
    {
      t = term_u_36;
      return(t);
    }
    t = crush_2(t, z_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
  k_66 = t;
  j_66 :
  if(match_cons(k_66, sym__2))
    {
      l_66 = ATgetArgument(k_66, 0);
      m_66 = ATgetArgument(k_66, 1);
      {
        ATerm t_39;
        t_39 = t;
        {
          ATerm u_39 = t;
          int v_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_66), not_null(m_66));
              ;
              LocalPopChoice(v_39);
            }
          else
            {
              t = u_39;
              t = SSL_gtr(not_null(l_66), not_null(m_66));
            }
        }
        t = t_39;
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
  ATerm s_66 = NULL;
  ATerm w_39 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
      t_66 = t;
      r_66 :
      if(match_cons(t_66, sym__2))
        {
          u_66 = ATgetArgument(t_66, 0);
          v_66 = ATgetArgument(t_66, 1);
          {
            if(((s_66 != NULL) && (s_66 != u_66)))
              _fail(u_66);
            else
              s_66 = u_66;
            if(((s_66 != NULL) && (s_66 != v_66)))
              _fail(v_66);
            else
              s_66 = v_66;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = w_39;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_102 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm c_40;
    c_40 = t;
    {
      ATerm y_66 = NULL;
      ATerm z_66 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          z_66 = t;
          if(((y_66 != NULL) && (y_66 != z_66)))
            _fail(z_66);
          else
            y_66 = z_66;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), term_e_13);
        t = geq_0(t);
      }
    }
    t = c_40;
    t = d_102(t);
    return(t);
  }
  t = try_1(t, a_8);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm d_67 = NULL,f_67 = NULL;
    ATerm e_40;
    e_40 = t;
    {
      ATerm e_67 = NULL;
      t = run_time_0(t);
      {
        e_67 = t;
        if(((d_67 != NULL) && (d_67 != e_67)))
          _fail(e_67);
        else
          d_67 = e_67;
      }
    }
    t = e_40;
    {
      ATerm i_67 = NULL;
      t = term_j_28;
      {
        t = whoami_0(t);
        {
          i_67 = t;
          if(((f_67 != NULL) && (f_67 != i_67)))
            _fail(i_67);
          else
            f_67 = i_67;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_40), not_null(d_67)), term_t_13), not_null(f_67)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_8);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_u_36;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_67 = NULL;
  p_67 = t;
  o_67 :
  if(match_cons(p_67, sym_Version_0))
    {
      ATerm r_67 = NULL,t_67 = NULL;
      ATerm g_40;
      g_40 = t;
      {
        ATerm s_67 = NULL;
        t = SSLgetAnnotations(not_null(p_67));
        {
          s_67 = t;
          if(((r_67 != NULL) && (r_67 != s_67)))
            _fail(s_67);
          else
            r_67 = s_67;
        }
      }
      t = g_40;
      {
        ATerm u_67 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_67));
        {
          u_67 = t;
          if(((t_67 != NULL) && (t_67 != u_67)))
            _fail(u_67);
          else
            t_67 = u_67;
        }
        t = not_null(t_67);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_103 (ATerm))
{
  ATerm h_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_40;
      t = get_config_0(t);
      ;
      LocalPopChoice(m_40);
    }
  else
    {
      t = h_40;
      {
        ATerm c_8 (ATerm t)
        {
          ATerm o_40 = t;
          int q_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(q_40);
            }
          else
            {
              t = o_40;
              {
                ATerm y_40 = t;
                int z_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(z_40);
                  }
                else
                  {
                    t = y_40;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, c_8);
      }
    }
  t = y_103(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_67 = NULL;
  z_67 = t;
  t = SSL_table_create(not_null(z_67));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_68 = NULL;
  d_68 = t;
  {
    ATerm a_41;
    a_41 = t;
    {
      t = term_b_41;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_41, term_c_41, not_null(d_68));
          t = table_put_0(t);
        }
      }
    }
    t = a_41;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_68 = NULL;
  h_68 = t;
  t = SSL_table_destroy(not_null(h_68));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_68 = NULL;
  l_68 = t;
  t = SSL_exit(not_null(l_68));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
  w_68 = t;
  t_68 :
  if(((ATgetType(w_68) == AT_LIST) && !(ATisEmpty(w_68))))
    {
      u_68 = ATgetFirst((ATermList) w_68);
      v_68 = (ATerm) ATgetNext((ATermList) w_68);
      {
        ATerm z_68 = NULL;
        t = not_null(v_68);
        {
          ATerm h_41;
          h_41 = t;
          {
            ATerm a_69 = NULL,c_69 = NULL,e_69 = NULL;
            ATerm i_41;
            i_41 = t;
            {
              ATerm b_69 = NULL;
              t = i_0(t);
              {
                b_69 = t;
                if(((a_69 != NULL) && (a_69 != b_69)))
                  _fail(b_69);
                else
                  a_69 = b_69;
              }
            }
            t = i_41;
            {
              ATerm d_69 = NULL;
              t = not_null(u_68);
              {
                t = g_0(t);
                {
                  d_69 = t;
                  if(((c_69 != NULL) && (c_69 != d_69)))
                    _fail(d_69);
                  else
                    c_69 = d_69;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_69)), not_null(c_69));
                {
                  e_69 = t;
                  if(((z_68 != NULL) && (z_68 != e_69)))
                    _fail(e_69);
                  else
                    z_68 = e_69;
                }
              }
            }
          }
          t = h_41;
          {
            ATerm h_8 (ATerm t)
            {
              t = not_null(z_68);
              return(t);
            }
            t = reverse_acc_2(t, g_0, h_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_68) == AT_LIST) && ATisEmpty(w_68)))
        {
          {
            t = term_j_28;
            t = i_0(t);
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
  ATerm i_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm p_69 = NULL,q_69 = NULL;
  p_69 = t;
  o_69 :
  if(match_cons(p_69, sym_Program_1))
    {
      q_69 = ATgetArgument(p_69, 0);
      {
        ATerm t_69 = NULL,v_69 = NULL;
        ATerm u_69 = NULL;
        t = SSLgetAnnotations(not_null(p_69));
        {
          u_69 = t;
          if(((t_69 != NULL) && (t_69 != u_69)))
            _fail(u_69);
          else
            t_69 = u_69;
        }
        {
          t = not_null(q_69);
          {
            ATerm x_69 = NULL;
            t = t_72(t);
            {
              v_69 = t;
              {
                ATerm y_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_69)), not_null(t_69));
                {
                  y_69 = t;
                  if(((x_69 != NULL) && (x_69 != y_69)))
                    _fail(y_69);
                  else
                    x_69 = y_69;
                }
                t = not_null(x_69);
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
  ATerm h_70 = NULL;
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_70 = NULL;
      t = term_k_39;
      {
        t = get_config_0(t);
        {
          i_70 = t;
          if(((h_70 != NULL) && (h_70 != i_70)))
            _fail(i_70);
          else
            h_70 = i_70;
        }
      }
      ;
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm j_8 (ATerm t)
        {
          ATerm k_8 (ATerm t)
          {
            ATerm j_70 = NULL;
            j_70 = t;
            if(((h_70 != NULL) && (h_70 != j_70)))
              _fail(j_70);
            else
              h_70 = j_70;
            return(t);
          }
          t = Program_1(t, k_8);
          return(t);
        }
        t = option_defined_1(t, j_8);
      }
    }
  {
    ATerm p_8 (ATerm t)
    {
      ATerm q_8 (ATerm t)
      {
        t = not_null(h_70);
        return(t);
      }
      t = short_description_1(t, q_8);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_8);
    {
      t = term_u_41;
      {
        t = echo_0(t);
        {
          t = term_y_41;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_8 (ATerm t)
                {
                  ATerm k_70 = NULL;
                  ATerm l_70 = NULL;
                  l_70 = t;
                  if(((k_70 != NULL) && (k_70 != l_70)))
                    _fail(l_70);
                  else
                    k_70 = l_70;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_70)), term_z_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_8);
                {
                  ATerm s_8 (ATerm t)
                  {
                    ATerm m_70 = NULL;
                    ATerm n_70 = NULL;
                    ATerm t_8 (ATerm t)
                    {
                      t = not_null(h_70);
                      return(t);
                    }
                    t = long_description_1(t, t_8);
                    {
                      n_70 = t;
                      if(((m_70 != NULL) && (m_70 != n_70)))
                        _fail(n_70);
                      else
                        m_70 = n_70;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_70)), term_a_42);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_8);
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
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  u_70 = t;
  t_70 :
  if(match_cons(u_70, sym__2))
    {
      v_70 = ATgetArgument(u_70, 0);
      w_70 = ATgetArgument(u_70, 1);
      {
        ATerm d_42;
        d_42 = t;
        t = SSL_printnl(not_null(v_70), not_null(w_70));
        t = d_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm f_71 = NULL,g_71 = NULL;
  f_71 = t;
  e_71 :
  if(match_cons(f_71, sym_Undefined_1))
    {
      g_71 = ATgetArgument(f_71, 0);
      {
        ATerm j_71 = NULL,l_71 = NULL;
        ATerm k_71 = NULL;
        t = SSLgetAnnotations(not_null(f_71));
        {
          k_71 = t;
          if(((j_71 != NULL) && (j_71 != k_71)))
            _fail(k_71);
          else
            j_71 = k_71;
        }
        {
          t = not_null(g_71);
          {
            ATerm n_71 = NULL;
            t = u_72(t);
            {
              l_71 = t;
              {
                ATerm o_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_71)), not_null(j_71));
                {
                  o_71 = t;
                  if(((n_71 != NULL) && (n_71 != o_71)))
                    _fail(o_71);
                  else
                    n_71 = o_71;
                }
                t = not_null(n_71);
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
ATerm fetch_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm t_71 (ATerm t)
  {
    ATerm k_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_88, _id);
        ;
        LocalPopChoice(m_42);
      }
    else
      {
        t = k_42;
        t = Cons_2(t, _id, t_71);
      }
    return(t);
  }
  t = t_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_105 (ATerm))
{
  t = fetch_1(t, m_105);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  v_71 = t;
  u_71 :
  if(((ATgetType(v_71) == AT_LIST) && ATisEmpty(v_71)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_71) == AT_LIST) && !(ATisEmpty(v_71))))
        {
          w_71 = ATgetFirst((ATermList) v_71);
          x_71 = (ATerm) ATgetNext((ATermList) v_71);
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
  ATerm n_42;
  n_42 = t;
  {
    ATerm a_72 = NULL;
    ATerm d_72 = NULL;
    ATerm o_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = o_42;
        {
          ATerm b_72 = NULL;
          ATerm c_72 = NULL;
          c_72 = t;
          if(((b_72 != NULL) && (b_72 != c_72)))
            _fail(c_72);
          else
            b_72 = c_72;
          t = (ATerm) ATinsert(ATempty, not_null(b_72));
        }
      }
    {
      d_72 = t;
      if(((a_72 != NULL) && (a_72 != d_72)))
        _fail(d_72);
      else
        a_72 = d_72;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_36, not_null(a_72));
      t = printnl_0(t);
    }
  }
  t = n_42;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_k_39;
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
  ATerm r_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(t_42);
    }
  else
    {
      t = r_42;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_72 = NULL;
  k_72 = t;
  j_72 :
  if(match_cons(k_72, sym_Help_0))
    {
      ATerm m_72 = NULL,o_72 = NULL;
      ATerm a_43;
      a_43 = t;
      {
        ATerm n_72 = NULL;
        t = SSLgetAnnotations(not_null(k_72));
        {
          n_72 = t;
          if(((m_72 != NULL) && (m_72 != n_72)))
            _fail(n_72);
          else
            m_72 = n_72;
        }
      }
      t = a_43;
      {
        ATerm p_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_72));
        {
          p_72 = t;
          if(((o_72 != NULL) && (o_72 != p_72)))
            _fail(p_72);
          else
            o_72 = p_72;
        }
        t = not_null(o_72);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_81(t);
      ;
      LocalPopChoice(c_43);
    }
  else
    {
      t = b_43;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_8 (ATerm t)
      {
        ATerm y_72 = NULL;
        y_72 = t;
        v_72 :
        if(!(match_string(y_72, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm v_8 (ATerm t)
      {
        t = term_h_43;
        t = set_config_0(t);
        return(t);
      }
      ATerm x_8 (ATerm t)
      {
        t = term_l_43;
        return(t);
      }
      t = Option_3(t, u_8, v_8, x_8);
      ;
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
        ATerm a_9 (ATerm t)
        {
          ATerm z_72 = NULL;
          z_72 = t;
          w_72 :
          if(!(match_string(z_72, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_9 (ATerm t)
        {
          t = term_h_43;
          {
            t = set_config_0(t);
            {
              t = term_x_43;
              t = set_config_0(t);
            }
          }
          t = term_y_43;
          return(t);
        }
        ATerm c_9 (ATerm t)
        {
          t = term_z_43;
          return(t);
        }
        t = Option_3(t, a_9, b_9, c_9);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
  c_73 = t;
  b_73 :
  if(match_cons(c_73, sym__2))
    {
      d_73 = ATgetArgument(c_73, 0);
      e_73 = ATgetArgument(c_73, 1);
      t = SSL_table_get(not_null(d_73), not_null(e_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL;
  l_73 = t;
  k_73 :
  if(match_cons(l_73, sym__3))
    {
      n_73 = ATgetArgument(l_73, 0);
      o_73 = ATgetArgument(l_73, 1);
      p_73 = ATgetArgument(l_73, 2);
      {
        ATerm a_44;
        a_44 = t;
        {
          ATerm t_73 = NULL;
          ATerm u_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(o_73));
          {
            ATerm b_44 = t;
            int c_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_44);
              }
            else
              {
                t = b_44;
                t = (ATerm) ATempty;
              }
            {
              u_73 = t;
              if(((t_73 != NULL) && (t_73 != u_73)))
                _fail(u_73);
              else
                t_73 = u_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_73), not_null(o_73), (ATerm) ATinsert(CheckATermList(not_null(t_73)), not_null(p_73)));
            t = table_put_0(t);
          }
        }
        t = a_44;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_106 (ATerm))
{
  ATerm y_73 = NULL;
  ATerm z_73 = NULL;
  t = term_j_28;
  {
    t = r_106(t);
    {
      z_73 = t;
      if(((y_73 != NULL) && (y_73 != z_73)))
        _fail(z_73);
      else
        y_73 = z_73;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_41, term_w_41, not_null(y_73));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  e_74 :
  if(match_string(f_74, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(f_74) == AT_LIST) && !(ATisEmpty(f_74))))
        {
          g_74 = ATgetFirst((ATermList) f_74);
          h_74 = (ATerm) ATgetNext((ATermList) f_74);
          {
            ATerm k_74 = NULL;
            ATerm d_44;
            d_44 = t;
            {
              t = not_null(g_74);
              t = a_0(t);
            }
            t = d_44;
            {
              ATerm l_74 = NULL;
              t = term_j_28;
              {
                t = b_0(t);
                {
                  l_74 = t;
                  if(((k_74 != NULL) && (k_74 != l_74)))
                    _fail(l_74);
                  else
                    k_74 = l_74;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_74)), not_null(k_74));
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
  ATerm d_9 (ATerm t)
  {
    ATerm q_74 = NULL;
    q_74 = t;
    p_74 :
    if(!(match_string(q_74, "--help")))
      {
        if(!(match_string(q_74, "-h")))
          {
            if(!(match_string(q_74, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    t = term_l_44;
    {
      t = set_config_0(t);
      t = term_n_44;
    }
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    t = term_o_44;
    return(t);
  }
  t = Option_3(t, d_9, e_9, f_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL;
  t_74 = t;
  s_74 :
  if(((ATgetType(t_74) == AT_LIST) && !(ATisEmpty(t_74))))
    {
      u_74 = ATgetFirst((ATermList) t_74);
      v_74 = (ATerm) ATgetNext((ATermList) t_74);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_74)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_67 (ATerm), ATerm h_67 (ATerm))
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
  f_75 = t;
  e_75 :
  if(((ATgetType(f_75) == AT_LIST) && !(ATisEmpty(f_75))))
    {
      g_75 = ATgetFirst((ATermList) f_75);
      h_75 = (ATerm) ATgetNext((ATermList) f_75);
      {
        ATerm l_75 = NULL,n_75 = NULL;
        ATerm m_75 = NULL;
        t = SSLgetAnnotations(not_null(f_75));
        {
          m_75 = t;
          if(((l_75 != NULL) && (l_75 != m_75)))
            _fail(m_75);
          else
            l_75 = m_75;
        }
        {
          t = not_null(g_75);
          {
            ATerm p_75 = NULL;
            t = g_67(t);
            {
              n_75 = t;
              {
                t = not_null(h_75);
                {
                  ATerm r_75 = NULL;
                  t = h_67(t);
                  {
                    p_75 = t;
                    {
                      ATerm s_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_75)), not_null(n_75)), not_null(l_75));
                      {
                        s_75 = t;
                        if(((r_75 != NULL) && (r_75 != s_75)))
                          _fail(s_75);
                        else
                          r_75 = s_75;
                      }
                      t = not_null(r_75);
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
ATerm Nil_0 (ATerm t)
{
  ATerm c_76 = NULL;
  c_76 = t;
  b_76 :
  if(((ATgetType(c_76) == AT_LIST) && ATisEmpty(c_76)))
    {
      {
        ATerm e_76 = NULL,g_76 = NULL;
        ATerm q_44;
        q_44 = t;
        {
          ATerm f_76 = NULL;
          t = SSLgetAnnotations(not_null(c_76));
          {
            f_76 = t;
            if(((e_76 != NULL) && (e_76 != f_76)))
              _fail(f_76);
            else
              e_76 = f_76;
          }
        }
        t = q_44;
        {
          ATerm h_76 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_76));
          {
            h_76 = t;
            if(((g_76 != NULL) && (g_76 != h_76)))
              _fail(h_76);
            else
              g_76 = h_76;
          }
          t = not_null(g_76);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
  n_76 = t;
  m_76 :
  if(match_cons(n_76, sym__2))
    {
      o_76 = ATgetArgument(n_76, 0);
      p_76 = ATgetArgument(n_76, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_12, not_null(o_76), not_null(p_76));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_106 (ATerm))
{
  ATerm r_44;
  r_44 = t;
  {
    ATerm j_9 (ATerm t)
    {
      t = term_s_44;
      t = p_106(t);
      return(t);
    }
    t = try_1(t, j_9);
  }
  t = r_44;
  {
    ATerm k_9 (ATerm t)
    {
      ATerm x_76 = NULL;
      ATerm t_44;
      t_44 = t;
      {
        ATerm v_76 = NULL;
        ATerm w_76 = NULL;
        w_76 = t;
        if(((v_76 != NULL) && (v_76 != w_76)))
          _fail(w_76);
        else
          v_76 = w_76;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_39, not_null(v_76));
          t = set_config_0(t);
        }
      }
      t = t_44;
      {
        ATerm y_76 = NULL;
        y_76 = t;
        if(((x_76 != NULL) && (x_76 != y_76)))
          _fail(y_76);
        else
          x_76 = y_76;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_76));
      }
      return(t);
    }
    ATerm o_9 (ATerm t)
    {
      ATerm u_44 = t;
      int v_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_44 = t;
          int x_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(x_44);
            }
          else
            {
              t = w_44;
              {
                t = p_106(t);
                t = Cons_2(t, _id, o_9);
              }
            }
          ;
          LocalPopChoice(v_44);
        }
      else
        {
          t = u_44;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_9, o_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  ATerm y_44;
  y_44 = t;
  {
    ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL;
    h_77 = t;
    d_77 :
    if(match_cons(h_77, sym__3))
      {
        i_77 = ATgetArgument(h_77, 0);
        j_77 = ATgetArgument(h_77, 1);
        k_77 = ATgetArgument(h_77, 2);
        {
          if(((e_77 != NULL) && (e_77 != i_77)))
            _fail(i_77);
          else
            e_77 = i_77;
          {
            if(((f_77 != NULL) && (f_77 != j_77)))
              _fail(j_77);
            else
              f_77 = j_77;
            {
              if(((g_77 != NULL) && (g_77 != k_77)))
                _fail(k_77);
              else
                g_77 = k_77;
              t = SSL_table_put(not_null(e_77), not_null(f_77), not_null(g_77));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_44;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_106 (ATerm))
{
  ATerm n_77 = NULL;
  ATerm z_44;
  z_44 = t;
  {
    t = term_a_45;
    t = table_put_0(t);
  }
  t = z_44;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm b_45 = t;
      int c_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_106(t);
          ;
          LocalPopChoice(c_45);
        }
      else
        {
          t = b_45;
          {
            ATerm h_45 = t;
            int i_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(i_45);
              }
            else
              {
                t = h_45;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, r_9);
    {
      ATerm s_9 (ATerm t)
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_45;
            r_45 = t;
            {
              ATerm s_45 = t;
              int t_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_40;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_45);
                }
              else
                {
                  t = s_45;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_45;
            {
              t = system_usage_0(t);
              {
                t = term_u_36;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            {
              ATerm u_45 = t;
              int b_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_46;
                  c_46 = t;
                  {
                    t = term_g_43;
                    t = get_config_0(t);
                  }
                  t = c_46;
                  {
                    t = system_about_0(t);
                    {
                      t = term_u_36;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(b_46);
                }
              else
                {
                  t = u_45;
                  {
                    ATerm t_9 (ATerm t)
                    {
                      ATerm u_9 (ATerm t)
                      {
                        ATerm o_77 = NULL;
                        o_77 = t;
                        if(((n_77 != NULL) && (n_77 != o_77)))
                          _fail(o_77);
                        else
                          n_77 = o_77;
                        return(t);
                      }
                      t = Undefined_1(t, u_9);
                      return(t);
                    }
                    t = option_defined_1(t, t_9);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_77)), term_h_46));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_e_13;
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
      t = try_1(t, s_9);
      {
        ATerm i_46;
        i_46 = t;
        {
          t = term_v_41;
          t = table_destroy_0(t);
        }
        t = i_46;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm))
{
  t = parse_options_1(t, a_104);
  {
    t = store_options_0(t);
    {
      t = c_104(t);
      {
        ATerm j_46 = t;
        int k_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_104);
            ;
            LocalPopChoice(k_46);
          }
        else
          {
            t = j_46;
            {
              ATerm l_46 = t;
              int m_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_104(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_46);
                }
              else
                {
                  t = l_46;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm e_104 (ATerm), ATerm f_104 (ATerm))
{
  t = option_wrap_4(t, e_104, default_usage_0, _id, f_104);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm v_109 (ATerm), ATerm w_109 (ATerm))
{
  ATerm v_9 (ATerm t)
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_109(t);
        ;
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    t = xtc_io_1(t, w_109);
    return(t);
  }
  t = option_wrap_2(t, v_9, x_9);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm b_110 (ATerm), ATerm c_110 (ATerm))
{
  t = xtc_io_wrap_2(t, b_110, c_110);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL;
  ATerm a_10 (ATerm t)
  {
    ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
    t = pack_stratego_modules_0(t);
    {
      u_77 = t;
      r_77 :
      if(match_cons(u_77, sym__2))
        {
          v_77 = ATgetArgument(u_77, 0);
          w_77 = ATgetArgument(u_77, 1);
          {
            if(((s_77 != NULL) && (s_77 != v_77)))
              _fail(v_77);
            else
              s_77 = v_77;
            {
              if(((t_77 != NULL) && (t_77 != w_77)))
                _fail(w_77);
              else
                t_77 = w_77;
              {
                ATerm p_46 = t;
                int q_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_33;
                    {
                      t = get_config_0(t);
                      {
                        t = not_null(s_77);
                        {
                          ATerm d_10 (ATerm t)
                          {
                            t = get_filename_0(t);
                            t = basename_0(t);
                            return(t);
                          }
                          t = map_1(t, d_10);
                          t = write_to_text_0(t);
                        }
                      }
                    }
                    ;
                    LocalPopChoice(q_46);
                  }
                else
                  {
                    t = p_46;
                    {
                      t = not_null(s_77);
                      {
                        t = create_dep_file_0(t);
                        {
                          t = not_null(t_77);
                          t = write_to_0(t);
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
    }
    return(t);
  }
  t = xtc_iowrap_2(t, pack_stratego_options_0, a_10);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
