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
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
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
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  init_constant_terms();
}
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_e_58;
ATerm term_y_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_k_57;
ATerm term_x_55;
ATerm term_w_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_p_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_d_55;
ATerm term_d_54;
ATerm term_p_53;
ATerm term_e_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_o_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_e_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_l_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_u_48;
ATerm term_r_48;
ATerm term_o_48;
ATerm term_k_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_q_47;
ATerm term_j_47;
ATerm term_c_47;
ATerm term_z_46;
ATerm term_p_46;
ATerm term_m_46;
ATerm term_x_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_c_45;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_m_44;
ATerm term_j_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_a_44;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_l_43;
ATerm term_j_43;
ATerm term_f_43;
ATerm term_w_42;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_j_41;
ATerm term_z_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_l_40;
ATerm term_x_39;
ATerm term_t_39;
ATerm term_f_39;
ATerm term_a_39;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_z_35;
ATerm term_u_35;
ATerm term_c_35;
ATerm term_a_35;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_e_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_q_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_f_19;
ATerm term_n_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_b_17;
void init_constant_terms (void)
{
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_r_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_25, term_d_25, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_26, term_i_17, term_g_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_26, term_v_22, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_26, term_q_26, term_r_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_26, term_w_26, term_x_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_27, term_g_27, term_h_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_27, term_k_27, term_n_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_27, term_q_27, term_r_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_27, term_y_27, term_z_27);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_28, term_g_28, term_j_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_28, term_m_28, term_n_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_28, term_z_28, term_a_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_29, term_e_29, term_f_29);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_29, term_m_29, term_n_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_29, term_y_29, term_z_29);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_30, term_f_30, term_g_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_30, term_p_30, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_30, term_t_30, term_y_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_31, term_b_31, term_i_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_31, term_l_31, term_m_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_31, term_t_31, term_u_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_31, term_x_31, term_y_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_32, term_b_32, term_c_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_32, term_t_32, term_u_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_32, term_x_32, term_y_32);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_33, term_b_33, term_c_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_33, term_n_33, term_o_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_33, term_r_33, term_s_33);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_t_41);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_a_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_x_22);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_x_22);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_x_22);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_x_22);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym__2, term_u_48, term_x_22);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym__2, term_h_17, term_b_17);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym__2, term_s_49, term_x_22);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym__2, term_x_49, term_x_22);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym__2, term_e_50, term_x_22);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym__2, term_l_52, term_m_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__3, term_l_52, term_m_52, (ATerm) ATempty);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.1", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_d_55);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym__2, term_h_17, term_d_25);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_b_17);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATempty);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm crush_2 (ATerm, ATerm g_90 (ATerm), ATerm h_90 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_94 (ATerm));
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm q_102 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ac2abox_0 (ATerm);
ATerm s2c_0 (ATerm);
ATerm stratego_cf_0 (ATerm);
ATerm canonicalize_0 (ATerm);
ATerm back_end_0 (ATerm);
ATerm optimize2_0 (ATerm);
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
ATerm if_keep2_1 (ATerm, ATerm d_95 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm e_95 (ATerm));
ATerm AddMain_1 (ATerm, ATerm d_73 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm a_103 (ATerm));
ATerm add_main_0 (ATerm);
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm e_73 (ATerm));
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm x_92 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm y_102 (ATerm), ATerm z_102 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm b_81 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm s_95 (ATerm), ATerm t_95 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm u_95 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm p_102 (ATerm));
ATerm assert_1 (ATerm, ATerm f_91 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_92 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm x_67 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm r_102 (ATerm), ATerm s_102 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm c_94 (ATerm));
ATerm basename_1 (ATerm, ATerm j_89 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_91 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm u_73 (ATerm), ATerm v_73 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_91 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm b_102 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm e_102 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_94 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm debug_1 (ATerm, ATerm j_92 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_73 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm e_94 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm q_87 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_92 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm d_94 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm f_94 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm t_84 (ATerm), ATerm u_84 (ATerm));
ATerm union_1 (ATerm, ATerm p_84 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm d_99 (ATerm));
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
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm q_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm t_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_97 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_99 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_99 (ATerm));
ATerm parse_options_1 (ATerm, ATerm z_98 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_81 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm));
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
        ATerm x_16;
        x_16 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = x_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_86(t);
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
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
                t = foldr_2(t, n_86, o_86);
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
                t = o_86(t);
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
ATerm crush_2 (ATerm t, ATerm g_90 (ATerm), ATerm h_90 (ATerm))
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
      t = foldr_2(t, g_90, h_90);
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
      t = term_b_17;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_94 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_h_17;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_i_17);
        t = geq_0(t);
      }
    }
    t = g_17;
    t = b_94(t);
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
            t = term_j_17;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm g_4 = NULL;
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_n_17;
              t = get_config_0(t);
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_o_17;
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
                t = term_p_17;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_n_17), not_null(c_4)));
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
            t = term_w_17;
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
            t = term_z_17;
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
                t = term_a_18;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_n_17), not_null(r_4)), term_b_18));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(v_4));
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
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_18;
      g_18 = t;
      {
        t = term_b_18;
        t = get_config_0(t);
      }
      t = g_18;
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
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
              t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_i_18));
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
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_n_18);
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
            t = term_n_18;
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm q_18 = t;
              int v_18 = stack_ptr;
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
                        ATerm w_18 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm x_18 = t;
                            int z_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(z_18);
                              }
                            else
                              {
                                t = x_18;
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
                            t = w_18;
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
                  LocalPopChoice(v_18);
                }
              else
                {
                  t = q_18;
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
ATerm xtc_transform_1 (ATerm t, ATerm q_102 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, q_102, e_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_f_19;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_j_19;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_k_19;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_l_19);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm o_19;
    o_19 = t;
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
    t = o_19;
    {
      ATerm b_7 = NULL;
      t = term_p_19;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_p_19);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_q_19)), not_null(w_6));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, i_1, j_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_r_19;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm g_7 = NULL;
    ATerm h_7 = NULL;
    t = pass_verbose_0(t);
    {
      h_7 = t;
      if(((g_7 != NULL) && (g_7 != h_7)))
        _fail(h_7);
      else
        g_7 = h_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_7)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, l_1, m_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm k_7 = NULL;
    ATerm l_7 = NULL;
    t = pass_verbose_0(t);
    {
      l_7 = t;
      if(((k_7 != NULL) && (k_7 != l_7)))
        _fail(l_7);
      else
        k_7 = l_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(k_7)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, n_1, o_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = term_w_19;
      return(t);
    }
    t = debug_1(t, q_1);
    return(t);
  }
  t = if_verbose2_1(t, p_1);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm o_7 = NULL;
        ATerm p_7 = NULL;
        p_7 = t;
        if(((o_7 != NULL) && (o_7 != p_7)))
          _fail(p_7);
        else
          o_7 = p_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(CheckATermList(not_null(o_7)), term_y_19));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, t_1);
      return(t);
    }
    ATerm s_1 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = stratego_cf_0(t);
        {
          t = s2c_0(t);
          {
            t = ac2abox_0(t);
            {
              t = abox2text_0(t);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = term_z_19;
                    return(t);
                  }
                  t = get_outfile_1(t, v_1);
                  return(t);
                }
                t = rename_to_1(t, u_1);
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, r_1, s_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  ATerm x_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, w_1, x_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_b_20;
    return(t);
  }
  ATerm z_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_c_20;
    return(t);
  }
  ATerm b_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm e_8 = NULL;
    ATerm f_8 = NULL;
    t = pass_verbose_0(t);
    {
      f_8 = t;
      if(((e_8 != NULL) && (e_8 != f_8)))
        _fail(f_8);
      else
        e_8 = f_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, c_2, e_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_p_20;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm i_8 = NULL;
    ATerm j_8 = NULL;
    t = pass_verbose_0(t);
    {
      j_8 = t;
      if(((i_8 != NULL) && (i_8 != j_8)))
        _fail(j_8);
      else
        i_8 = j_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(i_8)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, f_2, g_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm i_2 (ATerm t)
    {
      t = term_q_20;
      return(t);
    }
    t = debug_1(t, i_2);
    return(t);
  }
  t = if_verbose2_1(t, h_2);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_8 = NULL;
        ATerm n_8 = NULL;
        n_8 = t;
        if(((m_8 != NULL) && (m_8 != n_8)))
          _fail(n_8);
        else
          m_8 = n_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(CheckATermList(not_null(m_8)), term_r_20));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, l_2);
      return(t);
    }
    ATerm k_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm w_20;
          w_20 = t;
          {
            ATerm x_20 = t;
            if((PushChoice() == 0))
              {
                t = term_y_20;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_20;
              }
          }
          t = w_20;
          t = fusion_0(t);
          return(t);
        }
        t = try_1(t, m_2);
        {
          t = inline_0(t);
          {
            t = compile_match_0(t);
            t = optimize2_0(t);
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, j_2, k_2);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = term_z_20;
    return(t);
  }
  ATerm o_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_a_21;
    return(t);
  }
  ATerm q_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm warnings_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm a_9 = NULL,c_9 = NULL;
    ATerm g_21;
    g_21 = t;
    {
      ATerm b_9 = NULL;
      t = pass_verbose_0(t);
      {
        b_9 = t;
        if(((a_9 != NULL) && (a_9 != b_9)))
          _fail(b_9);
        else
          a_9 = b_9;
      }
    }
    t = g_21;
    {
      ATerm f_9 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm d_9 = NULL;
            ATerm e_9 = NULL;
            e_9 = t;
            if(((d_9 != NULL) && (d_9 != e_9)))
              _fail(e_9);
            else
              d_9 = e_9;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_9)), term_h_21);
            return(t);
          }
          t = map_1(t, t_2);
          {
            f_9 = t;
            if(((c_9 != NULL) && (c_9 != f_9)))
              _fail(f_9);
            else
              c_9 = f_9;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_9)), (ATerm) ATinsert(ATempty, term_q_19)), not_null(a_9));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_i_21;
    return(t);
  }
  ATerm y_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, u_2, y_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    t = term_j_21;
    return(t);
  }
  ATerm c_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, z_2, c_3);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm s_9 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm p_21;
    p_21 = t;
    {
      t = term_q_21;
      t = get_config_0(t);
    }
    t = p_21;
    {
      ATerm y_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(z_21);
        }
      else
        {
          t = y_21;
          {
            t = (ATerm) ATinsert(ATempty, term_a_22);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm e_3 (ATerm t)
        {
          ATerm t_9 = NULL;
          ATerm f_3 (ATerm t)
          {
            t = term_b_22;
            return(t);
          }
          t = get_outfile_1(t, f_3);
          {
            t_9 = t;
            if(((s_9 != NULL) && (s_9 != t_9)))
              _fail(t_9);
            else
              s_9 = t_9;
          }
          return(t);
        }
        t = copy_to_1(t, e_3);
        {
          ATerm g_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_c_22);
            return(t);
          }
          t = say_1(t, g_3);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, d_3);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm d_95 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm i_22;
    i_22 = t;
    {
      ATerm w_9 = NULL;
      ATerm x_9 = NULL;
      t = term_m_22;
      {
        t = get_config_0(t);
        {
          x_9 = t;
          if(((w_9 != NULL) && (w_9 != x_9)))
            _fail(x_9);
          else
            w_9 = x_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_i_17);
        t = geq_0(t);
      }
    }
    t = i_22;
    t = d_95(t);
    return(t);
  }
  t = try_1(t, j_3);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm d_10 = NULL;
  ATerm m_3 (ATerm t)
  {
    t = term_n_22;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm b_10 = NULL;
    ATerm c_10 = NULL;
    t = pass_verbose_0(t);
    {
      c_10 = t;
      if(((b_10 != NULL) && (b_10 != c_10)))
        _fail(c_10);
      else
        b_10 = c_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(b_10)), term_q_19);
    return(t);
  }
  t = xtc_transform_2(t, m_3, q_3);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        ATerm e_10 = NULL;
        ATerm t_3 (ATerm t)
        {
          t = term_q_22;
          return(t);
        }
        t = get_outfile_1(t, t_3);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        return(t);
      }
      t = copy_to_1(t, s_3);
      {
        ATerm w_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_10)), term_t_22);
          return(t);
        }
        t = say_1(t, w_3);
      }
      return(t);
    }
    t = if_keep2_1(t, r_3);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm e_95 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm u_22;
    u_22 = t;
    {
      ATerm i_10 = NULL;
      ATerm j_10 = NULL;
      t = term_m_22;
      {
        t = get_config_0(t);
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), term_v_22);
        t = geq_0(t);
      }
    }
    t = u_22;
    t = e_95(t);
    return(t);
  }
  t = try_1(t, x_3);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Specification_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        ATerm r_10 = NULL;
        ATerm s_10 = NULL;
        t = term_x_22;
        {
          t = d_73(t);
          {
            s_10 = t;
            if(((r_10 != NULL) && (r_10 != s_10)))
              _fail(s_10);
            else
              r_10 = s_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(p_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_y_22, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_10)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm a_103 (ATerm))
{
  t = read_from_0(t);
  {
    t = a_103(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm x_10 = NULL,z_10 = NULL;
  ATerm y_3 (ATerm t)
  {
    ATerm z_22;
    z_22 = t;
    {
      ATerm y_10 = NULL;
      t = term_a_23;
      {
        t = get_config_0(t);
        {
          y_10 = t;
          {
            if(((x_10 != NULL) && (x_10 != y_10)))
              _fail(y_10);
            else
              x_10 = y_10;
            {
              ATerm z_3 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  t = term_b_23;
                  return(t);
                }
                t = debug_1(t, d_4);
                return(t);
              }
              t = if_verbose2_1(t, z_3);
            }
          }
        }
      }
    }
    t = z_22;
    {
      ATerm i_4 (ATerm t)
      {
        ATerm j_4 (ATerm t)
        {
          t = not_null(x_10);
          return(t);
        }
        t = AddMain_1(t, j_4);
        return(t);
      }
      t = xtc_io_transform_1(t, i_4);
    }
    return(t);
  }
  t = try_1(t, y_3);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm l_4 (ATerm t)
      {
        ATerm a_11 = NULL;
        ATerm m_4 (ATerm t)
        {
          t = term_c_23;
          return(t);
        }
        t = get_outfile_1(t, m_4);
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        return(t);
      }
      t = copy_to_1(t, l_4);
      {
        ATerm n_4 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_10)), term_d_23);
          return(t);
        }
        t = say_1(t, n_4);
      }
      return(t);
    }
    t = if_keep3_1(t, k_4);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm i_11 = NULL,j_11 = NULL;
  g_11 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm e_23;
      e_23 = t;
      {
        ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
        t = term_s_23;
        {
          t = table_get_0(t);
          {
            k_11 = t;
            f_11 :
            if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
              {
                l_11 = ATgetFirst((ATermList) k_11);
                m_11 = (ATerm) ATgetNext((ATermList) k_11);
                {
                  if(((j_11 != NULL) && (j_11 != l_11)))
                    _fail(l_11);
                  else
                    j_11 = l_11;
                  {
                    if(((i_11 != NULL) && (i_11 != m_11)))
                      _fail(m_11);
                    else
                      i_11 = m_11;
                    {
                      t = not_null(j_11);
                      {
                        ATerm s_4 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, s_4);
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
      t = e_23;
      {
        ATerm z_4 (ATerm t)
        {
          t = term_m_23;
          return(t);
        }
        t = end_scope_1(t, z_4);
      }
      return(t);
    }
    t = repeat_1(t, o_4);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_17;
        t = get_config_0(t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = term_n_18;
      }
    return(t);
  }
  t = copy_to_1(t, a_5);
  {
    t = term_b_17;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm r_11 = NULL,t_11 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm s_11 = NULL;
    t = e_73(t);
    {
      s_11 = t;
      if(((r_11 != NULL) && (r_11 != s_11)))
        _fail(s_11);
      else
        r_11 = s_11;
    }
  }
  t = v_23;
  {
    ATerm u_11 = NULL;
    t = term_w_23;
    {
      t = get_config_0(t);
      {
        u_11 = t;
        if(((t_11 != NULL) && (t_11 != u_11)))
          _fail(u_11);
        else
          t_11 = u_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), not_null(r_11));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym_stderr_0))
    {
      ATerm d_12 = NULL,f_12 = NULL;
      ATerm x_23;
      x_23 = t;
      {
        ATerm e_12 = NULL;
        t = SSLgetAnnotations(not_null(b_12));
        {
          e_12 = t;
          if(((d_12 != NULL) && (d_12 != e_12)))
            _fail(e_12);
          else
            d_12 = e_12;
        }
      }
      t = x_23;
      {
        ATerm g_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(d_12));
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
        t = not_null(f_12);
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
  ATerm o_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_stdout_0))
    {
      ATerm q_12 = NULL,s_12 = NULL;
      ATerm y_23;
      y_23 = t;
      {
        ATerm r_12 = NULL;
        t = SSLgetAnnotations(not_null(o_12));
        {
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
        }
      }
      t = y_23;
      {
        ATerm t_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(q_12));
        {
          t_12 = t;
          if(((s_12 != NULL) && (s_12 != t_12)))
            _fail(t_12);
          else
            s_12 = t_12;
        }
        t = not_null(s_12);
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
  ATerm f_13 = NULL,g_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym_FILE_1))
    {
      g_13 = ATgetArgument(f_13, 0);
      {
        ATerm z_23 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_13 = NULL;
            ATerm j_13 = NULL;
            t = q_0(t);
            {
              j_13 = t;
              {
                if(((i_13 != NULL) && (i_13 != j_13)))
                  _fail(j_13);
                else
                  i_13 = j_13;
                {
                  ATerm h_24 = t;
                  int i_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(i_24);
                    }
                  else
                    {
                      t = h_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(i_13));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_13));
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = z_23;
            {
              ATerm j_24 = t;
              int k_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_13 = NULL;
                  ATerm m_13 = NULL;
                  t = q_0(t);
                  {
                    m_13 = t;
                    {
                      if(((l_13 != NULL) && (l_13 != m_13)))
                        _fail(m_13);
                      else
                        l_13 = m_13;
                      {
                        ATerm l_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm m_24 = t;
                            int n_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(n_24);
                              }
                            else
                              {
                                t = m_24;
                                {
                                  ATerm r_24 = t;
                                  int s_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(s_24);
                                    }
                                  else
                                    {
                                      t = r_24;
                                      {
                                        ATerm n_13 = NULL;
                                        n_13 = t;
                                        if(((g_13 != NULL) && (g_13 != n_13)))
                                          _fail(n_13);
                                        else
                                          g_13 = n_13;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = l_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(l_13));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_13));
                  ;
                  LocalPopChoice(k_24);
                }
              else
                {
                  t = j_24;
                  {
                    ATerm p_13 = NULL;
                    t = q_0(t);
                    {
                      p_13 = t;
                      if(((g_13 != NULL) && (g_13 != p_13)))
                        _fail(p_13);
                      else
                        g_13 = p_13;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_13));
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
  ATerm y_13 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm v_24;
    v_24 = t;
    {
      t = term_w_24;
      t = get_config_0(t);
    }
    t = v_24;
    {
      ATerm c_5 (ATerm t)
      {
        ATerm z_13 = NULL;
        ATerm d_5 (ATerm t)
        {
          t = term_x_24;
          return(t);
        }
        t = get_outfile_1(t, d_5);
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        return(t);
      }
      t = copy_to_1(t, c_5);
      {
        ATerm y_24;
        y_24 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_a_25);
          t = echo_0(t);
        }
        t = y_24;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, b_5);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm e_14 = NULL,g_14 = NULL;
  ATerm f_14 = NULL;
  t = term_m_22;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = term_d_25;
      }
    {
      f_14 = t;
      if(((e_14 != NULL) && (e_14 != f_14)))
        _fail(f_14);
      else
        e_14 = f_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), term_d_25);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          g_14 = t;
          if(((d_14 != NULL) && (d_14 != g_14)))
            _fail(g_14);
          else
            d_14 = g_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_14)), term_m_22);
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm l_14 = NULL;
  ATerm m_14 = NULL,o_14 = NULL;
  ATerm n_14 = NULL;
  t = term_h_17;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = term_d_25;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_d_25);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_h_17);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm s_14 = NULL;
  ATerm t_14 = NULL;
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_17;
      t = get_config_0(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        t = term_w_23;
        t = get_config_0(t);
      }
    }
  {
    t_14 = t;
    if(((s_14 != NULL) && (s_14 != t_14)))
      _fail(t_14);
    else
      s_14 = t_14;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_14)), term_i_25);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_stdin_0))
    {
      ATerm c_15 = NULL;
      ATerm d_15 = NULL;
      t = term_j_25;
      {
        t = ReadFromFile_0(t);
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
      }
      t = not_null(c_15);
    }
  else
    {
      if(match_cons(a_15, sym_FILE_1))
        {
          b_15 = ATgetArgument(a_15, 0);
          {
            ATerm f_15 = NULL;
            ATerm g_15 = NULL;
            t = not_null(b_15);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
              }
            }
            t = not_null(f_15);
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
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  p_15 = t;
  n_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      s_15 = ATgetArgument(p_15, 1);
      o_15 :
      if(match_cons(q_15, sym_Stream_1))
        {
          r_15 = ATgetArgument(q_15, 0);
          {
            ATerm v_15 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(r_15), not_null(s_15));
            {
              ATerm w_15 = NULL;
              w_15 = t;
              if(((v_15 != NULL) && (v_15 != w_15)))
                _fail(w_15);
              else
                v_15 = w_15;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_15));
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
ATerm WriteToFile_1 (ATerm t, ATerm x_92 (ATerm))
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym__2))
    {
      e_16 = ATgetArgument(d_16, 0);
      f_16 = ATgetArgument(d_16, 1);
      {
        ATerm i_16 = NULL,k_16 = NULL;
        t = not_null(e_16);
        {
          ATerm j_16 = NULL;
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), term_k_25);
            {
              t = open_stream_0(t);
              {
                ATerm l_16 = NULL;
                l_16 = t;
                if(((k_16 != NULL) && (k_16 != l_16)))
                  _fail(l_16);
                else
                  k_16 = l_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(f_16));
                  {
                    t = x_92(t);
                    {
                      t = fclose_0(t);
                      t = not_null(f_16);
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
  ATerm r_16 = NULL;
  ATerm t_16 = NULL;
  r_16 = t;
  {
    ATerm u_16 = NULL;
    t = xtc_new_file_0(t);
    {
      u_16 = t;
      {
        if(((t_16 != NULL) && (t_16 != u_16)))
          _fail(u_16);
        else
          t_16 = u_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), not_null(r_16));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(t_16);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_16));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm y_102 (ATerm), ATerm z_102 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, y_102, z_102);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  t = SSL_close_file(not_null(y_16));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      t = SSL_execvp(not_null(e_17), not_null(f_17));
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
  ATerm k_17 = NULL;
  k_17 = t;
  t = SSL_int_to_string(not_null(k_17));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_UnknownSignal_1))
    {
      t_17 = ATgetArgument(s_17, 0);
      {
        ATerm x_17 = NULL;
        ATerm y_17 = NULL;
        t = not_null(t_17);
        {
          t = int_to_string_0(t);
          {
            y_17 = t;
            if(((x_17 != NULL) && (x_17 != y_17)))
              _fail(y_17);
            else
              x_17 = y_17;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_25), not_null(x_17)), term_n_25);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(s_17, sym_Signal_3))
        {
          t_17 = ATgetArgument(s_17, 0);
          u_17 = ATgetArgument(s_17, 1);
          v_17 = ATgetArgument(s_17, 2);
          {
            ATerm c_18 = NULL;
            ATerm d_18 = NULL;
            t = not_null(u_17);
            {
              t = int_to_string_0(t);
              {
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_17)), term_q_25), not_null(c_18)), term_p_25), not_null(t_17));
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
ATerm fetch_elem_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm k_18 = NULL;
    t = b_81(t);
    {
      k_18 = t;
      if(((j_18 != NULL) && (j_18 != k_18)))
        _fail(k_18);
      else
        j_18 = k_18;
    }
    return(t);
  }
  t = fetch_1(t, g_5);
  t = not_null(j_18);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  {
    ATerm r_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_33), term_p_33), term_l_33), term_z_32), term_v_32), term_d_32), term_z_31), term_v_31), term_n_31), term_j_31), term_z_30), term_r_30), term_h_30), term_c_30), term_u_29), term_g_29), term_b_29), term_x_28), term_k_28), term_a_28), term_s_27), term_o_27), term_i_27), term_y_26), term_u_26), term_o_26), term_l_26), term_b_26);
        {
          ATerm h_5 (ATerm t)
          {
            ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
            r_18 = t;
            o_18 :
            if(match_cons(r_18, sym_Signal_3))
              {
                s_18 = ATgetArgument(r_18, 0);
                t_18 = ATgetArgument(r_18, 1);
                u_18 = ATgetArgument(r_18, 2);
                if(((p_18 != NULL) && (p_18 != t_18)))
                  _fail(t_18);
                else
                  p_18 = t_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, h_5);
        }
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = r_25;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(p_18));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm c_34;
  c_34 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
      b_19 = t;
      a_19 :
      if(match_cons(b_19, sym_WaitStatus_3))
        {
          c_19 = ATgetArgument(b_19, 0);
          d_19 = ATgetArgument(b_19, 1);
          e_19 = ATgetArgument(b_19, 2);
          {
            ATerm h_19 = NULL;
            t = not_null(d_19);
            {
              ATerm d_34 = t;
              if((PushChoice() == 0))
                {
                  ATerm g_19 = NULL;
                  g_19 = t;
                  y_18 :
                  if(!(match_int(g_19, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_34;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm i_19 = NULL;
                    i_19 = t;
                    if(((h_19 != NULL) && (h_19 != i_19)))
                      _fail(i_19);
                    else
                      h_19 = i_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_19)), term_e_34));
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
    t = try_1(t, m_5);
  }
  t = c_34;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  t = SSL_waitpid(not_null(m_19));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm s_95 (ATerm), ATerm t_95 (ATerm))
{
  ATerm t_19 = NULL;
  ATerm v_19 = NULL;
  t_19 = t;
  {
    t = fork_0(t);
    {
      v_19 = t;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_19 = NULL;
            x_19 = t;
            s_19 :
            if(match_int(x_19, 0))
              {
                t = not_null(t_19);
                t = s_95(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(t_19));
              t = t_95(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm g_20 = NULL;
  ATerm n_5 (ATerm t)
  {
    ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
    h_20 = t;
    f_20 :
    if(match_cons(h_20, sym__2))
      {
        i_20 = ATgetArgument(h_20, 0);
        j_20 = ATgetArgument(h_20, 1);
        {
          ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
          if(((g_20 != NULL) && (g_20 != j_20)))
            _fail(j_20);
          else
            g_20 = j_20;
          {
            t = not_null(i_20);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  l_20 = t;
                  d_20 :
                  if(match_cons(l_20, sym_WaitStatus_3))
                    {
                      m_20 = ATgetArgument(l_20, 0);
                      n_20 = ATgetArgument(l_20, 1);
                      o_20 = ATgetArgument(l_20, 2);
                      e_20 :
                      if(match_int(m_20, 0))
                        {
                          t = not_null(g_20);
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
  t = fork_2(t, u_95, n_5);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), not_null(v_20));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, o_5);
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
ATerm xtc_command_1 (ATerm t, ATerm p_102 (ATerm))
{
  ATerm b_21 = NULL;
  ATerm h_34;
  h_34 = t;
  {
    ATerm c_21 = NULL;
    t = p_102(t);
    {
      t = xtc_find_warning_0(t);
      {
        c_21 = t;
        if(((b_21 != NULL) && (b_21 != c_21)))
          _fail(c_21);
        else
          b_21 = c_21;
      }
    }
  }
  t = h_34;
  {
    ATerm m_34;
    m_34 = t;
    {
      ATerm d_21 = NULL;
      ATerm e_21 = NULL;
      e_21 = t;
      if(((d_21 != NULL) && (d_21 != e_21)))
        _fail(e_21);
      else
        d_21 = e_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), not_null(d_21));
        t = call_0(t);
      }
    }
    t = m_34;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym__2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      {
        ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
        ATerm n_34;
        n_34 = t;
        {
          ATerm u_21 = NULL;
          ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
          t = f_91(t);
          {
            u_21 = t;
            {
              if(((r_21 != NULL) && (r_21 != u_21)))
                _fail(u_21);
              else
                r_21 = u_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_21), not_null(n_21), not_null(o_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_34 = t;
                    int p_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), term_r_23);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(p_34);
                      }
                    else
                      {
                        t = o_34;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_21 = t;
                      k_21 :
                      if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
                        {
                          w_21 = ATgetFirst((ATermList) v_21);
                          x_21 = (ATerm) ATgetNext((ATermList) v_21);
                          {
                            if(((s_21 != NULL) && (s_21 != w_21)))
                              _fail(w_21);
                            else
                              s_21 = w_21;
                            {
                              if(((t_21 != NULL) && (t_21 != x_21)))
                                _fail(x_21);
                              else
                                t_21 = x_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_21), term_r_23, (ATerm) ATinsert(CheckATermList(not_null(t_21)), (ATerm) ATinsert(CheckATermList(not_null(s_21)), not_null(n_21))));
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
        t = n_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_92 (ATerm))
{
  ATerm q_34;
  q_34 = t;
  {
    t = q_92(t);
    {
      ATerm p_5 (ATerm t)
      {
        t = term_r_34;
        return(t);
      }
      t = debug_1(t, p_5);
    }
  }
  t = q_34;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  ATerm o_22 (ATerm t)
  {
    ATerm s_34 = t;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
        j_22 = t;
        d_22 :
        if(match_cons(j_22, sym__2))
          {
            k_22 = ATgetArgument(j_22, 0);
            l_22 = ATgetArgument(j_22, 1);
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
        t = s_34;
      }
    {
      ATerm q_5 (ATerm t)
      {
        t = term_t_34;
        return(t);
      }
      t = obsolete_1(t, q_5);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), term_k_25);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm p_22 (ATerm t)
  {
    t = SSL_open_file(not_null(g_22), not_null(h_22));
    return(t);
  }
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym__2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm u_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_22(t);
            ;
            LocalPopChoice(z_34);
          }
        else
          {
            t = u_34;
            t = p_22(t);
          }
      }
    }
  else
    {
      t = o_22(t);
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
  ATerm r_22 = NULL;
  ATerm s_22 = NULL;
  t = term_x_22;
  {
    t = new_0(t);
    {
      s_22 = t;
      if(((r_22 != NULL) && (r_22 != s_22)))
        _fail(s_22);
      else
        r_22 = s_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), term_a_35);
    {
      t = conc_strings_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_5);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm w_22 = NULL;
  t = new_file_0(t);
  {
    w_22 = t;
    {
      ATerm b_35;
      b_35 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), term_k_25);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), term_x_22);
            {
              ATerm s_5 (ATerm t)
              {
                t = term_m_23;
                return(t);
              }
              t = assert_1(t, s_5);
            }
          }
        }
      }
      t = b_35;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_stdin_0))
    {
      ATerm i_23 = NULL;
      ATerm j_23 = NULL;
      ATerm k_23 = NULL;
      t = xtc_new_file_0(t);
      {
        j_23 = t;
        {
          if(((i_23 != NULL) && (i_23 != j_23)))
            _fail(j_23);
          else
            i_23 = j_23;
          {
            ATerm l_23 = NULL;
            t = p_0(t);
            {
              l_23 = t;
              if(((k_23 != NULL) && (k_23 != l_23)))
                _fail(l_23);
              else
                k_23 = l_23;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_23)), term_n_17));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(i_23);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_23));
    }
  else
    {
      if(match_cons(g_23, sym_FILE_1))
        {
          h_23 = ATgetArgument(g_23, 0);
          {
            ATerm n_23 = NULL;
            ATerm o_23 = NULL;
            t = not_null(h_23);
            {
              ATerm p_23 = NULL;
              t = xtc_new_file_0(t);
              {
                o_23 = t;
                {
                  if(((n_23 != NULL) && (n_23 != o_23)))
                    _fail(o_23);
                  else
                    n_23 = o_23;
                  {
                    ATerm q_23 = NULL;
                    t = p_0(t);
                    {
                      q_23 = t;
                      if(((p_23 != NULL) && (p_23 != q_23)))
                        _fail(q_23);
                      else
                        p_23 = q_23;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_23), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_23)), term_n_17), not_null(h_23)), term_c_35));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(n_23);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_23));
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
  ATerm b_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_stdin_0))
    {
      ATerm d_24 = NULL,f_24 = NULL;
      ATerm h_35;
      h_35 = t;
      {
        ATerm e_24 = NULL;
        t = SSLgetAnnotations(not_null(b_24));
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
      }
      t = h_35;
      {
        ATerm g_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(d_24));
        {
          g_24 = t;
          if(((f_24 != NULL) && (f_24 != g_24)))
            _fail(g_24);
          else
            f_24 = g_24;
        }
        t = not_null(f_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm x_67 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_FILE_1))
    {
      q_24 = ATgetArgument(p_24, 0);
      {
        ATerm t_24 = NULL,z_24 = NULL;
        ATerm u_24 = NULL;
        t = SSLgetAnnotations(not_null(p_24));
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
        {
          t = not_null(q_24);
          {
            ATerm l_25 = NULL;
            t = x_67(t);
            {
              z_24 = t;
              {
                ATerm m_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(z_24)), not_null(t_24));
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
ATerm xtc_transform_2 (ATerm t, ATerm r_102 (ATerm), ATerm s_102 (ATerm))
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(l_35);
        }
      else
        {
          t = k_35;
          t = stdin_0(t);
        }
      LocalPopChoice(j_35);
      t = xtc_transform_file_2(t, r_102, s_102);
    }
  else
    {
      t = i_35;
      t = xtc_transform_term_2(t, r_102, s_102);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm m_35;
    m_35 = t;
    {
      ATerm s_25 = NULL;
      ATerm t_25 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_25), term_v_22);
        t = geq_0(t);
      }
    }
    t = m_35;
    t = c_94(t);
    return(t);
  }
  t = try_1(t, u_5);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm j_89 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm v_5 (ATerm t)
    {
      ATerm n_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, v_5);
          ;
          LocalPopChoice(p_35);
        }
      else
        {
          t = n_35;
          {
            ATerm s_35 = t;
            int t_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_5 (ATerm t)
                {
                  ATerm x_25 = NULL;
                  x_25 = t;
                  v_25 :
                  if(!(match_int(x_25, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, w_5, _id);
                ;
                LocalPopChoice(t_35);
              }
            else
              {
                t = s_35;
                {
                  ATerm a_6 (ATerm t)
                  {
                    ATerm y_25 = NULL;
                    y_25 = t;
                    w_25 :
                    if(!(match_int(y_25, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, a_6, j_89);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, v_5);
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
  ATerm e_26 = NULL,f_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym_FILE_1))
    {
      f_26 = ATgetArgument(e_26, 0);
      {
        ATerm h_26 = NULL,i_26 = NULL;
        ATerm j_26 = NULL;
        t = not_null(f_26);
        {
          ATerm k_26 = NULL;
          t = basename_0(t);
          {
            j_26 = t;
            {
              if(((h_26 != NULL) && (h_26 != j_26)))
                _fail(j_26);
              else
                h_26 = j_26;
              {
                ATerm c_6 (ATerm t)
                {
                  ATerm g_6 (ATerm t)
                  {
                    t = term_u_35;
                    return(t);
                  }
                  t = debug_1(t, g_6);
                  return(t);
                }
                t = if_verbose3_1(t, c_6);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_35, not_null(h_26));
                  {
                    t = set_config_0(t);
                    {
                      ATerm a_36 = t;
                      int f_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_n_17;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(f_36);
                        }
                      else
                        {
                          t = a_36;
                          t = not_null(h_26);
                        }
                      {
                        k_26 = t;
                        {
                          if(((i_26 != NULL) && (i_26 != k_26)))
                            _fail(k_26);
                          else
                            i_26 = k_26;
                          {
                            ATerm i_6 (ATerm t)
                            {
                              ATerm j_6 (ATerm t)
                              {
                                t = term_g_36;
                                return(t);
                              }
                              t = debug_1(t, j_6);
                              return(t);
                            }
                            t = if_verbose3_1(t, i_6);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_23, not_null(i_26));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_26));
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
    ATerm k_6 (ATerm t)
    {
      t = term_h_36;
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm s_26 = NULL,z_26 = NULL,b_27 = NULL,d_27 = NULL;
      ATerm i_36;
      i_36 = t;
      {
        ATerm t_26 = NULL;
        t = dep_name_0(t);
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
      }
      t = i_36;
      {
        ATerm k_36;
        k_36 = t;
        {
          ATerm a_27 = NULL;
          t = pass_verbose_0(t);
          {
            a_27 = t;
            if(((z_26 != NULL) && (z_26 != a_27)))
              _fail(a_27);
            else
              z_26 = a_27;
          }
        }
        t = k_36;
        {
          ATerm l_36;
          l_36 = t;
          {
            ATerm c_27 = NULL;
            t = pass_keep_0(t);
            {
              c_27 = t;
              if(((b_27 != NULL) && (b_27 != c_27)))
                _fail(c_27);
              else
                b_27 = c_27;
            }
          }
          t = l_36;
          {
            ATerm e_27 = NULL;
            t = term_m_36;
            {
              t = get_config_0(t);
              {
                e_27 = t;
                if(((d_27 != NULL) && (d_27 != e_27)))
                  _fail(e_27);
                else
                  d_27 = e_27;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_27)), not_null(z_26)), not_null(d_27)), not_null(s_26));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, k_6, l_6);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      t = term_n_36;
      return(t);
    }
    t = debug_1(t, n_6);
    return(t);
  }
  t = if_verbose2_1(t, m_6);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm s_6 (ATerm t)
      {
        ATerm l_27 = NULL;
        ATerm m_27 = NULL;
        m_27 = t;
        if(((l_27 != NULL) && (l_27 != m_27)))
          _fail(m_27);
        else
          l_27 = m_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(CheckATermList(not_null(l_27)), term_o_36));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, s_6);
      return(t);
    }
    ATerm p_6 (ATerm t)
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
    t = profile_p__2(t, o_6, p_6);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t_27 :
  if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
    {
      v_27 = ATgetFirst((ATermList) u_27);
      w_27 = (ATerm) ATgetNext((ATermList) u_27);
      t = not_null(w_27);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym__2))
    {
      d_28 = ATgetArgument(c_28, 0);
      e_28 = ATgetArgument(c_28, 1);
      {
        ATerm q_36;
        q_36 = t;
        {
          ATerm h_28 = NULL;
          ATerm i_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_28), not_null(e_28));
          {
            ATerm s_36 = t;
            int v_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(v_36);
              }
            else
              {
                t = s_36;
                t = (ATerm) ATempty;
              }
            {
              i_28 = t;
              if(((h_28 != NULL) && (h_28 != i_28)))
                _fail(i_28);
              else
                h_28 = i_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_28), not_null(e_28), not_null(h_28));
            t = table_put_0(t);
          }
        }
        t = q_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  ATerm w_36;
  w_36 = t;
  {
    ATerm s_28 = NULL;
    ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
    t = c_91(t);
    {
      s_28 = t;
      {
        if(((r_28 != NULL) && (r_28 != s_28)))
          _fail(s_28);
        else
          r_28 = s_28;
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), term_r_23);
              t = table_get_0(t);
              ;
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            t_28 = t;
            o_28 :
            if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
              {
                u_28 = ATgetFirst((ATermList) t_28);
                v_28 = (ATerm) ATgetNext((ATermList) t_28);
                {
                  if(((q_28 != NULL) && (q_28 != u_28)))
                    _fail(u_28);
                  else
                    q_28 = u_28;
                  {
                    if(((p_28 != NULL) && (p_28 != v_28)))
                      _fail(v_28);
                    else
                      p_28 = v_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_28), term_r_23, not_null(p_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(q_28);
                          {
                            ATerm t_6 (ATerm t)
                            {
                              ATerm w_28 = NULL;
                              w_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(w_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_6);
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
  t = w_36;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  t = SSL_remove(not_null(c_29));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_73 (ATerm), ATerm v_73 (ATerm))
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_73(t);
      t = v_73(t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      {
        t = v_73(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_91 (ATerm))
{
  ATerm h_29 = NULL;
  ATerm f_37;
  f_37 = t;
  {
    ATerm i_29 = NULL;
    ATerm j_29 = NULL;
    t = b_91(t);
    {
      i_29 = t;
      {
        if(((h_29 != NULL) && (h_29 != i_29)))
          _fail(i_29);
        else
          h_29 = i_29;
        {
          ATerm k_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), term_r_23);
          {
            ATerm g_37 = t;
            int h_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_37);
              }
            else
              {
                t = g_37;
                t = (ATerm) ATempty;
              }
            {
              k_29 = t;
              if(((j_29 != NULL) && (j_29 != k_29)))
                _fail(k_29);
              else
                j_29 = k_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_29), term_r_23, (ATerm) ATinsert(CheckATermList(not_null(j_29)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = f_37;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm b_102 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL;
  ATerm u_6 (ATerm t)
  {
    t = term_m_23;
    return(t);
  }
  t = begin_scope_1(t, u_6);
  {
    ATerm v_6 (ATerm t)
    {
      ATerm l_37;
      l_37 = t;
      {
        ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_23;
            t = table_get_0(t);
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          r_29 = t;
          o_29 :
          if(((ATgetType(r_29) == AT_LIST) && !(ATisEmpty(r_29))))
            {
              s_29 = ATgetFirst((ATermList) r_29);
              t_29 = (ATerm) ATgetNext((ATermList) r_29);
              {
                if(((q_29 != NULL) && (q_29 != s_29)))
                  _fail(s_29);
                else
                  q_29 = s_29;
                {
                  if(((p_29 != NULL) && (p_29 != t_29)))
                    _fail(t_29);
                  else
                    p_29 = t_29;
                  {
                    t = not_null(q_29);
                    {
                      ATerm c_7 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, c_7);
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
      t = l_37;
      {
        ATerm d_7 (ATerm t)
        {
          t = term_m_23;
          return(t);
        }
        t = end_scope_1(t, d_7);
      }
      return(t);
    }
    t = restore_always_2(t, b_102, v_6);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm e_102 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL;
        ATerm x_29 = NULL;
        t = term_c_35;
        {
          t = get_config_0(t);
          {
            x_29 = t;
            if(((w_29 != NULL) && (w_29 != x_29)))
              _fail(x_29);
            else
              w_29 = x_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_29));
        ;
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = term_j_25;
      }
    t = e_102(t);
    return(t);
  }
  t = xtc_temp_files_1(t, e_7);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
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
  t = xtc_input_1(t, f_7);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_94 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm c_38;
    c_38 = t;
    {
      ATerm a_30 = NULL;
      ATerm b_30 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), term_d_25);
        t = geq_0(t);
      }
    }
    t = c_38;
    t = a_94(t);
    return(t);
  }
  t = try_1(t, i_7);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_TicksToSeconds(not_null(e_30));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__4))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      m_30 = ATgetArgument(j_30, 2);
      n_30 = ATgetArgument(j_30, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(n_30));
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
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym__2))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      {
        ATerm d_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_30), not_null(x_30));
            ;
            LocalPopChoice(i_38);
          }
        else
          {
            t = d_38;
            t = SSL_addr(not_null(w_30), not_null(x_30));
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
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym__4))
    {
      e_31 = ATgetArgument(d_31, 0);
      f_31 = ATgetArgument(d_31, 1);
      g_31 = ATgetArgument(d_31, 2);
      h_31 = ATgetArgument(d_31, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), not_null(g_31));
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
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      {
        ATerm j_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(q_31), not_null(r_31));
            ;
            LocalPopChoice(k_38);
          }
        else
          {
            t = j_38;
            t = SSL_subtr(not_null(q_31), not_null(r_31));
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
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  i_32 = t;
  f_32 :
  if(match_cons(i_32, sym__2))
    {
      j_32 = ATgetArgument(i_32, 0);
      o_32 = ATgetArgument(i_32, 1);
      g_32 :
      if(match_cons(j_32, sym__4))
        {
          k_32 = ATgetArgument(j_32, 0);
          l_32 = ATgetArgument(j_32, 1);
          m_32 = ATgetArgument(j_32, 2);
          n_32 = ATgetArgument(j_32, 3);
          h_32 :
          if(match_cons(o_32, sym__4))
            {
              p_32 = ATgetArgument(o_32, 0);
              q_32 = ATgetArgument(o_32, 1);
              r_32 = ATgetArgument(o_32, 2);
              s_32 = ATgetArgument(o_32, 3);
              {
                ATerm d_33 = NULL,f_33 = NULL,h_33 = NULL,j_33 = NULL;
                ATerm p_38;
                p_38 = t;
                {
                  ATerm e_33 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_32), not_null(p_32));
                  {
                    t = subt_0(t);
                    {
                      e_33 = t;
                      if(((d_33 != NULL) && (d_33 != e_33)))
                        _fail(e_33);
                      else
                        d_33 = e_33;
                    }
                  }
                }
                t = p_38;
                {
                  ATerm q_38;
                  q_38 = t;
                  {
                    ATerm g_33 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_32), not_null(q_32));
                    {
                      t = subt_0(t);
                      {
                        g_33 = t;
                        if(((f_33 != NULL) && (f_33 != g_33)))
                          _fail(g_33);
                        else
                          f_33 = g_33;
                      }
                    }
                  }
                  t = q_38;
                  {
                    ATerm s_38;
                    s_38 = t;
                    {
                      ATerm i_33 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_32), not_null(r_32));
                      {
                        t = subt_0(t);
                        {
                          i_33 = t;
                          if(((h_33 != NULL) && (h_33 != i_33)))
                            _fail(i_33);
                          else
                            h_33 = i_33;
                        }
                      }
                    }
                    t = s_38;
                    {
                      ATerm k_33 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_32), not_null(s_32));
                      {
                        t = subt_0(t);
                        {
                          k_33 = t;
                          if(((j_33 != NULL) && (j_33 != k_33)))
                            _fail(k_33);
                          else
                            j_33 = k_33;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(d_33), not_null(f_33), not_null(h_33), not_null(j_33));
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
ATerm profile_p__2 (ATerm t, ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm u_33 = NULL;
  ATerm v_38;
  v_38 = t;
  {
    ATerm v_33 = NULL;
    t = times_0(t);
    {
      v_33 = t;
      if(((u_33 != NULL) && (u_33 != v_33)))
        _fail(v_33);
      else
        u_33 = v_33;
    }
  }
  t = v_38;
  {
    t = v_97(t);
    {
      ATerm w_38;
      w_38 = t;
      {
        ATerm w_33 = NULL,y_33 = NULL,a_34 = NULL;
        ATerm x_33 = NULL;
        t = times_0(t);
        {
          x_33 = t;
          if(((w_33 != NULL) && (w_33 != x_33)))
            _fail(x_33);
          else
            w_33 = x_33;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_33), not_null(u_33));
          {
            t = diff_times_0(t);
            {
              ATerm z_38;
              z_38 = t;
              {
                ATerm z_33 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    z_33 = t;
                    if(((y_33 != NULL) && (y_33 != z_33)))
                      _fail(z_33);
                    else
                      y_33 = z_33;
                  }
                }
              }
              t = z_38;
              {
                ATerm b_34 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    b_34 = t;
                    if(((a_34 != NULL) && (a_34 != b_34)))
                      _fail(b_34);
                    else
                      a_34 = b_34;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_34)), term_f_39), not_null(y_33)), term_a_39);
                  t = u_97(t);
                }
              }
            }
          }
        }
      }
      t = w_38;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_92 (ATerm))
{
  ATerm g_39;
  g_39 = t;
  {
    ATerm i_34 = NULL,k_34 = NULL;
    ATerm h_39;
    h_39 = t;
    {
      ATerm j_34 = NULL;
      t = j_92(t);
      {
        j_34 = t;
        if(((i_34 != NULL) && (i_34 != j_34)))
          _fail(j_34);
        else
          i_34 = j_34;
      }
    }
    t = h_39;
    {
      ATerm l_34 = NULL;
      l_34 = t;
      if(((k_34 != NULL) && (k_34 != l_34)))
        _fail(l_34);
      else
        k_34 = l_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_34)), not_null(i_34)));
        t = printnl_0(t);
      }
    }
  }
  t = g_39;
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = i_39;
      {
        ATerm n_39 = t;
        int o_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_7);
            ;
            LocalPopChoice(o_39);
          }
        else
          {
            t = n_39;
            {
              ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
              w_34 = t;
              v_34 :
              if(match_cons(w_34, sym_Path_1))
                {
                  x_34 = ATgetArgument(w_34, 0);
                  t = not_null(x_34);
                }
              else
                {
                  if(match_cons(w_34, sym_Var_1))
                    {
                      x_34 = ATgetArgument(w_34, 0);
                      {
                        t = not_null(x_34);
                        {
                          ATerm q_39 = t;
                          int s_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(s_39);
                            }
                          else
                            {
                              t = q_39;
                              {
                                ATerm m_7 (ATerm t)
                                {
                                  t = term_t_39;
                                  return(t);
                                }
                                t = debug_1(t, m_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_34, sym_Prefix_2))
                        {
                          x_34 = ATgetArgument(w_34, 0);
                          y_34 = ATgetArgument(w_34, 1);
                          {
                            ATerm d_35 = NULL,f_35 = NULL;
                            ATerm w_39;
                            w_39 = t;
                            {
                              ATerm e_35 = NULL;
                              t = not_null(x_34);
                              {
                                t = eval_config_0(t);
                                {
                                  e_35 = t;
                                  if(((d_35 != NULL) && (d_35 != e_35)))
                                    _fail(e_35);
                                  else
                                    d_35 = e_35;
                                }
                              }
                            }
                            t = w_39;
                            {
                              ATerm g_35 = NULL;
                              t = not_null(y_34);
                              {
                                t = eval_config_0(t);
                                {
                                  g_35 = t;
                                  if(((f_35 != NULL) && (f_35 != g_35)))
                                    _fail(g_35);
                                  else
                                    f_35 = g_35;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_35), not_null(f_35));
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
  ATerm o_35 = NULL;
  o_35 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_39, not_null(o_35));
    {
      t = table_get_0(t);
      {
        ATerm n_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_40;
            c_40 = t;
            {
              ATerm q_35 = NULL;
              ATerm r_35 = NULL;
              r_35 = t;
              if(((q_35 != NULL) && (q_35 != r_35)))
                _fail(r_35);
              else
                q_35 = r_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_39, not_null(o_35), not_null(q_35));
                t = table_put_0(t);
              }
            }
            t = c_40;
          }
          return(t);
        }
        t = try_1(t, n_7);
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
  ATerm d_40;
  d_40 = t;
  {
    t = error_0(t);
    {
      t = term_d_25;
      t = exit_0(t);
    }
  }
  t = d_40;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_40;
      k_40 = t;
      {
        ATerm w_35 = NULL;
        ATerm x_35 = NULL;
        t = term_l_40;
        {
          t = get_config_0(t);
          {
            x_35 = t;
            if(((w_35 != NULL) && (w_35 != x_35)))
              _fail(x_35);
            else
              w_35 = x_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_40), term_x_40), term_w_40), term_v_40), term_q_40), term_p_40), term_o_40), not_null(w_35)), term_n_40));
          t = printnl_0(t);
        }
      }
      t = k_40;
      ;
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      {
        ATerm y_35 = NULL;
        y_35 = t;
        v_35 :
        if(!(match_string(y_35, "0.9.1")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_73(t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      t = SSL_copy(not_null(d_36), not_null(e_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_table_keys(not_null(j_36));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_7 (ATerm t)
      {
        ATerm r_36 = NULL;
        ATerm t_36 = NULL;
        r_36 = t;
        {
          ATerm u_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(r_36));
          {
            t = table_get_0(t);
            {
              u_36 = t;
              if(((t_36 != NULL) && (t_36 != u_36)))
                _fail(u_36);
              else
                t_36 = u_36;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_36), not_null(t_36));
        }
        return(t);
      }
      t = map_1(t, q_7);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    ATerm h_41;
    h_41 = t;
    {
      ATerm z_36 = NULL;
      ATerm a_37 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_36), term_x_32);
        t = geq_0(t);
      }
    }
    t = h_41;
    t = e_94(t);
    return(t);
  }
  t = try_1(t, r_7);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm i_41;
  i_41 = t;
  {
    ATerm d_37 = NULL;
    ATerm e_37 = NULL;
    e_37 = t;
    if(((d_37 != NULL) && (d_37 != e_37)))
      _fail(e_37);
    else
      d_37 = e_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, not_null(d_37));
      t = printnl_0(t);
    }
  }
  t = i_41;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_37 = NULL;
  ATerm m_37 = NULL,n_37 = NULL;
  k_37 = t;
  {
    ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_j_41, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_37)));
    {
      t = table_get_0(t);
      {
        o_37 = t;
        i_37 :
        if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
          {
            p_37 = ATgetFirst((ATermList) o_37);
            s_37 = (ATerm) ATgetNext((ATermList) o_37);
            j_37 :
            if(match_cons(p_37, sym__2))
              {
                q_37 = ATgetArgument(p_37, 0);
                r_37 = ATgetArgument(p_37, 1);
                {
                  if(((m_37 != NULL) && (m_37 != q_37)))
                    _fail(q_37);
                  else
                    m_37 = q_37;
                  if(((n_37 != NULL) && (n_37 != r_37)))
                    _fail(r_37);
                  else
                    n_37 = r_37;
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
    t = not_null(n_37);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      {
        ATerm e_38 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_j_41, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_38)));
        {
          t = table_get_0(t);
          {
            ATerm u_7 (ATerm t)
            {
              ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
              f_38 = t;
              x_37 :
              if(match_cons(f_38, sym__2))
                {
                  g_38 = ATgetArgument(f_38, 0);
                  h_38 = ATgetArgument(f_38, 1);
                  {
                    if(((b_38 != NULL) && (b_38 != g_38)))
                      _fail(g_38);
                    else
                      b_38 = g_38;
                    if(((e_38 != NULL) && (e_38 != h_38)))
                      _fail(h_38);
                    else
                      e_38 = h_38;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_7);
          }
        }
        t = not_null(e_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      {
        ATerm n_41 = t;
        int o_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              t = filter_1(t, q_87);
              return(t);
            }
            t = Cons_2(t, q_87, v_7);
            ;
            LocalPopChoice(o_41);
          }
        else
          {
            t = n_41;
            {
              ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
              m_38 = t;
              l_38 :
              if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
                {
                  n_38 = ATgetFirst((ATermList) m_38);
                  o_38 = (ATerm) ATgetNext((ATermList) m_38);
                  {
                    t = not_null(o_38);
                    t = filter_1(t, q_87);
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
ATerm repeat_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm r_38 (ATerm t)
  {
    ATerm y_7 (ATerm t)
    {
      t = b_74(t);
      t = r_38(t);
      return(t);
    }
    t = try_1(t, y_7);
    return(t);
  }
  t = r_38(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm s_41;
  s_41 = t;
  {
    ATerm z_7 (ATerm t)
    {
      t = term_u_41;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm v_41 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_41;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, z_7);
  }
  t = s_41;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_41;
  w_41 = t;
  {
    ATerm t_38 = NULL;
    ATerm u_38 = NULL;
    u_38 = t;
    if(((t_38 != NULL) && (t_38 != u_38)))
      _fail(u_38);
    else
      t_38 = u_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATempty, not_null(t_38)));
      t = printnl_0(t);
    }
  }
  t = w_41;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm x_41;
  x_41 = t;
  {
    t = n_92(t);
    t = debug_0(t);
  }
  t = x_41;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm c_8 (ATerm t)
  {
    ATerm y_41;
    y_41 = t;
    {
      ATerm x_38 = NULL;
      ATerm y_38 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          y_38 = t;
          if(((x_38 != NULL) && (x_38 != y_38)))
            _fail(y_38);
          else
            x_38 = y_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), term_z_28);
        t = geq_0(t);
      }
    }
    t = y_41;
    t = d_94(t);
    return(t);
  }
  t = try_1(t, c_8);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym__2))
    {
      d_39 = ATgetArgument(c_39, 0);
      e_39 = ATgetArgument(c_39, 1);
      {
        ATerm e_42;
        e_42 = t;
        {
          ATerm f_42 = t;
          int j_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_39), not_null(e_39));
              ;
              LocalPopChoice(j_42);
            }
          else
            {
              t = f_42;
              t = SSL_gtr(not_null(d_39), not_null(e_39));
            }
        }
        t = e_42;
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
  ATerm k_39 = NULL;
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,p_39 = NULL,r_39 = NULL;
      l_39 = t;
      j_39 :
      if(match_cons(l_39, sym__2))
        {
          p_39 = ATgetArgument(l_39, 0);
          r_39 = ATgetArgument(l_39, 1);
          {
            if(((k_39 != NULL) && (k_39 != p_39)))
              _fail(p_39);
            else
              k_39 = p_39;
            if(((k_39 != NULL) && (k_39 != r_39)))
              _fail(r_39);
            else
              k_39 = r_39;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(l_42);
    }
  else
    {
      t = k_42;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    ATerm m_42;
    m_42 = t;
    {
      ATerm u_39 = NULL;
      ATerm v_39 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          v_39 = t;
          if(((u_39 != NULL) && (u_39 != v_39)))
            _fail(v_39);
          else
            u_39 = v_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_39), term_q_26);
        t = geq_0(t);
      }
    }
    t = m_42;
    t = f_94(t);
    return(t);
  }
  t = try_1(t, d_8);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym__2))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      if(((a_40 != NULL) && (a_40 != b_40)))
        _fail(b_40);
      else
        a_40 = b_40;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_84 (ATerm), ATerm u_84 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  g_40 :
  if(((ATgetType(h_40) == AT_LIST) && !(ATisEmpty(h_40))))
    {
      i_40 = ATgetFirst((ATermList) h_40);
      j_40 = (ATerm) ATgetNext((ATermList) h_40);
      {
        t = u_84(t);
        {
          ATerm g_8 (ATerm t)
          {
            ATerm m_40 = NULL;
            m_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_40), not_null(m_40));
              t = t_84(t);
            }
            return(t);
          }
          t = fetch_1(t, g_8);
        }
        t = not_null(j_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym__2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      {
        t = not_null(t_40);
        {
          ATerm y_40 (ATerm t)
          {
            ATerm n_42 = t;
            int o_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_40);
                ;
                LocalPopChoice(o_42);
              }
            else
              {
                t = n_42;
                {
                  ATerm p_42 = t;
                  int s_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_8 (ATerm t)
                      {
                        t = not_null(u_40);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_84, h_8);
                      t = y_40(t);
                      ;
                      LocalPopChoice(s_42);
                    }
                  else
                    {
                      t = p_42;
                      t = Cons_2(t, _id, y_40);
                    }
                }
              }
            return(t);
          }
          t = y_40(t);
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
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym__3))
    {
      e_41 = ATgetArgument(d_41, 0);
      f_41 = ATgetArgument(d_41, 1);
      g_41 = ATgetArgument(d_41, 2);
      {
        ATerm t_42;
        t_42 = t;
        {
          ATerm m_41 = NULL;
          ATerm p_41 = NULL,r_41 = NULL;
          ATerm q_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_41), not_null(f_41));
          {
            ATerm u_42 = t;
            int v_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(v_42);
              }
            else
              {
                t = u_42;
                t = (ATerm) ATempty;
              }
            {
              q_41 = t;
              if(((p_41 != NULL) && (p_41 != q_41)))
                _fail(q_41);
              else
                p_41 = q_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_41), not_null(g_41));
            {
              t = union_0(t);
              {
                r_41 = t;
                if(((m_41 != NULL) && (m_41 != r_41)))
                  _fail(r_41);
                else
                  m_41 = r_41;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_41), not_null(f_41), not_null(m_41));
            t = set_0(t);
          }
        }
        t = t_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym__2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      {
        t = not_null(d_42);
        {
          ATerm k_8 (ATerm t)
          {
            ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
            g_42 = t;
            z_41 :
            if(match_cons(g_42, sym__2))
              {
                h_42 = ATgetArgument(g_42, 0);
                i_42 = ATgetArgument(g_42, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_42), not_null(h_42), not_null(i_42));
                  t = d_99(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_8);
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
  ATerm q_42 = NULL;
  ATerm r_42 = NULL;
  r_42 = t;
  if(((q_42 != NULL) && (q_42 != r_42)))
    _fail(r_42);
  else
    q_42 = r_42;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_42), (ATerm) ATinsert(ATempty, term_w_42));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  ATerm o_43 (ATerm t)
  {
    t = SSL_fclose(not_null(i_43));
    return(t);
  }
  i_43 = t;
  g_43 :
  if(match_cons(i_43, sym_Stream_1))
    {
      h_43 = ATgetArgument(i_43, 0);
      {
        ATerm x_42 = t;
        int y_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(h_43));
            ;
            LocalPopChoice(y_42);
          }
        else
          {
            t = x_42;
            t = o_43(t);
          }
      }
    }
  else
    {
      t = o_43(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  r_43 = t;
  q_43 :
  if(match_cons(r_43, sym_Stream_1))
    {
      s_43 = ATgetArgument(r_43, 0);
      t = SSL_read_term_from_stream(not_null(s_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  b_44 :
  if(match_cons(c_44, sym__2))
    {
      d_44 = ATgetArgument(c_44, 0);
      e_44 = ATgetArgument(c_44, 1);
      {
        ATerm h_44 = NULL;
        t = SSL_fopen(not_null(d_44), not_null(e_44));
        {
          ATerm i_44 = NULL;
          i_44 = t;
          if(((h_44 != NULL) && (h_44 != i_44)))
            _fail(i_44);
          else
            h_44 = i_44;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_44));
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
  ATerm o_44 = NULL;
  o_44 = t;
  t = SSL_is_string(not_null(o_44));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm s_44 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm x_44 = NULL;
    x_44 = t;
    if(((s_44 != NULL) && (s_44 != x_44)))
      _fail(x_44);
    else
      s_44 = x_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_44));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm a_45 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm f_45 = NULL;
    f_45 = t;
    if(((a_45 != NULL) && (a_45 != f_45)))
      _fail(f_45);
    else
      a_45 = f_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_45));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm i_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm l_45 = NULL;
    l_45 = t;
    if(((i_45 != NULL) && (i_45 != l_45)))
      _fail(l_45);
    else
      i_45 = l_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_45));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm r_45 = NULL;
  r_45 = t;
  q_45 :
  if(match_cons(r_45, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(r_45, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(r_45, sym_stdin_0))
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
  ATerm b_46 = NULL;
  ATerm d_46 = NULL,e_46 = NULL;
  b_46 = t;
  {
    ATerm f_46 = NULL;
    ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
    t = not_null(b_46);
    {
      f_46 = t;
      {
        t = SSL_explode_term(not_null(f_46));
        {
          h_46 = t;
          y_45 :
          if(match_cons(h_46, sym__2))
            {
              i_46 = ATgetArgument(h_46, 0);
              j_46 = ATgetArgument(h_46, 1);
              z_45 :
              if(match_string(i_46, ""))
                {
                  a_46 :
                  if(((ATgetType(j_46) == AT_LIST) && !(ATisEmpty(j_46))))
                    {
                      k_46 = ATgetFirst((ATermList) j_46);
                      l_46 = (ATerm) ATgetNext((ATermList) j_46);
                      {
                        if(((e_46 != NULL) && (e_46 != k_46)))
                          _fail(k_46);
                        else
                          e_46 = k_46;
                        if(((d_46 != NULL) && (d_46 != l_46)))
                          _fail(l_46);
                        else
                          d_46 = l_46;
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
    t = not_null(e_46);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t_46 = t;
  s_46 :
  if(match_cons(t_46, sym__2))
    {
      u_46 = ATgetArgument(t_46, 0);
      v_46 = ATgetArgument(t_46, 1);
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            {
              ATerm b_43 = t;
              int c_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_8 (ATerm t)
                  {
                    ATerm w_46 = NULL,x_46 = NULL;
                    w_46 = t;
                    r_46 :
                    if(match_cons(w_46, sym_Path_1))
                      {
                        x_46 = ATgetArgument(w_46, 0);
                        t = not_null(x_46);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_8, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_43);
                }
              else
                {
                  t = b_43;
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
  ATerm f_47 = NULL;
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_47 = NULL;
      ATerm e_47 = NULL;
      e_47 = t;
      if(((d_47 != NULL) && (d_47 != e_47)))
        _fail(e_47);
      else
        d_47 = e_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_47), term_f_43);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_43);
    }
  else
    {
      t = d_43;
      {
        ATerm o_8 (ATerm t)
        {
          t = term_j_43;
          return(t);
        }
        t = debug_1(t, o_8);
        _fail(t);
      }
    }
  {
    ATerm k_43;
    k_43 = t;
    {
      ATerm g_47 = NULL;
      t = read_from_stream_0(t);
      {
        g_47 = t;
        if(((f_47 != NULL) && (f_47 != g_47)))
          _fail(g_47);
        else
          f_47 = g_47;
      }
    }
    t = k_43;
    {
      t = fclose_0(t);
      t = not_null(f_47);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  k_47 :
  if(match_cons(l_47, sym__2))
    {
      m_47 = ATgetArgument(l_47, 0);
      n_47 = ATgetArgument(l_47, 1);
      t = SSL_access(not_null(m_47), not_null(n_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm s_47 = NULL;
  ATerm t_47 = NULL;
  t_47 = t;
  if(((s_47 != NULL) && (s_47 != t_47)))
    _fail(t_47);
  else
    s_47 = t_47;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_47), (ATerm) ATinsert(ATempty, term_l_43));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(n_43);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = m_43;
      {
        ATerm p_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_43 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_43;
              }
            {
              ATerm p_8 (ATerm t)
              {
                t = term_v_43;
                return(t);
              }
              t = debug_1(t, p_8);
            }
            ;
            LocalPopChoice(t_43);
          }
        else
          {
            t = p_43;
            {
              ATerm s_8 (ATerm t)
              {
                t = term_w_43;
                return(t);
              }
              t = debug_1(t, s_8);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm b_48 = NULL;
  ATerm d_48 = NULL;
  b_48 = t;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm w_8 (ATerm t)
      {
        t = term_x_43;
        return(t);
      }
      t = debug_1(t, w_8);
      return(t);
    }
    t = if_verbose5_1(t, t_8);
    {
      ATerm y_43 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_41, (ATerm) ATmakeAppl(sym_Imported_1, not_null(b_48)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_43;
        }
      {
        ATerm z_43;
        z_43 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_41, term_a_44, (ATerm) ATinsert(ATempty, not_null(b_48)));
          t = table_put_0(t);
        }
        t = z_43;
        {
          ATerm x_8 (ATerm t)
          {
            ATerm y_8 (ATerm t)
            {
              t = term_f_44;
              return(t);
            }
            t = debug_1(t, y_8);
            return(t);
          }
          t = if_verbose4_1(t, x_8);
          {
            t = read_repository_file_0(t);
            {
              ATerm z_8 (ATerm t)
              {
                ATerm g_9 (ATerm t)
                {
                  t = term_g_44;
                  return(t);
                }
                t = say_1(t, g_9);
                return(t);
              }
              t = if_verbose6_1(t, z_8);
              {
                ATerm h_48 = NULL;
                h_48 = t;
                if(((d_48 != NULL) && (d_48 != h_48)))
                  _fail(h_48);
                else
                  d_48 = h_48;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_41, not_null(d_48));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm h_9 (ATerm t)
                      {
                        ATerm i_9 (ATerm t)
                        {
                          t = term_j_44;
                          return(t);
                        }
                        t = say_1(t, i_9);
                        return(t);
                      }
                      t = if_verbose6_1(t, h_9);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_j_41, (ATerm)ATmakeAppl(sym_Imported_1, not_null(b_48)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm j_9 (ATerm t)
                            {
                              ATerm m_9 (ATerm t)
                              {
                                t = term_g_44;
                                return(t);
                              }
                              t = say_1(t, m_9);
                              return(t);
                            }
                            t = if_verbose4_1(t, j_9);
                          }
                        }
                      }
                    }
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
  ATerm l_48 = NULL;
  l_48 = t;
  t = SSL_getenv(not_null(l_48));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_44;
      t = get_config_0(t);
      ;
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      {
        ATerm n_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_44;
            t = getenv_0(t);
            ;
            LocalPopChoice(p_44);
          }
        else
          {
            t = n_44;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm q_9 (ATerm t)
    {
      t = term_r_44;
      return(t);
    }
    t = debug_1(t, q_9);
    return(t);
  }
  t = if_verbose5_1(t, n_9);
  {
    ATerm t_44;
    t_44 = t;
    {
      ATerm u_44 = t;
      int v_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_44;
          t = table_get_0(t);
          ;
          LocalPopChoice(v_44);
        }
      else
        {
          t = u_44;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = t_44;
    {
      ATerm r_9 (ATerm t)
      {
        ATerm u_9 (ATerm t)
        {
          t = term_y_44;
          return(t);
        }
        t = debug_1(t, u_9);
        return(t);
      }
      t = if_verbose5_1(t, r_9);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm z_44 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 (ATerm t)
      {
        ATerm y_9 (ATerm t)
        {
          t = term_c_45;
          return(t);
        }
        t = debug_1(t, y_9);
        return(t);
      }
      t = if_verbose5_1(t, v_9);
      {
        t = xtc_load_0(t);
        {
          ATerm d_45 = t;
          int e_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(e_45);
            }
          else
            {
              t = d_45;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm z_9 (ATerm t)
            {
              ATerm a_10 (ATerm t)
              {
                t = term_c_45;
                return(t);
              }
              t = debug_1(t, a_10);
              return(t);
            }
            t = if_verbose5_1(t, z_9);
          }
        }
      }
      ;
      LocalPopChoice(b_45);
    }
  else
    {
      t = z_44;
      {
        ATerm p_48 = NULL;
        ATerm q_48 = NULL;
        q_48 = t;
        if(((p_48 != NULL) && (p_48 != q_48)))
          _fail(q_48);
        else
          p_48 = q_48;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_45), not_null(p_48)), term_g_45);
          {
            t = error_0(t);
            {
              ATerm f_10 (ATerm t)
              {
                t = term_j_41;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm g_10 (ATerm t)
                    {
                      t = term_j_45;
                      return(t);
                    }
                    t = debug_1(t, g_10);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, f_10);
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
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
  w_48 = t;
  v_48 :
  if(match_cons(w_48, sym__2))
    {
      x_48 = ATgetArgument(w_48, 0);
      y_48 = ATgetArgument(w_48, 1);
      {
        ATerm b_49 = NULL;
        ATerm c_49 = NULL,e_49 = NULL;
        ATerm d_49 = NULL;
        t = not_null(x_48);
        {
          ATerm k_45 = t;
          int m_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(m_45);
            }
          else
            {
              t = k_45;
              t = (ATerm) ATempty;
            }
          {
            d_49 = t;
            if(((c_49 != NULL) && (c_49 != d_49)))
              _fail(d_49);
            else
              c_49 = d_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_48), not_null(c_49));
          {
            t = conc_0(t);
            {
              e_49 = t;
              if(((b_49 != NULL) && (b_49 != e_49)))
                _fail(e_49);
              else
                b_49 = e_49;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_39, not_null(x_48), not_null(b_49));
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
  ATerm f_50 = NULL,g_50 = NULL,m_50 = NULL,n_50 = NULL,s_50 = NULL;
  f_50 = t;
  a_50 :
  if(match_string(f_50, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
        {
          g_50 = ATgetFirst((ATermList) f_50);
          m_50 = (ATerm) ATgetNext((ATermList) f_50);
          b_50 :
          if(((ATgetType(m_50) == AT_LIST) && !(ATisEmpty(m_50))))
            {
              n_50 = ATgetFirst((ATermList) m_50);
              s_50 = (ATerm) ATgetNext((ATermList) m_50);
              {
                ATerm w_50 = NULL;
                ATerm n_45;
                n_45 = t;
                {
                  t = not_null(g_50);
                  t = l_0(t);
                }
                t = n_45;
                {
                  ATerm x_50 = NULL;
                  t = not_null(n_50);
                  {
                    t = m_0(t);
                    {
                      x_50 = t;
                      if(((w_50 != NULL) && (w_50 != x_50)))
                        _fail(x_50);
                      else
                        w_50 = x_50;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_50)), not_null(w_50));
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
  ATerm c_51 = NULL;
  c_51 = t;
  t = SSL_string_to_int(not_null(c_51));
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  ATerm o_45;
  o_45 = t;
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
  t = o_45;
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
        ATerm p_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(z_51);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_39, not_null(z_51));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(s_45);
          }
        else
          {
            t = p_45;
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
        ATerm n_52 = NULL;
        ATerm o_52 = NULL,q_52 = NULL;
        ATerm p_52 = NULL;
        t = not_null(j_52);
        {
          ATerm t_45 = t;
          int u_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(u_45);
            }
          else
            {
              t = t_45;
              t = (ATerm) ATempty;
            }
          {
            p_52 = t;
            if(((o_52 != NULL) && (o_52 != p_52)))
              _fail(p_52);
            else
              o_52 = p_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_52), not_null(k_52));
          {
            t = conc_0(t);
            {
              q_52 = t;
              if(((n_52 != NULL) && (n_52 != q_52)))
                _fail(q_52);
              else
                n_52 = q_52;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_39, not_null(j_52), not_null(n_52));
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
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 (ATerm t)
      {
        ATerm y_54 = NULL;
        y_54 = t;
        d_53 :
        if(!(match_string(y_54, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_10 (ATerm t)
      {
        ATerm e_55 = NULL;
        ATerm f_55 = NULL;
        f_55 = t;
        if(((e_55 != NULL) && (e_55 != f_55)))
          _fail(f_55);
        else
          e_55 = f_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_35, not_null(e_55));
          t = set_config_0(t);
        }
        t = term_x_22;
        return(t);
      }
      ATerm l_10 (ATerm t)
      {
        t = term_x_45;
        return(t);
      }
      t = ArgOption_3(t, h_10, k_10, l_10);
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      {
        ATerm c_46 = t;
        int g_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 (ATerm t)
            {
              ATerm g_55 = NULL;
              g_55 = t;
              f_53 :
              if(!(match_string(g_55, "-o")))
                {
                  if(!(match_string(g_55, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_10 (ATerm t)
            {
              ATerm h_55 = NULL;
              ATerm m_55 = NULL;
              m_55 = t;
              if(((h_55 != NULL) && (h_55 != m_55)))
                _fail(m_55);
              else
                h_55 = m_55;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_n_17, not_null(h_55));
                t = set_config_0(t);
              }
              t = term_x_22;
              return(t);
            }
            ATerm t_10 (ATerm t)
            {
              t = term_m_46;
              return(t);
            }
            t = ArgOption_3(t, m_10, q_10, t_10);
            ;
            LocalPopChoice(g_46);
          }
        else
          {
            t = c_46;
            {
              ATerm n_46 = t;
              int o_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_10 (ATerm t)
                  {
                    ATerm n_55 = NULL;
                    n_55 = t;
                    h_53 :
                    if(!(match_string(n_55, "-I")))
                      {
                        if(!(match_string(n_55, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm v_10 (ATerm t)
                  {
                    ATerm o_55 = NULL;
                    ATerm y_55 = NULL;
                    y_55 = t;
                    if(((o_55 != NULL) && (o_55 != y_55)))
                      _fail(y_55);
                    else
                      o_55 = y_55;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_55)), term_m_36));
                      t = extend_config_0(t);
                    }
                    t = term_x_22;
                    return(t);
                  }
                  ATerm w_10 (ATerm t)
                  {
                    t = term_p_46;
                    return(t);
                  }
                  t = ArgOption_3(t, u_10, v_10, w_10);
                  ;
                  LocalPopChoice(o_46);
                }
              else
                {
                  t = n_46;
                  {
                    ATerm q_46 = t;
                    int y_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_11 (ATerm t)
                        {
                          ATerm z_55 = NULL;
                          z_55 = t;
                          j_53 :
                          if(!(match_string(z_55, "--main")))
                            {
                              if(!(match_string(z_55, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm c_11 (ATerm t)
                        {
                          ATerm a_56 = NULL;
                          ATerm b_56 = NULL;
                          b_56 = t;
                          if(((a_56 != NULL) && (a_56 != b_56)))
                            _fail(b_56);
                          else
                            a_56 = b_56;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_a_23, not_null(a_56));
                            t = set_config_0(t);
                          }
                          t = term_x_22;
                          return(t);
                        }
                        ATerm d_11 (ATerm t)
                        {
                          t = term_z_46;
                          return(t);
                        }
                        t = ArgOption_3(t, b_11, c_11, d_11);
                        ;
                        LocalPopChoice(y_46);
                      }
                    else
                      {
                        t = q_46;
                        {
                          ATerm a_47 = t;
                          int b_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_11 (ATerm t)
                              {
                                ATerm c_56 = NULL;
                                c_56 = t;
                                l_53 :
                                if(!(match_string(c_56, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm h_11 (ATerm t)
                              {
                                ATerm d_56 = NULL;
                                ATerm e_56 = NULL;
                                e_56 = t;
                                if(((d_56 != NULL) && (d_56 != e_56)))
                                  _fail(e_56);
                                else
                                  d_56 = e_56;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATempty, not_null(d_56)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_x_22;
                                return(t);
                              }
                              ATerm n_11 (ATerm t)
                              {
                                t = term_c_47;
                                return(t);
                              }
                              t = ArgOption_3(t, e_11, h_11, n_11);
                              ;
                              LocalPopChoice(b_47);
                            }
                          else
                            {
                              t = a_47;
                              {
                                ATerm h_47 = t;
                                int i_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_11 (ATerm t)
                                    {
                                      ATerm f_56 = NULL;
                                      f_56 = t;
                                      s_53 :
                                      if(!(match_string(f_56, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm p_11 (ATerm t)
                                    {
                                      ATerm g_56 = NULL;
                                      ATerm h_56 = NULL;
                                      h_56 = t;
                                      if(((g_56 != NULL) && (g_56 != h_56)))
                                        _fail(h_56);
                                      else
                                        g_56 = h_56;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_a_18, (ATerm) ATinsert(ATempty, not_null(g_56)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_x_22;
                                      return(t);
                                    }
                                    ATerm q_11 (ATerm t)
                                    {
                                      t = term_j_47;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, o_11, p_11, q_11);
                                    ;
                                    LocalPopChoice(i_47);
                                  }
                                else
                                  {
                                    t = h_47;
                                    {
                                      ATerm o_47 = t;
                                      int p_47 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_11 (ATerm t)
                                          {
                                            ATerm i_56 = NULL;
                                            i_56 = t;
                                            u_53 :
                                            if(!(match_string(i_56, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm w_11 (ATerm t)
                                          {
                                            ATerm j_56 = NULL;
                                            ATerm k_56 = NULL;
                                            k_56 = t;
                                            if(((j_56 != NULL) && (j_56 != k_56)))
                                              _fail(k_56);
                                            else
                                              j_56 = k_56;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATempty, not_null(j_56)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_x_22;
                                            return(t);
                                          }
                                          ATerm x_11 (ATerm t)
                                          {
                                            t = term_q_47;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, v_11, w_11, x_11);
                                          ;
                                          LocalPopChoice(p_47);
                                        }
                                      else
                                        {
                                          t = o_47;
                                          {
                                            ATerm r_47 = t;
                                            int u_47 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm y_11 (ATerm t)
                                                {
                                                  ATerm l_56 = NULL;
                                                  l_56 = t;
                                                  w_53 :
                                                  if(!(match_string(l_56, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm z_11 (ATerm t)
                                                {
                                                  t = term_v_47;
                                                  t = set_config_0(t);
                                                  t = term_x_22;
                                                  return(t);
                                                }
                                                ATerm c_12 (ATerm t)
                                                {
                                                  t = term_w_47;
                                                  return(t);
                                                }
                                                t = Option_3(t, y_11, z_11, c_12);
                                                ;
                                                LocalPopChoice(u_47);
                                              }
                                            else
                                              {
                                                t = r_47;
                                                {
                                                  ATerm x_47 = t;
                                                  int y_47 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_12 (ATerm t)
                                                      {
                                                        ATerm m_56 = NULL;
                                                        m_56 = t;
                                                        x_53 :
                                                        if(!(match_string(m_56, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm i_12 (ATerm t)
                                                      {
                                                        t = term_z_47;
                                                        t = set_config_0(t);
                                                        t = term_x_22;
                                                        return(t);
                                                      }
                                                      ATerm j_12 (ATerm t)
                                                      {
                                                        t = term_a_48;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, h_12, i_12, j_12);
                                                      ;
                                                      LocalPopChoice(y_47);
                                                    }
                                                  else
                                                    {
                                                      t = x_47;
                                                      {
                                                        ATerm c_48 = t;
                                                        int e_48 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_12 (ATerm t)
                                                            {
                                                              ATerm n_56 = NULL;
                                                              n_56 = t;
                                                              y_53 :
                                                              if(!(match_string(n_56, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm l_12 (ATerm t)
                                                            {
                                                              t = term_f_48;
                                                              t = set_config_0(t);
                                                              t = term_x_22;
                                                              return(t);
                                                            }
                                                            ATerm m_12 (ATerm t)
                                                            {
                                                              t = term_g_48;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, k_12, l_12, m_12);
                                                            ;
                                                            LocalPopChoice(e_48);
                                                          }
                                                        else
                                                          {
                                                            t = c_48;
                                                            {
                                                              ATerm i_48 = t;
                                                              int j_48 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_12 (ATerm t)
                                                                  {
                                                                    ATerm o_56 = NULL;
                                                                    o_56 = t;
                                                                    z_53 :
                                                                    if(!(match_string(o_56, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm u_12 (ATerm t)
                                                                  {
                                                                    ATerm p_56 = NULL;
                                                                    ATerm q_56 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      q_56 = t;
                                                                      if(((p_56 != NULL) && (p_56 != q_56)))
                                                                        _fail(q_56);
                                                                      else
                                                                        p_56 = q_56;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_m_22, not_null(p_56));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_x_22;
                                                                    return(t);
                                                                  }
                                                                  ATerm v_12 (ATerm t)
                                                                  {
                                                                    t = term_k_48;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, p_12, u_12, v_12);
                                                                  ;
                                                                  LocalPopChoice(j_48);
                                                                }
                                                              else
                                                                {
                                                                  t = i_48;
                                                                  {
                                                                    ATerm m_48 = t;
                                                                    int n_48 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm w_12 (ATerm t)
                                                                        {
                                                                          ATerm r_56 = NULL;
                                                                          r_56 = t;
                                                                          k_54 :
                                                                          if(!(match_string(r_56, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm x_12 (ATerm t)
                                                                        {
                                                                          t = term_o_48;
                                                                          t = toggle_config_0(t);
                                                                          t = term_x_22;
                                                                          return(t);
                                                                        }
                                                                        ATerm y_12 (ATerm t)
                                                                        {
                                                                          t = term_r_48;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, w_12, x_12, y_12);
                                                                        ;
                                                                        LocalPopChoice(n_48);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_48;
                                                                        {
                                                                          ATerm s_48 = t;
                                                                          int t_48 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm z_12 (ATerm t)
                                                                              {
                                                                                ATerm s_56 = NULL;
                                                                                s_56 = t;
                                                                                l_54 :
                                                                                if(!(match_string(s_56, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm a_13 (ATerm t)
                                                                              {
                                                                                t = term_z_48;
                                                                                t = set_config_0(t);
                                                                                t = term_x_22;
                                                                                return(t);
                                                                              }
                                                                              ATerm b_13 (ATerm t)
                                                                              {
                                                                                t = term_a_49;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, z_12, a_13, b_13);
                                                                              ;
                                                                              LocalPopChoice(t_48);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_48;
                                                                              {
                                                                                ATerm f_49 = t;
                                                                                int g_49 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm c_13 (ATerm t)
                                                                                    {
                                                                                      ATerm t_56 = NULL;
                                                                                      t_56 = t;
                                                                                      m_54 :
                                                                                      if(!(match_string(t_56, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm d_13 (ATerm t)
                                                                                    {
                                                                                      ATerm u_56 = NULL;
                                                                                      ATerm v_56 = NULL;
                                                                                      v_56 = t;
                                                                                      if(((u_56 != NULL) && (u_56 != v_56)))
                                                                                        _fail(v_56);
                                                                                      else
                                                                                        u_56 = v_56;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_h_49, (ATerm) ATinsert(ATempty, not_null(u_56)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_x_22;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm h_13 (ATerm t)
                                                                                    {
                                                                                      t = term_i_49;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, c_13, d_13, h_13);
                                                                                    ;
                                                                                    LocalPopChoice(g_49);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_49;
                                                                                    {
                                                                                      ATerm j_49 = t;
                                                                                      int k_49 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm k_13 (ATerm t)
                                                                                          {
                                                                                            ATerm w_56 = NULL;
                                                                                            w_56 = t;
                                                                                            o_54 :
                                                                                            if(!(match_string(w_56, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm o_13 (ATerm t)
                                                                                          {
                                                                                            ATerm x_56 = NULL;
                                                                                            ATerm y_56 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              y_56 = t;
                                                                                              if(((x_56 != NULL) && (x_56 != y_56)))
                                                                                                _fail(y_56);
                                                                                              else
                                                                                                x_56 = y_56;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_h_17, not_null(x_56));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_x_22;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm q_13 (ATerm t)
                                                                                          {
                                                                                            t = term_l_49;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, k_13, o_13, q_13);
                                                                                          ;
                                                                                          LocalPopChoice(k_49);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_49;
                                                                                          {
                                                                                            ATerm m_49 = t;
                                                                                            int n_49 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm r_13 (ATerm t)
                                                                                                {
                                                                                                  ATerm z_56 = NULL;
                                                                                                  z_56 = t;
                                                                                                  q_54 :
                                                                                                  if(!(match_string(z_56, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(z_56, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm s_13 (ATerm t)
                                                                                                {
                                                                                                  t = term_o_49;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_x_22;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm t_13 (ATerm t)
                                                                                                {
                                                                                                  t = term_p_49;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, r_13, s_13, t_13);
                                                                                                ;
                                                                                                LocalPopChoice(n_49);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = m_49;
                                                                                                {
                                                                                                  ATerm q_49 = t;
                                                                                                  int r_49 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm u_13 (ATerm t)
                                                                                                      {
                                                                                                        ATerm a_57 = NULL;
                                                                                                        a_57 = t;
                                                                                                        r_54 :
                                                                                                        if(!(match_string(a_57, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(a_57, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_13 (ATerm t)
                                                                                                      {
                                                                                                        t = term_t_49;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_x_22;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm w_13 (ATerm t)
                                                                                                      {
                                                                                                        t = term_u_49;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, u_13, v_13, w_13);
                                                                                                      ;
                                                                                                      LocalPopChoice(r_49);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_49;
                                                                                                      {
                                                                                                        ATerm v_49 = t;
                                                                                                        int w_49 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm x_13 (ATerm t)
                                                                                                            {
                                                                                                              ATerm b_57 = NULL;
                                                                                                              b_57 = t;
                                                                                                              s_54 :
                                                                                                              if(!(match_string(b_57, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm a_14 (ATerm t)
                                                                                                            {
                                                                                                              t = term_y_49;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_x_22;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm b_14 (ATerm t)
                                                                                                            {
                                                                                                              t = term_z_49;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, x_13, a_14, b_14);
                                                                                                            ;
                                                                                                            LocalPopChoice(w_49);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_49;
                                                                                                            {
                                                                                                              ATerm c_50 = t;
                                                                                                              int d_50 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm c_14 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm c_57 = NULL;
                                                                                                                    c_57 = t;
                                                                                                                    t_54 :
                                                                                                                    if(!(match_string(c_57, "-v")))
                                                                                                                      {
                                                                                                                        if(!(match_string(c_57, "--version")))
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm h_14 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_h_50;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_x_22;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm i_14 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_i_50;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, c_14, h_14, i_14);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(d_50);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = c_50;
                                                                                                                  {
                                                                                                                    ATerm j_14 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm d_57 = NULL;
                                                                                                                      d_57 = t;
                                                                                                                      u_54 :
                                                                                                                      if(!(match_string(d_57, "--warning")))
                                                                                                                        {
                                                                                                                          if(!(match_string(d_57, "-W")))
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm k_14 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm j_50 = t;
                                                                                                                      int k_50 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          ATerm f_57 = NULL;
                                                                                                                          ATerm l_50;
                                                                                                                          l_50 = t;
                                                                                                                          {
                                                                                                                            t = term_h_21;
                                                                                                                            {
                                                                                                                              t = get_config_0(t);
                                                                                                                              {
                                                                                                                                ATerm q_14 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm e_57 = NULL;
                                                                                                                                  e_57 = t;
                                                                                                                                  v_54 :
                                                                                                                                  if(!(match_string(e_57, "all")))
                                                                                                                                    {
                                                                                                                                      _fail(t);
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = Cons_2(t, q_14, Nil_0);
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                          t = l_50;
                                                                                                                          {
                                                                                                                            ATerm g_57 = NULL;
                                                                                                                            g_57 = t;
                                                                                                                            if(((f_57 != NULL) && (f_57 != g_57)))
                                                                                                                              _fail(g_57);
                                                                                                                            else
                                                                                                                              f_57 = g_57;
                                                                                                                            {
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATempty, not_null(f_57)));
                                                                                                                              t = set_config_0(t);
                                                                                                                            }
                                                                                                                          }
                                                                                                                          ;
                                                                                                                          LocalPopChoice(k_50);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_50;
                                                                                                                          {
                                                                                                                            ATerm h_57 = NULL;
                                                                                                                            ATerm i_57 = NULL;
                                                                                                                            i_57 = t;
                                                                                                                            if(((h_57 != NULL) && (h_57 != i_57)))
                                                                                                                              _fail(i_57);
                                                                                                                            else
                                                                                                                              h_57 = i_57;
                                                                                                                            {
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATempty, not_null(h_57)));
                                                                                                                              t = extend_config_0(t);
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      t = term_x_22;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm p_14 (ATerm t)
                                                                                                                    {
                                                                                                                      t = term_o_50;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    t = ArgOption_3(t, j_14, k_14, p_14);
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm w_57 = NULL;
  w_57 = t;
  t = SSL_table_destroy(not_null(w_57));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
  a_58 = t;
  z_57 :
  if(((ATgetType(a_58) == AT_LIST) && ATisEmpty(a_58)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_58) == AT_LIST) && !(ATisEmpty(a_58))))
        {
          b_58 = ATgetFirst((ATermList) a_58);
          c_58 = (ATerm) ATgetNext((ATermList) a_58);
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
  ATerm p_50;
  p_50 = t;
  {
    ATerm f_58 = NULL;
    ATerm i_58 = NULL;
    ATerm q_50 = t;
    int r_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(r_50);
      }
    else
      {
        t = q_50;
        {
          ATerm g_58 = NULL;
          ATerm h_58 = NULL;
          h_58 = t;
          if(((g_58 != NULL) && (g_58 != h_58)))
            _fail(h_58);
          else
            g_58 = h_58;
          t = (ATerm) ATinsert(ATempty, not_null(g_58));
        }
      }
    {
      i_58 = t;
      if(((f_58 != NULL) && (f_58 != i_58)))
        _fail(i_58);
      else
        f_58 = i_58;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(f_58));
      t = printnl_0(t);
    }
  }
  t = p_50;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_51), term_q_40), term_h_51), term_g_51), term_f_51), term_q_40), term_e_51), term_d_51), term_b_51), term_a_51), term_z_50), term_y_50), term_v_50), term_u_50), term_t_50);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm l_58 (ATerm t)
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        t = Cons_2(t, q_80, l_58);
      }
    return(t);
  }
  t = l_58(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm s_58 = NULL,u_58 = NULL,v_58 = NULL;
  v_58 = t;
  r_58 :
  if(((ATgetType(v_58) == AT_LIST) && !(ATisEmpty(v_58))))
    {
      s_58 = ATgetFirst((ATermList) v_58);
      u_58 = (ATerm) ATgetNext((ATermList) v_58);
      {
        ATerm y_58 = NULL;
        t = not_null(u_58);
        {
          ATerm l_51;
          l_51 = t;
          {
            ATerm z_58 = NULL,p_59 = NULL,r_59 = NULL;
            ATerm m_51;
            m_51 = t;
            {
              ATerm o_59 = NULL;
              t = j_0(t);
              {
                o_59 = t;
                if(((z_58 != NULL) && (z_58 != o_59)))
                  _fail(o_59);
                else
                  z_58 = o_59;
              }
            }
            t = m_51;
            {
              ATerm q_59 = NULL;
              t = not_null(s_58);
              {
                t = i_0(t);
                {
                  q_59 = t;
                  if(((p_59 != NULL) && (p_59 != q_59)))
                    _fail(q_59);
                  else
                    p_59 = q_59;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_58)), not_null(p_59));
                {
                  r_59 = t;
                  if(((y_58 != NULL) && (y_58 != r_59)))
                    _fail(r_59);
                  else
                    y_58 = r_59;
                }
              }
            }
          }
          t = l_51;
          {
            ATerm r_14 (ATerm t)
            {
              t = not_null(y_58);
              return(t);
            }
            t = reverse_acc_2(t, i_0, r_14);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_58) == AT_LIST) && ATisEmpty(v_58)))
        {
          {
            t = term_x_22;
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
  ATerm u_14 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_14);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm o_60 = NULL;
  ATerm p_60 = NULL;
  t = term_x_22;
  {
    t = g_0(t);
    {
      p_60 = t;
      if(((o_60 != NULL) && (o_60 != p_60)))
        _fail(p_60);
      else
        o_60 = p_60;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_52), not_null(o_60)), term_b_52), term_q_40), term_w_51), term_q_40), term_v_51), term_o_51), term_q_40), term_n_51);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm y_60 = NULL,z_60 = NULL;
  y_60 = t;
  x_60 :
  if(match_cons(y_60, sym_Program_1))
    {
      z_60 = ATgetArgument(y_60, 0);
      {
        ATerm c_61 = NULL,e_61 = NULL;
        ATerm d_61 = NULL;
        t = SSLgetAnnotations(not_null(y_60));
        {
          d_61 = t;
          if(((c_61 != NULL) && (c_61 != d_61)))
            _fail(d_61);
          else
            c_61 = d_61;
        }
        {
          t = not_null(z_60);
          {
            ATerm g_61 = NULL;
            t = t_67(t);
            {
              e_61 = t;
              {
                ATerm h_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_61)), not_null(c_61));
                {
                  h_61 = t;
                  if(((g_61 != NULL) && (g_61 != h_61)))
                    _fail(h_61);
                  else
                    g_61 = h_61;
                }
                t = not_null(g_61);
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
ATerm system_usage_0 (ATerm t)
{
  ATerm q_61 = NULL;
  ATerm d_52 = t;
  int e_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_61 = NULL;
      t = term_f_52;
      {
        t = get_config_0(t);
        {
          r_61 = t;
          if(((q_61 != NULL) && (q_61 != r_61)))
            _fail(r_61);
          else
            q_61 = r_61;
        }
      }
      ;
      LocalPopChoice(e_52);
    }
  else
    {
      t = d_52;
      {
        ATerm v_14 (ATerm t)
        {
          ATerm w_14 (ATerm t)
          {
            ATerm s_61 = NULL;
            s_61 = t;
            if(((q_61 != NULL) && (q_61 != s_61)))
              _fail(s_61);
            else
              q_61 = s_61;
            return(t);
          }
          t = Program_1(t, w_14);
          return(t);
        }
        t = option_defined_1(t, v_14);
      }
    }
  {
    ATerm x_14 (ATerm t)
    {
      ATerm y_14 (ATerm t)
      {
        t = not_null(q_61);
        return(t);
      }
      t = short_description_1(t, y_14);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_14);
    {
      t = term_g_52;
      {
        t = echo_0(t);
        {
          t = term_r_52;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_15 (ATerm t)
                {
                  ATerm t_61 = NULL;
                  ATerm u_61 = NULL;
                  u_61 = t;
                  if(((t_61 != NULL) && (t_61 != u_61)))
                    _fail(u_61);
                  else
                    t_61 = u_61;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_61)), term_s_52);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_15);
                {
                  ATerm h_15 (ATerm t)
                  {
                    ATerm v_61 = NULL;
                    ATerm w_61 = NULL;
                    ATerm i_15 (ATerm t)
                    {
                      t = not_null(q_61);
                      return(t);
                    }
                    t = long_description_1(t, i_15);
                    {
                      w_61 = t;
                      if(((v_61 != NULL) && (v_61 != w_61)))
                        _fail(w_61);
                      else
                        v_61 = w_61;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_61)), term_q_40);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_15);
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
ATerm Undefined_1 (ATerm t, ATerm u_67 (ATerm))
{
  ATerm i_62 = NULL,j_62 = NULL;
  i_62 = t;
  h_62 :
  if(match_cons(i_62, sym_Undefined_1))
    {
      j_62 = ATgetArgument(i_62, 0);
      {
        ATerm m_62 = NULL,o_62 = NULL;
        ATerm n_62 = NULL;
        t = SSLgetAnnotations(not_null(i_62));
        {
          n_62 = t;
          if(((m_62 != NULL) && (m_62 != n_62)))
            _fail(n_62);
          else
            m_62 = n_62;
        }
        {
          t = not_null(j_62);
          {
            ATerm q_62 = NULL;
            t = u_67(t);
            {
              o_62 = t;
              {
                ATerm r_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_62)), not_null(m_62));
                {
                  r_62 = t;
                  if(((q_62 != NULL) && (q_62 != r_62)))
                    _fail(r_62);
                  else
                    q_62 = r_62;
                }
                t = not_null(q_62);
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
ATerm fetch_1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm w_62 (ATerm t)
  {
    ATerm t_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_80, _id);
        ;
        LocalPopChoice(u_52);
      }
    else
      {
        t = t_52;
        t = Cons_2(t, _id, w_62);
      }
    return(t);
  }
  t = w_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_97 (ATerm))
{
  t = fetch_1(t, x_97);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_63 = NULL;
  b_63 = t;
  a_63 :
  if(match_cons(b_63, sym_Help_0))
    {
      ATerm d_63 = NULL,f_63 = NULL;
      ATerm v_52;
      v_52 = t;
      {
        ATerm e_63 = NULL;
        t = SSLgetAnnotations(not_null(b_63));
        {
          e_63 = t;
          if(((d_63 != NULL) && (d_63 != e_63)))
            _fail(e_63);
          else
            d_63 = e_63;
        }
      }
      t = v_52;
      {
        ATerm g_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_63));
        {
          g_63 = t;
          if(((f_63 != NULL) && (f_63 != g_63)))
            _fail(g_63);
          else
            f_63 = g_63;
        }
        t = not_null(f_63);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym__2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      t = SSL_table_get(not_null(n_63), not_null(o_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  v_63 = t;
  u_63 :
  if(match_cons(v_63, sym__3))
    {
      w_63 = ATgetArgument(v_63, 0);
      x_63 = ATgetArgument(v_63, 1);
      y_63 = ATgetArgument(v_63, 2);
      {
        ATerm w_52;
        w_52 = t;
        {
          ATerm c_64 = NULL;
          ATerm d_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_63), not_null(x_63));
          {
            ATerm x_52 = t;
            int y_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_52);
              }
            else
              {
                t = x_52;
                t = (ATerm) ATempty;
              }
            {
              d_64 = t;
              if(((c_64 != NULL) && (c_64 != d_64)))
                _fail(d_64);
              else
                c_64 = d_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_63), not_null(x_63), (ATerm) ATinsert(CheckATermList(not_null(c_64)), not_null(y_63)));
            t = table_put_0(t);
          }
        }
        t = w_52;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_99 (ATerm))
{
  ATerm h_64 = NULL;
  ATerm i_64 = NULL;
  t = term_x_22;
  {
    t = c_99(t);
    {
      i_64 = t;
      if(((h_64 != NULL) && (h_64 != i_64)))
        _fail(i_64);
      else
        h_64 = i_64;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_52, term_m_52, not_null(h_64));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  n_64 :
  if(match_string(o_64, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_64) == AT_LIST) && !(ATisEmpty(o_64))))
        {
          p_64 = ATgetFirst((ATermList) o_64);
          q_64 = (ATerm) ATgetNext((ATermList) o_64);
          {
            ATerm t_64 = NULL;
            ATerm z_52;
            z_52 = t;
            {
              t = not_null(p_64);
              t = a_0(t);
            }
            t = z_52;
            {
              ATerm u_64 = NULL;
              t = term_x_22;
              {
                t = b_0(t);
                {
                  u_64 = t;
                  if(((t_64 != NULL) && (t_64 != u_64)))
                    _fail(u_64);
                  else
                    t_64 = u_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_64)), not_null(t_64));
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
  ATerm j_15 (ATerm t)
  {
    ATerm z_64 = NULL;
    z_64 = t;
    y_64 :
    if(!(match_string(z_64, "--help")))
      {
        if(!(match_string(z_64, "-h")))
          {
            if(!(match_string(z_64, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_15 (ATerm t)
  {
    t = term_t_49;
    {
      t = set_config_0(t);
      t = term_a_53;
    }
    return(t);
  }
  ATerm l_15 (ATerm t)
  {
    t = term_b_53;
    return(t);
  }
  t = Option_3(t, j_15, k_15, l_15);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  c_65 = t;
  b_65 :
  if(((ATgetType(c_65) == AT_LIST) && !(ATisEmpty(c_65))))
    {
      d_65 = ATgetFirst((ATermList) c_65);
      e_65 = (ATerm) ATgetNext((ATermList) c_65);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_65)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_65)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm c_53;
  c_53 = t;
  {
    ATerm m_15 (ATerm t)
    {
      t = term_e_53;
      t = a_99(t);
      return(t);
    }
    t = try_1(t, m_15);
  }
  t = c_53;
  {
    ATerm t_15 (ATerm t)
    {
      ATerm m_65 = NULL;
      ATerm g_53;
      g_53 = t;
      {
        ATerm k_65 = NULL;
        ATerm l_65 = NULL;
        l_65 = t;
        if(((k_65 != NULL) && (k_65 != l_65)))
          _fail(l_65);
        else
          k_65 = l_65;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_52, not_null(k_65));
          t = set_config_0(t);
        }
      }
      t = g_53;
      {
        ATerm n_65 = NULL;
        n_65 = t;
        if(((m_65 != NULL) && (m_65 != n_65)))
          _fail(n_65);
        else
          m_65 = n_65;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_65));
      }
      return(t);
    }
    ATerm u_15 (ATerm t)
    {
      ATerm i_53 = t;
      int k_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_53 = t;
          int n_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(n_53);
            }
          else
            {
              t = m_53;
              {
                t = a_99(t);
                t = Cons_2(t, _id, u_15);
              }
            }
          ;
          LocalPopChoice(k_53);
        }
      else
        {
          t = i_53;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_15, u_15);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_98 (ATerm))
{
  ATerm s_65 = NULL;
  ATerm o_53;
  o_53 = t;
  {
    t = term_p_53;
    t = table_put_0(t);
  }
  t = o_53;
  {
    ATerm x_15 (ATerm t)
    {
      ATerm q_53 = t;
      int r_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_98(t);
          ;
          LocalPopChoice(r_53);
        }
      else
        {
          t = q_53;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_15);
    {
      ATerm y_15 (ATerm t)
      {
        ATerm t_53 = t;
        int v_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_54;
            a_54 = t;
            {
              ATerm b_54 = t;
              int c_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_49;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(c_54);
                }
              else
                {
                  t = b_54;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_54;
            {
              t = system_usage_0(t);
              {
                t = term_b_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(v_53);
          }
        else
          {
            t = t_53;
            {
              ATerm z_15 (ATerm t)
              {
                ATerm a_16 (ATerm t)
                {
                  ATerm t_65 = NULL;
                  t_65 = t;
                  if(((s_65 != NULL) && (s_65 != t_65)))
                    _fail(t_65);
                  else
                    s_65 = t_65;
                  return(t);
                }
                t = Undefined_1(t, a_16);
                return(t);
              }
              t = option_defined_1(t, z_15);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_65)), term_d_54));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_d_25;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, y_15);
      {
        ATerm e_54;
        e_54 = t;
        {
          t = term_l_52;
          t = table_destroy_0(t);
        }
        t = e_54;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  ATerm f_54;
  f_54 = t;
  {
    ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
    a_66 = t;
    w_65 :
    if(match_cons(a_66, sym__3))
      {
        b_66 = ATgetArgument(a_66, 0);
        c_66 = ATgetArgument(a_66, 1);
        d_66 = ATgetArgument(a_66, 2);
        {
          if(((x_65 != NULL) && (x_65 != b_66)))
            _fail(b_66);
          else
            x_65 = b_66;
          {
            if(((y_65 != NULL) && (y_65 != c_66)))
              _fail(c_66);
            else
              y_65 = c_66;
            {
              if(((z_65 != NULL) && (z_65 != d_66)))
                _fail(d_66);
              else
                z_65 = d_66;
              t = SSL_table_put(not_null(x_65), not_null(y_65), not_null(z_65));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_54;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
  h_66 = t;
  g_66 :
  if(match_cons(h_66, sym__2))
    {
      i_66 = ATgetArgument(h_66, 0);
      j_66 = ATgetArgument(h_66, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_39, not_null(i_66), not_null(j_66));
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
  ATerm g_54 = t;
  int h_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_54);
    }
  else
    {
      t = g_54;
      {
        ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
        p_66 = t;
        o_66 :
        if(((ATgetType(p_66) == AT_LIST) && !(ATisEmpty(p_66))))
          {
            q_66 = ATgetFirst((ATermList) p_66);
            r_66 = (ATerm) ATgetNext((ATermList) p_66);
            {
              t = not_null(q_66);
              {
                ATerm b_16 (ATerm t)
                {
                  t = not_null(r_66);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_16);
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
  ATerm b_67 = NULL;
  ATerm d_67 = NULL;
  b_67 = t;
  {
    ATerm e_67 = NULL;
    ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
    t = not_null(b_67);
    {
      e_67 = t;
      {
        t = SSL_explode_term(not_null(e_67));
        {
          g_67 = t;
          z_66 :
          if(match_cons(g_67, sym__2))
            {
              h_67 = ATgetArgument(g_67, 0);
              i_67 = ATgetArgument(g_67, 1);
              a_67 :
              if(match_string(h_67, ""))
                {
                  if(((d_67 != NULL) && (d_67 != i_67)))
                    _fail(i_67);
                  else
                    d_67 = i_67;
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
      t = not_null(d_67);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm q_67 = NULL;
  q_67 = t;
  p_67 :
  if(((ATgetType(q_67) == AT_LIST) && ATisEmpty(q_67)))
    {
      {
        ATerm s_67 = NULL,w_67 = NULL;
        ATerm i_54;
        i_54 = t;
        {
          ATerm v_67 = NULL;
          t = SSLgetAnnotations(not_null(q_67));
          {
            v_67 = t;
            if(((s_67 != NULL) && (s_67 != v_67)))
              _fail(v_67);
            else
              s_67 = v_67;
          }
        }
        t = i_54;
        {
          ATerm y_67 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_67));
          {
            y_67 = t;
            if(((w_67 != NULL) && (w_67 != y_67)))
              _fail(y_67);
            else
              w_67 = y_67;
          }
          t = not_null(w_67);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm c_68 (ATerm t)
  {
    ATerm j_54 = t;
    int n_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_68);
        ;
        LocalPopChoice(n_54);
      }
    else
      {
        t = j_54;
        {
          t = Nil_0(t);
          t = f_81(t);
        }
      }
    return(t);
  }
  t = c_68(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
  f_68 = t;
  e_68 :
  if(match_cons(f_68, sym__2))
    {
      g_68 = ATgetArgument(f_68, 0);
      h_68 = ATgetArgument(f_68, 1);
      {
        t = not_null(g_68);
        {
          ATerm g_16 (ATerm t)
          {
            t = not_null(h_68);
            return(t);
          }
          t = at_end_1(t, g_16);
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
  ATerm p_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(w_54);
    }
  else
    {
      t = p_54;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  q_68 :
  if(match_cons(r_68, sym__2))
    {
      s_68 = ATgetArgument(r_68, 0);
      t_68 = ATgetArgument(r_68, 1);
      {
        ATerm x_68 = NULL,z_68 = NULL;
        ATerm y_68 = NULL;
        t = SSLgetAnnotations(not_null(r_68));
        {
          y_68 = t;
          if(((x_68 != NULL) && (x_68 != y_68)))
            _fail(y_68);
          else
            x_68 = y_68;
        }
        {
          t = not_null(s_68);
          {
            ATerm b_69 = NULL;
            t = t_60(t);
            {
              z_68 = t;
              {
                t = not_null(t_68);
                {
                  ATerm d_69 = NULL;
                  t = u_60(t);
                  {
                    b_69 = t;
                    {
                      ATerm e_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_68), not_null(b_69)), not_null(x_68));
                      {
                        e_69 = t;
                        if(((d_69 != NULL) && (d_69 != e_69)))
                          _fail(e_69);
                        else
                          d_69 = e_69;
                      }
                      t = not_null(d_69);
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
  ATerm l_69 = NULL;
  l_69 = t;
  t = SSL_implode_string(not_null(l_69));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm))
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(((ATgetType(u_69) == AT_LIST) && !(ATisEmpty(u_69))))
    {
      v_69 = ATgetFirst((ATermList) u_69);
      w_69 = (ATerm) ATgetNext((ATermList) u_69);
      {
        ATerm a_70 = NULL,c_70 = NULL;
        ATerm b_70 = NULL;
        t = SSLgetAnnotations(not_null(u_69));
        {
          b_70 = t;
          if(((a_70 != NULL) && (a_70 != b_70)))
            _fail(b_70);
          else
            a_70 = b_70;
        }
        {
          t = not_null(v_69);
          {
            ATerm e_70 = NULL;
            t = c_62(t);
            {
              c_70 = t;
              {
                t = not_null(w_69);
                {
                  ATerm g_70 = NULL;
                  t = d_62(t);
                  {
                    e_70 = t;
                    {
                      ATerm h_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_70)), not_null(c_70)), not_null(a_70));
                      {
                        h_70 = t;
                        if(((g_70 != NULL) && (g_70 != h_70)))
                          _fail(h_70);
                        else
                          g_70 = h_70;
                      }
                      t = not_null(g_70);
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
  ATerm o_70 = NULL;
  o_70 = t;
  t = SSL_explode_string(not_null(o_70));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm x_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_70 (ATerm t)
        {
          ATerm a_55 = t;
          int b_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, t_70);
              ;
              LocalPopChoice(b_55);
            }
          else
            {
              t = a_55;
              {
                ATerm h_16 (ATerm t)
                {
                  ATerm s_70 = NULL;
                  s_70 = t;
                  r_70 :
                  if(!(match_int(s_70, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm m_16 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, h_16, m_16);
              }
            }
          return(t);
        }
        t = t_70(t);
        ;
        LocalPopChoice(z_54);
      }
    else
      {
        t = x_54;
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
  ATerm c_55;
  c_55 = t;
  {
    ATerm h_71 = NULL,j_71 = NULL,l_71 = NULL,n_71 = NULL,r_71 = NULL,v_71 = NULL,z_71 = NULL,d_72 = NULL;
    t = term_i_55;
    {
      t = set_config_0(t);
      {
        t = term_j_55;
        {
          t = set_config_0(t);
          {
            t = term_k_55;
            {
              t = set_config_0(t);
              {
                ATerm l_55;
                l_55 = t;
                {
                  ATerm i_71 = NULL;
                  t = term_p_55;
                  {
                    t = xtc_find_path_0(t);
                    {
                      i_71 = t;
                      if(((h_71 != NULL) && (h_71 != i_71)))
                        _fail(i_71);
                      else
                        h_71 = i_71;
                    }
                  }
                }
                t = l_55;
                {
                  ATerm q_55;
                  q_55 = t;
                  {
                    ATerm k_71 = NULL;
                    t = term_r_55;
                    {
                      t = xtc_find_path_0(t);
                      {
                        k_71 = t;
                        if(((j_71 != NULL) && (j_71 != k_71)))
                          _fail(k_71);
                        else
                          j_71 = k_71;
                      }
                    }
                  }
                  t = q_55;
                  {
                    ATerm m_71 = NULL;
                    t = term_s_55;
                    {
                      t = xtc_find_path_0(t);
                      {
                        m_71 = t;
                        if(((l_71 != NULL) && (l_71 != m_71)))
                          _fail(m_71);
                        else
                          l_71 = m_71;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_71)), term_m_36), not_null(j_71)), term_m_36), not_null(h_71)), term_m_36));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, term_u_55), term_t_55));
                          {
                            t = set_config_0(t);
                            {
                              ATerm v_55;
                              v_55 = t;
                              {
                                ATerm o_71 = NULL,q_71 = NULL;
                                ATerm p_71 = NULL;
                                t = term_w_55;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    p_71 = t;
                                    if(((o_71 != NULL) && (o_71 != p_71)))
                                      _fail(p_71);
                                    else
                                      o_71 = p_71;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_71), term_x_55);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      q_71 = t;
                                      if(((n_71 != NULL) && (n_71 != q_71)))
                                        _fail(q_71);
                                      else
                                        n_71 = q_71;
                                    }
                                  }
                                }
                              }
                              t = v_55;
                              {
                                ATerm j_57;
                                j_57 = t;
                                {
                                  ATerm s_71 = NULL,u_71 = NULL;
                                  ATerm t_71 = NULL;
                                  t = term_w_55;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      t_71 = t;
                                      if(((s_71 != NULL) && (s_71 != t_71)))
                                        _fail(t_71);
                                      else
                                        s_71 = t_71;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_71), term_x_55);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        u_71 = t;
                                        if(((r_71 != NULL) && (r_71 != u_71)))
                                          _fail(u_71);
                                        else
                                          r_71 = u_71;
                                      }
                                    }
                                  }
                                }
                                t = j_57;
                                {
                                  ATerm w_71 = NULL,y_71 = NULL;
                                  ATerm x_71 = NULL;
                                  t = term_k_57;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      x_71 = t;
                                      if(((w_71 != NULL) && (w_71 != x_71)))
                                        _fail(x_71);
                                      else
                                        w_71 = x_71;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_71), term_x_55);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        y_71 = t;
                                        if(((v_71 != NULL) && (v_71 != y_71)))
                                          _fail(y_71);
                                        else
                                          v_71 = y_71;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_71)), term_m_36), not_null(r_71)), term_m_36), not_null(n_71)), term_m_36));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm l_57;
                                        l_57 = t;
                                        {
                                          ATerm a_72 = NULL,c_72 = NULL;
                                          ATerm b_72 = NULL;
                                          t = term_w_55;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              b_72 = t;
                                              if(((a_72 != NULL) && (a_72 != b_72)))
                                                _fail(b_72);
                                              else
                                                a_72 = b_72;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), term_m_57);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                c_72 = t;
                                                if(((z_71 != NULL) && (z_71 != c_72)))
                                                  _fail(c_72);
                                                else
                                                  z_71 = c_72;
                                              }
                                            }
                                          }
                                        }
                                        t = l_57;
                                        {
                                          ATerm e_72 = NULL,g_72 = NULL;
                                          ATerm f_72 = NULL;
                                          t = term_k_57;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              f_72 = t;
                                              if(((e_72 != NULL) && (e_72 != f_72)))
                                                _fail(f_72);
                                              else
                                                e_72 = f_72;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), term_m_57);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                g_72 = t;
                                                if(((d_72 != NULL) && (d_72 != g_72)))
                                                  _fail(g_72);
                                                else
                                                  d_72 = g_72;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_57), term_q_57), not_null(d_72)), term_n_57), term_p_57), term_o_57), not_null(z_71)), term_n_57));
                                            {
                                              t = set_config_0(t);
                                              {
                                                t = term_s_57;
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
  t = c_55;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm n_16 (ATerm t)
      {
        ATerm v_72 = NULL;
        t = term_x_49;
        {
          t = get_config_0(t);
          {
            ATerm w_72 = NULL;
            t = term_t_57;
            {
              t = xtc_find_0(t);
              {
                w_72 = t;
                if(((v_72 != NULL) && (v_72 != w_72)))
                  _fail(w_72);
                else
                  v_72 = w_72;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_72), term_n_18);
              {
                t = copy_file_0(t);
                {
                  t = term_b_17;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, n_16);
      {
        ATerm o_16 (ATerm t)
        {
          t = term_e_50;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_b_17;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, o_16);
        {
          ATerm u_57 = t;
          int v_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_57;
              x_57 = t;
              {
                t = term_c_35;
                t = get_config_0(t);
              }
              t = x_57;
              ;
              LocalPopChoice(v_57);
            }
          else
            {
              t = u_57;
              {
                t = (ATerm) ATinsert(ATempty, term_y_57);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm p_16 (ATerm t)
              {
                ATerm d_58;
                d_58 = t;
                {
                  t = term_c_35;
                  {
                    t = get_config_0(t);
                    {
                      ATerm q_16 (ATerm t)
                      {
                        t = term_e_58;
                        return(t);
                      }
                      t = debug_1(t, q_16);
                    }
                  }
                }
                t = d_58;
                return(t);
              }
              t = if_verbose1_1(t, p_16);
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
  ATerm j_58 = t;
  int k_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm s_16 (ATerm t)
        {
          ATerm v_16 (ATerm t)
          {
            ATerm b_73 = NULL;
            ATerm c_73 = NULL;
            c_73 = t;
            if(((b_73 != NULL) && (b_73 != c_73)))
              _fail(c_73);
            else
              b_73 = c_73;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(CheckATermList(not_null(b_73)), term_m_58));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, v_16);
          return(t);
        }
        t = profile_p__2(t, s_16, compile_0);
        {
          ATerm w_16 (ATerm t)
          {
            ATerm g_73 = NULL;
            ATerm h_73 = NULL;
            t = run_time_0(t);
            {
              h_73 = t;
              if(((g_73 != NULL) && (g_73 != h_73)))
                _fail(h_73);
              else
                g_73 = h_73;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_58), not_null(g_73)), term_n_58));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, w_16);
          {
            t = term_b_17;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(k_58);
    }
  else
    {
      t = j_58;
      {
        ATerm i_73 = NULL;
        ATerm j_73 = NULL;
        t = run_time_0(t);
        {
          j_73 = t;
          if(((i_73 != NULL) && (i_73 != j_73)))
            _fail(j_73);
          else
            i_73 = j_73;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_58), not_null(i_73)), term_p_58));
          {
            t = printnl_0(t);
            {
              t = term_d_25;
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
