#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
ATerm term_g_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_w_49;
ATerm term_t_49;
ATerm term_o_49;
ATerm term_i_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_s_48;
ATerm term_n_48;
ATerm term_l_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_e_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_y_46;
ATerm term_h_45;
ATerm term_x_44;
ATerm term_s_44;
ATerm term_n_44;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_j_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_m_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_r_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_t_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_c_38;
ATerm term_z_37;
ATerm term_s_37;
ATerm term_k_37;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_v_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_d_35;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_t_33;
ATerm term_p_33;
ATerm term_a_33;
ATerm term_k_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_y_31;
ATerm term_s_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_m_26;
ATerm term_h_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_l_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_k_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_p_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_x_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_b_14;
void init_constant_terms (void)
{
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_x_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_b_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_y_33);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_z_19);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_z_19);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_z_19);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_z_19);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_z_19);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_b_14);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_a_41, term_z_19);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_m_41, term_z_19);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym__2, term_q_41, term_z_19);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_n_43, term_o_43);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__3, term_n_43, term_o_43, (ATerm) ATempty);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9beta8", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_x_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_l_23);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_b_14);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("<ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_82 (ATerm), ATerm t_82 (ATerm));
ATerm crush_2 (ATerm, ATerm q_81 (ATerm), ATerm r_81 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_89 (ATerm));
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm v_96 (ATerm));
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
ATerm extract_0 (ATerm);
ATerm extract_all_0 (ATerm);
ATerm output_frontend_0 (ATerm);
ATerm if_keep2_1 (ATerm, ATerm n_90 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm o_90 (ATerm));
ATerm AddMain_1 (ATerm, ATerm l_68 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm f_97 (ATerm));
ATerm add_main_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm));
ATerm repeat_1 (ATerm, ATerm e_69 (ATerm));
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm m_68 (ATerm));
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm d_97 (ATerm), ATerm e_97 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm i_93 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm u_96 (ATerm));
ATerm assert_1 (ATerm, ATerm v_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_87 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm f_63 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_96 (ATerm), ATerm x_96 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm a_90 (ATerm));
ATerm basename_1 (ATerm, ATerm o_85 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_86 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm x_68 (ATerm), ATerm y_68 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_86 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm k_96 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm n_96 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_89 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm debug_1 (ATerm, ATerm c_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_68 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm c_90 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm b_90 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm d_90 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_82 (ATerm), ATerm g_82 (ATerm));
ATerm union_1 (ATerm, ATerm b_82 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm m_93 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm table_remove_0 (ATerm);
ATerm toggle_config_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm e_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm w_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_92 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_92 (ATerm));
ATerm parse_options_1 (ATerm, ATerm d_92 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_57 (ATerm), ATerm r_57 (ATerm));
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
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  c_1 :
  if(match_cons(v_1, sym__2))
    {
      w_1 = ATgetArgument(v_1, 0);
      x_1 = ATgetArgument(v_1, 1);
      {
        ATerm w_13;
        w_13 = t;
        t = SSL_printnl(not_null(w_1), not_null(x_1));
        t = w_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_82 (ATerm), ATerm t_82 (ATerm))
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_82(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm b_3 = NULL,d_3 = NULL,f_3 = NULL;
        b_3 = t;
        a_3 :
        if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
          {
            d_3 = ATgetFirst((ATermList) b_3);
            f_3 = (ATerm) ATgetNext((ATermList) b_3);
            {
              ATerm k_3 = NULL;
              ATerm l_3 = NULL;
              t = not_null(f_3);
              {
                t = foldr_2(t, s_82, t_82);
                {
                  l_3 = t;
                  if(((k_3 != NULL) && (k_3 != l_3)))
                    _fail(l_3);
                  else
                    k_3 = l_3;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), not_null(k_3));
                t = t_82(t);
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
ATerm crush_2 (ATerm t, ATerm q_81 (ATerm), ATerm r_81 (ATerm))
{
  ATerm u_3 = NULL;
  ATerm w_3 = NULL;
  u_3 = t;
  {
    ATerm x_3 = NULL;
    ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
    t = not_null(u_3);
    {
      x_3 = t;
      {
        t = SSL_explode_term(not_null(x_3));
        {
          z_3 = t;
          s_3 :
          if(match_cons(z_3, sym__2))
            {
              a_4 = ATgetArgument(z_3, 0);
              b_4 = ATgetArgument(z_3, 1);
              if(((w_3 != NULL) && (w_3 != b_4)))
                _fail(b_4);
              else
                w_3 = b_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_3);
      t = foldr_2(t, q_81, r_81);
    }
  }
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = term_b_14;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_14;
      i_14 = t;
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        t = term_j_14;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), term_k_14);
          t = geq_0(t);
        }
      }
      t = i_14;
      t = z_89(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
      }
    }
  return(t);
}
ATerm link_object_code_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL;
  n_4 = t;
  m_4 :
  if(match_cons(n_4, sym_FILE_1))
    {
      o_4 = ATgetArgument(n_4, 0);
      {
        ATerm q_4 = NULL;
        ATerm r_4 = NULL;
        ATerm c_0 (ATerm t)
        {
          ATerm f_0 (ATerm t)
          {
            t = term_m_14;
            return(t);
          }
          t = say_1(t, f_0);
          return(t);
        }
        t = if_verbose2_1(t, c_0);
        {
          ATerm s_4 = NULL;
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_p_14;
              t = get_config_0(t);
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_u_14;
                  return(t);
                }
                t = get_outfile_1(t, s_0);
              }
            }
          {
            r_4 = t;
            {
              if(((q_4 != NULL) && (q_4 != r_4)))
                _fail(r_4);
              else
                q_4 = r_4;
              {
                ATerm t_4 = NULL;
                t = term_v_14;
                {
                  t = get_config_0(t);
                  {
                    t_4 = t;
                    if(((s_4 != NULL) && (s_4 != t_4)))
                      _fail(t_4);
                    else
                      s_4 = t_4;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_4)), not_null(q_4)), term_p_14), not_null(o_4)));
                  {
                    t = if_verbose3_1(t, debug_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_4));
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
  ATerm c_5 = NULL,d_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_FILE_1))
    {
      d_5 = ATgetArgument(c_5, 0);
      {
        ATerm f_5 = NULL;
        ATerm g_5 = NULL;
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = term_z_14;
            return(t);
          }
          t = say_1(t, u_0);
          return(t);
        }
        t = if_verbose2_1(t, t_0);
        {
          ATerm h_5 = NULL;
          ATerm v_0 (ATerm t)
          {
            t = term_a_15;
            return(t);
          }
          t = get_outfile_1(t, v_0);
          {
            g_5 = t;
            {
              if(((f_5 != NULL) && (f_5 != g_5)))
                _fail(g_5);
              else
                f_5 = g_5;
              {
                ATerm i_5 = NULL,k_5 = NULL;
                ATerm j_5 = NULL;
                t = term_b_15;
                {
                  t = get_config_0(t);
                  {
                    j_5 = t;
                    if(((i_5 != NULL) && (i_5 != j_5)))
                      _fail(j_5);
                    else
                      i_5 = j_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_5)), term_p_14), not_null(d_5)), term_c_15));
                  {
                    ATerm d_15 = t;
                    int j_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(j_15);
                      }
                    else
                      {
                        t = d_15;
                        t = conc_more_lists_0(t);
                      }
                    {
                      k_5 = t;
                      if(((h_5 != NULL) && (h_5 != k_5)))
                        _fail(k_5);
                      else
                        h_5 = k_5;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(h_5));
                  {
                    t = if_verbose3_1(t, debug_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_5));
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
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_15;
      o_15 = t;
      {
        t = term_c_15;
        t = get_config_0(t);
      }
      t = o_15;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            ATerm q_5 = NULL;
            ATerm r_5 = NULL;
            r_5 = t;
            if(((q_5 != NULL) && (q_5 != r_5)))
              _fail(r_5);
            else
              q_5 = r_5;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(CheckATermList(not_null(q_5)), term_q_15));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, y_0);
          return(t);
        }
        ATerm x_0 (ATerm t)
        {
          t = c_to_object_code_0(t);
          t = link_object_code_0(t);
          return(t);
        }
        t = profile_p__2(t, w_0, x_0);
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      t = SSL_rename(not_null(w_5), not_null(x_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_FILE_1))
    {
      l_6 = ATgetArgument(k_6, 0);
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_6 = NULL;
            t = r_0(t);
            {
              n_6 = t;
              f_6 :
              if(match_cons(n_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_x_15);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(l_6);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_x_15;
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            {
              ATerm y_15 = t;
              int z_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_6 = NULL;
                  ATerm q_6 = NULL;
                  t = r_0(t);
                  {
                    q_6 = t;
                    {
                      if(((p_6 != NULL) && (p_6 != q_6)))
                        _fail(q_6);
                      else
                        p_6 = q_6;
                      {
                        ATerm b_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm e_16 = t;
                            int f_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(f_16);
                              }
                            else
                              {
                                t = e_16;
                                {
                                  ATerm r_6 = NULL;
                                  r_6 = t;
                                  if(((l_6 != NULL) && (l_6 != r_6)))
                                    _fail(r_6);
                                  else
                                    l_6 = r_6;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = b_16;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(p_6));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_6));
                  LocalPopChoice(z_15);
                }
              else
                {
                  t = y_15;
                  {
                    ATerm t_6 = NULL;
                    t = r_0(t);
                    {
                      t_6 = t;
                      if(((l_6 != NULL) && (l_6 != t_6)))
                        _fail(t_6);
                      else
                        l_6 = t_6;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_6));
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
ATerm xtc_transform_1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, v_96, z_0);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = term_g_16;
    return(t);
  }
  t = xtc_transform_1(t, a_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm c_7 = NULL;
    ATerm d_7 = NULL;
    t = term_j_16;
    {
      t = xtc_find_0(t);
      {
        d_7 = t;
        if(((c_7 != NULL) && (c_7 != d_7)))
          _fail(d_7);
        else
          c_7 = d_7;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_7)), term_k_16);
    return(t);
  }
  t = xtc_transform_2(t, b_1, d_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm i_7 = NULL,k_7 = NULL;
    ATerm q_16;
    q_16 = t;
    {
      ATerm j_7 = NULL;
      t = pass_verbose_0(t);
      {
        j_7 = t;
        if(((i_7 != NULL) && (i_7 != j_7)))
          _fail(j_7);
        else
          i_7 = j_7;
      }
    }
    t = q_16;
    {
      ATerm n_7 = NULL;
      t = term_r_16;
      {
        t = get_config_0(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm l_7 = NULL;
            ATerm m_7 = NULL;
            m_7 = t;
            if(((l_7 != NULL) && (l_7 != m_7)))
              _fail(m_7);
            else
              l_7 = m_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_7)), term_r_16);
            return(t);
          }
          t = map_1(t, g_1);
          {
            n_7 = t;
            if(((k_7 != NULL) && (k_7 != n_7)))
              _fail(n_7);
            else
              k_7 = n_7;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_7)), (ATerm) ATinsert(ATempty, term_s_16)), not_null(i_7));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, e_1, f_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_u_16;
    return(t);
  }
  ATerm i_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, h_1, i_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_v_16;
    return(t);
  }
  ATerm k_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, j_1, k_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = term_w_16;
      return(t);
    }
    t = debug_1(t, m_1);
    return(t);
  }
  t = if_verbose2_1(t, l_1);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm a_8 = NULL;
        ATerm b_8 = NULL;
        b_8 = t;
        if(((a_8 != NULL) && (a_8 != b_8)))
          _fail(b_8);
        else
          a_8 = b_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_x_16));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, p_1);
      return(t);
    }
    ATerm o_1 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = stratego_cf_0(t);
        {
          t = s2c_0(t);
          {
            t = ac2abox_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_g_16;
                return(t);
              }
              t = xtc_transform_1(t, q_1);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = term_y_16;
                    return(t);
                  }
                  t = get_outfile_1(t, s_1);
                  return(t);
                }
                t = rename_to_1(t, r_1);
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, n_1, o_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  ATerm u_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, t_1, u_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  ATerm z_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_8)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_g_17;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm m_8 = NULL;
    ATerm n_8 = NULL;
    t = pass_verbose_0(t);
    {
      n_8 = t;
      if(((m_8 != NULL) && (m_8 != n_8)))
        _fail(n_8);
      else
        m_8 = n_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(m_8)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  ATerm d_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_n_17;
    return(t);
  }
  ATerm f_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      t = term_o_17;
      return(t);
    }
    t = debug_1(t, h_2);
    return(t);
  }
  t = if_verbose2_1(t, g_2);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        ATerm y_8 = NULL;
        ATerm z_8 = NULL;
        z_8 = t;
        if(((y_8 != NULL) && (y_8 != z_8)))
          _fail(z_8);
        else
          y_8 = z_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_p_17));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, k_2);
      return(t);
    }
    ATerm j_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm q_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_17;
            w_17 = t;
            {
              ATerm x_17 = t;
              if((PushChoice() == 0))
                {
                  t = term_y_17;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = x_17;
                }
            }
            t = w_17;
            t = fusion_0(t);
            LocalPopChoice(v_17);
          }
        else
          {
            t = q_17;
            {
            }
          }
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
    t = profile_p__2(t, i_2, j_2);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_z_17;
    return(t);
  }
  ATerm m_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, l_2, m_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = term_e_18;
    return(t);
  }
  ATerm o_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  ATerm q_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_g_18;
    return(t);
  }
  ATerm s_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm s_9 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18;
      o_18 = t;
      {
        t = term_p_18;
        t = get_config_0(t);
      }
      t = o_18;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_0(t);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              t = (ATerm) ATinsert(ATempty, term_z_18);
              t = fatal_error_0(t);
            }
          }
        {
          ATerm t_2 (ATerm t)
          {
            ATerm t_9 = NULL;
            ATerm u_2 (ATerm t)
            {
              t = term_a_19;
              return(t);
            }
            t = get_outfile_1(t, u_2);
            {
              t_9 = t;
              if(((s_9 != NULL) && (s_9 != t_9)))
                _fail(t_9);
              else
                s_9 = t_9;
            }
            return(t);
          }
          t = copy_to_1(t, t_2);
          {
            ATerm v_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_c_19);
              return(t);
            }
            t = say_1(t, v_2);
            t = xtc_io_exit_0(t);
          }
        }
      }
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
      }
    }
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm n_90 (ATerm))
{
  ATerm d_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19;
      n_19 = t;
      {
        ATerm w_9 = NULL;
        ATerm x_9 = NULL;
        t = term_o_19;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_k_14);
          t = geq_0(t);
        }
      }
      t = n_19;
      t = n_90(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = d_19;
      {
      }
    }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm d_10 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = term_p_19;
    return(t);
  }
  ATerm x_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(b_10)), term_s_16);
    return(t);
  }
  t = xtc_transform_2(t, w_2, x_2);
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_2 (ATerm t)
      {
        ATerm e_10 = NULL;
        ATerm c_3 (ATerm t)
        {
          t = term_s_19;
          return(t);
        }
        t = get_outfile_1(t, c_3);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        return(t);
      }
      t = copy_to_1(t, z_2);
      {
        ATerm e_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_10)), term_t_19);
          return(t);
        }
        t = say_1(t, e_3);
      }
      return(t);
    }
    t = if_keep2_1(t, y_2);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm u_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_19;
      x_19 = t;
      {
        ATerm i_10 = NULL;
        ATerm j_10 = NULL;
        t = term_o_19;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), term_y_19);
          t = geq_0(t);
        }
      }
      t = x_19;
      t = o_90(t);
      LocalPopChoice(w_19);
    }
  else
    {
      t = u_19;
      {
      }
    }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm l_68 (ATerm))
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
        t = term_z_19;
        {
          t = l_68(t);
          {
            s_10 = t;
            if(((r_10 != NULL) && (r_10 != s_10)))
              _fail(s_10);
            else
              r_10 = s_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(p_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_a_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_10)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm f_97 (ATerm))
{
  t = read_from_0(t);
  {
    t = f_97(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm x_10 = NULL,z_10 = NULL;
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_20;
      d_20 = t;
      {
        ATerm y_10 = NULL;
        t = term_l_20;
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
                ATerm g_3 (ATerm t)
                {
                  ATerm h_3 (ATerm t)
                  {
                    t = term_q_20;
                    return(t);
                  }
                  t = debug_1(t, h_3);
                  return(t);
                }
                t = if_verbose2_1(t, g_3);
              }
            }
          }
        }
      }
      t = d_20;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            t = not_null(x_10);
            return(t);
          }
          t = AddMain_1(t, j_3);
          return(t);
        }
        t = xtc_io_transform_1(t, i_3);
      }
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
      }
    }
  {
    ATerm m_3 (ATerm t)
    {
      ATerm n_3 (ATerm t)
      {
        ATerm a_11 = NULL;
        ATerm o_3 (ATerm t)
        {
          t = term_r_20;
          return(t);
        }
        t = get_outfile_1(t, o_3);
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        return(t);
      }
      t = copy_to_1(t, n_3);
      {
        ATerm p_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_10)), term_s_20);
          return(t);
        }
        t = say_1(t, p_3);
      }
      return(t);
    }
    t = if_keep3_1(t, m_3);
  }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm))
{
  ATerm d_11 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_69(t);
        t = d_11(t);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = c_69(t);
      }
    return(t);
  }
  t = d_11(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm e_69 (ATerm))
{
  t = repeat_2(t, e_69, _id);
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm h_11 = NULL;
  ATerm j_11 = NULL,k_11 = NULL;
  h_11 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm v_20;
      v_20 = t;
      {
        ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
        t = term_y_20;
        {
          t = table_get_0(t);
          {
            l_11 = t;
            g_11 :
            if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
              {
                m_11 = ATgetFirst((ATermList) l_11);
                n_11 = (ATerm) ATgetNext((ATermList) l_11);
                {
                  if(((k_11 != NULL) && (k_11 != m_11)))
                    _fail(m_11);
                  else
                    k_11 = m_11;
                  {
                    if(((j_11 != NULL) && (j_11 != n_11)))
                      _fail(n_11);
                    else
                      j_11 = n_11;
                    {
                      t = not_null(k_11);
                      {
                        ATerm r_3 (ATerm t)
                        {
                          ATerm b_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = remove_file_0(t);
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = b_21;
                              {
                              }
                            }
                          return(t);
                        }
                        t = map_1(t, r_3);
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
      t = v_20;
      {
        ATerm t_3 (ATerm t)
        {
          t = term_w_20;
          return(t);
        }
        t = end_scope_1(t, t_3);
      }
      return(t);
    }
    t = repeat_2(t, q_3, _id);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_14;
        t = get_config_0(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = term_x_15;
      }
    return(t);
  }
  t = copy_to_1(t, v_3);
  {
    t = term_b_14;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm s_11 = NULL,u_11 = NULL;
  ATerm j_21;
  j_21 = t;
  {
    ATerm t_11 = NULL;
    t = m_68(t);
    {
      t_11 = t;
      if(((s_11 != NULL) && (s_11 != t_11)))
        _fail(t_11);
      else
        s_11 = t_11;
    }
  }
  t = j_21;
  {
    ATerm v_11 = NULL;
    t = term_k_21;
    {
      t = get_config_0(t);
      {
        v_11 = t;
        if(((u_11 != NULL) && (u_11 != v_11)))
          _fail(v_11);
        else
          u_11 = v_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(s_11));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_stderr_0))
    {
      ATerm e_12 = NULL,g_12 = NULL;
      ATerm l_21;
      l_21 = t;
      {
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(c_12));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
      }
      t = l_21;
      {
        ATerm h_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(e_12));
        {
          h_12 = t;
          if(((g_12 != NULL) && (g_12 != h_12)))
            _fail(h_12);
          else
            g_12 = h_12;
        }
        t = not_null(g_12);
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
  ATerm p_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_stdout_0))
    {
      ATerm r_12 = NULL,t_12 = NULL;
      ATerm m_21;
      m_21 = t;
      {
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(p_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
      }
      t = m_21;
      {
        ATerm u_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(r_12));
        {
          u_12 = t;
          if(((t_12 != NULL) && (t_12 != u_12)))
            _fail(u_12);
          else
            t_12 = u_12;
        }
        t = not_null(t_12);
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
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_FILE_1))
    {
      h_13 = ATgetArgument(g_13, 0);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 = NULL;
            ATerm k_13 = NULL;
            t = q_0(t);
            {
              k_13 = t;
              {
                if(((j_13 != NULL) && (j_13 != k_13)))
                  _fail(k_13);
                else
                  j_13 = k_13;
                {
                  ATerm v_21 = t;
                  int y_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(y_21);
                    }
                  else
                    {
                      t = v_21;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(j_13));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_13));
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            {
              ATerm z_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_13 = NULL;
                  ATerm n_13 = NULL;
                  t = q_0(t);
                  {
                    n_13 = t;
                    {
                      if(((m_13 != NULL) && (m_13 != n_13)))
                        _fail(n_13);
                      else
                        m_13 = n_13;
                      {
                        ATerm b_22 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm c_22 = t;
                            int f_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(f_22);
                              }
                            else
                              {
                                t = c_22;
                                {
                                  ATerm l_22 = t;
                                  int m_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(m_22);
                                    }
                                  else
                                    {
                                      t = l_22;
                                      {
                                        ATerm o_13 = NULL;
                                        o_13 = t;
                                        if(((h_13 != NULL) && (h_13 != o_13)))
                                          _fail(o_13);
                                        else
                                          h_13 = o_13;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = b_22;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(m_13));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_13));
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = z_21;
                  {
                    ATerm q_13 = NULL;
                    t = q_0(t);
                    {
                      q_13 = t;
                      if(((h_13 != NULL) && (h_13 != q_13)))
                        _fail(q_13);
                      else
                        h_13 = q_13;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_13));
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
  ATerm z_13 = NULL;
  ATerm n_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_22;
      w_22 = t;
      {
        t = term_x_22;
        t = get_config_0(t);
      }
      t = w_22;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm a_14 = NULL;
          ATerm c_4 (ATerm t)
          {
            t = term_y_22;
            return(t);
          }
          t = get_outfile_1(t, c_4);
          {
            a_14 = t;
            if(((z_13 != NULL) && (z_13 != a_14)))
              _fail(a_14);
            else
              z_13 = a_14;
          }
          return(t);
        }
        t = copy_to_1(t, y_3);
        {
          ATerm z_22;
          z_22 = t;
          {
            t = (ATerm) ATinsert(ATempty, term_a_23);
            t = echo_0(t);
          }
          t = z_22;
          t = xtc_io_exit_0(t);
        }
      }
      LocalPopChoice(r_22);
    }
  else
    {
      t = n_22;
      {
      }
    }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm f_14 = NULL,h_14 = NULL;
  ATerm g_14 = NULL;
  t = term_o_19;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = term_l_23;
      }
    {
      g_14 = t;
      if(((f_14 != NULL) && (f_14 != g_14)))
        _fail(g_14);
      else
        f_14 = g_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), term_l_23);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          h_14 = t;
          if(((e_14 != NULL) && (e_14 != h_14)))
            _fail(h_14);
          else
            e_14 = h_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_14)), term_o_19);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  t = SSL_int_to_string(not_null(l_14));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm q_14 = NULL;
  ATerm r_14 = NULL,t_14 = NULL;
  ATerm s_14 = NULL;
  t = term_j_14;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = term_l_23;
      }
    {
      s_14 = t;
      if(((r_14 != NULL) && (r_14 != s_14)))
        _fail(s_14);
      else
        r_14 = s_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), term_l_23);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          t_14 = t;
          if(((q_14 != NULL) && (q_14 != t_14)))
            _fail(t_14);
          else
            q_14 = t_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_14)), term_j_14);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm x_14 = NULL;
  ATerm y_14 = NULL;
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_14;
      t = get_config_0(t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      {
        t = term_k_21;
        t = get_config_0(t);
      }
    }
  {
    y_14 = t;
    if(((x_14 != NULL) && (x_14 != y_14)))
      _fail(y_14);
    else
      x_14 = y_14;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), term_s_23);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_stdin_0))
    {
      ATerm h_15 = NULL;
      ATerm i_15 = NULL;
      t = term_t_23;
      {
        t = ReadFromFile_0(t);
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
      }
      t = not_null(h_15);
    }
  else
    {
      if(match_cons(f_15, sym_FILE_1))
        {
          g_15 = ATgetArgument(f_15, 0);
          {
            ATerm k_15 = NULL;
            ATerm l_15 = NULL;
            t = not_null(g_15);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
              }
            }
            t = not_null(k_15);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym__2))
    {
      t_15 = ATgetArgument(s_15, 0);
      u_15 = ATgetArgument(s_15, 1);
      t = SSL_WriteToBinaryFile(not_null(t_15), not_null(u_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm c_16 = NULL;
  a_16 = t;
  {
    ATerm d_16 = NULL;
    t = xtc_new_file_0(t);
    {
      d_16 = t;
      {
        if(((c_16 != NULL) && (c_16 != d_16)))
          _fail(d_16);
        else
          c_16 = d_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(a_16));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_16);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_16));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm d_97 (ATerm), ATerm e_97 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, d_97, e_97);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = SSL_close_file(not_null(h_16));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      t = SSL_execvp(not_null(n_16), not_null(o_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  t = SSL_waitpid(not_null(t_16));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm i_93 (ATerm))
{
  ATerm d_17 = NULL;
  ATerm f_17 = NULL;
  d_17 = t;
  {
    t = fork_0(t);
    {
      f_17 = t;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_17 = NULL;
            h_17 = t;
            z_16 :
            if(match_int(h_17, 0))
              {
                t = not_null(d_17);
                t = i_93(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
              t = not_null(f_17);
              {
                t = waitpid_0(t);
                {
                  i_17 = t;
                  b_17 :
                  if(match_cons(i_17, sym_WaitStatus_3))
                    {
                      j_17 = ATgetArgument(i_17, 0);
                      k_17 = ATgetArgument(i_17, 1);
                      l_17 = ATgetArgument(i_17, 2);
                      c_17 :
                      if(match_int(j_17, 0))
                        {
                          t = not_null(d_17);
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
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      {
        ATerm d_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(u_17));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, d_4);
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
ATerm xtc_command_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm a_18 = NULL;
  ATerm a_24;
  a_24 = t;
  {
    ATerm b_18 = NULL;
    t = u_96(t);
    {
      t = xtc_find_0(t);
      {
        b_18 = t;
        if(((a_18 != NULL) && (a_18 != b_18)))
          _fail(b_18);
        else
          a_18 = b_18;
      }
    }
  }
  t = a_24;
  {
    ATerm b_24;
    b_24 = t;
    {
      ATerm c_18 = NULL;
      ATerm d_18 = NULL;
      d_18 = t;
      if(((c_18 != NULL) && (c_18 != d_18)))
        _fail(d_18);
      else
        c_18 = d_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), not_null(c_18));
        t = call_0(t);
      }
    }
    t = b_24;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
        ATerm c_24;
        c_24 = t;
        {
          ATerm t_18 = NULL;
          ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
          t = v_86(t);
          {
            t_18 = t;
            {
              if(((q_18 != NULL) && (q_18 != t_18)))
                _fail(t_18);
              else
                q_18 = t_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_18), not_null(m_18), not_null(n_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_24 = t;
                    int e_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), term_x_20);
                        t = table_get_0(t);
                        LocalPopChoice(e_24);
                      }
                    else
                      {
                        t = d_24;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_18 = t;
                      j_18 :
                      if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
                        {
                          v_18 = ATgetFirst((ATermList) u_18);
                          w_18 = (ATerm) ATgetNext((ATermList) u_18);
                          {
                            if(((r_18 != NULL) && (r_18 != v_18)))
                              _fail(v_18);
                            else
                              r_18 = v_18;
                            {
                              if(((s_18 != NULL) && (s_18 != w_18)))
                                _fail(w_18);
                              else
                                s_18 = w_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_18), term_x_20, (ATerm) ATinsert(CheckATermList(not_null(s_18)), (ATerm) ATinsert(CheckATermList(not_null(r_18)), not_null(m_18))));
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
        t = c_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm f_24;
  f_24 = t;
  {
    t = j_87(t);
    {
      ATerm e_4 (ATerm t)
      {
        t = term_g_24;
        return(t);
      }
      t = debug_1(t, e_4);
    }
  }
  t = f_24;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
      g_19 = t;
      b_19 :
      if(match_cons(g_19, sym__2))
        {
          h_19 = ATgetArgument(g_19, 0);
          i_19 = ATgetArgument(g_19, 1);
          {
            if(((f_19 != NULL) && (f_19 != h_19)))
              _fail(h_19);
            else
              f_19 = h_19;
            if(((e_19 != NULL) && (e_19 != i_19)))
              _fail(i_19);
            else
              e_19 = i_19;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_24);
      t = SSL_open_file(not_null(f_19), not_null(e_19));
    }
  else
    {
      t = h_24;
      {
        ATerm j_19 = NULL;
        ATerm k_19 = NULL;
        ATerm f_4 (ATerm t)
        {
          t = term_j_24;
          return(t);
        }
        t = obsolete_1(t, f_4);
        {
          j_19 = t;
          {
            if(((f_19 != NULL) && (f_19 != j_19)))
              _fail(j_19);
            else
              f_19 = j_19;
            {
              ATerm k_24;
              k_24 = t;
              {
                ATerm l_19 = NULL;
                t = term_l_24;
                {
                  l_19 = t;
                  if(((k_19 != NULL) && (k_19 != l_19)))
                    _fail(l_19);
                  else
                    k_19 = l_19;
                }
              }
              t = k_24;
              t = SSL_open_file(not_null(f_19), not_null(k_19));
            }
          }
        }
      }
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
  ATerm q_19 = NULL;
  ATerm r_19 = NULL;
  t = term_z_19;
  {
    t = new_0(t);
    {
      r_19 = t;
      if(((q_19 != NULL) && (q_19 != r_19)))
        _fail(r_19);
      else
        q_19 = r_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_19), term_m_24);
    {
      t = conc_strings_0(t);
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm v_19 = NULL;
  t = new_file_0(t);
  {
    v_19 = t;
    {
      ATerm p_24;
      p_24 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_l_24);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_z_19);
            {
              ATerm i_4 (ATerm t)
              {
                t = term_w_20;
                return(t);
              }
              t = assert_1(t, i_4);
            }
          }
        }
      }
      t = p_24;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_stdin_0))
    {
      ATerm h_20 = NULL;
      ATerm i_20 = NULL;
      ATerm j_20 = NULL;
      t = xtc_new_file_0(t);
      {
        i_20 = t;
        {
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
          {
            ATerm k_20 = NULL;
            t = p_0(t);
            {
              k_20 = t;
              if(((j_20 != NULL) && (j_20 != k_20)))
                _fail(k_20);
              else
                j_20 = k_20;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_20)), term_p_14));
              {
                ATerm u_24 = t;
                int v_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(v_24);
                  }
                else
                  {
                    t = u_24;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(h_20);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_20));
    }
  else
    {
      if(match_cons(f_20, sym_FILE_1))
        {
          g_20 = ATgetArgument(f_20, 0);
          {
            ATerm m_20 = NULL;
            ATerm n_20 = NULL;
            t = not_null(g_20);
            {
              ATerm o_20 = NULL;
              t = xtc_new_file_0(t);
              {
                n_20 = t;
                {
                  if(((m_20 != NULL) && (m_20 != n_20)))
                    _fail(n_20);
                  else
                    m_20 = n_20;
                  {
                    ATerm p_20 = NULL;
                    t = p_0(t);
                    {
                      p_20 = t;
                      if(((o_20 != NULL) && (o_20 != p_20)))
                        _fail(p_20);
                      else
                        o_20 = p_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_20)), term_p_14), not_null(g_20)), term_y_24));
                      {
                        ATerm z_24 = t;
                        int a_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(a_25);
                          }
                        else
                          {
                            t = z_24;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(m_20);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_20));
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
  ATerm a_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_stdin_0))
    {
      ATerm c_21 = NULL,e_21 = NULL;
      ATerm b_25;
      b_25 = t;
      {
        ATerm d_21 = NULL;
        t = SSLgetAnnotations(not_null(a_21));
        {
          d_21 = t;
          if(((c_21 != NULL) && (c_21 != d_21)))
            _fail(d_21);
          else
            c_21 = d_21;
        }
      }
      t = b_25;
      {
        ATerm f_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(c_21));
        {
          f_21 = t;
          if(((e_21 != NULL) && (e_21 != f_21)))
            _fail(f_21);
          else
            e_21 = f_21;
        }
        t = not_null(e_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_FILE_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm s_21 = NULL,u_21 = NULL;
        ATerm t_21 = NULL;
        t = SSLgetAnnotations(not_null(o_21));
        {
          t_21 = t;
          if(((s_21 != NULL) && (s_21 != t_21)))
            _fail(t_21);
          else
            s_21 = t_21;
        }
        {
          t = not_null(p_21);
          {
            ATerm w_21 = NULL;
            t = f_63(t);
            {
              u_21 = t;
              {
                ATerm x_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(u_21)), not_null(s_21));
                {
                  x_21 = t;
                  if(((w_21 != NULL) && (w_21 != x_21)))
                    _fail(x_21);
                  else
                    w_21 = x_21;
                }
                t = not_null(w_21);
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
ATerm xtc_transform_2 (ATerm t, ATerm w_96 (ATerm), ATerm x_96 (ATerm))
{
  ATerm c_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          t = stdin_0(t);
        }
      LocalPopChoice(m_25);
      t = xtc_transform_file_2(t, w_96, x_96);
    }
  else
    {
      t = c_25;
      t = xtc_transform_term_2(t, w_96, x_96);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25;
      s_25 = t;
      {
        ATerm d_22 = NULL;
        ATerm e_22 = NULL;
        t = term_j_14;
        {
          t = get_config_0(t);
          {
            e_22 = t;
            if(((d_22 != NULL) && (d_22 != e_22)))
              _fail(e_22);
            else
              d_22 = e_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_22), term_y_19);
          t = geq_0(t);
        }
      }
      t = s_25;
      t = a_90(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
      }
    }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm o_85 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_22 (ATerm t)
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, k_22);
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                ATerm x_25 = t;
                int y_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm i_22 = NULL;
                      i_22 = t;
                      g_22 :
                      if(!(match_int(i_22, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, j_4, _id);
                    LocalPopChoice(y_25);
                  }
                else
                  {
                    t = x_25;
                    {
                      ATerm k_4 (ATerm t)
                      {
                        ATerm j_22 = NULL;
                        j_22 = t;
                        h_22 :
                        if(!(match_int(j_22, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, k_4, o_85);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = k_22(t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
        }
      }
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
  ATerm p_22 = NULL,q_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_cons(p_22, sym_FILE_1))
    {
      q_22 = ATgetArgument(p_22, 0);
      {
        ATerm s_22 = NULL,t_22 = NULL;
        ATerm u_22 = NULL;
        t = not_null(q_22);
        {
          ATerm v_22 = NULL;
          t = basename_1(t, _id);
          {
            u_22 = t;
            {
              if(((s_22 != NULL) && (s_22 != u_22)))
                _fail(u_22);
              else
                s_22 = u_22;
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm p_4 (ATerm t)
                  {
                    t = term_z_25;
                    return(t);
                  }
                  t = debug_1(t, p_4);
                  return(t);
                }
                t = if_verbose3_1(t, l_4);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_26, not_null(s_22));
                  {
                    t = set_config_0(t);
                    {
                      ATerm f_26 = t;
                      int g_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_p_14;
                          {
                            t = get_config_0(t);
                            t = basename_1(t, _id);
                          }
                          LocalPopChoice(g_26);
                        }
                      else
                        {
                          t = f_26;
                          t = not_null(s_22);
                        }
                      {
                        v_22 = t;
                        {
                          if(((t_22 != NULL) && (t_22 != v_22)))
                            _fail(v_22);
                          else
                            t_22 = v_22;
                          {
                            ATerm u_4 (ATerm t)
                            {
                              ATerm v_4 (ATerm t)
                              {
                                t = term_h_26;
                                return(t);
                              }
                              t = debug_1(t, v_4);
                              return(t);
                            }
                            t = if_verbose3_1(t, u_4);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_21, not_null(t_22));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_22));
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
    ATerm w_4 (ATerm t)
    {
      t = term_m_26;
      return(t);
    }
    ATerm x_4 (ATerm t)
    {
      ATerm d_23 = NULL,f_23 = NULL,h_23 = NULL,j_23 = NULL;
      ATerm n_26;
      n_26 = t;
      {
        ATerm e_23 = NULL;
        t = dep_name_0(t);
        {
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
        }
      }
      t = n_26;
      {
        ATerm o_26;
        o_26 = t;
        {
          ATerm g_23 = NULL;
          t = pass_verbose_0(t);
          {
            g_23 = t;
            if(((f_23 != NULL) && (f_23 != g_23)))
              _fail(g_23);
            else
              f_23 = g_23;
          }
        }
        t = o_26;
        {
          ATerm q_26;
          q_26 = t;
          {
            ATerm i_23 = NULL;
            t = pass_keep_0(t);
            {
              i_23 = t;
              if(((h_23 != NULL) && (h_23 != i_23)))
                _fail(i_23);
              else
                h_23 = i_23;
            }
          }
          t = q_26;
          {
            ATerm k_23 = NULL;
            t = term_s_26;
            {
              t = get_config_0(t);
              {
                k_23 = t;
                if(((j_23 != NULL) && (j_23 != k_23)))
                  _fail(k_23);
                else
                  j_23 = k_23;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_23)), not_null(f_23)), not_null(j_23)), not_null(d_23));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, w_4, x_4);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      t = term_t_26;
      return(t);
    }
    t = debug_1(t, z_4);
    return(t);
  }
  t = if_verbose2_1(t, y_4);
  {
    ATerm a_5 (ATerm t)
    {
      ATerm l_5 (ATerm t)
      {
        ATerm q_23 = NULL;
        ATerm r_23 = NULL;
        r_23 = t;
        if(((q_23 != NULL) && (q_23 != r_23)))
          _fail(r_23);
        else
          q_23 = r_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(CheckATermList(not_null(q_23)), term_w_26));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, l_5);
      return(t);
    }
    ATerm e_5 (ATerm t)
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
                  t = stratego_nf_0(t);
                  t = rename_defs_0(t);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, a_5, e_5);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  u_23 :
  if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
    {
      w_23 = ATgetFirst((ATermList) v_23);
      x_23 = (ATerm) ATgetNext((ATermList) v_23);
      t = not_null(x_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym__2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm x_26;
        x_26 = t;
        {
          ATerm w_24 = NULL;
          ATerm x_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), not_null(t_24));
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = (ATerm) ATempty;
              }
            {
              x_24 = t;
              if(((w_24 != NULL) && (w_24 != x_24)))
                _fail(x_24);
              else
                w_24 = x_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_24), not_null(t_24), not_null(w_24));
            t = table_put_0(t);
          }
        }
        t = x_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    ATerm h_25 = NULL;
    ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
    t = s_86(t);
    {
      h_25 = t;
      {
        if(((g_25 != NULL) && (g_25 != h_25)))
          _fail(h_25);
        else
          g_25 = h_25;
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), term_x_20);
              t = table_get_0(t);
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_25 = t;
            d_25 :
            if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
              {
                j_25 = ATgetFirst((ATermList) i_25);
                k_25 = (ATerm) ATgetNext((ATermList) i_25);
                {
                  if(((f_25 != NULL) && (f_25 != j_25)))
                    _fail(j_25);
                  else
                    f_25 = j_25;
                  {
                    if(((e_25 != NULL) && (e_25 != k_25)))
                      _fail(k_25);
                    else
                      e_25 = k_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_25), term_x_20, not_null(e_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_25);
                          {
                            ATerm m_5 (ATerm t)
                            {
                              ATerm l_25 = NULL;
                              l_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(l_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, m_5);
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
  t = d_27;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_remove(not_null(r_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_68 (ATerm), ATerm y_68 (ATerm))
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_68(t);
      t = y_68(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        t = y_68(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm b_26 = NULL;
  ATerm o_27;
  o_27 = t;
  {
    ATerm c_26 = NULL;
    ATerm d_26 = NULL;
    t = r_86(t);
    {
      c_26 = t;
      {
        if(((b_26 != NULL) && (b_26 != c_26)))
          _fail(c_26);
        else
          b_26 = c_26;
        {
          ATerm e_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), term_x_20);
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                t = (ATerm) ATempty;
              }
            {
              e_26 = t;
              if(((d_26 != NULL) && (d_26 != e_26)))
                _fail(e_26);
              else
                d_26 = e_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_26), term_x_20, (ATerm) ATinsert(CheckATermList(not_null(d_26)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_27;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm k_96 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL;
  ATerm n_5 (ATerm t)
  {
    t = term_w_20;
    return(t);
  }
  t = begin_scope_1(t, n_5);
  {
    ATerm o_5 (ATerm t)
    {
      ATerm r_27;
      r_27 = t;
      {
        ATerm l_26 = NULL,p_26 = NULL,r_26 = NULL;
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_20;
            t = table_get_0(t);
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          l_26 = t;
          i_26 :
          if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
            {
              p_26 = ATgetFirst((ATermList) l_26);
              r_26 = (ATerm) ATgetNext((ATermList) l_26);
              {
                if(((k_26 != NULL) && (k_26 != p_26)))
                  _fail(p_26);
                else
                  k_26 = p_26;
                {
                  if(((j_26 != NULL) && (j_26 != r_26)))
                    _fail(r_26);
                  else
                    j_26 = r_26;
                  {
                    t = not_null(k_26);
                    {
                      ATerm p_5 (ATerm t)
                      {
                        ATerm y_27 = t;
                        int z_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(z_27);
                          }
                        else
                          {
                            t = y_27;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, p_5);
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
      t = r_27;
      {
        ATerm s_5 (ATerm t)
        {
          t = term_w_20;
          return(t);
        }
        t = end_scope_1(t, s_5);
      }
      return(t);
    }
    t = restore_always_2(t, k_96, o_5);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm n_96 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL;
        ATerm v_26 = NULL;
        t = term_y_24;
        {
          t = get_config_0(t);
          {
            v_26 = t;
            if(((u_26 != NULL) && (u_26 != v_26)))
              _fail(v_26);
            else
              u_26 = v_26;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_26));
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = term_t_23;
      }
    t = n_96(t);
    return(t);
  }
  t = xtc_temp_files_1(t, t_5);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
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
  t = xtc_input_1(t, y_5);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_89 (ATerm))
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_28;
      k_28 = t;
      {
        ATerm y_26 = NULL;
        ATerm z_26 = NULL;
        t = term_j_14;
        {
          t = get_config_0(t);
          {
            z_26 = t;
            if(((y_26 != NULL) && (y_26 != z_26)))
              _fail(z_26);
            else
              y_26 = z_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), term_l_23);
          t = geq_0(t);
        }
      }
      t = k_28;
      t = y_89(t);
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
      }
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  t = SSL_TicksToSeconds(not_null(c_27));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym__4))
    {
      i_27 = ATgetArgument(h_27, 0);
      j_27 = ATgetArgument(h_27, 1);
      k_27 = ATgetArgument(h_27, 2);
      l_27 = ATgetArgument(h_27, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(l_27));
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
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym__2))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      {
        ATerm l_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_27), not_null(v_27));
            LocalPopChoice(q_28);
          }
        else
          {
            t = l_28;
            t = SSL_addr(not_null(u_27), not_null(v_27));
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
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym__4))
    {
      c_28 = ATgetArgument(b_28, 0);
      d_28 = ATgetArgument(b_28, 1);
      e_28 = ATgetArgument(b_28, 2);
      f_28 = ATgetArgument(b_28, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), not_null(e_28));
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
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym__2))
    {
      o_28 = ATgetArgument(n_28, 0);
      p_28 = ATgetArgument(n_28, 1);
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(o_28), not_null(p_28));
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            t = SSL_subtr(not_null(o_28), not_null(p_28));
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
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  b_29 = t;
  y_28 :
  if(match_cons(b_29, sym__2))
    {
      c_29 = ATgetArgument(b_29, 0);
      h_29 = ATgetArgument(b_29, 1);
      z_28 :
      if(match_cons(c_29, sym__4))
        {
          d_29 = ATgetArgument(c_29, 0);
          e_29 = ATgetArgument(c_29, 1);
          f_29 = ATgetArgument(c_29, 2);
          g_29 = ATgetArgument(c_29, 3);
          a_29 :
          if(match_cons(h_29, sym__4))
            {
              i_29 = ATgetArgument(h_29, 0);
              j_29 = ATgetArgument(h_29, 1);
              k_29 = ATgetArgument(h_29, 2);
              l_29 = ATgetArgument(h_29, 3);
              {
                ATerm u_29 = NULL,w_29 = NULL,y_29 = NULL,a_30 = NULL;
                ATerm t_28;
                t_28 = t;
                {
                  ATerm v_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), not_null(i_29));
                  {
                    t = subt_0(t);
                    {
                      v_29 = t;
                      if(((u_29 != NULL) && (u_29 != v_29)))
                        _fail(v_29);
                      else
                        u_29 = v_29;
                    }
                  }
                }
                t = t_28;
                {
                  ATerm u_28;
                  u_28 = t;
                  {
                    ATerm x_29 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), not_null(j_29));
                    {
                      t = subt_0(t);
                      {
                        x_29 = t;
                        if(((w_29 != NULL) && (w_29 != x_29)))
                          _fail(x_29);
                        else
                          w_29 = x_29;
                      }
                    }
                  }
                  t = u_28;
                  {
                    ATerm v_28;
                    v_28 = t;
                    {
                      ATerm z_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_29), not_null(k_29));
                      {
                        t = subt_0(t);
                        {
                          z_29 = t;
                          if(((y_29 != NULL) && (y_29 != z_29)))
                            _fail(z_29);
                          else
                            y_29 = z_29;
                        }
                      }
                    }
                    t = v_28;
                    {
                      ATerm b_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(l_29));
                      {
                        t = subt_0(t);
                        {
                          b_30 = t;
                          if(((a_30 != NULL) && (a_30 != b_30)))
                            _fail(b_30);
                          else
                            a_30 = b_30;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(u_29), not_null(w_29), not_null(y_29), not_null(a_30));
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
ATerm profile_p__2 (ATerm t, ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  ATerm l_30 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm m_30 = NULL;
    t = times_0(t);
    {
      m_30 = t;
      if(((l_30 != NULL) && (l_30 != m_30)))
        _fail(m_30);
      else
        l_30 = m_30;
    }
  }
  t = w_28;
  {
    t = v_87(t);
    {
      ATerm x_28;
      x_28 = t;
      {
        ATerm n_30 = NULL,p_30 = NULL,r_30 = NULL;
        ATerm o_30 = NULL;
        t = times_0(t);
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), not_null(l_30));
          {
            t = diff_times_0(t);
            {
              ATerm m_29;
              m_29 = t;
              {
                ATerm q_30 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    q_30 = t;
                    if(((p_30 != NULL) && (p_30 != q_30)))
                      _fail(q_30);
                    else
                      p_30 = q_30;
                  }
                }
              }
              t = m_29;
              {
                ATerm s_30 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    s_30 = t;
                    if(((r_30 != NULL) && (r_30 != s_30)))
                      _fail(s_30);
                    else
                      r_30 = s_30;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_30)), term_o_29), not_null(p_30)), term_n_29);
                  t = u_87(t);
                }
              }
            }
          }
        }
      }
      t = x_28;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm p_29;
  p_29 = t;
  {
    ATerm z_30 = NULL,b_31 = NULL;
    ATerm q_29;
    q_29 = t;
    {
      ATerm a_31 = NULL;
      t = c_87(t);
      {
        a_31 = t;
        if(((z_30 != NULL) && (z_30 != a_31)))
          _fail(a_31);
        else
          z_30 = a_31;
      }
    }
    t = q_29;
    {
      ATerm d_31 = NULL;
      d_31 = t;
      if(((b_31 != NULL) && (b_31 != d_31)))
        _fail(d_31);
      else
        b_31 = d_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), not_null(z_30)));
        t = printnl_0(t);
      }
    }
  }
  t = p_29;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  t = SSL_is_string(not_null(h_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm t_29 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 (ATerm t)
            {
              ATerm d_30 = t;
              int e_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_30);
                }
              else
                {
                  t = d_30;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_5);
            LocalPopChoice(c_30);
          }
        else
          {
            t = t_29;
            {
              ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
              v_31 = t;
              u_31 :
              if(match_cons(v_31, sym_Path_1))
                {
                  w_31 = ATgetArgument(v_31, 0);
                  t = not_null(w_31);
                }
              else
                {
                  if(match_cons(v_31, sym_Var_1))
                    {
                      w_31 = ATgetArgument(v_31, 0);
                      {
                        t = not_null(w_31);
                        {
                          ATerm f_30 = t;
                          int g_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_30);
                            }
                          else
                            {
                              t = f_30;
                              {
                                ATerm a_6 (ATerm t)
                                {
                                  t = term_h_30;
                                  return(t);
                                }
                                t = debug_1(t, a_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_31, sym_Prefix_2))
                        {
                          w_31 = ATgetArgument(v_31, 0);
                          x_31 = ATgetArgument(v_31, 1);
                          {
                            ATerm e_32 = NULL,g_32 = NULL;
                            ATerm i_30;
                            i_30 = t;
                            {
                              ATerm f_32 = NULL;
                              t = not_null(w_31);
                              {
                                t = eval_config_0(t);
                                {
                                  f_32 = t;
                                  if(((e_32 != NULL) && (e_32 != f_32)))
                                    _fail(f_32);
                                  else
                                    e_32 = f_32;
                                }
                              }
                            }
                            t = i_30;
                            {
                              ATerm h_32 = NULL;
                              t = not_null(x_31);
                              {
                                t = eval_config_0(t);
                                {
                                  h_32 = t;
                                  if(((g_32 != NULL) && (g_32 != h_32)))
                                    _fail(h_32);
                                  else
                                    g_32 = h_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), not_null(g_32));
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
  ATerm p_32 = NULL;
  p_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_30, not_null(p_32));
    {
      t = table_get_0(t);
      {
        ATerm k_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm u_30;
              u_30 = t;
              {
                ATerm r_32 = NULL;
                ATerm s_32 = NULL;
                s_32 = t;
                if(((r_32 != NULL) && (r_32 != s_32)))
                  _fail(s_32);
                else
                  r_32 = s_32;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_j_30, not_null(p_32), not_null(r_32));
                  t = table_put_0(t);
                }
              }
              t = u_30;
            }
            LocalPopChoice(t_30);
          }
        else
          {
            t = k_30;
            {
            }
          }
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
  ATerm v_30;
  v_30 = t;
  {
    t = error_0(t);
    {
      t = term_l_23;
      t = exit_0(t);
    }
  }
  t = v_30;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_30;
      y_30 = t;
      {
        ATerm x_32 = NULL;
        ATerm y_32 = NULL;
        t = term_c_31;
        {
          t = get_config_0(t);
          {
            y_32 = t;
            if(((x_32 != NULL) && (x_32 != y_32)))
              _fail(y_32);
            else
              x_32 = y_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_31), term_l_31), term_k_31), term_j_31), term_i_31), term_g_31), term_f_31), not_null(x_32)), term_e_31));
          t = printnl_0(t);
        }
      }
      t = y_30;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm z_32 = NULL;
        z_32 = t;
        w_32 :
        if(!(match_string(z_32, "0.9beta8")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_68(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym__2))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      t = SSL_copy(not_null(e_33), not_null(f_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  t = SSL_table_keys(not_null(k_33));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_6 (ATerm t)
      {
        ATerm s_33 = NULL;
        ATerm u_33 = NULL;
        s_33 = t;
        {
          ATerm v_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(s_33));
          {
            t = table_get_0(t);
            {
              v_33 = t;
              if(((u_33 != NULL) && (u_33 != v_33)))
                _fail(v_33);
              else
                u_33 = v_33;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(u_33));
        }
        return(t);
      }
      t = map_1(t, b_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_31;
      r_31 = t;
      {
        ATerm a_34 = NULL;
        ATerm b_34 = NULL;
        t = term_j_14;
        {
          t = get_config_0(t);
          {
            b_34 = t;
            if(((a_34 != NULL) && (a_34 != b_34)))
              _fail(b_34);
            else
              a_34 = b_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), term_s_31);
          t = geq_0(t);
        }
      }
      t = r_31;
      t = c_90(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm t_31;
  t_31 = t;
  {
    ATerm e_34 = NULL;
    ATerm f_34 = NULL;
    f_34 = t;
    if(((e_34 != NULL) && (e_34 != f_34)))
      _fail(f_34);
    else
      e_34 = f_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(e_34));
      t = printnl_0(t);
    }
  }
  t = t_31;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm l_34 = NULL;
  ATerm n_34 = NULL,o_34 = NULL;
  l_34 = t;
  {
    ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_34)));
    {
      t = table_get_0(t);
      {
        p_34 = t;
        j_34 :
        if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
          {
            q_34 = ATgetFirst((ATermList) p_34);
            t_34 = (ATerm) ATgetNext((ATermList) p_34);
            k_34 :
            if(match_cons(q_34, sym__2))
              {
                r_34 = ATgetArgument(q_34, 0);
                s_34 = ATgetArgument(q_34, 1);
                {
                  if(((n_34 != NULL) && (n_34 != r_34)))
                    _fail(r_34);
                  else
                    n_34 = r_34;
                  if(((o_34 != NULL) && (o_34 != s_34)))
                    _fail(s_34);
                  else
                    o_34 = s_34;
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
    t = not_null(o_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        ATerm f_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_35)));
        {
          t = table_get_0(t);
          {
            ATerm c_6 (ATerm t)
            {
              ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
              g_35 = t;
              y_34 :
              if(match_cons(g_35, sym__2))
                {
                  h_35 = ATgetArgument(g_35, 0);
                  i_35 = ATgetArgument(g_35, 1);
                  {
                    if(((c_35 != NULL) && (c_35 != h_35)))
                      _fail(h_35);
                    else
                      c_35 = h_35;
                    if(((f_35 != NULL) && (f_35 != i_35)))
                      _fail(i_35);
                    else
                      f_35 = i_35;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, c_6);
          }
        }
        t = not_null(f_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_32;
      {
        t = table_get_0(t);
        {
          ATerm d_6 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, d_6);
        }
      }
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm d_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_32;
      j_32 = t;
      {
        ATerm m_35 = NULL;
        ATerm n_35 = NULL;
        t = term_j_14;
        {
          t = get_config_0(t);
          {
            n_35 = t;
            if(((m_35 != NULL) && (m_35 != n_35)))
              _fail(n_35);
            else
              m_35 = n_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), term_k_32);
          t = geq_0(t);
        }
      }
      t = j_32;
      t = b_90(t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = d_32;
      {
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym__2))
    {
      s_35 = ATgetArgument(r_35, 0);
      t_35 = ATgetArgument(r_35, 1);
      {
        ATerm l_32;
        l_32 = t;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_35), not_null(t_35));
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              t = SSL_gtr(not_null(s_35), not_null(t_35));
            }
        }
        t = l_32;
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
  ATerm z_35 = NULL;
  ATerm o_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
      a_36 = t;
      y_35 :
      if(match_cons(a_36, sym__2))
        {
          b_36 = ATgetArgument(a_36, 0);
          c_36 = ATgetArgument(a_36, 1);
          {
            if(((z_35 != NULL) && (z_35 != b_36)))
              _fail(b_36);
            else
              z_35 = b_36;
            if(((z_35 != NULL) && (z_35 != c_36)))
              _fail(c_36);
            else
              z_35 = c_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_32);
    }
  else
    {
      t = o_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_32;
      v_32 = t;
      {
        ATerm f_36 = NULL;
        ATerm g_36 = NULL;
        t = term_j_14;
        {
          t = get_config_0(t);
          {
            g_36 = t;
            if(((f_36 != NULL) && (f_36 != g_36)))
              _fail(g_36);
            else
              f_36 = g_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), term_a_33);
          t = geq_0(t);
        }
      }
      t = v_32;
      t = d_90(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
      }
    }
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym__2))
    {
      l_36 = ATgetArgument(k_36, 0);
      m_36 = ATgetArgument(k_36, 1);
      if(((l_36 != NULL) && (l_36 != m_36)))
        _fail(m_36);
      else
        l_36 = m_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_82 (ATerm), ATerm g_82 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
  s_36 = t;
  r_36 :
  if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
    {
      t_36 = ATgetFirst((ATermList) s_36);
      u_36 = (ATerm) ATgetNext((ATermList) s_36);
      {
        t = g_82(t);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm x_36 = NULL;
            x_36 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(x_36));
              t = f_82(t);
            }
            return(t);
          }
          t = fetch_1(t, e_6);
        }
        t = not_null(u_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym__2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      {
        t = not_null(e_37);
        {
          ATerm j_37 (ATerm t)
          {
            ATerm b_33 = t;
            int g_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_37);
                LocalPopChoice(g_33);
              }
            else
              {
                t = b_33;
                {
                  ATerm h_33 = t;
                  int i_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_6 (ATerm t)
                      {
                        t = not_null(f_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_82, g_6);
                      t = j_37(t);
                      LocalPopChoice(i_33);
                    }
                  else
                    {
                      t = h_33;
                      t = Cons_2(t, _id, j_37);
                    }
                }
              }
            return(t);
          }
          t = j_37(t);
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
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__3))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      r_37 = ATgetArgument(o_37, 2);
      {
        ATerm j_33;
        j_33 = t;
        {
          ATerm v_37 = NULL;
          ATerm w_37 = NULL,y_37 = NULL;
          ATerm x_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_37), not_null(q_37));
          {
            ATerm l_33 = t;
            int m_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_33);
              }
            else
              {
                t = l_33;
                t = (ATerm) ATempty;
              }
            {
              x_37 = t;
              if(((w_37 != NULL) && (w_37 != x_37)))
                _fail(x_37);
              else
                w_37 = x_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_37), not_null(r_37));
            {
              t = union_1(t, eq_0);
              {
                y_37 = t;
                if(((v_37 != NULL) && (v_37 != y_37)))
                  _fail(y_37);
                else
                  v_37 = y_37;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_37), not_null(q_37), not_null(v_37));
            t = table_put_0(t);
          }
        }
        t = j_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm m_93 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym__2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      {
        t = not_null(i_38);
        {
          ATerm h_6 (ATerm t)
          {
            ATerm l_38 = NULL,m_38 = NULL,q_38 = NULL;
            l_38 = t;
            e_38 :
            if(match_cons(l_38, sym__2))
              {
                m_38 = ATgetArgument(l_38, 0);
                q_38 = ATgetArgument(l_38, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_38), not_null(m_38), not_null(q_38));
                  t = m_93(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_6);
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
  ATerm w_38 = NULL;
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL;
      x_38 = t;
      {
        if(((w_38 != NULL) && (w_38 != x_38)))
          _fail(x_38);
        else
          w_38 = x_38;
        t = SSL_ReadFromFile(not_null(w_38));
      }
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
        ATerm i_6 (ATerm t)
        {
          t = term_p_33;
          return(t);
        }
        t = debug_1(t, i_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm b_39 = NULL;
  ATerm d_39 = NULL;
  b_39 = t;
  {
    ATerm r_33;
    r_33 = t;
    {
      ATerm e_39 = NULL;
      t = term_t_33;
      {
        e_39 = t;
        if(((d_39 != NULL) && (d_39 != e_39)))
          _fail(e_39);
        else
          d_39 = e_39;
      }
    }
    t = r_33;
    {
      t = SSL_open_file(not_null(b_39), not_null(d_39));
      t = SSL_close_file(not_null(b_39));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm j_39 = NULL;
  ATerm l_39 = NULL;
  j_39 = t;
  {
    ATerm w_33 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_39)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_33;
      }
    {
      ATerm x_33;
      x_33 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_31, term_y_33, (ATerm) ATinsert(ATempty, not_null(j_39)));
        t = table_put_0(t);
      }
      t = x_33;
      {
        ATerm m_6 (ATerm t)
        {
          ATerm o_6 (ATerm t)
          {
            t = term_z_33;
            return(t);
          }
          t = debug_1(t, o_6);
          return(t);
        }
        t = if_verbose4_1(t, m_6);
        {
          ATerm c_34 = t;
          int d_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(d_34);
            }
          else
            {
              t = c_34;
              t = (ATerm) ATempty;
            }
          {
            ATerm s_6 (ATerm t)
            {
              ATerm u_6 (ATerm t)
              {
                t = term_g_34;
                return(t);
              }
              t = say_1(t, u_6);
              return(t);
            }
            t = if_verbose6_1(t, s_6);
            {
              ATerm m_39 = NULL;
              m_39 = t;
              if(((l_39 != NULL) && (l_39 != m_39)))
                _fail(m_39);
              else
                l_39 = m_39;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_y_31, not_null(l_39));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm v_6 (ATerm t)
                    {
                      ATerm w_6 (ATerm t)
                      {
                        t = term_h_34;
                        return(t);
                      }
                      t = say_1(t, w_6);
                      return(t);
                    }
                    t = if_verbose6_1(t, v_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_y_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_39)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm x_6 (ATerm t)
                          {
                            ATerm y_6 (ATerm t)
                            {
                              t = term_g_34;
                              return(t);
                            }
                            t = say_1(t, y_6);
                            return(t);
                          }
                          t = if_verbose4_1(t, x_6);
                        }
                      }
                    }
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
  ATerm q_39 = NULL;
  q_39 = t;
  t = SSL_getenv(not_null(q_39));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm i_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_34;
      t = get_config_0(t);
      LocalPopChoice(m_34);
    }
  else
    {
      t = i_34;
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_34;
            t = getenv_0(t);
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm a_7 (ATerm t)
    {
      t = term_d_35;
      return(t);
    }
    t = debug_1(t, a_7);
    return(t);
  }
  t = if_verbose5_1(t, z_6);
  {
    ATerm e_35;
    e_35 = t;
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_35;
          t = table_get_0(t);
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_35;
    {
      ATerm b_7 (ATerm t)
      {
        ATerm e_7 (ATerm t)
        {
          t = term_o_35;
          return(t);
        }
        t = debug_1(t, e_7);
        return(t);
      }
      t = if_verbose5_1(t, b_7);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm p_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7 (ATerm t)
      {
        ATerm g_7 (ATerm t)
        {
          t = term_v_35;
          return(t);
        }
        t = debug_1(t, g_7);
        return(t);
      }
      t = if_verbose5_1(t, f_7);
      {
        t = xtc_load_0(t);
        {
          ATerm w_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(x_35);
            }
          else
            {
              t = w_35;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm h_7 (ATerm t)
            {
              ATerm o_7 (ATerm t)
              {
                t = term_v_35;
                return(t);
              }
              t = debug_1(t, o_7);
              return(t);
            }
            t = if_verbose5_1(t, h_7);
          }
        }
      }
      LocalPopChoice(u_35);
    }
  else
    {
      t = p_35;
      {
        ATerm u_39 = NULL;
        ATerm v_39 = NULL;
        v_39 = t;
        if(((u_39 != NULL) && (u_39 != v_39)))
          _fail(v_39);
        else
          u_39 = v_39;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_36), not_null(u_39)), term_d_36);
          {
            t = error_0(t);
            {
              ATerm p_7 (ATerm t)
              {
                t = term_y_31;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm q_7 (ATerm t)
                    {
                      t = term_h_36;
                      return(t);
                    }
                    t = debug_1(t, q_7);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, p_7);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  t = SSL_string_to_int(not_null(y_39));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,n_40 = NULL,o_40 = NULL;
  i_40 = t;
  e_40 :
  if(match_string(i_40, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(i_40) == AT_LIST) && !(ATisEmpty(i_40))))
        {
          j_40 = ATgetFirst((ATermList) i_40);
          k_40 = (ATerm) ATgetNext((ATermList) i_40);
          h_40 :
          if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
            {
              n_40 = ATgetFirst((ATermList) k_40);
              o_40 = (ATerm) ATgetNext((ATermList) k_40);
              {
                ATerm u_40 = NULL;
                ATerm i_36;
                i_36 = t;
                {
                  t = not_null(j_40);
                  t = l_0(t);
                }
                t = i_36;
                {
                  ATerm v_40 = NULL;
                  t = not_null(n_40);
                  {
                    t = m_0(t);
                    {
                      v_40 = t;
                      if(((u_40 != NULL) && (u_40 != v_40)))
                        _fail(v_40);
                      else
                        u_40 = v_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_40)), not_null(u_40));
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
ATerm extend_config_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym__2))
    {
      e_41 = ATgetArgument(d_41, 0);
      f_41 = ATgetArgument(d_41, 1);
      {
        ATerm i_41 = NULL;
        ATerm j_41 = NULL,n_41 = NULL;
        ATerm k_41 = NULL;
        t = not_null(e_41);
        {
          ATerm n_36 = t;
          int o_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(o_36);
            }
          else
            {
              t = n_36;
              t = (ATerm) ATempty;
            }
          {
            k_41 = t;
            if(((j_41 != NULL) && (j_41 != k_41)))
              _fail(k_41);
            else
              j_41 = k_41;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_41), not_null(j_41));
          {
            ATerm p_36 = t;
            int q_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(q_36);
              }
            else
              {
                t = p_36;
                t = conc_more_lists_0(t);
              }
            {
              n_41 = t;
              if(((i_41 != NULL) && (i_41 != n_41)))
                _fail(n_41);
              else
                i_41 = n_41;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_30, not_null(e_41), not_null(i_41));
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
ATerm table_remove_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL;
  ATerm v_36;
  v_36 = t;
  {
    ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
    g_42 = t;
    d_42 :
    if(match_cons(g_42, sym__2))
      {
        h_42 = ATgetArgument(g_42, 0);
        i_42 = ATgetArgument(g_42, 1);
        {
          if(((e_42 != NULL) && (e_42 != h_42)))
            _fail(h_42);
          else
            e_42 = h_42;
          {
            if(((f_42 != NULL) && (f_42 != i_42)))
              _fail(i_42);
            else
              f_42 = i_42;
            t = SSL_table_remove(not_null(e_42), not_null(f_42));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_36;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_cons(m_42, sym__2))
    {
      n_42 = ATgetArgument(m_42, 0);
      o_42 = ATgetArgument(m_42, 1);
      {
        ATerm w_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(n_42);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_30, not_null(n_42));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(y_36);
          }
        else
          {
            t = w_36;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_42), not_null(o_42));
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
  ATerm c_43 = NULL,g_43 = NULL,h_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym__2))
    {
      g_43 = ATgetArgument(c_43, 0);
      h_43 = ATgetArgument(c_43, 1);
      {
        ATerm t_43 = NULL;
        ATerm u_43 = NULL,w_43 = NULL;
        ATerm v_43 = NULL;
        t = not_null(g_43);
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              t = (ATerm) ATempty;
            }
          {
            v_43 = t;
            if(((u_43 != NULL) && (u_43 != v_43)))
              _fail(v_43);
            else
              u_43 = v_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(h_43));
          {
            ATerm b_37 = t;
            int g_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(g_37);
              }
            else
              {
                t = b_37;
                t = conc_more_lists_0(t);
              }
            {
              w_43 = t;
              if(((t_43 != NULL) && (t_43 != w_43)))
                _fail(w_43);
              else
                t_43 = w_43;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_30, not_null(g_43), not_null(t_43));
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
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        ATerm m_45 = NULL;
        m_45 = t;
        a_44 :
        if(!(match_string(m_45, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        ATerm n_45 = NULL;
        ATerm o_45 = NULL;
        o_45 = t;
        if(((n_45 != NULL) && (n_45 != o_45)))
          _fail(o_45);
        else
          n_45 = o_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_24, not_null(n_45));
          t = set_config_0(t);
        }
        t = term_z_19;
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        t = term_k_37;
        return(t);
      }
      t = ArgOption_3(t, r_7, u_7, v_7);
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              ATerm p_45 = NULL;
              p_45 = t;
              c_44 :
              if(!(match_string(p_45, "-o")))
                {
                  if(!(match_string(p_45, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_7 (ATerm t)
            {
              ATerm u_45 = NULL;
              ATerm v_45 = NULL;
              v_45 = t;
              if(((u_45 != NULL) && (u_45 != v_45)))
                _fail(v_45);
              else
                u_45 = v_45;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_p_14, not_null(u_45));
                t = set_config_0(t);
              }
              t = term_z_19;
              return(t);
            }
            ATerm c_8 (ATerm t)
            {
              t = term_s_37;
              return(t);
            }
            t = ArgOption_3(t, y_7, z_7, c_8);
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm t_37 = t;
              int u_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_8 (ATerm t)
                  {
                    ATerm w_45 = NULL;
                    w_45 = t;
                    e_44 :
                    if(!(match_string(w_45, "-I")))
                      {
                        if(!(match_string(w_45, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm g_8 (ATerm t)
                  {
                    ATerm x_45 = NULL;
                    ATerm a_46 = NULL;
                    a_46 = t;
                    if(((x_45 != NULL) && (x_45 != a_46)))
                      _fail(a_46);
                    else
                      x_45 = a_46;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_45)), term_s_26));
                      t = extend_config_0(t);
                    }
                    t = term_z_19;
                    return(t);
                  }
                  ATerm h_8 (ATerm t)
                  {
                    t = term_z_37;
                    return(t);
                  }
                  t = ArgOption_3(t, d_8, g_8, h_8);
                  LocalPopChoice(u_37);
                }
              else
                {
                  t = t_37;
                  {
                    ATerm a_38 = t;
                    int b_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_8 (ATerm t)
                        {
                          ATerm b_46 = NULL;
                          b_46 = t;
                          g_44 :
                          if(!(match_string(b_46, "--main")))
                            {
                              if(!(match_string(b_46, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm l_8 (ATerm t)
                        {
                          ATerm c_46 = NULL;
                          ATerm d_46 = NULL;
                          d_46 = t;
                          if(((c_46 != NULL) && (c_46 != d_46)))
                            _fail(d_46);
                          else
                            c_46 = d_46;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_l_20, not_null(c_46));
                            t = set_config_0(t);
                          }
                          t = term_z_19;
                          return(t);
                        }
                        ATerm o_8 (ATerm t)
                        {
                          t = term_c_38;
                          return(t);
                        }
                        t = ArgOption_3(t, k_8, l_8, o_8);
                        LocalPopChoice(b_38);
                      }
                    else
                      {
                        t = a_38;
                        {
                          ATerm d_38 = t;
                          int j_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_8 (ATerm t)
                              {
                                ATerm e_46 = NULL;
                                e_46 = t;
                                i_44 :
                                if(!(match_string(e_46, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm s_8 (ATerm t)
                              {
                                ATerm f_46 = NULL;
                                ATerm g_46 = NULL;
                                g_46 = t;
                                if(((f_46 != NULL) && (f_46 != g_46)))
                                  _fail(g_46);
                                else
                                  f_46 = g_46;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATempty, not_null(f_46)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_z_19;
                                return(t);
                              }
                              ATerm t_8 (ATerm t)
                              {
                                t = term_k_38;
                                return(t);
                              }
                              t = ArgOption_3(t, p_8, s_8, t_8);
                              LocalPopChoice(j_38);
                            }
                          else
                            {
                              t = d_38;
                              {
                                ATerm n_38 = t;
                                int o_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_8 (ATerm t)
                                    {
                                      ATerm h_46 = NULL;
                                      h_46 = t;
                                      k_44 :
                                      if(!(match_string(h_46, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm x_8 (ATerm t)
                                    {
                                      ATerm i_46 = NULL;
                                      ATerm j_46 = NULL;
                                      j_46 = t;
                                      if(((i_46 != NULL) && (i_46 != j_46)))
                                        _fail(j_46);
                                      else
                                        i_46 = j_46;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATempty, not_null(i_46)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_z_19;
                                      return(t);
                                    }
                                    ATerm a_9 (ATerm t)
                                    {
                                      t = term_p_38;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, w_8, x_8, a_9);
                                    LocalPopChoice(o_38);
                                  }
                                else
                                  {
                                    t = n_38;
                                    {
                                      ATerm r_38 = t;
                                      int s_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_9 (ATerm t)
                                          {
                                            ATerm k_46 = NULL;
                                            k_46 = t;
                                            m_44 :
                                            if(!(match_string(k_46, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm e_9 (ATerm t)
                                          {
                                            ATerm l_46 = NULL;
                                            ATerm m_46 = NULL;
                                            m_46 = t;
                                            if(((l_46 != NULL) && (l_46 != m_46)))
                                              _fail(m_46);
                                            else
                                              l_46 = m_46;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATempty, not_null(l_46)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_z_19;
                                            return(t);
                                          }
                                          ATerm f_9 (ATerm t)
                                          {
                                            t = term_t_38;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, b_9, e_9, f_9);
                                          LocalPopChoice(s_38);
                                        }
                                      else
                                        {
                                          t = r_38;
                                          {
                                            ATerm u_38 = t;
                                            int v_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm i_9 (ATerm t)
                                                {
                                                  ATerm n_46 = NULL;
                                                  n_46 = t;
                                                  o_44 :
                                                  if(!(match_string(n_46, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm j_9 (ATerm t)
                                                {
                                                  t = term_y_38;
                                                  t = set_config_0(t);
                                                  t = term_z_19;
                                                  return(t);
                                                }
                                                ATerm m_9 (ATerm t)
                                                {
                                                  t = term_z_38;
                                                  return(t);
                                                }
                                                t = Option_3(t, i_9, j_9, m_9);
                                                LocalPopChoice(v_38);
                                              }
                                            else
                                              {
                                                t = u_38;
                                                {
                                                  ATerm a_39 = t;
                                                  int c_39 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_9 (ATerm t)
                                                      {
                                                        ATerm o_46 = NULL;
                                                        o_46 = t;
                                                        p_44 :
                                                        if(!(match_string(o_46, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm q_9 (ATerm t)
                                                      {
                                                        t = term_f_39;
                                                        t = set_config_0(t);
                                                        t = term_z_19;
                                                        return(t);
                                                      }
                                                      ATerm r_9 (ATerm t)
                                                      {
                                                        t = term_g_39;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, n_9, q_9, r_9);
                                                      LocalPopChoice(c_39);
                                                    }
                                                  else
                                                    {
                                                      t = a_39;
                                                      {
                                                        ATerm h_39 = t;
                                                        int i_39 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm u_9 (ATerm t)
                                                            {
                                                              ATerm p_46 = NULL;
                                                              p_46 = t;
                                                              q_44 :
                                                              if(!(match_string(p_46, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm v_9 (ATerm t)
                                                            {
                                                              t = term_k_39;
                                                              t = set_config_0(t);
                                                              t = term_z_19;
                                                              return(t);
                                                            }
                                                            ATerm y_9 (ATerm t)
                                                            {
                                                              t = term_n_39;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, u_9, v_9, y_9);
                                                            LocalPopChoice(i_39);
                                                          }
                                                        else
                                                          {
                                                            t = h_39;
                                                            {
                                                              ATerm o_39 = t;
                                                              int p_39 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_9 (ATerm t)
                                                                  {
                                                                    ATerm q_46 = NULL;
                                                                    q_46 = t;
                                                                    r_44 :
                                                                    if(!(match_string(q_46, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm a_10 (ATerm t)
                                                                  {
                                                                    ATerm r_46 = NULL;
                                                                    ATerm s_46 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      s_46 = t;
                                                                      if(((r_46 != NULL) && (r_46 != s_46)))
                                                                        _fail(s_46);
                                                                      else
                                                                        r_46 = s_46;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_o_19, not_null(r_46));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_z_19;
                                                                    return(t);
                                                                  }
                                                                  ATerm f_10 (ATerm t)
                                                                  {
                                                                    t = term_r_39;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, z_9, a_10, f_10);
                                                                  LocalPopChoice(p_39);
                                                                }
                                                              else
                                                                {
                                                                  t = o_39;
                                                                  {
                                                                    ATerm s_39 = t;
                                                                    int t_39 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm g_10 (ATerm t)
                                                                        {
                                                                          ATerm t_46 = NULL;
                                                                          t_46 = t;
                                                                          t_44 :
                                                                          if(!(match_string(t_46, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm h_10 (ATerm t)
                                                                        {
                                                                          t = term_w_39;
                                                                          t = toggle_config_0(t);
                                                                          t = term_z_19;
                                                                          return(t);
                                                                        }
                                                                        ATerm k_10 (ATerm t)
                                                                        {
                                                                          t = term_x_39;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, g_10, h_10, k_10);
                                                                        LocalPopChoice(t_39);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_39;
                                                                        {
                                                                          ATerm z_39 = t;
                                                                          int a_40 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm l_10 (ATerm t)
                                                                              {
                                                                                ATerm w_46 = NULL;
                                                                                w_46 = t;
                                                                                c_45 :
                                                                                if(!(match_string(w_46, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm m_10 (ATerm t)
                                                                              {
                                                                                t = term_c_40;
                                                                                t = set_config_0(t);
                                                                                t = term_z_19;
                                                                                return(t);
                                                                              }
                                                                              ATerm q_10 (ATerm t)
                                                                              {
                                                                                t = term_d_40;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, l_10, m_10, q_10);
                                                                              LocalPopChoice(a_40);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_39;
                                                                              {
                                                                                ATerm f_40 = t;
                                                                                int g_40 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm t_10 (ATerm t)
                                                                                    {
                                                                                      ATerm n_47 = NULL;
                                                                                      n_47 = t;
                                                                                      e_45 :
                                                                                      if(!(match_string(n_47, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm u_10 (ATerm t)
                                                                                    {
                                                                                      ATerm o_47 = NULL;
                                                                                      ATerm p_47 = NULL;
                                                                                      p_47 = t;
                                                                                      if(((o_47 != NULL) && (o_47 != p_47)))
                                                                                        _fail(p_47);
                                                                                      else
                                                                                        o_47 = p_47;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_l_40, (ATerm) ATinsert(ATempty, not_null(o_47)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_z_19;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm v_10 (ATerm t)
                                                                                    {
                                                                                      t = term_m_40;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, t_10, u_10, v_10);
                                                                                    LocalPopChoice(g_40);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_40;
                                                                                    {
                                                                                      ATerm p_40 = t;
                                                                                      int q_40 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm w_10 (ATerm t)
                                                                                          {
                                                                                            ATerm q_47 = NULL;
                                                                                            q_47 = t;
                                                                                            g_45 :
                                                                                            if(!(match_string(q_47, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm b_11 (ATerm t)
                                                                                          {
                                                                                            ATerm r_47 = NULL;
                                                                                            ATerm s_47 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              s_47 = t;
                                                                                              if(((r_47 != NULL) && (r_47 != s_47)))
                                                                                                _fail(s_47);
                                                                                              else
                                                                                                r_47 = s_47;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_j_14, not_null(r_47));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_z_19;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm c_11 (ATerm t)
                                                                                          {
                                                                                            t = term_r_40;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, w_10, b_11, c_11);
                                                                                          LocalPopChoice(q_40);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_40;
                                                                                          {
                                                                                            ATerm s_40 = t;
                                                                                            int t_40 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm e_11 (ATerm t)
                                                                                                {
                                                                                                  ATerm t_47 = NULL;
                                                                                                  t_47 = t;
                                                                                                  i_45 :
                                                                                                  if(!(match_string(t_47, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(t_47, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm f_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_w_40;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_z_19;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm i_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_x_40;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, e_11, f_11, i_11);
                                                                                                LocalPopChoice(t_40);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = s_40;
                                                                                                {
                                                                                                  ATerm y_40 = t;
                                                                                                  int z_40 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm o_11 (ATerm t)
                                                                                                      {
                                                                                                        ATerm u_47 = NULL;
                                                                                                        u_47 = t;
                                                                                                        j_45 :
                                                                                                        if(!(match_string(u_47, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(u_47, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm p_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_b_41;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_z_19;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm q_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_g_41;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, o_11, p_11, q_11);
                                                                                                      LocalPopChoice(z_40);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_40;
                                                                                                      {
                                                                                                        ATerm h_41 = t;
                                                                                                        int l_41 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm r_11 (ATerm t)
                                                                                                            {
                                                                                                              ATerm z_47 = NULL;
                                                                                                              z_47 = t;
                                                                                                              k_45 :
                                                                                                              if(!(match_string(z_47, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm w_11 (ATerm t)
                                                                                                            {
                                                                                                              t = term_o_41;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_z_19;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm x_11 (ATerm t)
                                                                                                            {
                                                                                                              t = term_p_41;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, r_11, w_11, x_11);
                                                                                                            LocalPopChoice(l_41);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_41;
                                                                                                            {
                                                                                                              ATerm y_11 (ATerm t)
                                                                                                              {
                                                                                                                ATerm a_48 = NULL;
                                                                                                                a_48 = t;
                                                                                                                l_45 :
                                                                                                                if(!(match_string(a_48, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(a_48, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm z_11 (ATerm t)
                                                                                                              {
                                                                                                                t = term_r_41;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_z_19;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm a_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_s_41;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, y_11, z_11, a_12);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_48 = NULL;
  m_48 = t;
  t = SSL_table_destroy(not_null(m_48));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,t_48 = NULL;
  q_48 = t;
  p_48 :
  if(((ATgetType(q_48) == AT_LIST) && ATisEmpty(q_48)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_48) == AT_LIST) && !(ATisEmpty(q_48))))
        {
          r_48 = ATgetFirst((ATermList) q_48);
          t_48 = (ATerm) ATgetNext((ATermList) q_48);
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
  ATerm t_41;
  t_41 = t;
  {
    ATerm w_48 = NULL;
    ATerm e_49 = NULL;
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_41);
      }
    else
      {
        t = u_41;
        {
          ATerm c_49 = NULL;
          ATerm d_49 = NULL;
          d_49 = t;
          if(((c_49 != NULL) && (c_49 != d_49)))
            _fail(d_49);
          else
            c_49 = d_49;
          t = (ATerm) ATinsert(ATempty, not_null(c_49));
        }
      }
    {
      e_49 = t;
      if(((w_48 != NULL) && (w_48 != e_49)))
        _fail(e_49);
      else
        w_48 = e_49;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_15, not_null(w_48));
      t = printnl_0(t);
    }
  }
  t = t_41;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_42), term_i_31), term_r_42), term_q_42), term_p_42), term_i_31), term_k_42), term_j_42), term_c_42), term_b_42), term_a_42), term_z_41), term_y_41), term_x_41), term_w_41);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm h_49 (ATerm t)
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = Cons_2(t, e_76, h_49);
      }
    return(t);
  }
  t = h_49(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_49 = NULL,r_49 = NULL,x_49 = NULL;
  x_49 = t;
  p_49 :
  if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
    {
      q_49 = ATgetFirst((ATermList) x_49);
      r_49 = (ATerm) ATgetNext((ATermList) x_49);
      {
        ATerm a_50 = NULL;
        t = not_null(r_49);
        {
          ATerm v_42;
          v_42 = t;
          {
            ATerm b_50 = NULL,d_50 = NULL,f_50 = NULL;
            ATerm w_42;
            w_42 = t;
            {
              ATerm c_50 = NULL;
              t = j_0(t);
              {
                c_50 = t;
                if(((b_50 != NULL) && (b_50 != c_50)))
                  _fail(c_50);
                else
                  b_50 = c_50;
              }
            }
            t = w_42;
            {
              ATerm e_50 = NULL;
              t = not_null(q_49);
              {
                t = i_0(t);
                {
                  e_50 = t;
                  if(((d_50 != NULL) && (d_50 != e_50)))
                    _fail(e_50);
                  else
                    d_50 = e_50;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_50)), not_null(d_50));
                {
                  f_50 = t;
                  if(((a_50 != NULL) && (a_50 != f_50)))
                    _fail(f_50);
                  else
                    a_50 = f_50;
                }
              }
            }
          }
          t = v_42;
          {
            ATerm d_12 (ATerm t)
            {
              t = not_null(a_50);
              return(t);
            }
            t = reverse_acc_2(t, i_0, d_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_49) == AT_LIST) && ATisEmpty(x_49)))
        {
          {
            t = term_z_19;
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
  ATerm i_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm m_50 = NULL;
  ATerm s_50 = NULL;
  t = term_z_19;
  {
    t = h_0(t);
    {
      s_50 = t;
      if(((m_50 != NULL) && (m_50 != s_50)))
        _fail(s_50);
      else
        m_50 = s_50;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_43), not_null(m_50)), term_d_43), term_i_31), term_a_43), term_i_31), term_z_42), term_y_42), term_i_31), term_x_42);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm m_51 = NULL,n_51 = NULL;
  m_51 = t;
  c_51 :
  if(match_cons(m_51, sym_Program_1))
    {
      n_51 = ATgetArgument(m_51, 0);
      {
        ATerm q_51 = NULL,s_51 = NULL;
        ATerm r_51 = NULL;
        t = SSLgetAnnotations(not_null(m_51));
        {
          r_51 = t;
          if(((q_51 != NULL) && (q_51 != r_51)))
            _fail(r_51);
          else
            q_51 = r_51;
        }
        {
          t = not_null(n_51);
          {
            ATerm u_51 = NULL;
            t = w_62(t);
            {
              s_51 = t;
              {
                ATerm v_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_51)), not_null(q_51));
                {
                  v_51 = t;
                  if(((u_51 != NULL) && (u_51 != v_51)))
                    _fail(v_51);
                  else
                    u_51 = v_51;
                }
                t = not_null(u_51);
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
  ATerm e_52 = NULL;
  ATerm f_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_52 = NULL;
      t = term_j_43;
      {
        t = get_config_0(t);
        {
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
        }
      }
      LocalPopChoice(i_43);
    }
  else
    {
      t = f_43;
      {
        ATerm j_12 (ATerm t)
        {
          ATerm k_12 (ATerm t)
          {
            ATerm g_52 = NULL;
            g_52 = t;
            if(((e_52 != NULL) && (e_52 != g_52)))
              _fail(g_52);
            else
              e_52 = g_52;
            return(t);
          }
          t = Program_1(t, k_12);
          return(t);
        }
        t = fetch_1(t, j_12);
      }
    }
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 (ATerm t)
        {
          t = not_null(e_52);
          return(t);
        }
        t = short_description_1(t, l_12);
        t = echo_0(t);
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
        {
        }
      }
    {
      t = term_m_43;
      {
        t = echo_0(t);
        {
          t = term_p_43;
          {
            t = table_get_0(t);
            {
              ATerm m_12 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, m_12);
              {
                ATerm n_12 (ATerm t)
                {
                  ATerm h_52 = NULL;
                  ATerm i_52 = NULL;
                  i_52 = t;
                  if(((h_52 != NULL) && (h_52 != i_52)))
                    _fail(i_52);
                  else
                    h_52 = i_52;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_52)), term_q_43);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_12);
                {
                  ATerm r_43 = t;
                  int s_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_52 = NULL;
                      ATerm k_52 = NULL;
                      ATerm q_12 (ATerm t)
                      {
                        t = not_null(e_52);
                        return(t);
                      }
                      t = long_description_1(t, q_12);
                      {
                        k_52 = t;
                        if(((j_52 != NULL) && (j_52 != k_52)))
                          _fail(k_52);
                        else
                          j_52 = k_52;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(j_52)), term_i_31);
                        t = echo_0(t);
                      }
                      LocalPopChoice(s_43);
                    }
                  else
                    {
                      t = r_43;
                      {
                      }
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
ATerm debug_0 (ATerm t)
{
  ATerm x_43;
  x_43 = t;
  {
    ATerm q_52 = NULL;
    ATerm r_52 = NULL;
    r_52 = t;
    if(((q_52 != NULL) && (q_52 != r_52)))
      _fail(r_52);
    else
      q_52 = r_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(ATempty, not_null(q_52)));
      t = printnl_0(t);
    }
  }
  t = x_43;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm y_43;
  y_43 = t;
  {
    t = d_87(t);
    t = debug_0(t);
  }
  t = y_43;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  x_52 :
  if(match_cons(y_52, sym_Undefined_1))
    {
      z_52 = ATgetArgument(y_52, 0);
      {
        ATerm c_53 = NULL,e_53 = NULL;
        ATerm d_53 = NULL;
        t = SSLgetAnnotations(not_null(y_52));
        {
          d_53 = t;
          if(((c_53 != NULL) && (c_53 != d_53)))
            _fail(d_53);
          else
            c_53 = d_53;
        }
        {
          t = not_null(z_52);
          {
            ATerm g_53 = NULL;
            t = x_62(t);
            {
              e_53 = t;
              {
                ATerm h_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_53)), not_null(c_53));
                {
                  h_53 = t;
                  if(((g_53 != NULL) && (g_53 != h_53)))
                    _fail(h_53);
                  else
                    g_53 = h_53;
                }
                t = not_null(g_53);
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
ATerm fetch_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm m_53 (ATerm t)
  {
    ATerm z_43 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_76, _id);
        LocalPopChoice(b_44);
      }
    else
      {
        t = z_43;
        t = Cons_2(t, _id, m_53);
      }
    return(t);
  }
  t = m_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = fetch_1(t, b_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_53 = NULL;
  r_53 = t;
  q_53 :
  if(match_cons(r_53, sym_Help_0))
    {
      ATerm t_53 = NULL,v_53 = NULL;
      ATerm d_44;
      d_44 = t;
      {
        ATerm u_53 = NULL;
        t = SSLgetAnnotations(not_null(r_53));
        {
          u_53 = t;
          if(((t_53 != NULL) && (t_53 != u_53)))
            _fail(u_53);
          else
            t_53 = u_53;
        }
      }
      t = d_44;
      {
        ATerm w_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_53));
        {
          w_53 = t;
          if(((v_53 != NULL) && (v_53 != w_53)))
            _fail(w_53);
          else
            v_53 = w_53;
        }
        t = not_null(v_53);
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
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym__2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      t = SSL_table_get(not_null(d_54), not_null(e_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,c_55 = NULL,d_55 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym__3))
    {
      n_54 = ATgetArgument(m_54, 0);
      c_55 = ATgetArgument(m_54, 1);
      d_55 = ATgetArgument(m_54, 2);
      {
        ATerm f_44;
        f_44 = t;
        {
          ATerm o_55 = NULL;
          ATerm p_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_54), not_null(c_55));
          {
            ATerm h_44 = t;
            int j_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_44);
              }
            else
              {
                t = h_44;
                t = (ATerm) ATempty;
              }
            {
              p_55 = t;
              if(((o_55 != NULL) && (o_55 != p_55)))
                _fail(p_55);
              else
                o_55 = p_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_54), not_null(c_55), (ATerm) ATinsert(CheckATermList(not_null(o_55)), not_null(d_55)));
            t = table_put_0(t);
          }
        }
        t = f_44;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_92 (ATerm))
{
  ATerm c_56 = NULL;
  ATerm d_56 = NULL;
  t = term_z_19;
  {
    t = g_92(t);
    {
      d_56 = t;
      if(((c_56 != NULL) && (c_56 != d_56)))
        _fail(d_56);
      else
        c_56 = d_56;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_43, term_o_43, not_null(c_56));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_string(l_56, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(l_56) == AT_LIST) && !(ATisEmpty(l_56))))
        {
          m_56 = ATgetFirst((ATermList) l_56);
          n_56 = (ATerm) ATgetNext((ATermList) l_56);
          {
            ATerm q_56 = NULL;
            ATerm l_44;
            l_44 = t;
            {
              t = not_null(m_56);
              t = a_0(t);
            }
            t = l_44;
            {
              ATerm r_56 = NULL;
              t = term_z_19;
              {
                t = d_0(t);
                {
                  r_56 = t;
                  if(((q_56 != NULL) && (q_56 != r_56)))
                    _fail(r_56);
                  else
                    q_56 = r_56;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_56)), not_null(q_56));
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
  ATerm v_12 (ATerm t)
  {
    ATerm w_56 = NULL;
    w_56 = t;
    v_56 :
    if(!(match_string(w_56, "--help")))
      {
        if(!(match_string(w_56, "-h")))
          {
            if(!(match_string(w_56, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_12 (ATerm t)
  {
    t = term_b_41;
    {
      t = set_config_0(t);
      t = term_n_44;
    }
    return(t);
  }
  ATerm x_12 (ATerm t)
  {
    t = term_s_44;
    return(t);
  }
  t = Option_3(t, v_12, w_12, x_12);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  y_56 :
  if(((ATgetType(z_56) == AT_LIST) && !(ATisEmpty(z_56))))
    {
      a_57 = ATgetFirst((ATermList) z_56);
      b_57 = (ATerm) ATgetNext((ATermList) z_56);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_57)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_57)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm u_44;
  u_44 = t;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_44;
        t = e_92(t);
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        {
        }
      }
  }
  t = u_44;
  {
    ATerm y_12 (ATerm t)
    {
      ATerm j_57 = NULL;
      ATerm y_44;
      y_44 = t;
      {
        ATerm h_57 = NULL;
        ATerm i_57 = NULL;
        i_57 = t;
        if(((h_57 != NULL) && (h_57 != i_57)))
          _fail(i_57);
        else
          h_57 = i_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_43, not_null(h_57));
          t = set_config_0(t);
        }
      }
      t = y_44;
      {
        ATerm k_57 = NULL;
        k_57 = t;
        if(((j_57 != NULL) && (j_57 != k_57)))
          _fail(k_57);
        else
          j_57 = k_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_57));
      }
      return(t);
    }
    ATerm z_12 (ATerm t)
    {
      ATerm z_44 = t;
      int a_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_45 = t;
          int d_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_45);
            }
          else
            {
              t = b_45;
              {
                t = e_92(t);
                t = Cons_2(t, _id, z_12);
              }
            }
          LocalPopChoice(a_45);
        }
      else
        {
          t = z_44;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_12, z_12);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_92 (ATerm))
{
  ATerm p_57 = NULL;
  ATerm f_45;
  f_45 = t;
  {
    t = term_h_45;
    t = table_put_0(t);
  }
  t = f_45;
  {
    ATerm a_13 (ATerm t)
    {
      ATerm q_45 = t;
      int r_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_92(t);
          LocalPopChoice(r_45);
        }
      else
        {
          t = q_45;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_13);
    {
      ATerm s_45 = t;
      int t_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_45;
          y_45 = t;
          {
            ATerm z_45 = t;
            int u_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_41;
                t = get_config_0(t);
                LocalPopChoice(u_46);
              }
            else
              {
                t = z_45;
                t = fetch_1(t, Help_0);
              }
          }
          t = y_45;
          {
            t = system_usage_0(t);
            {
              t = term_b_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(t_45);
        }
      else
        {
          t = s_45;
          {
            ATerm v_46 = t;
            int x_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_13 (ATerm t)
                {
                  ATerm c_13 (ATerm t)
                  {
                    ATerm s_57 = NULL;
                    s_57 = t;
                    if(((p_57 != NULL) && (p_57 != s_57)))
                      _fail(s_57);
                    else
                      p_57 = s_57;
                    return(t);
                  }
                  t = Undefined_1(t, c_13);
                  return(t);
                }
                t = fetch_1(t, b_13);
                {
                  ATerm d_13 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_57)), term_y_46);
                    return(t);
                  }
                  t = say_1(t, d_13);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_l_23;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(x_46);
              }
            else
              {
                t = v_46;
                {
                }
              }
          }
        }
      {
        ATerm z_46;
        z_46 = t;
        {
          t = term_n_43;
          t = table_destroy_0(t);
        }
        t = z_46;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  ATerm a_47;
  a_47 = t;
  {
    ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
    z_57 = t;
    v_57 :
    if(match_cons(z_57, sym__3))
      {
        a_58 = ATgetArgument(z_57, 0);
        b_58 = ATgetArgument(z_57, 1);
        c_58 = ATgetArgument(z_57, 2);
        {
          if(((w_57 != NULL) && (w_57 != a_58)))
            _fail(a_58);
          else
            w_57 = a_58;
          {
            if(((x_57 != NULL) && (x_57 != b_58)))
              _fail(b_58);
            else
              x_57 = b_58;
            {
              if(((y_57 != NULL) && (y_57 != c_58)))
                _fail(c_58);
              else
                y_57 = c_58;
              t = SSL_table_put(not_null(w_57), not_null(x_57), not_null(y_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_47;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  g_58 = t;
  f_58 :
  if(match_cons(g_58, sym__2))
    {
      h_58 = ATgetArgument(g_58, 0);
      i_58 = ATgetArgument(g_58, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_30, not_null(h_58), not_null(i_58));
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
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      {
        ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
        o_58 = t;
        n_58 :
        if(((ATgetType(o_58) == AT_LIST) && !(ATisEmpty(o_58))))
          {
            p_58 = ATgetFirst((ATermList) o_58);
            q_58 = (ATerm) ATgetNext((ATermList) o_58);
            {
              t = not_null(p_58);
              {
                ATerm e_13 (ATerm t)
                {
                  t = not_null(q_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_13);
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
  ATerm a_59 = NULL;
  ATerm c_59 = NULL;
  a_59 = t;
  {
    ATerm d_59 = NULL;
    ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
    t = not_null(a_59);
    {
      d_59 = t;
      {
        t = SSL_explode_term(not_null(d_59));
        {
          f_59 = t;
          y_58 :
          if(match_cons(f_59, sym__2))
            {
              g_59 = ATgetArgument(f_59, 0);
              h_59 = ATgetArgument(f_59, 1);
              z_58 :
              if(match_string(g_59, ""))
                {
                  if(((c_59 != NULL) && (c_59 != h_59)))
                    _fail(h_59);
                  else
                    c_59 = h_59;
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
      t = not_null(c_59);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  o_59 :
  if(((ATgetType(p_59) == AT_LIST) && ATisEmpty(p_59)))
    {
      {
        ATerm r_59 = NULL,t_59 = NULL;
        ATerm d_47;
        d_47 = t;
        {
          ATerm s_59 = NULL;
          t = SSLgetAnnotations(not_null(p_59));
          {
            s_59 = t;
            if(((r_59 != NULL) && (r_59 != s_59)))
              _fail(s_59);
            else
              r_59 = s_59;
          }
        }
        t = d_47;
        {
          ATerm u_59 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_59));
          {
            u_59 = t;
            if(((t_59 != NULL) && (t_59 != u_59)))
              _fail(u_59);
            else
              t_59 = u_59;
          }
          t = not_null(t_59);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm y_59 (ATerm t)
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_59);
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        {
          t = Nil_0(t);
          t = t_76(t);
        }
      }
    return(t);
  }
  t = y_59(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  a_60 :
  if(match_cons(b_60, sym__2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      {
        t = not_null(c_60);
        {
          ATerm i_13 (ATerm t)
          {
            t = not_null(d_60);
            return(t);
          }
          t = at_end_1(t, i_13);
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
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_47);
    }
  else
    {
      t = g_47;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  n_60 = t;
  m_60 :
  if(match_cons(n_60, sym__2))
    {
      o_60 = ATgetArgument(n_60, 0);
      p_60 = ATgetArgument(n_60, 1);
      {
        ATerm t_60 = NULL,v_60 = NULL;
        ATerm u_60 = NULL;
        t = SSLgetAnnotations(not_null(n_60));
        {
          u_60 = t;
          if(((t_60 != NULL) && (t_60 != u_60)))
            _fail(u_60);
          else
            t_60 = u_60;
        }
        {
          t = not_null(o_60);
          {
            ATerm x_60 = NULL;
            t = h_56(t);
            {
              v_60 = t;
              {
                t = not_null(p_60);
                {
                  ATerm z_60 = NULL;
                  t = i_56(t);
                  {
                    x_60 = t;
                    {
                      ATerm a_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_60), not_null(x_60)), not_null(t_60));
                      {
                        a_61 = t;
                        if(((z_60 != NULL) && (z_60 != a_61)))
                          _fail(a_61);
                        else
                          z_60 = a_61;
                      }
                      t = not_null(z_60);
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
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_61 = NULL;
  h_61 = t;
  t = SSL_implode_string(not_null(h_61));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
  q_61 = t;
  p_61 :
  if(((ATgetType(q_61) == AT_LIST) && !(ATisEmpty(q_61))))
    {
      r_61 = ATgetFirst((ATermList) q_61);
      s_61 = (ATerm) ATgetNext((ATermList) q_61);
      {
        ATerm w_61 = NULL,y_61 = NULL;
        ATerm x_61 = NULL;
        t = SSLgetAnnotations(not_null(q_61));
        {
          x_61 = t;
          if(((w_61 != NULL) && (w_61 != x_61)))
            _fail(x_61);
          else
            w_61 = x_61;
        }
        {
          t = not_null(r_61);
          {
            ATerm a_62 = NULL;
            t = q_57(t);
            {
              y_61 = t;
              {
                t = not_null(s_61);
                {
                  ATerm c_62 = NULL;
                  t = r_57(t);
                  {
                    a_62 = t;
                    {
                      ATerm d_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_62)), not_null(y_61)), not_null(w_61));
                      {
                        d_62 = t;
                        if(((c_62 != NULL) && (c_62 != d_62)))
                          _fail(d_62);
                        else
                          c_62 = d_62;
                      }
                      t = not_null(c_62);
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
  ATerm k_62 = NULL;
  k_62 = t;
  t = SSL_explode_string(not_null(k_62));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_62 (ATerm t)
        {
          ATerm m_47 = t;
          int v_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, p_62);
              LocalPopChoice(v_47);
            }
          else
            {
              t = m_47;
              {
                ATerm l_13 (ATerm t)
                {
                  ATerm o_62 = NULL;
                  o_62 = t;
                  n_62 :
                  if(!(match_int(o_62, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm p_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, l_13, p_13);
              }
            }
          return(t);
        }
        t = p_62(t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
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
  ATerm w_47;
  w_47 = t;
  {
    ATerm g_63 = NULL,i_63 = NULL,k_63 = NULL,m_63 = NULL,q_63 = NULL,u_63 = NULL,y_63 = NULL,c_64 = NULL;
    t = term_y_47;
    {
      t = set_config_0(t);
      {
        t = term_b_48;
        {
          t = set_config_0(t);
          {
            t = term_c_48;
            {
              t = set_config_0(t);
              {
                ATerm d_48;
                d_48 = t;
                {
                  ATerm h_63 = NULL;
                  t = term_e_48;
                  {
                    t = xtc_find_path_0(t);
                    {
                      h_63 = t;
                      if(((g_63 != NULL) && (g_63 != h_63)))
                        _fail(h_63);
                      else
                        g_63 = h_63;
                    }
                  }
                }
                t = d_48;
                {
                  ATerm f_48;
                  f_48 = t;
                  {
                    ATerm j_63 = NULL;
                    t = term_g_48;
                    {
                      t = xtc_find_path_0(t);
                      {
                        j_63 = t;
                        if(((i_63 != NULL) && (i_63 != j_63)))
                          _fail(j_63);
                        else
                          i_63 = j_63;
                      }
                    }
                  }
                  t = f_48;
                  {
                    ATerm l_63 = NULL;
                    t = term_h_48;
                    {
                      t = xtc_find_path_0(t);
                      {
                        l_63 = t;
                        if(((k_63 != NULL) && (k_63 != l_63)))
                          _fail(l_63);
                        else
                          k_63 = l_63;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_63)), term_s_26), not_null(i_63)), term_s_26), not_null(g_63)), term_s_26));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, term_j_48), term_i_48));
                          {
                            t = set_config_0(t);
                            {
                              ATerm k_48;
                              k_48 = t;
                              {
                                ATerm n_63 = NULL,p_63 = NULL;
                                ATerm o_63 = NULL;
                                t = term_l_48;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    o_63 = t;
                                    if(((n_63 != NULL) && (n_63 != o_63)))
                                      _fail(o_63);
                                    else
                                      n_63 = o_63;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_63), term_n_48);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      p_63 = t;
                                      if(((m_63 != NULL) && (m_63 != p_63)))
                                        _fail(p_63);
                                      else
                                        m_63 = p_63;
                                    }
                                  }
                                }
                              }
                              t = k_48;
                              {
                                ATerm o_48;
                                o_48 = t;
                                {
                                  ATerm r_63 = NULL,t_63 = NULL;
                                  ATerm s_63 = NULL;
                                  t = term_l_48;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      s_63 = t;
                                      if(((r_63 != NULL) && (r_63 != s_63)))
                                        _fail(s_63);
                                      else
                                        r_63 = s_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_63), term_n_48);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        t_63 = t;
                                        if(((q_63 != NULL) && (q_63 != t_63)))
                                          _fail(t_63);
                                        else
                                          q_63 = t_63;
                                      }
                                    }
                                  }
                                }
                                t = o_48;
                                {
                                  ATerm v_63 = NULL,x_63 = NULL;
                                  ATerm w_63 = NULL;
                                  t = term_s_48;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      w_63 = t;
                                      if(((v_63 != NULL) && (v_63 != w_63)))
                                        _fail(w_63);
                                      else
                                        v_63 = w_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_63), term_n_48);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        x_63 = t;
                                        if(((u_63 != NULL) && (u_63 != x_63)))
                                          _fail(x_63);
                                        else
                                          u_63 = x_63;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_63)), term_s_26), not_null(q_63)), term_s_26), not_null(m_63)), term_s_26));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm u_48;
                                        u_48 = t;
                                        {
                                          ATerm z_63 = NULL,b_64 = NULL;
                                          ATerm a_64 = NULL;
                                          t = term_l_48;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              a_64 = t;
                                              if(((z_63 != NULL) && (z_63 != a_64)))
                                                _fail(a_64);
                                              else
                                                z_63 = a_64;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_63), term_v_48);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                b_64 = t;
                                                if(((y_63 != NULL) && (y_63 != b_64)))
                                                  _fail(b_64);
                                                else
                                                  y_63 = b_64;
                                              }
                                            }
                                          }
                                        }
                                        t = u_48;
                                        {
                                          ATerm d_64 = NULL,f_64 = NULL;
                                          ATerm e_64 = NULL;
                                          t = term_s_48;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              e_64 = t;
                                              if(((d_64 != NULL) && (d_64 != e_64)))
                                                _fail(e_64);
                                              else
                                                d_64 = e_64;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_64), term_v_48);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                f_64 = t;
                                                if(((c_64 != NULL) && (c_64 != f_64)))
                                                  _fail(f_64);
                                                else
                                                  c_64 = f_64;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_49), term_a_49), not_null(c_64)), term_x_48), term_z_48), term_y_48), not_null(y_63)), term_x_48));
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
  t = w_47;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm f_49 = t;
      int g_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_64 = NULL;
          t = term_m_41;
          {
            t = get_config_0(t);
            {
              ATerm v_64 = NULL;
              t = term_i_49;
              {
                t = xtc_find_0(t);
                {
                  v_64 = t;
                  if(((u_64 != NULL) && (u_64 != v_64)))
                    _fail(v_64);
                  else
                    u_64 = v_64;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_64), term_x_15);
                {
                  t = copy_file_0(t);
                  {
                    t = term_b_14;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
          LocalPopChoice(g_49);
        }
      else
        {
          t = f_49;
          {
          }
        }
      {
        ATerm j_49 = t;
        int k_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_41;
            {
              t = get_config_0(t);
              {
                t = sc_version_0(t);
                {
                  t = term_b_14;
                  t = exit_0(t);
                }
              }
            }
            LocalPopChoice(k_49);
          }
        else
          {
            t = j_49;
            {
            }
          }
        {
          ATerm l_49 = t;
          int m_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_49;
              n_49 = t;
              {
                t = term_y_24;
                t = get_config_0(t);
              }
              t = n_49;
              LocalPopChoice(m_49);
            }
          else
            {
              t = l_49;
              {
                t = (ATerm) ATinsert(ATempty, term_o_49);
                t = fatal_error_0(t);
              }
            }
          {
            t = if_verbose2_1(t, sc_version_0);
            {
              ATerm r_13 (ATerm t)
              {
                ATerm s_49;
                s_49 = t;
                {
                  t = term_y_24;
                  {
                    t = get_config_0(t);
                    {
                      ATerm s_13 (ATerm t)
                      {
                        t = term_t_49;
                        return(t);
                      }
                      t = debug_1(t, s_13);
                    }
                  }
                }
                t = s_49;
                return(t);
              }
              t = if_verbose1_1(t, r_13);
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
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm t_13 (ATerm t)
        {
          ATerm u_13 (ATerm t)
          {
            ATerm a_65 = NULL;
            ATerm b_65 = NULL;
            b_65 = t;
            if(((a_65 != NULL) && (a_65 != b_65)))
              _fail(b_65);
            else
              a_65 = b_65;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(CheckATermList(not_null(a_65)), term_w_49));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, u_13);
          return(t);
        }
        t = profile_p__2(t, t_13, compile_0);
        {
          ATerm v_13 (ATerm t)
          {
            ATerm c_65 = NULL;
            ATerm d_65 = NULL;
            t = run_time_0(t);
            {
              d_65 = t;
              if(((c_65 != NULL) && (c_65 != d_65)))
                _fail(d_65);
              else
                c_65 = d_65;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_49), not_null(c_65)), term_y_49));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, v_13);
          {
            t = term_b_14;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm e_65 = NULL;
        ATerm f_65 = NULL;
        t = run_time_0(t);
        {
          f_65 = t;
          if(((e_65 != NULL) && (e_65 != f_65)))
            _fail(f_65);
          else
            e_65 = f_65;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_49), not_null(e_65)), term_g_50));
          {
            t = printnl_0(t);
            {
              t = term_l_23;
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
