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
static ATerm term_s_71;
static ATerm term_p_71;
static ATerm term_u_70;
static ATerm term_j_70;
static ATerm term_l_69;
static ATerm term_k_69;
static ATerm term_w_68;
static ATerm term_i_68;
static ATerm term_a_68;
static ATerm term_t_67;
static ATerm term_j_67;
static ATerm term_i_67;
static ATerm term_h_67;
static ATerm term_z_66;
static ATerm term_w_66;
static ATerm term_v_66;
static ATerm term_u_66;
static ATerm term_t_66;
static ATerm term_s_66;
static ATerm term_p_66;
static ATerm term_o_66;
static ATerm term_n_66;
static ATerm term_k_66;
static ATerm term_j_66;
static ATerm term_i_66;
static ATerm term_d_66;
static ATerm term_c_66;
static ATerm term_b_66;
static ATerm term_y_65;
static ATerm term_x_65;
static ATerm term_w_65;
static ATerm term_r_65;
static ATerm term_q_65;
static ATerm term_p_65;
static ATerm term_m_65;
static ATerm term_l_65;
static ATerm term_k_65;
static ATerm term_j_65;
static ATerm term_e_65;
static ATerm term_w_64;
static ATerm term_v_64;
static ATerm term_u_64;
static ATerm term_t_64;
static ATerm term_s_64;
static ATerm term_r_64;
static ATerm term_q_64;
static ATerm term_p_64;
static ATerm term_o_64;
static ATerm term_n_64;
static ATerm term_m_64;
static ATerm term_k_64;
static ATerm term_j_64;
static ATerm term_i_64;
static ATerm term_h_64;
static ATerm term_y_62;
static ATerm term_x_62;
static ATerm term_i_62;
static ATerm term_k_61;
static ATerm term_o_60;
static ATerm term_m_60;
static ATerm term_h_60;
static ATerm term_f_60;
static ATerm term_b_60;
static ATerm term_u_57;
static ATerm term_b_57;
static ATerm term_v_56;
static ATerm term_u_56;
static ATerm term_t_56;
static ATerm term_j_56;
static ATerm term_h_56;
static ATerm term_g_56;
static ATerm term_f_56;
static ATerm term_e_56;
static ATerm term_z_55;
static ATerm term_s_55;
static ATerm term_g_55;
static ATerm term_d_55;
static ATerm term_b_55;
static ATerm term_x_54;
static ATerm term_u_54;
static ATerm term_x_51;
static ATerm term_r_51;
static ATerm term_k_51;
static ATerm term_i_50;
static ATerm term_z_49;
static ATerm term_p_49;
static ATerm term_h_49;
static ATerm term_s_46;
static ATerm term_o_46;
static ATerm term_n_46;
static ATerm term_k_46;
static ATerm term_h_46;
static ATerm term_o_45;
static ATerm term_i_45;
static ATerm term_g_45;
static ATerm term_f_45;
static ATerm term_d_45;
static ATerm term_b_45;
static ATerm term_q_44;
static ATerm term_p_44;
static ATerm term_o_44;
static ATerm term_n_44;
static ATerm term_m_44;
static ATerm term_j_43;
static ATerm term_i_42;
static ATerm term_r_41;
static ATerm term_p_41;
static ATerm term_b_39;
static ATerm term_z_38;
static ATerm term_w_38;
static ATerm term_t_38;
static ATerm term_r_38;
static ATerm term_p_38;
static ATerm term_x_37;
static ATerm term_p_37;
static ATerm term_o_37;
static ATerm term_n_37;
static ATerm term_m_37;
static ATerm term_l_37;
static ATerm term_j_37;
static ATerm term_h_37;
static ATerm term_g_37;
static ATerm term_e_37;
static ATerm term_z_36;
static ATerm term_u_36;
static ATerm term_t_36;
static ATerm term_d_23;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_c_22;
static ATerm term_b_22;
static ATerm term_y_21;
static ATerm term_x_21;
static ATerm term_w_21;
static ATerm term_k_21;
static ATerm term_e_21;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-transform", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--preload", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym__2, term_d_23, (ATerm) ATempty);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym__2, term_g_37, term_c_22);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload     Toggle XTC preloading (default: on)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--dependencies", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_c_22);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--dependencies   Check XTC dependencies and exit", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Broken XTC dependencies: ", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("All XTC registrations available", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym__2, term_r_38, term_t_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym__2, term_p_41, term_r_41);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym__2, term_h_37, term_c_22);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym__2, term_g_45, term_i_45);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_String_1, term_w_21);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Some_1, term_h_46);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_File_1, term_k_46);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Input_1, term_n_46);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym_Some_1, term_o_46);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_r_51);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym_String_1, term_t_36);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym_Some_1, term_e_56);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_File_1, term_f_56);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(sym_Output_1, term_g_56);
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym_Some_1, term_h_56);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Streams_3, term_s_46, term_j_56, term_e_21);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym_Exec_1, term_t_56);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_u_56);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(sym_Type_1, term_h_64);
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(sym_Some_1, term_i_64);
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(sym_Default_1, term_k_64);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(sym_Some_1, term_m_64);
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_o_64);
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_q_64);
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_s_64);
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(sym_Some_1, term_v_64);
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(sym_String_1, term_k_65);
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_j_65, term_l_65);
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(sym_String_1, term_p_65);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_j_65, term_q_65);
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(sym_String_1, term_w_65);
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_j_65, term_x_65);
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(sym_String_1, term_b_66);
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_j_65, term_c_66);
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(sym_String_1, term_i_66);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_j_65, term_j_66);
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(sym_String_1, term_n_66);
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_j_65, term_o_66);
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_s_66);
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(sym_Template_2, term_u_66, term_e_21);
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_t_66, term_v_66);
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(sym_XtcImported_0);
}
#include <srts/init-stratego-module.h>
ATerm xtc_find_1_0 (ATerm m_32 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm o_2 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm n_2 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm xtc_find_loc_1_0 (ATerm h_32 (ATerm), ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm xtc_find_path_1_0 (ATerm g_32 (ATerm), ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm xtc_find_file_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm f_32 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm e_32 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm c_32 (ATerm), ATerm d_32 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_file_1_0 (ATerm b_32 (ATerm), ATerm t);
ATerm xtc_transform_term_2_0 (ATerm z_31 (ATerm), ATerm a_32 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_1_0 (ATerm y_31 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm w_31 (ATerm), ATerm x_31 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
ATerm xtc_generate_1_0 (ATerm v_31 (ATerm), ATerm t);
ATerm xtc_transform_2_0 (ATerm t_31 (ATerm), ATerm u_31 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
ATerm xtc_transform_1_0 (ATerm r_31 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_command_1_0 (ATerm m_2 (ATerm), ATerm t);
ATerm xtc_input_1_0 (ATerm o_31 (ATerm), ATerm t);
ATerm xtc_output_1_0 (ATerm n_31 (ATerm), ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_31 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_io_wrap_2_1 (ATerm k_31 (ATerm), ATerm l_31 (ATerm), ATerm j_23, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm xtc_io_wrap_3_0 (ATerm h_31 (ATerm), ATerm i_31 (ATerm), ATerm j_31 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm f_31 (ATerm), ATerm g_31 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm xtc_io_wrap_1_1 (ATerm e_31 (ATerm), ATerm i_23, ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm d_31 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm xtc_iowrap_2_0 (ATerm b_31 (ATerm), ATerm c_31 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm xtc_iowrap_1_0 (ATerm a_31 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm xtc_wrap_2_1 (ATerm y_30 (ATerm), ATerm z_30 (ATerm), ATerm h_23, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm xtc_wrap_2_0 (ATerm w_30 (ATerm), ATerm x_30 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm xtc_wrap_1_1 (ATerm v_30 (ATerm), ATerm g_23, ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm xtc_wrap_1_0 (ATerm u_30 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_pass_verbose_0_0 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm xtc_pass_options_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm xtc_dependency_options_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm xtc_preload_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm is_url_http_0_0 (ATerm t);
ATerm copy_to_1_0 (ATerm k_2 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm j_2 (ATerm), ATerm t);
ATerm write_to_text_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm File_as_fd_1_0 (ATerm l_30 (ATerm), ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_30 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
ATerm xtc_new_temp_file_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm j_30 (ATerm), ATerm t);
ATerm xtc_cc_1_0 (ATerm i_2 (ATerm), ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm g_30 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm f_30 (ATerm), ATerm t);
static ATerm m_10 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm xtc_missing_dependencies_0_0 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm xtc_check_dependencies_0_0 (ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm h_2, ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm g_2, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm f_2, ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm d_2, ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
static ATerm s_41 (ATerm m_19, ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
static ATerm t_41 (ATerm k_19, ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
static ATerm u_41 (ATerm h_19, ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
static ATerm v_41 (ATerm g_19, ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
static ATerm w_41 (ATerm f_19, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm y_41 (ATerm e_19, ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
static ATerm z_41 (ATerm d_19, ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
static ATerm a_42 (ATerm c_19, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
static ATerm b_42 (ATerm b_19, ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm y_18, ATerm t);
static ATerm c_42 (ATerm y_18, ATerm a_19, ATerm z_18, ATerm t);
static ATerm p_10 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm b_2, ATerm c_2, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
static ATerm d_42 (ATerm d_217, ATerm o_18, ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm h_18, ATerm i_18, ATerm t);
static ATerm e_42 (ATerm h_18, ATerm i_18, ATerm j_18, ATerm k_18, ATerm l_18, ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm e_30 (ATerm), ATerm f_18, ATerm g_18, ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm d_30 (ATerm), ATerm d_18, ATerm e_18, ATerm t);
static ATerm h_11 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm a_18, ATerm t);
static ATerm f_42 (ATerm a_18, ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm y_1, ATerm z_1, ATerm t);
static ATerm k_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm a_30 (ATerm), ATerm b_30 (ATerm), ATerm c_30 (ATerm), ATerm t);
static ATerm g_42 (ATerm a_30 (ATerm), ATerm b_30 (ATerm), ATerm c_30 (ATerm), ATerm h_14, ATerm i_14, ATerm k_14, ATerm g_14, ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm y_29 (ATerm), ATerm z_29 (ATerm), ATerm t);
static ATerm h_42 (ATerm y_29 (ATerm), ATerm z_29 (ATerm), ATerm a_14, ATerm d_14, ATerm c_14, ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
static ATerm j_42 (ATerm v_13, ATerm u_13, ATerm t);
ATerm option_isect_0_0 (ATerm t);
static ATerm k_42 (ATerm o_13, ATerm n_13, ATerm t);
static ATerm f_12 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm exec_http_0_1 (ATerm i_13, ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm l_42 (ATerm z_12, ATerm t);
static ATerm h_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm p_12, ATerm q_12, ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm m_42 (ATerm p_12, ATerm q_12, ATerm r_12, ATerm s_12, ATerm t_12, ATerm u_12, ATerm t);
static ATerm t_13 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
static ATerm n_42 (ATerm c_11, ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm a_11, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm xtc_dashed_option_0_0 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm e_143 (ATerm v_141, ATerm t);
static ATerm f_143 (ATerm y_141, ATerm t);
static ATerm g_143 (ATerm b_142, ATerm c_142, ATerm d_142, ATerm t);
static ATerm h_143 (ATerm h_142, ATerm i_142, ATerm j_142, ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
static ATerm o_42 (ATerm t);
ATerm xtc_desugar_query_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
static ATerm p_42 (ATerm x_7, ATerm y_7, ATerm t);
static ATerm a_16 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm q_42 (ATerm u_7, ATerm v_7, ATerm t);
static ATerm d_16 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm r_42 (ATerm s_7, ATerm t);
ATerm xtc_search_0_0 (ATerm t);
ATerm xtc_search_1_0 (ATerm w_1 (ATerm), ATerm t);
ATerm xtc_query_all_2_1 (ATerm x_27 (ATerm), ATerm t_29 (ATerm), ATerm f_7, ATerm t);
ATerm xtc_query_one_2_1 (ATerm m_27 (ATerm), ATerm o_27 (ATerm), ATerm e_7, ATerm t);
ATerm xtc_query_all_2_0 (ATerm e_27 (ATerm), ATerm f_27 (ATerm), ATerm t);
ATerm xtc_query_one_2_0 (ATerm c_27 (ATerm), ATerm d_27 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm v_1, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm r_6, ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm q_6, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
ATerm xtc_fetch_loc_0_0 (ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm r_16 (ATerm t);
ATerm xtc_fetch_version_0_0 (ATerm t);
ATerm xtc_register_reference_0_1 (ATerm u_1, ATerm t);
ATerm xtc_register_reference_0_0 (ATerm t);
ATerm xtc_register_resource_0_1 (ATerm l_1, ATerm t);
ATerm xtc_register_resource_0_0 (ATerm t);
ATerm xtc_register_component_0_1 (ATerm c_0, ATerm t);
ATerm xtc_register_component_0_0 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm xtc_register_0_1 (ATerm a_0, ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm p_5, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm n_5, ATerm t);
static ATerm s_42 (ATerm n_5, ATerm o_5, ATerm k_47, ATerm t);
ATerm xtc_add_meta_0_1 (ATerm m_5, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm l_5, ATerm t);
ATerm xtc_create_tables_0_0 (ATerm t);
ATerm xtc_flush_0_0 (ATerm t);
ATerm xtc_reset_0_0 (ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_init_0_2 (ATerm j_5, ATerm k_5, ATerm t);
ATerm xtc_init_0_1 (ATerm i_5, ATerm t);
ATerm xtc_init_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm xtc_load_0_1 (ATerm g_5, ATerm t);
ATerm xtc_load_0_0 (ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_dump_0_1 (ATerm e_5, ATerm t);
ATerm xtc_dump_0_0 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm w_17 (ATerm t);
ATerm xtc_save_0_1 (ATerm d_5, ATerm t);
ATerm xtc_save_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm c_5, ATerm t);
ATerm xtc_save_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
static ATerm u_42 (ATerm a_5, ATerm z_4, ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
static ATerm v_42 (ATerm x_4, ATerm w_4, ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm w_42 (ATerm n_0, ATerm i_0, ATerm t);
ATerm xtc_import_all_0_0 (ATerm t);
ATerm xtc_import_all_local_0_0 (ATerm t);
static ATerm z_17 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm e_0, ATerm t);
ATerm xtc_aterm2table_0_0 (ATerm t);
static ATerm s_18 (ATerm t);
ATerm xtc_is_imported_0_0 (ATerm t);
ATerm xtc_ref2aterm_2_0 (ATerm y_26 (ATerm), ATerm b_27 (ATerm), ATerm t);
static ATerm p_19 (ATerm t);
ATerm xtc_reg2aterm_1_0 (ATerm t_26 (ATerm), ATerm t);
ATerm xtc_table2aterm_2_0 (ATerm r_26 (ATerm), ATerm s_26 (ATerm), ATerm t);
ATerm Keys_0_0 (ATerm t);
ATerm Keys_1_0 (ATerm x_76 (ATerm), ATerm t);
ATerm Keys_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t);
ATerm Keys_3_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm t);
ATerm Keys_4_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm t);
ATerm Keys_5_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm t);
ATerm Keys_6_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t);
ATerm Keys_7_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm t);
ATerm Keys_8_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t);
ATerm Keys_9_0 (ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm t);
ATerm Keys_10_0 (ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm t);
ATerm Defined_0_0 (ATerm t);
ATerm Defined_1_0 (ATerm a_79 (ATerm), ATerm t);
ATerm Defined_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t);
ATerm Defined_3_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm Defined_4_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t);
ATerm Defined_5_0 (ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm t);
ATerm Defined_6_0 (ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm t);
ATerm Defined_7_0 (ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t);
ATerm Defined_8_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t);
ATerm Defined_9_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t);
ATerm Defined_10_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t);
ATerm Undefined_0_0 (ATerm t);
ATerm Dummy_0_0 (ATerm t);
ATerm Scopes_0_0 (ATerm t);
ATerm RuleScope_2_0 (ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm t);
ATerm ChangeSet_3_0 (ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t);
ATerm Conc_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm t);
ATerm _0_0 (ATerm t);
ATerm _1_0 (ATerm m_81 (ATerm), ATerm t);
ATerm _2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t);
ATerm _3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t);
ATerm _4_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t);
ATerm _5_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t);
ATerm _6_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t);
ATerm _7_0 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t);
ATerm _8_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t);
ATerm _9_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t);
ATerm _10_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t);
ATerm _11_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t);
ATerm _12_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm t);
ATerm _13_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm t);
ATerm _14_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
ATerm _15_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t);
ATerm _16_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t);
ATerm _17_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t);
ATerm _18_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm Some_1_0 (ATerm b_88 (ATerm), ATerm t);
ATerm Pipe_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
ATerm F__OK_0_0 (ATerm t);
ATerm R__OK_0_0 (ATerm t);
ATerm W__OK_0_0 (ATerm t);
ATerm X__OK_0_0 (ATerm t);
ATerm Stream_1_0 (ATerm e_88 (ATerm), ATerm t);
ATerm Path_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm stderr_0_0 (ATerm t);
ATerm Anno_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t);
ATerm Infinite_0_0 (ATerm t);
ATerm Hashtable_1_0 (ATerm i_88 (ATerm), ATerm t);
ATerm NestedTable_1_0 (ATerm j_88 (ATerm), ATerm t);
ATerm Tables_0_0 (ATerm t);
ATerm NewTable_0_0 (ATerm t);
ATerm IndexedSet_1_0 (ATerm k_88 (ATerm), ATerm t);
ATerm EpochTime_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm ComponentTime_3_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm DayTime_3_0 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm t);
ATerm Date_3_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t);
ATerm Dupl_2_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm t);
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
ATerm ErrorNumber_1_0 (ATerm x_88 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm y_88 (ATerm), ATerm t);
ATerm Prefix_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm t);
ATerm WaitStatus_3_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t);
ATerm Signal_3_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm t);
ATerm UnknownSignal_1_0 (ATerm h_89 (ATerm), ATerm t);
ATerm Silent_0_0 (ATerm t);
ATerm Verbose_1_0 (ATerm i_89 (ATerm), ATerm t);
ATerm Version_0_0 (ATerm t);
ATerm Input_1_0 (ATerm j_89 (ATerm), ATerm t);
ATerm Output_1_0 (ATerm k_89 (ATerm), ATerm t);
ATerm Binary_0_0 (ATerm t);
ATerm Statistics_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm Runtime_1_0 (ATerm l_89 (ATerm), ATerm t);
ATerm DeclVersion_1_0 (ATerm m_89 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm n_89 (ATerm), ATerm t);
ATerm Undefined_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm Emergency_0_0 (ATerm t);
ATerm Alert_0_0 (ATerm t);
ATerm Critical_0_0 (ATerm t);
ATerm Error_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm Notice_0_0 (ATerm t);
ATerm Info_0_0 (ATerm t);
ATerm Debug_0_0 (ATerm t);
ATerm Vomit_0_0 (ATerm t);
ATerm Anno__Cong_____2_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm t);
ATerm Pair_2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t);
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
ATerm init_name_space_1_0 (ATerm t_89 (ATerm), ATerm t);
ATerm exit_name_space_1_0 (ATerm u_89 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_89 (ATerm), ATerm t);
ATerm end_scope_1_0 (ATerm w_89 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t);
ATerm assert_1_0 (ATerm z_89 (ATerm), ATerm t);
ATerm override_key_1_0 (ATerm a_90 (ATerm), ATerm t);
ATerm rewrite_1_0 (ATerm b_90 (ATerm), ATerm t);
ATerm extend_assert_1_0 (ATerm c_90 (ATerm), ATerm t);
ATerm extend_override_key_1_0 (ATerm d_90 (ATerm), ATerm t);
ATerm extend_assert_undefined_1_0 (ATerm e_90 (ATerm), ATerm t);
ATerm extend_override_key_undefined_1_0 (ATerm f_90 (ATerm), ATerm t);
ATerm extend_rewrite_1_0 (ATerm g_90 (ATerm), ATerm t);
ATerm dr_debug_rule_set_0_1 (ATerm q_14, ATerm t);
ATerm dr_debug_rule_set_0_2 (ATerm r_14, ATerm s_14, ATerm t);
ATerm dr_print_rule_set_0_1 (ATerm t_14, ATerm t);
ATerm dr_print_rule_sets_0_1 (ATerm u_14, ATerm t);
ATerm dr_print_rule_set_0_0 (ATerm t);
ATerm dr_print_scope_0_0 (ATerm t);
ATerm dr_eq_rule_sets_0_0 (ATerm t);
ATerm dr_fold_and_intersect_3_1 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm (ATerm), ATerm), ATerm i_15, ATerm t);
ATerm dr_fold_and_intersect_3_2 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm (ATerm), ATerm), ATerm k_15, ATerm l_15, ATerm t);
ATerm dr_map_and_intersect_1_1 (ATerm o_90 (ATerm), ATerm p_15, ATerm t);
ATerm dr_fix_and_intersect_1_1 (ATerm r_90 (ATerm), ATerm q_15, ATerm t);
ATerm dr_fix_and_union_1_1 (ATerm s_90 (ATerm), ATerm t_15, ATerm t);
ATerm dr_fix_and_intersect_union_1_2 (ATerm t_90 (ATerm), ATerm w_15, ATerm x_15, ATerm t);
ATerm dr_fork_and_intersect_2_1 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm c_16, ATerm t);
ATerm dr_fork_and_union_2_1 (ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm f_16, ATerm t);
ATerm dr_fork_and_intersect_union_2_2 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm i_16, ATerm j_16, ATerm t);
ATerm dr_fix_and_merge_2_1 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm o_16, ATerm t);
ATerm dr_fix_and_merge_3_2 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm s_16, ATerm t_16, ATerm t);
ATerm fork_rule_sets_0_0 (ATerm t);
ATerm merge_rule_sets_1_0 (ATerm f_91 (ATerm), ATerm t);
ATerm dr_fork_and_merge_3_1 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm c_17, ATerm t);
ATerm dr_fork_and_merge_4_2 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm g_17, ATerm h_17, ATerm t);
ATerm dr_merge_rule_sets_2_0 (ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm t);
ATerm dr_merge_rule_sets1_2_0 (ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm t);
ATerm dr_merge_rule_sets2_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t);
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
ATerm dr_add_to_rule_set_vis_2_3 (ATerm l_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm p_0 (ATerm, ATerm, ATerm, ATerm), ATerm r_0, ATerm s_0, ATerm t_0, ATerm t);
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
ATerm dr_get_first_scope_label_1_0 (ATerm v_92 (ATerm), ATerm t);
ATerm dr_save_rule_set_0_0 (ATerm t);
ATerm dr_scope_1_1 (ATerm w_92 (ATerm), ATerm h_27, ATerm t);
ATerm dr_begin_scope_0_1 (ATerm i_27, ATerm t);
ATerm dr_end_scope_0_1 (ATerm j_27, ATerm t);
ATerm dr_scopes_1_1 (ATerm x_92 (ATerm), ATerm k_27, ATerm t);
ATerm dr_begin_scopes_0_1 (ATerm l_27, ATerm t);
ATerm dr_end_scopes_0_1 (ATerm n_27, ATerm t);
ATerm dr_start_change_set_0_1 (ATerm p_27, ATerm t);
ATerm dr_commit_change_set_0_1 (ATerm q_27, ATerm t);
ATerm dr_discard_change_set_0_1 (ATerm r_27, ATerm t);
ATerm dr_label_scope_0_2 (ATerm s_27, ATerm t_27, ATerm t);
ATerm dr_get_scope_labels_0_1 (ATerm u_27, ATerm t);
ATerm dr_get_first_scope_label_1_1 (ATerm y_92 (ATerm), ATerm v_27, ATerm t);
ATerm dr_ignore_state_1_1 (ATerm z_92 (ATerm), ATerm w_27, ATerm t);
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
ATerm try_1_0 (ATerm a_93 (ATerm), ATerm t);
ATerm maybe_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm maybe_2_0 (ATerm n_1 (ATerm), ATerm o_1 (ATerm), ATerm t);
ATerm if_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t);
ATerm if_3_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm t);
ATerm ior_2_0 (ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm t);
ATerm or_2_0 (ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm t);
ATerm and_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm FAIL_0_0 (ATerm t);
ATerm restore_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t);
ATerm finally_2_0 (ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm a_94 (ATerm), ATerm t);
ATerm repeat1_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t);
ATerm repeat1_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm repeat_until_2_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm t);
ATerm while_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t);
ATerm do_while_2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm t);
ATerm cpl_loaded_0_0 (ATerm t);
ATerm if_cpl_loaded_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t);
ATerm if_cpl_loaded_1_0 (ATerm w_94 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm x_94 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm y_94 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm z_94 (ATerm), ATerm t);
ATerm downup_2_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm t);
ATerm downup2_2_0 (ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm t);
ATerm topdownS_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_3_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm m_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm don_p_t_stop_1_0 (ATerm n_95 (ATerm), ATerm t);
ATerm bottomup_para_1_0 (ATerm o_95 (ATerm), ATerm t);
ATerm spinetd_1_0 (ATerm p_95 (ATerm), ATerm t);
ATerm spinebu_1_0 (ATerm q_95 (ATerm), ATerm t);
ATerm somespinetd_1_0 (ATerm t_95 (ATerm), ATerm t);
ATerm somespinebu_1_0 (ATerm v_95 (ATerm), ATerm t);
ATerm spinetd_p__1_0 (ATerm p_1 (ATerm), ATerm t);
ATerm spinebu_p__1_0 (ATerm q_1 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm b_96 (ATerm), ATerm t);
ATerm oncebu_1_0 (ATerm d_96 (ATerm), ATerm t);
ATerm oncetd_skip_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm oncetd_stop_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm sometd_1_0 (ATerm l_96 (ATerm), ATerm t);
ATerm somebu_1_0 (ATerm n_96 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm p_96 (ATerm), ATerm t);
ATerm alldownup2_2_0 (ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t);
ATerm downup2_p__obsolete_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t);
ATerm alltd_fold_2_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm t);
ATerm leaves_3_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm leaves_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t);
ATerm manybu_1_0 (ATerm h_97 (ATerm), ATerm t);
ATerm manytd_1_0 (ATerm j_97 (ATerm), ATerm t);
ATerm somedownup_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm breadthfirst_1_0 (ATerm n_97 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm is_inner_node_0_0 (ATerm t);
ATerm is_proper_subterm_set_0_0 (ATerm t);
ATerm is_proper_superterm_set_0_0 (ATerm t);
ATerm is_superterm_0_0 (ATerm t);
ATerm is_proper_superterm_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm is_proper_subterm_0_0 (ATerm t);
ATerm all_l_1_0 (ATerm p_97 (ATerm), ATerm t);
ATerm topdown_l_1_0 (ATerm q_97 (ATerm), ATerm t);
ATerm bottomup_l_1_0 (ATerm s_97 (ATerm), ATerm t);
ATerm downup_l_1_0 (ATerm u_97 (ATerm), ATerm t);
ATerm downup_l_2_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t);
ATerm downup2_l_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t);
ATerm topdownS_l_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_l_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_3_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_para_l_1_0 (ATerm p_98 (ATerm), ATerm t);
ATerm alltd_l_1_0 (ATerm r_98 (ATerm), ATerm t);
ATerm alldownup2_l_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t);
ATerm alltd_fold_l_2_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t);
ATerm reduce_1_0 (ATerm z_98 (ATerm), ATerm t);
ATerm outermost_1_0 (ATerm b_99 (ATerm), ATerm t);
ATerm innermost_p__1_0 (ATerm c_99 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm d_99 (ATerm), ATerm t);
ATerm innermost_old_1_0 (ATerm e_99 (ATerm), ATerm t);
ATerm pseudo_innermost3_1_0 (ATerm g_99 (ATerm), ATerm t);
ATerm innermost_memo_1_0 (ATerm j_99 (ATerm), ATerm t);
ATerm innermost_tagged_1_0 (ATerm l_99 (ATerm), ATerm t);
ATerm env_alltd_1_0 (ATerm n_99 (ATerm), ATerm t);
ATerm env_topdown_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm env_topdown_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm (ATerm), ATerm), ATerm t);
ATerm env_bottomup_1_0 (ATerm u_99 (ATerm), ATerm t);
ATerm thread_alltd_1_0 (ATerm w_99 (ATerm), ATerm t);
ATerm thread_bottomup_1_0 (ATerm y_99 (ATerm), ATerm t);
ATerm count_bottomup_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm env_oncetd_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm all_dist_1_0 (ATerm d_100 (ATerm), ATerm t);
ATerm one_dist_1_0 (ATerm e_100 (ATerm), ATerm t);
ATerm d_1_0 (ATerm f_100 (ATerm), ATerm t);
ATerm t_1_0 (ATerm g_100 (ATerm), ATerm t);
ATerm coll_1_0 (ATerm h_100 (ATerm), ATerm t);
ATerm stdioO_1_0 (ATerm i_100 (ATerm), ATerm t);
ATerm stdio_1_0 (ATerm j_100 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm echo_1_0 (ATerm k_100 (ATerm), ATerm t);
ATerm printchar_0_0 (ATerm t);
ATerm printstring_0_0 (ATerm t);
ATerm debug_stdout_1_0 (ATerm l_100 (ATerm), ATerm t);
ATerm say_1_0 (ATerm m_100 (ATerm), ATerm t);
ATerm trace_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm obsolete_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm dissuader_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm Assert_2_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t);
ATerm risky_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t);
ATerm debug_depth_0_0 (ATerm t);
ATerm debug_depth_1_0 (ATerm v_100 (ATerm), ATerm t);
ATerm debug_depth_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
ATerm debug_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_100 (ATerm), ATerm t);
ATerm print_strings_nl_1_0 (ATerm z_100 (ATerm), ATerm t);
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
ATerm WriteToFile_1_0 (ATerm a_101 (ATerm), ATerm t);
ATerm open_1_0 (ATerm b_101 (ATerm), ATerm t);
ATerm save_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
ATerm for_each_pair_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm separate_by_0_1 (ATerm s_31, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm upto_0_0 (ATerm t);
ATerm UptoInit_0_0 (ATerm t);
ATerm UptoExit_0_0 (ATerm t);
ATerm UptoStep_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_101 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm k_101 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm l_101 (ATerm), ATerm t);
ATerm list_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm list_some_1_0 (ATerm n_101 (ATerm), ATerm t);
ATerm length_0_0 (ATerm t);
ATerm elem_0_0 (ATerm t);
ATerm elem_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm s_101 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm t_101 (ATerm), ATerm t);
ATerm split_fetch_keep_1_0 (ATerm u_101 (ATerm), ATerm t);
ATerm at_tail_1_0 (ATerm v_101 (ATerm), ATerm t);
ATerm at__tail_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_101 (ATerm), ATerm t);
ATerm at__end_1_0 (ATerm z_101 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm b_102 (ATerm), ATerm t);
ATerm at__suffix_1_0 (ATerm d_102 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm f_102 (ATerm), ATerm t);
ATerm at__last_1_0 (ATerm h_102 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm i_102 (ATerm), ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm at_init_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t);
ATerm listbu_1_0 (ATerm n_102 (ATerm), ATerm t);
ATerm listbu1_1_0 (ATerm p_102 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm q_102 (ATerm), ATerm t);
ATerm listdu_1_0 (ATerm s_102 (ATerm), ATerm t);
ATerm listdu2_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t);
ATerm RevInit_0_0 (ATerm t);
ATerm Rev_0_0 (ATerm t);
ATerm RevExit_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm reverse_1_0 (ATerm x_102 (ATerm), ATerm t);
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
ATerm Ins2_1_0 (ATerm d_103 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm e_103 (ATerm), ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm set_index_0_0 (ATerm t);
ATerm Sind0_0_0 (ATerm t);
ATerm Sind1_0_0 (ATerm t);
ATerm Sind2_1_0 (ATerm h_103 (ATerm), ATerm t);
ATerm get_index_0_0 (ATerm t);
ATerm Gind0_0_0 (ATerm t);
ATerm Gind1_0_0 (ATerm t);
ATerm Gind2_0_0 (ATerm t);
ATerm get__index_0_0 (ATerm t);
ATerm get_index0_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm index_0_0 (ATerm t);
ATerm Ind1_0_0 (ATerm t);
ATerm Ind2_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm zip_1_0 (ATerm p_103 (ATerm), ATerm t);
ATerm zip_p__1_0 (ATerm q_103 (ATerm), ATerm t);
ATerm zipl_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm zipr_1_0 (ATerm s_103 (ATerm), ATerm t);
ATerm rest_zip_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm unzip_0_0 (ATerm t);
ATerm unzip_1_0 (ATerm u_103 (ATerm), ATerm t);
ATerm nzip0_1_0 (ATerm v_103 (ATerm), ATerm t);
ATerm nzip_1_0 (ATerm w_103 (ATerm), ATerm t);
ATerm lzip_1_0 (ATerm x_103 (ATerm), ATerm t);
ATerm rzip_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm zipFetch_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm lzipFetch_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm rzipFetch_1_0 (ATerm d_104 (ATerm), ATerm t);
ATerm zipPad_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t);
ATerm zip_tail_0_0 (ATerm t);
ATerm zipl_tail_match_1_0 (ATerm j_104 (ATerm), ATerm t);
ATerm zipr_tail_match_1_0 (ATerm l_104 (ATerm), ATerm t);
ATerm zip_skip_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t);
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
ATerm cart_1_0 (ATerm q_104 (ATerm), ATerm t);
ATerm join_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm Skip_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm SortL_1_0 (ATerm t_104 (ATerm), ATerm t);
ATerm LSort_1_0 (ATerm u_104 (ATerm), ATerm t);
ATerm LMerge_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm sort_list_1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm isort_list_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm jsort_list_1_0 (ATerm a_105 (ATerm), ATerm t);
ATerm Uniq_0_0 (ATerm t);
ATerm uniq_0_0 (ATerm t);
ATerm qsort_1_0 (ATerm t_1 (ATerm), ATerm t);
ATerm set_eq_0_0 (ATerm t);
ATerm set_eq_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm subset_0_0 (ATerm t);
ATerm subset_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm subseteq_0_0 (ATerm t);
ATerm subseteq_1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm subset_gen_2_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t);
ATerm isect_0_0 (ATerm t);
ATerm isect_1_0 (ATerm k_105 (ATerm), ATerm t);
ATerm diff_1_0 (ATerm m_105 (ATerm), ATerm t);
ATerm diff_p__1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm sym_diff_0_0 (ATerm t);
ATerm sym_diff_1_0 (ATerm p_105 (ATerm), ATerm t);
ATerm unions_0_0 (ATerm t);
ATerm unions_1_0 (ATerm q_105 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
ATerm union_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm make_set_0_0 (ATerm t);
ATerm nub_0_0 (ATerm t);
ATerm HdMember_1_0 (ATerm t_105 (ATerm), ATerm t);
ATerm HdMember_p__2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t);
ATerm twicetd_1_0 (ATerm w_105 (ATerm), ATerm t);
ATerm atmostonce_1_0 (ATerm x_105 (ATerm), ATerm t);
ATerm atmostonce_p__1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm collect_kids_1_0 (ATerm z_105 (ATerm), ATerm t);
ATerm collect_set_1_0 (ATerm a_106 (ATerm), ATerm t);
ATerm collect_2_0 (ATerm b_106 (ATerm), ATerm c_106 (ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm collect_exc_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm (ATerm), ATerm), ATerm t);
ATerm bu_collect_1_0 (ATerm g_106 (ATerm), ATerm t);
ATerm postorder_collect_1_0 (ATerm i_106 (ATerm), ATerm t);
ATerm postorder_collect_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm o_106 (ATerm), ATerm t);
ATerm CollectSplit_2_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t);
ATerm CollectSplit_3_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t);
ATerm collect_split_p__1_0 (ATerm v_106 (ATerm), ATerm t);
ATerm collect_om_1_0 (ATerm x_106 (ATerm), ATerm t);
ATerm collect_1_0 (ATerm y_106 (ATerm), ATerm t);
ATerm collect_om_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t);
ATerm collect_om_3_0 (ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm f_107 (ATerm), ATerm t);
ATerm collect_all_2_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm t);
ATerm collect_all_3_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm t);
ATerm Look1_0_0 (ATerm t);
ATerm Look2_0_0 (ATerm t);
ATerm Look1_p__1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm getfirst_1_0 (ATerm p_107 (ATerm), ATerm t);
ATerm lookup_p__0_0 (ATerm t);
ATerm lookup_1_0 (ATerm r_107 (ATerm), ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm rtrim_1_0 (ATerm t_107 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm u_107 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm v_107 (ATerm), ATerm t);
ATerm foldr1_2_0 (ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t);
ATerm foldr1_3_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t);
ATerm foldr1_1_0 (ATerm d_108 (ATerm), ATerm t);
ATerm foldr_2_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm t);
ATerm foldl_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm mapfoldr_3_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t);
ATerm mapfoldr1_3_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t);
ATerm mapconcat_1_0 (ATerm t_108 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
ATerm init_0_0 (ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_1_0 (ATerm v_108 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm w_108 (ATerm), ATerm t);
ATerm Cons_T_2_0 (ATerm x_1 (ATerm), ATerm a_2 (ATerm), ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm number_1_0 (ATerm y_108 (ATerm), ATerm t);
ATerm take_while_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm take_until_1_0 (ATerm a_109 (ATerm), ATerm t);
ATerm take_1_0 (ATerm b_109 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm drop_until_1_0 (ATerm d_109 (ATerm), ATerm t);
ATerm split_at_1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm drop_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm FoldR1_0_0 (ATerm t);
ATerm FoldR_0_0 (ATerm t);
ATerm FoldL_1_0 (ATerm g_109 (ATerm), ATerm t);
ATerm lsplit_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_109 (ATerm), ATerm t);
ATerm reverse_filter_1_0 (ATerm k_109 (ATerm), ATerm t);
ATerm filter_gen_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm (ATerm), ATerm), ATerm t);
ATerm skip1_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm p_109 (ATerm), ATerm t);
ATerm filter_option_args_1_0 (ATerm q_109 (ATerm), ATerm t);
ATerm filter_options_1_0 (ATerm r_109 (ATerm), ATerm t);
ATerm list_some_filter_1_0 (ATerm s_109 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm u_109 (ATerm), ATerm t);
ATerm partition_p__1_0 (ATerm w_109 (ATerm), ATerm t);
ATerm TupleToList_0_0 (ATerm t);
ATerm ListToTuple_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Third_0_0 (ATerm t);
ATerm Dupl_0_0 (ATerm t);
ATerm split_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t);
ATerm split3_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t);
ATerm Swap_0_0 (ATerm t);
ATerm Thd_0_0 (ATerm t);
ATerm Ttl_0_0 (ATerm t);
ATerm tindex_0_0 (ATerm t);
ATerm is_tuple_0_0 (ATerm t);
ATerm flip_1_0 (ATerm d_110 (ATerm), ATerm t);
ATerm tmap_1_0 (ATerm e_110 (ATerm), ATerm t);
ATerm tconcat_1_0 (ATerm f_110 (ATerm), ATerm t);
ATerm tconcat_p__2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t);
ATerm tcata_2_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm t);
ATerm tfoldr_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
ATerm tzip_1_0 (ATerm m_110 (ATerm), ATerm t);
ATerm tuple_zip_1_0 (ATerm n_110 (ATerm), ATerm t);
ATerm tuple_unzip_1_0 (ATerm p_110 (ATerm), ATerm t);
ATerm option_1_0 (ATerm r_110 (ATerm), ATerm t);
ATerm sect_2_0 (ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm t);
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
ATerm is_substring_1_0 (ATerm c_111 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm string_sort_0_0 (ATerm t);
ATerm string_sort_desc_0_0 (ATerm t);
ATerm SplitInit_0_0 (ATerm t);
ATerm SplitExit_0_0 (ATerm t);
ATerm SplitNext_0_0 (ATerm t);
ATerm padd_with_1_0 (ATerm e_111 (ATerm), ATerm t);
ATerm align_right_0_0 (ATerm t);
ATerm align_left_0_0 (ATerm t);
ATerm align_center_0_0 (ATerm t);
ATerm align_helper_0_0 (ATerm t);
ATerm div2_0_0 (ATerm t);
ATerm string_tokenize_0_1 (ATerm q_43, ATerm t);
ATerm string_tokenize_1_0 (ATerm f_111 (ATerm), ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm list_tokenize_1_0 (ATerm g_111 (ATerm), ATerm t);
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
ATerm unquote_1_0 (ATerm h_111 (ATerm), ATerm t);
ATerm unquote_2_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm t);
ATerm unquote_chars_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm unquote_chars_2_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm t);
ATerm un_single_quote_chars_0_0 (ATerm t);
ATerm un_double_quote_chars_0_0 (ATerm t);
ATerm un_single_quote_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm quote_1_0 (ATerm n_111 (ATerm), ATerm t);
ATerm quote_chars_1_0 (ATerm o_111 (ATerm), ATerm t);
ATerm quote_chars_0_0 (ATerm t);
ATerm single_quote_chars_0_0 (ATerm t);
ATerm double_quote_chars_0_0 (ATerm t);
ATerm single_quote_0_0 (ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm r_3 (ATerm), ATerm t);
ATerm UnCify1_1_0 (ATerm s_3 (ATerm), ATerm t);
ATerm UnCify2_1_0 (ATerm x_111 (ATerm), ATerm t);
ATerm UnCify3_1_0 (ATerm y_111 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm z_111 (ATerm (ATerm), ATerm), ATerm t);
ATerm cify_0_0 (ATerm t);
ATerm uncify_0_0 (ATerm t);
ATerm UnCify_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm c_112 (ATerm), ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm e_112 (ATerm), ATerm t);
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
ATerm UnEscape_0_1 (ATerm h_45, ATerm t);
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
ATerm string_as_chars_1_0 (ATerm g_112 (ATerm), ATerm t);
ATerm is_alphanum_0_0 (ATerm t);
ATerm is_alpha_0_0 (ATerm t);
ATerm is_hexnum_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_ascii_0_0 (ATerm t);
ATerm case_char_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm to_upper_0_0 (ATerm t);
ATerm to_lower_0_0 (ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_path_1_0 (ATerm i_112 (ATerm), ATerm t);
ATerm find_file_1_0 (ATerm j_112 (ATerm), ATerm t);
ATerm find_file_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm temp_file_1_0 (ATerm n_112 (ATerm), ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
ATerm new_temp_dir_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm basename_1_0 (ATerm o_112 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm q_112 (ATerm), ATerm t);
ATerm has_extension_1_0 (ATerm r_112 (ATerm), ATerm t);
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
ATerm mkdir_0_1 (ATerm x_46, ATerm t);
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
ATerm ltrim_chars_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm rtrim_chars_1_0 (ATerm w_112 (ATerm), ATerm t);
ATerm trim_chars_1_0 (ATerm x_112 (ATerm), ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm trim_trailing_whitespace_0_0 (ATerm t);
ATerm trim_leading_whitespace_0_0 (ATerm t);
ATerm trim_whitespace_0_0 (ATerm t);
ATerm string_tokenize_keep_empty_0_1 (ATerm w_47, ATerm t);
ATerm string_tokenize_keep_all_0_1 (ATerm z_47, ATerm t);
ATerm get_lines_0_0 (ATerm t);
ATerm all_lines_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm lines_0_0 (ATerm t);
ATerm indent_text_0_1 (ATerm e_48, ATerm t);
ATerm prefix_lines_0_1 (ATerm g_48, ATerm t);
ATerm nrofoccs_1_0 (ATerm b_113 (ATerm), ATerm t);
ATerm om_occurrences_1_0 (ATerm c_113 (ATerm), ATerm t);
ATerm occurrences_1_0 (ATerm d_113 (ATerm), ATerm t);
ATerm at_depth_2_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t);
ATerm node_size_0_0 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm crush_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm t);
ATerm foldr_kids_2_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t);
ATerm foldr_kids_3_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm t);
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
ATerm if_annotation_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t);
ATerm strip_annos_0_0 (ATerm t);
ATerm catch_annos_0_0 (ATerm t);
ATerm preserve_annotation_1_0 (ATerm t_113 (ATerm), ATerm t);
ATerm preserve_annos_1_0 (ATerm u_113 (ATerm), ATerm t);
ATerm Merge_Props_1_0 (ATerm v_113 (ATerm), ATerm t);
ATerm is_same_prop_0_0 (ATerm t);
ATerm is_prop_1_0 (ATerm w_113 (ATerm), ATerm t);
ATerm apply_prop_existing_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t);
ATerm apply_2_prop_2_0 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm t);
ATerm apply_2_prop_1_0 (ATerm b_114 (ATerm), ATerm t);
ATerm add_prop_existing_2_0 (ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm t);
ATerm add_prop_empty_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t);
ATerm props_union_0_0 (ATerm t);
ATerm valid_props_term_0_0 (ATerm t);
ATerm valid_props_0_0 (ATerm t);
ATerm get_props_0_0 (ATerm t);
ATerm preserve_props_1_0 (ATerm g_114 (ATerm), ATerm t);
ATerm merge_props_1_0 (ATerm h_114 (ATerm), ATerm t);
ATerm has_prop_1_0 (ATerm i_114 (ATerm), ATerm t);
ATerm has_prop_2_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t);
ATerm get_prop_1_0 (ATerm l_114 (ATerm), ATerm t);
ATerm apply_prop_2_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm t);
ATerm replace_prop_2_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t);
ATerm add_prop_2_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm t);
ATerm set_prop_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t);
ATerm is_interval_0_0 (ATerm t);
ATerm range_1_0 (ATerm t_3 (ATerm), ATerm t);
ATerm range_next_1_0 (ATerm w_114 (ATerm), ATerm t);
ATerm range_0_1 (ATerm u_3, ATerm t);
ATerm range_0_0 (ATerm t);
ATerm sum_0_0 (ATerm t);
ATerm average_0_0 (ATerm t);
ATerm list_min_0_0 (ATerm t);
ATerm list_max_0_0 (ATerm t);
ATerm list_accum_1_0 (ATerm x_114 (ATerm), ATerm t);
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
ATerm comp_comp_2_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm t);
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
ATerm table_putlist_1_0 (ATerm c_115 (ATerm), ATerm t);
ATerm table_copy_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm c_54, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm table_rename_0_0 (ATerm t);
ATerm hashtable_eq_0_0 (ATerm t);
ATerm hashtable_eq_1_0 (ATerm d_115 (ATerm), ATerm t);
ATerm hashtable_union_0_1 (ATerm v_54, ATerm t);
ATerm hashtable_union_wempty_0_2 (ATerm y_54, ATerm z_54, ATerm t);
ATerm hashtable_union_symm_wempty_0_1 (ATerm c_55, ATerm t);
ATerm hashtable_intersect_0_1 (ATerm h_55, ATerm t);
ATerm hashtable_intersect_wempty_0_2 (ATerm l_55, ATerm m_55, ATerm t);
ATerm hashtable_intersect_symm_wempty_0_1 (ATerm q_55, ATerm t);
ATerm hashtable_merge_8_0 (ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm t);
ATerm hashtable_merge_func_7_0 (ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t);
ATerm symmetric_yes_0_0 (ATerm t);
ATerm symmetric_no_0_0 (ATerm t);
ATerm iterate1_yes_0_0 (ATerm t);
ATerm iterate1_no_0_0 (ATerm t);
ATerm iterate2_yes_0_0 (ATerm t);
ATerm iterate2_no_0_0 (ATerm t);
ATerm remove_yes_0_0 (ATerm t);
ATerm remove_no_0_0 (ATerm t);
ATerm default_no_0_0 (ATerm t);
ATerm hashtable_push_0_2 (ATerm k_56, ATerm l_56, ATerm t);
ATerm hashtable_pushlist_0_2 (ATerm m_56, ATerm n_56, ATerm t);
ATerm hashtable_pushunion_0_2 (ATerm o_56, ATerm p_56, ATerm t);
ATerm hashtable_pop_0_1 (ATerm q_56, ATerm t);
ATerm hashtable_peek_0_1 (ATerm r_56, ATerm t);
ATerm hashtable_peekpop_0_1 (ATerm s_56, ATerm t);
ATerm hashtable_getlist_0_0 (ATerm t);
ATerm hashtable_putlist_0_1 (ATerm w_56, ATerm t);
ATerm hashtable_putlist_1_1 (ATerm t_115 (ATerm, ATerm, ATerm), ATerm a_57, ATerm t);
ATerm hashtable_init_0_0 (ATerm t);
ATerm hashtable_copy_0_0 (ATerm t);
ATerm hashtable_put_0_2 (ATerm f_57, ATerm g_57, ATerm t);
ATerm hashtable_get_0_1 (ATerm i_57, ATerm t);
ATerm hashtable_remove_0_1 (ATerm k_57, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm new_hashtable_0_2 (ATerm n_57, ATerm o_57, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm hashtable_clear_0_0 (ATerm t);
ATerm nestedtable_put_aux_2_2 (ATerm v_3 (ATerm), ATerm w_3 (ATerm), ATerm x_3, ATerm y_3, ATerm t);
ATerm nestedtable_get_aux_1_1 (ATerm z_3 (ATerm), ATerm a_4, ATerm t);
ATerm nestedtable_put_0_2 (ATerm n_58, ATerm o_58, ATerm t);
ATerm nestedtable_put_1_2 (ATerm e_116 (ATerm), ATerm p_58, ATerm q_58, ATerm t);
ATerm nestedtable_put_2_2 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm r_58, ATerm s_58, ATerm t);
ATerm nestedtable_get_0_1 (ATerm u_58, ATerm t);
ATerm nestedtable_get_1_1 (ATerm h_116 (ATerm), ATerm v_58, ATerm t);
ATerm iset_get_index_0_1 (ATerm x_58, ATerm t);
ATerm iset_get_elem_0_1 (ATerm z_58, ATerm t);
ATerm iset_add_1_1 (ATerm i_116 (ATerm), ATerm b_59, ATerm t);
ATerm iset_add_0_1 (ATerm d_59, ATerm t);
ATerm iset_addlist_0_1 (ATerm f_59, ATerm t);
ATerm iset_contains_0_1 (ATerm i_59, ATerm t);
ATerm iset_remove_0_1 (ATerm j_59, ATerm t);
ATerm iset_elements_0_0 (ATerm t);
ATerm iset_union_0_1 (ATerm m_59, ATerm t);
ATerm iset_isect_0_1 (ATerm p_59, ATerm t);
ATerm iset_subset_0_1 (ATerm s_59, ATerm t);
ATerm iset_eq_0_1 (ATerm v_59, ATerm t);
ATerm new_iset_0_0 (ATerm t);
ATerm new_iset_0_2 (ATerm x_59, ATerm y_59, ATerm t);
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
ATerm profile_1_0 (ATerm j_116 (ATerm), ATerm t);
ATerm profile_2_0 (ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t);
ATerm profile_p__2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t);
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
ATerm pipe_source_2_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm t);
ATerm pipe_sink_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
ATerm close_filter_pipe_1_0 (ATerm s_116 (ATerm), ATerm t);
ATerm exec_filter_pipe_1_0 (ATerm t_116 (ATerm), ATerm t);
ATerm spawn_filter_with_prog_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t);
ATerm write_to_prog_2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t);
ATerm write_to_prog_p__2_0 (ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t);
ATerm read_from_prog_2_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t);
ATerm read_from_prog_p__2_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm t);
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
ATerm filter_text_file_2_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm t);
ATerm printascii_0_0 (ATerm t);
ATerm rm_files_0_0 (ATerm t);
ATerm pipe_2_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t);
ATerm pipe_3_0 (ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t);
ATerm pipe_p__3_0 (ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm t);
ATerm call_tmp_3_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm t);
ATerm call_out_4_0 (ATerm t_117 (ATerm), ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
ATerm transform_file_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm t);
ATerm apply_to_file_1_0 (ATerm z_117 (ATerm), ATerm t);
ATerm copy_file_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm t);
ATerm apply_program_1_0 (ATerm d_118 (ATerm), ATerm t);
ATerm apply_program_2_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t);
ATerm redirect_stdout_to_file_0_0 (ATerm t);
ATerm redirect_stdin_from_file_0_0 (ATerm t);
ATerm pipe_term_to_child_2_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm t);
ATerm if_less_verbose1_1_0 (ATerm i_118 (ATerm), ATerm t);
ATerm if_less_verbose2_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm if_less_verbose3_1_0 (ATerm k_118 (ATerm), ATerm t);
ATerm if_less_verbose4_1_0 (ATerm l_118 (ATerm), ATerm t);
ATerm if_less_verbose5_1_0 (ATerm m_118 (ATerm), ATerm t);
ATerm if_less_verbose6_1_0 (ATerm n_118 (ATerm), ATerm t);
ATerm if_less_verbose7_1_0 (ATerm o_118 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm p_118 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm q_118 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm r_118 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_118 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm t_118 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm u_118 (ATerm), ATerm t);
ATerm if_verbose7_1_0 (ATerm v_118 (ATerm), ATerm t);
ATerm set_verbosity_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm find_config_file_2_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm t);
ATerm find_config_file_3_0 (ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t);
ATerm find_plugins_3_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t);
ATerm find_plugins_2_0 (ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t);
ATerm import_config_file_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm import_config_files_1_0 (ATerm h_119 (ATerm), ATerm t);
ATerm export_config_0_0 (ATerm t);
ATerm merge_configs_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
ATerm toggle_config_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm post_extend_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_configs_1_0 (ATerm i_119 (ATerm), ATerm t);
ATerm get_config_keys_1_0 (ATerm j_119 (ATerm), ATerm t);
ATerm if_less_keep1_1_0 (ATerm k_119 (ATerm), ATerm t);
ATerm if_less_keep2_1_0 (ATerm l_119 (ATerm), ATerm t);
ATerm if_less_keep3_1_0 (ATerm m_119 (ATerm), ATerm t);
ATerm if_less_keep4_1_0 (ATerm n_119 (ATerm), ATerm t);
ATerm if_less_keep5_1_0 (ATerm o_119 (ATerm), ATerm t);
ATerm if_less_keep6_1_0 (ATerm p_119 (ATerm), ATerm t);
ATerm if_less_keep7_1_0 (ATerm q_119 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm r_119 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm s_119 (ATerm), ATerm t);
ATerm if_keep3_1_0 (ATerm t_119 (ATerm), ATerm t);
ATerm if_keep4_1_0 (ATerm u_119 (ATerm), ATerm t);
ATerm if_keep5_1_0 (ATerm v_119 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm w_119 (ATerm), ATerm t);
ATerm if_keep7_1_0 (ATerm x_119 (ATerm), ATerm t);
ATerm set_keep_0_0 (ATerm t);
ATerm get_keep_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm exited_0_0 (ATerm t);
ATerm signaled_0_0 (ATerm t);
ATerm stopped_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm call_1_0 (ATerm y_119 (ATerm), ATerm t);
ATerm call_noisy_0_0 (ATerm t);
ATerm fork_1_0 (ATerm z_119 (ATerm), ATerm t);
ATerm fork_2_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm c_120 (ATerm), ATerm t);
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
ATerm memo_scope_1_0 (ATerm d_120 (ATerm), ATerm t);
ATerm memo_1_0 (ATerm e_120 (ATerm), ATerm t);
ATerm Memo_0_0 (ATerm t);
ATerm memo_init_0_0 (ATerm t);
ATerm memo_purge_0_0 (ATerm t);
ATerm memo_2_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t);
ATerm input_file_p__0_0 (ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm h_120 (ATerm), ATerm t);
ATerm output_file_p__0_0 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm get_options_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm i_120 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t);
ATerm check_option_0_0 (ATerm t);
ATerm usage_p__0_0 (ATerm t);
ATerm iowrap_1_0 (ATerm l_120 (ATerm), ATerm t);
ATerm iowrapO_2_0 (ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t);
ATerm iowrap_2_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t);
ATerm iowrap_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t);
ATerm iowrapO_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t);
ATerm iowrap_4_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t);
ATerm iowrapNoOutput_2_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm t);
ATerm iowrapNoOutput_3_0 (ATerm c_121 (ATerm), ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm need_help_1_0 (ATerm f_121 (ATerm), ATerm t);
ATerm need_help_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm g_121 (ATerm), ATerm t);
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
ATerm option_wrap_2_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm t);
ATerm io_1_0 (ATerm s_121 (ATerm), ATerm t);
ATerm output_1_0 (ATerm t_121 (ATerm), ATerm t);
ATerm input_1_0 (ATerm u_121 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm v_121 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm t);
ATerm io_wrap_4_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm t);
ATerm output_wrap_1_0 (ATerm c_122 (ATerm), ATerm t);
ATerm output_wrap_2_0 (ATerm d_122 (ATerm), ATerm e_122 (ATerm), ATerm t);
ATerm input_wrap_1_0 (ATerm f_122 (ATerm), ATerm t);
ATerm input_wrap_2_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t);
ATerm defined_option_1_0 (ATerm i_122 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm j_122 (ATerm), ATerm t);
ATerm arg_option_value_1_0 (ATerm k_122 (ATerm), ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm Arg2Option_2_0 (ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t);
ATerm Arg2Option_3_0 (ATerm b_4 (ATerm), ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm t);
ATerm ArgOption_2_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm Option_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm j_4 (ATerm), ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_1_0 (ATerm j_123 (ATerm), ATerm t);
ATerm parse_options_3_0 (ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_123 (ATerm), ATerm t);
ATerm register_usage_1_0 (ATerm p_123 (ATerm), ATerm t);
ATerm system_usage_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm short_description_1_0 (ATerm q_123 (ATerm), ATerm t);
ATerm long_description_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm override_system_usage_0_0 (ATerm t);
ATerm override_system_about_0_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm fatal_err_0_1 (ATerm t_69, ATerm t);
ATerm err_0_1 (ATerm u_69, ATerm t);
ATerm warn_0_1 (ATerm v_69, ATerm t);
ATerm notice_0_1 (ATerm w_69, ATerm t);
ATerm dbg_0_1 (ATerm x_69, ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
ATerm if_verbose_1_1 (ATerm u_123 (ATerm), ATerm y_69, ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm set_log_stream_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_0_3 (ATerm z_69, ATerm a_70, ATerm b_70, ATerm t);
ATerm log_0_2 (ATerm c_70, ATerm d_70, ATerm t);
ATerm if_log_severity_1_1 (ATerm v_123 (ATerm), ATerm e_70, ATerm t);
ATerm debug_area_1_1 (ATerm w_123 (ATerm), ATerm f_70, ATerm t);
ATerm risky_1_1 (ATerm x_123 (ATerm), ATerm g_70, ATerm t);
ATerm risky_1_2 (ATerm y_123 (ATerm), ATerm h_70, ATerm i_70, ATerm t);
ATerm substitute_2_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm t);
ATerm substitute_1_0 (ATerm b_124 (ATerm), ATerm t);
ATerm substitute_6_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm (ATerm), ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_124 (ATerm (ATerm), ATerm), ATerm h_124 (ATerm), ATerm t);
ATerm substitute_5_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm (ATerm), ATerm), ATerm l_124 (ATerm), ATerm m_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_124 (ATerm (ATerm), ATerm), ATerm t);
ATerm SubsVar_2_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm rename_4_0 (ATerm q_124 (ATerm (ATerm), ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_124 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_2_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm (ATerm), ATerm), ATerm t);
ATerm rename_3_0 (ATerm x_124 (ATerm (ATerm), ATerm), ATerm y_124 (ATerm), ATerm z_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm DistBinding_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm rename_2_0 (ATerm d_125 (ATerm (ATerm), ATerm), ATerm e_125 (ATerm), ATerm t);
ATerm RnVar_1_0 (ATerm g_125 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_1_0 (ATerm h_125 (ATerm), ATerm t);
ATerm DistBinding_1_0 (ATerm i_125 (ATerm), ATerm t);
ATerm equal_2_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t);
ATerm equal_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm in_0_0 (ATerm t);
ATerm UfVar_1_0 (ATerm m_125 (ATerm), ATerm t);
ATerm UfSwap_1_0 (ATerm n_125 (ATerm), ATerm t);
ATerm unify_1_0 (ATerm o_125 (ATerm), ATerm t);
ATerm MatchVar_1_0 (ATerm p_125 (ATerm), ATerm t);
ATerm pattern_match_1_0 (ATerm q_125 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm equal_0_0 (ATerm t);
ATerm free_vars2_2_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t);
ATerm free_vars2_3_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm w_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars2_4_0 (ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm a_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_126 (ATerm), ATerm t);
ATerm free_vars_2_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm t);
ATerm free_vars_3_0 (ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm i_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars_4_0 (ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm m_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_126 (ATerm), ATerm t);
ATerm apply_test_1_3 (ATerm p_126 (ATerm), ATerm c_73, ATerm d_73, ATerm e_73, ATerm t);
ATerm apply_test_1_2 (ATerm q_126 (ATerm), ATerm f_73, ATerm g_73, ATerm t);
ATerm apply_and_check_1_3 (ATerm r_126 (ATerm), ATerm h_73, ATerm i_73, ATerm j_73, ATerm t);
ATerm apply_and_fail_1_2 (ATerm s_126 (ATerm), ATerm k_73, ATerm l_73, ATerm t);
ATerm apply_and_fail_1_3 (ATerm t_126 (ATerm), ATerm m_73, ATerm n_73, ATerm o_73, ATerm t);
ATerm apply_and_show_1_2 (ATerm u_126 (ATerm), ATerm p_73, ATerm q_73, ATerm t);
ATerm do_test_1_1 (ATerm v_126 (ATerm), ATerm r_73, ATerm t);
ATerm init_record_0_0 (ATerm t);
ATerm record_success_0_0 (ATerm t);
ATerm record_failure_0_0 (ATerm t);
ATerm check_for_failures_0_0 (ATerm t);
ATerm report_test_0_0 (ATerm t);
ATerm test_suite_2_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm t);
ATerm do_test_2_0 (ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm t);
ATerm testing_2_0 (ATerm a_127 (ATerm), ATerm b_127 (ATerm), ATerm t);
ATerm apply_test_4_0 (ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm f_127 (ATerm), ATerm t);
ATerm apply_test_3_0 (ATerm g_127 (ATerm), ATerm h_127 (ATerm), ATerm i_127 (ATerm), ATerm t);
ATerm apply_and_check_4_0 (ATerm j_127 (ATerm), ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm t);
ATerm apply_and_fail_3_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm p_127 (ATerm), ATerm t);
ATerm apply_and_fail_4_0 (ATerm q_127 (ATerm), ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm t);
ATerm apply_and_show_3_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_3_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t);
ATerm graph_nodes_undef_3_0 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t);
ATerm graph_nodes_undef_chgr_3_0 (ATerm g_128 (ATerm), ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t);
ATerm graph_nodes_3_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm t);
ATerm GnInit_0_0 (ATerm t);
ATerm GnInitRoots_0_0 (ATerm t);
ATerm GnNext_3_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm t);
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
ATerm parenthesize_2_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm t);
ATerm parenthesize_1_0 (ATerm x_128 (ATerm), ATerm t);
ATerm Disambiguate_1_0 (ATerm k_4 (ATerm), ATerm t);
ATerm TempFiles_0_0 (ATerm t);
ATerm Import_0_0 (ATerm t);
ATerm Tool_1_0 (ATerm q_26 (ATerm), ATerm t);
ATerm XtcConf_4_0 (ATerm d_26 (ATerm), ATerm e_26 (ATerm), ATerm l_26 (ATerm), ATerm p_26 (ATerm), ATerm t);
ATerm XtcExport_0_0 (ATerm t);
ATerm XtcLoaded_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
ATerm XtcCache_0_0 (ATerm t);
ATerm XtcRef_0_0 (ATerm t);
ATerm XtcReg_0_0 (ATerm t);
ATerm Template_2_0 (ATerm b_26 (ATerm), ATerm c_26 (ATerm), ATerm t);
ATerm Explicit_0_0 (ATerm t);
ATerm Implicit_0_0 (ATerm t);
ATerm Regular_0_0 (ATerm t);
ATerm Layout_1_0 (ATerm y_25 (ATerm), ATerm t);
ATerm TOr_2_0 (ATerm w_25 (ATerm), ATerm x_25 (ATerm), ATerm t);
ATerm TVarSpec_1_0 (ATerm v_25 (ATerm), ATerm t);
ATerm Input_0_0 (ATerm t);
ATerm Output_0_0 (ATerm t);
ATerm Arguments_0_0 (ATerm t);
ATerm TVarOpt_4_0 (ATerm r_25 (ATerm), ATerm s_25 (ATerm), ATerm t_25 (ATerm), ATerm u_25 (ATerm), ATerm t);
ATerm TVarOne_4_0 (ATerm n_25 (ATerm), ATerm o_25 (ATerm), ATerm p_25 (ATerm), ATerm q_25 (ATerm), ATerm t);
ATerm TVarPlus_4_0 (ATerm j_25 (ATerm), ATerm k_25 (ATerm), ATerm l_25 (ATerm), ATerm m_25 (ATerm), ATerm t);
ATerm TVarStar_4_0 (ATerm e_25 (ATerm), ATerm f_25 (ATerm), ATerm g_25 (ATerm), ATerm i_25 (ATerm), ATerm t);
ATerm Default_1_0 (ATerm d_25 (ATerm), ATerm t);
ATerm Values_1_0 (ATerm c_25 (ATerm), ATerm t);
ATerm On_0_0 (ATerm t);
ATerm Off_0_0 (ATerm t);
ATerm Option_0_0 (ATerm t);
ATerm ArgOption_0_0 (ATerm t);
ATerm Type_1_0 (ATerm b_25 (ATerm), ATerm t);
ATerm XtcQuery_2_0 (ATerm z_24 (ATerm), ATerm a_25 (ATerm), ATerm t);
ATerm XtcQuery_1_0 (ATerm x_24 (ATerm), ATerm t);
ATerm XtcMeta_2_0 (ATerm v_24 (ATerm), ATerm w_24 (ATerm), ATerm t);
ATerm XtcInherit_2_0 (ATerm t_24 (ATerm), ATerm u_24 (ATerm), ATerm t);
ATerm XtcModel_2_0 (ATerm r_24 (ATerm), ATerm s_24 (ATerm), ATerm t);
ATerm XtcContracts_1_0 (ATerm q_24 (ATerm), ATerm t);
ATerm XtcDesc_1_0 (ATerm o_24 (ATerm), ATerm t);
ATerm XT_0_0 (ATerm t);
ATerm Exec_1_0 (ATerm n_24 (ATerm), ATerm t);
ATerm XTService_0_0 (ATerm t);
ATerm HTTP_1_0 (ATerm m_24 (ATerm), ATerm t);
ATerm Streams_3_0 (ATerm j_24 (ATerm), ATerm k_24 (ATerm), ATerm l_24 (ATerm), ATerm t);
ATerm Error_1_0 (ATerm i_24 (ATerm), ATerm t);
ATerm Std_1_0 (ATerm h_24 (ATerm), ATerm t);
ATerm File_1_0 (ATerm g_24 (ATerm), ATerm t);
ATerm Option_1_0 (ATerm f_24 (ATerm), ATerm t);
ATerm URL_1_0 (ATerm e_24 (ATerm), ATerm t);
ATerm FILE_1_0 (ATerm d_24 (ATerm), ATerm t);
ATerm Arguments_1_0 (ATerm c_24 (ATerm), ATerm t);
ATerm XtcContract_3_0 (ATerm z_23 (ATerm), ATerm a_24 (ATerm), ATerm b_24 (ATerm), ATerm t);
ATerm Pre_0_0 (ATerm t);
ATerm Post_0_0 (ATerm t);
ATerm String_1_0 (ATerm y_23 (ATerm), ATerm t);
ATerm Definition_2_0 (ATerm w_23 (ATerm), ATerm x_23 (ATerm), ATerm t);
ATerm Reference_1_0 (ATerm v_23 (ATerm), ATerm t);
ATerm Registration_2_0 (ATerm t_23 (ATerm), ATerm u_23 (ATerm), ATerm t);
ATerm Repository_1_0 (ATerm s_23 (ATerm), ATerm t);
ATerm xtc_find_1_0 (ATerm m_32 (ATerm), ATerm t)
{
  t = xtc_find_loc_1_0(m_32, t);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm o_2 (ATerm), ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = t;
      if((PushChoice() == 0))
        {
          ATerm p_3 = NULL,q_3 = NULL,l_4 = NULL;
          p_3 = t;
          if(match_cons(t, sym_XtcQuery_1))
            {
              q_3 = ATgetArgument(t, 0);
              {
                ATerm k_0 = NULL,s_2 = NULL;
                t = SSLgetAnnotations(p_3);
                k_0 = t;
                t = (ATerm) ATmakeAppl(sym_XtcQuery_1, q_3);
                s_2 = t;
                t = SSLsetAnnotations(s_2, k_0);
              }
            }
          else
            {
              ATerm r_2 = NULL,t_2 = NULL;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  q_3 = ATgetArgument(t, 0);
                  l_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_3);
              r_2 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, q_3, l_4);
              t_2 = t;
              t = SSLsetAnnotations(t_2, r_2);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_19;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(o_2, t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm w_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,v_2 = NULL;
            o_4 = t;
            if(match_cons(t, sym_XtcQuery_1))
              {
                n_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_4);
            m_4 = t;
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, n_4);
            v_2 = t;
            t = SSLsetAnnotations(v_2, m_4);
            LocalPopChoice(y_19);
          }
        else
          {
            t = w_19;
            {
              ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,w_2 = NULL;
              s_4 = t;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  q_4 = ATgetArgument(t, 0);
                  r_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_4);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, q_4, r_4);
              w_2 = t;
              t = SSLsetAnnotations(w_2, p_4);
            }
          }
      }
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(o_2, t);
            t = Snd_0_0(t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm t_4 = NULL;
              t_4 = t;
              t = xtc_import_0_0(t);
              t = t_4;
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
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_20 = t;
      if((PushChoice() == 0))
        {
          ATerm v_9 = NULL,w_9 = NULL,c_10 = NULL;
          v_9 = t;
          if(match_cons(t, sym_XtcQuery_1))
            {
              w_9 = ATgetArgument(t, 0);
              {
                ATerm j_3 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(v_9);
                j_3 = t;
                t = (ATerm) ATmakeAppl(sym_XtcQuery_1, w_9);
                c_3 = t;
                t = SSLsetAnnotations(c_3, j_3);
              }
            }
          else
            {
              ATerm q_5 = NULL,k_3 = NULL;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  w_9 = ATgetArgument(t, 0);
                  c_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_9);
              q_5 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, w_9, c_10);
              k_3 = t;
              t = SSLsetAnnotations(k_3, q_5);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_20;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(n_2, t);
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_10 = NULL,i_10 = NULL,k_10 = NULL,l_3 = NULL;
            k_10 = t;
            if(match_cons(t, sym_XtcQuery_1))
              {
                i_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_10);
            f_10 = t;
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, i_10);
            l_3 = t;
            t = SSLsetAnnotations(l_3, f_10);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            {
              ATerm t_10 = NULL,v_10 = NULL,k_12 = NULL,j_13 = NULL,o_3 = NULL;
              j_13 = t;
              if(match_cons(t, sym_XtcQuery_2))
                {
                  v_10 = ATgetArgument(t, 0);
                  k_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_13);
              t_10 = t;
              t = (ATerm) ATmakeAppl(sym_XtcQuery_2, v_10, k_12);
              o_3 = t;
              t = SSLsetAnnotations(o_3, t_10);
            }
          }
      }
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(n_2, t);
            t = Snd_0_0(t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm s_13 = NULL;
              s_13 = t;
              t = xtc_import_local_0_0(t);
              t = s_13;
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
ATerm xtc_find_loc_1_0 (ATerm h_32 (ATerm), ATerm t)
{
  t = xtc_find_reg_1_0(h_32, t);
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_find_path_1_0 (ATerm g_32 (ATerm), ATerm t)
{
  t = xtc_find_loc_1_0(g_32, t);
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
  ATerm v_16 = NULL;
  t = xtc_find_loc_1_0(Hd_0_0, t);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_16);
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
ATerm xtc_io_transform_text_1_0 (ATerm f_32 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = f_32(t);
  t = print_to_0_0(t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm e_32 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  t = read_from_0_0(t);
  t = e_32(t);
  x_16 = t;
  t = xtc_new_file_0_0(t);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_16, x_16);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_16);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm c_32 (ATerm), ATerm d_32 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  q_17 = t;
  t = xtc_new_file_0_0(t);
  r_17 = t;
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_17 = NULL;
        t = q_17;
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_18 = NULL,a_6 = NULL,t_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  t_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_17);
              a_6 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_18);
              t_6 = t;
              t = SSLsetAnnotations(t_6, a_6);
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = stdin_0_0(t);
            }
        }
        t = d_32(t);
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, q_17), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, r_17)), term_e_21, u_17);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm x_18 = NULL;
          t = q_17;
          t = None_0_0(t);
          t = d_32(t);
          x_18 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_e_21, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, r_17)), term_e_21, x_18);
        }
      }
  }
  t = xtc_command_1_0(c_32, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_17);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_file_1_0 (ATerm b_32 (ATerm), ATerm t)
{
  t = xtc_transform_file_2_0(b_32, b_0, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_31 (ATerm), ATerm a_32 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,n_19 = NULL;
  n_19 = t;
  t = xtc_new_file_0_0(t);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_19, n_19);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_19);
  t = xtc_transform_file_2_0(z_31, a_32, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_term_1_0 (ATerm y_31 (ATerm), ATerm t)
{
  t = xtc_transform_term_2_0(y_31, h_0, t);
  return(t);
}
ATerm xtc_generate_2_0 (ATerm w_31 (ATerm), ATerm x_31 (ATerm), ATerm t)
{
  t = term_e_21;
  t = xtc_transform_file_2_0(w_31, x_31, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_generate_1_0 (ATerm v_31 (ATerm), ATerm t)
{
  t = xtc_generate_2_0(v_31, m_0, t);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm t_31 (ATerm), ATerm u_31 (ATerm), ATerm t)
{
  ATerm f_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_19 = NULL,x_19 = NULL;
      x_19 = t;
      t = term_k_21;
      u_19 = t;
      t = x_19;
      t = dbg_0_1(u_19, t);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = NULL,s_21 = NULL,f_6 = NULL,x_6 = NULL;
            z_20 = t;
            if(match_cons(t, sym_FILE_1))
              {
                s_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_20);
            f_6 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_21);
            x_6 = t;
            t = SSLsetAnnotations(x_6, f_6);
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = stdin_0_0(t);
          }
      }
      LocalPopChoice(j_21);
      t = xtc_transform_file_2_0(t_31, u_31, t);
    }
  else
    {
      t = f_21;
      t = xtc_transform_term_2_0(t_31, u_31, t);
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm r_31 (ATerm), ATerm t)
{
  t = xtc_transform_2_0(r_31, o_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,r_7 = NULL,b_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_7);
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_7);
  b_7 = t;
  t = SSLsetAnnotations(b_7, o_7);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm t_7 = NULL,w_7 = NULL,z_7 = NULL,d_7 = NULL;
  z_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_7);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_7);
  d_7 = t;
  t = SSLsetAnnotations(d_7, t_7);
  return(t);
}
ATerm xtc_command_1_0 (ATerm m_2 (ATerm), ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,u_6 = NULL,w_6 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
      d_33 = t;
      if(match_cons(t, sym_XtcConf_4))
        {
          e_33 = ATgetArgument(t, 0);
          f_33 = ATgetArgument(t, 1);
          g_33 = ATgetArgument(t, 2);
          h_33 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_33);
      w_6 = t;
      t = e_33;
      t = option_1_0(xtc_ensure_file_0_0, t);
      h_7 = t;
      t = f_33;
      t = option_1_0(q_0, t);
      i_7 = t;
      t = g_33;
      t = option_1_0(e_2, t);
      j_7 = t;
      t = h_33;
      t = is_list_0_0(t);
      k_7 = t;
      t = (ATerm) ATmakeAppl(sym_XtcConf_4, h_7, i_7, j_7, k_7);
      m_7 = t;
      t = SSLsetAnnotations(m_7, w_6);
      l_7 = t;
      t = m_2(t);
      u_6 = t;
      t = l_7;
      t = xtc_dispatch_0_1(u_6, t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm i_33 = NULL,j_33 = NULL;
        t = is_list_0_0(t);
        i_33 = t;
        t = m_2(t);
        t = xtc_find_loc_1_0(Hd_0_0, t);
        t = file_exists_0_0(t);
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_33, i_33);
        t = call_0_0(t);
      }
    }
  return(t);
}
ATerm xtc_input_1_0 (ATerm o_31 (ATerm), ATerm t)
{
  static ATerm l_2 (ATerm t);
  static ATerm l_2 (ATerm t)
  {
    ATerm t_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL;
        t = term_w_21;
        t = get_config_0_0(t);
        l_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_33);
        LocalPopChoice(v_21);
      }
    else
      {
        t = t_21;
        t = term_x_21;
      }
    t = o_31(t);
    return(t);
  }
  t = xtc_temp_files_1_0(l_2, t);
  return(t);
}
ATerm xtc_output_1_0 (ATerm n_31 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    t = n_31(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(p_2, t);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_y_21;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_31 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t);
  static ATerm q_2 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_33 = NULL;
        t = term_w_21;
        t = get_config_0_0(t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_33);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = term_x_21;
      }
    t = m_31(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = o_33;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_io_wrap_2_1 (ATerm k_31 (ATerm), ATerm l_31 (ATerm), ATerm j_23, ATerm t)
{
  static ATerm u_2 (ATerm t);
  static ATerm x_2 (ATerm t);
  static ATerm u_2 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_31(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          ATerm v_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(w_22);
            }
          else
            {
              t = v_22;
              {
                ATerm x_22 = t;
                int y_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_22 = t;
                    int a_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_2, z_2, a_3, t);
                        LocalPopChoice(a_23);
                      }
                    else
                      {
                        t = z_22;
                        t = xtc_enforce_option_0_0(t);
                      }
                    LocalPopChoice(y_22);
                  }
                else
                  {
                    t = x_22;
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
    static ATerm b_3 (ATerm t);
    static ATerm b_3 (ATerm t)
    {
      ATerm b_23 = t;
      int c_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_33 = NULL;
          t = term_w_21;
          t = get_config_0_0(t);
          p_33 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, p_33);
          LocalPopChoice(c_23);
        }
      else
        {
          t = b_23;
          t = term_x_21;
        }
      t = l_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, j_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, j_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = xtc_temp_files_1_0(b_3, t);
    return(t);
  }
  t = option_wrap_2_0(u_2, x_2, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = s_33;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_io_wrap_3_0 (ATerm h_31 (ATerm), ATerm i_31 (ATerm), ATerm j_31 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  static ATerm d_3 (ATerm t);
  static ATerm e_3 (ATerm t);
  static ATerm d_3 (ATerm t)
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_31(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              {
                ATerm w_29 = t;
                int x_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_30 = t;
                    int i_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(f_3, g_3, h_3, t);
                        LocalPopChoice(i_30);
                      }
                    else
                      {
                        t = h_30;
                        t = xtc_enforce_option_0_0(t);
                      }
                    LocalPopChoice(x_29);
                  }
                else
                  {
                    t = w_29;
                    t = xtc_dependency_options_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm e_3 (ATerm t)
  {
    static ATerm i_3 (ATerm t);
    static ATerm i_3 (ATerm t)
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_33 = NULL;
          t = term_w_21;
          t = get_config_0_0(t);
          t_33 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_33);
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          t = term_x_21;
        }
      t = j_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, not_null(r_33));
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, not_null(r_33));
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = xtc_temp_files_1_0(i_3, t);
    return(t);
  }
  q_33 = t;
  t = i_31(t);
  if(((r_33 != NULL) && (r_33 != t)))
    _fail(t);
  else
    r_33 = t;
  t = q_33;
  t = option_wrap_2_0(d_3, e_3, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = u_33;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm f_31 (ATerm), ATerm g_31 (ATerm), ATerm t)
{
  static ATerm m_3 (ATerm t);
  static ATerm n_3 (ATerm t);
  static ATerm m_3 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_31(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        {
          ATerm t_30 = t;
          int k_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(k_32);
            }
          else
            {
              t = t_30;
              {
                ATerm l_32 = t;
                int n_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Option_3_0(u_4, v_4, y_4, t);
                    LocalPopChoice(n_32);
                  }
                else
                  {
                    t = l_32;
                    t = xtc_enforce_option_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm n_3 (ATerm t)
  {
    static ATerm b_5 (ATerm t);
    static ATerm b_5 (ATerm t)
    {
      ATerm o_32 = t;
      int r_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_33 = NULL;
          t = term_w_21;
          t = get_config_0_0(t);
          v_33 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_33);
          LocalPopChoice(r_32);
        }
      else
        {
          t = o_32;
          t = term_x_21;
        }
      t = g_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(b_5, t);
    return(t);
  }
  t = option_wrap_2_0(m_3, n_3, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_5, s_5, t_5, t);
                LocalPopChoice(a_33);
              }
            else
              {
                t = y_32;
                t = xtc_enforce_option_0_0(t);
              }
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = xtc_dependency_options_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = x_33;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_io_wrap_1_1 (ATerm e_31 (ATerm), ATerm i_23, ATerm t)
{
  static ATerm h_5 (ATerm t);
  static ATerm h_5 (ATerm t)
  {
    static ATerm u_5 (ATerm t);
    static ATerm u_5 (ATerm t)
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_33 = NULL;
          t = term_w_21;
          t = get_config_0_0(t);
          y_33 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, y_33);
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          t = term_x_21;
        }
      t = e_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, i_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, i_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = xtc_temp_files_1_0(u_5, t);
    return(t);
  }
  t = option_wrap_2_0(f_5, h_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm k_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      LocalPopChoice(n_33);
    }
  else
    {
      t = k_33;
      {
        ATerm w_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(x_5, y_5, z_5, t);
            LocalPopChoice(a_34);
          }
        else
          {
            t = w_33;
            t = xtc_enforce_option_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = z_33;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm d_31 (ATerm), ATerm t)
{
  static ATerm w_5 (ATerm t);
  static ATerm w_5 (ATerm t)
  {
    static ATerm b_6 (ATerm t);
    static ATerm b_6 (ATerm t)
    {
      ATerm i_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_34 = NULL;
          t = term_w_21;
          t = get_config_0_0(t);
          b_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_34);
          LocalPopChoice(l_34);
        }
      else
        {
          t = i_34;
          t = term_x_21;
        }
      t = d_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(b_6, t);
    return(t);
  }
  t = option_wrap_2_0(v_5, w_5, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = c_34;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm b_31 (ATerm), ATerm c_31 (ATerm), ATerm t)
{
  static ATerm c_6 (ATerm t);
  static ATerm d_6 (ATerm t);
  static ATerm c_6 (ATerm t)
  {
    ATerm m_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_31(t);
        LocalPopChoice(o_34);
      }
    else
      {
        t = m_34;
        {
          ATerm p_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(q_34);
            }
          else
            {
              t = p_34;
              {
                ATerm s_34 = t;
                int u_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Option_3_0(e_6, g_6, h_6, t);
                    LocalPopChoice(u_34);
                  }
                else
                  {
                    t = s_34;
                    t = xtc_enforce_option_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm d_6 (ATerm t)
  {
    static ATerm i_6 (ATerm t);
    static ATerm i_6 (ATerm t)
    {
      ATerm v_34 = t;
      int y_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_34 = NULL;
          t = term_w_21;
          t = get_config_0_0(t);
          d_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_34);
          LocalPopChoice(y_34);
        }
      else
        {
          t = v_34;
          t = term_x_21;
        }
      t = c_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(i_6, t);
    return(t);
  }
  t = option_wrap_2_0(c_6, d_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm a_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      LocalPopChoice(e_35);
    }
  else
    {
      t = a_35;
      {
        ATerm g_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(l_6, m_6, n_6, t);
            LocalPopChoice(i_35);
          }
        else
          {
            t = g_35;
            t = xtc_enforce_option_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = e_34;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_iowrap_1_0 (ATerm a_31 (ATerm), ATerm t)
{
  static ATerm k_6 (ATerm t);
  static ATerm k_6 (ATerm t)
  {
    static ATerm o_6 (ATerm t);
    static ATerm o_6 (ATerm t)
    {
      ATerm l_35 = t;
      int m_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_34 = NULL;
          t = term_w_21;
          t = get_config_0_0(t);
          f_34 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_34);
          LocalPopChoice(m_35);
        }
      else
        {
          t = l_35;
          t = term_x_21;
        }
      t = a_31(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_6, t);
    return(t);
  }
  t = option_wrap_2_0(j_6, k_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = g_34;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_wrap_2_1 (ATerm y_30 (ATerm), ATerm z_30 (ATerm), ATerm h_23, ATerm t)
{
  static ATerm p_6 (ATerm t);
  static ATerm s_6 (ATerm t);
  static ATerm p_6 (ATerm t)
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_30(t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_35 = t;
              int y_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_6, y_6, z_6, t);
                  LocalPopChoice(y_35);
                }
              else
                {
                  t = x_35;
                  t = xtc_enforce_option_0_0(t);
                }
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              t = xtc_dependency_options_0_0(t);
            }
        }
      }
    return(t);
  }
  static ATerm s_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, h_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = z_30(t);
    return(t);
  }
  t = option_wrap_2_0(p_6, s_6, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = h_34;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm w_30 (ATerm), ATerm x_30 (ATerm), ATerm t)
{
  static ATerm a_7 (ATerm t);
  static ATerm a_7 (ATerm t)
  {
    ATerm b_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_30(t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = b_36;
        {
          ATerm e_36 = t;
          int g_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Option_3_0(c_7, g_7, n_7, t);
              LocalPopChoice(g_36);
            }
          else
            {
              t = e_36;
              t = xtc_enforce_option_0_0(t);
            }
        }
      }
    return(t);
  }
  t = option_wrap_2_0(a_7, x_30, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Option_3_0(b_8, c_8, d_8, t);
          LocalPopChoice(k_36);
        }
      else
        {
          t = j_36;
          t = xtc_enforce_option_0_0(t);
        }
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      t = xtc_dependency_options_0_0(t);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = j_34;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_wrap_1_1 (ATerm v_30 (ATerm), ATerm g_23, ATerm t)
{
  static ATerm a_8 (ATerm t);
  static ATerm a_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, g_23);
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = v_30(t);
    return(t);
  }
  t = option_wrap_2_0(q_7, a_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm m_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_8, h_8, i_8, t);
      LocalPopChoice(o_36);
    }
  else
    {
      t = m_36;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm k_34 = NULL;
  k_34 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = k_34;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_wrap_1_0 (ATerm u_30 (ATerm), ATerm t)
{
  t = option_wrap_2_0(e_8, u_30, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm q_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_36;
      t = get_config_0_0(t);
      LocalPopChoice(s_36);
    }
  else
    {
      t = q_36;
      t = term_u_36;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_8 = NULL;
      t = term_t_36;
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            t = term_u_36;
          }
      }
      g_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_21, g_8);
      t = copy_file_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm x_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_34;
      t = copy_to_1_0(j_8, t);
    }
  return(t);
}
ATerm xtc_pass_verbose_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  t = term_z_36;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = term_e_37;
      }
  }
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_35, term_e_37);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  b_35 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_z_36, b_35));
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = get_config_0_0(t);
  t = d_35;
  return(t);
}
ATerm xtc_pass_options_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_37), term_b_22), term_g_37);
  t = filter_1_0(k_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-preload", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = term_j_37;
  t = set_config_0_0(t);
  t = term_l_37;
  t = set_config_0_0(t);
  t = j_35;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_m_37;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dependencies", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = term_o_37;
  t = set_config_0_0(t);
  t = k_35;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm xtc_dependency_options_0_0 (ATerm t)
{
  ATerm r_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_8, m_8, o_8, t);
      LocalPopChoice(t_37);
    }
  else
    {
      t = r_37;
      t = Option_3_0(p_8, q_8, r_8, t);
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm v_37 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_37;
    }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm xtc_preload_0_0 (ATerm t)
{
  ATerm n_35 = NULL;
  ATerm z_37 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_35 = NULL;
      o_35 = t;
      t = term_d_23;
      t = get_config_0_0(t);
      {
        ATerm e_38 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_38;
          }
      }
      n_35 = t;
      t = o_35;
      LocalPopChoice(c_38);
      t = n_35;
      t = filter_1_0(s_8, t);
      {
        ATerm g_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_35 = NULL;
            p_35 = t;
            t = Nil_0_0(t);
            t = p_35;
            LocalPopChoice(l_38);
            {
              ATerm m_38 = t;
              int o_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_35 = NULL;
                  q_35 = t;
                  t = term_n_37;
                  t = get_config_0_0(t);
                  t = q_35;
                  LocalPopChoice(o_38);
                  t = term_p_38;
                  t = echo_0_0(t);
                  t = term_y_21;
                  t = exit_0_0(t);
                }
              else
                {
                  t = m_38;
                }
            }
          }
        else
          {
            t = g_38;
            t = debug_1_0(v_8, t);
            t = term_e_37;
            t = exit_0_0(t);
          }
      }
    }
  else
    {
      t = z_37;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_35 = NULL;
  if(match_cons(t, sym_URL_1))
    {
      v_35 = ATgetArgument(t, 0);
      {
        ATerm w_35 = NULL;
        t = v_35;
        t = is_url_http_0_0(t);
        w_35 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_w_38), w_35);
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_x_21;
          t = ReadFromFile_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              v_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_35;
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
        }
    }
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_36 = NULL;
        t = term_z_38;
        a_36 = t;
        t = z_35;
        t = string_starts_with_0_1(a_36, t);
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        {
          ATerm c_36 = NULL;
          t = term_b_39;
          c_36 = t;
          t = z_35;
          t = string_starts_with_0_1(c_36, t);
        }
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_2 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  a_37 = t;
  if(match_cons(t, sym_URL_1))
    {
      b_37 = ATgetArgument(t, 0);
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_URL_1, b_37);
            t = read_from_0_0(t);
            t = rename_to_1_0(k_2, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, b_37);
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
            t = a_37;
            t = k_2(t);
            if((b_37 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_URL_1, b_37);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          b_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL;
            t = a_37;
            t = k_2(t);
            n_8 = t;
            {
              ATerm l_39 = t;
              int m_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  LocalPopChoice(m_39);
                }
              else
                {
                  t = l_39;
                  t = stderr_0_0(t);
                }
            }
            t = (ATerm) ATmakeAppl(sym__2, b_37, n_8);
            t = copy_file_0_0(t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_37);
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            {
              ATerm n_39 = t;
              int w_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_8 = NULL;
                  t = a_37;
                  t = k_2(t);
                  t_8 = t;
                  {
                    ATerm x_39 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm z_39 = t;
                        int b_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0_0(t);
                            LocalPopChoice(b_40);
                          }
                        else
                          {
                            t = z_39;
                            {
                              ATerm f_40 = t;
                              int i_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = stderr_0_0(t);
                                  LocalPopChoice(i_40);
                                }
                              else
                                {
                                  t = f_40;
                                  {
                                    ATerm u_8 = NULL;
                                    u_8 = t;
                                    if((b_37 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = u_8;
                                  }
                                }
                            }
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_39;
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, b_37, t_8);
                  t = copy_file_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_FILE_1, b_37);
                  LocalPopChoice(w_39);
                }
              else
                {
                  t = n_39;
                  t = a_37;
                  t = k_2(t);
                  if((b_37 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, b_37);
                }
            }
          }
      }
    }
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  {
    ATerm k_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_URL_1))
          {
            ATerm s_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_40);
        t = i_37;
        t = read_from_0_0(t);
      }
    else
      {
        t = k_40;
        if(match_cons(t, sym_stdin_0))
          {
            ATerm k_37 = NULL;
            t = term_c_22;
            t = xtc_new_file_0_0(t);
            k_37 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_x_21, k_37);
            t = copy_file_0_0(t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, k_37);
          }
        else
          {
            if(match_cons(t, sym_FILE_1))
              {
                ATerm u_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_37;
          }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm j_2 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  a_38 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_38;
        t = j_2(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_38, term_u_36);
        t = copy_file_0_0(t);
        t = b_38;
        t = remove_file_0_0(t);
        t = term_u_36;
        LocalPopChoice(x_40);
      }
    else
      {
        t = v_40;
        {
          ATerm y_40 = t;
          int a_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_9 = NULL;
              t = a_38;
              t = j_2(t);
              f_9 = t;
              {
                ATerm c_41 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_41 = t;
                    int e_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0_0(t);
                        LocalPopChoice(e_41);
                      }
                    else
                      {
                        t = d_41;
                        {
                          ATerm g_9 = NULL;
                          g_9 = t;
                          if((b_38 != t))
                            {
                              _fail(t);
                            }
                          t = g_9;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_41;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_38, f_9);
              t = rename_file_0_0(t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_9);
              LocalPopChoice(a_41);
            }
          else
            {
              t = y_40;
              t = a_38;
              t = j_2(t);
              if((b_38 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_38);
            }
        }
      }
  }
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm f_38 = NULL,h_38 = NULL;
  h_38 = t;
  t = xtc_new_file_0_0(t);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_38, h_38);
  t = WriteToTextFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_38);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  j_38 = t;
  t = xtc_new_file_0_0(t);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_38);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_38 = NULL;
      k_38 = t;
      {
        ATerm h_41 = t;
        int i_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_38 = NULL;
            t = term_c_22;
            t = STDIN__FILENO_0_0(t);
            n_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_38, n_38);
            t = eq_0_0(t);
            t = k_38;
            LocalPopChoice(i_41);
          }
        else
          {
            t = h_41;
            {
              ATerm l_41 = t;
              int n_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_38 = NULL;
                  t = term_c_22;
                  t = STDOUT__FILENO_0_0(t);
                  q_38 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_38, q_38);
                  t = eq_0_0(t);
                  t = k_38;
                  LocalPopChoice(n_41);
                }
              else
                {
                  t = l_41;
                  {
                    ATerm s_38 = NULL;
                    t = term_c_22;
                    t = STDERR__FILENO_0_0(t);
                    s_38 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_38, s_38);
                    t = eq_0_0(t);
                    t = k_38;
                  }
                }
            }
          }
      }
      LocalPopChoice(g_41);
    }
  else
    {
      t = f_41;
      t = close_0_0(t);
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  t = finally_2_0(w_8, x_8, t);
  return(t);
}
ATerm xtc_open_fd_0_0 (ATerm t)
{
  ATerm v_38 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      v_38 = ATgetArgument(t, 0);
      t = v_38;
      t = open_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_c_22;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_c_22;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_c_22;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm a_39 = NULL;
  t = new_file_0_0(t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, term_c_22);
  t = assert_1_0(y_8, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_39);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm l_30 (ATerm), ATerm t)
{
  ATerm c_39 = NULL;
  static ATerm z_8 (ATerm t);
  static ATerm z_8 (ATerm t)
  {
    ATerm d_39 = NULL;
    d_39 = t;
    {
      static ATerm a_9 (ATerm t);
      static ATerm a_9 (ATerm t)
      {
        t = not_null(c_39);
        t = xtc_close_fd_0_0(t);
        return(t);
      }
      t = try_1_0(a_9, t);
    }
    t = d_39;
    return(t);
  }
  t = xtc_open_fd_0_0(t);
  if(((c_39 != NULL) && (c_39 != t)))
    _fail(t);
  else
    c_39 = t;
  t = finally_2_0(l_30, z_8, t);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,o_39 = NULL;
  h_39 = t;
  t = xtc_new_file_name_0_0(t);
  g_39 = t;
  t = xtc_open_fd_0_0(t);
  o_39 = t;
  t = h_39;
  {
    static ATerm b_9 (ATerm t);
    static ATerm b_9 (ATerm t)
    {
      static ATerm c_9 (ATerm t);
      static ATerm c_9 (ATerm t)
      {
        ATerm p_39 = NULL;
        p_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_39, o_39);
        t = fdcopy_0_0(t);
        return(t);
      }
      t = File_as_fd_1_0(c_9, t);
      return(t);
    }
    t = map_1_0(b_9, t);
  }
  t = o_39;
  t = xtc_close_fd_0_0(t);
  t = g_39;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm r_39 = NULL;
  static ATerm d_9 (ATerm t);
  static ATerm d_9 (ATerm t)
  {
    ATerm s_39 = NULL;
    s_39 = t;
    t = term_i_42;
    t = table_get_0_0(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_39 != NULL) && (r_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_39 = ATgetFirst((ATermList) t);
        {
          ATerm x_42 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_39;
    t = map_1_0(e_9, t);
    t = s_39;
    t = end_scope_1_0(h_9, t);
    return(t);
  }
  t = repeat_1_0(d_9, t);
  t = exit_0_0(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_30 (ATerm), ATerm t)
{
  ATerm t_39 = NULL;
  static ATerm j_9 (ATerm t);
  static ATerm j_9 (ATerm t)
  {
    ATerm u_39 = NULL;
    u_39 = t;
    {
      ATerm z_42 = t;
      int c_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_42;
          t = table_get_0_0(t);
          LocalPopChoice(c_43);
        }
      else
        {
          t = z_42;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_39 != NULL) && (t_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_39 = ATgetFirst((ATermList) t);
        {
          ATerm f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_39;
    t = map_1_0(k_9, t);
    t = u_39;
    t = end_scope_1_0(l_9, t);
    return(t);
  }
  t = begin_scope_1_0(i_9, t);
  t = restore_always_2_0(k_30, j_9, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm xtc_new_temp_file_0_0 (ATerm t)
{
  ATerm v_39 = NULL,d_40 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      v_39 = ATgetArgument(t, 0);
      {
        ATerm h_43 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_39, term_c_22);
  t = assert_1_0(m_9, t);
  t = d_40;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_40 = NULL,h_40 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_40, term_c_22);
  t = assert_1_0(n_9, t);
  t = e_40;
  t = close_0_0(t);
  t = h_40;
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm m_40 = NULL,o_40 = NULL;
  m_40 = t;
  t = xtc_new_file_0_0(t);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, term_j_43);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, o_40, m_40);
  t = print_0_0(t);
  t = o_40;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_40);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = w_40;
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm j_30 (ATerm), ATerm t)
{
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_40 = NULL;
      q_40 = t;
      t = term_b_22;
      t = get_config_0_0(t);
      t = q_40;
      LocalPopChoice(l_43);
      {
        ATerm t_40 = NULL;
        t_40 = t;
        t = term_b_22;
        t = rm_config_0_0(t);
        t = t_40;
        t = restore_always_2_0(j_30, p_9, t);
      }
    }
  else
    {
      t = k_43;
      t = j_30(t);
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm i_2 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,c_45 = NULL,e_45 = NULL;
  w_44 = t;
  if(match_cons(t, sym__2))
    {
      x_44 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_44;
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__3))
          {
            ATerm p_43 = ATgetArgument(t, 0);
            ATerm t_43 = ATgetArgument(t, 1);
            c_45 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(o_43);
        {
          ATerm o_9 = NULL,q_9 = NULL;
          t = e_45;
          if(match_cons(t, sym_XtcContract_3))
            {
              ATerm v_43 = ATgetArgument(t, 0);
              s_44 = ATgetArgument(t, 1);
              t_44 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = w_44;
          t = Fst_0_0(t);
          t = i_2(t);
          o_9 = t;
          t = t_44;
          {
            ATerm x_43 = t;
            int y_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_9 = NULL;
                if(match_cons(t, sym_Some_1))
                  {
                    t_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_9;
                LocalPopChoice(y_43);
              }
            else
              {
                t = x_43;
                t = (ATerm) ATempty;
              }
          }
          {
            ATerm z_43 = t;
            int a_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_9 = NULL;
                if(match_cons(t, sym_Arguments_1))
                  {
                    y_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_9;
                LocalPopChoice(a_44);
              }
            else
              {
                t = z_43;
                t = Nil_0_0(t);
              }
          }
          q_9 = t;
          {
            ATerm b_44 = t;
            int d_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_10 = NULL;
                static ATerm r_9 (ATerm t);
                static ATerm r_9 (ATerm t)
                {
                  t = xtc_dispatch_0_1(s_44, t);
                  return(t);
                }
                t = xtc_new_file_0_0(t);
                a_10 = t;
                t = (ATerm) ATmakeAppl(sym_XtcConf_4, o_9, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, a_10)), c_45, q_9);
                t = xtc_cc_disable_1_0(r_9, t);
                LocalPopChoice(d_44);
              }
            else
              {
                t = b_44;
                t = xtc_enforce_contract_0_0(t);
              }
          }
        }
      }
    else
      {
        t = n_43;
        if(match_cons(t, sym_XtcConf_4))
          {
            y_44 = ATgetArgument(t, 0);
            z_44 = ATgetArgument(t, 1);
            c_45 = ATgetArgument(t, 2);
            {
              ATerm e_44 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        t = w_44;
        {
          ATerm f_44 = t;
          int i_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_45;
              t = xtc_fetch_contracts_1_0(i_2, t);
              LocalPopChoice(i_44);
              {
                static ATerm s_9 (ATerm t);
                static ATerm s_9 (ATerm t)
                {
                  ATerm u_10 = NULL;
                  u_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, y_44, z_44, c_45), u_10);
                  t = xtc_cc_1_0(i_2, t);
                  return(t);
                }
                t = map_1_0(s_9, t);
              }
            }
          else
            {
              t = f_44;
            }
        }
        t = w_44;
      }
  }
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm g_30 (ATerm), ATerm t)
{
  ATerm j_45 = NULL;
  ATerm j_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
      k_45 = t;
      t = term_b_22;
      t = get_config_0_0(t);
      m_45 = t;
      t = term_m_44;
      l_45 = t;
      t = m_45;
      t = notice_0_1(l_45, t);
      t = k_45;
      LocalPopChoice(l_44);
      {
        ATerm n_45 = NULL,q_45 = NULL,t_45 = NULL,v_45 = NULL;
        v_45 = t;
        t = term_n_44;
        t_45 = t;
        t = v_45;
        t = dbg_0_1(t_45, t);
        t = xtc_cc_1_0(Fst_0_0, t);
        q_45 = t;
        t = g_30(t);
        j_45 = t;
        t = q_45;
        t = xtc_cc_1_0(Snd_0_0, t);
        t = term_o_44;
        n_45 = t;
        t = j_45;
        t = dbg_0_1(n_45, t);
      }
    }
  else
    {
      t = j_44;
      t = g_30(t);
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  t = term_p_44;
  t = set_config_0_0(t);
  t = term_d_22;
  t = set_config_0_0(t);
  t = y_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(u_9, x_9, z_9, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = z_45;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(b_10, d_10, e_10, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  t = term_d_22;
  t = set_config_0_0(t);
  t = a_46;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm r_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_10, h_10, j_10, t);
      LocalPopChoice(u_44);
    }
  else
    {
      t = r_44;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm v_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_46 = NULL;
      b_46 = t;
      t = term_h_37;
      t = get_config_0_0(t);
      t = b_46;
      LocalPopChoice(a_45);
      {
        ATerm g_46 = NULL,i_46 = NULL;
        i_46 = t;
        t = term_b_45;
        g_46 = t;
        t = i_46;
        t = err_0_1(g_46, t);
        _fail(t);
      }
    }
  else
    {
      t = v_44;
      {
        ATerm j_46 = NULL,l_46 = NULL;
        l_46 = t;
        t = term_d_45;
        j_46 = t;
        t = l_46;
        t = warn_0_1(j_46, t);
      }
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm m_46 = NULL,p_46 = NULL,q_46 = NULL;
  m_46 = t;
  t = term_b_22;
  t = get_config_0_0(t);
  q_46 = t;
  t = term_m_44;
  p_46 = t;
  t = q_46;
  t = notice_0_1(p_46, t);
  t = m_46;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm f_30 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,z_46 = NULL,b_47 = NULL,d_47 = NULL;
  d_47 = t;
  t = term_f_45;
  b_47 = t;
  t = d_47;
  t = xtc_fetch_meta_0_1(b_47, t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_46;
  {
    static ATerm l_10 (ATerm t);
    static ATerm l_10 (ATerm t)
    {
      ATerm f_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,t_47 = NULL,f_15 = NULL;
      t_47 = t;
      if(match_cons(t, sym_XtcContract_3))
        {
          o_47 = ATgetArgument(t, 0);
          p_47 = ATgetArgument(t, 1);
          q_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_47);
      f_47 = t;
      t = term_o_45;
      t = f_30(t);
      r_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_47, r_47);
      t = eq_0_0(t);
      t = (ATerm) ATmakeAppl(sym_XtcContract_3, o_47, p_47, q_47);
      f_15 = t;
      t = SSLsetAnnotations(f_15, f_47);
      return(t);
    }
    t = filter_1_0(l_10, t);
  }
  u_46 = t;
  t = term_f_45;
  t_46 = t;
  t = u_46;
  t = dbg_0_1(t_46, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm p_45 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_45;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  t = filter_1_0(m_10, t);
  t = Nil_0_0(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm r_45 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_45;
    }
  return(t);
}
ATerm xtc_missing_dependencies_0_0 (ATerm t)
{
  t = filter_1_0(n_10, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm s_45 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_45;
    }
  return(t);
}
ATerm xtc_check_dependencies_0_0 (ATerm t)
{
  t = filter_1_0(o_10, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm h_2, ATerm t)
{
  ATerm a_48 = NULL;
  if(match_cons(t, sym_Error_1))
    {
      a_48 = ATgetArgument(t, 0);
      t = a_48;
      t = xtc_streamdef_to_fd_0_1(h_2, t);
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          a_48 = ATgetArgument(t, 0);
          t = a_48;
          t = xtc_streamdef_to_fd_0_1(h_2, t);
        }
      else
        {
          if(match_cons(t, sym_Input_1))
            {
              a_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_48;
          t = xtc_streamdef_to_fd_0_1(h_2, t);
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm g_2, ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  s_48 = t;
  if(match_cons(t, sym_Std_1))
    {
      t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_48;
  {
    ATerm u_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Some_1))
          {
            ATerm x_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_45);
        {
          ATerm f_11 = NULL;
          t = g_2;
          if(match_cons(t, sym_Some_1))
            {
              ATerm c_46 = ATgetArgument(t, 0);
              if(match_cons(c_46, sym_FILE_1))
                {
                  f_11 = ATgetArgument(c_46, 0);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = f_11;
          t = open_0_0(t);
        }
      }
    else
      {
        t = u_45;
        {
          ATerm i_11 = NULL;
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = g_2;
          if(match_cons(t, sym_Some_1))
            {
              ATerm d_46 = ATgetArgument(t, 0);
              if(match_cons(d_46, sym_FILE_1))
                {
                  i_11 = ATgetArgument(d_46, 0);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = i_11;
          t = open_0_0(t);
        }
      }
  }
  return(t);
}
ATerm xtc_stream_to_arg_0_1 (ATerm f_2, ATerm t)
{
  ATerm a_49 = NULL;
  if(match_cons(t, sym_Error_1))
    {
      a_49 = ATgetArgument(t, 0);
      t = a_49;
      t = xtc_streamdef_to_arg_0_1(f_2, t);
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          a_49 = ATgetArgument(t, 0);
          t = a_49;
          t = xtc_streamdef_to_arg_0_1(f_2, t);
        }
      else
        {
          if(match_cons(t, sym_Input_1))
            {
              a_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_49;
          t = xtc_streamdef_to_arg_0_1(f_2, t);
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm d_2, ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  r_49 = t;
  if(match_cons(t, sym_File_1))
    {
      s_49 = ATgetArgument(t, 0);
      t = s_49;
      if(match_cons(t, sym_Some_1))
        {
          q_49 = ATgetArgument(t, 0);
          {
            ATerm n_11 = NULL;
            t = d_2;
            if(match_cons(t, sym_FILE_1))
              {
                n_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, q_49, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, n_11))));
          }
        }
      else
        {
          ATerm r_11 = NULL;
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = d_2;
          if(match_cons(t, sym_FILE_1))
            {
              r_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, r_11))));
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          s_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_49;
      if(match_cons(t, sym_Some_1))
        {
          q_49 = ATgetArgument(t, 0);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, q_49));
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
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      u_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_50;
  if(match_cons(t, sym_HTTP_1))
    {
      v_50 = ATgetArgument(t, 0);
      {
        ATerm w_11 = NULL;
        t = v_50;
        if(match_cons(t, sym_Streams_3))
          {
            w_11 = ATgetArgument(t, 0);
            {
              ATerm e_46 = ATgetArgument(t, 1);
            }
            {
              ATerm f_46 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_11;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_s_46;
        }
      else
        {
          ATerm c_12 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              v_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_50;
          if(match_cons(t, sym_Streams_3))
            {
              c_12 = ATgetArgument(t, 0);
              {
                ATerm v_46 = ATgetArgument(t, 1);
              }
              {
                ATerm y_46 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = c_12;
        }
    }
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm c_47 = ATgetArgument(t, 0);
      if(match_cons(c_47, sym_Exec_1))
        {
          c_51 = ATgetArgument(c_47, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = c_51;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm e_47 = ATgetArgument(t, 0);
      ATerm g_47 = ATgetArgument(t, 1);
      d_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_51;
  return(t);
}
static ATerm s_41 (ATerm m_19, ATerm t)
{
  ATerm e_51 = NULL;
  t = m_19;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm h_47 = ATgetArgument(t, 0);
      ATerm i_47 = ATgetArgument(t, 1);
      e_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_51;
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm j_51 = NULL,m_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm j_47 = ATgetArgument(t, 0);
      if(match_cons(j_47, sym_Exec_1))
        {
          j_51 = ATgetArgument(j_47, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = j_51;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm l_47 = ATgetArgument(t, 0);
      m_51 = ATgetArgument(t, 1);
      {
        ATerm m_47 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = m_51;
  return(t);
}
static ATerm t_41 (ATerm k_19, ATerm t)
{
  ATerm n_51 = NULL;
  t = k_19;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
      {
        ATerm u_47 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_51;
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm o_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm v_47 = ATgetArgument(t, 0);
      ATerm b_48 = ATgetArgument(t, 1);
      o_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_51;
  return(t);
}
static ATerm u_41 (ATerm h_19, ATerm t)
{
  t = h_19;
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm p_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm c_48 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
      {
        ATerm d_48 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_51;
  return(t);
}
static ATerm v_41 (ATerm g_19, ATerm t)
{
  t = g_19;
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm q_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      q_51 = ATgetArgument(t, 0);
      {
        ATerm f_48 = ATgetArgument(t, 1);
      }
      {
        ATerm h_48 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_51;
  return(t);
}
static ATerm w_41 (ATerm f_19, ATerm t)
{
  t = f_19;
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm s_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm i_48 = ATgetArgument(t, 0);
      ATerm j_48 = ATgetArgument(t, 1);
      ATerm k_48 = ATgetArgument(t, 2);
      s_51 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_51;
  return(t);
}
static ATerm y_41 (ATerm e_19, ATerm t)
{
  t = e_19;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm l_48 = ATgetArgument(t, 0);
      ATerm m_48 = ATgetArgument(t, 1);
      ATerm n_48 = ATgetArgument(t, 2);
      if(match_cons(n_48, sym_Some_1))
        {
          t_51 = ATgetArgument(n_48, 0);
        }
      else
        _fail(t);
      {
        ATerm o_48 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = t_51;
  return(t);
}
static ATerm z_41 (ATerm d_19, ATerm t)
{
  t = d_19;
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm p_48 = ATgetArgument(t, 0);
      ATerm q_48 = ATgetArgument(t, 1);
      if(match_cons(q_48, sym_Some_1))
        {
          u_51 = ATgetArgument(q_48, 0);
        }
      else
        _fail(t);
      {
        ATerm r_48 = ATgetArgument(t, 2);
      }
      {
        ATerm u_48 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = u_51;
  return(t);
}
static ATerm a_42 (ATerm c_19, ATerm t)
{
  t = c_19;
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm v_48 = ATgetArgument(t, 0);
      if(match_cons(v_48, sym_Some_1))
        {
          v_51 = ATgetArgument(v_48, 0);
        }
      else
        _fail(t);
      {
        ATerm w_48 = ATgetArgument(t, 1);
      }
      {
        ATerm x_48 = ATgetArgument(t, 2);
      }
      {
        ATerm y_48 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = v_51;
  return(t);
}
static ATerm b_42 (ATerm b_19, ATerm t)
{
  t = b_19;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm y_18, ATerm t)
{
  ATerm w_51 = NULL,c_52 = NULL;
  if(match_cons(t, sym_XtcModel_2))
    {
      w_51 = ATgetArgument(t, 0);
      c_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_42(y_18, w_51, c_52, t);
  return(t);
}
static ATerm c_42 (ATerm y_18, ATerm a_19, ATerm z_18, ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,v_17 = NULL;
  t = y_18;
  if(match_cons(t, sym_XtcConf_4))
    {
      e_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
      h_52 = ATgetArgument(t, 2);
      {
        ATerm z_48 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_18);
  d_52 = t;
  t = z_18;
  t = xtc_template_to_args_0_2(a_19, y_18, t);
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, e_52, g_52, h_52, i_52);
  v_17 = t;
  t = SSLsetAnnotations(v_17, d_52);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  if(match_cons(t, sym__2))
    {
      e_53 = ATgetArgument(t, 0);
      f_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_42(e_53, f_53, t);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm b_2, ATerm c_2, ATerm t)
{
  ATerm u_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  if(match_cons(t, sym_Template_2))
    {
      u_52 = ATgetArgument(t, 0);
      w_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_52;
  if(match_cons(t, sym_Explicit_0))
    {
      t = w_52;
      if(match_cons(t, sym_Some_1))
        {
          x_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_52;
      if(match_cons(t, sym_Layout_1))
        {
          y_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_52;
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, b_2, c_2, t);
    }
  else
    {
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = w_52;
      if(match_cons(t, sym_Some_1))
        {
          x_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_52;
      if(match_cons(t, sym_Layout_1))
        {
          y_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_52;
      t = xtc_layout_to_args_1_2(p_10, b_2, c_2, t);
    }
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  if(match_cons(t, sym__2))
    {
      g_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_42(g_53, h_53, t);
  return(t);
}
static ATerm d_42 (ATerm d_217, ATerm o_18, ATerm t)
{
  static ATerm q_10 (ATerm t);
  static ATerm q_10 (ATerm t)
  {
    ATerm n_53 = NULL;
    n_53 = t;
    {
      ATerm c_49 = t;
      int d_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_53;
          if(match_cons(t, sym_TVarSpec_1))
            {
              ATerm e_49 = ATgetArgument(t, 0);
              if(!(match_cons(e_49, sym_Arguments_0)))
                _fail(t);
            }
          else
            _fail(t);
          t = o_18;
          LocalPopChoice(d_49);
        }
      else
        {
          t = c_49;
          t = (ATerm) ATinsert(ATempty, n_53);
        }
    }
    return(t);
  }
  t = d_217;
  t = mapconcat_1_0(q_10, t);
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm h_18, ATerm i_18, ATerm t)
{
  ATerm r_53 = NULL,t_53 = NULL,u_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_49 = ATgetArgument(t, 0);
      if(match_cons(g_49, sym_TOr_2))
        {
          r_53 = ATgetArgument(g_49, 0);
          t_53 = ATgetArgument(g_49, 1);
        }
      else
        _fail(t);
      u_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_42(h_18, i_18, r_53, t_53, u_53, t);
  return(t);
}
static ATerm e_42 (ATerm h_18, ATerm i_18, ATerm j_18, ATerm k_18, ATerm l_18, ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,d_54 = NULL;
  t = term_h_49;
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
  t = dbg_0_1(d_54, t);
  {
    ATerm i_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_54 = NULL,g_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, j_18, l_18);
        {
          static ATerm r_10 (ATerm t);
          static ATerm r_10 (ATerm t)
          {
            ATerm k_49 = t;
            int l_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_54 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL;
                m_54 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm m_49 = ATgetArgument(t, 0);
                    if(match_cons(m_49, sym_TOr_2))
                      {
                        j_12 = ATgetArgument(m_49, 0);
                        l_12 = ATgetArgument(m_49, 1);
                      }
                    else
                      _fail(t);
                    m_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_42(h_18, i_18, j_12, l_12, m_12, t);
                LocalPopChoice(l_49);
              }
            else
              {
                t = k_49;
                {
                  ATerm n_49 = t;
                  int o_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm s_10 (ATerm t);
                      static ATerm s_10 (ATerm t)
                      {
                        t = xtc_targ_to_args_0_2(h_18, i_18, t);
                        return(t);
                      }
                      t = _2_0(s_10, _id, t);
                      LocalPopChoice(o_49);
                    }
                  else
                    {
                      t = n_49;
                      t = xtc_targ_to_args_0_0(t);
                    }
                }
              }
            return(t);
          }
          t = thread_map_1_0(r_10, t);
        }
        g_54 = t;
        t = term_p_49;
        e_54 = t;
        t = g_54;
        t = dbg_0_1(e_54, t);
        LocalPopChoice(j_49);
      }
    else
      {
        t = i_49;
        {
          ATerm o_54 = NULL,p_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_18, l_18);
          {
            static ATerm w_10 (ATerm t);
            static ATerm w_10 (ATerm t)
            {
              ATerm t_49 = t;
              int u_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_55 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
                  a_55 = t;
                  if(match_cons(t, sym__2))
                    {
                      ATerm v_49 = ATgetArgument(t, 0);
                      if(match_cons(v_49, sym_TOr_2))
                        {
                          w_12 = ATgetArgument(v_49, 0);
                          x_12 = ATgetArgument(v_49, 1);
                        }
                      else
                        _fail(t);
                      y_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_42(h_18, i_18, w_12, x_12, y_12, t);
                  LocalPopChoice(u_49);
                }
              else
                {
                  t = t_49;
                  {
                    ATerm w_49 = t;
                    int y_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        static ATerm x_10 (ATerm t);
                        static ATerm x_10 (ATerm t)
                        {
                          t = xtc_targ_to_args_0_2(h_18, i_18, t);
                          return(t);
                        }
                        t = _2_0(x_10, _id, t);
                        LocalPopChoice(y_49);
                      }
                    else
                      {
                        t = w_49;
                        t = xtc_targ_to_args_0_0(t);
                      }
                  }
                }
              return(t);
            }
            t = thread_map_1_0(w_10, t);
          }
          p_54 = t;
          t = term_z_49;
          o_54 = t;
          t = p_54;
          t = dbg_0_1(o_54, t);
        }
      }
  }
  t = _2_0(concat_0_0, _id, t);
  if(match_cons(t, sym__2))
    {
      a_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm e_30 (ATerm), ATerm f_18, ATerm g_18, ATerm t)
{
  static ATerm y_10 (ATerm t);
  static ATerm y_10 (ATerm t)
  {
    ATerm a_50 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_55 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
        v_55 = t;
        if(match_cons(t, sym__2))
          {
            ATerm c_50 = ATgetArgument(t, 0);
            if(match_cons(c_50, sym_TOr_2))
              {
                d_13 = ATgetArgument(c_50, 0);
                e_13 = ATgetArgument(c_50, 1);
              }
            else
              _fail(t);
            f_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_42(f_18, g_18, d_13, e_13, f_13, t);
        LocalPopChoice(b_50);
      }
    else
      {
        t = a_50;
        {
          ATerm d_50 = t;
          int e_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm z_10 (ATerm t);
              static ATerm z_10 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(f_18, g_18, t);
                return(t);
              }
              t = _2_0(z_10, _id, t);
              LocalPopChoice(e_50);
            }
          else
            {
              t = d_50;
              {
                ATerm f_50 = t;
                int h_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(h_50);
                  }
                else
                  {
                    t = f_50;
                    t = e_30(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(y_10, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,y_57 = NULL;
  v_57 = t;
  t = Snd_0_0(t);
  y_57 = t;
  t = term_i_50;
  w_57 = t;
  t = y_57;
  t = err_0_1(w_57, t);
  t = v_57;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm j_50 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm k_50 = ATgetArgument(t, 0);
          if(!(match_cons(k_50, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_50;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm d_30 (ATerm), ATerm d_18, ATerm e_18, ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  c_56 = t;
  t = e_18;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm l_50 = ATgetArgument(t, 0);
      ATerm m_50 = ATgetArgument(t, 1);
      ATerm n_50 = ATgetArgument(t, 2);
      d_56 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_56, d_56);
  {
    static ATerm b_11 (ATerm t);
    static ATerm b_11 (ATerm t)
    {
      ATerm o_50 = t;
      int p_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_56 = NULL,l_13 = NULL,m_13 = NULL,p_13 = NULL;
          y_56 = t;
          if(match_cons(t, sym__2))
            {
              ATerm q_50 = ATgetArgument(t, 0);
              if(match_cons(q_50, sym_TOr_2))
                {
                  l_13 = ATgetArgument(q_50, 0);
                  m_13 = ATgetArgument(q_50, 1);
                }
              else
                _fail(t);
              p_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_42(d_18, e_18, l_13, m_13, p_13, t);
          LocalPopChoice(p_50);
        }
      else
        {
          t = o_50;
          {
            ATerm r_50 = t;
            int s_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm d_11 (ATerm t);
                static ATerm d_11 (ATerm t)
                {
                  t = xtc_targ_to_args_0_2(d_18, e_18, t);
                  return(t);
                }
                t = _2_0(d_11, _id, t);
                LocalPopChoice(s_50);
              }
            else
              {
                t = r_50;
                {
                  ATerm w_50 = t;
                  int x_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_targ_to_args_0_0(t);
                      LocalPopChoice(x_50);
                    }
                  else
                    {
                      t = w_50;
                      {
                        ATerm e_57 = NULL;
                        t = Snd_0_0(t);
                        e_57 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_57);
                      }
                    }
                }
              }
          }
        }
      return(t);
    }
    t = thread_map_1_0(b_11, t);
  }
  t = _2_0(concat_0_0, _id, t);
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_57 = NULL;
        l_57 = t;
        t = Snd_0_0(t);
        {
          ATerm a_51 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_51;
            }
        }
        t = l_57;
        LocalPopChoice(z_50);
        t = restore_2_0(d_30, e_11, t);
      }
    else
      {
        t = y_50;
        t = Fst_0_0(t);
        t = filter_1_0(g_11, t);
      }
  }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm b_51 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm f_51 = ATgetArgument(t, 0);
          if(!(match_cons(f_51, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_51;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm c_58 = NULL,e_58 = NULL;
  c_58 = t;
  t = filter_1_0(h_11, t);
  e_58 = t;
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_58, e_58);
        {
          ATerm i_51 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_51;
            }
        }
        t = e_58;
        LocalPopChoice(h_51);
        {
          ATerm f_58 = NULL;
          t = term_k_51;
          f_58 = t;
          t = e_58;
          t = err_0_1(f_58, t);
        }
      }
    else
      {
        t = g_51;
      }
  }
  t = e_58;
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm a_18, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm l_51 = ATgetArgument(t, 0);
      if(!(match_cons(l_51, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = a_18;
  return(t);
}
static ATerm f_42 (ATerm a_18, ATerm t)
{
  t = a_18;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm y_1, ATerm z_1, ATerm t)
{
  ATerm j_60 = NULL,l_60 = NULL;
  j_60 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      l_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_60;
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_x_51);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
          t = y_1;
          if(match_cons(t, sym_XtcDesc_1))
            {
              ATerm y_51 = ATgetArgument(t, 0);
              if(match_cons(y_51, sym_Exec_1))
                {
                  y_13 = ATgetArgument(y_51, 0);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = y_13;
          if(match_cons(t, sym_Streams_3))
            {
              ATerm z_51 = ATgetArgument(t, 0);
              ATerm a_52 = ATgetArgument(t, 1);
              z_13 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = z_13;
          if(match_cons(t, sym_Some_1))
            {
              w_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_1;
          if(match_cons(t, sym_XtcConf_4))
            {
              ATerm b_52 = ATgetArgument(t, 0);
              ATerm f_52 = ATgetArgument(t, 1);
              ATerm j_52 = ATgetArgument(t, 2);
              if(match_cons(j_52, sym_Some_1))
                {
                  x_13 = ATgetArgument(j_52, 0);
                }
              else
                _fail(t);
              {
                ATerm l_52 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = w_13;
          t = xtc_stream_to_arg_0_1(x_13, t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              ATerm f_14 = NULL,j_14 = NULL,l_14 = NULL,n_14 = NULL;
              t = y_1;
              if(match_cons(t, sym_XtcDesc_1))
                {
                  ATerm n_52 = ATgetArgument(t, 0);
                  if(match_cons(n_52, sym_Exec_1))
                    {
                      l_14 = ATgetArgument(n_52, 0);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              t = l_14;
              if(match_cons(t, sym_Streams_3))
                {
                  ATerm o_52 = ATgetArgument(t, 0);
                  n_14 = ATgetArgument(t, 1);
                  {
                    ATerm p_52 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = n_14;
              if(match_cons(t, sym_Some_1))
                {
                  f_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_1;
              if(match_cons(t, sym_XtcConf_4))
                {
                  ATerm q_52 = ATgetArgument(t, 0);
                  ATerm r_52 = ATgetArgument(t, 1);
                  if(match_cons(r_52, sym_Some_1))
                    {
                      j_14 = ATgetArgument(r_52, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm s_52 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm t_52 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = f_14;
              t = xtc_stream_to_arg_0_1(j_14, t);
            }
          else
            {
              ATerm v_14 = NULL,w_14 = NULL;
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = y_1;
              t = xtc_desc_input_0_0(t);
              if(match_cons(t, sym_Some_1))
                {
                  v_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_1;
              if(match_cons(t, sym_XtcConf_4))
                {
                  ATerm v_52 = ATgetArgument(t, 0);
                  if(match_cons(v_52, sym_Some_1))
                    {
                      w_14 = ATgetArgument(v_52, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_53 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm c_53 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm d_53 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = v_14;
              t = xtc_stream_to_arg_0_1(w_14, t);
            }
        }
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm v_20 = NULL;
  t = Hd_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(ATempty, v_20);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm p_21 = NULL;
  t = Hd_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(ATempty, p_21);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm s_22 = NULL;
  t = Hd_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(ATempty, s_22);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm r_23 = NULL;
  t = Hd_0_0(t);
  r_23 = t;
  t = (ATerm) ATinsert(ATempty, r_23);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,m_69 = NULL,o_69 = NULL,p_69 = NULL;
  d_69 = t;
  if(match_cons(t, sym__2))
    {
      e_69 = ATgetArgument(t, 0);
      p_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_69;
  if(match_cons(t, sym_TVarStar_4))
    {
      g_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
      i_69 = ATgetArgument(t, 2);
      m_69 = ATgetArgument(t, 3);
      t = g_69;
      if(match_cons(t, sym_ArgOption_0))
        {
          ATerm j_15 = NULL,m_15 = NULL,n_15 = NULL;
          t = i_69;
          if(match_cons(t, sym_Some_1))
            {
              j_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_69;
          if(match_cons(t, sym_Default_1))
            {
              b_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_69;
          if(match_cons(t, sym_Values_1))
            {
              c_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_69;
          if(match_cons(t, sym_Some_1))
            {
              o_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__4, p_69, h_69, c_69, o_69);
          {
            static ATerm j_11 (ATerm t);
            static ATerm j_11 (ATerm t)
            {
              static ATerm l_11 (ATerm t);
              static ATerm l_11 (ATerm t)
              {
                ATerm r_15 = NULL;
                r_15 = t;
                t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(j_15), r_15);
                return(t);
              }
              t = h_69;
              t = Hd_0_0(t);
              if(((j_15 != NULL) && (j_15 != t)))
                _fail(t);
              else
                j_15 = t;
              t = c_69;
              t = map_1_0(l_11, t);
              return(t);
            }
            t = g_42(_id, j_11, k_11, p_69, h_69, c_69, o_69, t);
          }
          if(match_cons(t, sym__2))
            {
              m_15 = ATgetArgument(t, 0);
              n_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_15, n_15);
        }
      else
        {
          ATerm m_16 = NULL,n_16 = NULL;
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = i_69;
          if(match_cons(t, sym_Some_1))
            {
              j_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_69;
          if(match_cons(t, sym_Some_1))
            {
              ATerm i_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__3, p_69, h_69, j_69);
          t = h_42(_id, m_11, p_69, h_69, j_69, t);
          if(match_cons(t, sym__2))
            {
              m_16 = ATgetArgument(t, 0);
              n_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          g_69 = ATgetArgument(t, 0);
          h_69 = ATgetArgument(t, 1);
          i_69 = ATgetArgument(t, 2);
          m_69 = ATgetArgument(t, 3);
          t = g_69;
          if(match_cons(t, sym_ArgOption_0))
            {
              ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
              t = i_69;
              if(match_cons(t, sym_Some_1))
                {
                  j_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_69;
              if(match_cons(t, sym_Default_1))
                {
                  b_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_69;
              if(match_cons(t, sym_Values_1))
                {
                  c_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_69;
              if(match_cons(t, sym_Some_1))
                {
                  o_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__4, p_69, h_69, c_69, o_69);
              {
                static ATerm o_11 (ATerm t);
                static ATerm o_11 (ATerm t)
                {
                  static ATerm p_11 (ATerm t);
                  static ATerm p_11 (ATerm t)
                  {
                    ATerm p_17 = NULL;
                    p_17 = t;
                    t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(l_17), p_17);
                    return(t);
                  }
                  t = h_69;
                  t = Hd_0_0(t);
                  if(((l_17 != NULL) && (l_17 != t)))
                    _fail(t);
                  else
                    l_17 = t;
                  t = c_69;
                  t = map_1_0(p_11, t);
                  return(t);
                }
                t = g_42(_id, o_11, _fail, p_69, h_69, c_69, o_69, t);
              }
              if(match_cons(t, sym__2))
                {
                  m_17 = ATgetArgument(t, 0);
                  n_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, m_17, n_17);
            }
          else
            {
              ATerm w_18 = NULL,i_19 = NULL;
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = i_69;
              if(match_cons(t, sym_Some_1))
                {
                  j_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_69;
              if(match_cons(t, sym_Some_1))
                {
                  ATerm j_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__3, p_69, h_69, j_69);
              t = h_42(_id, _fail, p_69, h_69, j_69, t);
              if(match_cons(t, sym__2))
                {
                  w_18 = ATgetArgument(t, 0);
                  i_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, w_18, i_19);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              g_69 = ATgetArgument(t, 0);
              h_69 = ATgetArgument(t, 1);
              i_69 = ATgetArgument(t, 2);
              m_69 = ATgetArgument(t, 3);
              t = g_69;
              if(match_cons(t, sym_ArgOption_0))
                {
                  ATerm p_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
                  t = i_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      j_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_69;
                  if(match_cons(t, sym_Default_1))
                    {
                      b_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_69;
                  if(match_cons(t, sym_Values_1))
                    {
                      c_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      o_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__4, p_69, h_69, c_69, o_69);
                  {
                    static ATerm s_11 (ATerm t);
                    static ATerm s_11 (ATerm t)
                    {
                      t = h_69;
                      t = Hd_0_0(t);
                      if(((p_20 != NULL) && (p_20 != t)))
                        _fail(t);
                      else
                        p_20 = t;
                      t = c_69;
                      t = Hd_0_0(t);
                      if(((s_20 != NULL) && (s_20 != t)))
                        _fail(t);
                      else
                        s_20 = t;
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, p_20, s_20));
                      return(t);
                    }
                    t = g_42(q_11, s_11, _fail, p_69, h_69, c_69, o_69, t);
                  }
                  if(match_cons(t, sym__2))
                    {
                      t_20 = ATgetArgument(t, 0);
                      u_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_20, u_20);
                }
              else
                {
                  ATerm n_21 = NULL,o_21 = NULL;
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = i_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      j_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      ATerm k_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__3, p_69, h_69, j_69);
                  t = h_42(t_11, _fail, p_69, h_69, j_69, t);
                  if(match_cons(t, sym__2))
                    {
                      n_21 = ATgetArgument(t, 0);
                      o_21 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  g_69 = ATgetArgument(t, 0);
                  h_69 = ATgetArgument(t, 1);
                  i_69 = ATgetArgument(t, 2);
                  m_69 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = g_69;
              if(match_cons(t, sym_ArgOption_0))
                {
                  ATerm f_22 = NULL,g_22 = NULL,q_22 = NULL,r_22 = NULL;
                  t = i_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      j_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_69;
                  if(match_cons(t, sym_Default_1))
                    {
                      b_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_69;
                  if(match_cons(t, sym_Values_1))
                    {
                      c_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      o_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__4, p_69, h_69, c_69, o_69);
                  {
                    static ATerm v_11 (ATerm t);
                    static ATerm v_11 (ATerm t)
                    {
                      t = h_69;
                      t = Hd_0_0(t);
                      if(((f_22 != NULL) && (f_22 != t)))
                        _fail(t);
                      else
                        f_22 = t;
                      t = c_69;
                      t = Hd_0_0(t);
                      if(((g_22 != NULL) && (g_22 != t)))
                        _fail(t);
                      else
                        g_22 = t;
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, f_22, g_22));
                      return(t);
                    }
                    t = g_42(u_11, v_11, x_11, p_69, h_69, c_69, o_69, t);
                  }
                  if(match_cons(t, sym__2))
                    {
                      q_22 = ATgetArgument(t, 0);
                      r_22 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
                }
              else
                {
                  ATerm p_23 = NULL,q_23 = NULL;
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = i_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      j_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_69;
                  if(match_cons(t, sym_Some_1))
                    {
                      ATerm l_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__3, p_69, h_69, j_69);
                  t = h_42(y_11, z_11, p_69, h_69, j_69, t);
                  if(match_cons(t, sym__2))
                    {
                      p_23 = ATgetArgument(t, 0);
                      q_23 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, p_23, q_23);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm a_30 (ATerm), ATerm b_30 (ATerm), ATerm c_30 (ATerm), ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,w_70 = NULL;
  if(match_cons(t, sym__4))
    {
      r_70 = ATgetArgument(t, 0);
      s_70 = ATgetArgument(t, 1);
      t_70 = ATgetArgument(t, 2);
      w_70 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_42(a_30, b_30, c_30, r_70, s_70, t_70, w_70, t);
  return(t);
}
static ATerm g_42 (ATerm a_30 (ATerm), ATerm b_30 (ATerm), ATerm c_30 (ATerm), ATerm h_14, ATerm i_14, ATerm k_14, ATerm g_14, ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_14, i_14);
  t = j_42(h_14, i_14, t);
  if(match_cons(t, sym__2))
    {
      a_71 = ATgetArgument(t, 0);
      y_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_71;
  {
    ATerm m_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_53 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_53;
          }
        t = a_71;
        LocalPopChoice(o_53);
        t = a_30(t);
      }
    else
      {
        t = m_53;
        {
          ATerm q_53 = t;
          int s_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_14;
              {
                ATerm v_53 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_53;
                  }
              }
              t = a_71;
              LocalPopChoice(s_53);
              t = b_30(t);
            }
          else
            {
              t = q_53;
              t = c_30(t);
            }
        }
      }
  }
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_70, y_70);
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm y_29 (ATerm), ATerm z_29 (ATerm), ATerm t)
{
  ATerm b_71 = NULL,e_71 = NULL,g_71 = NULL;
  if(match_cons(t, sym__3))
    {
      b_71 = ATgetArgument(t, 0);
      e_71 = ATgetArgument(t, 1);
      g_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_42(y_29, z_29, b_71, e_71, g_71, t);
  return(t);
}
static ATerm h_42 (ATerm y_29 (ATerm), ATerm z_29 (ATerm), ATerm a_14, ATerm d_14, ATerm c_14, ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_14, d_14);
  t = k_42(a_14, d_14, t);
  if(match_cons(t, sym__2))
    {
      k_71 = ATgetArgument(t, 0);
      h_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_71;
  {
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_53 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_53;
          }
        t = k_71;
        LocalPopChoice(x_53);
        t = y_29(t);
      }
    else
      {
        t = w_53;
        {
          ATerm h_54 = t;
          int i_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_14;
              if(match_cons(t, sym_Default_1))
                {
                  ATerm j_54 = ATgetArgument(t, 0);
                  if(!(match_cons(j_54, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = k_71;
              LocalPopChoice(i_54);
              t = d_14;
              t = Hd_0_0(t);
              i_71 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, i_71));
            }
          else
            {
              t = h_54;
              t = z_29(t);
            }
        }
      }
  }
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_71, h_71);
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL;
  if(match_cons(t, sym__2))
    {
      q_71 = ATgetArgument(t, 0);
      r_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_42(q_71, r_71, t);
  return(t);
}
static ATerm j_42 (ATerm v_13, ATerm u_13, ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL;
  t = Fst_0_0(t);
  {
    static ATerm a_12 (ATerm t);
    static ATerm a_12 (ATerm t)
    {
      ATerm k_54 = t;
      int l_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL;
          e_72 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              f_72 = ATgetArgument(t, 0);
              g_72 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_13;
          {
            static ATerm b_12 (ATerm t);
            static ATerm b_12 (ATerm t)
            {
              if((f_72 != t))
                {
                  _fail(t);
                }
              return(t);
            }
            t = SRTS_one(b_12, t);
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, f_72, g_72));
          LocalPopChoice(l_54);
        }
      else
        {
          t = k_54;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(a_12, t);
  }
  w_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_13, w_71);
  t = diff_0_0(t);
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_71, x_71);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm i_72 = NULL,m_72 = NULL;
  if(match_cons(t, sym__2))
    {
      i_72 = ATgetArgument(t, 0);
      m_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_42(i_72, m_72, t);
  return(t);
}
static ATerm k_42 (ATerm o_13, ATerm n_13, ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL;
  t = Fst_0_0(t);
  {
    static ATerm d_12 (ATerm t);
    static ATerm d_12 (ATerm t)
    {
      ATerm n_54 = t;
      int q_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_72 = NULL;
          v_72 = t;
          t = n_13;
          {
            static ATerm e_12 (ATerm t);
            static ATerm e_12 (ATerm t)
            {
              ATerm v_32 = NULL;
              v_32 = t;
              t = (ATerm) ATmakeAppl(sym_Option_1, v_32);
              if((v_72 != t))
                {
                  _fail(t);
                }
              return(t);
            }
            t = SRTS_one(e_12, t);
          }
          t = (ATerm) ATinsert(ATempty, v_72);
          LocalPopChoice(q_54);
        }
      else
        {
          t = n_54;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(d_12, t);
  }
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_13, o_72);
  t = diff_0_0(t);
  p_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm r_54 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_1_0(Hd_0_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_54;
    }
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm s_54 = t;
  int t_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_72 = NULL;
      y_72 = t;
      t = (ATerm) ATinsert(ATempty, term_u_54);
      {
        ATerm w_54 = t;
        if((PushChoice() == 0))
          {
            t = filter_1_0(f_12, t);
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_54;
          }
      }
      t = y_72;
      LocalPopChoice(t_54);
      {
        ATerm z_72 = NULL,a_73 = NULL;
        a_73 = t;
        t = term_x_54;
        z_72 = t;
        t = a_73;
        t = err_0_1(z_72, t);
        _fail(t);
      }
    }
  else
    {
      t = s_54;
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_u_54;
  return(t);
}
ATerm exec_http_0_1 (ATerm i_13, ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  t = exec_http_dependencies_0_0(t);
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_d_55), term_b_55), y_73);
  t = conc_0_0(t);
  x_73 = t;
  t = i_13;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm e_55 = ATgetArgument(t, 0);
      v_73 = ATgetArgument(t, 1);
      w_73 = ATgetArgument(t, 2);
      {
        ATerm f_55 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_e_21, v_73, w_73, x_73);
  t = xtc_command_1_0(g_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_u_54;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm z_73 = NULL;
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_d_55), term_b_55), z_73);
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(h_12, i_12, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL;
  i_74 = t;
  t = STDIN__FILENO_0_0(t);
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_74, h_74);
  t = dup2_0_0(t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm j_74 = NULL,m_74 = NULL;
  m_74 = t;
  t = STDOUT__FILENO_0_0(t);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_74, j_74);
  t = dup2_0_0(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL;
  p_74 = t;
  t = STDERR__FILENO_0_0(t);
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_74, o_74);
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL;
  g_74 = t;
  t = term_g_55;
  f_74 = t;
  t = g_74;
  t = dbg_0_1(f_74, t);
  if(match_cons(t, sym__3))
    {
      d_74 = ATgetArgument(t, 0);
      {
        ATerm i_55 = ATgetArgument(t, 1);
        if(match_cons(i_55, sym__3))
          {
            a_74 = ATgetArgument(i_55, 0);
            b_74 = ATgetArgument(i_55, 1);
            c_74 = ATgetArgument(i_55, 2);
          }
        else
          _fail(t);
      }
      e_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm n_12 (ATerm t);
    static ATerm n_12 (ATerm t)
    {
      t = a_74;
      t = option_1_0(o_12, t);
      t = b_74;
      t = option_1_0(v_12, t);
      t = c_74;
      t = option_1_0(a_13, t);
      t = (ATerm) ATmakeAppl(sym__2, d_74, e_74);
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(n_12, t);
  }
  t = term_c_22;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm q_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_55 = ATgetArgument(t, 0);
      if(match_cons(j_55, sym_XtcConf_4))
        {
          ATerm k_55 = ATgetArgument(j_55, 0);
          ATerm o_55 = ATgetArgument(j_55, 1);
          ATerm p_55 = ATgetArgument(j_55, 2);
          ATerm r_55 = ATgetArgument(j_55, 3);
        }
      else
        _fail(t);
      q_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_42(q_74, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm t_75 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      t_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_75;
  return(t);
}
static ATerm l_42 (ATerm z_12, ATerm t)
{
  ATerm u_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL;
  f_75 = t;
  t = term_s_55;
  g_75 = t;
  t = z_12;
  t = xtc_fetch_meta_0_1(g_75, t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      u_74 = ATgetArgument(t, 0);
      {
        ATerm t_55 = ATgetArgument(t, 1);
        if(match_cons(t_55, sym_Some_1))
          {
            a_75 = ATgetArgument(t_55, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_12;
  t = Snd_0_0(t);
  {
    static ATerm b_13 (ATerm t);
    static ATerm b_13 (ATerm t)
    {
      ATerm u_55 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if((u_74 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              {
                ATerm w_55 = ATgetArgument(t, 1);
                if(match_cons(w_55, sym_Some_1))
                  {
                    if((a_75 != ATgetArgument(w_55, 0)))
                      {
                        _fail(ATgetArgument(w_55, 0));
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
          t = u_55;
        }
      return(t);
    }
    t = filter_1_0(b_13, t);
  }
  b_75 = t;
  t = a_75;
  t = try_1_0(c_13, t);
  e_75 = t;
  t = f_75;
  if(match_cons(t, sym__2))
    {
      ATerm x_55 = ATgetArgument(t, 0);
      if(match_cons(x_55, sym_XtcConf_4))
        {
          h_75 = ATgetArgument(x_55, 0);
          m_75 = ATgetArgument(x_55, 1);
          n_75 = ATgetArgument(x_55, 2);
          o_75 = ATgetArgument(x_55, 3);
        }
      else
        _fail(t);
      {
        ATerm y_55 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_42(u_74, e_75, h_75, m_75, n_75, o_75, t);
  {
    static ATerm g_13 (ATerm t);
    static ATerm g_13 (ATerm t)
    {
      ATerm v_75 = NULL,w_75 = NULL;
      if(match_cons(t, sym__2))
        {
          v_75 = ATgetArgument(t, 0);
          w_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_42(b_75, v_75, w_75, t);
      return(t);
    }
    t = _2_0(_id, g_13, t);
  }
  d_75 = t;
  t = term_z_55;
  c_75 = t;
  t = d_75;
  t = dbg_0_1(c_75, t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm l_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,q_94 = NULL,r_95 = NULL,s_95 = NULL,p_18 = NULL;
  s_95 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      r_92 = ATgetArgument(t, 0);
      s_92 = ATgetArgument(t, 1);
      t_92 = ATgetArgument(t, 2);
      q_94 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_95);
  l_92 = t;
  t = q_94;
  t = xtc_desugar_args_0_0(t);
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, r_92, s_92, t_92, r_95);
  p_18 = t;
  t = SSLsetAnnotations(p_18, l_92);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm a_56 = t;
  int b_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_96 = NULL;
      if(match_cons(t, sym_XtcDesc_1))
        {
          q_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_96;
      if(!(match_cons(t, sym_XT_0)))
        _fail(t);
      t = term_v_56;
      LocalPopChoice(b_56);
    }
  else
    {
      t = a_56;
      {
        ATerm x_56 = t;
        int z_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(z_56);
          }
        else
          {
            t = x_56;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,p_90 = NULL,q_90 = NULL,p_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,j_92 = NULL;
  t = _2_0(h_13, _id, t);
  if(match_cons(t, sym__2))
    {
      q_76 = ATgetArgument(t, 0);
      r_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  a_92 = t;
  t = term_b_57;
  z_91 = t;
  t = a_92;
  t = xtc_fetch_meta_0_1(z_91, t);
  t = innermost_1_0(k_13, t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm c_57 = ATgetArgument(t, 0);
      if(match_cons(c_57, sym_XtcDesc_1))
        {
          p_90 = ATgetArgument(c_57, 0);
        }
      else
        _fail(t);
      {
        ATerm d_57 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      b_92 = ATgetArgument(t, 0);
      j_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_42(q_76, b_92, j_92, t);
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_90, q_90, r_76);
  t = xtc_prepare_0_0(t);
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_90, q_90, p_91);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm h_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_97 = NULL,f_99 = NULL,x_99 = NULL;
      y_97 = t;
      if(match_cons(t, sym__2))
        {
          f_99 = ATgetArgument(t, 0);
          x_99 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_99;
      if(match_cons(t, sym_XtcConf_4))
        {
          ATerm m_57 = ATgetArgument(t, 0);
          ATerm p_57 = ATgetArgument(t, 1);
          ATerm q_57 = ATgetArgument(t, 2);
          ATerm r_57 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_97;
      t = l_42(x_99, t);
      LocalPopChoice(j_57);
    }
  else
    {
      t = h_57;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm p_12, ATerm q_12, ATerm t)
{
  ATerm j_101 = NULL,o_101 = NULL,e_102 = NULL,g_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_57 = ATgetArgument(t, 0);
      if(match_cons(s_57, sym_XtcConf_4))
        {
          j_101 = ATgetArgument(s_57, 0);
          o_101 = ATgetArgument(s_57, 1);
          e_102 = ATgetArgument(s_57, 2);
          g_102 = ATgetArgument(s_57, 3);
        }
      else
        _fail(t);
      {
        ATerm t_57 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_42(p_12, q_12, j_101, o_101, e_102, g_102, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm b_103 = NULL,o_103 = NULL;
  o_103 = t;
  t = term_u_57;
  b_103 = t;
  t = o_103;
  t = err_0_1(b_103, t);
  return(t);
}
static ATerm m_42 (ATerm p_12, ATerm q_12, ATerm r_12, ATerm s_12, ATerm t_12, ATerm u_12, ATerm t)
{
  ATerm j_102 = NULL,z_102 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_12, u_12);
  t = conc_0_0(t);
  j_102 = t;
  t = p_12;
  t = restore_2_0(q_13, r_13, t);
  z_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, r_12, s_12, t_12, j_102), z_102);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm x_57 = t;
  int z_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(z_57);
    }
  else
    {
      t = x_57;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm a_58 = t;
  int b_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(b_58);
    }
  else
    {
      t = a_58;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL,c_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,s_129 = NULL,t_129 = NULL,u_129 = NULL,b_130 = NULL;
  a_129 = t;
  if(match_cons(t, sym__3))
    {
      b_129 = ATgetArgument(t, 0);
      l_129 = ATgetArgument(t, 1);
      u_129 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_129;
  if(match_cons(t, sym_XTService_0))
    {
      ATerm j_130 = NULL;
      t = l_129;
      if(match_cons(t, sym_XtcConf_4))
        {
          ATerm d_58 = ATgetArgument(t, 0);
          ATerm g_58 = ATgetArgument(t, 1);
          ATerm h_58 = ATgetArgument(t, 2);
          t_129 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_129;
      if(match_cons(t, sym__2))
        {
          b_130 = ATgetArgument(t, 0);
          {
            ATerm i_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_129;
      t = mapconcat_1_0(t_13, t);
      j_130 = t;
      t = (ATerm) ATinsert(CheckATermList(j_130), b_130);
    }
  else
    {
      ATerm j_58 = t;
      int k_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_HTTP_1))
            {
              ATerm l_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(k_58);
          {
            ATerm s_130 = NULL;
            t = l_129;
            if(match_cons(t, sym_XtcConf_4))
              {
                ATerm m_58 = ATgetArgument(t, 0);
                ATerm t_58 = ATgetArgument(t, 1);
                ATerm w_58 = ATgetArgument(t, 2);
                t_129 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = u_129;
            if(match_cons(t, sym__2))
              {
                b_130 = ATgetArgument(t, 0);
                {
                  ATerm y_58 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = t_129;
            t = mapconcat_1_0(b_14, t);
            s_130 = t;
            t = (ATerm) ATinsert(CheckATermList(s_130), b_130);
          }
        }
      else
        {
          t = j_58;
          {
            ATerm r_34 = NULL,t_34 = NULL,x_34 = NULL,f_35 = NULL;
            if(match_cons(t, sym_Exec_1))
              {
                c_129 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_129;
            if(match_cons(t, sym_XtcConf_4))
              {
                m_129 = ATgetArgument(t, 0);
                n_129 = ATgetArgument(t, 1);
                s_129 = ATgetArgument(t, 2);
                t_129 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = u_129;
            if(match_cons(t, sym__2))
              {
                b_130 = ATgetArgument(t, 0);
                {
                  ATerm a_59 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = t_129;
            t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
            r_34 = t;
            t = c_129;
            {
              ATerm c_59 = t;
              int e_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_35 = NULL;
                  static ATerm e_14 (ATerm t);
                  static ATerm e_14 (ATerm t)
                  {
                    t = xtc_stream_to_fd_0_1(m_129, t);
                    return(t);
                  }
                  if(match_cons(t, sym_Streams_3))
                    {
                      h_35 = ATgetArgument(t, 0);
                      {
                        ATerm g_59 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm h_59 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = h_35;
                  t = option_1_0(e_14, t);
                  LocalPopChoice(e_59);
                }
              else
                {
                  t = c_59;
                  t = term_e_21;
                }
            }
            t_34 = t;
            t = c_129;
            {
              ATerm k_59 = t;
              int l_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_36 = NULL;
                  static ATerm m_14 (ATerm t);
                  static ATerm m_14 (ATerm t)
                  {
                    t = xtc_stream_to_fd_0_1(n_129, t);
                    return(t);
                  }
                  if(match_cons(t, sym_Streams_3))
                    {
                      ATerm n_59 = ATgetArgument(t, 0);
                      f_36 = ATgetArgument(t, 1);
                      {
                        ATerm o_59 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = f_36;
                  t = option_1_0(m_14, t);
                  LocalPopChoice(l_59);
                }
              else
                {
                  t = k_59;
                  t = term_e_21;
                }
            }
            x_34 = t;
            t = c_129;
            {
              ATerm r_59 = t;
              int t_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_36 = NULL;
                  static ATerm o_14 (ATerm t);
                  static ATerm o_14 (ATerm t)
                  {
                    t = xtc_stream_to_fd_0_1(s_129, t);
                    return(t);
                  }
                  if(match_cons(t, sym_Streams_3))
                    {
                      ATerm u_59 = ATgetArgument(t, 0);
                      ATerm w_59 = ATgetArgument(t, 1);
                      r_36 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = r_36;
                  t = option_1_0(o_14, t);
                  LocalPopChoice(t_59);
                }
              else
                {
                  t = r_59;
                  t = term_e_21;
                }
            }
            f_35 = t;
            t = (ATerm) ATmakeAppl(sym__3, b_130, (ATerm)ATmakeAppl(sym__3, t_34, x_34, f_35), r_34);
          }
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL;
  j_131 = t;
  if(match_cons(t, sym_String_1))
    {
      k_131 = ATgetArgument(t, 0);
      t = k_131;
    }
  else
    {
      if(match_cons(t, sym_URL_1))
        {
          k_131 = ATgetArgument(t, 0);
          {
            ATerm y_37 = NULL;
            t = k_131;
            if(match_cons(t, sym_String_1))
              {
                y_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_37;
          }
        }
      else
        {
          ATerm u_38 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              k_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_131;
          if(match_cons(t, sym_String_1))
            {
              u_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_38;
        }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm p_131 = NULL,r_131 = NULL;
  if(match_cons(t, sym_ArgOption_2))
    {
      r_131 = ATgetArgument(t, 0);
      p_131 = ATgetArgument(t, 1);
      {
        ATerm u_131 = NULL,v_131 = NULL;
        t = r_131;
        t = xtc_argterm_to_exec_0_0(t);
        u_131 = t;
        t = p_131;
        t = xtc_argterm_to_exec_0_0(t);
        v_131 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, v_131), u_131);
      }
    }
  else
    {
      ATerm x_131 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          r_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_131;
      t = xtc_argterm_to_exec_0_0(t);
      x_131 = t;
      t = (ATerm) ATinsert(ATempty, x_131);
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
  ATerm j_132 = NULL,k_132 = NULL;
  j_132 = t;
  if(match_cons(t, sym_String_1))
    {
      k_132 = ATgetArgument(t, 0);
      t = k_132;
    }
  else
    {
      if(match_cons(t, sym_URL_1))
        {
          k_132 = ATgetArgument(t, 0);
          {
            ATerm i_39 = NULL;
            t = k_132;
            if(match_cons(t, sym_String_1))
              {
                i_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_URL_1, i_39);
          }
        }
      else
        {
          ATerm q_39 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              k_132 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_132;
          if(match_cons(t, sym_String_1))
            {
              q_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_39);
        }
    }
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm u_133 = NULL,v_133 = NULL;
  u_133 = t;
  if(match_cons(t, sym_Option_1))
    {
      v_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_40 = NULL,b_41 = NULL;
        t = v_133;
        t = xtc_argterm_to_http_0_0(t);
        if(match_cons(t, sym_FILE_1))
          {
            b_41 = ATgetArgument(t, 0);
            t = b_41;
          }
        else
          {
            if(match_cons(t, sym_URL_1))
              {
                b_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_41;
          }
        t = (ATerm) ATinsert(ATinsert(ATempty, b_41), term_b_60);
        t = concat_strings_0_0(t);
        z_40 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_38, z_40));
        LocalPopChoice(a_60);
      }
    else
      {
        t = z_59;
        {
          ATerm j_41 = NULL;
          t = v_133;
          t = xtc_argterm_to_http_0_0(t);
          {
            ATerm c_60 = t;
            if((PushChoice() == 0))
              {
                ATerm b_43 = NULL,d_43 = NULL;
                b_43 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    d_43 = ATgetArgument(t, 0);
                    {
                      ATerm r_43 = NULL,n_20 = NULL;
                      t = SSLgetAnnotations(b_43);
                      r_43 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, d_43);
                      n_20 = t;
                      t = SSLsetAnnotations(n_20, r_43);
                    }
                  }
                else
                  {
                    ATerm g_44 = NULL,o_20 = NULL;
                    if(match_cons(t, sym_URL_1))
                      {
                        d_43 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_43);
                    g_44 = t;
                    t = (ATerm) ATmakeAppl(sym_URL_1, d_43);
                    o_20 = t;
                    t = SSLsetAnnotations(o_20, g_44);
                  }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_60;
              }
          }
          j_41 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_38, j_41));
        }
      }
  }
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL;
  n_135 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      o_135 = ATgetArgument(t, 0);
      p_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_60 = t;
    int e_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_46 = NULL,w_46 = NULL,a_47 = NULL;
        t = o_135;
        t = xtc_argterm_to_http_0_0(t);
        r_46 = t;
        t = p_135;
        t = xtc_argterm_to_http_0_0(t);
        if(match_cons(t, sym_FILE_1))
          {
            a_47 = ATgetArgument(t, 0);
            t = a_47;
          }
        else
          {
            if(match_cons(t, sym_URL_1))
              {
                a_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_47;
          }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_47), term_f_60), r_46);
        t = concat_strings_0_0(t);
        w_46 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_38, w_46));
        LocalPopChoice(e_60);
      }
    else
      {
        t = d_60;
        {
          ATerm s_47 = NULL,x_47 = NULL,y_47 = NULL;
          t = o_135;
          t = xtc_argterm_to_http_0_0(t);
          s_47 = t;
          t = p_135;
          t = xtc_argterm_to_http_0_0(t);
          {
            ATerm g_60 = t;
            if((PushChoice() == 0))
              {
                ATerm b_49 = NULL,f_49 = NULL;
                b_49 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    f_49 = ATgetArgument(t, 0);
                    {
                      ATerm x_49 = NULL,y_20 = NULL;
                      t = SSLgetAnnotations(b_49);
                      x_49 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, f_49);
                      y_20 = t;
                      t = SSLsetAnnotations(y_20, x_49);
                    }
                  }
                else
                  {
                    ATerm g_50 = NULL,u_21 = NULL;
                    if(match_cons(t, sym_URL_1))
                      {
                        f_49 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_49);
                    g_50 = t;
                    t = (ATerm) ATmakeAppl(sym_URL_1, f_49);
                    u_21 = t;
                    t = SSLsetAnnotations(u_21, g_50);
                  }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_60;
              }
          }
          x_47 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_47), term_h_60), s_47);
          t = concat_strings_0_0(t);
          y_47 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_38, y_47));
        }
      }
  }
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm b_137 = NULL,c_137 = NULL;
  b_137 = t;
  if(match_cons(t, sym_Option_1))
    {
      c_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_60 = t;
    int k_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_52 = NULL,m_52 = NULL;
        t = c_137;
        t = xtc_argterm_to_http_0_0(t);
        if(match_cons(t, sym_FILE_1))
          {
            m_52 = ATgetArgument(t, 0);
            t = m_52;
          }
        else
          {
            if(match_cons(t, sym_URL_1))
              {
                m_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_52;
          }
        t = (ATerm) ATinsert(ATinsert(ATempty, m_52), term_m_60);
        t = concat_strings_0_0(t);
        k_52 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_38, k_52));
        LocalPopChoice(k_60);
      }
    else
      {
        t = i_60;
        {
          ATerm z_52 = NULL,b_53 = NULL;
          t = c_137;
          t = xtc_argterm_to_http_0_0(t);
          {
            ATerm n_60 = t;
            if((PushChoice() == 0))
              {
                ATerm z_53 = NULL,f_54 = NULL;
                z_53 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    f_54 = ATgetArgument(t, 0);
                    {
                      ATerm n_55 = NULL,o_30 = NULL;
                      t = SSLgetAnnotations(z_53);
                      n_55 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, f_54);
                      o_30 = t;
                      t = SSLsetAnnotations(o_30, n_55);
                    }
                  }
                else
                  {
                    ATerm i_56 = NULL,p_30 = NULL;
                    if(match_cons(t, sym_URL_1))
                      {
                        f_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(z_53);
                    i_56 = t;
                    t = (ATerm) ATmakeAppl(sym_URL_1, f_54);
                    p_30 = t;
                    t = SSLsetAnnotations(p_30, i_56);
                  }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_60;
              }
          }
          z_52 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, z_52), term_o_60);
          t = concat_strings_0_0(t);
          b_53 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_38, b_53));
        }
      }
  }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(p_14, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm y_60 = t;
  int z_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(z_60);
    }
  else
    {
      t = y_60;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(x_14, t);
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm h_137 = NULL;
  if(match_cons(t, sym_String_1))
    {
      h_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_137;
  return(t);
}
static ATerm n_42 (ATerm c_11, ATerm t)
{
  t = c_11;
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm a_61 = t;
  int b_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_137 = NULL;
      if(match_cons(t, sym_Some_1))
        {
          k_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_137;
      LocalPopChoice(b_61);
    }
  else
    {
      t = a_61;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm m_137 = NULL,n_137 = NULL;
  n_137 = t;
  t = term_u_57;
  m_137 = t;
  t = n_137;
  t = err_0_1(m_137, t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(y_14, z_14, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm v_137 = NULL,w_137 = NULL;
  w_137 = t;
  t = term_u_57;
  v_137 = t;
  t = w_137;
  t = err_0_1(v_137, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm c_61 = t;
  int d_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_137 = NULL,y_137 = NULL,d_138 = NULL;
      x_137 = t;
      if(match_cons(t, sym__2))
        {
          y_137 = ATgetArgument(t, 0);
          d_138 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_137;
      if(match_cons(t, sym_XtcConf_4))
        {
          ATerm f_61 = ATgetArgument(t, 0);
          ATerm g_61 = ATgetArgument(t, 1);
          ATerm h_61 = ATgetArgument(t, 2);
          ATerm i_61 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = x_137;
      t = l_42(d_138, t);
      LocalPopChoice(d_61);
    }
  else
    {
      t = c_61;
      t = xtc_component_configure_0_0(t);
    }
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm a_11, ATerm t)
{
  ATerm q_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL,u_137 = NULL;
  u_137 = t;
  t = term_k_61;
  t_137 = t;
  t = u_137;
  t = dbg_0_1(t_137, t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm l_61 = ATgetArgument(t, 0);
      ATerm m_61 = ATgetArgument(t, 1);
      if(match_cons(m_61, sym_Some_1))
        {
          q_137 = ATgetArgument(m_61, 0);
        }
      else
        _fail(t);
      {
        ATerm n_61 = ATgetArgument(t, 2);
      }
      {
        ATerm o_61 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  s_137 = t;
  t = a_11;
  t = restore_2_0(a_15, b_15, t);
  r_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_137, r_137);
  t = xtc_cc_wrap_1_0(c_15, t);
  t = q_137;
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm i_138 = NULL,k_138 = NULL,l_138 = NULL;
  if(match_cons(t, sym__3))
    {
      i_138 = ATgetArgument(t, 0);
      k_138 = ATgetArgument(t, 1);
      l_138 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_138;
  if(match_cons(t, sym_XTService_0))
    {
      t = l_138;
      t = exec_http_0_1(k_138, t);
    }
  else
    {
      ATerm p_61 = t;
      int q_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_HTTP_1))
            {
              ATerm s_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(q_61);
          t = l_138;
          t = exec_http_0_1(k_138, t);
        }
      else
        {
          t = p_61;
          if(match_cons(t, sym_Exec_1))
            {
              ATerm t_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_138;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = Cons_2_0(e_15, _id, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
    _fail(t);
  return(t);
}
ATerm xtc_dashed_option_0_0 (ATerm t)
{
  t = string_as_chars_1_0(d_15, t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm u_61 = t;
  int v_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(v_61);
    }
  else
    {
      t = u_61;
      {
        ATerm b_139 = NULL;
        b_139 = t;
        t = (ATerm) ATinsert(ATempty, b_139);
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL;
  static ATerm d_139 (ATerm t);
  static ATerm d_139 (ATerm t)
  {
    ATerm w_61 = t;
    int x_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_138 != NULL) && (t_138 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_138 = ATgetFirst((ATermList) t);
            {
              ATerm y_61 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(y_61) == AT_LIST) && !(ATisEmpty(y_61))))
                {
                  if(((u_138 != NULL) && (u_138 != ATgetFirst((ATermList) y_61))))
                    _fail(ATgetFirst((ATermList) y_61));
                  else
                    u_138 = ATgetFirst((ATermList) y_61);
                  if(((v_138 != NULL) && (v_138 != (ATerm) ATgetNext((ATermList) y_61))))
                    _fail((ATerm) ATgetNext((ATermList) y_61));
                  else
                    v_138 = (ATerm) ATgetNext((ATermList) y_61);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_61);
        {
          ATerm z_61 = t;
          int a_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_138;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(v_138), u_138), t_138);
              LocalPopChoice(a_62);
              {
                ATerm w_138 = NULL,x_138 = NULL,y_138 = NULL;
                t = term_i_62;
                y_138 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_138, u_138);
                t = dbg_0_1(y_138, t);
                t = xtc_desugar_arg_0_0(t);
                w_138 = t;
                t = v_138;
                t = d_139(t);
                x_138 = t;
                t = (ATerm) ATinsert(CheckATermList(x_138), w_138);
              }
            }
          else
            {
              t = z_61;
              {
                ATerm z_138 = NULL,a_139 = NULL;
                t = t_138;
                {
                  ATerm j_62 = t;
                  int k_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(k_62);
                    }
                  else
                    {
                      t = j_62;
                      t = (ATerm) ATinsert(ATempty, t_138);
                    }
                }
                z_138 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_138), v_138);
                t = conc_0_0(t);
                t = d_139(t);
                a_139 = t;
                t = (ATerm) ATinsert(CheckATermList(a_139), z_138);
              }
            }
        }
      }
    else
      {
        t = w_61;
        {
          ATerm l_62 = t;
          int m_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(g_15, d_139, t);
              LocalPopChoice(m_62);
            }
          else
            {
              t = l_62;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = d_139(t);
  t = concat_0_0(t);
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  ATerm e_139 = NULL,f_139 = NULL,g_139 = NULL,h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL,s_30 = NULL;
  k_139 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      f_139 = ATgetArgument(t, 0);
      g_139 = ATgetArgument(t, 1);
      h_139 = ATgetArgument(t, 2);
      i_139 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_139);
  e_139 = t;
  t = i_139;
  t = xtc_desugar_args_0_0(t);
  j_139 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, f_139, g_139, h_139, j_139);
  s_30 = t;
  t = SSLsetAnnotations(s_30, e_139);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm o_62 = t;
  int p_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_139 = NULL;
      if(match_cons(t, sym_XtcDesc_1))
        {
          o_139 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_139;
      if(!(match_cons(t, sym_XT_0)))
        _fail(t);
      t = term_v_56;
      LocalPopChoice(p_62);
    }
  else
    {
      t = o_62;
      {
        ATerm q_62 = t;
        int r_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(r_62);
          }
        else
          {
            t = q_62;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(h_15, t);
  return(t);
}
static ATerm e_143 (ATerm v_141, ATerm t)
{
  ATerm x_141 = NULL;
  t = v_141;
  if(match_cons(t, sym_URL_1))
    {
      x_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, x_141))));
  return(t);
}
static ATerm f_143 (ATerm y_141, ATerm t)
{
  ATerm a_142 = NULL;
  t = y_141;
  if(match_cons(t, sym_FILE_1))
    {
      a_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, a_142))));
  return(t);
}
static ATerm g_143 (ATerm b_142, ATerm c_142, ATerm d_142, ATerm t)
{
  ATerm g_142 = NULL;
  t = b_142;
  t = is_string_0_0(t);
  t = c_142;
  if(match_cons(t, sym_URL_1))
    {
      g_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, b_142), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, g_142))));
  return(t);
}
static ATerm h_143 (ATerm h_142, ATerm i_142, ATerm j_142, ATerm t)
{
  ATerm m_142 = NULL;
  t = h_142;
  t = is_string_0_0(t);
  t = i_142;
  if(match_cons(t, sym_FILE_1))
    {
      m_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, h_142), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, m_142))));
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL,q_142 = NULL;
  o_142 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      p_142 = ATgetArgument(t, 0);
      q_142 = ATgetArgument(t, 1);
      t = p_142;
      if(match_cons(t, sym_String_1))
        {
          n_142 = ATgetArgument(t, 0);
          {
            ATerm t_62 = t;
            int u_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_59 = NULL,r_60 = NULL,s_60 = NULL;
                t = n_142;
                t = is_string_0_0(t);
                t = q_142;
                if(match_cons(t, sym_XtcQuery_1))
                  {
                    r_60 = ATgetArgument(t, 0);
                    {
                      ATerm e_61 = NULL,p_31 = NULL;
                      t = SSLgetAnnotations(q_142);
                      e_61 = t;
                      t = (ATerm) ATmakeAppl(sym_XtcQuery_1, r_60);
                      p_31 = t;
                      t = SSLsetAnnotations(p_31, e_61);
                    }
                  }
                else
                  {
                    ATerm j_61 = NULL,q_31 = NULL;
                    if(match_cons(t, sym_XtcQuery_2))
                      {
                        r_60 = ATgetArgument(t, 0);
                        s_60 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(q_142);
                    j_61 = t;
                    t = (ATerm) ATmakeAppl(sym_XtcQuery_2, r_60, s_60);
                    q_31 = t;
                    t = SSLsetAnnotations(q_31, j_61);
                  }
                {
                  ATerm v_62 = t;
                  int w_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_60 = NULL;
                      t_60 = t;
                      t = xtc_find_loc_1_0(Hd_0_0, t);
                      q_59 = t;
                      t = t_60;
                      LocalPopChoice(w_62);
                      {
                        ATerm u_60 = NULL,v_60 = NULL;
                        v_60 = t;
                        t = term_x_62;
                        u_60 = t;
                        t = v_60;
                        t = dbg_0_1(u_60, t);
                      }
                    }
                  else
                    {
                      t = v_62;
                      {
                        ATerm w_60 = NULL,x_60 = NULL;
                        x_60 = t;
                        t = term_y_62;
                        w_60 = t;
                        t = x_60;
                        t = err_0_1(w_60, t);
                      }
                    }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, n_142), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(q_59)))));
                LocalPopChoice(u_62);
              }
            else
              {
                t = t_62;
                {
                  ATerm a_63 = t;
                  int b_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_143(o_142, t);
                      LocalPopChoice(b_63);
                    }
                  else
                    {
                      t = a_63;
                      {
                        ATerm c_63 = t;
                        int d_63 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_143(o_142, t);
                            LocalPopChoice(d_63);
                          }
                        else
                          {
                            t = c_63;
                            t = o_142;
                            t = is_string_0_0(t);
                            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, o_142)));
                          }
                      }
                    }
                }
              }
          }
        }
      else
        {
          ATerm e_63 = t;
          int f_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_143(o_142, t);
              LocalPopChoice(f_63);
            }
          else
            {
              t = e_63;
              {
                ATerm g_63 = t;
                int h_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_143(o_142, t);
                    LocalPopChoice(h_63);
                  }
                else
                  {
                    t = g_63;
                    t = o_142;
                    t = is_string_0_0(t);
                    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, o_142)));
                  }
              }
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Option_1))
        {
          p_142 = ATgetArgument(t, 0);
          {
            ATerm i_63 = t;
            int j_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_61 = NULL,b_62 = NULL,c_62 = NULL;
                t = p_142;
                if(match_cons(t, sym_XtcQuery_1))
                  {
                    b_62 = ATgetArgument(t, 0);
                    {
                      ATerm n_62 = NULL,i_32 = NULL;
                      t = SSLgetAnnotations(p_142);
                      n_62 = t;
                      t = (ATerm) ATmakeAppl(sym_XtcQuery_1, b_62);
                      i_32 = t;
                      t = SSLsetAnnotations(i_32, n_62);
                    }
                  }
                else
                  {
                    ATerm s_62 = NULL,j_32 = NULL;
                    if(match_cons(t, sym_XtcQuery_2))
                      {
                        b_62 = ATgetArgument(t, 0);
                        c_62 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(p_142);
                    s_62 = t;
                    t = (ATerm) ATmakeAppl(sym_XtcQuery_2, b_62, c_62);
                    j_32 = t;
                    t = SSLsetAnnotations(j_32, s_62);
                  }
                {
                  ATerm k_63 = t;
                  int l_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_62 = NULL;
                      d_62 = t;
                      t = xtc_find_loc_1_0(Hd_0_0, t);
                      r_61 = t;
                      t = d_62;
                      LocalPopChoice(l_63);
                      {
                        ATerm e_62 = NULL,f_62 = NULL;
                        f_62 = t;
                        t = term_x_62;
                        e_62 = t;
                        t = f_62;
                        t = dbg_0_1(e_62, t);
                      }
                    }
                  else
                    {
                      t = k_63;
                      {
                        ATerm g_62 = NULL,h_62 = NULL;
                        h_62 = t;
                        t = term_y_62;
                        g_62 = t;
                        t = h_62;
                        t = err_0_1(g_62, t);
                      }
                    }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(r_61)))));
                LocalPopChoice(j_63);
              }
            else
              {
                t = i_63;
                {
                  ATerm m_63 = t;
                  int n_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_143(o_142, t);
                      LocalPopChoice(n_63);
                    }
                  else
                    {
                      t = m_63;
                      {
                        ATerm o_63 = t;
                        int q_63 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_143(o_142, t);
                            LocalPopChoice(q_63);
                          }
                        else
                          {
                            t = o_63;
                            t = o_142;
                            t = is_string_0_0(t);
                            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, o_142)));
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
              p_142 = ATgetArgument(t, 0);
              q_142 = ATgetArgument(t, 1);
              {
                ATerm r_63 = t;
                int s_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_143(o_142, t);
                    LocalPopChoice(s_63);
                  }
                else
                  {
                    t = r_63;
                    {
                      ATerm t_63 = t;
                      int u_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_143(o_142, t);
                          LocalPopChoice(u_63);
                        }
                      else
                        {
                          t = t_63;
                          {
                            ATerm v_63 = t;
                            int w_63 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = o_142;
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, o_142)));
                                LocalPopChoice(w_63);
                              }
                            else
                              {
                                t = v_63;
                                {
                                  ATerm x_63 = t;
                                  int y_63 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_143(p_142, q_142, o_142, t);
                                      LocalPopChoice(y_63);
                                    }
                                  else
                                    {
                                      t = x_63;
                                      {
                                        ATerm z_63 = t;
                                        int a_64 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_143(p_142, q_142, o_142, t);
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
                                                  t = p_142;
                                                  t = is_string_0_0(t);
                                                  t = q_142;
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, p_142), (ATerm) ATmakeAppl(sym_String_1, q_142)));
                                                  LocalPopChoice(c_64);
                                                }
                                              else
                                                {
                                                  t = b_64;
                                                  {
                                                    static ATerm o_15 (ATerm t);
                                                    static ATerm o_15 (ATerm t)
                                                    {
                                                      ATerm a_143 = NULL;
                                                      a_143 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, p_142, a_143);
                                                      t = xtc_desugar_arg_0_0(t);
                                                      return(t);
                                                    }
                                                    t = p_142;
                                                    t = is_string_0_0(t);
                                                    t = q_142;
                                                    t = mapconcat_1_0(o_15, t);
                                                  }
                                                }
                                            }
                                          }
                                      }
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
              ATerm d_64 = t;
              int e_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_143(o_142, t);
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
                        t = f_143(o_142, t);
                        LocalPopChoice(g_64);
                      }
                    else
                      {
                        t = f_64;
                        t = o_142;
                        t = is_string_0_0(t);
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, o_142)));
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
  ATerm a_144 = NULL,b_144 = NULL,d_144 = NULL,e_144 = NULL,f_144 = NULL,g_144 = NULL;
  if(match_cons(t, sym_TVarStar_4))
    {
      d_144 = ATgetArgument(t, 0);
      e_144 = ATgetArgument(t, 1);
      f_144 = ATgetArgument(t, 2);
      g_144 = ATgetArgument(t, 3);
      t = f_144;
      if(match_cons(t, sym_Some_1))
        {
          a_144 = ATgetArgument(t, 0);
          t = g_144;
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_TVarStar_4, d_144, e_144, (ATerm)ATmakeAppl(sym_Some_1, a_144), term_j_64);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = g_144;
          if(match_cons(t, sym_Some_1))
            {
              b_144 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, d_144, e_144, term_n_64, (ATerm) ATmakeAppl(sym_Some_1, b_144));
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, d_144, e_144, term_n_64, term_j_64);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          d_144 = ATgetArgument(t, 0);
          e_144 = ATgetArgument(t, 1);
          f_144 = ATgetArgument(t, 2);
          g_144 = ATgetArgument(t, 3);
          t = f_144;
          if(match_cons(t, sym_Some_1))
            {
              a_144 = ATgetArgument(t, 0);
              t = g_144;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_TVarPlus_4, d_144, e_144, (ATerm)ATmakeAppl(sym_Some_1, a_144), term_j_64);
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = g_144;
              if(match_cons(t, sym_Some_1))
                {
                  b_144 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, d_144, e_144, term_n_64, (ATerm) ATmakeAppl(sym_Some_1, b_144));
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, d_144, e_144, term_n_64, term_j_64);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              d_144 = ATgetArgument(t, 0);
              e_144 = ATgetArgument(t, 1);
              f_144 = ATgetArgument(t, 2);
              g_144 = ATgetArgument(t, 3);
              t = f_144;
              if(match_cons(t, sym_Some_1))
                {
                  a_144 = ATgetArgument(t, 0);
                  t = g_144;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_TVarOne_4, d_144, e_144, (ATerm)ATmakeAppl(sym_Some_1, a_144), term_j_64);
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = g_144;
                  if(match_cons(t, sym_Some_1))
                    {
                      b_144 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, d_144, e_144, term_n_64, (ATerm) ATmakeAppl(sym_Some_1, b_144));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, d_144, e_144, term_n_64, term_j_64);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  d_144 = ATgetArgument(t, 0);
                  e_144 = ATgetArgument(t, 1);
                  f_144 = ATgetArgument(t, 2);
                  g_144 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = f_144;
              if(match_cons(t, sym_Some_1))
                {
                  a_144 = ATgetArgument(t, 0);
                  t = g_144;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_TVarOpt_4, d_144, e_144, (ATerm)ATmakeAppl(sym_Some_1, a_144), term_j_64);
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = g_144;
                  if(match_cons(t, sym_Some_1))
                    {
                      b_144 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, d_144, e_144, term_n_64, (ATerm) ATmakeAppl(sym_Some_1, b_144));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, d_144, e_144, term_n_64, term_j_64);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm u_145 = NULL,v_145 = NULL,x_145 = NULL,y_145 = NULL;
  if(match_cons(t, sym_Template_2))
    {
      x_145 = ATgetArgument(t, 0);
      y_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_145;
  if(match_cons(t, sym_Some_1))
    {
      u_145 = ATgetArgument(t, 0);
      {
        ATerm a_146 = NULL;
        t = x_145;
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = u_145;
        if(match_cons(t, sym_Layout_1))
          {
            v_145 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_51), term_t_64), term_r_64), term_p_64), v_145);
        t = union_0_0(t);
        a_146 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_u_64, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, a_146)));
      }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Template_2, x_145, term_w_64);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm x_64 = ATgetArgument(t, 0);
      if(!(match_cons(x_64, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_v_56;
  return(t);
}
static ATerm o_42 (ATerm t)
{
  t = term_v_56;
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm d_146 = NULL,e_146 = NULL,f_146 = NULL;
  f_146 = t;
  if(match_cons(t, sym__2))
    {
      d_146 = ATgetArgument(t, 0);
      e_146 = ATgetArgument(t, 1);
      {
        ATerm y_64 = t;
        int z_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_146;
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, f_146);
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
                  t = d_146;
                  t = is_string_0_0(t);
                  t = e_146;
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, d_146, e_146);
                  LocalPopChoice(b_65);
                }
              else
                {
                  t = a_65;
                  {
                    ATerm c_65 = t;
                    int d_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = d_146;
                        t = is_string_0_0(t);
                        t = e_146;
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, d_146, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_65, (ATerm) ATmakeAppl(sym_String_1, e_146))));
                        LocalPopChoice(d_65);
                      }
                    else
                      {
                        t = c_65;
                        t = f_146;
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_1, f_146);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      ATerm f_65 = t;
      int g_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_146;
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, f_146);
          LocalPopChoice(g_65);
        }
      else
        {
          t = f_65;
          t = f_146;
          t = is_string_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, f_146);
        }
    }
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm o_146 = NULL,p_146 = NULL,q_146 = NULL;
  q_146 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  o_146 = t;
  t = q_146;
  t = base_filename_0_0(t);
  p_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_146, p_146);
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm r_146 = NULL,s_146 = NULL;
  s_146 = t;
  t = get_extension_0_0(t);
  r_146 = t;
  {
    ATerm h_65 = t;
    int i_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_146;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = r_146;
        LocalPopChoice(i_65);
        t = (ATerm) ATinsert(ATempty, term_m_65);
      }
    else
      {
        t = h_65;
        t = s_146;
        {
          ATerm n_65 = t;
          int o_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_146;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = s_146;
              LocalPopChoice(o_65);
              t = (ATerm) ATinsert(ATempty, term_r_65);
            }
          else
            {
              t = n_65;
              t = s_146;
              {
                ATerm s_65 = t;
                int t_65 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_146;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = s_146;
                    LocalPopChoice(t_65);
                    t = (ATerm) ATinsert(ATempty, term_r_65);
                  }
                else
                  {
                    t = s_65;
                    t = s_146;
                    {
                      ATerm u_65 = t;
                      int v_65 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_146;
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = s_146;
                          LocalPopChoice(v_65);
                          t = (ATerm) ATinsert(ATempty, term_y_65);
                        }
                      else
                        {
                          t = u_65;
                          t = s_146;
                          {
                            ATerm z_65 = t;
                            int a_66 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = r_146;
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = s_146;
                                LocalPopChoice(a_66);
                                t = (ATerm) ATinsert(ATempty, term_d_66);
                              }
                            else
                              {
                                t = z_65;
                                t = s_146;
                                {
                                  ATerm e_66 = t;
                                  int f_66 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = r_146;
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = s_146;
                                      LocalPopChoice(f_66);
                                      t = (ATerm) ATinsert(ATempty, term_d_66);
                                    }
                                  else
                                    {
                                      t = e_66;
                                      t = s_146;
                                      {
                                        ATerm g_66 = t;
                                        int h_66 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_146;
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = s_146;
                                            LocalPopChoice(h_66);
                                            t = (ATerm) ATinsert(ATempty, term_k_66);
                                          }
                                        else
                                          {
                                            t = g_66;
                                            t = s_146;
                                            {
                                              ATerm l_66 = t;
                                              int m_66 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = r_146;
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = s_146;
                                                  LocalPopChoice(m_66);
                                                  t = (ATerm) ATinsert(ATempty, term_p_66);
                                                }
                                              else
                                                {
                                                  t = l_66;
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
  ATerm q_66 = t;
  int r_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_146 = NULL;
      t_146 = t;
      t = has_no_extension_0_0(t);
      t = t_146;
      LocalPopChoice(r_66);
      t = (ATerm) ATinsert(ATempty, term_w_66);
    }
  else
    {
      t = q_66;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL,x_146 = NULL;
  x_146 = t;
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = has_no_extension_0_0(t);
        t = x_146;
        LocalPopChoice(y_66);
        t = (ATerm) ATinsert(ATempty, term_w_66);
      }
    else
      {
        t = x_66;
        t = (ATerm) ATempty;
      }
  }
  u_146 = t;
  t = x_146;
  t = xtc_default_xt_type_0_0(t);
  v_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_146, v_146);
  t = conc_0_0(t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = filter_1_0(v_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm n_147 = NULL;
  t = term_z_66;
  n_147 = t;
  t = term_c_22;
  t = err_0_1(n_147, t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm b_147 = NULL,c_147 = NULL,d_147 = NULL;
  if(match_cons(t, sym__2))
    {
      b_147 = ATgetArgument(t, 0);
      d_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_147;
  if(match_cons(t, sym_Import_0))
    {
      ATerm f_147 = NULL;
      t = d_147;
      t = map_1_0(y_15, t);
      f_147 = t;
      t = (ATerm) ATmakeAppl(sym_Reference_1, f_147);
    }
  else
    {
      ATerm k_147 = NULL;
      if(match_cons(t, sym_Tool_1))
        {
          c_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_147;
      t = map_1_0(z_15, t);
      k_147 = t;
      t = (ATerm) ATmakeAppl(sym_Registration_2, c_147, k_147);
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm h_147 = NULL;
  h_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_147, (ATerm) ATempty);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm l_147 = NULL,m_147 = NULL;
  if(match_cons(t, sym__2))
    {
      l_147 = ATgetArgument(t, 0);
      m_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42(l_147, m_147, t);
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(s_15, u_15, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm o_147 = NULL;
  t = xtc_convert_0_0(t);
  o_147 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, o_147);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm p_147 = NULL,q_147 = NULL;
  if(match_cons(t, sym__2))
    {
      p_147 = ATgetArgument(t, 0);
      q_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42(p_147, q_147, t);
  return(t);
}
static ATerm p_42 (ATerm x_7, ATerm y_7, ATerm t)
{
  ATerm r_147 = NULL,s_147 = NULL;
  t = y_7;
  t = xtc_default_xt_meta_0_0(t);
  s_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_65, (ATerm) ATmakeAppl(sym_String_1, x_7))), s_147);
  t = conc_0_0(t);
  r_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_7, r_147);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm w_147 = NULL,x_147 = NULL;
  if(match_cons(t, sym__2))
    {
      w_147 = ATgetArgument(t, 0);
      x_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42(w_147, x_147, t);
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm t_147 = NULL,u_147 = NULL,v_147 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_67 = ATgetArgument(t, 0);
      if(match_cons(a_67, sym_Tool_1))
        {
          t_147 = ATgetArgument(a_67, 0);
        }
      else
        _fail(t);
      u_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_147;
  t = map_1_0(a_16, t);
  v_147 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, t_147, v_147);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm z_147 = NULL,a_148 = NULL;
  if(match_cons(t, sym__2))
    {
      z_147 = ATgetArgument(t, 0);
      a_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42(z_147, a_148, t);
  return(t);
}
static ATerm q_42 (ATerm u_7, ATerm v_7, ATerm t)
{
  ATerm y_147 = NULL;
  t = v_7;
  t = map_1_0(b_16, t);
  y_147 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, u_7, y_147);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm d_148 = NULL;
  d_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_148, (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm b_148 = NULL,c_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_67 = ATgetArgument(t, 0);
      if(!(match_cons(b_67, sym_Import_0)))
        _fail(t);
      b_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_148;
  t = map_1_0(d_16, t);
  c_148 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, c_148);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm f_148 = NULL;
  f_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_148, (ATerm) ATempty);
  return(t);
}
static ATerm r_42 (ATerm s_7, ATerm t)
{
  ATerm e_148 = NULL;
  t = s_7;
  t = map_1_0(e_16, t);
  e_148 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, e_148);
  return(t);
}
ATerm xtc_search_0_0 (ATerm t)
{
  t = xtc_search_1_0(Hd_0_0, t);
  return(t);
}
ATerm xtc_search_1_0 (ATerm w_1 (ATerm), ATerm t)
{
  ATerm i_148 = NULL,j_148 = NULL,l_148 = NULL;
  j_148 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      l_148 = ATgetArgument(t, 0);
      {
        ATerm c_67 = t;
        int d_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_148 = NULL;
            t = l_148;
            t = is_list_0_0(t);
            t = j_148;
            {
              static ATerm g_16 (ATerm t);
              static ATerm g_16 (ATerm t)
              {
                t = xtc_has_meta_0_1(l_148, t);
                return(t);
              }
              t = xtc_query_all_2_0(g_16, w_1, t);
            }
            o_148 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_148, o_148);
            LocalPopChoice(d_67);
          }
        else
          {
            t = c_67;
            {
              ATerm s_148 = NULL;
              t = l_148;
              t = is_string_0_0(t);
              t = j_148;
              t = xtc_query_one_2_0(_id, w_1, t);
              s_148 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_148, s_148);
            }
          }
      }
    }
  else
    {
      ATerm x_148 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          l_148 = ATgetArgument(t, 0);
          i_148 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_148;
      t = is_string_0_0(t);
      t = i_148;
      t = is_list_0_0(t);
      t = j_148;
      {
        static ATerm h_16 (ATerm t);
        static ATerm h_16 (ATerm t)
        {
          t = xtc_has_meta_0_1(i_148, t);
          return(t);
        }
        t = xtc_query_one_2_0(h_16, w_1, t);
      }
      x_148 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_148, x_148);
    }
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm x_27 (ATerm), ATerm t_29 (ATerm), ATerm f_7, ATerm t)
{
  t = f_7;
  t = table_getlist_0_0(t);
  {
    static ATerm k_16 (ATerm t);
    static ATerm k_16 (ATerm t)
    {
      ATerm y_148 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm e_67 = ATgetArgument(t, 0);
          y_148 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_148;
      t = x_27(t);
      return(t);
    }
    t = filter_1_0(k_16, t);
  }
  t = flatten_list_0_0(t);
  t = t_29(t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm m_27 (ATerm), ATerm o_27 (ATerm), ATerm e_7, ATerm t)
{
  ATerm z_148 = NULL;
  z_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_7, z_148);
  t = table_get_0_0(t);
  t = m_27(t);
  t = o_27(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm e_27 (ATerm), ATerm f_27 (ATerm), ATerm t)
{
  ATerm a_149 = NULL;
  a_149 = t;
  {
    ATerm f_67 = t;
    int g_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_149 = NULL,c_149 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_67, a_149);
        t = table_get_0_0(t);
        t = e_27(t);
        t = f_27(t);
        b_149 = t;
        t = term_i_67;
        c_149 = t;
        t = a_149;
        t = dbg_0_1(c_149, t);
        t = b_149;
        LocalPopChoice(g_67);
      }
    else
      {
        t = f_67;
        {
          ATerm d_149 = NULL;
          t = term_j_67;
          d_149 = t;
          t = a_149;
          t = xtc_query_all_2_1(e_27, f_27, d_149, t);
          t = xtc_cache_put_0_1(a_149, t);
        }
      }
  }
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm c_27 (ATerm), ATerm d_27 (ATerm), ATerm t)
{
  ATerm h_149 = NULL,j_149 = NULL;
  h_149 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      j_149 = ATgetArgument(t, 0);
      t = h_149;
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          j_149 = ATgetArgument(t, 0);
          {
            ATerm k_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_149;
    }
  {
    ATerm l_67 = t;
    int m_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_149 = NULL,m_149 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_67, h_149);
        t = table_get_0_0(t);
        t = c_27(t);
        t = d_27(t);
        l_149 = t;
        t = term_i_67;
        m_149 = t;
        t = h_149;
        t = dbg_0_1(m_149, t);
        t = l_149;
        LocalPopChoice(m_67);
      }
    else
      {
        t = l_67;
        t = (ATerm) ATmakeAppl(sym__2, term_j_67, j_149);
        t = table_get_0_0(t);
        t = c_27(t);
        t = d_27(t);
        t = xtc_cache_put_0_1(h_149, t);
      }
  }
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm v_1, ATerm t)
{
  ATerm u_149 = NULL;
  u_149 = t;
  {
    ATerm n_67 = t;
    int o_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_1;
        t = Nil_0_0(t);
        t = u_149;
        LocalPopChoice(o_67);
      }
    else
      {
        t = n_67;
        {
          ATerm p_67 = t;
          int q_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_1;
              t = is_list_0_0(t);
              {
                ATerm r_67 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_67;
                  }
              }
              {
                static ATerm l_16 (ATerm t);
                static ATerm l_16 (ATerm t)
                {
                  ATerm z_62 = NULL;
                  z_62 = t;
                  t = u_149;
                  t = xtc_has_meta_0_1(z_62, t);
                  t = z_62;
                  return(t);
                }
                t = filter_1_0(l_16, t);
              }
              if((v_1 != t))
                {
                  _fail(t);
                }
              t = u_149;
              LocalPopChoice(q_67);
            }
          else
            {
              t = p_67;
              t = u_149;
              {
                static ATerm p_16 (ATerm t);
                static ATerm p_16 (ATerm t)
                {
                  if((v_1 != t))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = collect_all_1_0(p_16, t);
              }
              {
                ATerm s_67 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_67;
                  }
              }
              t = u_149;
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm r_6, ATerm t)
{
  ATerm z_149 = NULL,a_150 = NULL;
  z_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_67, r_6, (ATerm) ATinsert(ATempty, z_149));
  t = table_union_0_0(t);
  t = term_t_67;
  a_150 = t;
  t = r_6;
  t = dbg_0_1(a_150, t);
  t = z_149;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm q_6, ATerm t)
{
  ATerm b_150 = NULL;
  b_150 = t;
  t = q_6;
  t = is_string_0_0(t);
  t = b_150;
  {
    static ATerm q_16 (ATerm t);
    static ATerm q_16 (ATerm t)
    {
      ATerm c_150 = NULL;
      c_150 = t;
      t = SSL_explode_term(c_150);
      if(match_cons(t, sym__2))
        {
          if((q_6 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm u_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_150;
      return(t);
    }
    t = collect_all_1_0(q_16, t);
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
  ATerm d_150 = NULL,e_150 = NULL,f_150 = NULL;
  f_150 = t;
  t = term_f_45;
  e_150 = t;
  t = f_150;
  t = xtc_fetch_meta_0_1(e_150, t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      d_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_150;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm h_150 = NULL;
  if(match_cons(t, sym_XtcMeta_2))
    {
      ATerm v_67 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_67) != ATmakeSymbol("version", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_67 = ATgetArgument(t, 1);
        if(match_cons(w_67, sym_String_1))
          {
            h_150 = ATgetArgument(w_67, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_150;
  return(t);
}
ATerm xtc_fetch_version_0_0 (ATerm t)
{
  ATerm g_150 = NULL;
  t = filter_1_0(r_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_150 = ATgetFirst((ATermList) t);
      {
        ATerm x_67 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_150;
  return(t);
}
ATerm xtc_register_reference_0_1 (ATerm u_1, ATerm t)
{
  ATerm j_150 = NULL,k_150 = NULL,l_150 = NULL;
  l_150 = t;
  if(match_cons(t, sym__2))
    {
      j_150 = ATgetArgument(t, 0);
      k_150 = ATgetArgument(t, 1);
      {
        ATerm y_67 = t;
        int z_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_150, k_150)));
            t = xtc_register_0_1(u_1, t);
            LocalPopChoice(z_67);
          }
        else
          {
            t = y_67;
            t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_150, (ATerm) ATempty)));
            t = xtc_register_0_1(u_1, t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_150, (ATerm) ATempty)));
      t = xtc_register_0_1(u_1, t);
    }
  return(t);
}
ATerm xtc_register_reference_0_0 (ATerm t)
{
  ATerm q_150 = NULL,r_150 = NULL;
  r_150 = t;
  t = (ATerm) ATempty;
  q_150 = t;
  t = r_150;
  t = xtc_register_reference_0_1(q_150, t);
  return(t);
}
ATerm xtc_register_resource_0_1 (ATerm l_1, ATerm t)
{
  ATerm u_150 = NULL,w_150 = NULL,x_150 = NULL;
  if(match_cons(t, sym__3))
    {
      w_150 = ATgetArgument(t, 0);
      x_150 = ATgetArgument(t, 1);
      u_150 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Registration_2, w_150, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_150, u_150)));
      t = xtc_register_0_1(l_1, t);
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_150 = ATgetArgument(t, 0);
          x_150 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Registration_2, w_150, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_150, (ATerm) ATempty)));
      t = xtc_register_0_1(l_1, t);
    }
  return(t);
}
ATerm xtc_register_resource_0_0 (ATerm t)
{
  ATerm d_151 = NULL,e_151 = NULL;
  e_151 = t;
  t = (ATerm) ATempty;
  d_151 = t;
  t = e_151;
  t = xtc_register_resource_0_1(d_151, t);
  return(t);
}
ATerm xtc_register_component_0_1 (ATerm c_0, ATerm t)
{
  ATerm g_151 = NULL,i_151 = NULL,j_151 = NULL;
  if(match_cons(t, sym__3))
    {
      i_151 = ATgetArgument(t, 0);
      j_151 = ATgetArgument(t, 1);
      g_151 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Registration_2, i_151, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_151, g_151)));
      t = xtc_register_0_1(c_0, t);
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_151 = ATgetArgument(t, 0);
          j_151 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Registration_2, i_151, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_151, (ATerm) ATempty)));
      t = xtc_register_0_1(c_0, t);
    }
  return(t);
}
ATerm xtc_register_component_0_0 (ATerm t)
{
  ATerm p_151 = NULL,q_151 = NULL;
  q_151 = t;
  t = (ATerm) ATempty;
  p_151 = t;
  t = q_151;
  t = xtc_register_component_0_1(p_151, t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm b_152 = NULL,c_152 = NULL,d_152 = NULL;
  d_152 = t;
  t = Fst_0_0(t);
  b_152 = t;
  t = d_152;
  t = Snd_0_0(t);
  c_152 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_68, b_152, c_152);
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm a_0, ATerm t)
{
  ATerm v_151 = NULL,w_151 = NULL;
  if(match_cons(t, sym_Reference_1))
    {
      v_151 = ATgetArgument(t, 0);
      t = v_151;
      {
        static ATerm u_16 (ATerm t);
        static ATerm u_16 (ATerm t)
        {
          static ATerm y_16 (ATerm t);
          static ATerm y_16 (ATerm t)
          {
            ATerm a_152 = NULL;
            a_152 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_152, a_0);
            t = union_0_0(t);
            return(t);
          }
          t = _2_0(_id, y_16, t);
          return(t);
        }
        t = map_1_0(u_16, t);
      }
      t = map_1_0(z_16, t);
    }
  else
    {
      ATerm g_152 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          v_151 = ATgetArgument(t, 0);
          w_151 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_151;
      {
        static ATerm a_17 (ATerm t);
        static ATerm a_17 (ATerm t)
        {
          static ATerm b_17 (ATerm t);
          static ATerm b_17 (ATerm t)
          {
            ATerm j_152 = NULL;
            j_152 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_152, a_0);
            t = union_0_0(t);
            return(t);
          }
          t = _2_0(_id, b_17, t);
          return(t);
        }
        t = map_1_0(a_17, t);
      }
      g_152 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_67, v_151, g_152);
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm k_152 = NULL,l_152 = NULL;
  l_152 = t;
  t = (ATerm) ATempty;
  k_152 = t;
  t = l_152;
  t = xtc_register_0_1(k_152, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm p_5, ATerm t)
{
  static ATerm d_17 (ATerm t);
  static ATerm d_17 (ATerm t)
  {
    ATerm n_152 = NULL;
    ATerm b_68 = t;
    int c_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_152 = NULL;
        r_152 = t;
        t = SSL_explode_term(r_152);
        if(match_cons(t, sym__2))
          {
            n_152 = ATgetArgument(t, 0);
            {
              ATerm d_68 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = p_5;
        {
          ATerm e_68 = t;
          if((PushChoice() == 0))
            {
              static ATerm e_17 (ATerm t);
              static ATerm e_17 (ATerm t)
              {
                ATerm p_63 = NULL;
                p_63 = t;
                t = SSL_explode_term(p_63);
                if(match_cons(t, sym__2))
                  {
                    if((n_152 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    {
                      ATerm f_68 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = p_63;
                return(t);
              }
              t = SRTS_one(e_17, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_68;
            }
        }
        t = (ATerm) ATinsert(ATempty, r_152);
        LocalPopChoice(c_68);
      }
    else
      {
        t = b_68;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(d_17, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm n_5, ATerm t)
{
  ATerm t_152 = NULL,u_152 = NULL;
  if(match_cons(t, sym__2))
    {
      t_152 = ATgetArgument(t, 0);
      u_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_42(n_5, t_152, u_152, t);
  return(t);
}
static ATerm s_42 (ATerm n_5, ATerm o_5, ATerm k_47, ATerm t)
{
  ATerm v_152 = NULL,w_152 = NULL;
  t = k_47;
  t = xtc_filter_meta_0_1(n_5, t);
  w_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_152, n_5);
  t = union_0_0(t);
  v_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, v_152);
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm m_5, ATerm t)
{
  static ATerm f_17 (ATerm t);
  static ATerm f_17 (ATerm t)
  {
    ATerm a_153 = NULL;
    a_153 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_153, m_5);
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(_id, f_17, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm l_5, ATerm t)
{
  static ATerm i_17 (ATerm t);
  static ATerm i_17 (ATerm t)
  {
    static ATerm j_17 (ATerm t);
    static ATerm j_17 (ATerm t)
    {
      ATerm e_153 = NULL;
      e_153 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_153, l_5);
      t = union_0_0(t);
      return(t);
    }
    t = _2_0(_id, j_17, t);
    return(t);
  }
  t = map_1_0(i_17, t);
  return(t);
}
ATerm xtc_create_tables_0_0 (ATerm t)
{
  ATerm f_153 = NULL;
  f_153 = t;
  t = map_1_0(table_create_0_0, t);
  t = f_153;
  return(t);
}
ATerm xtc_flush_0_0 (ATerm t)
{
  ATerm g_153 = NULL;
  g_153 = t;
  t = term_h_67;
  t = table_destroy_0_0(t);
  t = g_153;
  return(t);
}
ATerm xtc_reset_0_0 (ATerm t)
{
  ATerm h_153 = NULL;
  h_153 = t;
  t = term_j_67;
  t = table_destroy_0_0(t);
  t = term_a_68;
  t = table_destroy_0_0(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_68), term_j_67);
  t = map_1_0(table_create_0_0, t);
  t = h_153;
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_68 = t;
  int h_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_68;
      t = getenv_0_0(t);
      LocalPopChoice(h_68);
    }
  else
    {
      t = g_68;
      {
        ATerm j_68 = t;
        int k_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(k_68);
          }
        else
          {
            t = j_68;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_2 (ATerm j_5, ATerm k_5, ATerm t)
{
  ATerm i_153 = NULL;
  i_153 = t;
  {
    ATerm l_68 = t;
    int m_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_67;
        t = table_keys_0_0(t);
        {
          ATerm n_68 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_68;
            }
        }
        LocalPopChoice(m_68);
      }
    else
      {
        t = l_68;
        t = j_5;
        t = xtc_load_0_1(k_5, t);
      }
  }
  t = i_153;
  return(t);
}
ATerm xtc_init_0_1 (ATerm i_5, ATerm t)
{
  ATerm j_153 = NULL,k_153 = NULL;
  j_153 = t;
  t = (ATerm) ATempty;
  k_153 = t;
  t = j_153;
  {
    ATerm o_68 = t;
    int p_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_67;
        t = table_keys_0_0(t);
        {
          ATerm q_68 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_68;
            }
        }
        LocalPopChoice(p_68);
      }
    else
      {
        t = o_68;
        t = i_5;
        t = xtc_load_0_1(k_153, t);
      }
  }
  t = j_153;
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm l_153 = NULL,m_153 = NULL,n_153 = NULL;
  l_153 = t;
  t = xtc_location_0_0(t);
  m_153 = t;
  t = (ATerm) ATempty;
  n_153 = t;
  t = l_153;
  {
    ATerm r_68 = t;
    int s_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_67;
        t = table_keys_0_0(t);
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
        LocalPopChoice(s_68);
      }
    else
      {
        t = r_68;
        t = m_153;
        t = xtc_load_0_1(n_153, t);
      }
  }
  t = l_153;
  return(t);
}
ATerm xtc_load_url_0_0 (ATerm t)
{
  ATerm o_153 = NULL;
  o_153 = t;
  {
    ATerm u_68 = t;
    int v_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_URL_1, o_153);
        t = read_from_0_0(t);
        LocalPopChoice(v_68);
      }
    else
      {
        t = u_68;
        {
          ATerm q_153 = NULL;
          t = term_w_68;
          q_153 = t;
          t = o_153;
          t = err_0_1(q_153, t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm v_153 = NULL;
  v_153 = t;
  {
    ATerm x_68 = t;
    int y_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_153);
        t = read_from_0_0(t);
        LocalPopChoice(y_68);
      }
    else
      {
        t = x_68;
        {
          ATerm z_68 = t;
          int a_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_153;
              {
                ATerm f_69 = t;
                if((PushChoice() == 0))
                  {
                    t = file_exists_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_69;
                  }
              }
              t = term_k_69;
              t = xtc_save_file_0_1(v_153, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_153);
              t = read_from_0_0(t);
              LocalPopChoice(a_69);
            }
          else
            {
              t = z_68;
              {
                ATerm y_153 = NULL;
                t = term_l_69;
                y_153 = t;
                t = v_153;
                t = err_0_1(y_153, t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm xtc_load_0_1 (ATerm g_5, ATerm t)
{
  ATerm d_154 = NULL,e_154 = NULL,f_154 = NULL,g_154 = NULL,h_154 = NULL,i_154 = NULL,j_154 = NULL,k_154 = NULL,s_32 = NULL,q_32 = NULL,r_154 = NULL,s_154 = NULL;
  d_154 = t;
  {
    ATerm n_69 = t;
    int q_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_url_http_0_0(t);
        t = d_154;
        LocalPopChoice(q_69);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = n_69;
        t = xtc_load_file_0_0(t);
      }
  }
  s_154 = t;
  if(match_cons(t, sym_Repository_1))
    {
      r_154 = ATgetArgument(t, 0);
      {
        ATerm r_69 = t;
        int s_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_64 = NULL,p_32 = NULL;
            t = SSLgetAnnotations(s_154);
            l_64 = t;
            t = (ATerm) ATmakeAppl(sym_Repository_1, r_154);
            p_32 = t;
            t = SSLsetAnnotations(p_32, l_64);
            LocalPopChoice(s_69);
          }
        else
          {
            t = r_69;
            {
              ATerm u_154 = NULL,v_154 = NULL;
              t = term_j_70;
              u_154 = t;
              t = d_154;
              t = notice_0_1(u_154, t);
              t = s_154;
              t = xtc_convert_0_0(t);
              v_154 = t;
              t = (ATerm) ATmakeAppl(sym_Repository_1, v_154);
            }
          }
      }
    }
  else
    {
      ATerm x_154 = NULL,y_154 = NULL;
      t = term_j_70;
      x_154 = t;
      t = d_154;
      t = notice_0_1(x_154, t);
      t = s_154;
      t = xtc_convert_0_0(t);
      y_154 = t;
      t = (ATerm) ATmakeAppl(sym_Repository_1, y_154);
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
  q_32 = t;
  t = SSLsetAnnotations(q_32, h_154);
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
    static ATerm k_17 (ATerm t);
    static ATerm k_17 (ATerm t)
    {
      t = xtc_register_0_1(g_5, t);
      return(t);
    }
    t = map_1_0(k_17, t);
  }
  g_154 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, g_154);
  s_32 = t;
  t = SSLsetAnnotations(s_32, e_154);
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm b_155 = NULL,c_155 = NULL;
  c_155 = t;
  t = (ATerm) ATempty;
  b_155 = t;
  t = c_155;
  t = xtc_load_0_1(b_155, t);
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm d_155 = NULL;
  d_155 = t;
  {
    ATerm k_70 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_70;
      }
  }
  t = term_k_69;
  t = xtc_save_file_0_1(d_155, t);
  return(t);
}
ATerm xtc_dump_0_1 (ATerm e_5, ATerm t)
{
  t = xtc_table2aterm_2_0(_id, _id, t);
  t = xtc_save_file_0_1(e_5, t);
  return(t);
}
ATerm xtc_dump_0_0 (ATerm t)
{
  ATerm i_155 = NULL,j_155 = NULL;
  i_155 = t;
  t = xtc_location_0_0(t);
  j_155 = t;
  t = i_155;
  t = xtc_dump_0_1(j_155, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm l_70 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_XtcLoaded_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_70;
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
ATerm xtc_save_0_1 (ATerm d_5, ATerm t)
{
  static ATerm o_17 (ATerm t);
  static ATerm o_17 (ATerm t)
  {
    ATerm l_155 = NULL;
    l_155 = t;
    {
      ATerm m_70 = t;
      if((PushChoice() == 0))
        {
          static ATerm t_17 (ATerm t);
          static ATerm t_17 (ATerm t)
          {
            t = SRTS_one(w_17, t);
            return(t);
          }
          t = _2_0(_id, t_17, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_70;
        }
    }
    t = l_155;
    return(t);
  }
  t = xtc_table2aterm_2_0(o_17, s_17, t);
  t = xtc_save_file_0_1(d_5, t);
  return(t);
}
ATerm xtc_save_0_0 (ATerm t)
{
  ATerm n_155 = NULL,o_155 = NULL;
  n_155 = t;
  t = xtc_location_0_0(t);
  o_155 = t;
  t = n_155;
  t = xtc_save_0_1(o_155, t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm c_5, ATerm t)
{
  ATerm n_70 = t;
  int o_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_155 = NULL;
      p_155 = t;
      t = c_5;
      {
        ATerm p_70 = t;
        int q_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(q_70);
          }
        else
          {
            t = p_70;
            t = xtc_create_file_0_0(t);
          }
      }
      t = p_155;
      LocalPopChoice(o_70);
      {
        ATerm q_155 = NULL;
        q_155 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_5, q_155);
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = n_70;
      {
        ATerm r_155 = NULL;
        t = term_u_70;
        r_155 = t;
        t = c_5;
        t = err_0_1(r_155, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_save_file_0_0 (ATerm t)
{
  ATerm s_155 = NULL,t_155 = NULL;
  s_155 = t;
  t = xtc_location_0_0(t);
  t_155 = t;
  t = s_155;
  t = xtc_save_file_0_1(t_155, t);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm v_70 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_70;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL;
  if(match_cons(t, sym__2))
    {
      u_155 = ATgetArgument(t, 0);
      v_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_155;
  {
    ATerm x_70 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_70;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, u_155, v_155);
  t = w_42(u_155, v_155, t);
  if(match_cons(t, sym__2))
    {
      ATerm c_71 = ATgetArgument(t, 0);
      w_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_155, w_155);
  return(t);
}
static ATerm u_42 (ATerm a_5, ATerm z_4, ATerm t)
{
  ATerm x_155 = NULL,y_155 = NULL,z_155 = NULL,a_156 = NULL;
  y_155 = t;
  t = a_5;
  {
    ATerm d_71 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_71;
      }
  }
  t = y_155;
  if(match_cons(t, sym__2))
    {
      z_155 = ATgetArgument(t, 0);
      a_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_42(z_155, a_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm f_71 = ATgetArgument(t, 0);
      x_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_5, x_155);
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm b_156 = NULL,c_156 = NULL,d_156 = NULL;
  if(match_cons(t, sym__2))
    {
      b_156 = ATgetArgument(t, 0);
      c_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_156;
  t = file_exists_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, b_156, c_156);
  t = w_42(b_156, c_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm l_71 = ATgetArgument(t, 0);
      d_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_156, d_156);
  return(t);
}
static ATerm v_42 (ATerm x_4, ATerm w_4, ATerm t)
{
  ATerm e_156 = NULL,f_156 = NULL,g_156 = NULL,h_156 = NULL;
  f_156 = t;
  t = x_4;
  t = file_exists_0_0(t);
  t = f_156;
  if(match_cons(t, sym__2))
    {
      g_156 = ATgetArgument(t, 0);
      h_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_42(g_156, h_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm m_71 = ATgetArgument(t, 0);
      e_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_4, e_156);
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm i_156 = NULL,j_156 = NULL;
  if(match_cons(t, sym__2))
    {
      i_156 = ATgetArgument(t, 0);
      j_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_42(i_156, j_156, t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm n_71 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_XtcImported_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_71;
    }
  return(t);
}
static ATerm w_42 (ATerm n_0, ATerm i_0, ATerm t)
{
  ATerm k_156 = NULL,l_156 = NULL,n_156 = NULL;
  t = i_0;
  {
    ATerm o_71 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(x_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_71;
      }
  }
  t = i_0;
  t = filter_1_0(y_17, t);
  l_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_0, (ATerm) ATinsert(ATempty, term_p_71));
  t = union_0_0(t);
  k_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_s_71), l_156);
  t = conc_0_0(t);
  n_156 = t;
  t = n_0;
  t = xtc_load_0_1(n_156, t);
  t = (ATerm) ATmakeAppl(sym__2, n_0, k_156);
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
static ATerm z_17 (ATerm t)
{
  ATerm p_156 = NULL,q_156 = NULL,r_156 = NULL;
  if(match_cons(t, sym__2))
    {
      p_156 = ATgetArgument(t, 0);
      q_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_156;
  t = file_exists_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, p_156, q_156);
  t = w_42(p_156, q_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm t_71 = ATgetArgument(t, 0);
      r_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_156, r_156);
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm o_156 = NULL;
  t = term_a_68;
  t = table_getlist_0_0(t);
  t = SRTS_one(z_17, t);
  o_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_68, o_156);
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm b_18 (ATerm t)
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
  t = file_exists_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_156, u_156);
  t = w_42(t_156, u_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm u_71 = ATgetArgument(t, 0);
      v_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_156, v_156);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm w_156 = NULL,x_156 = NULL,y_156 = NULL;
  if(match_cons(t, sym__2))
    {
      w_156 = ATgetArgument(t, 0);
      x_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_156;
  {
    ATerm v_71 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_71;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, w_156, x_156);
  t = w_42(w_156, x_156, t);
  if(match_cons(t, sym__2))
    {
      ATerm y_71 = ATgetArgument(t, 0);
      y_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_156, y_156);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm s_156 = NULL;
  t = term_a_68;
  t = table_getlist_0_0(t);
  {
    ATerm z_71 = t;
    int a_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(b_18, t);
        LocalPopChoice(a_72);
      }
    else
      {
        t = z_71;
        t = SRTS_one(c_18, t);
      }
  }
  s_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_68, s_156);
  t = table_putlist_0_0(t);
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm e_0, ATerm t)
{
  ATerm z_156 = NULL,a_157 = NULL,b_157 = NULL,c_157 = NULL,z_32 = NULL;
  c_157 = t;
  if(match_cons(t, sym_Repository_1))
    {
      a_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_157);
  z_156 = t;
  t = a_157;
  {
    static ATerm m_18 (ATerm t);
    static ATerm m_18 (ATerm t)
    {
      t = xtc_register_0_1(e_0, t);
      return(t);
    }
    t = map_1_0(m_18, t);
  }
  b_157 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, b_157);
  z_32 = t;
  t = SSLsetAnnotations(z_32, z_156);
  return(t);
}
ATerm xtc_aterm2table_0_0 (ATerm t)
{
  ATerm d_157 = NULL,e_157 = NULL,f_157 = NULL,g_157 = NULL,h_157 = NULL,n_34 = NULL;
  d_157 = t;
  t = (ATerm) ATempty;
  e_157 = t;
  t = d_157;
  if(match_cons(t, sym_Repository_1))
    {
      g_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_157);
  f_157 = t;
  t = g_157;
  {
    static ATerm n_18 (ATerm t);
    static ATerm n_18 (ATerm t)
    {
      t = xtc_register_0_1(e_157, t);
      return(t);
    }
    t = map_1_0(n_18, t);
  }
  h_157 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, h_157);
  n_34 = t;
  t = SSLsetAnnotations(n_34, f_157);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
ATerm xtc_is_imported_0_0 (ATerm t)
{
  static ATerm r_18 (ATerm t);
  static ATerm r_18 (ATerm t)
  {
    t = SRTS_one(s_18, t);
    return(t);
  }
  t = _2_0(_id, r_18, t);
  return(t);
}
ATerm xtc_ref2aterm_2_0 (ATerm y_26 (ATerm), ATerm b_27 (ATerm), ATerm t)
{
  ATerm b_72 = t;
  int c_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_68;
      t = table_getlist_0_0(t);
      t = filter_1_0(y_26, t);
      {
        static ATerm u_18 (ATerm t);
        static ATerm u_18 (ATerm t)
        {
          static ATerm v_18 (ATerm t);
          static ATerm v_18 (ATerm t)
          {
            t = filter_1_0(b_27, t);
            return(t);
          }
          t = _2_0(_id, v_18, t);
          return(t);
        }
        t = SRTS_some(u_18, t);
      }
      {
        ATerm d_72 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_72;
          }
      }
      LocalPopChoice(c_72);
      {
        ATerm n_157 = NULL;
        n_157 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Reference_1, n_157));
      }
    }
  else
    {
      t = b_72;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm q_157 = NULL,r_157 = NULL,s_157 = NULL;
  s_157 = t;
  t = Fst_0_0(t);
  q_157 = t;
  t = s_157;
  t = Snd_0_0(t);
  {
    ATerm h_72 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_72;
      }
  }
  r_157 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, q_157, r_157);
  return(t);
}
ATerm xtc_reg2aterm_1_0 (ATerm t_26 (ATerm), ATerm t)
{
  t = term_j_67;
  t = table_getlist_0_0(t);
  {
    static ATerm j_19 (ATerm t);
    static ATerm j_19 (ATerm t)
    {
      static ATerm o_19 (ATerm t);
      static ATerm o_19 (ATerm t)
      {
        t = filter_1_0(t_26, t);
        return(t);
      }
      t = _2_0(_id, o_19, t);
      return(t);
    }
    t = map_1_0(j_19, t);
  }
  t = filter_1_0(p_19, t);
  return(t);
}
ATerm xtc_table2aterm_2_0 (ATerm r_26 (ATerm), ATerm s_26 (ATerm), ATerm t)
{
  ATerm t_157 = NULL;
  static ATerm q_19 (ATerm t);
  static ATerm r_19 (ATerm t);
  static ATerm q_19 (ATerm t)
  {
    t = xtc_reg2aterm_1_0(r_26, t);
    return(t);
  }
  static ATerm r_19 (ATerm t)
  {
    t = xtc_ref2aterm_2_0(r_26, s_26, t);
    return(t);
  }
  t = split_2_0(q_19, r_19, t);
  t = conc_0_0(t);
  t_157 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, t_157);
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
ATerm Tool_1_0 (ATerm q_26 (ATerm), ATerm t)
{
  ATerm u_157 = NULL,w_157 = NULL,x_157 = NULL,y_157 = NULL,z_34 = NULL;
  y_157 = t;
  if(match_cons(t, sym_Tool_1))
    {
      w_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_157);
  u_157 = t;
  t = w_157;
  t = q_26(t);
  x_157 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_157);
  z_34 = t;
  t = SSLsetAnnotations(z_34, u_157);
  return(t);
}
ATerm XtcConf_4_0 (ATerm d_26 (ATerm), ATerm e_26 (ATerm), ATerm l_26 (ATerm), ATerm p_26 (ATerm), ATerm t)
{
  ATerm z_157 = NULL,a_158 = NULL,b_158 = NULL,c_158 = NULL,d_158 = NULL,e_158 = NULL,f_158 = NULL,g_158 = NULL,h_158 = NULL,i_158 = NULL,l_36 = NULL;
  i_158 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      a_158 = ATgetArgument(t, 0);
      b_158 = ATgetArgument(t, 1);
      c_158 = ATgetArgument(t, 2);
      d_158 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_158);
  z_157 = t;
  t = a_158;
  t = d_26(t);
  e_158 = t;
  t = b_158;
  t = e_26(t);
  f_158 = t;
  t = c_158;
  t = l_26(t);
  g_158 = t;
  t = d_158;
  t = p_26(t);
  h_158 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, e_158, f_158, g_158, h_158);
  l_36 = t;
  t = SSLsetAnnotations(l_36, z_157);
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
ATerm Template_2_0 (ATerm b_26 (ATerm), ATerm c_26 (ATerm), ATerm t)
{
  ATerm j_158 = NULL,k_158 = NULL,l_158 = NULL,n_158 = NULL,o_158 = NULL,p_158 = NULL,n_36 = NULL;
  p_158 = t;
  if(match_cons(t, sym_Template_2))
    {
      k_158 = ATgetArgument(t, 0);
      l_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_158);
  j_158 = t;
  t = k_158;
  t = b_26(t);
  n_158 = t;
  t = l_158;
  t = c_26(t);
  o_158 = t;
  t = (ATerm) ATmakeAppl(sym_Template_2, n_158, o_158);
  n_36 = t;
  t = SSLsetAnnotations(n_36, j_158);
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
ATerm Layout_1_0 (ATerm y_25 (ATerm), ATerm t)
{
  ATerm q_158 = NULL,r_158 = NULL,s_158 = NULL,t_158 = NULL,p_36 = NULL;
  t_158 = t;
  if(match_cons(t, sym_Layout_1))
    {
      r_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_158);
  q_158 = t;
  t = r_158;
  t = y_25(t);
  s_158 = t;
  t = (ATerm) ATmakeAppl(sym_Layout_1, s_158);
  p_36 = t;
  t = SSLsetAnnotations(p_36, q_158);
  return(t);
}
ATerm TOr_2_0 (ATerm w_25 (ATerm), ATerm x_25 (ATerm), ATerm t)
{
  ATerm u_158 = NULL,v_158 = NULL,w_158 = NULL,x_158 = NULL,y_158 = NULL,z_158 = NULL,y_36 = NULL;
  z_158 = t;
  if(match_cons(t, sym_TOr_2))
    {
      v_158 = ATgetArgument(t, 0);
      w_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_158);
  u_158 = t;
  t = v_158;
  t = w_25(t);
  x_158 = t;
  t = w_158;
  t = x_25(t);
  y_158 = t;
  t = (ATerm) ATmakeAppl(sym_TOr_2, x_158, y_158);
  y_36 = t;
  t = SSLsetAnnotations(y_36, u_158);
  return(t);
}
ATerm TVarSpec_1_0 (ATerm v_25 (ATerm), ATerm t)
{
  ATerm a_159 = NULL,b_159 = NULL,c_159 = NULL,d_159 = NULL,f_37 = NULL;
  d_159 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      b_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_159);
  a_159 = t;
  t = b_159;
  t = v_25(t);
  c_159 = t;
  t = (ATerm) ATmakeAppl(sym_TVarSpec_1, c_159);
  f_37 = t;
  t = SSLsetAnnotations(f_37, a_159);
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
ATerm TVarOpt_4_0 (ATerm r_25 (ATerm), ATerm s_25 (ATerm), ATerm t_25 (ATerm), ATerm u_25 (ATerm), ATerm t)
{
  ATerm e_159 = NULL,f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL,j_159 = NULL,k_159 = NULL,l_159 = NULL,m_159 = NULL,n_159 = NULL,q_37 = NULL;
  n_159 = t;
  if(match_cons(t, sym_TVarOpt_4))
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
  t = r_25(t);
  j_159 = t;
  t = g_159;
  t = s_25(t);
  k_159 = t;
  t = h_159;
  t = t_25(t);
  l_159 = t;
  t = i_159;
  t = u_25(t);
  m_159 = t;
  t = (ATerm) ATmakeAppl(sym_TVarOpt_4, j_159, k_159, l_159, m_159);
  q_37 = t;
  t = SSLsetAnnotations(q_37, e_159);
  return(t);
}
ATerm TVarOne_4_0 (ATerm n_25 (ATerm), ATerm o_25 (ATerm), ATerm p_25 (ATerm), ATerm q_25 (ATerm), ATerm t)
{
  ATerm o_159 = NULL,p_159 = NULL,q_159 = NULL,r_159 = NULL,s_159 = NULL,t_159 = NULL,u_159 = NULL,v_159 = NULL,w_159 = NULL,x_159 = NULL,s_37 = NULL;
  x_159 = t;
  if(match_cons(t, sym_TVarOne_4))
    {
      p_159 = ATgetArgument(t, 0);
      q_159 = ATgetArgument(t, 1);
      r_159 = ATgetArgument(t, 2);
      s_159 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_159);
  o_159 = t;
  t = p_159;
  t = n_25(t);
  t_159 = t;
  t = q_159;
  t = o_25(t);
  u_159 = t;
  t = r_159;
  t = p_25(t);
  v_159 = t;
  t = s_159;
  t = q_25(t);
  w_159 = t;
  t = (ATerm) ATmakeAppl(sym_TVarOne_4, t_159, u_159, v_159, w_159);
  s_37 = t;
  t = SSLsetAnnotations(s_37, o_159);
  return(t);
}
ATerm TVarPlus_4_0 (ATerm j_25 (ATerm), ATerm k_25 (ATerm), ATerm l_25 (ATerm), ATerm m_25 (ATerm), ATerm t)
{
  ATerm y_159 = NULL,a_160 = NULL,b_160 = NULL,c_160 = NULL,d_160 = NULL,e_160 = NULL,f_160 = NULL,g_160 = NULL,h_160 = NULL,i_160 = NULL,u_37 = NULL;
  i_160 = t;
  if(match_cons(t, sym_TVarPlus_4))
    {
      a_160 = ATgetArgument(t, 0);
      b_160 = ATgetArgument(t, 1);
      c_160 = ATgetArgument(t, 2);
      d_160 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_160);
  y_159 = t;
  t = a_160;
  t = j_25(t);
  e_160 = t;
  t = b_160;
  t = k_25(t);
  f_160 = t;
  t = c_160;
  t = l_25(t);
  g_160 = t;
  t = d_160;
  t = m_25(t);
  h_160 = t;
  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, e_160, f_160, g_160, h_160);
  u_37 = t;
  t = SSLsetAnnotations(u_37, y_159);
  return(t);
}
ATerm TVarStar_4_0 (ATerm e_25 (ATerm), ATerm f_25 (ATerm), ATerm g_25 (ATerm), ATerm i_25 (ATerm), ATerm t)
{
  ATerm j_160 = NULL,k_160 = NULL,l_160 = NULL,m_160 = NULL,n_160 = NULL,o_160 = NULL,p_160 = NULL,q_160 = NULL,r_160 = NULL,s_160 = NULL,w_37 = NULL;
  s_160 = t;
  if(match_cons(t, sym_TVarStar_4))
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
  t = e_25(t);
  o_160 = t;
  t = l_160;
  t = f_25(t);
  p_160 = t;
  t = m_160;
  t = g_25(t);
  q_160 = t;
  t = n_160;
  t = i_25(t);
  r_160 = t;
  t = (ATerm) ATmakeAppl(sym_TVarStar_4, o_160, p_160, q_160, r_160);
  w_37 = t;
  t = SSLsetAnnotations(w_37, j_160);
  return(t);
}
ATerm Default_1_0 (ATerm d_25 (ATerm), ATerm t)
{
  ATerm t_160 = NULL,u_160 = NULL,v_160 = NULL,w_160 = NULL,d_38 = NULL;
  w_160 = t;
  if(match_cons(t, sym_Default_1))
    {
      u_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_160);
  t_160 = t;
  t = u_160;
  t = d_25(t);
  v_160 = t;
  t = (ATerm) ATmakeAppl(sym_Default_1, v_160);
  d_38 = t;
  t = SSLsetAnnotations(d_38, t_160);
  return(t);
}
ATerm Values_1_0 (ATerm c_25 (ATerm), ATerm t)
{
  ATerm x_160 = NULL,y_160 = NULL,z_160 = NULL,a_161 = NULL,y_39 = NULL;
  a_161 = t;
  if(match_cons(t, sym_Values_1))
    {
      y_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_161);
  x_160 = t;
  t = y_160;
  t = c_25(t);
  z_160 = t;
  t = (ATerm) ATmakeAppl(sym_Values_1, z_160);
  y_39 = t;
  t = SSLsetAnnotations(y_39, x_160);
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
ATerm Type_1_0 (ATerm b_25 (ATerm), ATerm t)
{
  ATerm b_161 = NULL,c_161 = NULL,d_161 = NULL,e_161 = NULL,a_40 = NULL;
  e_161 = t;
  if(match_cons(t, sym_Type_1))
    {
      c_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_161);
  b_161 = t;
  t = c_161;
  t = b_25(t);
  d_161 = t;
  t = (ATerm) ATmakeAppl(sym_Type_1, d_161);
  a_40 = t;
  t = SSLsetAnnotations(a_40, b_161);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm z_24 (ATerm), ATerm a_25 (ATerm), ATerm t)
{
  ATerm f_161 = NULL,h_161 = NULL,i_161 = NULL,j_161 = NULL,k_161 = NULL,l_161 = NULL,c_40 = NULL;
  l_161 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      h_161 = ATgetArgument(t, 0);
      i_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_161);
  f_161 = t;
  t = h_161;
  t = z_24(t);
  j_161 = t;
  t = i_161;
  t = a_25(t);
  k_161 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, j_161, k_161);
  c_40 = t;
  t = SSLsetAnnotations(c_40, f_161);
  return(t);
}
ATerm XtcQuery_1_0 (ATerm x_24 (ATerm), ATerm t)
{
  ATerm m_161 = NULL,n_161 = NULL,o_161 = NULL,p_161 = NULL,g_40 = NULL;
  p_161 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      n_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_161);
  m_161 = t;
  t = n_161;
  t = x_24(t);
  o_161 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, o_161);
  g_40 = t;
  t = SSLsetAnnotations(g_40, m_161);
  return(t);
}
ATerm XtcMeta_2_0 (ATerm v_24 (ATerm), ATerm w_24 (ATerm), ATerm t)
{
  ATerm q_161 = NULL,s_161 = NULL,t_161 = NULL,u_161 = NULL,v_161 = NULL,w_161 = NULL,j_40 = NULL;
  w_161 = t;
  if(match_cons(t, sym_XtcMeta_2))
    {
      s_161 = ATgetArgument(t, 0);
      t_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_161);
  q_161 = t;
  t = s_161;
  t = v_24(t);
  u_161 = t;
  t = t_161;
  t = w_24(t);
  v_161 = t;
  t = (ATerm) ATmakeAppl(sym_XtcMeta_2, u_161, v_161);
  j_40 = t;
  t = SSLsetAnnotations(j_40, q_161);
  return(t);
}
ATerm XtcInherit_2_0 (ATerm t_24 (ATerm), ATerm u_24 (ATerm), ATerm t)
{
  ATerm x_161 = NULL,y_161 = NULL,z_161 = NULL,a_162 = NULL,b_162 = NULL,c_162 = NULL,l_40 = NULL;
  c_162 = t;
  if(match_cons(t, sym_XtcInherit_2))
    {
      y_161 = ATgetArgument(t, 0);
      z_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_162);
  x_161 = t;
  t = y_161;
  t = t_24(t);
  a_162 = t;
  t = z_161;
  t = u_24(t);
  b_162 = t;
  t = (ATerm) ATmakeAppl(sym_XtcInherit_2, a_162, b_162);
  l_40 = t;
  t = SSLsetAnnotations(l_40, x_161);
  return(t);
}
ATerm XtcModel_2_0 (ATerm r_24 (ATerm), ATerm s_24 (ATerm), ATerm t)
{
  ATerm d_162 = NULL,e_162 = NULL,f_162 = NULL,g_162 = NULL,h_162 = NULL,j_162 = NULL,r_40 = NULL;
  j_162 = t;
  if(match_cons(t, sym_XtcModel_2))
    {
      e_162 = ATgetArgument(t, 0);
      f_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_162);
  d_162 = t;
  t = e_162;
  t = r_24(t);
  g_162 = t;
  t = f_162;
  t = s_24(t);
  h_162 = t;
  t = (ATerm) ATmakeAppl(sym_XtcModel_2, g_162, h_162);
  r_40 = t;
  t = SSLsetAnnotations(r_40, d_162);
  return(t);
}
ATerm XtcContracts_1_0 (ATerm q_24 (ATerm), ATerm t)
{
  ATerm k_162 = NULL,l_162 = NULL,m_162 = NULL,n_162 = NULL,k_41 = NULL;
  n_162 = t;
  if(match_cons(t, sym_XtcContracts_1))
    {
      l_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_162);
  k_162 = t;
  t = l_162;
  t = q_24(t);
  m_162 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContracts_1, m_162);
  k_41 = t;
  t = SSLsetAnnotations(k_41, k_162);
  return(t);
}
ATerm XtcDesc_1_0 (ATerm o_24 (ATerm), ATerm t)
{
  ATerm o_162 = NULL,p_162 = NULL,q_162 = NULL,r_162 = NULL,m_41 = NULL;
  r_162 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      p_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_162);
  o_162 = t;
  t = p_162;
  t = o_24(t);
  q_162 = t;
  t = (ATerm) ATmakeAppl(sym_XtcDesc_1, q_162);
  m_41 = t;
  t = SSLsetAnnotations(m_41, o_162);
  return(t);
}
ATerm XT_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XT_0)))
    _fail(t);
  return(t);
}
ATerm Exec_1_0 (ATerm n_24 (ATerm), ATerm t)
{
  ATerm s_162 = NULL,t_162 = NULL,u_162 = NULL,v_162 = NULL,o_41 = NULL;
  v_162 = t;
  if(match_cons(t, sym_Exec_1))
    {
      t_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_162);
  s_162 = t;
  t = t_162;
  t = n_24(t);
  u_162 = t;
  t = (ATerm) ATmakeAppl(sym_Exec_1, u_162);
  o_41 = t;
  t = SSLsetAnnotations(o_41, s_162);
  return(t);
}
ATerm XTService_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XTService_0)))
    _fail(t);
  return(t);
}
ATerm HTTP_1_0 (ATerm m_24 (ATerm), ATerm t)
{
  ATerm w_162 = NULL,x_162 = NULL,y_162 = NULL,z_162 = NULL,q_41 = NULL;
  z_162 = t;
  if(match_cons(t, sym_HTTP_1))
    {
      x_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_162);
  w_162 = t;
  t = x_162;
  t = m_24(t);
  y_162 = t;
  t = (ATerm) ATmakeAppl(sym_HTTP_1, y_162);
  q_41 = t;
  t = SSLsetAnnotations(q_41, w_162);
  return(t);
}
ATerm Streams_3_0 (ATerm j_24 (ATerm), ATerm k_24 (ATerm), ATerm l_24 (ATerm), ATerm t)
{
  ATerm a_163 = NULL,b_163 = NULL,c_163 = NULL,d_163 = NULL,e_163 = NULL,f_163 = NULL,g_163 = NULL,h_163 = NULL,x_41 = NULL;
  h_163 = t;
  if(match_cons(t, sym_Streams_3))
    {
      b_163 = ATgetArgument(t, 0);
      c_163 = ATgetArgument(t, 1);
      d_163 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_163);
  a_163 = t;
  t = b_163;
  t = j_24(t);
  e_163 = t;
  t = c_163;
  t = k_24(t);
  f_163 = t;
  t = d_163;
  t = l_24(t);
  g_163 = t;
  t = (ATerm) ATmakeAppl(sym_Streams_3, e_163, f_163, g_163);
  x_41 = t;
  t = SSLsetAnnotations(x_41, a_163);
  return(t);
}
ATerm Error_1_0 (ATerm i_24 (ATerm), ATerm t)
{
  ATerm i_163 = NULL,j_163 = NULL,k_163 = NULL,l_163 = NULL,t_42 = NULL;
  l_163 = t;
  if(match_cons(t, sym_Error_1))
    {
      j_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_163);
  i_163 = t;
  t = j_163;
  t = i_24(t);
  k_163 = t;
  t = (ATerm) ATmakeAppl(sym_Error_1, k_163);
  t_42 = t;
  t = SSLsetAnnotations(t_42, i_163);
  return(t);
}
ATerm Std_1_0 (ATerm h_24 (ATerm), ATerm t)
{
  ATerm m_163 = NULL,n_163 = NULL,o_163 = NULL,p_163 = NULL,y_42 = NULL;
  p_163 = t;
  if(match_cons(t, sym_Std_1))
    {
      n_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_163);
  m_163 = t;
  t = n_163;
  t = h_24(t);
  o_163 = t;
  t = (ATerm) ATmakeAppl(sym_Std_1, o_163);
  y_42 = t;
  t = SSLsetAnnotations(y_42, m_163);
  return(t);
}
ATerm File_1_0 (ATerm g_24 (ATerm), ATerm t)
{
  ATerm q_163 = NULL,r_163 = NULL,s_163 = NULL,t_163 = NULL,a_43 = NULL;
  t_163 = t;
  if(match_cons(t, sym_File_1))
    {
      r_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_163);
  q_163 = t;
  t = r_163;
  t = g_24(t);
  s_163 = t;
  t = (ATerm) ATmakeAppl(sym_File_1, s_163);
  a_43 = t;
  t = SSLsetAnnotations(a_43, q_163);
  return(t);
}
ATerm Option_1_0 (ATerm f_24 (ATerm), ATerm t)
{
  ATerm u_163 = NULL,v_163 = NULL,w_163 = NULL,x_163 = NULL,e_43 = NULL;
  x_163 = t;
  if(match_cons(t, sym_Option_1))
    {
      v_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_163);
  u_163 = t;
  t = v_163;
  t = f_24(t);
  w_163 = t;
  t = (ATerm) ATmakeAppl(sym_Option_1, w_163);
  e_43 = t;
  t = SSLsetAnnotations(e_43, u_163);
  return(t);
}
ATerm URL_1_0 (ATerm e_24 (ATerm), ATerm t)
{
  ATerm z_163 = NULL,a_164 = NULL,b_164 = NULL,c_164 = NULL,g_43 = NULL;
  c_164 = t;
  if(match_cons(t, sym_URL_1))
    {
      a_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_164);
  z_163 = t;
  t = a_164;
  t = e_24(t);
  b_164 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, b_164);
  g_43 = t;
  t = SSLsetAnnotations(g_43, z_163);
  return(t);
}
ATerm FILE_1_0 (ATerm d_24 (ATerm), ATerm t)
{
  ATerm d_164 = NULL,e_164 = NULL,f_164 = NULL,g_164 = NULL,i_43 = NULL;
  g_164 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_164);
  d_164 = t;
  t = e_164;
  t = d_24(t);
  f_164 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_164);
  i_43 = t;
  t = SSLsetAnnotations(i_43, d_164);
  return(t);
}
ATerm Arguments_1_0 (ATerm c_24 (ATerm), ATerm t)
{
  ATerm h_164 = NULL,i_164 = NULL,k_164 = NULL,l_164 = NULL,m_43 = NULL;
  l_164 = t;
  if(match_cons(t, sym_Arguments_1))
    {
      i_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_164);
  h_164 = t;
  t = i_164;
  t = c_24(t);
  k_164 = t;
  t = (ATerm) ATmakeAppl(sym_Arguments_1, k_164);
  m_43 = t;
  t = SSLsetAnnotations(m_43, h_164);
  return(t);
}
ATerm XtcContract_3_0 (ATerm z_23 (ATerm), ATerm a_24 (ATerm), ATerm b_24 (ATerm), ATerm t)
{
  ATerm m_164 = NULL,n_164 = NULL,o_164 = NULL,p_164 = NULL,q_164 = NULL,r_164 = NULL,s_164 = NULL,t_164 = NULL,s_43 = NULL;
  t_164 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      n_164 = ATgetArgument(t, 0);
      o_164 = ATgetArgument(t, 1);
      p_164 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_164);
  m_164 = t;
  t = n_164;
  t = z_23(t);
  q_164 = t;
  t = o_164;
  t = a_24(t);
  r_164 = t;
  t = p_164;
  t = b_24(t);
  s_164 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, q_164, r_164, s_164);
  s_43 = t;
  t = SSLsetAnnotations(s_43, m_164);
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
ATerm String_1_0 (ATerm y_23 (ATerm), ATerm t)
{
  ATerm u_164 = NULL,v_164 = NULL,w_164 = NULL,x_164 = NULL,u_43 = NULL;
  x_164 = t;
  if(match_cons(t, sym_String_1))
    {
      v_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_164);
  u_164 = t;
  t = v_164;
  t = y_23(t);
  w_164 = t;
  t = (ATerm) ATmakeAppl(sym_String_1, w_164);
  u_43 = t;
  t = SSLsetAnnotations(u_43, u_164);
  return(t);
}
ATerm Definition_2_0 (ATerm w_23 (ATerm), ATerm x_23 (ATerm), ATerm t)
{
  ATerm y_164 = NULL,z_164 = NULL,b_165 = NULL,c_165 = NULL,d_165 = NULL,e_165 = NULL,w_43 = NULL;
  e_165 = t;
  if(match_cons(t, sym_Definition_2))
    {
      z_164 = ATgetArgument(t, 0);
      b_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_165);
  y_164 = t;
  t = z_164;
  t = w_23(t);
  c_165 = t;
  t = b_165;
  t = x_23(t);
  d_165 = t;
  t = (ATerm) ATmakeAppl(sym_Definition_2, c_165, d_165);
  w_43 = t;
  t = SSLsetAnnotations(w_43, y_164);
  return(t);
}
ATerm Reference_1_0 (ATerm v_23 (ATerm), ATerm t)
{
  ATerm f_165 = NULL,g_165 = NULL,h_165 = NULL,i_165 = NULL,c_44 = NULL;
  i_165 = t;
  if(match_cons(t, sym_Reference_1))
    {
      g_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_165);
  f_165 = t;
  t = g_165;
  t = v_23(t);
  h_165 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, h_165);
  c_44 = t;
  t = SSLsetAnnotations(c_44, f_165);
  return(t);
}
ATerm Registration_2_0 (ATerm t_23 (ATerm), ATerm u_23 (ATerm), ATerm t)
{
  ATerm j_165 = NULL,k_165 = NULL,l_165 = NULL,m_165 = NULL,n_165 = NULL,o_165 = NULL,h_44 = NULL;
  o_165 = t;
  if(match_cons(t, sym_Registration_2))
    {
      k_165 = ATgetArgument(t, 0);
      l_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_165);
  j_165 = t;
  t = k_165;
  t = t_23(t);
  m_165 = t;
  t = l_165;
  t = u_23(t);
  n_165 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, m_165, n_165);
  h_44 = t;
  t = SSLsetAnnotations(h_44, j_165);
  return(t);
}
ATerm Repository_1_0 (ATerm s_23 (ATerm), ATerm t)
{
  ATerm p_165 = NULL,q_165 = NULL,r_165 = NULL,s_165 = NULL,k_44 = NULL;
  s_165 = t;
  if(match_cons(t, sym_Repository_1))
    {
      q_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_165);
  p_165 = t;
  t = q_165;
  t = s_23(t);
  r_165 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, r_165);
  k_44 = t;
  t = SSLsetAnnotations(k_44, p_165);
  return(t);
}
