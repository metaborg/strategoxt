#include <srts/stratego.h>
#include <srts/stratego-lib.h>
static Symbol sym_Keys_0;
static Symbol sym_Keys_1;
static Symbol sym_Keys_2;
static Symbol sym_Keys_3;
static Symbol sym_Keys_4;
static Symbol sym_Keys_5;
static Symbol sym_Keys_6;
static Symbol sym_Keys_7;
static Symbol sym_Keys_8;
static Symbol sym_Keys_9;
static Symbol sym_Keys_10;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Dummy_0;
static Symbol sym_Scopes_0;
static Symbol sym_RuleScope_2;
static Symbol sym_ChangeSet_3;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Conc_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_Pipe_2;
static Symbol sym_F__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_W__OK_0;
static Symbol sym_X__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Anno_2;
static Symbol sym_Infinite_0;
static Symbol sym_Hashtable_1;
static Symbol sym_NestedTable_1;
static Symbol sym_Tables_0;
static Symbol sym_NewTable_0;
static Symbol sym_IndexedSet_1;
static Symbol sym_EpochTime_1;
static Symbol sym_ComponentTime_3;
static Symbol sym_DayTime_3;
static Symbol sym_Date_3;
static Symbol sym_Dupl_2;
static Symbol sym_January_0;
static Symbol sym_February_0;
static Symbol sym_March_0;
static Symbol sym_April_0;
static Symbol sym_May_0;
static Symbol sym_June_0;
static Symbol sym_July_0;
static Symbol sym_August_0;
static Symbol sym_September_0;
static Symbol sym_October_0;
static Symbol sym_November_0;
static Symbol sym_December_0;
static Symbol sym_Sunday_0;
static Symbol sym_Monday_0;
static Symbol sym_Tuesday_0;
static Symbol sym_Wednesday_0;
static Symbol sym_Thursday_0;
static Symbol sym_Friday_0;
static Symbol sym_Saturday_0;
static Symbol sym_ErrorNumber_1;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Prefix_2;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Silent_0;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Runtime_1;
static Symbol sym_DeclVersion_1;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Emergency_0;
static Symbol sym_Alert_0;
static Symbol sym_Critical_0;
static Symbol sym_Error_0;
static Symbol sym_Warning_0;
static Symbol sym_Notice_0;
static Symbol sym_Info_0;
static Symbol sym_Debug_0;
static Symbol sym_Vomit_0;
static Symbol sym_Repository_1;
static Symbol sym_Registration_2;
static Symbol sym_Reference_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Conc_2;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_Definition_2;
static Symbol sym_String_1;
static Symbol sym_Post_0;
static Symbol sym_Pre_0;
static Symbol sym_XtcContract_3;
static Symbol sym_Arguments_1;
static Symbol sym_FILE_1;
static Symbol sym_URL_1;
static Symbol sym_ArgOption_2;
static Symbol sym_Option_1;
static Symbol sym_File_1;
static Symbol sym_Std_1;
static Symbol sym_Error_1;
static Symbol sym_Output_1;
static Symbol sym_Input_1;
static Symbol sym_Streams_3;
static Symbol sym_HTTP_1;
static Symbol sym_XTService_0;
static Symbol sym_Exec_1;
static Symbol sym_XT_0;
static Symbol sym_XtcDesc_1;
static Symbol sym_XtcContracts_1;
static Symbol sym_XtcModel_2;
static Symbol sym_XtcInherit_2;
static Symbol sym_XtcMeta_2;
static Symbol sym_XtcQuery_1;
static Symbol sym_XtcQuery_2;
static Symbol sym_XtcQuery_1;
static Symbol sym_Type_1;
static Symbol sym_ArgOption_0;
static Symbol sym_Option_0;
static Symbol sym_Off_0;
static Symbol sym_On_0;
static Symbol sym_Values_1;
static Symbol sym_Default_1;
static Symbol sym_TVarStar_4;
static Symbol sym_TVarPlus_4;
static Symbol sym_TVarOne_4;
static Symbol sym_TVarOpt_4;
static Symbol sym_Arguments_0;
static Symbol sym_Error_0;
static Symbol sym_Output_0;
static Symbol sym_Input_0;
static Symbol sym_TVarSpec_1;
static Symbol sym_TOr_2;
static Symbol sym_Layout_1;
static Symbol sym_Regular_0;
static Symbol sym_Implicit_0;
static Symbol sym_Explicit_0;
static Symbol sym_Template_2;
static Symbol sym_XtcReg_0;
static Symbol sym_XtcRef_0;
static Symbol sym_XtcCache_0;
static Symbol sym_XtcImported_0;
static Symbol sym_XtcLoaded_0;
static Symbol sym_XtcExport_0;
static Symbol sym_XtcConf_4;
static Symbol sym_Tool_1;
static Symbol sym_Import_0;
static Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
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
  sym_RuleScope_2 = ATmakeSymbol("RuleScope", 2, ATfalse);
  ATprotectSymbol(sym_RuleScope_2);
  sym_ChangeSet_3 = ATmakeSymbol("ChangeSet", 3, ATfalse);
  ATprotectSymbol(sym_ChangeSet_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_NestedTable_1 = ATmakeSymbol("NestedTable", 1, ATfalse);
  ATprotectSymbol(sym_NestedTable_1);
  sym_Tables_0 = ATmakeSymbol("Tables", 0, ATfalse);
  ATprotectSymbol(sym_Tables_0);
  sym_NewTable_0 = ATmakeSymbol("NewTable", 0, ATfalse);
  ATprotectSymbol(sym_NewTable_0);
  sym_IndexedSet_1 = ATmakeSymbol("IndexedSet", 1, ATfalse);
  ATprotectSymbol(sym_IndexedSet_1);
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
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Emergency_0 = ATmakeSymbol("Emergency", 0, ATfalse);
  ATprotectSymbol(sym_Emergency_0);
  sym_Alert_0 = ATmakeSymbol("Alert", 0, ATfalse);
  ATprotectSymbol(sym_Alert_0);
  sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
  ATprotectSymbol(sym_Critical_0);
  sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
  ATprotectSymbol(sym_Error_0);
  sym_Warning_0 = ATmakeSymbol("Warning", 0, ATfalse);
  ATprotectSymbol(sym_Warning_0);
  sym_Notice_0 = ATmakeSymbol("Notice", 0, ATfalse);
  ATprotectSymbol(sym_Notice_0);
  sym_Info_0 = ATmakeSymbol("Info", 0, ATfalse);
  ATprotectSymbol(sym_Info_0);
  sym_Debug_0 = ATmakeSymbol("Debug", 0, ATfalse);
  ATprotectSymbol(sym_Debug_0);
  sym_Vomit_0 = ATmakeSymbol("Vomit", 0, ATfalse);
  ATprotectSymbol(sym_Vomit_0);
  sym_Repository_1 = ATmakeSymbol("Repository", 1, ATfalse);
  ATprotectSymbol(sym_Repository_1);
  sym_Registration_2 = ATmakeSymbol("Registration", 2, ATfalse);
  ATprotectSymbol(sym_Registration_2);
  sym_Reference_1 = ATmakeSymbol("Reference", 1, ATfalse);
  ATprotectSymbol(sym_Reference_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Definition_2 = ATmakeSymbol("Definition", 2, ATfalse);
  ATprotectSymbol(sym_Definition_2);
  sym_String_1 = ATmakeSymbol("String", 1, ATfalse);
  ATprotectSymbol(sym_String_1);
  sym_Post_0 = ATmakeSymbol("Post", 0, ATfalse);
  ATprotectSymbol(sym_Post_0);
  sym_Pre_0 = ATmakeSymbol("Pre", 0, ATfalse);
  ATprotectSymbol(sym_Pre_0);
  sym_XtcContract_3 = ATmakeSymbol("XtcContract", 3, ATfalse);
  ATprotectSymbol(sym_XtcContract_3);
  sym_Arguments_1 = ATmakeSymbol("Arguments", 1, ATfalse);
  ATprotectSymbol(sym_Arguments_1);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_URL_1 = ATmakeSymbol("URL", 1, ATfalse);
  ATprotectSymbol(sym_URL_1);
  sym_ArgOption_2 = ATmakeSymbol("ArgOption", 2, ATfalse);
  ATprotectSymbol(sym_ArgOption_2);
  sym_Option_1 = ATmakeSymbol("Option", 1, ATfalse);
  ATprotectSymbol(sym_Option_1);
  sym_File_1 = ATmakeSymbol("File", 1, ATfalse);
  ATprotectSymbol(sym_File_1);
  sym_Std_1 = ATmakeSymbol("Std", 1, ATfalse);
  ATprotectSymbol(sym_Std_1);
  sym_Error_1 = ATmakeSymbol("Error", 1, ATfalse);
  ATprotectSymbol(sym_Error_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Streams_3 = ATmakeSymbol("Streams", 3, ATfalse);
  ATprotectSymbol(sym_Streams_3);
  sym_HTTP_1 = ATmakeSymbol("HTTP", 1, ATfalse);
  ATprotectSymbol(sym_HTTP_1);
  sym_XTService_0 = ATmakeSymbol("XTService", 0, ATfalse);
  ATprotectSymbol(sym_XTService_0);
  sym_Exec_1 = ATmakeSymbol("Exec", 1, ATfalse);
  ATprotectSymbol(sym_Exec_1);
  sym_XT_0 = ATmakeSymbol("XT", 0, ATfalse);
  ATprotectSymbol(sym_XT_0);
  sym_XtcDesc_1 = ATmakeSymbol("XtcDesc", 1, ATfalse);
  ATprotectSymbol(sym_XtcDesc_1);
  sym_XtcContracts_1 = ATmakeSymbol("XtcContracts", 1, ATfalse);
  ATprotectSymbol(sym_XtcContracts_1);
  sym_XtcModel_2 = ATmakeSymbol("XtcModel", 2, ATfalse);
  ATprotectSymbol(sym_XtcModel_2);
  sym_XtcInherit_2 = ATmakeSymbol("XtcInherit", 2, ATfalse);
  ATprotectSymbol(sym_XtcInherit_2);
  sym_XtcMeta_2 = ATmakeSymbol("XtcMeta", 2, ATfalse);
  ATprotectSymbol(sym_XtcMeta_2);
  sym_XtcQuery_1 = ATmakeSymbol("XtcQuery", 1, ATfalse);
  ATprotectSymbol(sym_XtcQuery_1);
  sym_XtcQuery_2 = ATmakeSymbol("XtcQuery", 2, ATfalse);
  ATprotectSymbol(sym_XtcQuery_2);
  sym_XtcQuery_1 = ATmakeSymbol("XtcQuery", 1, ATfalse);
  ATprotectSymbol(sym_XtcQuery_1);
  sym_Type_1 = ATmakeSymbol("Type", 1, ATfalse);
  ATprotectSymbol(sym_Type_1);
  sym_ArgOption_0 = ATmakeSymbol("ArgOption", 0, ATfalse);
  ATprotectSymbol(sym_ArgOption_0);
  sym_Option_0 = ATmakeSymbol("Option", 0, ATfalse);
  ATprotectSymbol(sym_Option_0);
  sym_Off_0 = ATmakeSymbol("Off", 0, ATfalse);
  ATprotectSymbol(sym_Off_0);
  sym_On_0 = ATmakeSymbol("On", 0, ATfalse);
  ATprotectSymbol(sym_On_0);
  sym_Values_1 = ATmakeSymbol("Values", 1, ATfalse);
  ATprotectSymbol(sym_Values_1);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_TVarStar_4 = ATmakeSymbol("TVarStar", 4, ATfalse);
  ATprotectSymbol(sym_TVarStar_4);
  sym_TVarPlus_4 = ATmakeSymbol("TVarPlus", 4, ATfalse);
  ATprotectSymbol(sym_TVarPlus_4);
  sym_TVarOne_4 = ATmakeSymbol("TVarOne", 4, ATfalse);
  ATprotectSymbol(sym_TVarOne_4);
  sym_TVarOpt_4 = ATmakeSymbol("TVarOpt", 4, ATfalse);
  ATprotectSymbol(sym_TVarOpt_4);
  sym_Arguments_0 = ATmakeSymbol("Arguments", 0, ATfalse);
  ATprotectSymbol(sym_Arguments_0);
  sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
  ATprotectSymbol(sym_Error_0);
  sym_Output_0 = ATmakeSymbol("Output", 0, ATfalse);
  ATprotectSymbol(sym_Output_0);
  sym_Input_0 = ATmakeSymbol("Input", 0, ATfalse);
  ATprotectSymbol(sym_Input_0);
  sym_TVarSpec_1 = ATmakeSymbol("TVarSpec", 1, ATfalse);
  ATprotectSymbol(sym_TVarSpec_1);
  sym_TOr_2 = ATmakeSymbol("TOr", 2, ATfalse);
  ATprotectSymbol(sym_TOr_2);
  sym_Layout_1 = ATmakeSymbol("Layout", 1, ATfalse);
  ATprotectSymbol(sym_Layout_1);
  sym_Regular_0 = ATmakeSymbol("Regular", 0, ATfalse);
  ATprotectSymbol(sym_Regular_0);
  sym_Implicit_0 = ATmakeSymbol("Implicit", 0, ATfalse);
  ATprotectSymbol(sym_Implicit_0);
  sym_Explicit_0 = ATmakeSymbol("Explicit", 0, ATfalse);
  ATprotectSymbol(sym_Explicit_0);
  sym_Template_2 = ATmakeSymbol("Template", 2, ATfalse);
  ATprotectSymbol(sym_Template_2);
  sym_XtcReg_0 = ATmakeSymbol("XtcReg", 0, ATfalse);
  ATprotectSymbol(sym_XtcReg_0);
  sym_XtcRef_0 = ATmakeSymbol("XtcRef", 0, ATfalse);
  ATprotectSymbol(sym_XtcRef_0);
  sym_XtcCache_0 = ATmakeSymbol("XtcCache", 0, ATfalse);
  ATprotectSymbol(sym_XtcCache_0);
  sym_XtcImported_0 = ATmakeSymbol("XtcImported", 0, ATfalse);
  ATprotectSymbol(sym_XtcImported_0);
  sym_XtcLoaded_0 = ATmakeSymbol("XtcLoaded", 0, ATfalse);
  ATprotectSymbol(sym_XtcLoaded_0);
  sym_XtcExport_0 = ATmakeSymbol("XtcExport", 0, ATfalse);
  ATprotectSymbol(sym_XtcExport_0);
  sym_XtcConf_4 = ATmakeSymbol("XtcConf", 4, ATfalse);
  ATprotectSymbol(sym_XtcConf_4);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
static ATerm term_b_96;
static ATerm term_u_95;
static ATerm term_s_95;
static ATerm term_k_95;
static ATerm term_i_95;
static ATerm term_h_95;
static ATerm term_g_95;
static ATerm term_f_95;
static ATerm term_y_93;
static ATerm term_v_93;
static ATerm term_p_93;
static ATerm term_l_93;
static ATerm term_n_92;
static ATerm term_m_92;
static ATerm term_l_92;
static ATerm term_k_92;
static ATerm term_c_92;
static ATerm term_p_91;
static ATerm term_l_91;
static ATerm term_i_91;
static ATerm term_e_91;
static ATerm term_d_91;
static ATerm term_x_89;
static ATerm term_c_76;
static ATerm term_q_75;
static ATerm term_e_74;
static ATerm term_b_74;
static ATerm term_h_73;
static ATerm term_a_72;
static ATerm term_q_71;
static ATerm term_p_71;
static ATerm term_j_71;
static ATerm term_y_69;
static ATerm term_n_69;
static ATerm term_x_68;
static ATerm term_h_68;
static ATerm term_g_68;
static ATerm term_f_68;
static ATerm term_x_67;
static ATerm term_u_67;
static ATerm term_t_67;
static ATerm term_s_67;
static ATerm term_r_67;
static ATerm term_q_67;
static ATerm term_m_67;
static ATerm term_l_67;
static ATerm term_k_67;
static ATerm term_h_67;
static ATerm term_g_67;
static ATerm term_f_67;
static ATerm term_a_67;
static ATerm term_z_66;
static ATerm term_x_66;
static ATerm term_u_66;
static ATerm term_t_66;
static ATerm term_s_66;
static ATerm term_n_66;
static ATerm term_m_66;
static ATerm term_l_66;
static ATerm term_i_66;
static ATerm term_h_66;
static ATerm term_g_66;
static ATerm term_f_66;
static ATerm term_a_66;
static ATerm term_s_65;
static ATerm term_r_65;
static ATerm term_q_65;
static ATerm term_p_65;
static ATerm term_o_65;
static ATerm term_n_65;
static ATerm term_m_65;
static ATerm term_l_65;
static ATerm term_k_65;
static ATerm term_j_65;
static ATerm term_i_65;
static ATerm term_h_65;
static ATerm term_g_65;
static ATerm term_f_65;
static ATerm term_y_63;
static ATerm term_x_63;
static ATerm term_k_63;
static ATerm term_u_62;
static ATerm term_x_61;
static ATerm term_v_61;
static ATerm term_r_61;
static ATerm term_p_61;
static ATerm term_j_61;
static ATerm term_y_59;
static ATerm term_i_59;
static ATerm term_e_59;
static ATerm term_b_59;
static ATerm term_a_59;
static ATerm term_y_58;
static ATerm term_w_58;
static ATerm term_u_58;
static ATerm term_s_58;
static ATerm term_q_58;
static ATerm term_g_58;
static ATerm term_z_57;
static ATerm term_n_57;
static ATerm term_f_57;
static ATerm term_d_57;
static ATerm term_a_57;
static ATerm term_y_56;
static ATerm term_b_54;
static ATerm term_a_54;
static ATerm term_w_53;
static ATerm term_n_52;
static ATerm term_y_51;
static ATerm term_f_51;
static ATerm term_u_50;
static ATerm term_x_48;
static ATerm term_v_48;
static ATerm term_t_48;
static ATerm term_q_48;
static ATerm term_p_48;
static ATerm term_b_48;
static ATerm term_z_47;
static ATerm term_y_47;
static ATerm term_w_47;
static ATerm term_u_47;
static ATerm term_r_47;
static ATerm term_p_47;
static ATerm term_m_47;
static ATerm term_u_46;
static ATerm term_s_46;
static ATerm term_q_46;
static ATerm term_n_46;
static ATerm term_l_46;
static ATerm term_j_46;
static ATerm term_v_44;
static ATerm term_m_44;
static ATerm term_i_44;
static ATerm term_a_44;
static ATerm term_m_41;
static ATerm term_k_41;
static ATerm term_f_41;
static ATerm term_e_41;
static ATerm term_d_41;
static ATerm term_c_41;
static ATerm term_m_40;
static ATerm term_x_39;
static ATerm term_t_39;
static ATerm term_p_39;
static ATerm term_m_39;
static ATerm term_j_39;
static ATerm term_h_39;
static ATerm term_g_39;
static ATerm term_e_39;
static ATerm term_d_39;
static ATerm term_y_38;
static ATerm term_o_38;
static ATerm term_n_38;
static ATerm term_e_33;
static ATerm term_h_30;
static ATerm term_g_30;
static ATerm term_b_24;
static ATerm term_a_24;
static ATerm term_t_23;
static ATerm term_s_23;
static ATerm term_r_23;
static ATerm term_d_23;
static ATerm term_b_23;
static ATerm term_y_22;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-transform", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_b_24);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--preload", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_e_33, (ATerm) ATempty);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_e_39, term_b_24);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload     Toggle XTC preloading (default: on)", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dependencies", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym__2, term_p_39, term_b_24);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dependencies   Check XTC dependencies and exit", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Broken XTC dependencies: ", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("All XTC registrations available", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_d_41, term_e_41);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym__2, term_a_44, term_i_44);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym__2, term_g_39, term_b_24);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_y_47, term_z_47);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_String_1, term_r_23);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Some_1, term_p_48);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_File_1, term_q_48);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Input_1, term_t_48);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Some_1, term_v_48);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_a_54);
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(sym_String_1, term_n_38);
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(sym_Some_1, term_q_58);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym_File_1, term_s_58);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym_Output_1, term_u_58);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_Some_1, term_w_58);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(sym_Streams_3, term_x_48, term_y_58, term_y_22);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym_Exec_1, term_a_59);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_b_59);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym_Type_1, term_f_65);
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(sym_Some_1, term_g_65);
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(sym_Default_1, term_i_65);
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym_Some_1, term_j_65);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_l_65);
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_n_65);
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_p_47);
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(sym_Some_1, term_r_65);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(sym_String_1, term_g_66);
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_66, term_h_66);
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(sym_String_1, term_l_66);
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_66, term_m_66);
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(sym_String_1, term_s_66);
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_66, term_t_66);
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(sym_String_1, term_x_66);
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_66, term_z_66);
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(sym_String_1, term_f_67);
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_66, term_g_67);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(sym_String_1, term_k_67);
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_66, term_l_67);
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_r_67));
  term_r_67 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_q_67);
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(sym_Template_2, term_s_67, term_y_22);
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_r_67, term_t_67);
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_x_89));
  term_x_89 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_91));
  term_e_91 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_91));
  term_l_91 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_p_91));
  term_p_91 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_c_92));
  term_c_92 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_k_92));
  term_k_92 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_m_92));
  term_m_92 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_n_92));
  term_n_92 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_l_93));
  term_l_93 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_v_93));
  term_v_93 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_y_93));
  term_y_93 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_f_95));
  term_f_95 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_95));
  term_g_95 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_95));
  term_h_95 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_95));
  term_i_95 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_k_95));
  term_k_95 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_s_95));
  term_s_95 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_u_95));
  term_u_95 = (ATerm) ATmakeAppl(sym_Critical_0);
  ATprotect(&(term_b_96));
  term_b_96 = (ATerm) ATmakeInt(-1);
}
#include <srts/init-stratego-module.h>
ATerm xtc_find_1_0 (ATerm y_32 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm o_2 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm n_2 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm xtc_find_loc_1_0 (ATerm t_32 (ATerm), ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm xtc_find_path_1_0 (ATerm s_32 (ATerm), ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm xtc_find_file_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm r_32 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm q_32 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm o_32 (ATerm), ATerm p_32 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_transform_file_1_0 (ATerm n_32 (ATerm), ATerm t);
ATerm xtc_transform_term_2_0 (ATerm l_32 (ATerm), ATerm m_32 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_1_0 (ATerm k_32 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm i_32 (ATerm), ATerm j_32 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
ATerm xtc_generate_1_0 (ATerm h_32 (ATerm), ATerm t);
ATerm xtc_transform_2_0 (ATerm f_32 (ATerm), ATerm g_32 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
ATerm xtc_transform_1_0 (ATerm e_32 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_command_1_0 (ATerm m_2 (ATerm), ATerm t);
ATerm xtc_input_1_0 (ATerm b_32 (ATerm), ATerm t);
ATerm xtc_output_1_0 (ATerm a_32 (ATerm), ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm z_31 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_io_wrap_2_1 (ATerm x_31 (ATerm), ATerm y_31 (ATerm), ATerm y_23, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_io_wrap_3_0 (ATerm u_31 (ATerm), ATerm v_31 (ATerm), ATerm w_31 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm r_31 (ATerm), ATerm t_31 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm xtc_io_wrap_1_1 (ATerm q_31 (ATerm), ATerm x_23, ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm p_31 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm xtc_iowrap_2_0 (ATerm n_31 (ATerm), ATerm o_31 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm xtc_iowrap_1_0 (ATerm m_31 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm xtc_wrap_2_1 (ATerm k_31 (ATerm), ATerm l_31 (ATerm), ATerm w_23, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm xtc_wrap_2_0 (ATerm i_31 (ATerm), ATerm j_31 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm xtc_wrap_1_1 (ATerm h_31 (ATerm), ATerm v_23, ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm xtc_wrap_1_0 (ATerm g_31 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_pass_verbose_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm xtc_pass_options_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm xtc_dependency_options_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm xtc_preload_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm is_url_http_0_0 (ATerm t);
ATerm copy_to_1_0 (ATerm l_2 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm k_2 (ATerm), ATerm t);
ATerm write_to_text_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm File_as_fd_1_0 (ATerm x_30 (ATerm), ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm w_30 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
ATerm xtc_new_temp_file_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm v_30 (ATerm), ATerm t);
ATerm xtc_cc_1_0 (ATerm j_2 (ATerm), ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm s_30 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm r_30 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm xtc_missing_dependencies_0_0 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm xtc_check_dependencies_0_0 (ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm i_2, ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm h_2, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm g_2, ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm f_2, ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
static ATerm f_43 (ATerm w_19, ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
static ATerm g_43 (ATerm u_19, ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
static ATerm h_43 (ATerm r_19, ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
static ATerm i_43 (ATerm q_19, ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
static ATerm j_43 (ATerm p_19, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm k_43 (ATerm o_19, ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
static ATerm l_43 (ATerm n_19, ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
static ATerm m_43 (ATerm m_19, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
static ATerm n_43 (ATerm l_19, ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm i_19, ATerm t);
static ATerm p_43 (ATerm i_19, ATerm k_19, ATerm j_19, ATerm t);
static ATerm c_11 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm d_2, ATerm e_2, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
static ATerm r_43 (ATerm n_234, ATerm z_18, ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm s_18, ATerm t_18, ATerm t);
static ATerm s_43 (ATerm s_18, ATerm t_18, ATerm u_18, ATerm v_18, ATerm w_18, ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm q_30 (ATerm), ATerm p_18, ATerm r_18, ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm p_30 (ATerm), ATerm n_18, ATerm o_18, ATerm t);
static ATerm v_11 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm k_18, ATerm t);
static ATerm t_43 (ATerm k_18, ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm b_2, ATerm c_2, ATerm t);
static ATerm z_11 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm m_30 (ATerm), ATerm n_30 (ATerm), ATerm o_30 (ATerm), ATerm t);
static ATerm u_43 (ATerm m_30 (ATerm), ATerm n_30 (ATerm), ATerm o_30 (ATerm), ATerm w_14, ATerm x_14, ATerm z_14, ATerm v_14, ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm k_30 (ATerm), ATerm l_30 (ATerm), ATerm t);
static ATerm v_43 (ATerm k_30 (ATerm), ATerm l_30 (ATerm), ATerm k_14, ATerm n_14, ATerm m_14, ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
static ATerm w_43 (ATerm f_14, ATerm e_14, ATerm t);
ATerm option_isect_0_0 (ATerm t);
static ATerm x_43 (ATerm y_13, ATerm x_13, ATerm t);
static ATerm k_13 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm exec_http_0_1 (ATerm s_13, ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm y_43 (ATerm j_13, ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm z_12, ATerm a_13, ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm z_43 (ATerm z_12, ATerm a_13, ATerm b_13, ATerm c_13, ATerm d_13, ATerm e_13, ATerm t);
static ATerm j_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
static ATerm b_44 (ATerm m_11, ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm k_11, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm d_16 (ATerm t);
ATerm xtc_dashed_option_0_0 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm o_143 (ATerm g_142, ATerm t);
static ATerm p_143 (ATerm j_142, ATerm t);
static ATerm q_143 (ATerm m_142, ATerm n_142, ATerm o_142, ATerm t);
static ATerm r_143 (ATerm s_142, ATerm t_142, ATerm u_142, ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
static ATerm c_44 (ATerm t);
ATerm xtc_desugar_query_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
static ATerm d_44 (ATerm h_8, ATerm i_8, ATerm t);
static ATerm b_17 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm e_44 (ATerm e_8, ATerm f_8, ATerm t);
static ATerm k_17 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm f_44 (ATerm c_8, ATerm t);
ATerm xtc_search_0_0 (ATerm t);
ATerm xtc_search_1_0 (ATerm y_1 (ATerm), ATerm t);
ATerm xtc_query_all_2_1 (ATerm e_30 (ATerm), ATerm f_30 (ATerm), ATerm p_7, ATerm t);
ATerm xtc_query_one_2_1 (ATerm c_30 (ATerm), ATerm d_30 (ATerm), ATerm o_7, ATerm t);
ATerm xtc_query_all_2_0 (ATerm a_30 (ATerm), ATerm b_30 (ATerm), ATerm t);
ATerm xtc_query_one_2_0 (ATerm y_29 (ATerm), ATerm z_29 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm w_1, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm b_7, ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm a_7, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
ATerm xtc_fetch_loc_0_0 (ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm xtc_fetch_version_0_0 (ATerm t);
ATerm xtc_register_reference_0_1 (ATerm v_1, ATerm t);
ATerm xtc_register_reference_0_0 (ATerm t);
ATerm xtc_register_resource_0_1 (ATerm u_1, ATerm t);
ATerm xtc_register_resource_0_0 (ATerm t);
ATerm xtc_register_component_0_1 (ATerm l_1, ATerm t);
ATerm xtc_register_component_0_0 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm xtc_register_0_1 (ATerm c_0, ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm z_5, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm x_5, ATerm t);
static ATerm g_44 (ATerm x_5, ATerm y_5, ATerm p_67, ATerm t);
ATerm xtc_add_meta_0_1 (ATerm w_5, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm v_5, ATerm t);
ATerm xtc_create_tables_0_0 (ATerm t);
ATerm xtc_flush_0_0 (ATerm t);
ATerm xtc_reset_0_0 (ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_init_0_2 (ATerm t_5, ATerm u_5, ATerm t);
ATerm xtc_init_0_1 (ATerm s_5, ATerm t);
ATerm xtc_init_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm xtc_load_0_1 (ATerm q_5, ATerm t);
ATerm xtc_load_0_0 (ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_dump_0_1 (ATerm o_5, ATerm t);
ATerm xtc_dump_0_0 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm q_20 (ATerm t);
ATerm xtc_save_0_1 (ATerm n_5, ATerm t);
ATerm xtc_save_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm m_5, ATerm t);
ATerm xtc_save_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
static ATerm h_44 (ATerm k_5, ATerm j_5, ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
static ATerm j_44 (ATerm h_5, ATerm g_5, ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm k_44 (ATerm e_5, ATerm c_5, ATerm t);
ATerm xtc_import_all_0_0 (ATerm t);
ATerm xtc_import_all_local_0_0 (ATerm t);
static ATerm t_20 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm v_20 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm b_5, ATerm t);
ATerm xtc_aterm2table_0_0 (ATerm t);
static ATerm c_21 (ATerm t);
ATerm xtc_is_imported_0_0 (ATerm t);
ATerm xtc_ref2aterm_2_0 (ATerm w_29 (ATerm), ATerm x_29 (ATerm), ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_reg2aterm_1_0 (ATerm v_29 (ATerm), ATerm t);
ATerm xtc_table2aterm_2_0 (ATerm t_29 (ATerm), ATerm u_29 (ATerm), ATerm t);
ATerm if_log_severity_1_1 (ATerm x_27 (ATerm), ATerm a_5, ATerm t);
ATerm log_0_2 (ATerm y_4, ATerm z_4, ATerm t);
ATerm log_0_3 (ATerm v_4, ATerm w_4, ATerm x_4, ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm set_log_stream_0_0 (ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm log_if_verbose_1_1 (ATerm o_27 (ATerm), ATerm u_4, ATerm t);
ATerm severity_string_0_0 (ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm dbg_0_1 (ATerm t_4, ATerm t);
ATerm notice_0_1 (ATerm n_0, ATerm t);
ATerm warn_0_1 (ATerm k_0, ATerm t);
ATerm err_0_1 (ATerm i_0, ATerm t);
ATerm fatal_err_0_1 (ATerm e_0, ATerm t);
ATerm Keys_0_0 (ATerm t);
ATerm Keys_1_0 (ATerm f_76 (ATerm), ATerm t);
ATerm Keys_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm Keys_3_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm t);
ATerm Keys_4_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t);
ATerm Keys_5_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t);
ATerm Keys_6_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t);
ATerm Keys_7_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm t);
ATerm Keys_8_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t);
ATerm Keys_9_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t);
ATerm Keys_10_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t);
ATerm Defined_0_0 (ATerm t);
ATerm Defined_1_0 (ATerm i_78 (ATerm), ATerm t);
ATerm Defined_2_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm t);
ATerm Defined_3_0 (ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t);
ATerm Defined_4_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm t);
ATerm Defined_5_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t);
ATerm Defined_6_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t);
ATerm Defined_7_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t);
ATerm Defined_8_0 (ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm t);
ATerm Defined_9_0 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm t);
ATerm Defined_10_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t);
ATerm Undefined_0_0 (ATerm t);
ATerm Dummy_0_0 (ATerm t);
ATerm Scopes_0_0 (ATerm t);
ATerm RuleScope_2_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t);
ATerm ChangeSet_3_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm t);
ATerm Conc_2_0 (ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm t);
ATerm _0_0 (ATerm t);
ATerm _1_0 (ATerm u_80 (ATerm), ATerm t);
ATerm _2_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm t);
ATerm _3_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t);
ATerm _4_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t);
ATerm _5_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm t);
ATerm _6_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t);
ATerm _7_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t);
ATerm _8_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm t);
ATerm _9_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t);
ATerm _10_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t);
ATerm _11_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t);
ATerm _12_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t);
ATerm _13_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t);
ATerm _14_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t);
ATerm _15_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
ATerm _16_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t);
ATerm _17_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t);
ATerm _18_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm Some_1_0 (ATerm j_87 (ATerm), ATerm t);
ATerm Pipe_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t);
ATerm F__OK_0_0 (ATerm t);
ATerm R__OK_0_0 (ATerm t);
ATerm W__OK_0_0 (ATerm t);
ATerm X__OK_0_0 (ATerm t);
ATerm Stream_1_0 (ATerm m_87 (ATerm), ATerm t);
ATerm Path_1_0 (ATerm n_87 (ATerm), ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm stderr_0_0 (ATerm t);
ATerm Anno_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t);
ATerm Infinite_0_0 (ATerm t);
ATerm Hashtable_1_0 (ATerm q_87 (ATerm), ATerm t);
ATerm NestedTable_1_0 (ATerm r_87 (ATerm), ATerm t);
ATerm Tables_0_0 (ATerm t);
ATerm NewTable_0_0 (ATerm t);
ATerm IndexedSet_1_0 (ATerm s_87 (ATerm), ATerm t);
ATerm EpochTime_1_0 (ATerm t_87 (ATerm), ATerm t);
ATerm ComponentTime_3_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t);
ATerm DayTime_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t);
ATerm Date_3_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t);
ATerm Dupl_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
ATerm January_0_0 (ATerm t);
ATerm February_0_0 (ATerm t);
ATerm March_0_0 (ATerm t);
ATerm April_0_0 (ATerm t);
ATerm May_0_0 (ATerm t);
ATerm June_0_0 (ATerm t);
ATerm July_0_0 (ATerm t);
ATerm August_0_0 (ATerm t);
ATerm September_0_0 (ATerm t);
ATerm October_0_0 (ATerm t);
ATerm November_0_0 (ATerm t);
ATerm December_0_0 (ATerm t);
ATerm Sunday_0_0 (ATerm t);
ATerm Monday_0_0 (ATerm t);
ATerm Tuesday_0_0 (ATerm t);
ATerm Wednesday_0_0 (ATerm t);
ATerm Thursday_0_0 (ATerm t);
ATerm Friday_0_0 (ATerm t);
ATerm Saturday_0_0 (ATerm t);
ATerm ErrorNumber_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm g_88 (ATerm), ATerm t);
ATerm Prefix_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t);
ATerm WaitStatus_3_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t);
ATerm Signal_3_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm UnknownSignal_1_0 (ATerm p_88 (ATerm), ATerm t);
ATerm Silent_0_0 (ATerm t);
ATerm Verbose_1_0 (ATerm q_88 (ATerm), ATerm t);
ATerm Version_0_0 (ATerm t);
ATerm Input_1_0 (ATerm r_88 (ATerm), ATerm t);
ATerm Output_1_0 (ATerm s_88 (ATerm), ATerm t);
ATerm Binary_0_0 (ATerm t);
ATerm Statistics_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm Runtime_1_0 (ATerm t_88 (ATerm), ATerm t);
ATerm DeclVersion_1_0 (ATerm u_88 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm v_88 (ATerm), ATerm t);
ATerm Undefined_1_0 (ATerm w_88 (ATerm), ATerm t);
ATerm Anno__Cong_____2_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t);
ATerm Pair_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm t);
ATerm Read_0_0 (ATerm t);
ATerm Write_0_0 (ATerm t);
ATerm Execute_0_0 (ATerm t);
ATerm Existence_0_0 (ATerm t);
ATerm SIGPOLL_0_0 (ATerm t);
ATerm SIGPROF_0_0 (ATerm t);
ATerm SIGSYS_0_0 (ATerm t);
ATerm SIGTRAP_0_0 (ATerm t);
ATerm SIGVTALRM_0_0 (ATerm t);
ATerm SIGXCPU_0_0 (ATerm t);
ATerm SIGXFSZ_0_0 (ATerm t);
ATerm SIGBUS_0_0 (ATerm t);
ATerm SIGCHLD_0_0 (ATerm t);
ATerm SIGCONT_0_0 (ATerm t);
ATerm SIGFPE_0_0 (ATerm t);
ATerm SIGILL_0_0 (ATerm t);
ATerm SIGPIPE_0_0 (ATerm t);
ATerm SIGSEGV_0_0 (ATerm t);
ATerm SIGSTOP_0_0 (ATerm t);
ATerm SIGTSTP_0_0 (ATerm t);
ATerm SIGTTIN_0_0 (ATerm t);
ATerm SIGTTOU_0_0 (ATerm t);
ATerm SIGURG_0_0 (ATerm t);
ATerm SIGUSR1_0_0 (ATerm t);
ATerm SIGUSR2_0_0 (ATerm t);
ATerm SIGHUP_0_0 (ATerm t);
ATerm SIGINT_0_0 (ATerm t);
ATerm SIGQUIT_0_0 (ATerm t);
ATerm SIGABRT_0_0 (ATerm t);
ATerm SIGKILL_0_0 (ATerm t);
ATerm SIGALRM_0_0 (ATerm t);
ATerm SIGTERM_0_0 (ATerm t);
ATerm AllSignals_0_0 (ATerm t);
ATerm init_name_space_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm exit_name_space_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_89 (ATerm), ATerm t);
ATerm end_scope_1_0 (ATerm e_89 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm t);
ATerm assert_1_0 (ATerm h_89 (ATerm), ATerm t);
ATerm override_key_1_0 (ATerm i_89 (ATerm), ATerm t);
ATerm rewrite_1_0 (ATerm j_89 (ATerm), ATerm t);
ATerm extend_assert_1_0 (ATerm k_89 (ATerm), ATerm t);
ATerm extend_override_key_1_0 (ATerm l_89 (ATerm), ATerm t);
ATerm extend_assert_undefined_1_0 (ATerm m_89 (ATerm), ATerm t);
ATerm extend_override_key_undefined_1_0 (ATerm n_89 (ATerm), ATerm t);
ATerm extend_rewrite_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm dr_debug_rule_set_0_1 (ATerm q_14, ATerm t);
ATerm dr_debug_rule_set_0_2 (ATerm r_14, ATerm s_14, ATerm t);
ATerm dr_print_rule_set_0_1 (ATerm t_14, ATerm t);
ATerm dr_print_rule_sets_0_1 (ATerm u_14, ATerm t);
ATerm dr_print_rule_set_0_0 (ATerm t);
ATerm dr_print_scope_0_0 (ATerm t);
ATerm dr_eq_rule_sets_0_0 (ATerm t);
ATerm dr_fold_and_intersect_3_1 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm (ATerm), ATerm), ATerm i_15, ATerm t);
ATerm dr_fold_and_intersect_3_2 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm (ATerm), ATerm), ATerm k_15, ATerm l_15, ATerm t);
ATerm dr_map_and_intersect_1_1 (ATerm w_89 (ATerm), ATerm p_15, ATerm t);
ATerm dr_fix_and_intersect_1_1 (ATerm z_89 (ATerm), ATerm q_15, ATerm t);
ATerm dr_fix_and_union_1_1 (ATerm a_90 (ATerm), ATerm t_15, ATerm t);
ATerm dr_fix_and_intersect_union_1_2 (ATerm b_90 (ATerm), ATerm w_15, ATerm x_15, ATerm t);
ATerm dr_fork_and_intersect_2_1 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm c_16, ATerm t);
ATerm dr_fork_and_union_2_1 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm f_16, ATerm t);
ATerm dr_fork_and_intersect_union_2_2 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_16, ATerm j_16, ATerm t);
ATerm dr_fix_and_merge_2_1 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm o_16, ATerm t);
ATerm dr_fix_and_merge_3_2 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm s_16, ATerm t_16, ATerm t);
ATerm fork_rule_sets_0_0 (ATerm t);
ATerm merge_rule_sets_1_0 (ATerm n_90 (ATerm), ATerm t);
ATerm dr_fork_and_merge_3_1 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm c_17, ATerm t);
ATerm dr_fork_and_merge_4_2 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm g_17, ATerm h_17, ATerm t);
ATerm dr_merge_rule_sets_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t);
ATerm dr_merge_rule_sets1_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t);
ATerm dr_merge_rule_sets2_2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t);
ATerm dr_intersect_rule_sets_0_0 (ATerm t);
ATerm apply_rm_set_0_1 (ATerm q_18, ATerm t);
ATerm dr_intersect_rule_sets_symm_0_0 (ATerm t);
ATerm dr_union_rule_sets_0_0 (ATerm t);
ATerm dr_union_rule_sets_symm_0_0 (ATerm t);
ATerm dr_add_to_rule_set_0_2 (ATerm z_19, ATerm a_20, ATerm t);
ATerm dr_add_to_rule_set_0_3 (ATerm b_20, ATerm c_20, ATerm d_20, ATerm t);
ATerm dr_add_fail_0_4 (ATerm e_20, ATerm f_20, ATerm g_20, ATerm h_20, ATerm t);
ATerm dr_add_to_rule_set_1_3 (ATerm d_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm f_0, ATerm g_0, ATerm j_0, ATerm t);
ATerm dr_add_to_rule_set_vis_0_3 (ATerm g_21, ATerm h_21, ATerm i_21, ATerm t);
ATerm dr_add_to_rule_set_vis_2_3 (ATerm l_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm o_0 (ATerm, ATerm, ATerm, ATerm), ATerm q_0, ATerm r_0, ATerm t_0, ATerm t);
ATerm dr_set_in_rule_set_0_2 (ATerm h_22, ATerm i_22, ATerm t);
ATerm dr_set_in_rule_set_0_3 (ATerm j_22, ATerm k_22, ATerm l_22, ATerm t);
ATerm dr_set_fail_0_4 (ATerm m_22, ATerm n_22, ATerm o_22, ATerm p_22, ATerm t);
ATerm dr_set_in_rule_set_1_3 (ATerm u_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm v_0, ATerm w_0, ATerm x_0, ATerm t);
ATerm dr_set_in_rule_set_vis_0_2 (ATerm k_23, ATerm l_23, ATerm t);
ATerm dr_set_in_rule_set_vis_0_3 (ATerm m_23, ATerm n_23, ATerm o_23, ATerm t);
ATerm dr_rm_fail_0_3 (ATerm y_0, ATerm z_0, ATerm a_1, ATerm t);
ATerm dr_set_in_rule_set_vis_2_3 (ATerm b_1 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm c_1 (ATerm, ATerm, ATerm, ATerm), ATerm d_1, ATerm e_1, ATerm f_1, ATerm t);
ATerm dr_lookup_rule_0_1 (ATerm p_24, ATerm t);
ATerm dr_lookup_rule_1_1 (ATerm g_1 (ATerm), ATerm h_1, ATerm t);
ATerm dr_lookup_rule_pointer_0_1 (ATerm y_24, ATerm t);
ATerm dr_lookup_rule_pointer_1_1 (ATerm i_1 (ATerm), ATerm j_1, ATerm t);
ATerm dr_lookup_all_rules_0_1 (ATerm h_25, ATerm t);
ATerm dr_lookup_all_rules_1_1 (ATerm k_1 (ATerm), ATerm m_1, ATerm t);
ATerm dr_new_change_set_0_0 (ATerm t);
ATerm dr_start_change_set_0_0 (ATerm t);
ATerm dr_destroy_change_set_0_0 (ATerm t);
ATerm dr_commit_change_set_0_0 (ATerm t);
ATerm dr_discard_change_set_0_0 (ATerm t);
ATerm dr_commit_labels_0_1 (ATerm z_25, ATerm t);
ATerm dr_apply_change_0_1 (ATerm a_26, ATerm t);
ATerm dr_commit_to_rule_set_0_3 (ATerm f_26, ATerm g_26, ATerm h_26, ATerm t);
ATerm dr_commit_to_change_set_0_3 (ATerm i_26, ATerm j_26, ATerm k_26, ATerm t);
ATerm dr_commit_to_rule_scope_0_3 (ATerm m_26, ATerm n_26, ATerm o_26, ATerm t);
ATerm dr_apply_removal_0_0 (ATerm t);
ATerm dr_remove_from_rule_set_0_2 (ATerm u_26, ATerm v_26, ATerm t);
ATerm dr_remove_from_change_set_0_2 (ATerm w_26, ATerm x_26, ATerm t);
ATerm dr_remove_from_rule_scope_0_2 (ATerm z_26, ATerm a_27, ATerm t);
ATerm dr_new_scope_0_0 (ATerm t);
ATerm dr_new_rule_set_0_0 (ATerm t);
ATerm dr_add_scope_0_0 (ATerm t);
ATerm dr_destroy_scope_0_0 (ATerm t);
ATerm dr_leave_scope_0_0 (ATerm t);
ATerm dr_get_inner_scope_0_0 (ATerm t);
ATerm dr_label_scope_0_1 (ATerm g_27, ATerm t);
ATerm dr_get_scope_labels_0_0 (ATerm t);
ATerm dr_get_first_scope_label_1_0 (ATerm d_92 (ATerm), ATerm t);
ATerm dr_save_rule_set_0_0 (ATerm t);
ATerm dr_scope_1_1 (ATerm e_92 (ATerm), ATerm h_27, ATerm t);
ATerm dr_begin_scope_0_1 (ATerm i_27, ATerm t);
ATerm dr_end_scope_0_1 (ATerm j_27, ATerm t);
ATerm dr_scopes_1_1 (ATerm f_92 (ATerm), ATerm k_27, ATerm t);
ATerm dr_begin_scopes_0_1 (ATerm l_27, ATerm t);
ATerm dr_end_scopes_0_1 (ATerm n_27, ATerm t);
ATerm dr_start_change_set_0_1 (ATerm p_27, ATerm t);
ATerm dr_commit_change_set_0_1 (ATerm q_27, ATerm t);
ATerm dr_discard_change_set_0_1 (ATerm r_27, ATerm t);
ATerm dr_label_scope_0_2 (ATerm s_27, ATerm t_27, ATerm t);
ATerm dr_get_scope_labels_0_1 (ATerm u_27, ATerm t);
ATerm dr_get_first_scope_label_1_1 (ATerm g_92 (ATerm), ATerm v_27, ATerm t);
ATerm dr_ignore_state_1_1 (ATerm h_92 (ATerm), ATerm w_27, ATerm t);
ATerm dr_lookup_rule_0_2 (ATerm y_27, ATerm z_27, ATerm t);
ATerm dr_lookup_all_rules_0_2 (ATerm a_28, ATerm b_28, ATerm t);
ATerm dr_lookup_rule_pointer_0_2 (ATerm c_28, ATerm d_28, ATerm t);
ATerm dr_set_rule_0_3 (ATerm e_28, ATerm f_28, ATerm g_28, ATerm t);
ATerm dr_set_rule_0_4 (ATerm h_28, ATerm i_28, ATerm j_28, ATerm k_28, ATerm t);
ATerm dr_set_rule_vis_0_4 (ATerm l_28, ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
ATerm dr_set_rules_vis_0_4 (ATerm p_28, ATerm q_28, ATerm r_28, ATerm s_28, ATerm t);
ATerm dr_undefine_rule_0_2 (ATerm t_28, ATerm u_28, ATerm t);
ATerm dr_undefine_rule_0_3 (ATerm v_28, ATerm w_28, ATerm x_28, ATerm t);
ATerm dr_undefine_rule_vis_0_3 (ATerm y_28, ATerm z_28, ATerm a_29, ATerm t);
ATerm dr_add_rule_0_3 (ATerm b_29, ATerm c_29, ATerm d_29, ATerm t);
ATerm dr_add_rule_0_4 (ATerm e_29, ATerm f_29, ATerm g_29, ATerm h_29, ATerm t);
ATerm dr_add_rule_vis_0_4 (ATerm i_29, ATerm j_29, ATerm k_29, ATerm l_29, ATerm t);
ATerm dr_intersect_with_0_1 (ATerm m_29, ATerm t);
ATerm dr_intersect_symm_0_1 (ATerm n_29, ATerm t);
ATerm dr_union_with_0_1 (ATerm o_29, ATerm t);
ATerm dr_union_symm_0_1 (ATerm p_29, ATerm t);
ATerm dr_get_rule_set_0_1 (ATerm q_29, ATerm t);
ATerm dr_set_rule_set_0_1 (ATerm r_29, ATerm t);
ATerm dr_switch_rule_set_0_1 (ATerm s_29, ATerm t);
ATerm try_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm maybe_1_0 (ATerm j_92 (ATerm), ATerm t);
ATerm maybe_2_0 (ATerm n_1 (ATerm), ATerm o_1 (ATerm), ATerm t);
ATerm if_2_0 (ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t);
ATerm if_3_0 (ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t);
ATerm ior_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t);
ATerm or_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t);
ATerm and_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm FAIL_0_0 (ATerm t);
ATerm restore_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t);
ATerm finally_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm i_93 (ATerm), ATerm t);
ATerm repeat1_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm t);
ATerm repeat1_1_0 (ATerm m_93 (ATerm), ATerm t);
ATerm repeat_until_2_0 (ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm t);
ATerm while_2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm t);
ATerm do_while_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t);
ATerm cpl_loaded_0_0 (ATerm t);
ATerm if_cpl_loaded_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm t);
ATerm if_cpl_loaded_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm g_94 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm h_94 (ATerm), ATerm t);
ATerm downup_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t);
ATerm downup2_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t);
ATerm topdownS_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_2_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_2_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_3_0 (ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm don_p_t_stop_1_0 (ATerm v_94 (ATerm), ATerm t);
ATerm bottomup_para_1_0 (ATerm w_94 (ATerm), ATerm t);
ATerm spinetd_1_0 (ATerm x_94 (ATerm), ATerm t);
ATerm spinebu_1_0 (ATerm y_94 (ATerm), ATerm t);
ATerm somespinetd_1_0 (ATerm b_95 (ATerm), ATerm t);
ATerm somespinebu_1_0 (ATerm d_95 (ATerm), ATerm t);
ATerm spinetd_p__1_0 (ATerm p_1 (ATerm), ATerm t);
ATerm spinebu_p__1_0 (ATerm q_1 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm j_95 (ATerm), ATerm t);
ATerm oncebu_1_0 (ATerm l_95 (ATerm), ATerm t);
ATerm oncetd_skip_2_0 (ATerm n_95 (ATerm), ATerm o_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm oncetd_stop_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm sometd_1_0 (ATerm t_95 (ATerm), ATerm t);
ATerm somebu_1_0 (ATerm v_95 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm x_95 (ATerm), ATerm t);
ATerm alldownup2_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t);
ATerm downup2_p__obsolete_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t);
ATerm alltd_fold_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t);
ATerm leaves_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm leaves_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t);
ATerm manybu_1_0 (ATerm p_96 (ATerm), ATerm t);
ATerm manytd_1_0 (ATerm r_96 (ATerm), ATerm t);
ATerm somedownup_1_0 (ATerm t_96 (ATerm), ATerm t);
ATerm breadthfirst_1_0 (ATerm v_96 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm is_inner_node_0_0 (ATerm t);
ATerm is_proper_subterm_set_0_0 (ATerm t);
ATerm is_proper_superterm_set_0_0 (ATerm t);
ATerm is_superterm_0_0 (ATerm t);
ATerm is_proper_superterm_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm is_proper_subterm_0_0 (ATerm t);
ATerm all_l_1_0 (ATerm x_96 (ATerm), ATerm t);
ATerm topdown_l_1_0 (ATerm y_96 (ATerm), ATerm t);
ATerm bottomup_l_1_0 (ATerm a_97 (ATerm), ATerm t);
ATerm downup_l_1_0 (ATerm c_97 (ATerm), ATerm t);
ATerm downup_l_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t);
ATerm downup2_l_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
ATerm topdownS_l_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_l_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_2_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_3_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_para_l_1_0 (ATerm x_97 (ATerm), ATerm t);
ATerm alltd_l_1_0 (ATerm z_97 (ATerm), ATerm t);
ATerm alldownup2_l_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t);
ATerm alltd_fold_l_2_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t);
ATerm reduce_1_0 (ATerm h_98 (ATerm), ATerm t);
ATerm outermost_1_0 (ATerm j_98 (ATerm), ATerm t);
ATerm innermost_p__1_0 (ATerm k_98 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm l_98 (ATerm), ATerm t);
ATerm innermost_old_1_0 (ATerm m_98 (ATerm), ATerm t);
ATerm pseudo_innermost3_1_0 (ATerm o_98 (ATerm), ATerm t);
ATerm innermost_memo_1_0 (ATerm r_98 (ATerm), ATerm t);
ATerm innermost_tagged_1_0 (ATerm t_98 (ATerm), ATerm t);
ATerm env_alltd_1_0 (ATerm v_98 (ATerm), ATerm t);
ATerm env_topdown_1_0 (ATerm x_98 (ATerm), ATerm t);
ATerm env_topdown_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm (ATerm), ATerm), ATerm t);
ATerm env_bottomup_1_0 (ATerm c_99 (ATerm), ATerm t);
ATerm thread_alltd_1_0 (ATerm e_99 (ATerm), ATerm t);
ATerm thread_bottomup_1_0 (ATerm g_99 (ATerm), ATerm t);
ATerm count_bottomup_1_0 (ATerm i_99 (ATerm), ATerm t);
ATerm env_oncetd_1_0 (ATerm j_99 (ATerm), ATerm t);
ATerm all_dist_1_0 (ATerm l_99 (ATerm), ATerm t);
ATerm one_dist_1_0 (ATerm m_99 (ATerm), ATerm t);
ATerm d_1_0 (ATerm n_99 (ATerm), ATerm t);
ATerm t_1_0 (ATerm o_99 (ATerm), ATerm t);
ATerm coll_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm stdioO_1_0 (ATerm q_99 (ATerm), ATerm t);
ATerm stdio_1_0 (ATerm r_99 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm echo_1_0 (ATerm s_99 (ATerm), ATerm t);
ATerm printchar_0_0 (ATerm t);
ATerm printstring_0_0 (ATerm t);
ATerm debug_stdout_1_0 (ATerm t_99 (ATerm), ATerm t);
ATerm say_1_0 (ATerm u_99 (ATerm), ATerm t);
ATerm trace_2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm obsolete_1_0 (ATerm x_99 (ATerm), ATerm t);
ATerm dissuader_1_0 (ATerm y_99 (ATerm), ATerm t);
ATerm Assert_2_0 (ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t);
ATerm risky_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t);
ATerm debug_depth_0_0 (ATerm t);
ATerm debug_depth_1_0 (ATerm d_100 (ATerm), ATerm t);
ATerm debug_depth_2_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t);
ATerm debug_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_100 (ATerm), ATerm t);
ATerm print_strings_nl_1_0 (ATerm h_100 (ATerm), ATerm t);
ATerm fprint_0_0 (ATerm t);
ATerm fprintnl_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm write_to_stream_0_0 (ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
ATerm write_in_taf_to_stream_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm read_from_string_0_0 (ATerm t);
ATerm write_to_string_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm WriteToTextFile_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm i_100 (ATerm), ATerm t);
ATerm open_1_0 (ATerm j_100 (ATerm), ATerm t);
ATerm save_1_0 (ATerm k_100 (ATerm), ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
ATerm for_each_pair_1_0 (ATerm l_100 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm m_100 (ATerm), ATerm t);
ATerm separate_by_0_1 (ATerm s_31, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm upto_0_0 (ATerm t);
ATerm UptoInit_0_0 (ATerm t);
ATerm UptoExit_0_0 (ATerm t);
ATerm UptoStep_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm t_100 (ATerm), ATerm t);
ATerm list_1_0 (ATerm u_100 (ATerm), ATerm t);
ATerm list_some_1_0 (ATerm v_100 (ATerm), ATerm t);
ATerm length_0_0 (ATerm t);
ATerm elem_0_0 (ATerm t);
ATerm elem_1_0 (ATerm x_100 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm y_100 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm a_101 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm b_101 (ATerm), ATerm t);
ATerm split_fetch_keep_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm at_tail_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm at__tail_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_101 (ATerm), ATerm t);
ATerm at__end_1_0 (ATerm h_101 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm j_101 (ATerm), ATerm t);
ATerm at__suffix_1_0 (ATerm l_101 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm n_101 (ATerm), ATerm t);
ATerm at__last_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm at_init_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t);
ATerm listbu_1_0 (ATerm v_101 (ATerm), ATerm t);
ATerm listbu1_1_0 (ATerm x_101 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm y_101 (ATerm), ATerm t);
ATerm listdu_1_0 (ATerm a_102 (ATerm), ATerm t);
ATerm listdu2_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t);
ATerm RevInit_0_0 (ATerm t);
ATerm Rev_0_0 (ATerm t);
ATerm RevExit_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm reverse_1_0 (ATerm f_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm r_1 (ATerm), ATerm s_1 (ATerm), ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm MkSingleton_0_0 (ATerm t);
ATerm split_Cons_0_0 (ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm insert_0_0 (ATerm t);
ATerm Ins0_0_0 (ATerm t);
ATerm Ins1_0_0 (ATerm t);
ATerm Ins2_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm m_102 (ATerm), ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm set_index_0_0 (ATerm t);
ATerm Sind0_0_0 (ATerm t);
ATerm Sind1_0_0 (ATerm t);
ATerm Sind2_1_0 (ATerm p_102 (ATerm), ATerm t);
ATerm get_index_0_0 (ATerm t);
ATerm Gind0_0_0 (ATerm t);
ATerm Gind1_0_0 (ATerm t);
ATerm Gind2_0_0 (ATerm t);
ATerm get__index_0_0 (ATerm t);
ATerm get_index0_1_0 (ATerm r_102 (ATerm), ATerm t);
ATerm index_0_0 (ATerm t);
ATerm Ind1_0_0 (ATerm t);
ATerm Ind2_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm zip_1_0 (ATerm x_102 (ATerm), ATerm t);
ATerm zip_p__1_0 (ATerm y_102 (ATerm), ATerm t);
ATerm zipl_1_0 (ATerm z_102 (ATerm), ATerm t);
ATerm zipr_1_0 (ATerm a_103 (ATerm), ATerm t);
ATerm rest_zip_1_0 (ATerm b_103 (ATerm), ATerm t);
ATerm unzip_0_0 (ATerm t);
ATerm unzip_1_0 (ATerm c_103 (ATerm), ATerm t);
ATerm nzip0_1_0 (ATerm d_103 (ATerm), ATerm t);
ATerm nzip_1_0 (ATerm e_103 (ATerm), ATerm t);
ATerm lzip_1_0 (ATerm f_103 (ATerm), ATerm t);
ATerm rzip_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm zipFetch_1_0 (ATerm h_103 (ATerm), ATerm t);
ATerm lzipFetch_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm rzipFetch_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm zipPad_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t);
ATerm zip_tail_0_0 (ATerm t);
ATerm zipl_tail_match_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm zipr_tail_match_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm zip_skip_2_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm Zip1a_p__0_0 (ATerm t);
ATerm Zip1b_p__0_0 (ATerm t);
ATerm Zip1c_0_0 (ATerm t);
ATerm Zip1c_p__0_0 (ATerm t);
ATerm Zip1d_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm LZip2_0_0 (ATerm t);
ATerm RZip2_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm UnZip1_0_0 (ATerm t);
ATerm UnZip2_0_0 (ATerm t);
ATerm UnZip3_0_0 (ATerm t);
ATerm NZip00_0_0 (ATerm t);
ATerm NZip01_0_0 (ATerm t);
ATerm NZip1_0_0 (ATerm t);
ATerm NZip2_0_0 (ATerm t);
ATerm NZip3_0_0 (ATerm t);
ATerm cart_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm join_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm Skip_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm SortL_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm LSort_1_0 (ATerm c_104 (ATerm), ATerm t);
ATerm LMerge_1_0 (ATerm d_104 (ATerm), ATerm t);
ATerm sort_list_1_0 (ATerm e_104 (ATerm), ATerm t);
ATerm isort_list_1_0 (ATerm g_104 (ATerm), ATerm t);
ATerm jsort_list_1_0 (ATerm i_104 (ATerm), ATerm t);
ATerm Uniq_0_0 (ATerm t);
ATerm uniq_0_0 (ATerm t);
ATerm qsort_1_0 (ATerm t_1 (ATerm), ATerm t);
ATerm set_eq_0_0 (ATerm t);
ATerm set_eq_1_0 (ATerm m_104 (ATerm), ATerm t);
ATerm subset_0_0 (ATerm t);
ATerm subset_1_0 (ATerm n_104 (ATerm), ATerm t);
ATerm subseteq_0_0 (ATerm t);
ATerm subseteq_1_0 (ATerm o_104 (ATerm), ATerm t);
ATerm subset_gen_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t);
ATerm isect_0_0 (ATerm t);
ATerm isect_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm diff_1_0 (ATerm u_104 (ATerm), ATerm t);
ATerm diff_p__1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm sym_diff_0_0 (ATerm t);
ATerm sym_diff_1_0 (ATerm x_104 (ATerm), ATerm t);
ATerm unions_0_0 (ATerm t);
ATerm unions_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
ATerm union_1_0 (ATerm z_104 (ATerm), ATerm t);
ATerm make_set_0_0 (ATerm t);
ATerm nub_0_0 (ATerm t);
ATerm HdMember_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm HdMember_p__2_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t);
ATerm twicetd_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm atmostonce_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm atmostonce_p__1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm collect_kids_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm collect_set_1_0 (ATerm i_105 (ATerm), ATerm t);
ATerm collect_2_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm collect_exc_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm (ATerm), ATerm), ATerm t);
ATerm bu_collect_1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm postorder_collect_1_0 (ATerm q_105 (ATerm), ATerm t);
ATerm postorder_collect_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm w_105 (ATerm), ATerm t);
ATerm CollectSplit_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t);
ATerm CollectSplit_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t);
ATerm collect_split_p__1_0 (ATerm d_106 (ATerm), ATerm t);
ATerm collect_om_1_0 (ATerm f_106 (ATerm), ATerm t);
ATerm collect_1_0 (ATerm g_106 (ATerm), ATerm t);
ATerm collect_om_2_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t);
ATerm collect_om_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm collect_all_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t);
ATerm collect_all_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t);
ATerm Look1_0_0 (ATerm t);
ATerm Look2_0_0 (ATerm t);
ATerm Look1_p__1_0 (ATerm v_106 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm getfirst_1_0 (ATerm x_106 (ATerm), ATerm t);
ATerm lookup_p__0_0 (ATerm t);
ATerm lookup_1_0 (ATerm z_106 (ATerm), ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm rtrim_1_0 (ATerm b_107 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm c_107 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm d_107 (ATerm), ATerm t);
ATerm foldr1_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm t);
ATerm foldr1_3_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm t);
ATerm foldr1_1_0 (ATerm l_107 (ATerm), ATerm t);
ATerm foldr_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t);
ATerm foldl_1_0 (ATerm s_107 (ATerm), ATerm t);
ATerm mapfoldr_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t);
ATerm mapfoldr1_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t);
ATerm mapconcat_1_0 (ATerm b_108 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
ATerm init_0_0 (ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_1_0 (ATerm d_108 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm e_108 (ATerm), ATerm t);
ATerm Cons_T_2_0 (ATerm x_1 (ATerm), ATerm a_2 (ATerm), ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm number_1_0 (ATerm g_108 (ATerm), ATerm t);
ATerm take_while_1_0 (ATerm h_108 (ATerm), ATerm t);
ATerm take_until_1_0 (ATerm i_108 (ATerm), ATerm t);
ATerm take_1_0 (ATerm j_108 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm drop_until_1_0 (ATerm l_108 (ATerm), ATerm t);
ATerm split_at_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm drop_1_0 (ATerm n_108 (ATerm), ATerm t);
ATerm FoldR1_0_0 (ATerm t);
ATerm FoldR_0_0 (ATerm t);
ATerm FoldL_1_0 (ATerm o_108 (ATerm), ATerm t);
ATerm lsplit_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_108 (ATerm), ATerm t);
ATerm reverse_filter_1_0 (ATerm s_108 (ATerm), ATerm t);
ATerm filter_gen_2_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm (ATerm), ATerm), ATerm t);
ATerm skip1_1_0 (ATerm w_108 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm filter_option_args_1_0 (ATerm y_108 (ATerm), ATerm t);
ATerm filter_options_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm list_some_filter_1_0 (ATerm a_109 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm partition_p__1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm TupleToList_0_0 (ATerm t);
ATerm ListToTuple_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Third_0_0 (ATerm t);
ATerm Dupl_0_0 (ATerm t);
ATerm split_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t);
ATerm split3_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm Swap_0_0 (ATerm t);
ATerm Thd_0_0 (ATerm t);
ATerm Ttl_0_0 (ATerm t);
ATerm tindex_0_0 (ATerm t);
ATerm is_tuple_0_0 (ATerm t);
ATerm flip_1_0 (ATerm l_109 (ATerm), ATerm t);
ATerm tmap_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm tconcat_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm tconcat_p__2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t);
ATerm tcata_2_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t);
ATerm tfoldr_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t);
ATerm tzip_1_0 (ATerm u_109 (ATerm), ATerm t);
ATerm tuple_zip_1_0 (ATerm v_109 (ATerm), ATerm t);
ATerm tuple_unzip_1_0 (ATerm x_109 (ATerm), ATerm t);
ATerm option_1_0 (ATerm z_109 (ATerm), ATerm t);
ATerm sect_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t);
ATerm string_gt_0_0 (ATerm t);
ATerm string_lt_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm p_40, ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm strcmp_0_0 (ATerm t);
ATerm strncmp_0_0 (ATerm t);
ATerm strcasecmp_0_0 (ATerm t);
ATerm split_at_space_0_0 (ATerm t);
ATerm split_at_dot_0_0 (ATerm t);
ATerm split_before_0_0 (ATerm t);
ATerm split_after_0_0 (ATerm t);
ATerm is_substring_1_0 (ATerm k_110 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm string_sort_0_0 (ATerm t);
ATerm string_sort_desc_0_0 (ATerm t);
ATerm SplitInit_0_0 (ATerm t);
ATerm SplitExit_0_0 (ATerm t);
ATerm SplitNext_0_0 (ATerm t);
ATerm padd_with_1_0 (ATerm m_110 (ATerm), ATerm t);
ATerm align_right_0_0 (ATerm t);
ATerm align_left_0_0 (ATerm t);
ATerm align_center_0_0 (ATerm t);
ATerm align_helper_0_0 (ATerm t);
ATerm div2_0_0 (ATerm t);
ATerm string_tokenize_0_1 (ATerm q_43, ATerm t);
ATerm string_tokenize_1_0 (ATerm n_110 (ATerm), ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm list_tokenize_1_0 (ATerm o_110 (ATerm), ATerm t);
ATerm lc_0_0 (ATerm t);
ATerm uc_0_0 (ATerm t);
ATerm lower_case_0_0 (ATerm t);
ATerm upper_case_0_0 (ATerm t);
ATerm lower_case_chars_0_0 (ATerm t);
ATerm upper_case_chars_0_0 (ATerm t);
ATerm S2I1_0_0 (ATerm t);
ATerm S2I2_0_0 (ATerm t);
ATerm S2D0_0_0 (ATerm t);
ATerm S2D1_0_0 (ATerm t);
ATerm S2D2_0_0 (ATerm t);
ATerm string_to_num_0_0 (ATerm t);
ATerm is_double_quoted_0_0 (ATerm t);
ATerm is_single_quoted_0_0 (ATerm t);
ATerm is_double_quoted_chars_0_0 (ATerm t);
ATerm is_single_quoted_chars_0_0 (ATerm t);
ATerm is_quoted_0_0 (ATerm t);
ATerm is_quoted_chars_0_0 (ATerm t);
ATerm unquote_1_0 (ATerm p_110 (ATerm), ATerm t);
ATerm unquote_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
ATerm unquote_chars_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm unquote_chars_2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t);
ATerm un_single_quote_chars_0_0 (ATerm t);
ATerm un_double_quote_chars_0_0 (ATerm t);
ATerm un_single_quote_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm quote_1_0 (ATerm v_110 (ATerm), ATerm t);
ATerm quote_chars_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm quote_chars_0_0 (ATerm t);
ATerm single_quote_chars_0_0 (ATerm t);
ATerm double_quote_chars_0_0 (ATerm t);
ATerm single_quote_0_0 (ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm q_3 (ATerm), ATerm t);
ATerm UnCify1_1_0 (ATerm a_111 (ATerm), ATerm t);
ATerm UnCify2_1_0 (ATerm b_111 (ATerm), ATerm t);
ATerm UnCify3_1_0 (ATerm c_111 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm d_111 (ATerm (ATerm), ATerm), ATerm t);
ATerm cify_0_0 (ATerm t);
ATerm uncify_0_0 (ATerm t);
ATerm UnCify_1_0 (ATerm f_111 (ATerm), ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm g_111 (ATerm), ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm i_111 (ATerm), ATerm t);
ATerm unescape_chars_0_0 (ATerm t);
ATerm Escape_0_0 (ATerm t);
ATerm Escape_double_quote_0_0 (ATerm t);
ATerm Escape_single_quote_0_0 (ATerm t);
ATerm Escape_backslash_0_0 (ATerm t);
ATerm Escape_linefeed_0_0 (ATerm t);
ATerm Escape_carriage_return_0_0 (ATerm t);
ATerm UnEscape_0_0 (ATerm t);
ATerm UnEscape_double_quote_0_0 (ATerm t);
ATerm UnEscape_single_quote_0_0 (ATerm t);
ATerm UnEscape_backslash_0_0 (ATerm t);
ATerm UnEscape_carriage_return_0_0 (ATerm t);
ATerm UnEscape_linefeed_0_0 (ATerm t);
ATerm UnEscape_tab_0_0 (ATerm t);
ATerm UnEscape_0_1 (ATerm d_45, ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm newname_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm is_alphanum_0_0 (ATerm t);
ATerm is_alpha_0_0 (ATerm t);
ATerm is_hexnum_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_ascii_0_0 (ATerm t);
ATerm case_char_1_0 (ATerm l_111 (ATerm), ATerm t);
ATerm to_upper_0_0 (ATerm t);
ATerm to_lower_0_0 (ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_path_1_0 (ATerm m_111 (ATerm), ATerm t);
ATerm find_file_1_0 (ATerm n_111 (ATerm), ATerm t);
ATerm find_file_2_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm temp_file_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
ATerm new_temp_dir_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm basename_1_0 (ATerm s_111 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm u_111 (ATerm), ATerm t);
ATerm has_extension_1_0 (ATerm v_111 (ATerm), ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm add_extension_0_0 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm abspath_0_0 (ATerm t);
ATerm is_abspath_0_0 (ATerm t);
ATerm is_relpath_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm can_read_file_0_0 (ATerm t);
ATerm is_readable_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm is_writable_0_0 (ATerm t);
ATerm can_execute_file_0_0 (ATerm t);
ATerm is_executable_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm close_file_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm append_file_0_0 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
ATerm pipe_0_0 (ATerm t);
ATerm fdopen_0_0 (ATerm t);
ATerm fileno_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm isreg_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
ATerm ischr_0_0 (ATerm t);
ATerm isblk_0_0 (ATerm t);
ATerm isfifo_0_0 (ATerm t);
ATerm islnk_0_0 (ATerm t);
ATerm issock_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm mkdtemp_0_0 (ATerm t);
ATerm close_0_0 (ATerm t);
ATerm dup_0_0 (ATerm t);
ATerm dup2_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm getcwd_0_0 (ATerm t);
ATerm chdir_0_0 (ATerm t);
ATerm home_dir_0_0 (ATerm t);
ATerm mkdir_0_1 (ATerm t_46, ATerm t);
ATerm mkdir_0_0 (ATerm t);
ATerm rmdir_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm fgetc_0_0 (ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm puts_0_0 (ATerm t);
ATerm fputc_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm fflush_0_0 (ATerm t);
ATerm isatty_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm shuffle_forced_0_0 (ATerm t);
ATerm shuffle_0_0 (ATerm t);
ATerm shuffle_word_mids_0_0 (ATerm t);
ATerm shuffle_word_mid_0_0 (ATerm t);
ATerm ltrim_chars_1_0 (ATerm z_111 (ATerm), ATerm t);
ATerm rtrim_chars_1_0 (ATerm a_112 (ATerm), ATerm t);
ATerm trim_chars_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm trim_trailing_whitespace_0_0 (ATerm t);
ATerm trim_leading_whitespace_0_0 (ATerm t);
ATerm trim_whitespace_0_0 (ATerm t);
ATerm string_tokenize_keep_empty_0_1 (ATerm s_47, ATerm t);
ATerm string_tokenize_keep_all_0_1 (ATerm v_47, ATerm t);
ATerm get_lines_0_0 (ATerm t);
ATerm all_lines_1_0 (ATerm e_112 (ATerm), ATerm t);
ATerm lines_0_0 (ATerm t);
ATerm indent_text_0_1 (ATerm a_48, ATerm t);
ATerm prefix_lines_0_1 (ATerm c_48, ATerm t);
ATerm nrofoccs_1_0 (ATerm f_112 (ATerm), ATerm t);
ATerm om_occurrences_1_0 (ATerm g_112 (ATerm), ATerm t);
ATerm occurrences_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm at_depth_2_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm t);
ATerm node_size_0_0 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm crush_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t);
ATerm foldr_kids_2_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t);
ATerm foldr_kids_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm explode_term_0_0 (ATerm t);
ATerm get_constructor_0_0 (ATerm t);
ATerm get_arguments_0_0 (ATerm t);
ATerm address_lt_0_0 (ATerm t);
ATerm address_0_0 (ATerm t);
ATerm get_annos_0_0 (ATerm t);
ATerm get_annotations_0_0 (ATerm t);
ATerm set_annos_0_0 (ATerm t);
ATerm set_annotations_0_0 (ATerm t);
ATerm set_anno_0_0 (ATerm t);
ATerm rm_annotations_0_0 (ATerm t);
ATerm has_annos_0_0 (ATerm t);
ATerm has_annotation_0_0 (ATerm t);
ATerm if_annotation_2_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm t);
ATerm strip_annos_0_0 (ATerm t);
ATerm catch_annos_0_0 (ATerm t);
ATerm preserve_annotation_1_0 (ATerm x_112 (ATerm), ATerm t);
ATerm preserve_annos_1_0 (ATerm y_112 (ATerm), ATerm t);
ATerm Merge_Props_1_0 (ATerm z_112 (ATerm), ATerm t);
ATerm is_same_prop_0_0 (ATerm t);
ATerm is_prop_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm apply_prop_existing_2_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm t);
ATerm apply_2_prop_2_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm t);
ATerm apply_2_prop_1_0 (ATerm f_113 (ATerm), ATerm t);
ATerm add_prop_existing_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t);
ATerm add_prop_empty_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t);
ATerm props_union_0_0 (ATerm t);
ATerm valid_props_term_0_0 (ATerm t);
ATerm valid_props_0_0 (ATerm t);
ATerm get_props_0_0 (ATerm t);
ATerm preserve_props_1_0 (ATerm k_113 (ATerm), ATerm t);
ATerm merge_props_1_0 (ATerm l_113 (ATerm), ATerm t);
ATerm has_prop_1_0 (ATerm m_113 (ATerm), ATerm t);
ATerm has_prop_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm get_prop_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm apply_prop_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t);
ATerm replace_prop_2_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm t);
ATerm add_prop_2_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm t);
ATerm set_prop_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t);
ATerm is_interval_0_0 (ATerm t);
ATerm range_1_0 (ATerm r_3 (ATerm), ATerm t);
ATerm range_next_1_0 (ATerm a_114 (ATerm), ATerm t);
ATerm range_0_1 (ATerm s_3, ATerm t);
ATerm range_0_0 (ATerm t);
ATerm sum_0_0 (ATerm t);
ATerm average_0_0 (ATerm t);
ATerm list_min_0_0 (ATerm t);
ATerm list_max_0_0 (ATerm t);
ATerm list_accum_1_0 (ATerm b_114 (ATerm), ATerm t);
ATerm add_lists_0_0 (ATerm t);
ATerm averages_0_0 (ATerm t);
ATerm round_list_0_0 (ATerm t);
ATerm int_sort_0_0 (ATerm t);
ATerm is_interval_from_0_0 (ATerm t);
ATerm new_counter_0_0 (ATerm t);
ATerm reset_counter_0_0 (ATerm t);
ATerm set_counter_0_0 (ATerm t);
ATerm Counter_0_0 (ATerm t);
ATerm get_counter_0_0 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
ATerm add_inf1_0_0 (ATerm t);
ATerm add_inf2_0_0 (ATerm t);
ATerm add_inf_0_0 (ATerm t);
ATerm lt_inf_0_0 (ATerm t);
ATerm gcd_0_0 (ATerm t);
ATerm abs_0_0 (ATerm t);
ATerm addS_0_0 (ATerm t);
ATerm subtS_0_0 (ATerm t);
ATerm mulS_0_0 (ATerm t);
ATerm divS_0_0 (ATerm t);
ATerm modS_0_0 (ATerm t);
ATerm gtS_0_0 (ATerm t);
ATerm geqS_0_0 (ATerm t);
ATerm ltS_0_0 (ATerm t);
ATerm leqS_0_0 (ATerm t);
ATerm maxS_0_0 (ATerm t);
ATerm minS_0_0 (ATerm t);
ATerm inc_0_0 (ATerm t);
ATerm dec_0_0 (ATerm t);
ATerm log2_0_0 (ATerm t);
ATerm set_random_seed_0_0 (ATerm t);
ATerm get_random_max_0_0 (ATerm t);
ATerm next_random_0_0 (ATerm t);
ATerm hex_string_to_int_0_0 (ATerm t);
ATerm dec_string_to_int_0_0 (ATerm t);
ATerm oct_string_to_int_0_0 (ATerm t);
ATerm bin_string_to_int_0_0 (ATerm t);
ATerm hex_chars_to_int_0_0 (ATerm t);
ATerm dec_chars_to_int_0_0 (ATerm t);
ATerm oct_chars_to_int_0_0 (ATerm t);
ATerm bin_chars_to_int_0_0 (ATerm t);
ATerm generic_string_to_int_0_0 (ATerm t);
ATerm generic_chars_to_int_0_0 (ATerm t);
ATerm neg_chars_to_int_0_0 (ATerm t);
ATerm pos_chars_to_int_0_0 (ATerm t);
ATerm char_to_digit_0_0 (ATerm t);
ATerm even_0_0 (ATerm t);
ATerm max_0_0 (ATerm t);
ATerm min_0_0 (ATerm t);
ATerm pos_0_0 (ATerm t);
ATerm neg_0_0 (ATerm t);
ATerm int_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm leq_leq_0_0 (ATerm t);
ATerm leq_lt_0_0 (ATerm t);
ATerm lt_leq_0_0 (ATerm t);
ATerm lt_lt_0_0 (ATerm t);
ATerm comp_comp_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm minus_0_0 (ATerm t);
ATerm plus_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm addi_0_0 (ATerm t);
ATerm addr_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm subti_0_0 (ATerm t);
ATerm subtr_0_0 (ATerm t);
ATerm mul_0_0 (ATerm t);
ATerm muli_0_0 (ATerm t);
ATerm mulr_0_0 (ATerm t);
ATerm div_0_0 (ATerm t);
ATerm divi_0_0 (ATerm t);
ATerm divr_0_0 (ATerm t);
ATerm mod_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm gti_0_0 (ATerm t);
ATerm gtr_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm is_real_0_0 (ATerm t);
ATerm cos_0_0 (ATerm t);
ATerm sin_0_0 (ATerm t);
ATerm sqrt_0_0 (ATerm t);
ATerm atan2_0_0 (ATerm t);
ATerm real_to_string_0_0 (ATerm t);
ATerm string_to_real_0_0 (ATerm t);
ATerm real_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm table_pop_0_0 (ATerm t);
ATerm table_pop_rm_0_0 (ATerm t);
ATerm table_pop_get_0_0 (ATerm t);
ATerm table_lookup_0_0 (ATerm t);
ATerm table_replace_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm table_diff_0_0 (ATerm t);
ATerm table_append_0_0 (ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm table_putlist_1_0 (ATerm g_114 (ATerm), ATerm t);
ATerm table_copy_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm y_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm table_rename_0_0 (ATerm t);
ATerm hashtable_eq_0_0 (ATerm t);
ATerm hashtable_eq_1_0 (ATerm h_114 (ATerm), ATerm t);
ATerm hashtable_union_0_1 (ATerm r_54, ATerm t);
ATerm hashtable_union_wempty_0_2 (ATerm u_54, ATerm v_54, ATerm t);
ATerm hashtable_union_symm_wempty_0_1 (ATerm y_54, ATerm t);
ATerm hashtable_intersect_0_1 (ATerm d_55, ATerm t);
ATerm hashtable_intersect_wempty_0_2 (ATerm h_55, ATerm i_55, ATerm t);
ATerm hashtable_intersect_symm_wempty_0_1 (ATerm m_55, ATerm t);
ATerm hashtable_merge_8_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t);
ATerm hashtable_merge_func_7_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t);
ATerm symmetric_yes_0_0 (ATerm t);
ATerm symmetric_no_0_0 (ATerm t);
ATerm iterate1_yes_0_0 (ATerm t);
ATerm iterate1_no_0_0 (ATerm t);
ATerm iterate2_yes_0_0 (ATerm t);
ATerm iterate2_no_0_0 (ATerm t);
ATerm remove_yes_0_0 (ATerm t);
ATerm remove_no_0_0 (ATerm t);
ATerm default_no_0_0 (ATerm t);
ATerm hashtable_push_0_2 (ATerm g_56, ATerm h_56, ATerm t);
ATerm hashtable_pushlist_0_2 (ATerm i_56, ATerm j_56, ATerm t);
ATerm hashtable_pushunion_0_2 (ATerm k_56, ATerm l_56, ATerm t);
ATerm hashtable_pop_0_1 (ATerm m_56, ATerm t);
ATerm hashtable_peek_0_1 (ATerm n_56, ATerm t);
ATerm hashtable_peekpop_0_1 (ATerm o_56, ATerm t);
ATerm hashtable_getlist_0_0 (ATerm t);
ATerm hashtable_putlist_0_1 (ATerm s_56, ATerm t);
ATerm hashtable_putlist_1_1 (ATerm x_114 (ATerm, ATerm, ATerm), ATerm w_56, ATerm t);
ATerm hashtable_init_0_0 (ATerm t);
ATerm hashtable_copy_0_0 (ATerm t);
ATerm hashtable_put_0_2 (ATerm b_57, ATerm c_57, ATerm t);
ATerm hashtable_get_0_1 (ATerm e_57, ATerm t);
ATerm hashtable_remove_0_1 (ATerm g_57, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm new_hashtable_0_2 (ATerm j_57, ATerm k_57, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm hashtable_clear_0_0 (ATerm t);
ATerm nestedtable_put_aux_1_2 (ATerm t_3 (ATerm), ATerm u_3, ATerm v_3, ATerm t);
ATerm nestedtable_get_aux_1_1 (ATerm w_3 (ATerm), ATerm x_3, ATerm t);
ATerm nestedtable_put_0_2 (ATerm j_58, ATerm k_58, ATerm t);
ATerm nestedtable_put_1_2 (ATerm f_115 (ATerm), ATerm l_58, ATerm m_58, ATerm t);
ATerm nestedtable_get_0_1 (ATerm o_58, ATerm t);
ATerm nestedtable_get_1_1 (ATerm g_115 (ATerm), ATerm p_58, ATerm t);
ATerm iset_get_index_0_1 (ATerm r_58, ATerm t);
ATerm iset_get_elem_0_1 (ATerm t_58, ATerm t);
ATerm iset_add_1_1 (ATerm h_115 (ATerm), ATerm v_58, ATerm t);
ATerm iset_add_0_1 (ATerm x_58, ATerm t);
ATerm iset_addlist_0_1 (ATerm z_58, ATerm t);
ATerm iset_contains_0_1 (ATerm c_59, ATerm t);
ATerm iset_remove_0_1 (ATerm d_59, ATerm t);
ATerm iset_elements_0_0 (ATerm t);
ATerm iset_union_0_1 (ATerm g_59, ATerm t);
ATerm iset_isect_0_1 (ATerm j_59, ATerm t);
ATerm iset_subset_0_1 (ATerm m_59, ATerm t);
ATerm iset_eq_0_1 (ATerm p_59, ATerm t);
ATerm new_iset_0_0 (ATerm t);
ATerm new_iset_0_2 (ATerm r_59, ATerm s_59, ATerm t);
ATerm iset_destroy_0_0 (ATerm t);
ATerm iset_clear_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
ATerm date_format_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm clock_to_seconds_0_0 (ATerm t);
ATerm clock_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm ticks_to_seconds_0_0 (ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm add_times_0_0 (ATerm t);
ATerm times_to_seconds_0_0 (ATerm t);
ATerm user_time_0_0 (ATerm t);
ATerm system_time_0_0 (ATerm t);
ATerm cuser_time_0_0 (ATerm t);
ATerm csystem_time_0_0 (ATerm t);
ATerm self_children_user_time_0_0 (ATerm t);
ATerm self_children_sys_time_0_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm profile_1_0 (ATerm i_115 (ATerm), ATerm t);
ATerm profile_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
ATerm profile_p__2_0 (ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm t);
ATerm index2month_0_0 (ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm day_of_week2index_0_0 (ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm time_0_0 (ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm now_UTC_0_0 (ATerm t);
ATerm epoch2local_time_0_0 (ATerm t);
ATerm epoch2utc_0_0 (ATerm t);
ATerm epoch2UTC_0_0 (ATerm t);
ATerm just_day_time_0_0 (ATerm t);
ATerm just_date_0_0 (ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
ATerm readdir_0_0 (ATerm t);
ATerm modification_time_0_0 (ATerm t);
ATerm file_newer_0_0 (ATerm t);
ATerm rename_file_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
ATerm fdcopy_0_0 (ATerm t);
ATerm link_file_0_0 (ATerm t);
ATerm remove_file_0_0 (ATerm t);
ATerm getenv_0_0 (ATerm t);
ATerm setenv_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_last_error_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm strerror_0_0 (ATerm t);
ATerm setup_filter_pipe_0_0 (ATerm t);
ATerm pipe_source_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
ATerm pipe_sink_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t);
ATerm close_filter_pipe_1_0 (ATerm r_115 (ATerm), ATerm t);
ATerm exec_filter_pipe_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm spawn_filter_with_prog_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t);
ATerm write_to_prog_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
ATerm write_to_prog_p__2_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm t);
ATerm read_from_prog_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
ATerm read_from_prog_p__2_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t);
ATerm close_pipe_0_0 (ATerm t);
ATerm stdin_from_pipe_0_0 (ATerm t);
ATerm file_from_pipe_0_0 (ATerm t);
ATerm stdout_to_pipe_0_0 (ATerm t);
ATerm file_to_pipe_0_0 (ATerm t);
ATerm write_term_to_text_pipe_0_0 (ATerm t);
ATerm read_term_from_pipe_0_0 (ATerm t);
ATerm copy_pipe_to_file_0_0 (ATerm t);
ATerm getchar_0_0 (ATerm t);
ATerm readline_0_0 (ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm filter_text_file_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t);
ATerm printascii_0_0 (ATerm t);
ATerm rm_files_0_0 (ATerm t);
ATerm pipe_2_0 (ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm t);
ATerm pipe_3_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t);
ATerm pipe_p__3_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t);
ATerm call_tmp_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
ATerm call_out_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t);
ATerm transform_file_2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t);
ATerm apply_to_file_1_0 (ATerm y_116 (ATerm), ATerm t);
ATerm copy_file_3_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t);
ATerm apply_program_1_0 (ATerm c_117 (ATerm), ATerm t);
ATerm apply_program_2_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm t);
ATerm redirect_stdout_to_file_0_0 (ATerm t);
ATerm redirect_stdin_from_file_0_0 (ATerm t);
ATerm pipe_term_to_child_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t);
ATerm if_less_verbose1_1_0 (ATerm h_117 (ATerm), ATerm t);
ATerm if_less_verbose2_1_0 (ATerm i_117 (ATerm), ATerm t);
ATerm if_less_verbose3_1_0 (ATerm j_117 (ATerm), ATerm t);
ATerm if_less_verbose4_1_0 (ATerm k_117 (ATerm), ATerm t);
ATerm if_less_verbose5_1_0 (ATerm l_117 (ATerm), ATerm t);
ATerm if_less_verbose6_1_0 (ATerm m_117 (ATerm), ATerm t);
ATerm if_less_verbose7_1_0 (ATerm n_117 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm o_117 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm p_117 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm q_117 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm r_117 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm s_117 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm t_117 (ATerm), ATerm t);
ATerm if_verbose7_1_0 (ATerm u_117 (ATerm), ATerm t);
ATerm set_verbosity_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm find_config_file_2_0 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
ATerm find_config_file_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t);
ATerm find_plugins_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm t);
ATerm find_plugins_2_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm t);
ATerm import_config_file_1_0 (ATerm f_118 (ATerm), ATerm t);
ATerm import_config_files_1_0 (ATerm g_118 (ATerm), ATerm t);
ATerm export_config_0_0 (ATerm t);
ATerm merge_configs_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
ATerm toggle_config_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm post_extend_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_configs_1_0 (ATerm h_118 (ATerm), ATerm t);
ATerm get_config_keys_1_0 (ATerm i_118 (ATerm), ATerm t);
ATerm if_less_keep1_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm if_less_keep2_1_0 (ATerm k_118 (ATerm), ATerm t);
ATerm if_less_keep3_1_0 (ATerm l_118 (ATerm), ATerm t);
ATerm if_less_keep4_1_0 (ATerm m_118 (ATerm), ATerm t);
ATerm if_less_keep5_1_0 (ATerm n_118 (ATerm), ATerm t);
ATerm if_less_keep6_1_0 (ATerm o_118 (ATerm), ATerm t);
ATerm if_less_keep7_1_0 (ATerm p_118 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm q_118 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm r_118 (ATerm), ATerm t);
ATerm if_keep3_1_0 (ATerm s_118 (ATerm), ATerm t);
ATerm if_keep4_1_0 (ATerm t_118 (ATerm), ATerm t);
ATerm if_keep5_1_0 (ATerm u_118 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm v_118 (ATerm), ATerm t);
ATerm if_keep7_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm set_keep_0_0 (ATerm t);
ATerm get_keep_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm exited_0_0 (ATerm t);
ATerm signaled_0_0 (ATerm t);
ATerm stopped_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm call_1_0 (ATerm x_118 (ATerm), ATerm t);
ATerm call_noisy_0_0 (ATerm t);
ATerm fork_1_0 (ATerm y_118 (ATerm), ATerm t);
ATerm fork_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm b_119 (ATerm), ATerm t);
ATerm kill_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm execvp_0_0 (ATerm t);
ATerm execv_0_0 (ATerm t);
ATerm get_pid_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm number_from_signal_0_0 (ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm memo_scope_1_0 (ATerm c_119 (ATerm), ATerm t);
ATerm memo_1_0 (ATerm d_119 (ATerm), ATerm t);
ATerm Memo_0_0 (ATerm t);
ATerm memo_init_0_0 (ATerm t);
ATerm memo_purge_0_0 (ATerm t);
ATerm memo_2_0 (ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t);
ATerm input_file_p__0_0 (ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm output_file_p__0_0 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm get_options_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm h_119 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm t);
ATerm check_option_0_0 (ATerm t);
ATerm usage_p__0_0 (ATerm t);
ATerm iowrap_1_0 (ATerm k_119 (ATerm), ATerm t);
ATerm iowrapO_2_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm t);
ATerm iowrap_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t);
ATerm iowrap_3_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t);
ATerm iowrapO_3_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm t);
ATerm iowrap_4_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm t);
ATerm iowrapNoOutput_2_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm t);
ATerm iowrapNoOutput_3_0 (ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm need_help_1_0 (ATerm e_120 (ATerm), ATerm t);
ATerm need_help_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm f_120 (ATerm), ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm input_options_0_0 (ATerm t);
ATerm output_options_0_0 (ATerm t);
ATerm general_options_0_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
ATerm version_option_0_0 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm aterm_output_option_0_0 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm g_120 (ATerm), ATerm h_120 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
ATerm io_1_0 (ATerm r_120 (ATerm), ATerm t);
ATerm output_1_0 (ATerm s_120 (ATerm), ATerm t);
ATerm input_1_0 (ATerm t_120 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm u_120 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
ATerm io_wrap_4_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t);
ATerm output_wrap_1_0 (ATerm b_121 (ATerm), ATerm t);
ATerm output_wrap_2_0 (ATerm c_121 (ATerm), ATerm d_121 (ATerm), ATerm t);
ATerm input_wrap_1_0 (ATerm e_121 (ATerm), ATerm t);
ATerm input_wrap_2_0 (ATerm f_121 (ATerm), ATerm g_121 (ATerm), ATerm t);
ATerm defined_option_1_0 (ATerm h_121 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm i_121 (ATerm), ATerm t);
ATerm arg_option_value_1_0 (ATerm j_121 (ATerm), ATerm t);
ATerm Option_2_0 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm y_3 (ATerm), ATerm z_3 (ATerm), ATerm a_4 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm b_4 (ATerm), ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm t);
ATerm ArgOption_2_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t);
ATerm Arg2Option_2_0 (ATerm d_122 (ATerm), ATerm e_122 (ATerm), ATerm t);
ATerm Arg2Option_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_1_0 (ATerm i_122 (ATerm), ATerm t);
ATerm parse_options_3_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_122 (ATerm), ATerm t);
ATerm register_usage_1_0 (ATerm o_122 (ATerm), ATerm t);
ATerm system_usage_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm short_description_1_0 (ATerm p_122 (ATerm), ATerm t);
ATerm long_description_1_0 (ATerm q_122 (ATerm), ATerm t);
ATerm override_system_usage_0_0 (ATerm t);
ATerm override_system_about_0_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm t);
ATerm substitute_1_0 (ATerm v_122 (ATerm), ATerm t);
ATerm substitute_6_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm (ATerm), ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_123 (ATerm (ATerm), ATerm), ATerm b_123 (ATerm), ATerm t);
ATerm substitute_5_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm (ATerm), ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_123 (ATerm (ATerm), ATerm), ATerm t);
ATerm SubsVar_2_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm rename_4_0 (ATerm k_123 (ATerm (ATerm), ATerm), ATerm l_123 (ATerm), ATerm m_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_123 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm (ATerm), ATerm), ATerm t);
ATerm rename_3_0 (ATerm r_123 (ATerm (ATerm), ATerm), ATerm s_123 (ATerm), ATerm t_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm DistBinding_2_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm rename_2_0 (ATerm x_123 (ATerm (ATerm), ATerm), ATerm y_123 (ATerm), ATerm t);
ATerm RnVar_1_0 (ATerm a_124 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_1_0 (ATerm b_124 (ATerm), ATerm t);
ATerm DistBinding_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm equal_2_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm t);
ATerm equal_1_0 (ATerm f_124 (ATerm), ATerm t);
ATerm in_0_0 (ATerm t);
ATerm UfVar_1_0 (ATerm g_124 (ATerm), ATerm t);
ATerm UfSwap_1_0 (ATerm h_124 (ATerm), ATerm t);
ATerm unify_1_0 (ATerm i_124 (ATerm), ATerm t);
ATerm MatchVar_1_0 (ATerm j_124 (ATerm), ATerm t);
ATerm pattern_match_1_0 (ATerm k_124 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm equal_0_0 (ATerm t);
ATerm free_vars2_2_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm t);
ATerm free_vars2_3_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars2_4_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_124 (ATerm), ATerm t);
ATerm free_vars_2_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm t);
ATerm free_vars_3_0 (ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm c_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars_4_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_125 (ATerm), ATerm t);
ATerm apply_test_1_3 (ATerm j_125 (ATerm), ATerm k_72, ATerm l_72, ATerm m_72, ATerm t);
ATerm apply_test_1_2 (ATerm k_125 (ATerm), ATerm n_72, ATerm o_72, ATerm t);
ATerm apply_and_check_1_3 (ATerm l_125 (ATerm), ATerm p_72, ATerm q_72, ATerm r_72, ATerm t);
ATerm apply_and_fail_1_2 (ATerm m_125 (ATerm), ATerm s_72, ATerm t_72, ATerm t);
ATerm apply_and_fail_1_3 (ATerm n_125 (ATerm), ATerm u_72, ATerm v_72, ATerm w_72, ATerm t);
ATerm apply_and_show_1_2 (ATerm o_125 (ATerm), ATerm x_72, ATerm y_72, ATerm t);
ATerm do_test_1_1 (ATerm p_125 (ATerm), ATerm z_72, ATerm t);
ATerm init_record_0_0 (ATerm t);
ATerm record_success_0_0 (ATerm t);
ATerm record_failure_0_0 (ATerm t);
ATerm check_for_failures_0_0 (ATerm t);
ATerm report_test_0_0 (ATerm t);
ATerm test_suite_2_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t);
ATerm do_test_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t);
ATerm testing_2_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm t);
ATerm apply_test_4_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm t);
ATerm apply_test_3_0 (ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm t);
ATerm apply_and_check_4_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm t);
ATerm apply_and_fail_3_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm t);
ATerm apply_and_fail_4_0 (ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm t);
ATerm apply_and_show_3_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_3_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_3_0 (ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm w_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_chgr_3_0 (ATerm a_127 (ATerm), ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm t);
ATerm graph_nodes_3_0 (ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm f_127 (ATerm), ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm g_127 (ATerm), ATerm h_127 (ATerm), ATerm i_127 (ATerm), ATerm t);
ATerm GnInit_0_0 (ATerm t);
ATerm GnInitRoots_0_0 (ATerm t);
ATerm GnNext_3_0 (ATerm j_127 (ATerm), ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t);
ATerm GnUndefined_0_0 (ATerm t);
ATerm GnExit_0_0 (ATerm t);
ATerm init_parenthesation_rules_0_0 (ATerm t);
ATerm gen_left_0_0 (ATerm t);
ATerm gen_right_0_0 (ATerm t);
ATerm gen_non_assoc_0_0 (ATerm t);
ATerm gen_none_0_0 (ATerm t);
ATerm GenLeftAssoc_0_0 (ATerm t);
ATerm LeftAssoc_0_0 (ATerm t);
ATerm GenRightAssoc_0_0 (ATerm t);
ATerm RightAssoc_0_0 (ATerm t);
ATerm GenGreaterThan_0_0 (ATerm t);
ATerm GreaterThan_0_0 (ATerm t);
ATerm parenthesize_2_0 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm t);
ATerm parenthesize_1_0 (ATerm r_127 (ATerm), ATerm t);
ATerm Disambiguate_1_0 (ATerm h_4 (ATerm), ATerm t);
ATerm TempFiles_0_0 (ATerm t);
ATerm Import_0_0 (ATerm t);
ATerm Tool_1_0 (ATerm m_27 (ATerm), ATerm t);
ATerm XtcConf_4_0 (ATerm c_27 (ATerm), ATerm d_27 (ATerm), ATerm e_27 (ATerm), ATerm f_27 (ATerm), ATerm t);
ATerm XtcExport_0_0 (ATerm t);
ATerm XtcLoaded_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
ATerm XtcCache_0_0 (ATerm t);
ATerm XtcRef_0_0 (ATerm t);
ATerm XtcReg_0_0 (ATerm t);
ATerm Template_2_0 (ATerm y_26 (ATerm), ATerm b_27 (ATerm), ATerm t);
ATerm Explicit_0_0 (ATerm t);
ATerm Implicit_0_0 (ATerm t);
ATerm Regular_0_0 (ATerm t);
ATerm Layout_1_0 (ATerm t_26 (ATerm), ATerm t);
ATerm TOr_2_0 (ATerm r_26 (ATerm), ATerm s_26 (ATerm), ATerm t);
ATerm TVarSpec_1_0 (ATerm q_26 (ATerm), ATerm t);
ATerm Input_0_0 (ATerm t);
ATerm Output_0_0 (ATerm t);
ATerm Arguments_0_0 (ATerm t);
ATerm TVarOpt_4_0 (ATerm d_26 (ATerm), ATerm e_26 (ATerm), ATerm l_26 (ATerm), ATerm p_26 (ATerm), ATerm t);
ATerm TVarOne_4_0 (ATerm x_25 (ATerm), ATerm y_25 (ATerm), ATerm b_26 (ATerm), ATerm c_26 (ATerm), ATerm t);
ATerm TVarPlus_4_0 (ATerm t_25 (ATerm), ATerm u_25 (ATerm), ATerm v_25 (ATerm), ATerm w_25 (ATerm), ATerm t);
ATerm TVarStar_4_0 (ATerm p_25 (ATerm), ATerm q_25 (ATerm), ATerm r_25 (ATerm), ATerm s_25 (ATerm), ATerm t);
ATerm Default_1_0 (ATerm o_25 (ATerm), ATerm t);
ATerm Values_1_0 (ATerm n_25 (ATerm), ATerm t);
ATerm On_0_0 (ATerm t);
ATerm Off_0_0 (ATerm t);
ATerm Option_0_0 (ATerm t);
ATerm ArgOption_0_0 (ATerm t);
ATerm Type_1_0 (ATerm m_25 (ATerm), ATerm t);
ATerm XtcQuery_2_0 (ATerm k_25 (ATerm), ATerm l_25 (ATerm), ATerm t);
ATerm XtcQuery_1_0 (ATerm j_25 (ATerm), ATerm t);
ATerm XtcMeta_2_0 (ATerm g_25 (ATerm), ATerm i_25 (ATerm), ATerm t);
ATerm XtcInherit_2_0 (ATerm e_25 (ATerm), ATerm f_25 (ATerm), ATerm t);
ATerm XtcModel_2_0 (ATerm c_25 (ATerm), ATerm d_25 (ATerm), ATerm t);
ATerm XtcContracts_1_0 (ATerm b_25 (ATerm), ATerm t);
ATerm XtcDesc_1_0 (ATerm a_25 (ATerm), ATerm t);
ATerm XT_0_0 (ATerm t);
ATerm Exec_1_0 (ATerm z_24 (ATerm), ATerm t);
ATerm XTService_0_0 (ATerm t);
ATerm HTTP_1_0 (ATerm x_24 (ATerm), ATerm t);
ATerm Streams_3_0 (ATerm u_24 (ATerm), ATerm v_24 (ATerm), ATerm w_24 (ATerm), ATerm t);
ATerm Error_1_0 (ATerm t_24 (ATerm), ATerm t);
ATerm Std_1_0 (ATerm s_24 (ATerm), ATerm t);
ATerm File_1_0 (ATerm r_24 (ATerm), ATerm t);
ATerm Option_1_0 (ATerm q_24 (ATerm), ATerm t);
ATerm URL_1_0 (ATerm o_24 (ATerm), ATerm t);
ATerm FILE_1_0 (ATerm n_24 (ATerm), ATerm t);
ATerm Arguments_1_0 (ATerm m_24 (ATerm), ATerm t);
ATerm XtcContract_3_0 (ATerm j_24 (ATerm), ATerm k_24 (ATerm), ATerm l_24 (ATerm), ATerm t);
ATerm Pre_0_0 (ATerm t);
ATerm Post_0_0 (ATerm t);
ATerm String_1_0 (ATerm i_24 (ATerm), ATerm t);
ATerm Definition_2_0 (ATerm g_24 (ATerm), ATerm h_24 (ATerm), ATerm t);
ATerm Reference_1_0 (ATerm f_24 (ATerm), ATerm t);
ATerm Registration_2_0 (ATerm d_24 (ATerm), ATerm e_24 (ATerm), ATerm t);
ATerm Repository_1_0 (ATerm c_24 (ATerm), ATerm t);
ATerm Vomit_0_0 (ATerm t);
ATerm Debug_0_0 (ATerm t);
ATerm Info_0_0 (ATerm t);
ATerm Notice_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm Error_0_0 (ATerm t);
ATerm Critical_0_0 (ATerm t);
ATerm Alert_0_0 (ATerm t);
ATerm Emergency_0_0 (ATerm t);
ATerm xtc_find_1_0 (ATerm y_32 (ATerm), ATerm t)
{
  t = xtc_find_loc_1_0(y_32, t);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm o_2 (ATerm), ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_21 = t;
      if((PushChoice() == 0))
        {
          ATerm f_3 = NULL,m_3 = NULL,n_3 = NULL;
          f_3 = t;
          if(match_cons(t, sym_XtcQuery_1))
            {
              m_3 = ATgetArgument(t, 0);
              {
                ATerm h_0 = NULL,z_1 = NULL;
                t = SSLgetAnnotations(f_3);
                h_0 = t;
                t = (ATerm) ATmakeAppl(sym_XtcQuery_1, m_3);
                z_1 = t;
                t = SSLsetAnnotations(z_1, h_0);
              }
            }
          else
            {
              ATerm e_3 = NULL,p_2 = NULL;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  m_3 = ATgetArgument(t, 0);
                  n_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_3);
              e_3 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, m_3, n_3);
              p_2 = t;
              t = SSLsetAnnotations(p_2, e_3);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_21;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(o_2, t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,q_2 = NULL;
            k_4 = t;
            if(match_cons(t, sym_XtcQuery_1))
              {
                j_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_4);
            i_4 = t;
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, j_4);
            q_2 = t;
            t = SSLsetAnnotations(q_2, i_4);
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,s_2 = NULL;
              p_4 = t;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  n_4 = ATgetArgument(t, 0);
                  o_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_4);
              l_4 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, n_4, o_4);
              s_2 = t;
              t = SSLsetAnnotations(s_2, l_4);
            }
          }
      }
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(o_2, t);
            t = Snd_0_0(t);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm q_4 = NULL;
              q_4 = t;
              t = xtc_import_0_0(t);
              t = q_4;
              t = xtc_find_reg_1_0(o_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm xtc_find_reg_0_0 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm n_2 (ATerm), ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_22 = t;
      if((PushChoice() == 0))
        {
          ATerm t_8 = NULL,f_10 = NULL,g_10 = NULL;
          t_8 = t;
          if(match_cons(t, sym_XtcQuery_1))
            {
              f_10 = ATgetArgument(t, 0);
              {
                ATerm m_4 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(t_8);
                m_4 = t;
                t = (ATerm) ATmakeAppl(sym_XtcQuery_1, f_10);
                z_2 = t;
                t = SSLsetAnnotations(z_2, m_4);
              }
            }
          else
            {
              ATerm c_6 = NULL,b_3 = NULL;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  f_10 = ATgetArgument(t, 0);
                  g_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_8);
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, f_10, g_10);
              b_3 = t;
              t = SSLsetAnnotations(b_3, c_6);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_22;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(n_2, t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm e_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 = NULL,p_10 = NULL,s_10 = NULL,c_3 = NULL;
            s_10 = t;
            if(match_cons(t, sym_XtcQuery_1))
              {
                p_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_10);
            m_10 = t;
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, p_10);
            c_3 = t;
            t = SSLsetAnnotations(c_3, m_10);
            LocalPopChoice(q_22);
          }
        else
          {
            t = e_22;
            {
              ATerm u_10 = NULL,d_11 = NULL,f_11 = NULL,u_12 = NULL,d_3 = NULL;
              u_12 = t;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  d_11 = ATgetArgument(t, 0);
                  f_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_12);
              u_10 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, d_11, f_11);
              d_3 = t;
              t = SSLsetAnnotations(d_3, u_10);
            }
          }
      }
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(n_2, t);
            t = Snd_0_0(t);
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm t_13 = NULL;
              t_13 = t;
              t = xtc_import_local_0_0(t);
              t = t_13;
              t = xtc_find_reg_local_1_0(n_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm xtc_find_reg_local_0_0 (ATerm t)
{
  t = xtc_find_reg_local_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_loc_1_0 (ATerm t_32 (ATerm), ATerm t)
{
  t = xtc_find_reg_1_0(t_32, t);
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_path_1_0 (ATerm s_32 (ATerm), ATerm t)
{
  t = xtc_find_loc_1_0(s_32, t);
  t = dirname_0_0(t);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_path_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_file_0_0 (ATerm t)
{
  ATerm q_16 = NULL;
  t = xtc_find_loc_1_0(Hd_0_0, t);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_16);
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm r_32 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = r_32(t);
  t = print_to_0_0(t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm q_32 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  t = read_from_0_0(t);
  t = q_32(t);
  j_17 = t;
  t = xtc_new_file_0_0(t);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_17, j_17);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_17);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm o_32 (ATerm), ATerm p_32 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  t = xtc_new_file_0_0(t);
  a_18 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL;
        t = z_17;
        {
          ATerm w_22 = t;
          int x_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_18 = NULL,k_6 = NULL,y_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  h_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_17);
              k_6 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_18);
              y_6 = t;
              t = SSLsetAnnotations(y_6, k_6);
              LocalPopChoice(x_22);
            }
          else
            {
              t = w_22;
              t = stdin_0_0(t);
            }
        }
        t = p_32(t);
        b_18 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, z_17), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, a_18)), term_y_22, b_18);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm j_18 = NULL;
          t = z_17;
          t = None_0_0(t);
          t = p_32(t);
          j_18 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_y_22, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, a_18)), term_y_22, j_18);
        }
      }
  }
  t = xtc_command_1_0(o_32, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_18);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_file_1_0 (ATerm n_32 (ATerm), ATerm t)
{
  t = xtc_transform_file_2_0(n_32, a_0, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_32 (ATerm), ATerm m_32 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL;
  h_19 = t;
  t = xtc_new_file_0_0(t);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_19, h_19);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_19);
  t = xtc_transform_file_2_0(l_32, m_32, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_term_1_0 (ATerm k_32 (ATerm), ATerm t)
{
  t = xtc_transform_term_2_0(k_32, b_0, t);
  return(t);
}
ATerm xtc_generate_2_0 (ATerm i_32 (ATerm), ATerm j_32 (ATerm), ATerm t)
{
  t = term_y_22;
  t = xtc_transform_file_2_0(i_32, j_32, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_generate_1_0 (ATerm h_32 (ATerm), ATerm t)
{
  t = xtc_generate_2_0(h_32, m_0, t);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm f_32 (ATerm), ATerm g_32 (ATerm), ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = NULL,n_6 = NULL,o_6 = NULL;
      i_20 = t;
      t = term_b_23;
      n_6 = t;
      t = term_d_23;
      o_6 = t;
      t = i_20;
      t = log_0_3(o_6, n_6, i_20, t);
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_21 = NULL,b_21 = NULL,v_6 = NULL,d_7 = NULL;
            a_21 = t;
            if(match_cons(t, sym_FILE_1))
              {
                b_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_21);
            v_6 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_21);
            d_7 = t;
            t = SSLsetAnnotations(d_7, v_6);
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = stdin_0_0(t);
          }
      }
      LocalPopChoice(a_23);
      t = xtc_transform_file_2_0(f_32, g_32, t);
    }
  else
    {
      t = z_22;
      t = xtc_transform_term_2_0(f_32, g_32, t);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm e_32 (ATerm), ATerm t)
{
  t = xtc_transform_2_0(e_32, p_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,i_7 = NULL;
  l_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_8);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_8);
  i_7 = t;
  t = SSLsetAnnotations(i_7, j_8);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,l_7 = NULL;
  o_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_8);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_8);
  l_7 = t;
  t = SSLsetAnnotations(l_7, m_8);
  return(t);
}
ATerm xtc_command_1_0 (ATerm m_2 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL,s_33 = NULL,q_7 = NULL,r_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL,d_8 = NULL,n_7 = NULL;
      i_33 = t;
      if(match_cons(t, sym_XtcConf_4))
        {
          l_33 = ATgetArgument(t, 0);
          n_33 = ATgetArgument(t, 1);
          o_33 = ATgetArgument(t, 2);
          s_33 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_33);
      r_7 = t;
      t = l_33;
      t = option_1_0(xtc_ensure_file_0_0, t);
      x_7 = t;
      t = n_33;
      t = option_1_0(s_0, t);
      y_7 = t;
      t = o_33;
      t = option_1_0(r_2, t);
      z_7 = t;
      t = s_33;
      t = is_list_0_0(t);
      b_8 = t;
      t = (ATerm) ATmakeAppl(sym_XtcConf_4, x_7, y_7, z_7, b_8);
      n_7 = t;
      t = SSLsetAnnotations(n_7, r_7);
      d_8 = t;
      t = m_2(t);
      q_7 = t;
      t = d_8;
      t = xtc_dispatch_0_1(q_7, t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm u_33 = NULL,v_33 = NULL;
        t = is_list_0_0(t);
        u_33 = t;
        t = m_2(t);
        t = xtc_find_loc_1_0(Hd_0_0, t);
        t = file_exists_0_0(t);
        v_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_33, u_33);
        t = call_0_0(t);
      }
    }
  return(t);
}
ATerm xtc_input_1_0 (ATerm b_32 (ATerm), ATerm t)
{
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL;
        t = term_r_23;
        t = get_config_0_0(t);
        x_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_33);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = term_s_23;
      }
    t = b_32(t);
    return(t);
  }
  t = xtc_temp_files_1_0(t_2, t);
  return(t);
}
ATerm xtc_output_1_0 (ATerm a_32 (ATerm), ATerm t)
{
  static ATerm u_2 (ATerm t);
  static ATerm u_2 (ATerm t)
  {
    t = a_32(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_2, t);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_t_23;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm z_31 (ATerm), ATerm t)
{
  static ATerm v_2 (ATerm t);
  static ATerm v_2 (ATerm t)
  {
    ATerm u_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL;
        t = term_r_23;
        t = get_config_0_0(t);
        y_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_33);
        LocalPopChoice(z_23);
      }
    else
      {
        t = u_23;
        t = term_s_23;
      }
    t = z_31(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = a_34;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_io_wrap_2_1 (ATerm x_31 (ATerm), ATerm y_31 (ATerm), ATerm y_23, ATerm t)
{
  static ATerm w_2 (ATerm t);
  static ATerm x_2 (ATerm t);
  static ATerm w_2 (ATerm t)
  {
    ATerm i_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_31(t);
        LocalPopChoice(a_31);
      }
    else
      {
        t = i_30;
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              {
                ATerm e_31 = t;
                int v_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_32 = t;
                    int x_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_2, a_3, g_3, t);
                        LocalPopChoice(x_32);
                      }
                    else
                      {
                        t = w_32;
                        t = xtc_enforce_option_0_0(t);
                      }
                    LocalPopChoice(v_32);
                  }
                else
                  {
                    t = e_31;
                    t = xtc_dependency_options_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm x_2 (ATerm t)
  {
    static ATerm h_3 (ATerm t);
    static ATerm h_3 (ATerm t)
    {
      ATerm z_32 = t;
      int d_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_34 = NULL;
          t = term_r_23;
          t = get_config_0_0(t);
          b_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_34);
          LocalPopChoice(d_33);
        }
      else
        {
          t = z_32;
          t = term_s_23;
        }
      t = y_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, y_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, y_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = xtc_temp_files_1_0(h_3, t);
    return(t);
  }
  t = option_wrap_2_0(w_2, x_2, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = e_34;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_io_wrap_3_0 (ATerm u_31 (ATerm), ATerm v_31 (ATerm), ATerm w_31 (ATerm), ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL;
  static ATerm i_3 (ATerm t);
  static ATerm j_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    ATerm f_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_31(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = f_33;
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              {
                ATerm m_33 = t;
                int p_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_33 = t;
                    int r_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(k_3, l_3, o_3, t);
                        LocalPopChoice(r_33);
                      }
                    else
                      {
                        t = q_33;
                        t = xtc_enforce_option_0_0(t);
                      }
                    LocalPopChoice(p_33);
                  }
                else
                  {
                    t = m_33;
                    t = xtc_dependency_options_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm j_3 (ATerm t)
  {
    static ATerm p_3 (ATerm t);
    static ATerm p_3 (ATerm t)
    {
      ATerm t_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_34 = NULL;
          t = term_r_23;
          t = get_config_0_0(t);
          f_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_34);
          LocalPopChoice(w_33);
        }
      else
        {
          t = t_33;
          t = term_s_23;
        }
      t = w_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, not_null(d_34));
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, not_null(d_34));
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = xtc_temp_files_1_0(p_3, t);
    return(t);
  }
  c_34 = t;
  t = v_31(t);
  if(((d_34 != NULL) && (d_34 != t)))
    _fail(t);
  else
    d_34 = t;
  t = c_34;
  t = option_wrap_2_0(i_3, j_3, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = g_34;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm r_31 (ATerm), ATerm t_31 (ATerm), ATerm t)
{
  static ATerm r_4 (ATerm t);
  static ATerm s_4 (ATerm t);
  static ATerm r_4 (ATerm t)
  {
    ATerm z_33 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_31(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = z_33;
        {
          ATerm r_34 = t;
          int u_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(u_34);
            }
          else
            {
              t = r_34;
              {
                ATerm v_34 = t;
                int b_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Option_3_0(d_5, f_5, i_5, t);
                    LocalPopChoice(b_35);
                  }
                else
                  {
                    t = v_34;
                    t = xtc_enforce_option_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm s_4 (ATerm t)
  {
    static ATerm l_5 (ATerm t);
    static ATerm l_5 (ATerm t)
    {
      ATerm d_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_34 = NULL;
          t = term_r_23;
          t = get_config_0_0(t);
          h_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, h_34);
          LocalPopChoice(j_35);
        }
      else
        {
          t = d_35;
          t = term_s_23;
        }
      t = t_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(l_5, t);
    return(t);
  }
  t = option_wrap_2_0(r_4, s_4, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      {
        ATerm m_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_6, b_6, d_6, t);
                LocalPopChoice(r_35);
              }
            else
              {
                t = p_35;
                t = xtc_enforce_option_0_0(t);
              }
            LocalPopChoice(n_35);
          }
        else
          {
            t = m_35;
            t = xtc_dependency_options_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = j_34;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_io_wrap_1_1 (ATerm q_31 (ATerm), ATerm x_23, ATerm t)
{
  static ATerm r_5 (ATerm t);
  static ATerm r_5 (ATerm t)
  {
    static ATerm e_6 (ATerm t);
    static ATerm e_6 (ATerm t)
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_34 = NULL;
          t = term_r_23;
          t = get_config_0_0(t);
          k_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          t = term_s_23;
        }
      t = q_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, x_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, x_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = xtc_temp_files_1_0(e_6, t);
    return(t);
  }
  t = option_wrap_2_0(p_5, r_5, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm u_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      LocalPopChoice(x_35);
    }
  else
    {
      t = u_35;
      {
        ATerm y_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(h_6, i_6, j_6, t);
            LocalPopChoice(z_35);
          }
        else
          {
            t = y_35;
            t = xtc_enforce_option_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = l_34;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm p_31 (ATerm), ATerm t)
{
  static ATerm g_6 (ATerm t);
  static ATerm g_6 (ATerm t)
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_34 = NULL;
          t = term_r_23;
          t = get_config_0_0(t);
          m_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_34);
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          t = term_s_23;
        }
      t = p_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(l_6, t);
    return(t);
  }
  t = option_wrap_2_0(f_6, g_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = n_34;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm n_31 (ATerm), ATerm o_31 (ATerm), ATerm t)
{
  static ATerm m_6 (ATerm t);
  static ATerm p_6 (ATerm t);
  static ATerm m_6 (ATerm t)
  {
    ATerm g_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_31(t);
        LocalPopChoice(j_36);
      }
    else
      {
        t = g_36;
        {
          ATerm k_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(n_36);
            }
          else
            {
              t = k_36;
              {
                ATerm p_36 = t;
                int t_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Option_3_0(q_6, r_6, s_6, t);
                    LocalPopChoice(t_36);
                  }
                else
                  {
                    t = p_36;
                    t = xtc_enforce_option_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm p_6 (ATerm t)
  {
    static ATerm t_6 (ATerm t);
    static ATerm t_6 (ATerm t)
    {
      ATerm v_36 = t;
      int x_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_34 = NULL;
          t = term_r_23;
          t = get_config_0_0(t);
          o_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_34);
          LocalPopChoice(x_36);
        }
      else
        {
          t = v_36;
          t = term_s_23;
        }
      t = o_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(t_6, t);
    return(t);
  }
  t = option_wrap_2_0(m_6, p_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        ATerm a_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(x_6, z_6, c_7, t);
            LocalPopChoice(c_37);
          }
        else
          {
            t = a_37;
            t = xtc_enforce_option_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = p_34;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_iowrap_1_0 (ATerm m_31 (ATerm), ATerm t)
{
  static ATerm w_6 (ATerm t);
  static ATerm w_6 (ATerm t)
  {
    static ATerm e_7 (ATerm t);
    static ATerm e_7 (ATerm t)
    {
      ATerm e_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_34 = NULL;
          t = term_r_23;
          t = get_config_0_0(t);
          q_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_34);
          LocalPopChoice(h_37);
        }
      else
        {
          t = e_37;
          t = term_s_23;
        }
      t = m_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(e_7, t);
    return(t);
  }
  t = option_wrap_2_0(u_6, w_6, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = s_34;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_wrap_2_1 (ATerm k_31 (ATerm), ATerm l_31 (ATerm), ATerm w_23, ATerm t)
{
  static ATerm f_7 (ATerm t);
  static ATerm g_7 (ATerm t);
  static ATerm f_7 (ATerm t)
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_31(t);
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        {
          ATerm k_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_37 = t;
              int n_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_7, j_7, k_7, t);
                  LocalPopChoice(n_37);
                }
              else
                {
                  t = m_37;
                  t = xtc_enforce_option_0_0(t);
                }
              LocalPopChoice(l_37);
            }
          else
            {
              t = k_37;
              t = xtc_dependency_options_0_0(t);
            }
        }
      }
    return(t);
  }
  static ATerm g_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, w_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = l_31(t);
    return(t);
  }
  t = option_wrap_2_0(f_7, g_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = t_34;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm i_31 (ATerm), ATerm j_31 (ATerm), ATerm t)
{
  static ATerm m_7 (ATerm t);
  static ATerm m_7 (ATerm t)
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_31(t);
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        {
          ATerm q_37 = t;
          int s_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Option_3_0(s_7, t_7, u_7, t);
              LocalPopChoice(s_37);
            }
          else
            {
              t = q_37;
              t = xtc_enforce_option_0_0(t);
            }
        }
      }
    return(t);
  }
  t = option_wrap_2_0(m_7, j_31, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm t_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Option_3_0(a_8, g_8, p_8, t);
          LocalPopChoice(b_38);
        }
      else
        {
          t = x_37;
          t = xtc_enforce_option_0_0(t);
        }
      LocalPopChoice(v_37);
    }
  else
    {
      t = t_37;
      t = xtc_dependency_options_0_0(t);
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = w_34;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_wrap_1_1 (ATerm h_31 (ATerm), ATerm v_23, ATerm t)
{
  static ATerm w_7 (ATerm t);
  static ATerm w_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_33, v_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = h_31(t);
    return(t);
  }
  t = option_wrap_2_0(v_7, w_7, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm d_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_8, s_8, u_8, t);
      LocalPopChoice(g_38);
    }
  else
    {
      t = d_38;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = x_34;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_wrap_1_0 (ATerm g_31 (ATerm), ATerm t)
{
  t = option_wrap_2_0(q_8, g_31, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm i_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_38;
      t = get_config_0_0(t);
      LocalPopChoice(l_38);
    }
  else
    {
      t = i_38;
      t = term_o_38;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm c_35 = NULL;
  c_35 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_8 = NULL;
      t = term_n_38;
      {
        ATerm p_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(v_38);
          }
        else
          {
            t = p_38;
            t = term_o_38;
          }
      }
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_23, x_8);
      t = copy_file_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_35;
      t = copy_to_1_0(v_8, t);
    }
  return(t);
}
ATerm xtc_pass_verbose_0_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_y_38;
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = term_d_39;
      }
  }
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_35, term_d_39);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  f_35 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_y_38, f_35));
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  t = get_config_0_0(t);
  t = h_35;
  return(t);
}
ATerm xtc_pass_options_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_39), term_a_24), term_e_39);
  t = filter_1_0(w_8, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-preload", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  t = term_h_39;
  t = set_config_0_0(t);
  t = term_j_39;
  t = set_config_0_0(t);
  t = o_35;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dependencies", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  t = term_t_39;
  t = set_config_0_0(t);
  t = q_35;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm xtc_dependency_options_0_0 (ATerm t)
{
  ATerm y_39 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_8, z_8, a_9, t);
      LocalPopChoice(i_40);
    }
  else
    {
      t = y_39;
      t = Option_3_0(b_9, d_9, e_9, t);
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm j_40 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_40;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_m_40;
  return(t);
}
ATerm xtc_preload_0_0 (ATerm t)
{
  ATerm v_35 = NULL;
  ATerm n_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_35 = NULL;
      w_35 = t;
      t = term_e_33;
      t = get_config_0_0(t);
      {
        ATerm u_40 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_40;
          }
      }
      v_35 = t;
      t = w_35;
      LocalPopChoice(t_40);
      t = v_35;
      t = filter_1_0(f_9, t);
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_36 = NULL;
            b_36 = t;
            t = Nil_0_0(t);
            t = b_36;
            LocalPopChoice(w_40);
            {
              ATerm y_40 = t;
              int b_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_36 = NULL;
                  c_36 = t;
                  t = term_p_39;
                  t = get_config_0_0(t);
                  t = c_36;
                  LocalPopChoice(b_41);
                  t = term_c_41;
                  t = echo_0_0(t);
                  t = term_t_23;
                  t = exit_0_0(t);
                }
              else
                {
                  t = y_40;
                }
            }
          }
        else
          {
            t = v_40;
            t = debug_1_0(g_9, t);
            t = term_d_39;
            t = exit_0_0(t);
          }
      }
    }
  else
    {
      t = n_40;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_36 = NULL;
  if(match_cons(t, sym_URL_1))
    {
      h_36 = ATgetArgument(t, 0);
      {
        ATerm i_36 = NULL;
        t = h_36;
        t = is_url_http_0_0(t);
        i_36 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_f_41), i_36);
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_s_23;
          t = ReadFromFile_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              h_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_36;
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
        }
    }
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  {
    ATerm g_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL;
        t = term_k_41;
        m_36 = t;
        t = l_36;
        t = string_starts_with_0_1(m_36, t);
        LocalPopChoice(i_41);
      }
    else
      {
        t = g_41;
        {
          ATerm o_36 = NULL;
          t = term_m_41;
          o_36 = t;
          t = l_36;
          t = string_starts_with_0_1(o_36, t);
        }
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm l_2 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  f_37 = t;
  if(match_cons(t, sym_URL_1))
    {
      g_37 = ATgetArgument(t, 0);
      {
        ATerm n_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_URL_1, g_37);
            t = read_from_0_0(t);
            t = rename_to_1_0(l_2, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, g_37);
            LocalPopChoice(p_41);
          }
        else
          {
            t = n_41;
            t = f_37;
            t = l_2(t);
            if((g_37 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_URL_1, g_37);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          g_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL;
            t = f_37;
            t = l_2(t);
            c_9 = t;
            {
              ATerm u_41 = t;
              int v_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  LocalPopChoice(v_41);
                }
              else
                {
                  t = u_41;
                  t = stderr_0_0(t);
                }
            }
            t = (ATerm) ATmakeAppl(sym__2, g_37, c_9);
            t = copy_file_0_0(t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, g_37);
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            {
              ATerm w_41 = t;
              int y_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_9 = NULL;
                  t = f_37;
                  t = l_2(t);
                  i_9 = t;
                  {
                    ATerm z_41 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm b_42 = t;
                        int c_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0_0(t);
                            LocalPopChoice(c_42);
                          }
                        else
                          {
                            t = b_42;
                            {
                              ATerm d_42 = t;
                              int e_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = stderr_0_0(t);
                                  LocalPopChoice(e_42);
                                }
                              else
                                {
                                  t = d_42;
                                  {
                                    ATerm j_9 = NULL;
                                    j_9 = t;
                                    if((g_37 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = j_9;
                                  }
                                }
                            }
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = z_41;
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, g_37, i_9);
                  t = copy_file_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_FILE_1, g_37);
                  LocalPopChoice(y_41);
                }
              else
                {
                  t = w_41;
                  t = f_37;
                  t = l_2(t);
                  if((g_37 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, g_37);
                }
            }
          }
      }
    }
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_URL_1))
          {
            ATerm j_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_42);
        t = u_37;
        t = read_from_0_0(t);
      }
    else
      {
        t = g_42;
        if(match_cons(t, sym_stdin_0))
          {
            ATerm w_37 = NULL;
            t = term_b_24;
            t = xtc_new_file_0_0(t);
            w_37 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_s_23, w_37);
            t = copy_file_0_0(t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, w_37);
          }
        else
          {
            if(match_cons(t, sym_FILE_1))
              {
                ATerm m_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_37;
          }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm k_2 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_38;
        t = k_2(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_38, term_o_38);
        t = copy_file_0_0(t);
        t = k_38;
        t = remove_file_0_0(t);
        t = term_o_38;
        LocalPopChoice(o_42);
      }
    else
      {
        t = n_42;
        {
          ATerm p_42 = t;
          int q_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_9 = NULL;
              t = j_38;
              t = k_2(t);
              u_9 = t;
              {
                ATerm s_42 = t;
                if((PushChoice() == 0))
                  {
                    ATerm t_42 = t;
                    int v_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0_0(t);
                        LocalPopChoice(v_42);
                      }
                    else
                      {
                        t = t_42;
                        {
                          ATerm v_9 = NULL;
                          v_9 = t;
                          if((k_38 != t))
                            {
                              _fail(t);
                            }
                          t = v_9;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_42;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_38, u_9);
              t = rename_file_0_0(t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_9);
              LocalPopChoice(q_42);
            }
          else
            {
              t = p_42;
              t = j_38;
              t = k_2(t);
              if((k_38 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_38);
            }
        }
      }
  }
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  r_38 = t;
  t = xtc_new_file_0_0(t);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_38, r_38);
  t = WriteToTextFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_38);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  t_38 = t;
  t = xtc_new_file_0_0(t);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_38);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm w_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_38 = NULL;
      u_38 = t;
      {
        ATerm z_42 = t;
        int b_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_38 = NULL;
            t = term_b_24;
            t = STDIN__FILENO_0_0(t);
            x_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_38, x_38);
            t = eq_0_0(t);
            t = u_38;
            LocalPopChoice(b_43);
          }
        else
          {
            t = z_42;
            {
              ATerm c_43 = t;
              int e_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_38 = NULL;
                  t = term_b_24;
                  t = STDOUT__FILENO_0_0(t);
                  z_38 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_38, z_38);
                  t = eq_0_0(t);
                  t = u_38;
                  LocalPopChoice(e_43);
                }
              else
                {
                  t = c_43;
                  {
                    ATerm c_39 = NULL;
                    t = term_b_24;
                    t = STDERR__FILENO_0_0(t);
                    c_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_38, c_39);
                    t = eq_0_0(t);
                    t = u_38;
                  }
                }
            }
          }
      }
      LocalPopChoice(y_42);
    }
  else
    {
      t = w_42;
      t = close_0_0(t);
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  t = finally_2_0(h_9, k_9, t);
  return(t);
}
ATerm xtc_open_fd_0_0 (ATerm t)
{
  ATerm f_39 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      f_39 = ATgetArgument(t, 0);
      t = f_39;
      t = open_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_b_24;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_b_24;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_b_24;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm i_39 = NULL;
  t = new_file_0_0(t);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_39, term_b_24);
  t = assert_1_0(l_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_39);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm x_30 (ATerm), ATerm t)
{
  ATerm k_39 = NULL;
  static ATerm m_9 (ATerm t);
  static ATerm m_9 (ATerm t)
  {
    ATerm l_39 = NULL;
    l_39 = t;
    {
      static ATerm n_9 (ATerm t);
      static ATerm n_9 (ATerm t)
      {
        t = not_null(k_39);
        t = xtc_close_fd_0_0(t);
        return(t);
      }
      t = try_1_0(n_9, t);
    }
    t = l_39;
    return(t);
  }
  t = xtc_open_fd_0_0(t);
  if(((k_39 != NULL) && (k_39 != t)))
    _fail(t);
  else
    k_39 = t;
  t = finally_2_0(x_30, m_9, t);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,q_39 = NULL;
  o_39 = t;
  t = xtc_new_file_name_0_0(t);
  n_39 = t;
  t = xtc_open_fd_0_0(t);
  q_39 = t;
  t = o_39;
  {
    static ATerm o_9 (ATerm t);
    static ATerm o_9 (ATerm t)
    {
      static ATerm p_9 (ATerm t);
      static ATerm p_9 (ATerm t)
      {
        ATerm r_39 = NULL;
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_39, q_39);
        t = fdcopy_0_0(t);
        return(t);
      }
      t = File_as_fd_1_0(p_9, t);
      return(t);
    }
    t = map_1_0(o_9, t);
  }
  t = q_39;
  t = xtc_close_fd_0_0(t);
  t = n_39;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm u_39 = NULL;
  static ATerm q_9 (ATerm t);
  static ATerm q_9 (ATerm t)
  {
    ATerm a_40 = NULL;
    a_40 = t;
    t = term_m_44;
    t = table_get_0_0(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_39 != NULL) && (u_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_39 = ATgetFirst((ATermList) t);
        {
          ATerm n_44 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_39;
    t = map_1_0(r_9, t);
    t = a_40;
    t = end_scope_1_0(s_9, t);
    return(t);
  }
  t = repeat_1_0(q_9, t);
  t = exit_0_0(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_30 (ATerm), ATerm t)
{
  ATerm b_40 = NULL;
  static ATerm w_9 (ATerm t);
  static ATerm w_9 (ATerm t)
  {
    ATerm d_40 = NULL;
    d_40 = t;
    {
      ATerm o_44 = t;
      int r_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_m_44;
          t = table_get_0_0(t);
          LocalPopChoice(r_44);
        }
      else
        {
          t = o_44;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_40 != NULL) && (b_40 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_40 = ATgetFirst((ATermList) t);
        {
          ATerm t_44 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_40;
    t = map_1_0(x_9, t);
    t = d_40;
    t = end_scope_1_0(y_9, t);
    return(t);
  }
  t = begin_scope_1_0(t_9, t);
  t = restore_always_2_0(w_30, w_9, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm xtc_new_temp_file_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      {
        ATerm u_44 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_40, term_b_24);
  t = assert_1_0(z_9, t);
  t = f_40;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_40, term_b_24);
  t = assert_1_0(a_10, t);
  t = g_40;
  t = close_0_0(t);
  t = h_40;
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm q_40 = NULL,s_40 = NULL;
  q_40 = t;
  t = xtc_new_file_0_0(t);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_40, term_v_44);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, s_40, q_40);
  t = print_0_0(t);
  t = s_40;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_40);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = a_41;
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm v_30 (ATerm), ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_40 = NULL;
      x_40 = t;
      t = term_a_24;
      t = get_config_0_0(t);
      t = x_40;
      LocalPopChoice(x_44);
      {
        ATerm z_40 = NULL;
        z_40 = t;
        t = term_a_24;
        t = rm_config_0_0(t);
        t = z_40;
        t = restore_always_2_0(v_30, b_10, t);
      }
    }
  else
    {
      t = w_44;
      t = v_30(t);
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm j_2 (ATerm), ATerm t)
{
  ATerm z_44 = NULL,c_45 = NULL,f_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,m_45 = NULL;
  f_45 = t;
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_45;
  {
    ATerm y_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__3))
          {
            ATerm e_45 = ATgetArgument(t, 0);
            ATerm h_45 = ATgetArgument(t, 1);
            k_45 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(a_45);
        {
          ATerm d_10 = NULL,h_10 = NULL;
          t = m_45;
          if(match_cons(t, sym_XtcContract_3))
            {
              ATerm l_45 = ATgetArgument(t, 0);
              z_44 = ATgetArgument(t, 1);
              c_45 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = f_45;
          t = Fst_0_0(t);
          t = j_2(t);
          d_10 = t;
          t = c_45;
          {
            ATerm o_45 = t;
            int r_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_10 = NULL;
                if(match_cons(t, sym_Some_1))
                  {
                    k_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_10;
                LocalPopChoice(r_45);
              }
            else
              {
                t = o_45;
                t = (ATerm) ATempty;
              }
          }
          {
            ATerm s_45 = t;
            int t_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_10 = NULL;
                if(match_cons(t, sym_Arguments_1))
                  {
                    o_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_10;
                LocalPopChoice(t_45);
              }
            else
              {
                t = s_45;
                t = Nil_0_0(t);
              }
          }
          h_10 = t;
          {
            ATerm u_45 = t;
            int w_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_10 = NULL;
                static ATerm c_10 (ATerm t);
                static ATerm c_10 (ATerm t)
                {
                  t = xtc_dispatch_0_1(z_44, t);
                  return(t);
                }
                t = xtc_new_file_0_0(t);
                r_10 = t;
                t = (ATerm) ATmakeAppl(sym_XtcConf_4, d_10, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, r_10)), k_45, h_10);
                t = xtc_cc_disable_1_0(c_10, t);
                LocalPopChoice(w_45);
              }
            else
              {
                t = u_45;
                t = xtc_enforce_contract_0_0(t);
              }
          }
        }
      }
    else
      {
        t = y_44;
        if(match_cons(t, sym_XtcConf_4))
          {
            i_45 = ATgetArgument(t, 0);
            j_45 = ATgetArgument(t, 1);
            k_45 = ATgetArgument(t, 2);
            {
              ATerm y_45 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        t = f_45;
        {
          ATerm e_46 = t;
          int f_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_45;
              t = xtc_fetch_contracts_1_0(j_2, t);
              LocalPopChoice(f_46);
              {
                static ATerm e_10 (ATerm t);
                static ATerm e_10 (ATerm t)
                {
                  ATerm l_11 = NULL;
                  l_11 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, i_45, j_45, k_45), l_11);
                  t = xtc_cc_1_0(j_2, t);
                  return(t);
                }
                t = map_1_0(e_10, t);
              }
            }
          else
            {
              t = e_46;
            }
        }
        t = f_45;
      }
  }
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm s_30 (ATerm), ATerm t)
{
  ATerm p_45 = NULL;
  ATerm g_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_45 = NULL,v_45 = NULL,t_11 = NULL,u_11 = NULL;
      q_45 = t;
      t = term_a_24;
      t = get_config_0_0(t);
      v_45 = t;
      t = term_j_46;
      t_11 = t;
      t = term_l_46;
      u_11 = t;
      t = v_45;
      t = log_0_3(u_11, t_11, v_45, t);
      t = q_45;
      LocalPopChoice(i_46);
      {
        ATerm x_45 = NULL,z_45 = NULL,b_12 = NULL,c_12 = NULL,x_11 = NULL,y_11 = NULL;
        z_45 = t;
        t = term_n_46;
        x_11 = t;
        t = term_d_23;
        y_11 = t;
        t = z_45;
        t = log_0_3(y_11, x_11, z_45, t);
        t = xtc_cc_1_0(Fst_0_0, t);
        x_45 = t;
        t = s_30(t);
        p_45 = t;
        t = x_45;
        t = xtc_cc_1_0(Snd_0_0, t);
        t = term_q_46;
        b_12 = t;
        t = term_d_23;
        c_12 = t;
        t = p_45;
        t = log_0_3(c_12, b_12, p_45, t);
      }
    }
  else
    {
      t = g_46;
      t = s_30(t);
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  t = term_s_46;
  t = set_config_0_0(t);
  t = term_g_30;
  t = set_config_0_0(t);
  t = a_46;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_u_46;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(i_10, j_10, l_10, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = b_46;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(n_10, q_10, t_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm d_46 = NULL;
  d_46 = t;
  t = term_g_30;
  t = set_config_0_0(t);
  t = d_46;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm v_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_10, w_10, x_10, t);
      LocalPopChoice(x_46);
    }
  else
    {
      t = v_46;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm a_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_46 = NULL;
      h_46 = t;
      t = term_g_39;
      t = get_config_0_0(t);
      t = h_46;
      LocalPopChoice(i_47);
      {
        ATerm k_46 = NULL,f_12 = NULL,g_12 = NULL;
        k_46 = t;
        t = term_m_47;
        f_12 = t;
        t = term_p_47;
        g_12 = t;
        t = k_46;
        t = log_0_3(g_12, f_12, k_46, t);
        _fail(t);
      }
    }
  else
    {
      t = a_47;
      {
        ATerm o_46 = NULL,j_12 = NULL,k_12 = NULL;
        o_46 = t;
        t = term_r_47;
        j_12 = t;
        t = term_u_47;
        k_12 = t;
        t = o_46;
        t = log_0_3(k_12, j_12, o_46, t);
      }
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm p_46 = NULL,r_46 = NULL,n_12 = NULL,o_12 = NULL;
  p_46 = t;
  t = term_a_24;
  t = get_config_0_0(t);
  r_46 = t;
  t = term_j_46;
  n_12 = t;
  t = term_l_46;
  o_12 = t;
  t = r_46;
  t = log_0_3(o_12, n_12, r_46, t);
  t = p_46;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm r_30 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,r_12 = NULL,s_12 = NULL;
  d_47 = t;
  t = term_w_47;
  c_47 = t;
  t = d_47;
  t = xtc_fetch_meta_0_1(c_47, t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      b_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_47;
  {
    static ATerm y_10 (ATerm t);
    static ATerm y_10 (ATerm t)
    {
      ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,k_47 = NULL,l_47 = NULL,o_47 = NULL,b_15 = NULL;
      o_47 = t;
      if(match_cons(t, sym_XtcContract_3))
        {
          g_47 = ATgetArgument(t, 0);
          h_47 = ATgetArgument(t, 1);
          k_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_47);
      f_47 = t;
      t = term_b_48;
      t = r_30(t);
      l_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_47, l_47);
      t = eq_0_0(t);
      t = (ATerm) ATmakeAppl(sym_XtcContract_3, g_47, h_47, k_47);
      b_15 = t;
      t = SSLsetAnnotations(b_15, f_47);
      return(t);
    }
    t = filter_1_0(y_10, t);
  }
  y_46 = t;
  t = term_w_47;
  r_12 = t;
  t = term_d_23;
  s_12 = t;
  t = y_46;
  t = log_0_3(s_12, r_12, y_46, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm d_48 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_48;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  t = filter_1_0(z_10, t);
  t = Nil_0_0(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm e_48 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_48;
    }
  return(t);
}
ATerm xtc_missing_dependencies_0_0 (ATerm t)
{
  t = filter_1_0(a_11, t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm f_48 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_48;
    }
  return(t);
}
ATerm xtc_check_dependencies_0_0 (ATerm t)
{
  t = filter_1_0(b_11, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm i_2, ATerm t)
{
  ATerm x_47 = NULL;
  if(match_cons(t, sym_Error_1))
    {
      x_47 = ATgetArgument(t, 0);
      t = x_47;
      t = xtc_streamdef_to_fd_0_1(i_2, t);
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          x_47 = ATgetArgument(t, 0);
          t = x_47;
          t = xtc_streamdef_to_fd_0_1(i_2, t);
        }
      else
        {
          if(match_cons(t, sym_Input_1))
            {
              x_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_47;
          t = xtc_streamdef_to_fd_0_1(i_2, t);
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm h_2, ATerm t)
{
  ATerm f_49 = NULL,h_49 = NULL;
  f_49 = t;
  if(match_cons(t, sym_Std_1))
    {
      h_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_49;
  {
    ATerm g_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Some_1))
          {
            ATerm k_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_48);
        {
          ATerm x_12 = NULL;
          t = h_2;
          if(match_cons(t, sym_Some_1))
            {
              ATerm l_48 = ATgetArgument(t, 0);
              if(match_cons(l_48, sym_FILE_1))
                {
                  x_12 = ATgetArgument(l_48, 0);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = x_12;
          t = open_0_0(t);
        }
      }
    else
      {
        t = g_48;
        {
          ATerm g_13 = NULL;
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = h_2;
          if(match_cons(t, sym_Some_1))
            {
              ATerm m_48 = ATgetArgument(t, 0);
              if(match_cons(m_48, sym_FILE_1))
                {
                  g_13 = ATgetArgument(m_48, 0);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = g_13;
          t = open_0_0(t);
        }
      }
  }
  return(t);
}
ATerm xtc_stream_to_arg_0_1 (ATerm g_2, ATerm t)
{
  ATerm p_49 = NULL;
  if(match_cons(t, sym_Error_1))
    {
      p_49 = ATgetArgument(t, 0);
      t = p_49;
      t = xtc_streamdef_to_arg_0_1(g_2, t);
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          p_49 = ATgetArgument(t, 0);
          t = p_49;
          t = xtc_streamdef_to_arg_0_1(g_2, t);
        }
      else
        {
          if(match_cons(t, sym_Input_1))
            {
              p_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_49;
          t = xtc_streamdef_to_arg_0_1(g_2, t);
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm f_2, ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,k_50 = NULL;
  i_50 = t;
  if(match_cons(t, sym_File_1))
    {
      k_50 = ATgetArgument(t, 0);
      t = k_50;
      if(match_cons(t, sym_Some_1))
        {
          h_50 = ATgetArgument(t, 0);
          {
            ATerm m_13 = NULL;
            t = f_2;
            if(match_cons(t, sym_FILE_1))
              {
                m_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, h_50, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, m_13))));
          }
        }
      else
        {
          ATerm q_13 = NULL;
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = f_2;
          if(match_cons(t, sym_FILE_1))
            {
              q_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, q_13))));
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          k_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_50;
      if(match_cons(t, sym_Some_1))
        {
          h_50 = ATgetArgument(t, 0);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, h_50));
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      c_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_51;
  if(match_cons(t, sym_HTTP_1))
    {
      d_51 = ATgetArgument(t, 0);
      {
        ATerm z_13 = NULL;
        t = d_51;
        if(match_cons(t, sym_Streams_3))
          {
            z_13 = ATgetArgument(t, 0);
            {
              ATerm n_48 = ATgetArgument(t, 1);
            }
            {
              ATerm o_48 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_13;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_x_48;
        }
      else
        {
          ATerm i_14 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              d_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_51;
          if(match_cons(t, sym_Streams_3))
            {
              i_14 = ATgetArgument(t, 0);
              {
                ATerm y_48 = ATgetArgument(t, 1);
              }
              {
                ATerm z_48 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = i_14;
        }
    }
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm a_49 = ATgetArgument(t, 0);
      if(match_cons(a_49, sym_Exec_1))
        {
          g_51 = ATgetArgument(a_49, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = g_51;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm b_49 = ATgetArgument(t, 0);
      ATerm c_49 = ATgetArgument(t, 1);
      h_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_51;
  return(t);
}
static ATerm f_43 (ATerm w_19, ATerm t)
{
  ATerm k_51 = NULL;
  t = w_19;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm d_49 = ATgetArgument(t, 0);
      ATerm e_49 = ATgetArgument(t, 1);
      k_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_51;
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm l_51 = NULL,n_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm g_49 = ATgetArgument(t, 0);
      if(match_cons(g_49, sym_Exec_1))
        {
          l_51 = ATgetArgument(g_49, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = l_51;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm i_49 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
      {
        ATerm j_49 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_51;
  return(t);
}
static ATerm g_43 (ATerm u_19, ATerm t)
{
  ATerm o_51 = NULL;
  t = u_19;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm k_49 = ATgetArgument(t, 0);
      o_51 = ATgetArgument(t, 1);
      {
        ATerm m_49 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_51;
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm p_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm o_49 = ATgetArgument(t, 0);
      ATerm q_49 = ATgetArgument(t, 1);
      p_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_51;
  return(t);
}
static ATerm h_43 (ATerm r_19, ATerm t)
{
  t = r_19;
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm q_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm r_49 = ATgetArgument(t, 0);
      q_51 = ATgetArgument(t, 1);
      {
        ATerm s_49 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_51;
  return(t);
}
static ATerm i_43 (ATerm q_19, ATerm t)
{
  t = q_19;
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm r_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      r_51 = ATgetArgument(t, 0);
      {
        ATerm t_49 = ATgetArgument(t, 1);
      }
      {
        ATerm u_49 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = r_51;
  return(t);
}
static ATerm j_43 (ATerm p_19, ATerm t)
{
  t = p_19;
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm s_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm v_49 = ATgetArgument(t, 0);
      ATerm w_49 = ATgetArgument(t, 1);
      ATerm x_49 = ATgetArgument(t, 2);
      s_51 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_51;
  return(t);
}
static ATerm k_43 (ATerm o_19, ATerm t)
{
  t = o_19;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm z_49 = ATgetArgument(t, 0);
      ATerm a_50 = ATgetArgument(t, 1);
      ATerm b_50 = ATgetArgument(t, 2);
      if(match_cons(b_50, sym_Some_1))
        {
          t_51 = ATgetArgument(b_50, 0);
        }
      else
        _fail(t);
      {
        ATerm c_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = t_51;
  return(t);
}
static ATerm l_43 (ATerm n_19, ATerm t)
{
  t = n_19;
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      ATerm e_50 = ATgetArgument(t, 1);
      if(match_cons(e_50, sym_Some_1))
        {
          u_51 = ATgetArgument(e_50, 0);
        }
      else
        _fail(t);
      {
        ATerm f_50 = ATgetArgument(t, 2);
      }
      {
        ATerm g_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = u_51;
  return(t);
}
static ATerm m_43 (ATerm m_19, ATerm t)
{
  t = m_19;
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm j_50 = ATgetArgument(t, 0);
      if(match_cons(j_50, sym_Some_1))
        {
          v_51 = ATgetArgument(j_50, 0);
        }
      else
        _fail(t);
      {
        ATerm l_50 = ATgetArgument(t, 1);
      }
      {
        ATerm m_50 = ATgetArgument(t, 2);
      }
      {
        ATerm n_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = v_51;
  return(t);
}
static ATerm n_43 (ATerm l_19, ATerm t)
{
  t = l_19;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm i_19, ATerm t)
{
  ATerm z_51 = NULL,b_52 = NULL;
  if(match_cons(t, sym_XtcModel_2))
    {
      z_51 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_43(i_19, z_51, b_52, t);
  return(t);
}
static ATerm p_43 (ATerm i_19, ATerm k_19, ATerm j_19, ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,c_18 = NULL;
  t = i_19;
  if(match_cons(t, sym_XtcConf_4))
    {
      d_52 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
      f_52 = ATgetArgument(t, 2);
      {
        ATerm o_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  c_52 = t;
  t = j_19;
  t = xtc_template_to_args_0_2(k_19, i_19, t);
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, d_52, e_52, f_52, g_52);
  c_18 = t;
  t = SSLsetAnnotations(c_18, c_52);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  if(match_cons(t, sym__2))
    {
      e_53 = ATgetArgument(t, 0);
      f_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_43(e_53, f_53, t);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm d_2, ATerm e_2, ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
  if(match_cons(t, sym_Template_2))
    {
      x_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_52;
  if(match_cons(t, sym_Explicit_0))
    {
      t = y_52;
      if(match_cons(t, sym_Some_1))
        {
          z_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_52;
      if(match_cons(t, sym_Layout_1))
        {
          a_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_53;
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, d_2, e_2, t);
    }
  else
    {
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = y_52;
      if(match_cons(t, sym_Some_1))
        {
          z_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_52;
      if(match_cons(t, sym_Layout_1))
        {
          a_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_53;
      t = xtc_layout_to_args_1_2(c_11, d_2, e_2, t);
    }
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm g_53 = NULL,l_53 = NULL;
  if(match_cons(t, sym__2))
    {
      g_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_43(g_53, l_53, t);
  return(t);
}
static ATerm r_43 (ATerm n_234, ATerm z_18, ATerm t)
{
  static ATerm e_11 (ATerm t);
  static ATerm e_11 (ATerm t)
  {
    ATerm q_53 = NULL;
    q_53 = t;
    {
      ATerm p_50 = t;
      int q_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_53;
          if(match_cons(t, sym_TVarSpec_1))
            {
              ATerm s_50 = ATgetArgument(t, 0);
              if(!(match_cons(s_50, sym_Arguments_0)))
                _fail(t);
            }
          else
            _fail(t);
          t = z_18;
          LocalPopChoice(q_50);
        }
      else
        {
          t = p_50;
          t = (ATerm) ATinsert(ATempty, q_53);
        }
    }
    return(t);
  }
  t = n_234;
  t = mapconcat_1_0(e_11, t);
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm s_18, ATerm t_18, ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,x_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_50 = ATgetArgument(t, 0);
      if(match_cons(t_50, sym_TOr_2))
        {
          u_53 = ATgetArgument(t_50, 0);
          v_53 = ATgetArgument(t_50, 1);
        }
      else
        _fail(t);
      x_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_43(s_18, t_18, u_53, v_53, x_53, t);
  return(t);
}
static ATerm s_43 (ATerm s_18, ATerm t_18, ATerm u_18, ATerm v_18, ATerm w_18, ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL;
  t = term_u_50;
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
  d_15 = t;
  t = term_d_23;
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
  t = log_0_3(c_15, a_15, d_15, t);
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_54 = NULL,o_15 = NULL,r_15 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, u_18, w_18);
        {
          static ATerm g_11 (ATerm t);
          static ATerm g_11 (ATerm t)
          {
            ATerm x_50 = t;
            int y_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_54 = NULL,g_15 = NULL,h_15 = NULL,j_15 = NULL;
                w_54 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm z_50 = ATgetArgument(t, 0);
                    if(match_cons(z_50, sym_TOr_2))
                      {
                        g_15 = ATgetArgument(z_50, 0);
                        h_15 = ATgetArgument(z_50, 1);
                      }
                    else
                      _fail(t);
                    j_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_43(s_18, t_18, g_15, h_15, j_15, t);
                LocalPopChoice(y_50);
              }
            else
              {
                t = x_50;
                {
                  ATerm a_51 = t;
                  int e_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm h_11 (ATerm t);
                      static ATerm h_11 (ATerm t)
                      {
                        t = xtc_targ_to_args_0_2(s_18, t_18, t);
                        return(t);
                      }
                      t = _2_0(h_11, _id, t);
                      LocalPopChoice(e_51);
                    }
                  else
                    {
                      t = a_51;
                      t = xtc_targ_to_args_0_0(t);
                    }
                }
              }
            return(t);
          }
          t = thread_map_1_0(g_11, t);
        }
        m_54 = t;
        t = term_f_51;
        o_15 = t;
        t = term_d_23;
        r_15 = t;
        t = m_54;
        t = log_0_3(r_15, o_15, m_54, t);
        LocalPopChoice(w_50);
      }
    else
      {
        t = v_50;
        {
          ATerm e_55 = NULL,g_16 = NULL,h_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_18, w_18);
          {
            static ATerm i_11 (ATerm t);
            static ATerm i_11 (ATerm t)
            {
              ATerm i_51 = t;
              int j_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_55 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
                  n_55 = t;
                  if(match_cons(t, sym__2))
                    {
                      ATerm m_51 = ATgetArgument(t, 0);
                      if(match_cons(m_51, sym_TOr_2))
                        {
                          z_15 = ATgetArgument(m_51, 0);
                          a_16 = ATgetArgument(m_51, 1);
                        }
                      else
                        _fail(t);
                      b_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_43(s_18, t_18, z_15, a_16, b_16, t);
                  LocalPopChoice(j_51);
                }
              else
                {
                  t = i_51;
                  {
                    ATerm w_51 = t;
                    int x_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        static ATerm j_11 (ATerm t);
                        static ATerm j_11 (ATerm t)
                        {
                          t = xtc_targ_to_args_0_2(s_18, t_18, t);
                          return(t);
                        }
                        t = _2_0(j_11, _id, t);
                        LocalPopChoice(x_51);
                      }
                    else
                      {
                        t = w_51;
                        t = xtc_targ_to_args_0_0(t);
                      }
                  }
                }
              return(t);
            }
            t = thread_map_1_0(i_11, t);
          }
          e_55 = t;
          t = term_y_51;
          g_16 = t;
          t = term_d_23;
          h_16 = t;
          t = e_55;
          t = log_0_3(h_16, g_16, e_55, t);
        }
      }
  }
  t = _2_0(concat_0_0, _id, t);
  if(match_cons(t, sym__2))
    {
      h_54 = ATgetArgument(t, 0);
      i_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm q_30 (ATerm), ATerm p_18, ATerm r_18, ATerm t)
{
  static ATerm n_11 (ATerm t);
  static ATerm n_11 (ATerm t)
  {
    ATerm a_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_56 = NULL,n_16 = NULL,p_16 = NULL,r_16 = NULL;
        a_56 = t;
        if(match_cons(t, sym__2))
          {
            ATerm i_52 = ATgetArgument(t, 0);
            if(match_cons(i_52, sym_TOr_2))
              {
                n_16 = ATgetArgument(i_52, 0);
                p_16 = ATgetArgument(i_52, 1);
              }
            else
              _fail(t);
            r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_43(p_18, r_18, n_16, p_16, r_16, t);
        LocalPopChoice(h_52);
      }
    else
      {
        t = a_52;
        {
          ATerm j_52 = t;
          int k_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm o_11 (ATerm t);
              static ATerm o_11 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(p_18, r_18, t);
                return(t);
              }
              t = _2_0(o_11, _id, t);
              LocalPopChoice(k_52);
            }
          else
            {
              t = j_52;
              {
                ATerm l_52 = t;
                int m_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(m_52);
                  }
                else
                  {
                    t = l_52;
                    t = q_30(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(n_11, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm p_57 = NULL,s_57 = NULL,d_17 = NULL,e_17 = NULL;
  p_57 = t;
  t = Snd_0_0(t);
  s_57 = t;
  t = term_n_52;
  d_17 = t;
  t = term_p_47;
  e_17 = t;
  t = s_57;
  t = log_0_3(e_17, d_17, s_57, t);
  t = p_57;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm o_52 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm p_52 = ATgetArgument(t, 0);
          if(!(match_cons(p_52, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_52;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm p_30 (ATerm), ATerm n_18, ATerm o_18, ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL;
  t_56 = t;
  t = o_18;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm q_52 = ATgetArgument(t, 0);
      ATerm r_52 = ATgetArgument(t, 1);
      ATerm s_52 = ATgetArgument(t, 2);
      u_56 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_56, u_56);
  {
    static ATerm p_11 (ATerm t);
    static ATerm p_11 (ATerm t)
    {
      ATerm t_52 = t;
      int u_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_57 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
          i_57 = t;
          if(match_cons(t, sym__2))
            {
              ATerm w_52 = ATgetArgument(t, 0);
              if(match_cons(w_52, sym_TOr_2))
                {
                  x_16 = ATgetArgument(w_52, 0);
                  y_16 = ATgetArgument(w_52, 1);
                }
              else
                _fail(t);
              z_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_43(n_18, o_18, x_16, y_16, z_16, t);
          LocalPopChoice(u_52);
        }
      else
        {
          t = t_52;
          {
            ATerm b_53 = t;
            int c_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm q_11 (ATerm t);
                static ATerm q_11 (ATerm t)
                {
                  t = xtc_targ_to_args_0_2(n_18, o_18, t);
                  return(t);
                }
                t = _2_0(q_11, _id, t);
                LocalPopChoice(c_53);
              }
            else
              {
                t = b_53;
                {
                  ATerm d_53 = t;
                  int h_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_targ_to_args_0_0(t);
                      LocalPopChoice(h_53);
                    }
                  else
                    {
                      t = d_53;
                      {
                        ATerm m_57 = NULL;
                        t = Snd_0_0(t);
                        m_57 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_57);
                      }
                    }
                }
              }
          }
        }
      return(t);
    }
    t = thread_map_1_0(p_11, t);
  }
  t = _2_0(concat_0_0, _id, t);
  {
    ATerm j_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_57 = NULL;
        o_57 = t;
        t = Snd_0_0(t);
        {
          ATerm n_53 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_53;
            }
        }
        t = o_57;
        LocalPopChoice(m_53);
        t = restore_2_0(p_30, r_11, t);
      }
    else
      {
        t = j_53;
        t = Fst_0_0(t);
        t = filter_1_0(s_11, t);
      }
  }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm o_53 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm p_53 = ATgetArgument(t, 0);
          if(!(match_cons(p_53, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_53;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  v_57 = t;
  t = filter_1_0(v_11, t);
  w_57 = t;
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_57, w_57);
        {
          ATerm t_53 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_53;
            }
        }
        t = w_57;
        LocalPopChoice(s_53);
        {
          ATerm l_17 = NULL,m_17 = NULL;
          t = term_w_53;
          l_17 = t;
          t = term_p_47;
          m_17 = t;
          t = w_57;
          t = log_0_3(m_17, l_17, w_57, t);
        }
      }
    else
      {
        t = r_53;
      }
  }
  t = w_57;
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm k_18, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm z_53 = ATgetArgument(t, 0);
      if(!(match_cons(z_53, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = k_18;
  return(t);
}
static ATerm t_43 (ATerm k_18, ATerm t)
{
  t = k_18;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm b_2, ATerm c_2, ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL;
  f_60 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      g_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_60;
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_b_54);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
          t = b_2;
          if(match_cons(t, sym_XtcDesc_1))
            {
              ATerm c_54 = ATgetArgument(t, 0);
              if(match_cons(c_54, sym_Exec_1))
                {
                  s_17 = ATgetArgument(c_54, 0);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = s_17;
          if(match_cons(t, sym_Streams_3))
            {
              ATerm d_54 = ATgetArgument(t, 0);
              ATerm f_54 = ATgetArgument(t, 1);
              t_17 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = t_17;
          if(match_cons(t, sym_Some_1))
            {
              q_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_2;
          if(match_cons(t, sym_XtcConf_4))
            {
              ATerm j_54 = ATgetArgument(t, 0);
              ATerm l_54 = ATgetArgument(t, 1);
              ATerm n_54 = ATgetArgument(t, 2);
              if(match_cons(n_54, sym_Some_1))
                {
                  r_17 = ATgetArgument(n_54, 0);
                }
              else
                _fail(t);
              {
                ATerm o_54 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = q_17;
          t = xtc_stream_to_arg_0_1(r_17, t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,g_18 = NULL;
              t = b_2;
              if(match_cons(t, sym_XtcDesc_1))
                {
                  ATerm p_54 = ATgetArgument(t, 0);
                  if(match_cons(p_54, sym_Exec_1))
                    {
                      y_17 = ATgetArgument(p_54, 0);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              t = y_17;
              if(match_cons(t, sym_Streams_3))
                {
                  ATerm q_54 = ATgetArgument(t, 0);
                  g_18 = ATgetArgument(t, 1);
                  {
                    ATerm s_54 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = g_18;
              if(match_cons(t, sym_Some_1))
                {
                  w_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_2;
              if(match_cons(t, sym_XtcConf_4))
                {
                  ATerm t_54 = ATgetArgument(t, 0);
                  ATerm x_54 = ATgetArgument(t, 1);
                  if(match_cons(x_54, sym_Some_1))
                    {
                      x_17 = ATgetArgument(x_54, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_54 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm a_55 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = w_17;
              t = xtc_stream_to_arg_0_1(x_17, t);
            }
          else
            {
              ATerm m_18 = NULL,x_18 = NULL;
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = b_2;
              t = xtc_desc_input_0_0(t);
              if(match_cons(t, sym_Some_1))
                {
                  m_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_2;
              if(match_cons(t, sym_XtcConf_4))
                {
                  ATerm b_55 = ATgetArgument(t, 0);
                  if(match_cons(b_55, sym_Some_1))
                    {
                      x_18 = ATgetArgument(b_55, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_55 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm f_55 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm g_55 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = m_18;
              t = xtc_stream_to_arg_0_1(x_18, t);
            }
        }
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm z_30 = NULL;
  t = Hd_0_0(t);
  z_30 = t;
  t = (ATerm) ATinsert(ATempty, z_30);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm i_35 = NULL;
  t = Hd_0_0(t);
  i_35 = t;
  t = (ATerm) ATinsert(ATempty, i_35);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm s_36 = NULL;
  t = Hd_0_0(t);
  s_36 = t;
  t = (ATerm) ATinsert(ATempty, s_36);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm e_38 = NULL;
  t = Hd_0_0(t);
  e_38 = t;
  t = (ATerm) ATinsert(ATempty, e_38);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm w_68 = NULL,y_68 = NULL,a_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,p_69 = NULL,r_69 = NULL;
  a_69 = t;
  if(match_cons(t, sym__2))
    {
      f_69 = ATgetArgument(t, 0);
      r_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_69;
  if(match_cons(t, sym_TVarStar_4))
    {
      g_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
      j_69 = ATgetArgument(t, 2);
      l_69 = ATgetArgument(t, 3);
      t = g_69;
      if(match_cons(t, sym_ArgOption_0))
        {
          ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
          t = j_69;
          if(match_cons(t, sym_Some_1))
            {
              k_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_69;
          if(match_cons(t, sym_Default_1))
            {
              w_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_68;
          if(match_cons(t, sym_Values_1))
            {
              y_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_69;
          if(match_cons(t, sym_Some_1))
            {
              p_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__4, r_69, h_69, y_68, p_69);
          {
            static ATerm w_11 (ATerm t);
            static ATerm w_11 (ATerm t)
            {
              static ATerm a_12 (ATerm t);
              static ATerm a_12 (ATerm t)
              {
                ATerm p_20 = NULL;
                p_20 = t;
                t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(k_20), p_20);
                return(t);
              }
              t = h_69;
              t = Hd_0_0(t);
              if(((k_20 != NULL) && (k_20 != t)))
                _fail(t);
              else
                k_20 = t;
              t = y_68;
              t = map_1_0(a_12, t);
              return(t);
            }
            t = u_43(_id, w_11, z_11, r_69, h_69, y_68, p_69, t);
          }
          if(match_cons(t, sym__2))
            {
              l_20 = ATgetArgument(t, 0);
              m_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_20, m_20);
        }
      else
        {
          ATerm l_21 = NULL,m_21 = NULL;
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = j_69;
          if(match_cons(t, sym_Some_1))
            {
              k_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_69;
          if(match_cons(t, sym_Some_1))
            {
              ATerm j_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__3, r_69, h_69, k_69);
          t = v_43(_id, d_12, r_69, h_69, k_69, t);
          if(match_cons(t, sym__2))
            {
              l_21 = ATgetArgument(t, 0);
              m_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          g_69 = ATgetArgument(t, 0);
          h_69 = ATgetArgument(t, 1);
          j_69 = ATgetArgument(t, 2);
          l_69 = ATgetArgument(t, 3);
          t = g_69;
          if(match_cons(t, sym_ArgOption_0))
            {
              ATerm b_22 = NULL,d_22 = NULL,g_22 = NULL;
              t = j_69;
              if(match_cons(t, sym_Some_1))
                {
                  k_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_69;
              if(match_cons(t, sym_Default_1))
                {
                  w_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_68;
              if(match_cons(t, sym_Values_1))
                {
                  y_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_69;
              if(match_cons(t, sym_Some_1))
                {
                  p_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__4, r_69, h_69, y_68, p_69);
              {
                static ATerm e_12 (ATerm t);
                static ATerm e_12 (ATerm t)
                {
                  static ATerm h_12 (ATerm t);
                  static ATerm h_12 (ATerm t)
                  {
                    ATerm r_22 = NULL;
                    r_22 = t;
                    t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(b_22), r_22);
                    return(t);
                  }
                  t = h_69;
                  t = Hd_0_0(t);
                  if(((b_22 != NULL) && (b_22 != t)))
                    _fail(t);
                  else
                    b_22 = t;
                  t = y_68;
                  t = map_1_0(h_12, t);
                  return(t);
                }
                t = u_43(_id, e_12, _fail, r_69, h_69, y_68, p_69, t);
              }
              if(match_cons(t, sym__2))
                {
                  d_22 = ATgetArgument(t, 0);
                  g_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_22, g_22);
            }
          else
            {
              ATerm g_23 = NULL,h_23 = NULL;
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = j_69;
              if(match_cons(t, sym_Some_1))
                {
                  k_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_69;
              if(match_cons(t, sym_Some_1))
                {
                  ATerm k_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__3, r_69, h_69, k_69);
              t = v_43(_id, _fail, r_69, h_69, k_69, t);
              if(match_cons(t, sym__2))
                {
                  g_23 = ATgetArgument(t, 0);
                  h_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, g_23, h_23);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              g_69 = ATgetArgument(t, 0);
              h_69 = ATgetArgument(t, 1);
              j_69 = ATgetArgument(t, 2);
              l_69 = ATgetArgument(t, 3);
              t = g_69;
              if(match_cons(t, sym_ArgOption_0))
                {
                  ATerm j_30 = NULL,t_30 = NULL,u_30 = NULL,y_30 = NULL;
                  t = j_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      k_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = k_69;
                  if(match_cons(t, sym_Default_1))
                    {
                      w_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_68;
                  if(match_cons(t, sym_Values_1))
                    {
                      y_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      p_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__4, r_69, h_69, y_68, p_69);
                  {
                    static ATerm l_12 (ATerm t);
                    static ATerm l_12 (ATerm t)
                    {
                      t = h_69;
                      t = Hd_0_0(t);
                      if(((j_30 != NULL) && (j_30 != t)))
                        _fail(t);
                      else
                        j_30 = t;
                      t = y_68;
                      t = Hd_0_0(t);
                      if(((t_30 != NULL) && (t_30 != t)))
                        _fail(t);
                      else
                        t_30 = t;
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, j_30, t_30));
                      return(t);
                    }
                    t = u_43(i_12, l_12, _fail, r_69, h_69, y_68, p_69, t);
                  }
                  if(match_cons(t, sym__2))
                    {
                      u_30 = ATgetArgument(t, 0);
                      y_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, u_30, y_30);
                }
              else
                {
                  ATerm y_34 = NULL,z_34 = NULL;
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = j_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      k_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      ATerm l_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__3, r_69, h_69, k_69);
                  t = v_43(m_12, _fail, r_69, h_69, k_69, t);
                  if(match_cons(t, sym__2))
                    {
                      y_34 = ATgetArgument(t, 0);
                      z_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, y_34, z_34);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  g_69 = ATgetArgument(t, 0);
                  h_69 = ATgetArgument(t, 1);
                  j_69 = ATgetArgument(t, 2);
                  l_69 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = g_69;
              if(match_cons(t, sym_ArgOption_0))
                {
                  ATerm a_36 = NULL,f_36 = NULL,q_36 = NULL,r_36 = NULL;
                  t = j_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      k_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = k_69;
                  if(match_cons(t, sym_Default_1))
                    {
                      w_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_68;
                  if(match_cons(t, sym_Values_1))
                    {
                      y_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      p_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__4, r_69, h_69, y_68, p_69);
                  {
                    static ATerm q_12 (ATerm t);
                    static ATerm q_12 (ATerm t)
                    {
                      t = h_69;
                      t = Hd_0_0(t);
                      if(((a_36 != NULL) && (a_36 != t)))
                        _fail(t);
                      else
                        a_36 = t;
                      t = y_68;
                      t = Hd_0_0(t);
                      if(((f_36 != NULL) && (f_36 != t)))
                        _fail(t);
                      else
                        f_36 = t;
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, a_36, f_36));
                      return(t);
                    }
                    t = u_43(p_12, q_12, t_12, r_69, h_69, y_68, p_69, t);
                  }
                  if(match_cons(t, sym__2))
                    {
                      q_36 = ATgetArgument(t, 0);
                      r_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
                }
              else
                {
                  ATerm y_37 = NULL,z_37 = NULL;
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = j_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      k_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      ATerm o_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__3, r_69, h_69, k_69);
                  t = v_43(v_12, w_12, r_69, h_69, k_69, t);
                  if(match_cons(t, sym__2))
                    {
                      y_37 = ATgetArgument(t, 0);
                      z_37 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, y_37, z_37);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm m_30 (ATerm), ATerm n_30 (ATerm), ATerm o_30 (ATerm), ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,l_70 = NULL,m_70 = NULL;
  if(match_cons(t, sym__4))
    {
      h_70 = ATgetArgument(t, 0);
      i_70 = ATgetArgument(t, 1);
      l_70 = ATgetArgument(t, 2);
      m_70 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = u_43(m_30, n_30, o_30, h_70, i_70, l_70, m_70, t);
  return(t);
}
static ATerm u_43 (ATerm m_30 (ATerm), ATerm n_30 (ATerm), ATerm o_30 (ATerm), ATerm w_14, ATerm x_14, ATerm z_14, ATerm v_14, ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_14, x_14);
  t = w_43(w_14, x_14, t);
  if(match_cons(t, sym__2))
    {
      p_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_70;
  {
    ATerm p_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_55 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_55;
          }
        t = p_70;
        LocalPopChoice(q_55);
        t = m_30(t);
      }
    else
      {
        t = p_55;
        {
          ATerm s_55 = t;
          int t_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_14;
              {
                ATerm u_55 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_55;
                  }
              }
              t = p_70;
              LocalPopChoice(t_55);
              t = n_30(t);
            }
          else
            {
              t = s_55;
              t = o_30(t);
            }
        }
      }
  }
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_70, n_70);
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm k_30 (ATerm), ATerm l_30 (ATerm), ATerm t)
{
  ATerm q_70 = NULL,t_70 = NULL,v_70 = NULL;
  if(match_cons(t, sym__3))
    {
      q_70 = ATgetArgument(t, 0);
      t_70 = ATgetArgument(t, 1);
      v_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_43(k_30, l_30, q_70, t_70, v_70, t);
  return(t);
}
static ATerm v_43 (ATerm k_30 (ATerm), ATerm l_30 (ATerm), ATerm k_14, ATerm n_14, ATerm m_14, ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_14, n_14);
  t = x_43(k_14, n_14, t);
  if(match_cons(t, sym__2))
    {
      z_70 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_70;
  {
    ATerm v_55 = t;
    int w_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_55 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_55;
          }
        t = z_70;
        LocalPopChoice(w_55);
        t = k_30(t);
      }
    else
      {
        t = v_55;
        {
          ATerm y_55 = t;
          int z_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_14;
              if(match_cons(t, sym_Default_1))
                {
                  ATerm b_56 = ATgetArgument(t, 0);
                  if(!(match_cons(b_56, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = z_70;
              LocalPopChoice(z_55);
              t = n_14;
              t = Hd_0_0(t);
              x_70 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, x_70));
            }
          else
            {
              t = y_55;
              t = l_30(t);
            }
        }
      }
  }
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_70, w_70);
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm c_71 = NULL,e_71 = NULL;
  if(match_cons(t, sym__2))
    {
      c_71 = ATgetArgument(t, 0);
      e_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_43(c_71, e_71, t);
  return(t);
}
static ATerm w_43 (ATerm f_14, ATerm e_14, ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL;
  t = Fst_0_0(t);
  {
    static ATerm y_12 (ATerm t);
    static ATerm y_12 (ATerm t)
    {
      ATerm c_56 = t;
      int d_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
          r_71 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              s_71 = ATgetArgument(t, 0);
              t_71 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_14;
          {
            static ATerm f_13 (ATerm t);
            static ATerm f_13 (ATerm t)
            {
              if((s_71 != t))
                {
                  _fail(t);
                }
              return(t);
            }
            t = SRTS_one(f_13, t);
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, s_71, t_71));
          LocalPopChoice(d_56);
        }
      else
        {
          t = c_56;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(y_12, t);
  }
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_14, h_71);
  t = diff_0_0(t);
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_71, i_71);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm x_71 = NULL,z_71 = NULL;
  if(match_cons(t, sym__2))
    {
      x_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_43(x_71, z_71, t);
  return(t);
}
static ATerm x_43 (ATerm y_13, ATerm x_13, ATerm t)
{
  ATerm b_72 = NULL,d_72 = NULL;
  t = Fst_0_0(t);
  {
    static ATerm h_13 (ATerm t);
    static ATerm h_13 (ATerm t)
    {
      ATerm e_56 = t;
      int f_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_72 = NULL;
          h_72 = t;
          t = x_13;
          {
            static ATerm i_13 (ATerm t);
            static ATerm i_13 (ATerm t)
            {
              ATerm s_39 = NULL;
              s_39 = t;
              t = (ATerm) ATmakeAppl(sym_Option_1, s_39);
              if((h_72 != t))
                {
                  _fail(t);
                }
              return(t);
            }
            t = SRTS_one(i_13, t);
          }
          t = (ATerm) ATinsert(ATempty, h_72);
          LocalPopChoice(f_56);
        }
      else
        {
          t = e_56;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(h_13, t);
  }
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_13, b_72);
  t = diff_0_0(t);
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_72, d_72);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm r_56 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_56;
    }
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm v_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_73 = NULL;
      d_73 = t;
      t = (ATerm) ATinsert(ATempty, term_y_56);
      {
        ATerm z_56 = t;
        if((PushChoice() == 0))
          {
            t = filter_1_0(k_13, t);
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_56;
          }
      }
      t = d_73;
      LocalPopChoice(x_56);
      {
        ATerm f_73 = NULL,v_39 = NULL,w_39 = NULL;
        f_73 = t;
        t = term_a_57;
        v_39 = t;
        t = term_p_47;
        w_39 = t;
        t = f_73;
        t = log_0_3(w_39, v_39, f_73, t);
        _fail(t);
      }
    }
  else
    {
      t = v_56;
    }
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_y_56;
  return(t);
}
ATerm exec_http_0_1 (ATerm s_13, ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL;
  t = exec_http_dependencies_0_0(t);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_f_57), term_d_57), o_73);
  t = conc_0_0(t);
  n_73 = t;
  t = s_13;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm h_57 = ATgetArgument(t, 0);
      l_73 = ATgetArgument(t, 1);
      m_73 = ATgetArgument(t, 2);
      {
        ATerm l_57 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_y_22, l_73, m_73, n_73);
  t = xtc_command_1_0(l_13, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_y_56;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm p_73 = NULL;
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_f_57), term_d_57), p_73);
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(n_13, o_13, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL;
  h_74 = t;
  t = STDIN__FILENO_0_0(t);
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_74, g_74);
  t = dup2_0_0(t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL;
  m_74 = t;
  t = STDOUT__FILENO_0_0(t);
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_74, l_74);
  t = dup2_0_0(t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL;
  o_74 = t;
  t = STDERR__FILENO_0_0(t);
  n_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_74, n_74);
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL,c_74 = NULL,d_74 = NULL,f_74 = NULL,z_39 = NULL,c_40 = NULL;
  f_74 = t;
  t = term_n_57;
  z_39 = t;
  t = term_d_23;
  c_40 = t;
  t = f_74;
  t = log_0_3(c_40, z_39, f_74, t);
  if(match_cons(t, sym__3))
    {
      c_74 = ATgetArgument(t, 0);
      {
        ATerm q_57 = ATgetArgument(t, 1);
        if(match_cons(q_57, sym__3))
          {
            w_73 = ATgetArgument(q_57, 0);
            x_73 = ATgetArgument(q_57, 1);
            y_73 = ATgetArgument(q_57, 2);
          }
        else
          _fail(t);
      }
      d_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm p_13 (ATerm t);
    static ATerm p_13 (ATerm t)
    {
      t = w_73;
      t = option_1_0(r_13, t);
      t = x_73;
      t = option_1_0(u_13, t);
      t = y_73;
      t = option_1_0(v_13, t);
      t = (ATerm) ATmakeAppl(sym__2, c_74, d_74);
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(p_13, t);
  }
  t = term_b_24;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm p_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_57 = ATgetArgument(t, 0);
      if(match_cons(r_57, sym_XtcConf_4))
        {
          ATerm t_57 = ATgetArgument(r_57, 0);
          ATerm u_57 = ATgetArgument(r_57, 1);
          ATerm x_57 = ATgetArgument(r_57, 2);
          ATerm y_57 = ATgetArgument(r_57, 3);
        }
      else
        _fail(t);
      p_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_43(p_74, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm i_75 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      i_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_75;
  return(t);
}
static ATerm y_43 (ATerm j_13, ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,k_40 = NULL,l_40 = NULL;
  a_75 = t;
  t = term_z_57;
  d_75 = t;
  t = j_13;
  t = xtc_fetch_meta_0_1(d_75, t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      u_74 = ATgetArgument(t, 0);
      {
        ATerm b_58 = ATgetArgument(t, 1);
        if(match_cons(b_58, sym_Some_1))
          {
            v_74 = ATgetArgument(b_58, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_13;
  t = Snd_0_0(t);
  {
    static ATerm w_13 (ATerm t);
    static ATerm w_13 (ATerm t)
    {
      ATerm c_58 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if((u_74 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              {
                ATerm d_58 = ATgetArgument(t, 1);
                if(match_cons(d_58, sym_Some_1))
                  {
                    if((v_74 != ATgetArgument(d_58, 0)))
                      {
                        _fail(ATgetArgument(d_58, 0));
                      }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_58;
        }
      return(t);
    }
    t = filter_1_0(w_13, t);
  }
  w_74 = t;
  t = v_74;
  t = try_1_0(a_14, t);
  z_74 = t;
  t = a_75;
  if(match_cons(t, sym__2))
    {
      ATerm e_58 = ATgetArgument(t, 0);
      if(match_cons(e_58, sym_XtcConf_4))
        {
          e_75 = ATgetArgument(e_58, 0);
          f_75 = ATgetArgument(e_58, 1);
          g_75 = ATgetArgument(e_58, 2);
          h_75 = ATgetArgument(e_58, 3);
        }
      else
        _fail(t);
      {
        ATerm f_58 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_43(u_74, z_74, e_75, f_75, g_75, h_75, t);
  {
    static ATerm b_14 (ATerm t);
    static ATerm b_14 (ATerm t)
    {
      ATerm o_75 = NULL,p_75 = NULL;
      if(match_cons(t, sym__2))
        {
          o_75 = ATgetArgument(t, 0);
          p_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_44(w_74, o_75, p_75, t);
      return(t);
    }
    t = _2_0(_id, b_14, t);
  }
  y_74 = t;
  t = term_g_58;
  k_40 = t;
  t = term_d_23;
  l_40 = t;
  t = y_74;
  t = log_0_3(l_40, k_40, y_74, t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm y_89 = NULL,x_90 = NULL,c_91 = NULL,f_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,e_18 = NULL;
  o_91 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      x_90 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
      f_91 = ATgetArgument(t, 2);
      m_91 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_91);
  y_89 = t;
  t = m_91;
  t = xtc_desugar_args_0_0(t);
  n_91 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, x_90, c_91, f_91, n_91);
  e_18 = t;
  t = SSLsetAnnotations(e_18, y_89);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm h_58 = t;
  int i_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_91 = NULL;
      if(match_cons(t, sym_XtcDesc_1))
        {
          r_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_91;
      if(!(match_cons(t, sym_XT_0)))
        _fail(t);
      t = term_e_59;
      LocalPopChoice(i_58);
    }
  else
    {
      t = h_58;
      {
        ATerm f_59 = t;
        int h_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(h_59);
          }
        else
          {
            t = f_59;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,e_76 = NULL;
  t = _2_0(c_14, _id, t);
  if(match_cons(t, sym__2))
    {
      u_75 = ATgetArgument(t, 0);
      v_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  a_76 = t;
  t = term_i_59;
  z_75 = t;
  t = a_76;
  t = xtc_fetch_meta_0_1(z_75, t);
  t = innermost_1_0(d_14, t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm k_59 = ATgetArgument(t, 0);
      if(match_cons(k_59, sym_XtcDesc_1))
        {
          w_75 = ATgetArgument(k_59, 0);
        }
      else
        _fail(t);
      {
        ATerm l_59 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      b_76 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_43(u_75, b_76, e_76, t);
  x_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_75, x_75, v_75);
  t = xtc_prepare_0_0(t);
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_75, x_75, y_75);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm n_59 = t;
  int o_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_91 = NULL,z_91 = NULL,h_93 = NULL;
      y_91 = t;
      if(match_cons(t, sym__2))
        {
          z_91 = ATgetArgument(t, 0);
          h_93 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_91;
      if(match_cons(t, sym_XtcConf_4))
        {
          ATerm q_59 = ATgetArgument(t, 0);
          ATerm t_59 = ATgetArgument(t, 1);
          ATerm u_59 = ATgetArgument(t, 2);
          ATerm v_59 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_91;
      t = y_43(h_93, t);
      LocalPopChoice(o_59);
    }
  else
    {
      t = n_59;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm z_12, ATerm a_13, ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,w_95 = NULL,y_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_59 = ATgetArgument(t, 0);
      if(match_cons(w_59, sym_XtcConf_4))
        {
          z_94 = ATgetArgument(w_59, 0);
          a_95 = ATgetArgument(w_59, 1);
          w_95 = ATgetArgument(w_59, 2);
          y_95 = ATgetArgument(w_59, 3);
        }
      else
        _fail(t);
      {
        ATerm x_59 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_43(z_12, a_13, z_94, a_95, w_95, y_95, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm s_97 = NULL,o_40 = NULL,r_40 = NULL;
  s_97 = t;
  t = term_y_59;
  o_40 = t;
  t = term_p_47;
  r_40 = t;
  t = s_97;
  t = log_0_3(r_40, o_40, s_97, t);
  return(t);
}
static ATerm z_43 (ATerm z_12, ATerm a_13, ATerm b_13, ATerm c_13, ATerm d_13, ATerm e_13, ATerm t)
{
  ATerm e_96 = NULL,w_96 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_13, e_13);
  t = conc_0_0(t);
  e_96 = t;
  t = z_12;
  t = restore_2_0(g_14, h_14, t);
  w_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, b_13, c_13, d_13, e_96), w_96);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm z_59 = t;
  int a_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(a_60);
    }
  else
    {
      t = z_59;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm b_60 = t;
  int c_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(c_60);
    }
  else
    {
      t = b_60;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm g_122 = NULL,h_122 = NULL,n_122 = NULL,n_124 = NULL,r_124 = NULL,w_124 = NULL,d_125 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL;
  g_122 = t;
  if(match_cons(t, sym__3))
    {
      h_122 = ATgetArgument(t, 0);
      n_124 = ATgetArgument(t, 1);
      v_127 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_122;
  if(match_cons(t, sym_XTService_0))
    {
      ATerm i_128 = NULL;
      t = n_124;
      if(match_cons(t, sym_XtcConf_4))
        {
          ATerm d_60 = ATgetArgument(t, 0);
          ATerm e_60 = ATgetArgument(t, 1);
          ATerm h_60 = ATgetArgument(t, 2);
          u_127 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_127;
      if(match_cons(t, sym__2))
        {
          w_127 = ATgetArgument(t, 0);
          {
            ATerm i_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_127;
      t = mapconcat_1_0(j_14, t);
      i_128 = t;
      t = (ATerm) ATinsert(CheckATermList(i_128), w_127);
    }
  else
    {
      ATerm j_60 = t;
      int k_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_HTTP_1))
            {
              ATerm l_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(k_60);
          {
            ATerm s_128 = NULL;
            t = n_124;
            if(match_cons(t, sym_XtcConf_4))
              {
                ATerm m_60 = ATgetArgument(t, 0);
                ATerm n_60 = ATgetArgument(t, 1);
                ATerm o_60 = ATgetArgument(t, 2);
                u_127 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = v_127;
            if(match_cons(t, sym__2))
              {
                w_127 = ATgetArgument(t, 0);
                {
                  ATerm q_60 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = u_127;
            t = mapconcat_1_0(l_14, t);
            s_128 = t;
            t = (ATerm) ATinsert(CheckATermList(s_128), w_127);
          }
        }
      else
        {
          t = j_60;
          {
            ATerm h_41 = NULL,j_41 = NULL,l_41 = NULL,o_41 = NULL;
            if(match_cons(t, sym_Exec_1))
              {
                n_122 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_124;
            if(match_cons(t, sym_XtcConf_4))
              {
                r_124 = ATgetArgument(t, 0);
                w_124 = ATgetArgument(t, 1);
                d_125 = ATgetArgument(t, 2);
                u_127 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = v_127;
            if(match_cons(t, sym__2))
              {
                w_127 = ATgetArgument(t, 0);
                {
                  ATerm s_60 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = u_127;
            t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
            h_41 = t;
            t = n_122;
            {
              ATerm t_60 = t;
              int u_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_41 = NULL;
                  static ATerm o_14 (ATerm t);
                  static ATerm o_14 (ATerm t)
                  {
                    t = xtc_stream_to_fd_0_1(r_124, t);
                    return(t);
                  }
                  if(match_cons(t, sym_Streams_3))
                    {
                      q_41 = ATgetArgument(t, 0);
                      {
                        ATerm v_60 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm w_60 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = q_41;
                  t = option_1_0(o_14, t);
                  LocalPopChoice(u_60);
                }
              else
                {
                  t = t_60;
                  t = term_y_22;
                }
            }
            j_41 = t;
            t = n_122;
            {
              ATerm x_60 = t;
              int y_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_41 = NULL;
                  static ATerm p_14 (ATerm t);
                  static ATerm p_14 (ATerm t)
                  {
                    t = xtc_stream_to_fd_0_1(w_124, t);
                    return(t);
                  }
                  if(match_cons(t, sym_Streams_3))
                    {
                      ATerm b_61 = ATgetArgument(t, 0);
                      x_41 = ATgetArgument(t, 1);
                      {
                        ATerm c_61 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = x_41;
                  t = option_1_0(p_14, t);
                  LocalPopChoice(y_60);
                }
              else
                {
                  t = x_60;
                  t = term_y_22;
                }
            }
            l_41 = t;
            t = n_122;
            {
              ATerm d_61 = t;
              int e_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_42 = NULL;
                  static ATerm y_14 (ATerm t);
                  static ATerm y_14 (ATerm t)
                  {
                    t = xtc_stream_to_fd_0_1(d_125, t);
                    return(t);
                  }
                  if(match_cons(t, sym_Streams_3))
                    {
                      ATerm f_61 = ATgetArgument(t, 0);
                      ATerm g_61 = ATgetArgument(t, 1);
                      k_42 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = k_42;
                  t = option_1_0(y_14, t);
                  LocalPopChoice(e_61);
                }
              else
                {
                  t = d_61;
                  t = term_y_22;
                }
            }
            o_41 = t;
            t = (ATerm) ATmakeAppl(sym__3, w_127, (ATerm)ATmakeAppl(sym__3, j_41, l_41, o_41), h_41);
          }
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL;
  y_129 = t;
  if(match_cons(t, sym_String_1))
    {
      z_129 = ATgetArgument(t, 0);
      t = z_129;
    }
  else
    {
      if(match_cons(t, sym_URL_1))
        {
          z_129 = ATgetArgument(t, 0);
          {
            ATerm q_44 = NULL;
            t = z_129;
            if(match_cons(t, sym_String_1))
              {
                q_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_44;
          }
        }
      else
        {
          ATerm b_45 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              z_129 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_129;
          if(match_cons(t, sym_String_1))
            {
              b_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_45;
        }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm k_130 = NULL,o_130 = NULL;
  if(match_cons(t, sym_ArgOption_2))
    {
      o_130 = ATgetArgument(t, 0);
      k_130 = ATgetArgument(t, 1);
      {
        ATerm v_130 = NULL,w_130 = NULL;
        t = o_130;
        t = xtc_argterm_to_exec_0_0(t);
        v_130 = t;
        t = k_130;
        t = xtc_argterm_to_exec_0_0(t);
        w_130 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, w_130), v_130);
      }
    }
  else
    {
      ATerm h_131 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          o_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_130;
      t = xtc_argterm_to_exec_0_0(t);
      h_131 = t;
      t = (ATerm) ATinsert(ATempty, h_131);
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm n_132 = NULL,o_132 = NULL;
  n_132 = t;
  if(match_cons(t, sym_String_1))
    {
      o_132 = ATgetArgument(t, 0);
      t = o_132;
    }
  else
    {
      if(match_cons(t, sym_URL_1))
        {
          o_132 = ATgetArgument(t, 0);
          {
            ATerm c_46 = NULL;
            t = o_132;
            if(match_cons(t, sym_String_1))
              {
                c_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_URL_1, c_46);
          }
        }
      else
        {
          ATerm m_46 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              o_132 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_132;
          if(match_cons(t, sym_String_1))
            {
              m_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_46);
        }
    }
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL;
  c_134 = t;
  if(match_cons(t, sym_Option_1))
    {
      d_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_48 = NULL,j_48 = NULL;
        t = d_134;
        t = xtc_argterm_to_http_0_0(t);
        if(match_cons(t, sym_FILE_1))
          {
            j_48 = ATgetArgument(t, 0);
            t = j_48;
          }
        else
          {
            if(match_cons(t, sym_URL_1))
              {
                j_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_48;
          }
        t = (ATerm) ATinsert(ATinsert(ATempty, j_48), term_j_61);
        t = concat_strings_0_0(t);
        h_48 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_41, h_48));
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        {
          ATerm r_48 = NULL;
          t = d_134;
          t = xtc_argterm_to_http_0_0(t);
          {
            ATerm k_61 = t;
            if((PushChoice() == 0))
              {
                ATerm l_49 = NULL,n_49 = NULL;
                l_49 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    n_49 = ATgetArgument(t, 0);
                    {
                      ATerm y_49 = NULL,j_20 = NULL;
                      t = SSLgetAnnotations(l_49);
                      y_49 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, n_49);
                      j_20 = t;
                      t = SSLsetAnnotations(j_20, y_49);
                    }
                  }
                else
                  {
                    ATerm r_50 = NULL,n_20 = NULL;
                    if(match_cons(t, sym_URL_1))
                      {
                        n_49 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(l_49);
                    r_50 = t;
                    t = (ATerm) ATmakeAppl(sym_URL_1, n_49);
                    n_20 = t;
                    t = SSLsetAnnotations(n_20, r_50);
                  }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_61;
              }
          }
          r_48 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_41, r_48));
        }
      }
  }
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL,x_135 = NULL;
  v_135 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      w_135 = ATgetArgument(t, 0);
      x_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_52 = NULL,i_53 = NULL,k_53 = NULL;
        t = w_135;
        t = xtc_argterm_to_http_0_0(t);
        v_52 = t;
        t = x_135;
        t = xtc_argterm_to_http_0_0(t);
        if(match_cons(t, sym_FILE_1))
          {
            k_53 = ATgetArgument(t, 0);
            t = k_53;
          }
        else
          {
            if(match_cons(t, sym_URL_1))
              {
                k_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_53;
          }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_53), term_p_61), v_52);
        t = concat_strings_0_0(t);
        i_53 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_41, i_53));
        LocalPopChoice(o_61);
      }
    else
      {
        t = n_61;
        {
          ATerm e_54 = NULL,g_54 = NULL,k_54 = NULL;
          t = w_135;
          t = xtc_argterm_to_http_0_0(t);
          e_54 = t;
          t = x_135;
          t = xtc_argterm_to_http_0_0(t);
          {
            ATerm q_61 = t;
            if((PushChoice() == 0))
              {
                ATerm p_56 = NULL,q_56 = NULL;
                p_56 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    q_56 = ATgetArgument(t, 0);
                    {
                      ATerm a_58 = NULL,y_20 = NULL;
                      t = SSLgetAnnotations(p_56);
                      a_58 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, q_56);
                      y_20 = t;
                      t = SSLsetAnnotations(y_20, a_58);
                    }
                  }
                else
                  {
                    ATerm n_58 = NULL,e_21 = NULL;
                    if(match_cons(t, sym_URL_1))
                      {
                        q_56 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(p_56);
                    n_58 = t;
                    t = (ATerm) ATmakeAppl(sym_URL_1, q_56);
                    e_21 = t;
                    t = SSLsetAnnotations(e_21, n_58);
                  }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_61;
              }
          }
          g_54 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_54), term_r_61), e_54);
          t = concat_strings_0_0(t);
          k_54 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_41, k_54));
        }
      }
  }
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm l_137 = NULL,m_137 = NULL;
  l_137 = t;
  if(match_cons(t, sym_Option_1))
    {
      m_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_60 = NULL,r_60 = NULL;
        t = m_137;
        t = xtc_argterm_to_http_0_0(t);
        if(match_cons(t, sym_FILE_1))
          {
            r_60 = ATgetArgument(t, 0);
            t = r_60;
          }
        else
          {
            if(match_cons(t, sym_URL_1))
              {
                r_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_60;
          }
        t = (ATerm) ATinsert(ATinsert(ATempty, r_60), term_v_61);
        t = concat_strings_0_0(t);
        p_60 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_41, p_60));
        LocalPopChoice(u_61);
      }
    else
      {
        t = s_61;
        {
          ATerm z_60 = NULL,a_61 = NULL;
          t = m_137;
          t = xtc_argterm_to_http_0_0(t);
          {
            ATerm w_61 = t;
            if((PushChoice() == 0))
              {
                ATerm l_61 = NULL,m_61 = NULL;
                l_61 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    m_61 = ATgetArgument(t, 0);
                    {
                      ATerm t_61 = NULL,f_22 = NULL;
                      t = SSLgetAnnotations(l_61);
                      t_61 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, m_61);
                      f_22 = t;
                      t = SSLsetAnnotations(f_22, t_61);
                    }
                  }
                else
                  {
                    ATerm a_62 = NULL,c_23 = NULL;
                    if(match_cons(t, sym_URL_1))
                      {
                        m_61 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(l_61);
                    a_62 = t;
                    t = (ATerm) ATmakeAppl(sym_URL_1, m_61);
                    c_23 = t;
                    t = SSLsetAnnotations(c_23, a_62);
                  }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_61;
              }
          }
          z_60 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, z_60), term_x_61);
          t = concat_strings_0_0(t);
          a_61 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_41, a_61));
        }
      }
  }
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm y_61 = t;
  int z_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(z_61);
    }
  else
    {
      t = y_61;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(e_15, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm b_62 = t;
  int c_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(c_62);
    }
  else
    {
      t = b_62;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(f_15, t);
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm s_137 = NULL;
  if(match_cons(t, sym_String_1))
    {
      s_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_137;
  return(t);
}
static ATerm b_44 (ATerm m_11, ATerm t)
{
  t = m_11;
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm d_62 = t;
  int e_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_137 = NULL;
      if(match_cons(t, sym_Some_1))
        {
          v_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_137;
      LocalPopChoice(e_62);
    }
  else
    {
      t = d_62;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm y_137 = NULL,f_62 = NULL,g_62 = NULL;
  y_137 = t;
  t = term_y_59;
  f_62 = t;
  t = term_p_47;
  g_62 = t;
  t = y_137;
  t = log_0_3(g_62, f_62, y_137, t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(m_15, n_15, t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm j_138 = NULL,n_62 = NULL,o_62 = NULL;
  j_138 = t;
  t = term_y_59;
  n_62 = t;
  t = term_p_47;
  o_62 = t;
  t = j_138;
  t = log_0_3(o_62, n_62, j_138, t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_138 = NULL,l_138 = NULL,q_138 = NULL;
      k_138 = t;
      if(match_cons(t, sym__2))
        {
          l_138 = ATgetArgument(t, 0);
          q_138 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_138;
      if(match_cons(t, sym_XtcConf_4))
        {
          ATerm l_62 = ATgetArgument(t, 0);
          ATerm m_62 = ATgetArgument(t, 1);
          ATerm p_62 = ATgetArgument(t, 2);
          ATerm q_62 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_138;
      t = y_43(q_138, t);
      LocalPopChoice(i_62);
    }
  else
    {
      t = h_62;
      t = xtc_component_configure_0_0(t);
    }
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm k_11, ATerm t)
{
  ATerm c_138 = NULL,d_138 = NULL,e_138 = NULL,g_138 = NULL,j_62 = NULL,k_62 = NULL;
  g_138 = t;
  t = term_u_62;
  j_62 = t;
  t = term_d_23;
  k_62 = t;
  t = g_138;
  t = log_0_3(k_62, j_62, g_138, t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm v_62 = ATgetArgument(t, 0);
      ATerm w_62 = ATgetArgument(t, 1);
      if(match_cons(w_62, sym_Some_1))
        {
          c_138 = ATgetArgument(w_62, 0);
        }
      else
        _fail(t);
      {
        ATerm x_62 = ATgetArgument(t, 2);
      }
      {
        ATerm y_62 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  e_138 = t;
  t = k_11;
  t = restore_2_0(s_15, u_15, t);
  d_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_138, d_138);
  t = xtc_cc_wrap_1_0(v_15, t);
  t = c_138;
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm v_138 = NULL,x_138 = NULL,y_138 = NULL;
  if(match_cons(t, sym__3))
    {
      v_138 = ATgetArgument(t, 0);
      x_138 = ATgetArgument(t, 1);
      y_138 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_138;
  if(match_cons(t, sym_XTService_0))
    {
      t = y_138;
      t = exec_http_0_1(x_138, t);
    }
  else
    {
      ATerm z_62 = t;
      int a_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_HTTP_1))
            {
              ATerm b_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(a_63);
          t = y_138;
          t = exec_http_0_1(x_138, t);
        }
      else
        {
          t = z_62;
          if(match_cons(t, sym_Exec_1))
            {
              ATerm c_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_138;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = Cons_2_0(d_16, _id, t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
    _fail(t);
  return(t);
}
ATerm xtc_dashed_option_0_0 (ATerm t)
{
  t = string_as_chars_1_0(y_15, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(e_63);
    }
  else
    {
      t = d_63;
      {
        ATerm o_139 = NULL;
        o_139 = t;
        t = (ATerm) ATinsert(ATempty, o_139);
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL;
  static ATerm q_139 (ATerm t);
  static ATerm q_139 (ATerm t)
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((g_139 != NULL) && (g_139 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              g_139 = ATgetFirst((ATermList) t);
            {
              ATerm h_63 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(h_63) == AT_LIST) && !(ATisEmpty(h_63))))
                {
                  if(((h_139 != NULL) && (h_139 != ATgetFirst((ATermList) h_63))))
                    _fail(ATgetFirst((ATermList) h_63));
                  else
                    h_139 = ATgetFirst((ATermList) h_63);
                  if(((i_139 != NULL) && (i_139 != (ATerm) ATgetNext((ATermList) h_63))))
                    _fail((ATerm) ATgetNext((ATermList) h_63));
                  else
                    i_139 = (ATerm) ATgetNext((ATermList) h_63);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_63);
        {
          ATerm i_63 = t;
          int j_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_139;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(i_139), h_139), g_139);
              LocalPopChoice(j_63);
              {
                ATerm j_139 = NULL,k_139 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
                t = term_k_63;
                r_62 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_139, h_139);
                t_62 = t;
                t = term_d_23;
                s_62 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_139, h_139);
                t = log_0_3(s_62, r_62, t_62, t);
                t = xtc_desugar_arg_0_0(t);
                j_139 = t;
                t = i_139;
                t = q_139(t);
                k_139 = t;
                t = (ATerm) ATinsert(CheckATermList(k_139), j_139);
              }
            }
          else
            {
              t = i_63;
              {
                ATerm m_139 = NULL,n_139 = NULL;
                t = g_139;
                {
                  ATerm l_63 = t;
                  int m_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(m_63);
                    }
                  else
                    {
                      t = l_63;
                      t = (ATerm) ATinsert(ATempty, g_139);
                    }
                }
                m_139 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_139), i_139);
                t = conc_0_0(t);
                t = q_139(t);
                n_139 = t;
                t = (ATerm) ATinsert(CheckATermList(n_139), m_139);
              }
            }
        }
      }
    else
      {
        t = f_63;
        {
          ATerm n_63 = t;
          int o_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(e_16, q_139, t);
              LocalPopChoice(o_63);
            }
          else
            {
              t = n_63;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = q_139(t);
  t = concat_0_0(t);
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL,t_139 = NULL,u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL,d_31 = NULL;
  x_139 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      s_139 = ATgetArgument(t, 0);
      t_139 = ATgetArgument(t, 1);
      u_139 = ATgetArgument(t, 2);
      v_139 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_139);
  r_139 = t;
  t = v_139;
  t = xtc_desugar_args_0_0(t);
  w_139 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, s_139, t_139, u_139, w_139);
  d_31 = t;
  t = SSLsetAnnotations(d_31, r_139);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm p_63 = t;
  int q_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_140 = NULL;
      if(match_cons(t, sym_XtcDesc_1))
        {
          b_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_140;
      if(!(match_cons(t, sym_XT_0)))
        _fail(t);
      t = term_e_59;
      LocalPopChoice(q_63);
    }
  else
    {
      t = p_63;
      {
        ATerm r_63 = t;
        int s_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(s_63);
          }
        else
          {
            t = r_63;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(k_16, t);
  return(t);
}
static ATerm o_143 (ATerm g_142, ATerm t)
{
  ATerm i_142 = NULL;
  t = g_142;
  if(match_cons(t, sym_URL_1))
    {
      i_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, i_142))));
  return(t);
}
static ATerm p_143 (ATerm j_142, ATerm t)
{
  ATerm l_142 = NULL;
  t = j_142;
  if(match_cons(t, sym_FILE_1))
    {
      l_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, l_142))));
  return(t);
}
static ATerm q_143 (ATerm m_142, ATerm n_142, ATerm o_142, ATerm t)
{
  ATerm r_142 = NULL;
  t = m_142;
  t = is_string_0_0(t);
  t = n_142;
  if(match_cons(t, sym_URL_1))
    {
      r_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, m_142), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, r_142))));
  return(t);
}
static ATerm r_143 (ATerm s_142, ATerm t_142, ATerm u_142, ATerm t)
{
  ATerm x_142 = NULL;
  t = s_142;
  t = is_string_0_0(t);
  t = t_142;
  if(match_cons(t, sym_FILE_1))
    {
      x_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, s_142), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, x_142))));
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL;
  z_142 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      a_143 = ATgetArgument(t, 0);
      b_143 = ATgetArgument(t, 1);
      t = a_143;
      if(match_cons(t, sym_String_1))
        {
          y_142 = ATgetArgument(t, 0);
          {
            ATerm t_63 = t;
            int u_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_66 = NULL,i_68 = NULL,l_68 = NULL;
                t = y_142;
                t = is_string_0_0(t);
                t = b_143;
                if(match_cons(t, sym_XtcQuery_1))
                  {
                    i_68 = ATgetArgument(t, 0);
                    {
                      ATerm i_69 = NULL,f_31 = NULL;
                      t = SSLgetAnnotations(b_143);
                      i_69 = t;
                      t = (ATerm) ATmakeAppl(sym_XtcQuery_1, i_68);
                      f_31 = t;
                      t = SSLsetAnnotations(f_31, i_69);
                    }
                  }
                else
                  {
                    ATerm u_69 = NULL,c_32 = NULL;
                    if(match_cons(t, sym_XtcQuery_2))
                      {
                        i_68 = ATgetArgument(t, 0);
                        l_68 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_143);
                    u_69 = t;
                    t = (ATerm) ATmakeAppl(sym_XtcQuery_2, i_68, l_68);
                    c_32 = t;
                    t = SSLsetAnnotations(c_32, u_69);
                  }
                {
                  ATerm v_63 = t;
                  int w_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_68 = NULL;
                      p_68 = t;
                      t = xtc_find_loc_1_0(Hd_0_0, t);
                      y_66 = t;
                      t = p_68;
                      LocalPopChoice(w_63);
                      {
                        ATerm s_68 = NULL,e_70 = NULL,f_70 = NULL;
                        s_68 = t;
                        t = term_x_63;
                        e_70 = t;
                        t = term_d_23;
                        f_70 = t;
                        t = s_68;
                        t = log_0_3(f_70, e_70, s_68, t);
                      }
                    }
                  else
                    {
                      t = v_63;
                      {
                        ATerm v_68 = NULL,r_70 = NULL,s_70 = NULL;
                        v_68 = t;
                        t = term_y_63;
                        r_70 = t;
                        t = term_p_47;
                        s_70 = t;
                        t = v_68;
                        t = log_0_3(s_70, r_70, v_68, t);
                      }
                    }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, y_142), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(y_66)))));
                LocalPopChoice(u_63);
              }
            else
              {
                t = t_63;
                {
                  ATerm z_63 = t;
                  int a_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_143(z_142, t);
                      LocalPopChoice(a_64);
                    }
                  else
                    {
                      t = z_63;
                      {
                        ATerm b_64 = t;
                        int c_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = p_143(z_142, t);
                            LocalPopChoice(c_64);
                          }
                        else
                          {
                            t = b_64;
                            t = z_142;
                            t = is_string_0_0(t);
                            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, z_142)));
                          }
                      }
                    }
                }
              }
          }
        }
      else
        {
          ATerm d_64 = t;
          int e_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_143(z_142, t);
              LocalPopChoice(e_64);
            }
          else
            {
              t = d_64;
              {
                ATerm f_64 = t;
                int g_64 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_143(z_142, t);
                    LocalPopChoice(g_64);
                  }
                else
                  {
                    t = f_64;
                    t = z_142;
                    t = is_string_0_0(t);
                    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, z_142)));
                  }
              }
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Option_1))
        {
          a_143 = ATgetArgument(t, 0);
          {
            ATerm h_64 = t;
            int i_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_71 = NULL,i_72 = NULL,j_72 = NULL;
                t = a_143;
                if(match_cons(t, sym_XtcQuery_1))
                  {
                    i_72 = ATgetArgument(t, 0);
                    {
                      ATerm u_73 = NULL,d_32 = NULL;
                      t = SSLgetAnnotations(a_143);
                      u_73 = t;
                      t = (ATerm) ATmakeAppl(sym_XtcQuery_1, i_72);
                      d_32 = t;
                      t = SSLsetAnnotations(d_32, u_73);
                    }
                  }
                else
                  {
                    ATerm i_74 = NULL,u_32 = NULL;
                    if(match_cons(t, sym_XtcQuery_2))
                      {
                        i_72 = ATgetArgument(t, 0);
                        j_72 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_143);
                    i_74 = t;
                    t = (ATerm) ATmakeAppl(sym_XtcQuery_2, i_72, j_72);
                    u_32 = t;
                    t = SSLsetAnnotations(u_32, i_74);
                  }
                {
                  ATerm j_64 = t;
                  int k_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_73 = NULL;
                      b_73 = t;
                      t = xtc_find_loc_1_0(Hd_0_0, t);
                      g_71 = t;
                      t = b_73;
                      LocalPopChoice(k_64);
                      {
                        ATerm g_73 = NULL,s_74 = NULL,t_74 = NULL;
                        g_73 = t;
                        t = term_x_63;
                        s_74 = t;
                        t = term_d_23;
                        t_74 = t;
                        t = g_73;
                        t = log_0_3(t_74, s_74, g_73, t);
                      }
                    }
                  else
                    {
                      t = j_64;
                      {
                        ATerm i_73 = NULL,j_75 = NULL,k_75 = NULL;
                        i_73 = t;
                        t = term_y_63;
                        j_75 = t;
                        t = term_p_47;
                        k_75 = t;
                        t = i_73;
                        t = log_0_3(k_75, j_75, i_73, t);
                      }
                    }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(g_71)))));
                LocalPopChoice(i_64);
              }
            else
              {
                t = h_64;
                {
                  ATerm l_64 = t;
                  int m_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_143(z_142, t);
                      LocalPopChoice(m_64);
                    }
                  else
                    {
                      t = l_64;
                      {
                        ATerm n_64 = t;
                        int o_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = p_143(z_142, t);
                            LocalPopChoice(o_64);
                          }
                        else
                          {
                            t = n_64;
                            t = z_142;
                            t = is_string_0_0(t);
                            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, z_142)));
                          }
                      }
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              a_143 = ATgetArgument(t, 0);
              b_143 = ATgetArgument(t, 1);
              {
                ATerm p_64 = t;
                int q_64 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = o_143(z_142, t);
                    LocalPopChoice(q_64);
                  }
                else
                  {
                    t = p_64;
                    {
                      ATerm r_64 = t;
                      int s_64 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_143(z_142, t);
                          LocalPopChoice(s_64);
                        }
                      else
                        {
                          t = r_64;
                          {
                            ATerm t_64 = t;
                            int u_64 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_142;
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, z_142)));
                                LocalPopChoice(u_64);
                              }
                            else
                              {
                                t = t_64;
                                {
                                  ATerm v_64 = t;
                                  int w_64 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = q_143(a_143, b_143, z_142, t);
                                      LocalPopChoice(w_64);
                                    }
                                  else
                                    {
                                      t = v_64;
                                      {
                                        ATerm x_64 = t;
                                        int y_64 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_143(a_143, b_143, z_142, t);
                                            LocalPopChoice(y_64);
                                          }
                                        else
                                          {
                                            t = x_64;
                                            {
                                              ATerm z_64 = t;
                                              int a_65 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = a_143;
                                                  t = is_string_0_0(t);
                                                  t = b_143;
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, a_143), (ATerm) ATmakeAppl(sym_String_1, b_143)));
                                                  LocalPopChoice(a_65);
                                                }
                                              else
                                                {
                                                  t = z_64;
                                                  {
                                                    static ATerm l_16 (ATerm t);
                                                    static ATerm l_16 (ATerm t)
                                                    {
                                                      ATerm k_143 = NULL;
                                                      k_143 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, a_143, k_143);
                                                      t = xtc_desugar_arg_0_0(t);
                                                      return(t);
                                                    }
                                                    t = a_143;
                                                    t = is_string_0_0(t);
                                                    t = b_143;
                                                    t = mapconcat_1_0(l_16, t);
                                                  }
                                                }
                                            }
                                          }
                                      }
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
              ATerm b_65 = t;
              int c_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_143(z_142, t);
                  LocalPopChoice(c_65);
                }
              else
                {
                  t = b_65;
                  {
                    ATerm d_65 = t;
                    int e_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = p_143(z_142, t);
                        LocalPopChoice(e_65);
                      }
                    else
                      {
                        t = d_65;
                        t = z_142;
                        t = is_string_0_0(t);
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, z_142)));
                      }
                  }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm j_144 = NULL,k_144 = NULL,m_144 = NULL,n_144 = NULL,o_144 = NULL,p_144 = NULL;
  if(match_cons(t, sym_TVarStar_4))
    {
      m_144 = ATgetArgument(t, 0);
      n_144 = ATgetArgument(t, 1);
      o_144 = ATgetArgument(t, 2);
      p_144 = ATgetArgument(t, 3);
      t = o_144;
      if(match_cons(t, sym_Some_1))
        {
          j_144 = ATgetArgument(t, 0);
          t = p_144;
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_TVarStar_4, m_144, n_144, (ATerm)ATmakeAppl(sym_Some_1, j_144), term_h_65);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = p_144;
          if(match_cons(t, sym_Some_1))
            {
              k_144 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, m_144, n_144, term_k_65, (ATerm) ATmakeAppl(sym_Some_1, k_144));
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, m_144, n_144, term_k_65, term_h_65);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          m_144 = ATgetArgument(t, 0);
          n_144 = ATgetArgument(t, 1);
          o_144 = ATgetArgument(t, 2);
          p_144 = ATgetArgument(t, 3);
          t = o_144;
          if(match_cons(t, sym_Some_1))
            {
              j_144 = ATgetArgument(t, 0);
              t = p_144;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_TVarPlus_4, m_144, n_144, (ATerm)ATmakeAppl(sym_Some_1, j_144), term_h_65);
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = p_144;
              if(match_cons(t, sym_Some_1))
                {
                  k_144 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, m_144, n_144, term_k_65, (ATerm) ATmakeAppl(sym_Some_1, k_144));
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, m_144, n_144, term_k_65, term_h_65);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              m_144 = ATgetArgument(t, 0);
              n_144 = ATgetArgument(t, 1);
              o_144 = ATgetArgument(t, 2);
              p_144 = ATgetArgument(t, 3);
              t = o_144;
              if(match_cons(t, sym_Some_1))
                {
                  j_144 = ATgetArgument(t, 0);
                  t = p_144;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_TVarOne_4, m_144, n_144, (ATerm)ATmakeAppl(sym_Some_1, j_144), term_h_65);
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = p_144;
                  if(match_cons(t, sym_Some_1))
                    {
                      k_144 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, m_144, n_144, term_k_65, (ATerm) ATmakeAppl(sym_Some_1, k_144));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, m_144, n_144, term_k_65, term_h_65);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  m_144 = ATgetArgument(t, 0);
                  n_144 = ATgetArgument(t, 1);
                  o_144 = ATgetArgument(t, 2);
                  p_144 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = o_144;
              if(match_cons(t, sym_Some_1))
                {
                  j_144 = ATgetArgument(t, 0);
                  t = p_144;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_TVarOpt_4, m_144, n_144, (ATerm)ATmakeAppl(sym_Some_1, j_144), term_h_65);
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = p_144;
                  if(match_cons(t, sym_Some_1))
                    {
                      k_144 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, m_144, n_144, term_k_65, (ATerm) ATmakeAppl(sym_Some_1, k_144));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, m_144, n_144, term_k_65, term_h_65);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm c_146 = NULL,d_146 = NULL,f_146 = NULL,g_146 = NULL;
  if(match_cons(t, sym_Template_2))
    {
      f_146 = ATgetArgument(t, 0);
      g_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_146;
  if(match_cons(t, sym_Some_1))
    {
      c_146 = ATgetArgument(t, 0);
      {
        ATerm j_146 = NULL;
        t = f_146;
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = c_146;
        if(match_cons(t, sym_Layout_1))
          {
            d_146 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_54), term_p_65), term_o_65), term_m_65), d_146);
        t = union_0_0(t);
        j_146 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_q_65, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, j_146)));
      }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Template_2, f_146, term_s_65);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm t_65 = ATgetArgument(t, 0);
      if(!(match_cons(t_65, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_e_59;
  return(t);
}
static ATerm c_44 (ATerm t)
{
  t = term_e_59;
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm m_146 = NULL,n_146 = NULL,o_146 = NULL;
  o_146 = t;
  if(match_cons(t, sym__2))
    {
      m_146 = ATgetArgument(t, 0);
      n_146 = ATgetArgument(t, 1);
      {
        ATerm u_65 = t;
        int v_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_146;
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, o_146);
            LocalPopChoice(v_65);
          }
        else
          {
            t = u_65;
            {
              ATerm w_65 = t;
              int x_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_146;
                  t = is_string_0_0(t);
                  t = n_146;
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, m_146, n_146);
                  LocalPopChoice(x_65);
                }
              else
                {
                  t = w_65;
                  {
                    ATerm y_65 = t;
                    int z_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_146;
                        t = is_string_0_0(t);
                        t = n_146;
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, m_146, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_66, (ATerm) ATmakeAppl(sym_String_1, n_146))));
                        LocalPopChoice(z_65);
                      }
                    else
                      {
                        t = y_65;
                        t = o_146;
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_1, o_146);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      ATerm b_66 = t;
      int c_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_146;
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, o_146);
          LocalPopChoice(c_66);
        }
      else
        {
          t = b_66;
          t = o_146;
          t = is_string_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, o_146);
        }
    }
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm x_146 = NULL,y_146 = NULL,z_146 = NULL;
  z_146 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  x_146 = t;
  t = z_146;
  t = base_filename_0_0(t);
  y_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_146, y_146);
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm a_147 = NULL,b_147 = NULL;
  b_147 = t;
  t = get_extension_0_0(t);
  a_147 = t;
  {
    ATerm d_66 = t;
    int e_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_147;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = a_147;
        LocalPopChoice(e_66);
        t = (ATerm) ATinsert(ATempty, term_i_66);
      }
    else
      {
        t = d_66;
        t = b_147;
        {
          ATerm j_66 = t;
          int k_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_147;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = b_147;
              LocalPopChoice(k_66);
              t = (ATerm) ATinsert(ATempty, term_n_66);
            }
          else
            {
              t = j_66;
              t = b_147;
              {
                ATerm o_66 = t;
                int p_66 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_147;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = b_147;
                    LocalPopChoice(p_66);
                    t = (ATerm) ATinsert(ATempty, term_n_66);
                  }
                else
                  {
                    t = o_66;
                    t = b_147;
                    {
                      ATerm q_66 = t;
                      int r_66 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_147;
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = b_147;
                          LocalPopChoice(r_66);
                          t = (ATerm) ATinsert(ATempty, term_u_66);
                        }
                      else
                        {
                          t = q_66;
                          t = b_147;
                          {
                            ATerm v_66 = t;
                            int w_66 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_147;
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = b_147;
                                LocalPopChoice(w_66);
                                t = (ATerm) ATinsert(ATempty, term_a_67);
                              }
                            else
                              {
                                t = v_66;
                                t = b_147;
                                {
                                  ATerm b_67 = t;
                                  int c_67 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_147;
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = b_147;
                                      LocalPopChoice(c_67);
                                      t = (ATerm) ATinsert(ATempty, term_a_67);
                                    }
                                  else
                                    {
                                      t = b_67;
                                      t = b_147;
                                      {
                                        ATerm d_67 = t;
                                        int e_67 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = a_147;
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = b_147;
                                            LocalPopChoice(e_67);
                                            t = (ATerm) ATinsert(ATempty, term_h_67);
                                          }
                                        else
                                          {
                                            t = d_67;
                                            t = b_147;
                                            {
                                              ATerm i_67 = t;
                                              int j_67 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = a_147;
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = b_147;
                                                  LocalPopChoice(j_67);
                                                  t = (ATerm) ATinsert(ATempty, term_m_67);
                                                }
                                              else
                                                {
                                                  t = i_67;
                                                  t = (ATerm) ATempty;
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                              }
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
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm n_67 = t;
  int o_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_147 = NULL;
      c_147 = t;
      t = has_no_extension_0_0(t);
      t = c_147;
      LocalPopChoice(o_67);
      t = (ATerm) ATinsert(ATempty, term_u_67);
    }
  else
    {
      t = n_67;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm d_147 = NULL,e_147 = NULL,f_147 = NULL;
  f_147 = t;
  {
    ATerm v_67 = t;
    int w_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = has_no_extension_0_0(t);
        t = f_147;
        LocalPopChoice(w_67);
        t = (ATerm) ATinsert(ATempty, term_u_67);
      }
    else
      {
        t = v_67;
        t = (ATerm) ATempty;
      }
  }
  d_147 = t;
  t = f_147;
  t = xtc_default_xt_type_0_0(t);
  e_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_147, e_147);
  t = conc_0_0(t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = filter_1_0(v_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  t = term_x_67;
  r_75 = t;
  t = term_b_24;
  t_75 = t;
  t = term_p_47;
  s_75 = t;
  t = term_b_24;
  t = log_0_3(s_75, r_75, t_75, t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL;
  if(match_cons(t, sym__2))
    {
      j_147 = ATgetArgument(t, 0);
      l_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_147;
  if(match_cons(t, sym_Import_0))
    {
      ATerm n_147 = NULL;
      t = l_147;
      t = map_1_0(w_16, t);
      n_147 = t;
      t = (ATerm) ATmakeAppl(sym_Reference_1, n_147);
    }
  else
    {
      ATerm r_147 = NULL;
      if(match_cons(t, sym_Tool_1))
        {
          k_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_147;
      t = map_1_0(a_17, t);
      r_147 = t;
      t = (ATerm) ATmakeAppl(sym_Registration_2, k_147, r_147);
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm o_147 = NULL;
  o_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_147, (ATerm) ATempty);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm s_147 = NULL,t_147 = NULL;
  if(match_cons(t, sym__2))
    {
      s_147 = ATgetArgument(t, 0);
      t_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_44(s_147, t_147, t);
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(m_16, u_16, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm v_147 = NULL;
  t = xtc_convert_0_0(t);
  v_147 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, v_147);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm w_147 = NULL,x_147 = NULL;
  if(match_cons(t, sym__2))
    {
      w_147 = ATgetArgument(t, 0);
      x_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_44(w_147, x_147, t);
  return(t);
}
static ATerm d_44 (ATerm h_8, ATerm i_8, ATerm t)
{
  ATerm y_147 = NULL,z_147 = NULL;
  t = i_8;
  t = xtc_default_xt_meta_0_0(t);
  z_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_66, (ATerm) ATmakeAppl(sym_String_1, h_8))), z_147);
  t = conc_0_0(t);
  y_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_8, y_147);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm d_148 = NULL,e_148 = NULL;
  if(match_cons(t, sym__2))
    {
      d_148 = ATgetArgument(t, 0);
      e_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_44(d_148, e_148, t);
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm a_148 = NULL,b_148 = NULL,c_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_67 = ATgetArgument(t, 0);
      if(match_cons(y_67, sym_Tool_1))
        {
          a_148 = ATgetArgument(y_67, 0);
        }
      else
        _fail(t);
      b_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_148;
  t = map_1_0(b_17, t);
  c_148 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, a_148, c_148);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm g_148 = NULL,h_148 = NULL;
  if(match_cons(t, sym__2))
    {
      g_148 = ATgetArgument(t, 0);
      h_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_44(g_148, h_148, t);
  return(t);
}
static ATerm e_44 (ATerm e_8, ATerm f_8, ATerm t)
{
  ATerm f_148 = NULL;
  t = f_8;
  t = map_1_0(f_17, t);
  f_148 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, e_8, f_148);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm k_148 = NULL;
  k_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_148, (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm i_148 = NULL,j_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_67 = ATgetArgument(t, 0);
      if(!(match_cons(z_67, sym_Import_0)))
        _fail(t);
      i_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_148;
  t = map_1_0(k_17, t);
  j_148 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, j_148);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm m_148 = NULL;
  m_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_148, (ATerm) ATempty);
  return(t);
}
static ATerm f_44 (ATerm c_8, ATerm t)
{
  ATerm l_148 = NULL;
  t = c_8;
  t = map_1_0(n_17, t);
  l_148 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, l_148);
  return(t);
}
ATerm xtc_search_0_0 (ATerm t)
{
  t = xtc_search_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_search_1_0 (ATerm y_1 (ATerm), ATerm t)
{
  ATerm p_148 = NULL,q_148 = NULL,r_148 = NULL;
  q_148 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      r_148 = ATgetArgument(t, 0);
      {
        ATerm a_68 = t;
        int b_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_148 = NULL;
            t = r_148;
            t = is_list_0_0(t);
            t = q_148;
            {
              static ATerm o_17 (ATerm t);
              static ATerm o_17 (ATerm t)
              {
                t = xtc_has_meta_0_1(r_148, t);
                return(t);
              }
              t = xtc_query_all_2_0(o_17, y_1, t);
            }
            u_148 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_148, u_148);
            LocalPopChoice(b_68);
          }
        else
          {
            t = a_68;
            {
              ATerm x_148 = NULL;
              t = r_148;
              t = is_string_0_0(t);
              t = q_148;
              t = xtc_query_one_2_0(_id, y_1, t);
              x_148 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_148, x_148);
            }
          }
      }
    }
  else
    {
      ATerm c_149 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          r_148 = ATgetArgument(t, 0);
          p_148 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_148;
      t = is_string_0_0(t);
      t = p_148;
      t = is_list_0_0(t);
      t = q_148;
      {
        static ATerm p_17 (ATerm t);
        static ATerm p_17 (ATerm t)
        {
          t = xtc_has_meta_0_1(p_148, t);
          return(t);
        }
        t = xtc_query_one_2_0(p_17, y_1, t);
      }
      c_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_148, c_149);
    }
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm e_30 (ATerm), ATerm f_30 (ATerm), ATerm p_7, ATerm t)
{
  t = p_7;
  t = table_getlist_0_0(t);
  {
    static ATerm u_17 (ATerm t);
    static ATerm u_17 (ATerm t)
    {
      ATerm d_149 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm c_68 = ATgetArgument(t, 0);
          d_149 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_149;
      t = e_30(t);
      return(t);
    }
    t = filter_1_0(u_17, t);
  }
  t = flatten_list_0_0(t);
  t = f_30(t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm c_30 (ATerm), ATerm d_30 (ATerm), ATerm o_7, ATerm t)
{
  ATerm e_149 = NULL;
  e_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_7, e_149);
  t = table_get_0_0(t);
  t = c_30(t);
  t = d_30(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm a_30 (ATerm), ATerm b_30 (ATerm), ATerm t)
{
  ATerm f_149 = NULL;
  f_149 = t;
  {
    ATerm d_68 = t;
    int e_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_149 = NULL,d_76 = NULL,p_89 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_f_68, f_149);
        t = table_get_0_0(t);
        t = a_30(t);
        t = b_30(t);
        g_149 = t;
        t = term_g_68;
        d_76 = t;
        t = term_d_23;
        p_89 = t;
        t = f_149;
        t = log_0_3(p_89, d_76, f_149, t);
        t = g_149;
        LocalPopChoice(e_68);
      }
    else
      {
        t = d_68;
        {
          ATerm i_149 = NULL;
          t = term_h_68;
          i_149 = t;
          t = f_149;
          t = xtc_query_all_2_1(a_30, b_30, i_149, t);
          t = xtc_cache_put_0_1(f_149, t);
        }
      }
  }
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm y_29 (ATerm), ATerm z_29 (ATerm), ATerm t)
{
  ATerm l_149 = NULL,n_149 = NULL;
  l_149 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      n_149 = ATgetArgument(t, 0);
      t = l_149;
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          n_149 = ATgetArgument(t, 0);
          {
            ATerm j_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_149;
    }
  {
    ATerm k_68 = t;
    int m_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_149 = NULL,g_91 = NULL,h_91 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_f_68, l_149);
        t = table_get_0_0(t);
        t = y_29(t);
        t = z_29(t);
        p_149 = t;
        t = term_g_68;
        g_91 = t;
        t = term_d_23;
        h_91 = t;
        t = l_149;
        t = log_0_3(h_91, g_91, l_149, t);
        t = p_149;
        LocalPopChoice(m_68);
      }
    else
      {
        t = k_68;
        t = (ATerm) ATmakeAppl(sym__2, term_h_68, n_149);
        t = table_get_0_0(t);
        t = y_29(t);
        t = z_29(t);
        t = xtc_cache_put_0_1(l_149, t);
      }
  }
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm w_1, ATerm t)
{
  ATerm y_149 = NULL;
  y_149 = t;
  {
    ATerm n_68 = t;
    int o_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_1;
        t = Nil_0_0(t);
        t = y_149;
        LocalPopChoice(o_68);
      }
    else
      {
        t = n_68;
        {
          ATerm q_68 = t;
          int r_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_1;
              t = is_list_0_0(t);
              {
                ATerm t_68 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_68;
                  }
              }
              {
                static ATerm v_17 (ATerm t);
                static ATerm v_17 (ATerm t)
                {
                  ATerm s_91 = NULL;
                  s_91 = t;
                  t = y_149;
                  t = xtc_has_meta_0_1(s_91, t);
                  t = s_91;
                  return(t);
                }
                t = filter_1_0(v_17, t);
              }
              if((w_1 != t))
                {
                  _fail(t);
                }
              t = y_149;
              LocalPopChoice(r_68);
            }
          else
            {
              t = q_68;
              t = y_149;
              {
                static ATerm d_18 (ATerm t);
                static ATerm d_18 (ATerm t)
                {
                  if((w_1 != t))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = collect_all_1_0(d_18, t);
              }
              {
                ATerm u_68 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_68;
                  }
              }
              t = y_149;
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm b_7, ATerm t)
{
  ATerm c_150 = NULL,x_91 = NULL,b_92 = NULL;
  c_150 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_68, b_7, (ATerm) ATinsert(ATempty, c_150));
  t = table_union_0_0(t);
  t = term_x_68;
  x_91 = t;
  t = term_d_23;
  b_92 = t;
  t = b_7;
  t = log_0_3(b_92, x_91, b_7, t);
  t = c_150;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm a_7, ATerm t)
{
  ATerm e_150 = NULL;
  e_150 = t;
  t = a_7;
  t = is_string_0_0(t);
  t = e_150;
  {
    static ATerm f_18 (ATerm t);
    static ATerm f_18 (ATerm t)
    {
      ATerm f_150 = NULL;
      f_150 = t;
      t = SSL_explode_term(f_150);
      if(match_cons(t, sym__2))
        {
          if((a_7 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm z_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_150;
      return(t);
    }
    t = collect_all_1_0(f_18, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
ATerm xtc_fetch_loc_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL;
  i_150 = t;
  t = term_w_47;
  h_150 = t;
  t = i_150;
  t = xtc_fetch_meta_0_1(h_150, t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      g_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_150;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm k_150 = NULL;
  if(match_cons(t, sym_XtcMeta_2))
    {
      ATerm b_69 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_69) != ATmakeSymbol("version", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_69 = ATgetArgument(t, 1);
        if(match_cons(c_69, sym_String_1))
          {
            k_150 = ATgetArgument(c_69, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_150;
  return(t);
}
ATerm xtc_fetch_version_0_0 (ATerm t)
{
  ATerm j_150 = NULL;
  t = filter_1_0(i_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_150 = ATgetFirst((ATermList) t);
      {
        ATerm d_69 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_150;
  return(t);
}
ATerm xtc_register_reference_0_1 (ATerm v_1, ATerm t)
{
  ATerm m_150 = NULL,n_150 = NULL,o_150 = NULL;
  o_150 = t;
  if(match_cons(t, sym__2))
    {
      m_150 = ATgetArgument(t, 0);
      n_150 = ATgetArgument(t, 1);
      {
        ATerm e_69 = t;
        int m_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_150, n_150)));
            t = xtc_register_0_1(v_1, t);
            LocalPopChoice(m_69);
          }
        else
          {
            t = e_69;
            t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_150, (ATerm) ATempty)));
            t = xtc_register_0_1(v_1, t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_150, (ATerm) ATempty)));
      t = xtc_register_0_1(v_1, t);
    }
  return(t);
}
ATerm xtc_register_reference_0_0 (ATerm t)
{
  ATerm t_150 = NULL,u_150 = NULL;
  u_150 = t;
  t = (ATerm) ATempty;
  t_150 = t;
  t = u_150;
  t = xtc_register_reference_0_1(t_150, t);
  return(t);
}
ATerm xtc_register_resource_0_1 (ATerm u_1, ATerm t)
{
  ATerm w_150 = NULL,y_150 = NULL,z_150 = NULL;
  if(match_cons(t, sym__3))
    {
      y_150 = ATgetArgument(t, 0);
      z_150 = ATgetArgument(t, 1);
      w_150 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Registration_2, y_150, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_150, w_150)));
      t = xtc_register_0_1(u_1, t);
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          y_150 = ATgetArgument(t, 0);
          z_150 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Registration_2, y_150, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_150, (ATerm) ATempty)));
      t = xtc_register_0_1(u_1, t);
    }
  return(t);
}
ATerm xtc_register_resource_0_0 (ATerm t)
{
  ATerm f_151 = NULL,g_151 = NULL;
  g_151 = t;
  t = (ATerm) ATempty;
  f_151 = t;
  t = g_151;
  t = xtc_register_resource_0_1(f_151, t);
  return(t);
}
ATerm xtc_register_component_0_1 (ATerm l_1, ATerm t)
{
  ATerm i_151 = NULL,k_151 = NULL,l_151 = NULL;
  if(match_cons(t, sym__3))
    {
      k_151 = ATgetArgument(t, 0);
      l_151 = ATgetArgument(t, 1);
      i_151 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Registration_2, k_151, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_151, i_151)));
      t = xtc_register_0_1(l_1, t);
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          k_151 = ATgetArgument(t, 0);
          l_151 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Registration_2, k_151, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_151, (ATerm) ATempty)));
      t = xtc_register_0_1(l_1, t);
    }
  return(t);
}
ATerm xtc_register_component_0_0 (ATerm t)
{
  ATerm r_151 = NULL,s_151 = NULL;
  s_151 = t;
  t = (ATerm) ATempty;
  r_151 = t;
  t = s_151;
  t = xtc_register_component_0_1(r_151, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm d_152 = NULL,e_152 = NULL,f_152 = NULL;
  f_152 = t;
  t = Fst_0_0(t);
  d_152 = t;
  t = f_152;
  t = Snd_0_0(t);
  e_152 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_69, d_152, e_152);
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm c_0, ATerm t)
{
  ATerm x_151 = NULL,y_151 = NULL;
  if(match_cons(t, sym_Reference_1))
    {
      x_151 = ATgetArgument(t, 0);
      t = x_151;
      {
        static ATerm l_18 (ATerm t);
        static ATerm l_18 (ATerm t)
        {
          static ATerm y_18 (ATerm t);
          static ATerm y_18 (ATerm t)
          {
            ATerm c_152 = NULL;
            c_152 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_152, c_0);
            t = union_0_0(t);
            return(t);
          }
          t = _2_0(_id, y_18, t);
          return(t);
        }
        t = map_1_0(l_18, t);
      }
      t = map_1_0(a_19, t);
    }
  else
    {
      ATerm i_152 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          x_151 = ATgetArgument(t, 0);
          y_151 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_151;
      {
        static ATerm b_19 (ATerm t);
        static ATerm b_19 (ATerm t)
        {
          static ATerm c_19 (ATerm t);
          static ATerm c_19 (ATerm t)
          {
            ATerm l_152 = NULL;
            l_152 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_152, c_0);
            t = union_0_0(t);
            return(t);
          }
          t = _2_0(_id, c_19, t);
          return(t);
        }
        t = map_1_0(b_19, t);
      }
      i_152 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_68, x_151, i_152);
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm m_152 = NULL,n_152 = NULL;
  n_152 = t;
  t = (ATerm) ATempty;
  m_152 = t;
  t = n_152;
  t = xtc_register_0_1(m_152, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm z_5, ATerm t)
{
  static ATerm d_19 (ATerm t);
  static ATerm d_19 (ATerm t)
  {
    ATerm p_152 = NULL;
    ATerm o_69 = t;
    int q_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_152 = NULL;
        t_152 = t;
        t = SSL_explode_term(t_152);
        if(match_cons(t, sym__2))
          {
            p_152 = ATgetArgument(t, 0);
            {
              ATerm s_69 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = z_5;
        {
          ATerm t_69 = t;
          if((PushChoice() == 0))
            {
              static ATerm e_19 (ATerm t);
              static ATerm e_19 (ATerm t)
              {
                ATerm s_93 = NULL;
                s_93 = t;
                t = SSL_explode_term(s_93);
                if(match_cons(t, sym__2))
                  {
                    if((p_152 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    {
                      ATerm v_69 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = s_93;
                return(t);
              }
              t = SRTS_one(e_19, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_69;
            }
        }
        t = (ATerm) ATinsert(ATempty, t_152);
        LocalPopChoice(q_69);
      }
    else
      {
        t = o_69;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(d_19, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm x_5, ATerm t)
{
  ATerm v_152 = NULL,w_152 = NULL;
  if(match_cons(t, sym__2))
    {
      v_152 = ATgetArgument(t, 0);
      w_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_44(x_5, v_152, w_152, t);
  return(t);
}
static ATerm g_44 (ATerm x_5, ATerm y_5, ATerm p_67, ATerm t)
{
  ATerm x_152 = NULL,y_152 = NULL;
  t = p_67;
  t = xtc_filter_meta_0_1(x_5, t);
  y_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_152, x_5);
  t = union_0_0(t);
  x_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, x_152);
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm w_5, ATerm t)
{
  static ATerm g_19 (ATerm t);
  static ATerm g_19 (ATerm t)
  {
    ATerm b_153 = NULL;
    b_153 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_153, w_5);
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(_id, g_19, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm v_5, ATerm t)
{
  static ATerm s_19 (ATerm t);
  static ATerm s_19 (ATerm t)
  {
    static ATerm t_19 (ATerm t);
    static ATerm t_19 (ATerm t)
    {
      ATerm f_153 = NULL;
      f_153 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_153, v_5);
      t = union_0_0(t);
      return(t);
    }
    t = _2_0(_id, t_19, t);
    return(t);
  }
  t = map_1_0(s_19, t);
  return(t);
}
ATerm xtc_create_tables_0_0 (ATerm t)
{
  ATerm g_153 = NULL;
  g_153 = t;
  t = map_1_0(table_create_0_0, t);
  t = g_153;
  return(t);
}
ATerm xtc_flush_0_0 (ATerm t)
{
  ATerm h_153 = NULL;
  h_153 = t;
  t = term_f_68;
  t = table_destroy_0_0(t);
  t = h_153;
  return(t);
}
ATerm xtc_reset_0_0 (ATerm t)
{
  ATerm i_153 = NULL;
  i_153 = t;
  t = term_h_68;
  t = table_destroy_0_0(t);
  t = term_n_69;
  t = table_destroy_0_0(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_69), term_h_68);
  t = map_1_0(table_create_0_0, t);
  t = i_153;
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_69 = t;
  int x_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_69;
      t = getenv_0_0(t);
      LocalPopChoice(x_69);
    }
  else
    {
      t = w_69;
      {
        ATerm z_69 = t;
        int a_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(a_70);
          }
        else
          {
            t = z_69;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_2 (ATerm t_5, ATerm u_5, ATerm t)
{
  ATerm j_153 = NULL;
  j_153 = t;
  {
    ATerm b_70 = t;
    int c_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_68;
        t = table_keys_0_0(t);
        {
          ATerm d_70 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_70;
            }
        }
        LocalPopChoice(c_70);
      }
    else
      {
        t = b_70;
        t = t_5;
        t = xtc_load_0_1(u_5, t);
      }
  }
  t = j_153;
  return(t);
}
ATerm xtc_init_0_1 (ATerm s_5, ATerm t)
{
  ATerm k_153 = NULL,l_153 = NULL;
  k_153 = t;
  t = (ATerm) ATempty;
  l_153 = t;
  t = k_153;
  {
    ATerm g_70 = t;
    int j_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_68;
        t = table_keys_0_0(t);
        {
          ATerm k_70 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_70;
            }
        }
        LocalPopChoice(j_70);
      }
    else
      {
        t = g_70;
        t = s_5;
        t = xtc_load_0_1(l_153, t);
      }
  }
  t = k_153;
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm m_153 = NULL,n_153 = NULL,o_153 = NULL;
  m_153 = t;
  t = xtc_location_0_0(t);
  n_153 = t;
  t = (ATerm) ATempty;
  o_153 = t;
  t = m_153;
  {
    ATerm u_70 = t;
    int a_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_68;
        t = table_keys_0_0(t);
        {
          ATerm b_71 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_71;
            }
        }
        LocalPopChoice(a_71);
      }
    else
      {
        t = u_70;
        t = n_153;
        t = xtc_load_0_1(o_153, t);
      }
  }
  t = m_153;
  return(t);
}
ATerm xtc_load_url_0_0 (ATerm t)
{
  ATerm p_153 = NULL;
  p_153 = t;
  {
    ATerm d_71 = t;
    int f_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_URL_1, p_153);
        t = read_from_0_0(t);
        LocalPopChoice(f_71);
      }
    else
      {
        t = d_71;
        {
          ATerm c_95 = NULL,e_95 = NULL;
          t = term_j_71;
          c_95 = t;
          t = term_p_47;
          e_95 = t;
          t = p_153;
          t = log_0_3(e_95, c_95, p_153, t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm w_153 = NULL;
  w_153 = t;
  {
    ATerm k_71 = t;
    int l_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_153);
        t = read_from_0_0(t);
        LocalPopChoice(l_71);
      }
    else
      {
        t = k_71;
        {
          ATerm m_71 = t;
          int n_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_153;
              {
                ATerm o_71 = t;
                if((PushChoice() == 0))
                  {
                    t = file_exists_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_71;
                  }
              }
              t = term_p_71;
              t = xtc_save_file_0_1(w_153, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_153);
              t = read_from_0_0(t);
              LocalPopChoice(n_71);
            }
          else
            {
              t = m_71;
              {
                ATerm m_95 = NULL,p_95 = NULL;
                t = term_q_71;
                m_95 = t;
                t = term_p_47;
                p_95 = t;
                t = w_153;
                t = log_0_3(p_95, m_95, w_153, t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm xtc_load_0_1 (ATerm q_5, ATerm t)
{
  ATerm d_154 = NULL,e_154 = NULL,f_154 = NULL,g_154 = NULL,h_154 = NULL,i_154 = NULL,j_154 = NULL,k_154 = NULL,c_33 = NULL,b_33 = NULL,q_154 = NULL,r_154 = NULL;
  d_154 = t;
  {
    ATerm u_71 = t;
    int v_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_url_http_0_0(t);
        t = d_154;
        LocalPopChoice(v_71);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = u_71;
        t = xtc_load_file_0_0(t);
      }
  }
  r_154 = t;
  if(match_cons(t, sym_Repository_1))
    {
      q_154 = ATgetArgument(t, 0);
      {
        ATerm w_71 = t;
        int y_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_96 = NULL,a_33 = NULL;
            t = SSLgetAnnotations(r_154);
            l_96 = t;
            t = (ATerm) ATmakeAppl(sym_Repository_1, q_154);
            a_33 = t;
            t = SSLsetAnnotations(a_33, l_96);
            LocalPopChoice(y_71);
          }
        else
          {
            t = w_71;
            {
              ATerm u_154 = NULL,d_97 = NULL,g_97 = NULL;
              t = term_a_72;
              d_97 = t;
              t = term_l_46;
              g_97 = t;
              t = d_154;
              t = log_0_3(g_97, d_97, d_154, t);
              t = r_154;
              t = xtc_convert_0_0(t);
              u_154 = t;
              t = (ATerm) ATmakeAppl(sym_Repository_1, u_154);
            }
          }
      }
    }
  else
    {
      ATerm x_154 = NULL,p_97 = NULL,w_97 = NULL;
      t = term_a_72;
      p_97 = t;
      t = term_l_46;
      w_97 = t;
      t = d_154;
      t = log_0_3(w_97, p_97, d_154, t);
      t = r_154;
      t = xtc_convert_0_0(t);
      x_154 = t;
      t = (ATerm) ATmakeAppl(sym_Repository_1, x_154);
    }
  k_154 = t;
  if(match_cons(t, sym_Repository_1))
    {
      i_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_154);
  h_154 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, i_154);
  b_33 = t;
  t = SSLsetAnnotations(b_33, h_154);
  j_154 = t;
  if(match_cons(t, sym_Repository_1))
    {
      f_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_154);
  e_154 = t;
  t = f_154;
  {
    static ATerm v_19 (ATerm t);
    static ATerm v_19 (ATerm t)
    {
      t = xtc_register_0_1(q_5, t);
      return(t);
    }
    t = map_1_0(v_19, t);
  }
  g_154 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, g_154);
  c_33 = t;
  t = SSLsetAnnotations(c_33, e_154);
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm z_154 = NULL,a_155 = NULL;
  a_155 = t;
  t = (ATerm) ATempty;
  z_154 = t;
  t = a_155;
  t = xtc_load_0_1(z_154, t);
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm b_155 = NULL;
  b_155 = t;
  {
    ATerm c_72 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_72;
      }
  }
  t = term_p_71;
  t = xtc_save_file_0_1(b_155, t);
  return(t);
}
ATerm xtc_dump_0_1 (ATerm o_5, ATerm t)
{
  t = xtc_table2aterm_2_0(_id, _id, t);
  t = xtc_save_file_0_1(o_5, t);
  return(t);
}
ATerm xtc_dump_0_0 (ATerm t)
{
  ATerm g_155 = NULL,h_155 = NULL;
  g_155 = t;
  t = xtc_location_0_0(t);
  h_155 = t;
  t = g_155;
  t = xtc_dump_0_1(h_155, t);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm e_72 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_XtcLoaded_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_72;
    }
  return(t);
}
static ATerm q_20 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
ATerm xtc_save_0_1 (ATerm n_5, ATerm t)
{
  static ATerm x_19 (ATerm t);
  static ATerm x_19 (ATerm t)
  {
    ATerm j_155 = NULL;
    j_155 = t;
    {
      ATerm f_72 = t;
      if((PushChoice() == 0))
        {
          static ATerm o_20 (ATerm t);
          static ATerm o_20 (ATerm t)
          {
            t = SRTS_one(q_20, t);
            return(t);
          }
          t = _2_0(_id, o_20, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_72;
        }
    }
    t = j_155;
    return(t);
  }
  t = xtc_table2aterm_2_0(x_19, y_19, t);
  t = xtc_save_file_0_1(n_5, t);
  return(t);
}
ATerm xtc_save_0_0 (ATerm t)
{
  ATerm l_155 = NULL,m_155 = NULL;
  l_155 = t;
  t = xtc_location_0_0(t);
  m_155 = t;
  t = l_155;
  t = xtc_save_0_1(m_155, t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm m_5, ATerm t)
{
  ATerm g_72 = t;
  int a_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_155 = NULL;
      n_155 = t;
      t = m_5;
      {
        ATerm c_73 = t;
        int e_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(e_73);
          }
        else
          {
            t = c_73;
            t = xtc_create_file_0_0(t);
          }
      }
      t = n_155;
      LocalPopChoice(a_73);
      {
        ATerm o_155 = NULL;
        o_155 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_5, o_155);
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = g_72;
      {
        ATerm d_98 = NULL,g_98 = NULL;
        t = term_h_73;
        d_98 = t;
        t = term_p_47;
        g_98 = t;
        t = m_5;
        t = log_0_3(g_98, d_98, m_5, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_save_file_0_0 (ATerm t)
{
  ATerm q_155 = NULL,r_155 = NULL;
  q_155 = t;
  t = xtc_location_0_0(t);
  r_155 = t;
  t = q_155;
  t = xtc_save_file_0_1(r_155, t);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm j_73 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_73;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm s_155 = NULL,t_155 = NULL,u_155 = NULL;
  if(match_cons(t, sym__2))
    {
      s_155 = ATgetArgument(t, 0);
      t_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_155;
  {
    ATerm k_73 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_73;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, s_155, t_155);
  t = k_44(s_155, t_155, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_73 = ATgetArgument(t, 0);
      u_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_155, u_155);
  return(t);
}
static ATerm h_44 (ATerm k_5, ATerm j_5, ATerm t)
{
  ATerm v_155 = NULL,w_155 = NULL,x_155 = NULL,y_155 = NULL;
  w_155 = t;
  t = k_5;
  {
    ATerm r_73 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_73;
      }
  }
  t = w_155;
  if(match_cons(t, sym__2))
    {
      x_155 = ATgetArgument(t, 0);
      y_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_44(x_155, y_155, t);
  if(match_cons(t, sym__2))
    {
      ATerm s_73 = ATgetArgument(t, 0);
      v_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_5, v_155);
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm z_155 = NULL,a_156 = NULL,b_156 = NULL;
  if(match_cons(t, sym__2))
    {
      z_155 = ATgetArgument(t, 0);
      a_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_155;
  t = file_exists_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_155, a_156);
  t = k_44(z_155, a_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm t_73 = ATgetArgument(t, 0);
      b_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_155, b_156);
  return(t);
}
static ATerm j_44 (ATerm h_5, ATerm g_5, ATerm t)
{
  ATerm c_156 = NULL,d_156 = NULL,e_156 = NULL,f_156 = NULL;
  d_156 = t;
  t = h_5;
  t = file_exists_0_0(t);
  t = d_156;
  if(match_cons(t, sym__2))
    {
      e_156 = ATgetArgument(t, 0);
      f_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_44(e_156, f_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm v_73 = ATgetArgument(t, 0);
      c_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_5, c_156);
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm g_156 = NULL,h_156 = NULL;
  if(match_cons(t, sym__2))
    {
      g_156 = ATgetArgument(t, 0);
      h_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_44(g_156, h_156, t);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm z_73 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_XtcImported_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_73;
    }
  return(t);
}
static ATerm k_44 (ATerm e_5, ATerm c_5, ATerm t)
{
  ATerm i_156 = NULL,j_156 = NULL,k_156 = NULL;
  t = c_5;
  {
    ATerm a_74 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(r_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_74;
      }
  }
  t = c_5;
  t = filter_1_0(s_20, t);
  j_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_5, (ATerm) ATinsert(ATempty, term_b_74));
  t = union_0_0(t);
  i_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_e_74), j_156);
  t = conc_0_0(t);
  k_156 = t;
  t = e_5;
  t = xtc_load_0_1(k_156, t);
  t = (ATerm) ATmakeAppl(sym__2, e_5, i_156);
  return(t);
}
ATerm xtc_import_all_0_0 (ATerm t)
{
  t = repeat_1_0(xtc_import_0_0, t);
  return(t);
}
ATerm xtc_import_all_local_0_0 (ATerm t)
{
  t = repeat_1_0(xtc_import_local_0_0, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL;
  if(match_cons(t, sym__2))
    {
      m_156 = ATgetArgument(t, 0);
      n_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_156;
  t = file_exists_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, m_156, n_156);
  t = k_44(m_156, n_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm j_74 = ATgetArgument(t, 0);
      o_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_156, o_156);
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm l_156 = NULL;
  t = term_n_69;
  t = table_getlist_0_0(t);
  t = SRTS_one(t_20, t);
  l_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_69, l_156);
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm q_156 = NULL,r_156 = NULL,s_156 = NULL;
  if(match_cons(t, sym__2))
    {
      q_156 = ATgetArgument(t, 0);
      r_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_156;
  t = file_exists_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, q_156, r_156);
  t = k_44(q_156, r_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm k_74 = ATgetArgument(t, 0);
      s_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_156, s_156);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm t_156 = NULL,u_156 = NULL,v_156 = NULL;
  if(match_cons(t, sym__2))
    {
      t_156 = ATgetArgument(t, 0);
      u_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_156;
  {
    ATerm q_74 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_74;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, t_156, u_156);
  t = k_44(t_156, u_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm r_74 = ATgetArgument(t, 0);
      v_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_156, v_156);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm p_156 = NULL;
  t = term_n_69;
  t = table_getlist_0_0(t);
  {
    ATerm x_74 = t;
    int b_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(u_20, t);
        LocalPopChoice(b_75);
      }
    else
      {
        t = x_74;
        t = SRTS_one(v_20, t);
      }
  }
  p_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_69, p_156);
  t = table_putlist_0_0(t);
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm b_5, ATerm t)
{
  ATerm w_156 = NULL,x_156 = NULL,y_156 = NULL,z_156 = NULL,g_33 = NULL;
  z_156 = t;
  if(match_cons(t, sym_Repository_1))
    {
      x_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_156);
  w_156 = t;
  t = x_156;
  {
    static ATerm w_20 (ATerm t);
    static ATerm w_20 (ATerm t)
    {
      t = xtc_register_0_1(b_5, t);
      return(t);
    }
    t = map_1_0(w_20, t);
  }
  y_156 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, y_156);
  g_33 = t;
  t = SSLsetAnnotations(g_33, w_156);
  return(t);
}
ATerm xtc_aterm2table_0_0 (ATerm t)
{
  ATerm a_157 = NULL,b_157 = NULL,c_157 = NULL,d_157 = NULL,e_157 = NULL,a_35 = NULL;
  a_157 = t;
  t = (ATerm) ATempty;
  b_157 = t;
  t = a_157;
  if(match_cons(t, sym_Repository_1))
    {
      d_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_157);
  c_157 = t;
  t = d_157;
  {
    static ATerm x_20 (ATerm t);
    static ATerm x_20 (ATerm t)
    {
      t = xtc_register_0_1(b_157, t);
      return(t);
    }
    t = map_1_0(x_20, t);
  }
  e_157 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, e_157);
  a_35 = t;
  t = SSLsetAnnotations(a_35, c_157);
  return(t);
}
static ATerm c_21 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
ATerm xtc_is_imported_0_0 (ATerm t)
{
  static ATerm z_20 (ATerm t);
  static ATerm z_20 (ATerm t)
  {
    t = SRTS_one(c_21, t);
    return(t);
  }
  t = _2_0(_id, z_20, t);
  return(t);
}
ATerm xtc_ref2aterm_2_0 (ATerm w_29 (ATerm), ATerm x_29 (ATerm), ATerm t)
{
  ATerm c_75 = t;
  int l_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_69;
      t = table_getlist_0_0(t);
      t = filter_1_0(w_29, t);
      {
        static ATerm d_21 (ATerm t);
        static ATerm d_21 (ATerm t)
        {
          static ATerm f_21 (ATerm t);
          static ATerm f_21 (ATerm t)
          {
            t = filter_1_0(x_29, t);
            return(t);
          }
          t = _2_0(_id, f_21, t);
          return(t);
        }
        t = SRTS_some(d_21, t);
      }
      {
        ATerm m_75 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_75;
          }
      }
      LocalPopChoice(l_75);
      {
        ATerm k_157 = NULL;
        k_157 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Reference_1, k_157));
      }
    }
  else
    {
      t = c_75;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm n_157 = NULL,o_157 = NULL,p_157 = NULL;
  p_157 = t;
  t = Fst_0_0(t);
  n_157 = t;
  t = p_157;
  t = Snd_0_0(t);
  {
    ATerm n_75 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_75;
      }
  }
  o_157 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, n_157, o_157);
  return(t);
}
ATerm xtc_reg2aterm_1_0 (ATerm v_29 (ATerm), ATerm t)
{
  t = term_h_68;
  t = table_getlist_0_0(t);
  {
    static ATerm j_21 (ATerm t);
    static ATerm j_21 (ATerm t)
    {
      static ATerm k_21 (ATerm t);
      static ATerm k_21 (ATerm t)
      {
        t = filter_1_0(v_29, t);
        return(t);
      }
      t = _2_0(_id, k_21, t);
      return(t);
    }
    t = map_1_0(j_21, t);
  }
  t = filter_1_0(n_21, t);
  return(t);
}
ATerm xtc_table2aterm_2_0 (ATerm t_29 (ATerm), ATerm u_29 (ATerm), ATerm t)
{
  ATerm q_157 = NULL;
  static ATerm o_21 (ATerm t);
  static ATerm p_21 (ATerm t);
  static ATerm o_21 (ATerm t)
  {
    t = xtc_reg2aterm_1_0(t_29, t);
    return(t);
  }
  static ATerm p_21 (ATerm t)
  {
    t = xtc_ref2aterm_2_0(t_29, u_29, t);
    return(t);
  }
  t = split_2_0(o_21, p_21, t);
  t = conc_0_0(t);
  q_157 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, q_157);
  return(t);
}
ATerm if_log_severity_1_1 (ATerm x_27 (ATerm), ATerm a_5, ATerm t)
{
  ATerm r_157 = NULL,s_157 = NULL;
  r_157 = t;
  t = a_5;
  t = verbose_level_0_0(t);
  s_157 = t;
  t = r_157;
  t = log_if_verbose_1_1(x_27, s_157, t);
  return(t);
}
ATerm log_0_2 (ATerm y_4, ATerm z_4, ATerm t)
{
  ATerm t_157 = NULL,u_157 = NULL;
  static ATerm q_21 (ATerm t);
  static ATerm q_21 (ATerm t)
  {
    ATerm v_157 = NULL,w_157 = NULL,x_157 = NULL,p_98 = NULL,q_98 = NULL;
    v_157 = t;
    t = log_src_0_0(t);
    w_157 = t;
    t = y_4;
    t = severity_string_0_0(t);
    x_157 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_91), z_4), term_x_89), w_157), term_c_76), x_157), term_q_75);
    t = concat_strings_0_0(t);
    q_98 = t;
    t = term_b_24;
    t = log_stream_0_0(t);
    p_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_98, p_98);
    t = fputs_0_0(t);
    t = v_157;
    return(t);
  }
  u_157 = t;
  t = y_4;
  t = verbose_level_0_0(t);
  t_157 = t;
  t = u_157;
  t = log_if_verbose_1_1(q_21, t_157, t);
  return(t);
}
ATerm log_0_3 (ATerm v_4, ATerm w_4, ATerm x_4, ATerm t)
{
  ATerm y_157 = NULL,z_157 = NULL;
  static ATerm r_21 (ATerm t);
  static ATerm r_21 (ATerm t)
  {
    ATerm a_158 = NULL,b_158 = NULL,c_158 = NULL,d_158 = NULL,w_98 = NULL,s_98 = NULL,u_98 = NULL;
    t = log_0_2(v_4, w_4, t);
    a_158 = t;
    t = v_4;
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    d_158 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_158, term_e_91);
    t = add_0_0(t);
    c_158 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_158, term_i_91);
    t = copy_char_0_0(t);
    u_98 = t;
    t = term_b_24;
    t = log_stream_0_0(t);
    s_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_98, s_98);
    t = fputs_0_0(t);
    t = log_stream_0_0(t);
    b_158 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_158, x_4);
    t = write_in_text_to_stream_0_0(t);
    t = term_b_24;
    t = log_stream_0_0(t);
    w_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_91, w_98);
    t = fputs_0_0(t);
    t = a_158;
    return(t);
  }
  z_157 = t;
  t = v_4;
  t = verbose_level_0_0(t);
  y_157 = t;
  t = z_157;
  t = log_if_verbose_1_1(r_21, y_157, t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm j_91 = t;
  int k_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(k_91);
    }
  else
    {
      t = j_91;
      t = term_l_91;
    }
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm e_158 = NULL,f_158 = NULL;
  f_158 = t;
  t = term_b_24;
  t = log_stream_0_0(t);
  e_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_158, e_158);
  t = fputs_0_0(t);
  return(t);
}
ATerm set_log_stream_0_0 (ATerm t)
{
  ATerm g_158 = NULL;
  g_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_91, g_158);
  t = set_config_0_0(t);
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm q_91 = t;
  int t_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_91;
      t = get_config_0_0(t);
      LocalPopChoice(t_91);
    }
  else
    {
      t = q_91;
      t = term_b_24;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm o_27 (ATerm), ATerm u_4, ATerm t)
{
  ATerm u_91 = t;
  int v_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_158 = NULL,j_158 = NULL;
      i_158 = t;
      t = term_y_38;
      {
        ATerm w_91 = t;
        int a_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(a_92);
          }
        else
          {
            t = w_91;
            t = term_t_23;
          }
      }
      j_158 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_158, u_4);
      t = geq_0_0(t);
      t = i_158;
      LocalPopChoice(v_91);
      t = o_27(t);
    }
  else
    {
      t = u_91;
    }
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_c_92;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_k_92;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_l_92;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_m_92;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_n_92;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_l_93;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_p_93;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_v_93;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_y_93;
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
ATerm verbose_level_0_0 (ATerm t)
{
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_f_95;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_g_95;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_e_91;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_h_95;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_d_39;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_t_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_i_95;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_k_95;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_s_95;
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
ATerm dbg_0_1 (ATerm t_4, ATerm t)
{
  ATerm p_158 = NULL,r_158 = NULL;
  r_158 = t;
  t = term_d_23;
  p_158 = t;
  t = r_158;
  t = log_0_3(p_158, t_4, r_158, t);
  return(t);
}
ATerm notice_0_1 (ATerm n_0, ATerm t)
{
  ATerm s_158 = NULL,t_158 = NULL;
  t_158 = t;
  t = term_l_46;
  s_158 = t;
  t = t_158;
  t = log_0_3(s_158, n_0, t_158, t);
  return(t);
}
ATerm warn_0_1 (ATerm k_0, ATerm t)
{
  ATerm u_158 = NULL,v_158 = NULL;
  v_158 = t;
  t = term_u_47;
  u_158 = t;
  t = v_158;
  t = log_0_3(u_158, k_0, v_158, t);
  return(t);
}
ATerm err_0_1 (ATerm i_0, ATerm t)
{
  ATerm w_158 = NULL,x_158 = NULL;
  x_158 = t;
  t = term_p_47;
  w_158 = t;
  t = x_158;
  t = log_0_3(w_158, i_0, x_158, t);
  return(t);
}
ATerm fatal_err_0_1 (ATerm e_0, ATerm t)
{
  ATerm y_158 = NULL,z_158 = NULL;
  z_158 = t;
  t = term_u_95;
  y_158 = t;
  t = z_158;
  t = log_0_3(y_158, e_0, z_158, t);
  t = term_b_96;
  t = exit_0_0(t);
  return(t);
}
ATerm TempFiles_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_TempFiles_0)))
    _fail(t);
  return(t);
}
ATerm Import_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Import_0)))
    _fail(t);
  return(t);
}
ATerm Tool_1_0 (ATerm m_27 (ATerm), ATerm t)
{
  ATerm a_159 = NULL,b_159 = NULL,c_159 = NULL,d_159 = NULL,e_35 = NULL;
  d_159 = t;
  if(match_cons(t, sym_Tool_1))
    {
      b_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_159);
  a_159 = t;
  t = b_159;
  t = m_27(t);
  c_159 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_159);
  e_35 = t;
  t = SSLsetAnnotations(e_35, a_159);
  return(t);
}
ATerm XtcConf_4_0 (ATerm c_27 (ATerm), ATerm d_27 (ATerm), ATerm e_27 (ATerm), ATerm f_27 (ATerm), ATerm t)
{
  ATerm e_159 = NULL,f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL,j_159 = NULL,k_159 = NULL,l_159 = NULL,m_159 = NULL,n_159 = NULL,u_36 = NULL;
  n_159 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      f_159 = ATgetArgument(t, 0);
      g_159 = ATgetArgument(t, 1);
      h_159 = ATgetArgument(t, 2);
      i_159 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_159);
  e_159 = t;
  t = f_159;
  t = c_27(t);
  j_159 = t;
  t = g_159;
  t = d_27(t);
  k_159 = t;
  t = h_159;
  t = e_27(t);
  l_159 = t;
  t = i_159;
  t = f_27(t);
  m_159 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, j_159, k_159, l_159, m_159);
  u_36 = t;
  t = SSLsetAnnotations(u_36, e_159);
  return(t);
}
ATerm XtcExport_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcExport_0)))
    _fail(t);
  return(t);
}
ATerm XtcLoaded_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
ATerm XtcCache_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcCache_0)))
    _fail(t);
  return(t);
}
ATerm XtcRef_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcRef_0)))
    _fail(t);
  return(t);
}
ATerm XtcReg_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcReg_0)))
    _fail(t);
  return(t);
}
ATerm Template_2_0 (ATerm y_26 (ATerm), ATerm b_27 (ATerm), ATerm t)
{
  ATerm o_159 = NULL,p_159 = NULL,q_159 = NULL,r_159 = NULL,s_159 = NULL,t_159 = NULL,w_36 = NULL;
  t_159 = t;
  if(match_cons(t, sym_Template_2))
    {
      p_159 = ATgetArgument(t, 0);
      q_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_159);
  o_159 = t;
  t = p_159;
  t = y_26(t);
  r_159 = t;
  t = q_159;
  t = b_27(t);
  s_159 = t;
  t = (ATerm) ATmakeAppl(sym_Template_2, r_159, s_159);
  w_36 = t;
  t = SSLsetAnnotations(w_36, o_159);
  return(t);
}
ATerm Explicit_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Explicit_0)))
    _fail(t);
  return(t);
}
ATerm Implicit_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Implicit_0)))
    _fail(t);
  return(t);
}
ATerm Regular_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Regular_0)))
    _fail(t);
  return(t);
}
ATerm Layout_1_0 (ATerm t_26 (ATerm), ATerm t)
{
  ATerm u_159 = NULL,v_159 = NULL,w_159 = NULL,x_159 = NULL,b_37 = NULL;
  x_159 = t;
  if(match_cons(t, sym_Layout_1))
    {
      v_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_159);
  u_159 = t;
  t = v_159;
  t = t_26(t);
  w_159 = t;
  t = (ATerm) ATmakeAppl(sym_Layout_1, w_159);
  b_37 = t;
  t = SSLsetAnnotations(b_37, u_159);
  return(t);
}
ATerm TOr_2_0 (ATerm r_26 (ATerm), ATerm s_26 (ATerm), ATerm t)
{
  ATerm y_159 = NULL,z_159 = NULL,a_160 = NULL,b_160 = NULL,c_160 = NULL,d_160 = NULL,d_37 = NULL;
  d_160 = t;
  if(match_cons(t, sym_TOr_2))
    {
      z_159 = ATgetArgument(t, 0);
      a_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_160);
  y_159 = t;
  t = z_159;
  t = r_26(t);
  b_160 = t;
  t = a_160;
  t = s_26(t);
  c_160 = t;
  t = (ATerm) ATmakeAppl(sym_TOr_2, b_160, c_160);
  d_37 = t;
  t = SSLsetAnnotations(d_37, y_159);
  return(t);
}
ATerm TVarSpec_1_0 (ATerm q_26 (ATerm), ATerm t)
{
  ATerm e_160 = NULL,f_160 = NULL,h_160 = NULL,i_160 = NULL,r_37 = NULL;
  i_160 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      f_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_160);
  e_160 = t;
  t = f_160;
  t = q_26(t);
  h_160 = t;
  t = (ATerm) ATmakeAppl(sym_TVarSpec_1, h_160);
  r_37 = t;
  t = SSLsetAnnotations(r_37, e_160);
  return(t);
}
ATerm Input_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Input_0)))
    _fail(t);
  return(t);
}
ATerm Output_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Output_0)))
    _fail(t);
  return(t);
}
ATerm Arguments_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Arguments_0)))
    _fail(t);
  return(t);
}
ATerm TVarOpt_4_0 (ATerm d_26 (ATerm), ATerm e_26 (ATerm), ATerm l_26 (ATerm), ATerm p_26 (ATerm), ATerm t)
{
  ATerm j_160 = NULL,k_160 = NULL,l_160 = NULL,m_160 = NULL,n_160 = NULL,o_160 = NULL,p_160 = NULL,q_160 = NULL,r_160 = NULL,s_160 = NULL,a_38 = NULL;
  s_160 = t;
  if(match_cons(t, sym_TVarOpt_4))
    {
      k_160 = ATgetArgument(t, 0);
      l_160 = ATgetArgument(t, 1);
      m_160 = ATgetArgument(t, 2);
      n_160 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_160);
  j_160 = t;
  t = k_160;
  t = d_26(t);
  o_160 = t;
  t = l_160;
  t = e_26(t);
  p_160 = t;
  t = m_160;
  t = l_26(t);
  q_160 = t;
  t = n_160;
  t = p_26(t);
  r_160 = t;
  t = (ATerm) ATmakeAppl(sym_TVarOpt_4, o_160, p_160, q_160, r_160);
  a_38 = t;
  t = SSLsetAnnotations(a_38, j_160);
  return(t);
}
ATerm TVarOne_4_0 (ATerm x_25 (ATerm), ATerm y_25 (ATerm), ATerm b_26 (ATerm), ATerm c_26 (ATerm), ATerm t)
{
  ATerm t_160 = NULL,u_160 = NULL,v_160 = NULL,w_160 = NULL,x_160 = NULL,y_160 = NULL,z_160 = NULL,a_161 = NULL,b_161 = NULL,c_161 = NULL,c_38 = NULL;
  c_161 = t;
  if(match_cons(t, sym_TVarOne_4))
    {
      u_160 = ATgetArgument(t, 0);
      v_160 = ATgetArgument(t, 1);
      w_160 = ATgetArgument(t, 2);
      x_160 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_161);
  t_160 = t;
  t = u_160;
  t = x_25(t);
  y_160 = t;
  t = v_160;
  t = y_25(t);
  z_160 = t;
  t = w_160;
  t = b_26(t);
  a_161 = t;
  t = x_160;
  t = c_26(t);
  b_161 = t;
  t = (ATerm) ATmakeAppl(sym_TVarOne_4, y_160, z_160, a_161, b_161);
  c_38 = t;
  t = SSLsetAnnotations(c_38, t_160);
  return(t);
}
ATerm TVarPlus_4_0 (ATerm t_25 (ATerm), ATerm u_25 (ATerm), ATerm v_25 (ATerm), ATerm w_25 (ATerm), ATerm t)
{
  ATerm d_161 = NULL,e_161 = NULL,f_161 = NULL,g_161 = NULL,h_161 = NULL,i_161 = NULL,k_161 = NULL,l_161 = NULL,m_161 = NULL,n_161 = NULL,f_38 = NULL;
  n_161 = t;
  if(match_cons(t, sym_TVarPlus_4))
    {
      e_161 = ATgetArgument(t, 0);
      f_161 = ATgetArgument(t, 1);
      g_161 = ATgetArgument(t, 2);
      h_161 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_161);
  d_161 = t;
  t = e_161;
  t = t_25(t);
  i_161 = t;
  t = f_161;
  t = u_25(t);
  k_161 = t;
  t = g_161;
  t = v_25(t);
  l_161 = t;
  t = h_161;
  t = w_25(t);
  m_161 = t;
  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, i_161, k_161, l_161, m_161);
  f_38 = t;
  t = SSLsetAnnotations(f_38, d_161);
  return(t);
}
ATerm TVarStar_4_0 (ATerm p_25 (ATerm), ATerm q_25 (ATerm), ATerm r_25 (ATerm), ATerm s_25 (ATerm), ATerm t)
{
  ATerm o_161 = NULL,p_161 = NULL,q_161 = NULL,r_161 = NULL,s_161 = NULL,t_161 = NULL,u_161 = NULL,v_161 = NULL,w_161 = NULL,x_161 = NULL,h_38 = NULL;
  x_161 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      p_161 = ATgetArgument(t, 0);
      q_161 = ATgetArgument(t, 1);
      r_161 = ATgetArgument(t, 2);
      s_161 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_161);
  o_161 = t;
  t = p_161;
  t = p_25(t);
  t_161 = t;
  t = q_161;
  t = q_25(t);
  u_161 = t;
  t = r_161;
  t = r_25(t);
  v_161 = t;
  t = s_161;
  t = s_25(t);
  w_161 = t;
  t = (ATerm) ATmakeAppl(sym_TVarStar_4, t_161, u_161, v_161, w_161);
  h_38 = t;
  t = SSLsetAnnotations(h_38, o_161);
  return(t);
}
ATerm Default_1_0 (ATerm o_25 (ATerm), ATerm t)
{
  ATerm y_161 = NULL,z_161 = NULL,a_162 = NULL,b_162 = NULL,m_38 = NULL;
  b_162 = t;
  if(match_cons(t, sym_Default_1))
    {
      z_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_162);
  y_161 = t;
  t = z_161;
  t = o_25(t);
  a_162 = t;
  t = (ATerm) ATmakeAppl(sym_Default_1, a_162);
  m_38 = t;
  t = SSLsetAnnotations(m_38, y_161);
  return(t);
}
ATerm Values_1_0 (ATerm n_25 (ATerm), ATerm t)
{
  ATerm c_162 = NULL,d_162 = NULL,e_162 = NULL,f_162 = NULL,t_41 = NULL;
  f_162 = t;
  if(match_cons(t, sym_Values_1))
    {
      d_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_162);
  c_162 = t;
  t = d_162;
  t = n_25(t);
  e_162 = t;
  t = (ATerm) ATmakeAppl(sym_Values_1, e_162);
  t_41 = t;
  t = SSLsetAnnotations(t_41, c_162);
  return(t);
}
ATerm On_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_On_0)))
    _fail(t);
  return(t);
}
ATerm Off_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Off_0)))
    _fail(t);
  return(t);
}
ATerm Option_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Option_0)))
    _fail(t);
  return(t);
}
ATerm ArgOption_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_ArgOption_0)))
    _fail(t);
  return(t);
}
ATerm Type_1_0 (ATerm m_25 (ATerm), ATerm t)
{
  ATerm g_162 = NULL,h_162 = NULL,i_162 = NULL,j_162 = NULL,a_42 = NULL;
  j_162 = t;
  if(match_cons(t, sym_Type_1))
    {
      h_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_162);
  g_162 = t;
  t = h_162;
  t = m_25(t);
  i_162 = t;
  t = (ATerm) ATmakeAppl(sym_Type_1, i_162);
  a_42 = t;
  t = SSLsetAnnotations(a_42, g_162);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm k_25 (ATerm), ATerm l_25 (ATerm), ATerm t)
{
  ATerm k_162 = NULL,l_162 = NULL,m_162 = NULL,n_162 = NULL,o_162 = NULL,p_162 = NULL,f_42 = NULL;
  p_162 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      l_162 = ATgetArgument(t, 0);
      m_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_162);
  k_162 = t;
  t = l_162;
  t = k_25(t);
  n_162 = t;
  t = m_162;
  t = l_25(t);
  o_162 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, n_162, o_162);
  f_42 = t;
  t = SSLsetAnnotations(f_42, k_162);
  return(t);
}
ATerm XtcQuery_1_0 (ATerm j_25 (ATerm), ATerm t)
{
  ATerm r_162 = NULL,s_162 = NULL,t_162 = NULL,u_162 = NULL,i_42 = NULL;
  u_162 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      s_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_162);
  r_162 = t;
  t = s_162;
  t = j_25(t);
  t_162 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, t_162);
  i_42 = t;
  t = SSLsetAnnotations(i_42, r_162);
  return(t);
}
ATerm XtcMeta_2_0 (ATerm g_25 (ATerm), ATerm i_25 (ATerm), ATerm t)
{
  ATerm v_162 = NULL,w_162 = NULL,x_162 = NULL,y_162 = NULL,z_162 = NULL,b_163 = NULL,l_42 = NULL;
  b_163 = t;
  if(match_cons(t, sym_XtcMeta_2))
    {
      w_162 = ATgetArgument(t, 0);
      x_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_163);
  v_162 = t;
  t = w_162;
  t = g_25(t);
  y_162 = t;
  t = x_162;
  t = i_25(t);
  z_162 = t;
  t = (ATerm) ATmakeAppl(sym_XtcMeta_2, y_162, z_162);
  l_42 = t;
  t = SSLsetAnnotations(l_42, v_162);
  return(t);
}
ATerm XtcInherit_2_0 (ATerm e_25 (ATerm), ATerm f_25 (ATerm), ATerm t)
{
  ATerm c_163 = NULL,d_163 = NULL,e_163 = NULL,f_163 = NULL,g_163 = NULL,h_163 = NULL,r_42 = NULL;
  h_163 = t;
  if(match_cons(t, sym_XtcInherit_2))
    {
      d_163 = ATgetArgument(t, 0);
      e_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_163);
  c_163 = t;
  t = d_163;
  t = e_25(t);
  f_163 = t;
  t = e_163;
  t = f_25(t);
  g_163 = t;
  t = (ATerm) ATmakeAppl(sym_XtcInherit_2, f_163, g_163);
  r_42 = t;
  t = SSLsetAnnotations(r_42, c_163);
  return(t);
}
ATerm XtcModel_2_0 (ATerm c_25 (ATerm), ATerm d_25 (ATerm), ATerm t)
{
  ATerm i_163 = NULL,j_163 = NULL,k_163 = NULL,l_163 = NULL,m_163 = NULL,n_163 = NULL,u_42 = NULL;
  n_163 = t;
  if(match_cons(t, sym_XtcModel_2))
    {
      j_163 = ATgetArgument(t, 0);
      k_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_163);
  i_163 = t;
  t = j_163;
  t = c_25(t);
  l_163 = t;
  t = k_163;
  t = d_25(t);
  m_163 = t;
  t = (ATerm) ATmakeAppl(sym_XtcModel_2, l_163, m_163);
  u_42 = t;
  t = SSLsetAnnotations(u_42, i_163);
  return(t);
}
ATerm XtcContracts_1_0 (ATerm b_25 (ATerm), ATerm t)
{
  ATerm o_163 = NULL,p_163 = NULL,q_163 = NULL,r_163 = NULL,x_42 = NULL;
  r_163 = t;
  if(match_cons(t, sym_XtcContracts_1))
    {
      p_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_163);
  o_163 = t;
  t = p_163;
  t = b_25(t);
  q_163 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContracts_1, q_163);
  x_42 = t;
  t = SSLsetAnnotations(x_42, o_163);
  return(t);
}
ATerm XtcDesc_1_0 (ATerm a_25 (ATerm), ATerm t)
{
  ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL,v_163 = NULL,a_43 = NULL;
  v_163 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      t_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_163);
  s_163 = t;
  t = t_163;
  t = a_25(t);
  u_163 = t;
  t = (ATerm) ATmakeAppl(sym_XtcDesc_1, u_163);
  a_43 = t;
  t = SSLsetAnnotations(a_43, s_163);
  return(t);
}
ATerm XT_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XT_0)))
    _fail(t);
  return(t);
}
ATerm Exec_1_0 (ATerm z_24 (ATerm), ATerm t)
{
  ATerm w_163 = NULL,x_163 = NULL,y_163 = NULL,z_163 = NULL,d_43 = NULL;
  z_163 = t;
  if(match_cons(t, sym_Exec_1))
    {
      x_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_163);
  w_163 = t;
  t = x_163;
  t = z_24(t);
  y_163 = t;
  t = (ATerm) ATmakeAppl(sym_Exec_1, y_163);
  d_43 = t;
  t = SSLsetAnnotations(d_43, w_163);
  return(t);
}
ATerm XTService_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XTService_0)))
    _fail(t);
  return(t);
}
ATerm HTTP_1_0 (ATerm x_24 (ATerm), ATerm t)
{
  ATerm a_164 = NULL,b_164 = NULL,c_164 = NULL,d_164 = NULL,o_43 = NULL;
  d_164 = t;
  if(match_cons(t, sym_HTTP_1))
    {
      b_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_164);
  a_164 = t;
  t = b_164;
  t = x_24(t);
  c_164 = t;
  t = (ATerm) ATmakeAppl(sym_HTTP_1, c_164);
  o_43 = t;
  t = SSLsetAnnotations(o_43, a_164);
  return(t);
}
ATerm Streams_3_0 (ATerm u_24 (ATerm), ATerm v_24 (ATerm), ATerm w_24 (ATerm), ATerm t)
{
  ATerm e_164 = NULL,f_164 = NULL,h_164 = NULL,i_164 = NULL,j_164 = NULL,k_164 = NULL,l_164 = NULL,m_164 = NULL,l_44 = NULL;
  m_164 = t;
  if(match_cons(t, sym_Streams_3))
    {
      f_164 = ATgetArgument(t, 0);
      h_164 = ATgetArgument(t, 1);
      i_164 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_164);
  e_164 = t;
  t = f_164;
  t = u_24(t);
  j_164 = t;
  t = h_164;
  t = v_24(t);
  k_164 = t;
  t = i_164;
  t = w_24(t);
  l_164 = t;
  t = (ATerm) ATmakeAppl(sym_Streams_3, j_164, k_164, l_164);
  l_44 = t;
  t = SSLsetAnnotations(l_44, e_164);
  return(t);
}
ATerm Error_1_0 (ATerm t_24 (ATerm), ATerm t)
{
  ATerm n_164 = NULL,o_164 = NULL,p_164 = NULL,r_164 = NULL,p_44 = NULL;
  r_164 = t;
  if(match_cons(t, sym_Error_1))
    {
      o_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_164);
  n_164 = t;
  t = o_164;
  t = t_24(t);
  p_164 = t;
  t = (ATerm) ATmakeAppl(sym_Error_1, p_164);
  p_44 = t;
  t = SSLsetAnnotations(p_44, n_164);
  return(t);
}
ATerm Std_1_0 (ATerm s_24 (ATerm), ATerm t)
{
  ATerm s_164 = NULL,t_164 = NULL,u_164 = NULL,v_164 = NULL,s_44 = NULL;
  v_164 = t;
  if(match_cons(t, sym_Std_1))
    {
      t_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_164);
  s_164 = t;
  t = t_164;
  t = s_24(t);
  u_164 = t;
  t = (ATerm) ATmakeAppl(sym_Std_1, u_164);
  s_44 = t;
  t = SSLsetAnnotations(s_44, s_164);
  return(t);
}
ATerm File_1_0 (ATerm r_24 (ATerm), ATerm t)
{
  ATerm w_164 = NULL,x_164 = NULL,y_164 = NULL,z_164 = NULL,n_45 = NULL;
  z_164 = t;
  if(match_cons(t, sym_File_1))
    {
      x_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_164);
  w_164 = t;
  t = x_164;
  t = r_24(t);
  y_164 = t;
  t = (ATerm) ATmakeAppl(sym_File_1, y_164);
  n_45 = t;
  t = SSLsetAnnotations(n_45, w_164);
  return(t);
}
ATerm Option_1_0 (ATerm q_24 (ATerm), ATerm t)
{
  ATerm a_165 = NULL,b_165 = NULL,c_165 = NULL,d_165 = NULL,w_46 = NULL;
  d_165 = t;
  if(match_cons(t, sym_Option_1))
    {
      b_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_165);
  a_165 = t;
  t = b_165;
  t = q_24(t);
  c_165 = t;
  t = (ATerm) ATmakeAppl(sym_Option_1, c_165);
  w_46 = t;
  t = SSLsetAnnotations(w_46, a_165);
  return(t);
}
ATerm URL_1_0 (ATerm o_24 (ATerm), ATerm t)
{
  ATerm e_165 = NULL,f_165 = NULL,g_165 = NULL,h_165 = NULL,z_46 = NULL;
  h_165 = t;
  if(match_cons(t, sym_URL_1))
    {
      f_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_165);
  e_165 = t;
  t = f_165;
  t = o_24(t);
  g_165 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, g_165);
  z_46 = t;
  t = SSLsetAnnotations(z_46, e_165);
  return(t);
}
ATerm FILE_1_0 (ATerm n_24 (ATerm), ATerm t)
{
  ATerm i_165 = NULL,j_165 = NULL,k_165 = NULL,l_165 = NULL,e_47 = NULL;
  l_165 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_165);
  i_165 = t;
  t = j_165;
  t = n_24(t);
  k_165 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_165);
  e_47 = t;
  t = SSLsetAnnotations(e_47, i_165);
  return(t);
}
ATerm Arguments_1_0 (ATerm m_24 (ATerm), ATerm t)
{
  ATerm m_165 = NULL,n_165 = NULL,o_165 = NULL,p_165 = NULL,j_47 = NULL;
  p_165 = t;
  if(match_cons(t, sym_Arguments_1))
    {
      n_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_165);
  m_165 = t;
  t = n_165;
  t = m_24(t);
  o_165 = t;
  t = (ATerm) ATmakeAppl(sym_Arguments_1, o_165);
  j_47 = t;
  t = SSLsetAnnotations(j_47, m_165);
  return(t);
}
ATerm XtcContract_3_0 (ATerm j_24 (ATerm), ATerm k_24 (ATerm), ATerm l_24 (ATerm), ATerm t)
{
  ATerm q_165 = NULL,r_165 = NULL,s_165 = NULL,t_165 = NULL,v_165 = NULL,w_165 = NULL,x_165 = NULL,y_165 = NULL,n_47 = NULL;
  y_165 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      r_165 = ATgetArgument(t, 0);
      s_165 = ATgetArgument(t, 1);
      t_165 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_165);
  q_165 = t;
  t = r_165;
  t = j_24(t);
  v_165 = t;
  t = s_165;
  t = k_24(t);
  w_165 = t;
  t = t_165;
  t = l_24(t);
  x_165 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, v_165, w_165, x_165);
  n_47 = t;
  t = SSLsetAnnotations(n_47, q_165);
  return(t);
}
ATerm Pre_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Pre_0)))
    _fail(t);
  return(t);
}
ATerm Post_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Post_0)))
    _fail(t);
  return(t);
}
ATerm String_1_0 (ATerm i_24 (ATerm), ATerm t)
{
  ATerm a_166 = NULL,b_166 = NULL,c_166 = NULL,d_166 = NULL,q_47 = NULL;
  d_166 = t;
  if(match_cons(t, sym_String_1))
    {
      b_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_166);
  a_166 = t;
  t = b_166;
  t = i_24(t);
  c_166 = t;
  t = (ATerm) ATmakeAppl(sym_String_1, c_166);
  q_47 = t;
  t = SSLsetAnnotations(q_47, a_166);
  return(t);
}
ATerm Definition_2_0 (ATerm g_24 (ATerm), ATerm h_24 (ATerm), ATerm t)
{
  ATerm e_166 = NULL,f_166 = NULL,g_166 = NULL,h_166 = NULL,i_166 = NULL,j_166 = NULL,t_47 = NULL;
  j_166 = t;
  if(match_cons(t, sym_Definition_2))
    {
      f_166 = ATgetArgument(t, 0);
      g_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_166);
  e_166 = t;
  t = f_166;
  t = g_24(t);
  h_166 = t;
  t = g_166;
  t = h_24(t);
  i_166 = t;
  t = (ATerm) ATmakeAppl(sym_Definition_2, h_166, i_166);
  t_47 = t;
  t = SSLsetAnnotations(t_47, e_166);
  return(t);
}
ATerm Reference_1_0 (ATerm f_24 (ATerm), ATerm t)
{
  ATerm k_166 = NULL,l_166 = NULL,m_166 = NULL,n_166 = NULL,s_48 = NULL;
  n_166 = t;
  if(match_cons(t, sym_Reference_1))
    {
      l_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_166);
  k_166 = t;
  t = l_166;
  t = f_24(t);
  m_166 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, m_166);
  s_48 = t;
  t = SSLsetAnnotations(s_48, k_166);
  return(t);
}
ATerm Registration_2_0 (ATerm d_24 (ATerm), ATerm e_24 (ATerm), ATerm t)
{
  ATerm o_166 = NULL,p_166 = NULL,r_166 = NULL,s_166 = NULL,t_166 = NULL,u_166 = NULL,u_48 = NULL;
  u_166 = t;
  if(match_cons(t, sym_Registration_2))
    {
      p_166 = ATgetArgument(t, 0);
      r_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_166);
  o_166 = t;
  t = p_166;
  t = d_24(t);
  s_166 = t;
  t = r_166;
  t = e_24(t);
  t_166 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, s_166, t_166);
  u_48 = t;
  t = SSLsetAnnotations(u_48, o_166);
  return(t);
}
ATerm Repository_1_0 (ATerm c_24 (ATerm), ATerm t)
{
  ATerm v_166 = NULL,w_166 = NULL,x_166 = NULL,y_166 = NULL,w_48 = NULL;
  y_166 = t;
  if(match_cons(t, sym_Repository_1))
    {
      w_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_166);
  v_166 = t;
  t = w_166;
  t = c_24(t);
  x_166 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, x_166);
  w_48 = t;
  t = SSLsetAnnotations(w_48, v_166);
  return(t);
}
ATerm Vomit_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Vomit_0)))
    _fail(t);
  return(t);
}
ATerm Debug_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Debug_0)))
    _fail(t);
  return(t);
}
ATerm Info_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Info_0)))
    _fail(t);
  return(t);
}
ATerm Notice_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Notice_0)))
    _fail(t);
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Warning_0)))
    _fail(t);
  return(t);
}
ATerm Error_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Error_0)))
    _fail(t);
  return(t);
}
ATerm Critical_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Critical_0)))
    _fail(t);
  return(t);
}
ATerm Alert_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Alert_0)))
    _fail(t);
  return(t);
}
ATerm Emergency_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Emergency_0)))
    _fail(t);
  return(t);
}
