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
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_b_48;
ATerm term_z_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_n_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_r_44;
ATerm term_y_43;
ATerm term_r_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_s_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_x_38;
ATerm term_u_38;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_u_37;
ATerm term_n_37;
ATerm term_f_37;
ATerm term_b_37;
ATerm term_u_36;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_e_35;
ATerm term_x_34;
ATerm term_q_34;
ATerm term_k_34;
ATerm term_z_33;
ATerm term_v_33;
ATerm term_q_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_e_33;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_b_32;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_f_31;
ATerm term_z_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_o_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_o_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_x_15;
void init_constant_terms (void)
{
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_x_21);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_p_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_c_33);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_d_21);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_d_21);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_d_21);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_d_21);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_d_39, term_d_21);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_d_16, term_x_15);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_h_40, term_d_21);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_o_40, term_d_21);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym__2, term_r_40, term_d_21);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__2, term_u_42, term_v_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__3, term_u_42, term_v_42, (ATerm) ATempty);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9beta11", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_i_46);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym__2, term_d_16, term_y_23);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_x_15);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_82 (ATerm), ATerm u_82 (ATerm));
ATerm crush_2 (ATerm, ATerm r_81 (ATerm), ATerm s_81 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_90 (ATerm));
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm b_97 (ATerm));
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
ATerm if_keep2_1 (ATerm, ATerm p_90 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm q_90 (ATerm));
ATerm AddMain_1 (ATerm, ATerm v_68 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm l_97 (ATerm));
ATerm add_main_0 (ATerm);
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm w_68 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm j_97 (ATerm), ATerm k_97 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm k_93 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm a_97 (ATerm));
ATerm assert_1 (ATerm, ATerm w_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm k_87 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm p_63 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm c_97 (ATerm), ATerm d_97 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm c_90 (ATerm));
ATerm basename_1 (ATerm, ATerm p_85 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm t_86 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm s_86 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm m_96 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm p_96 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_90 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm debug_1 (ATerm, ATerm d_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_68 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm e_90 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm w_83 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_69 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm d_90 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm f_90 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm));
ATerm union_1 (ATerm, ATerm c_82 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm o_93 (ATerm));
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
ATerm map_1 (ATerm, ATerm j_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm g_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm h_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_92 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_92 (ATerm));
ATerm parse_options_1 (ATerm, ATerm f_92 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm xtc_find_path_0 (ATerm);
ATerm init_sc_config_0 (ATerm);
ATerm command_line_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_exit(not_null(c_0));
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
        ATerm t_15;
        t_15 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = t_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_82 (ATerm), ATerm u_82 (ATerm))
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_82(t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
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
                t = foldr_2(t, t_82, u_82);
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
                t = u_82(t);
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
ATerm crush_2 (ATerm t, ATerm r_81 (ATerm), ATerm s_81 (ATerm))
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
      t = foldr_2(t, r_81, s_81);
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
      t = term_x_15;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm c_16;
    c_16 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_d_16;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_e_16);
        t = geq_0(t);
      }
    }
    t = c_16;
    t = b_90(t);
    return(t);
  }
  t = try_1(t, e_0);
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
        ATerm f_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_f_16;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, f_0);
        {
          ATerm g_4 = NULL;
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_j_16;
              t = get_config_0(t);
              ;
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_k_16;
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
                t = term_l_16;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_j_16), not_null(c_4)));
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
            t = term_r_16;
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
            t = term_t_16;
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
                t = term_z_16;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_j_16), not_null(r_4)), term_a_17));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_n_16, not_null(v_4));
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
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17;
      d_17 = t;
      {
        t = term_a_17;
        t = get_config_0(t);
      }
      t = d_17;
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
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
              t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_j_17));
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
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_m_17);
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
            t = term_m_17;
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm r_17 = t;
              int s_17 = stack_ptr;
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
                        ATerm t_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm u_17 = t;
                            int v_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(v_17);
                              }
                            else
                              {
                                t = u_17;
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
                            t = t_17;
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
                  LocalPopChoice(s_17);
                }
              else
                {
                  t = r_17;
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
ATerm xtc_transform_1 (ATerm t, ATerm b_97 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, b_97, e_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_k_18;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_l_18);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm n_18;
    n_18 = t;
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
    t = n_18;
    {
      ATerm b_7 = NULL;
      t = term_p_18;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_p_18);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_q_18)), not_null(w_6));
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
    t = term_z_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(g_7)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, l_1, m_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_a_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_7)), term_q_18);
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
      t = term_b_19;
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
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(CheckATermList(not_null(o_7)), term_c_19));
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
                    t = term_f_19;
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
    t = term_g_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, w_1, x_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_h_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_j_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_k_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, c_2, e_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_l_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_8)), term_q_18);
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
      t = term_m_19;
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
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(CheckATermList(not_null(m_8)), term_n_19));
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
          ATerm o_19;
          o_19 = t;
          {
            ATerm p_19 = t;
            if((PushChoice() == 0))
              {
                t = term_q_19;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_19;
              }
          }
          t = o_19;
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
    t = term_y_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_d_20;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_e_20;
    return(t);
  }
  ATerm s_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  ATerm u_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, t_2, u_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm g_9 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm g_20;
    g_20 = t;
    {
      t = term_h_20;
      t = get_config_0(t);
    }
    t = g_20;
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            t = (ATerm) ATinsert(ATempty, term_k_20);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm z_2 (ATerm t)
        {
          ATerm h_9 = NULL;
          ATerm c_3 (ATerm t)
          {
            t = term_l_20;
            return(t);
          }
          t = get_outfile_1(t, c_3);
          {
            h_9 = t;
            if(((g_9 != NULL) && (g_9 != h_9)))
              _fail(h_9);
            else
              g_9 = h_9;
          }
          return(t);
        }
        t = copy_to_1(t, z_2);
        {
          ATerm d_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_o_20);
            return(t);
          }
          t = say_1(t, d_3);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, y_2);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm t_20;
    t_20 = t;
    {
      ATerm k_9 = NULL;
      ATerm l_9 = NULL;
      t = term_u_20;
      {
        t = get_config_0(t);
        {
          l_9 = t;
          if(((k_9 != NULL) && (k_9 != l_9)))
            _fail(l_9);
          else
            k_9 = l_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), term_e_16);
        t = geq_0(t);
      }
    }
    t = t_20;
    t = p_90(t);
    return(t);
  }
  t = try_1(t, e_3);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm r_9 = NULL;
  ATerm f_3 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm p_9 = NULL;
    ATerm q_9 = NULL;
    t = pass_verbose_0(t);
    {
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(p_9)), term_q_18);
    return(t);
  }
  t = xtc_transform_2(t, f_3, g_3);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm m_3 (ATerm t)
      {
        ATerm s_9 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = term_w_20;
          return(t);
        }
        t = get_outfile_1(t, q_3);
        {
          s_9 = t;
          if(((r_9 != NULL) && (r_9 != s_9)))
            _fail(s_9);
          else
            r_9 = s_9;
        }
        return(t);
      }
      t = copy_to_1(t, m_3);
      {
        ATerm r_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_9)), term_x_20);
          return(t);
        }
        t = say_1(t, r_3);
      }
      return(t);
    }
    t = if_keep2_1(t, j_3);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm q_90 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm y_20;
    y_20 = t;
    {
      ATerm w_9 = NULL;
      ATerm x_9 = NULL;
      t = term_u_20;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_z_20);
        t = geq_0(t);
      }
    }
    t = y_20;
    t = q_90(t);
    return(t);
  }
  t = try_1(t, s_3);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm c_10 = NULL,d_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym_Specification_1))
    {
      d_10 = ATgetArgument(c_10, 0);
      {
        ATerm f_10 = NULL;
        ATerm g_10 = NULL;
        t = term_d_21;
        {
          t = v_68(t);
          {
            g_10 = t;
            if(((f_10 != NULL) && (f_10 != g_10)))
              _fail(g_10);
            else
              f_10 = g_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(d_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_e_21, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_10)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm l_97 (ATerm))
{
  t = read_from_0(t);
  {
    t = l_97(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm l_10 = NULL,n_10 = NULL;
  ATerm t_3 (ATerm t)
  {
    ATerm i_21;
    i_21 = t;
    {
      ATerm m_10 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          m_10 = t;
          {
            if(((l_10 != NULL) && (l_10 != m_10)))
              _fail(m_10);
            else
              l_10 = m_10;
            {
              ATerm w_3 (ATerm t)
              {
                ATerm x_3 (ATerm t)
                {
                  t = term_m_21;
                  return(t);
                }
                t = debug_1(t, x_3);
                return(t);
              }
              t = if_verbose2_1(t, w_3);
            }
          }
        }
      }
    }
    t = i_21;
    {
      ATerm y_3 (ATerm t)
      {
        ATerm z_3 (ATerm t)
        {
          t = not_null(l_10);
          return(t);
        }
        t = AddMain_1(t, z_3);
        return(t);
      }
      t = xtc_io_transform_1(t, y_3);
    }
    return(t);
  }
  t = try_1(t, t_3);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        ATerm o_10 = NULL;
        ATerm j_4 (ATerm t)
        {
          t = term_n_21;
          return(t);
        }
        t = get_outfile_1(t, j_4);
        {
          o_10 = t;
          if(((n_10 != NULL) && (n_10 != o_10)))
            _fail(o_10);
          else
            n_10 = o_10;
        }
        return(t);
      }
      t = copy_to_1(t, i_4);
      {
        ATerm k_4 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_10)), term_o_21);
          return(t);
        }
        t = say_1(t, k_4);
      }
      return(t);
    }
    t = if_keep3_1(t, d_4);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm w_10 = NULL,x_10 = NULL;
  u_10 = t;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm p_21;
      p_21 = t;
      {
        ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
        t = term_y_21;
        {
          t = table_get_0(t);
          {
            y_10 = t;
            t_10 :
            if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
              {
                z_10 = ATgetFirst((ATermList) y_10);
                a_11 = (ATerm) ATgetNext((ATermList) y_10);
                {
                  if(((x_10 != NULL) && (x_10 != z_10)))
                    _fail(z_10);
                  else
                    x_10 = z_10;
                  {
                    if(((w_10 != NULL) && (w_10 != a_11)))
                      _fail(a_11);
                    else
                      w_10 = a_11;
                    {
                      t = not_null(x_10);
                      {
                        ATerm m_4 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, m_4);
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
      t = p_21;
      {
        ATerm n_4 (ATerm t)
        {
          t = term_s_21;
          return(t);
        }
        t = end_scope_1(t, n_4);
      }
      return(t);
    }
    t = repeat_1(t, l_4);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_16;
        t = get_config_0(t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = term_m_17;
      }
    return(t);
  }
  t = copy_to_1(t, o_4);
  {
    t = term_x_15;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm w_68 (ATerm))
{
  ATerm f_11 = NULL,h_11 = NULL;
  ATerm e_22;
  e_22 = t;
  {
    ATerm g_11 = NULL;
    t = w_68(t);
    {
      g_11 = t;
      if(((f_11 != NULL) && (f_11 != g_11)))
        _fail(g_11);
      else
        f_11 = g_11;
    }
  }
  t = e_22;
  {
    ATerm i_11 = NULL;
    t = term_j_22;
    {
      t = get_config_0(t);
      {
        i_11 = t;
        if(((h_11 != NULL) && (h_11 != i_11)))
          _fail(i_11);
        else
          h_11 = i_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), not_null(f_11));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_stderr_0))
    {
      ATerm r_11 = NULL,t_11 = NULL;
      ATerm k_22;
      k_22 = t;
      {
        ATerm s_11 = NULL;
        t = SSLgetAnnotations(not_null(p_11));
        {
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
        }
      }
      t = k_22;
      {
        ATerm u_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(r_11));
        {
          u_11 = t;
          if(((t_11 != NULL) && (t_11 != u_11)))
            _fail(u_11);
          else
            t_11 = u_11;
        }
        t = not_null(t_11);
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
  ATerm c_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_stdout_0))
    {
      ATerm e_12 = NULL,g_12 = NULL;
      ATerm l_22;
      l_22 = t;
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
      t = l_22;
      {
        ATerm h_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(e_12));
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
ATerm copy_to_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_FILE_1))
    {
      u_12 = ATgetArgument(t_12, 0);
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_12 = NULL;
            ATerm x_12 = NULL;
            t = q_0(t);
            {
              x_12 = t;
              {
                if(((w_12 != NULL) && (w_12 != x_12)))
                  _fail(x_12);
                else
                  w_12 = x_12;
                {
                  ATerm o_22 = t;
                  int p_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(p_22);
                    }
                  else
                    {
                      t = o_22;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(w_12));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_12));
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_12 = NULL;
                  ATerm a_13 = NULL;
                  t = q_0(t);
                  {
                    a_13 = t;
                    {
                      if(((z_12 != NULL) && (z_12 != a_13)))
                        _fail(a_13);
                      else
                        z_12 = a_13;
                      {
                        ATerm a_23 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm b_23 = t;
                            int c_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(c_23);
                              }
                            else
                              {
                                t = b_23;
                                {
                                  ATerm f_23 = t;
                                  int g_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(g_23);
                                    }
                                  else
                                    {
                                      t = f_23;
                                      {
                                        ATerm b_13 = NULL;
                                        b_13 = t;
                                        if(((u_12 != NULL) && (u_12 != b_13)))
                                          _fail(b_13);
                                        else
                                          u_12 = b_13;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = a_23;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(z_12));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_12));
                  ;
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = y_22;
                  {
                    ATerm d_13 = NULL;
                    t = q_0(t);
                    {
                      d_13 = t;
                      if(((u_12 != NULL) && (u_12 != d_13)))
                        _fail(d_13);
                      else
                        u_12 = d_13;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_12));
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
  ATerm m_13 = NULL;
  ATerm s_4 (ATerm t)
  {
    ATerm l_23;
    l_23 = t;
    {
      t = term_m_23;
      t = get_config_0(t);
    }
    t = l_23;
    {
      ATerm z_4 (ATerm t)
      {
        ATerm n_13 = NULL;
        ATerm a_5 (ATerm t)
        {
          t = term_n_23;
          return(t);
        }
        t = get_outfile_1(t, a_5);
        {
          n_13 = t;
          if(((m_13 != NULL) && (m_13 != n_13)))
            _fail(n_13);
          else
            m_13 = n_13;
        }
        return(t);
      }
      t = copy_to_1(t, z_4);
      {
        ATerm o_23;
        o_23 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_t_23);
          t = echo_0(t);
        }
        t = o_23;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, s_4);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm s_13 = NULL,u_13 = NULL;
  ATerm t_13 = NULL;
  t = term_u_20;
  {
    ATerm u_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = u_23;
        t = term_y_23;
      }
    {
      t_13 = t;
      if(((s_13 != NULL) && (s_13 != t_13)))
        _fail(t_13);
      else
        s_13 = t_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), term_y_23);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_13 = t;
          if(((r_13 != NULL) && (r_13 != u_13)))
            _fail(u_13);
          else
            r_13 = u_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_13)), term_u_20);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = SSL_int_to_string(not_null(y_13));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm e_14 = NULL,g_14 = NULL;
  ATerm f_14 = NULL;
  t = term_d_16;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = term_y_23;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), term_y_23);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_14)), term_d_16);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm l_14 = NULL;
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_16;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        t = term_j_22;
        t = get_config_0(t);
      }
    }
  {
    l_14 = t;
    if(((k_14 != NULL) && (k_14 != l_14)))
      _fail(l_14);
    else
      k_14 = l_14;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_14)), term_d_24);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym_stdin_0))
    {
      ATerm u_14 = NULL;
      ATerm v_14 = NULL;
      t = term_e_24;
      {
        t = ReadFromFile_0(t);
        {
          v_14 = t;
          if(((u_14 != NULL) && (u_14 != v_14)))
            _fail(v_14);
          else
            u_14 = v_14;
        }
      }
      t = not_null(u_14);
    }
  else
    {
      if(match_cons(s_14, sym_FILE_1))
        {
          t_14 = ATgetArgument(s_14, 0);
          {
            ATerm x_14 = NULL;
            ATerm y_14 = NULL;
            t = not_null(t_14);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  y_14 = t;
                  if(((x_14 != NULL) && (x_14 != y_14)))
                    _fail(y_14);
                  else
                    x_14 = y_14;
                }
              }
            }
            t = not_null(x_14);
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
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      t = SSL_WriteToBinaryFile(not_null(g_15), not_null(h_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm p_15 = NULL;
  n_15 = t;
  {
    ATerm q_15 = NULL;
    t = xtc_new_file_0(t);
    {
      q_15 = t;
      {
        if(((p_15 != NULL) && (p_15 != q_15)))
          _fail(q_15);
        else
          p_15 = q_15;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(n_15));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(p_15);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_15));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm j_97 (ATerm), ATerm k_97 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, j_97, k_97);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = SSL_close_file(not_null(u_15));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym__2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      t = SSL_execvp(not_null(a_16), not_null(b_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm g_16 = NULL;
  g_16 = t;
  t = SSL_waitpid(not_null(g_16));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm q_16 = NULL;
  ATerm s_16 = NULL;
  q_16 = t;
  {
    t = fork_0(t);
    {
      s_16 = t;
      {
        ATerm f_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 = NULL;
            u_16 = t;
            m_16 :
            if(match_int(u_16, 0))
              {
                t = not_null(q_16);
                t = k_93(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = f_24;
            {
              ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
              t = not_null(s_16);
              {
                t = waitpid_0(t);
                {
                  v_16 = t;
                  o_16 :
                  if(match_cons(v_16, sym_WaitStatus_3))
                    {
                      w_16 = ATgetArgument(v_16, 0);
                      x_16 = ATgetArgument(v_16, 1);
                      y_16 = ATgetArgument(v_16, 2);
                      p_16 :
                      if(match_int(w_16, 0))
                        {
                          t = not_null(q_16);
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
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym__2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      {
        ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(h_17));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, b_5);
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
ATerm xtc_command_1 (ATerm t, ATerm a_97 (ATerm))
{
  ATerm n_17 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    ATerm o_17 = NULL;
    t = a_97(t);
    {
      t = xtc_find_warning_0(t);
      {
        o_17 = t;
        if(((n_17 != NULL) && (n_17 != o_17)))
          _fail(o_17);
        else
          n_17 = o_17;
      }
    }
  }
  t = i_24;
  {
    ATerm j_24;
    j_24 = t;
    {
      ATerm p_17 = NULL;
      ATerm q_17 = NULL;
      q_17 = t;
      if(((p_17 != NULL) && (p_17 != q_17)))
        _fail(q_17);
      else
        p_17 = q_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(p_17));
        t = call_0(t);
      }
    }
    t = j_24;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym__2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      {
        ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
        ATerm k_24;
        k_24 = t;
        {
          ATerm g_18 = NULL;
          ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
          t = w_86(t);
          {
            g_18 = t;
            {
              if(((d_18 != NULL) && (d_18 != g_18)))
                _fail(g_18);
              else
                d_18 = g_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), not_null(z_17), not_null(a_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_24 = t;
                    int m_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), term_x_21);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(m_24);
                      }
                    else
                      {
                        t = l_24;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_18 = t;
                      w_17 :
                      if(((ATgetType(h_18) == AT_LIST) && !(ATisEmpty(h_18))))
                        {
                          i_18 = ATgetFirst((ATermList) h_18);
                          j_18 = (ATerm) ATgetNext((ATermList) h_18);
                          {
                            if(((e_18 != NULL) && (e_18 != i_18)))
                              _fail(i_18);
                            else
                              e_18 = i_18;
                            {
                              if(((f_18 != NULL) && (f_18 != j_18)))
                                _fail(j_18);
                              else
                                f_18 = j_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), term_x_21, (ATerm) ATinsert(CheckATermList(not_null(f_18)), (ATerm) ATinsert(CheckATermList(not_null(e_18)), not_null(z_17))));
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
        t = k_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm k_87 (ATerm))
{
  ATerm n_24;
  n_24 = t;
  {
    t = k_87(t);
    {
      ATerm c_5 (ATerm t)
      {
        t = term_o_24;
        return(t);
      }
      t = debug_1(t, c_5);
    }
  }
  t = n_24;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  ATerm p_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
      t_18 = t;
      o_18 :
      if(match_cons(t_18, sym__2))
        {
          u_18 = ATgetArgument(t_18, 0);
          v_18 = ATgetArgument(t_18, 1);
          {
            if(((s_18 != NULL) && (s_18 != u_18)))
              _fail(u_18);
            else
              s_18 = u_18;
            if(((r_18 != NULL) && (r_18 != v_18)))
              _fail(v_18);
            else
              r_18 = v_18;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_24);
      t = SSL_open_file(not_null(s_18), not_null(r_18));
    }
  else
    {
      t = p_24;
      {
        ATerm w_18 = NULL;
        ATerm x_18 = NULL;
        ATerm d_5 (ATerm t)
        {
          t = term_z_24;
          return(t);
        }
        t = obsolete_1(t, d_5);
        {
          w_18 = t;
          {
            if(((s_18 != NULL) && (s_18 != w_18)))
              _fail(w_18);
            else
              s_18 = w_18;
            {
              ATerm a_25;
              a_25 = t;
              {
                ATerm y_18 = NULL;
                t = term_b_25;
                {
                  y_18 = t;
                  if(((x_18 != NULL) && (x_18 != y_18)))
                    _fail(y_18);
                  else
                    x_18 = y_18;
                }
              }
              t = a_25;
              t = SSL_open_file(not_null(s_18), not_null(x_18));
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
  ATerm d_19 = NULL;
  ATerm e_19 = NULL;
  t = term_d_21;
  {
    t = new_0(t);
    {
      e_19 = t;
      if(((d_19 != NULL) && (d_19 != e_19)))
        _fail(e_19);
      else
        d_19 = e_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), term_c_25);
    {
      t = conc_strings_0(t);
      {
        ATerm g_5 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, g_5);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm i_19 = NULL;
  t = new_file_0(t);
  {
    i_19 = t;
    {
      ATerm d_25;
      d_25 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), term_b_25);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), term_d_21);
            {
              ATerm h_5 (ATerm t)
              {
                t = term_s_21;
                return(t);
              }
              t = assert_1(t, h_5);
            }
          }
        }
      }
      t = d_25;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm s_19 = NULL,t_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym_stdin_0))
    {
      ATerm u_19 = NULL;
      ATerm v_19 = NULL;
      ATerm w_19 = NULL;
      t = xtc_new_file_0(t);
      {
        v_19 = t;
        {
          if(((u_19 != NULL) && (u_19 != v_19)))
            _fail(v_19);
          else
            u_19 = v_19;
          {
            ATerm x_19 = NULL;
            t = p_0(t);
            {
              x_19 = t;
              if(((w_19 != NULL) && (w_19 != x_19)))
                _fail(x_19);
              else
                w_19 = x_19;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_19)), term_j_16));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(u_19);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_19));
    }
  else
    {
      if(match_cons(s_19, sym_FILE_1))
        {
          t_19 = ATgetArgument(s_19, 0);
          {
            ATerm z_19 = NULL;
            ATerm a_20 = NULL;
            t = not_null(t_19);
            {
              ATerm b_20 = NULL;
              t = xtc_new_file_0(t);
              {
                a_20 = t;
                {
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                  {
                    ATerm c_20 = NULL;
                    t = p_0(t);
                    {
                      c_20 = t;
                      if(((b_20 != NULL) && (b_20 != c_20)))
                        _fail(c_20);
                      else
                        b_20 = c_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_19)), term_j_16), not_null(t_19)), term_f_25));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(z_19);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_19));
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
  ATerm n_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym_stdin_0))
    {
      ATerm p_20 = NULL,r_20 = NULL;
      ATerm g_25;
      g_25 = t;
      {
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(n_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
      }
      t = g_25;
      {
        ATerm s_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(p_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        t = not_null(r_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_FILE_1))
    {
      c_21 = ATgetArgument(b_21, 0);
      {
        ATerm f_21 = NULL,h_21 = NULL;
        ATerm g_21 = NULL;
        t = SSLgetAnnotations(not_null(b_21));
        {
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
        }
        {
          t = not_null(c_21);
          {
            ATerm j_21 = NULL;
            t = p_63(t);
            {
              h_21 = t;
              {
                ATerm k_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(h_21)), not_null(f_21));
                {
                  k_21 = t;
                  if(((j_21 != NULL) && (j_21 != k_21)))
                    _fail(k_21);
                  else
                    j_21 = k_21;
                }
                t = not_null(j_21);
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
ATerm xtc_transform_2 (ATerm t, ATerm c_97 (ATerm), ATerm d_97 (ATerm))
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          t = stdin_0(t);
        }
      LocalPopChoice(i_25);
      t = xtc_transform_file_2(t, c_97, d_97);
    }
  else
    {
      t = h_25;
      t = xtc_transform_term_2(t, c_97, d_97);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm p_25;
    p_25 = t;
    {
      ATerm q_21 = NULL;
      ATerm r_21 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          r_21 = t;
          if(((q_21 != NULL) && (q_21 != r_21)))
            _fail(r_21);
          else
            q_21 = r_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), term_z_20);
        t = geq_0(t);
      }
    }
    t = p_25;
    t = c_90(t);
    return(t);
  }
  t = try_1(t, m_5);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm p_85 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm w_25 = t;
      int x_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, n_5);
          ;
          LocalPopChoice(x_25);
        }
      else
        {
          t = w_25;
          {
            ATerm a_26 = t;
            int b_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm v_21 = NULL;
                  v_21 = t;
                  t_21 :
                  if(!(match_int(v_21, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, o_5, _id);
                ;
                LocalPopChoice(b_26);
              }
            else
              {
                t = a_26;
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm w_21 = NULL;
                    w_21 = t;
                    u_21 :
                    if(!(match_int(w_21, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, p_5, p_85);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, n_5);
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
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_FILE_1))
    {
      d_22 = ATgetArgument(c_22, 0);
      {
        ATerm f_22 = NULL,g_22 = NULL;
        ATerm h_22 = NULL;
        t = not_null(d_22);
        {
          ATerm i_22 = NULL;
          t = basename_0(t);
          {
            h_22 = t;
            {
              if(((f_22 != NULL) && (f_22 != h_22)))
                _fail(h_22);
              else
                f_22 = h_22;
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm r_5 (ATerm t)
                  {
                    t = term_c_26;
                    return(t);
                  }
                  t = debug_1(t, r_5);
                  return(t);
                }
                t = if_verbose3_1(t, q_5);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(f_22));
                  {
                    t = set_config_0(t);
                    {
                      ATerm e_26 = t;
                      int f_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_j_16;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(f_26);
                        }
                      else
                        {
                          t = e_26;
                          t = not_null(f_22);
                        }
                      {
                        i_22 = t;
                        {
                          if(((g_22 != NULL) && (g_22 != i_22)))
                            _fail(i_22);
                          else
                            g_22 = i_22;
                          {
                            ATerm s_5 (ATerm t)
                            {
                              ATerm u_5 (ATerm t)
                              {
                                t = term_g_26;
                                return(t);
                              }
                              t = debug_1(t, u_5);
                              return(t);
                            }
                            t = if_verbose3_1(t, s_5);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_j_22, not_null(g_22));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_22));
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
    ATerm v_5 (ATerm t)
    {
      t = term_j_26;
      return(t);
    }
    ATerm w_5 (ATerm t)
    {
      ATerm q_22 = NULL,s_22 = NULL,u_22 = NULL,w_22 = NULL;
      ATerm k_26;
      k_26 = t;
      {
        ATerm r_22 = NULL;
        t = dep_name_0(t);
        {
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
      }
      t = k_26;
      {
        ATerm m_26;
        m_26 = t;
        {
          ATerm t_22 = NULL;
          t = pass_verbose_0(t);
          {
            t_22 = t;
            if(((s_22 != NULL) && (s_22 != t_22)))
              _fail(t_22);
            else
              s_22 = t_22;
          }
        }
        t = m_26;
        {
          ATerm n_26;
          n_26 = t;
          {
            ATerm v_22 = NULL;
            t = pass_keep_0(t);
            {
              v_22 = t;
              if(((u_22 != NULL) && (u_22 != v_22)))
                _fail(v_22);
              else
                u_22 = v_22;
            }
          }
          t = n_26;
          {
            ATerm x_22 = NULL;
            t = term_o_26;
            {
              t = get_config_0(t);
              {
                x_22 = t;
                if(((w_22 != NULL) && (w_22 != x_22)))
                  _fail(x_22);
                else
                  w_22 = x_22;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_22)), not_null(s_22)), not_null(w_22)), not_null(q_22));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, v_5, w_5);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      t = term_u_26;
      return(t);
    }
    t = debug_1(t, c_6);
    return(t);
  }
  t = if_verbose2_1(t, a_6);
  {
    ATerm g_6 (ATerm t)
    {
      ATerm j_6 (ATerm t)
      {
        ATerm d_23 = NULL;
        ATerm e_23 = NULL;
        e_23 = t;
        if(((d_23 != NULL) && (d_23 != e_23)))
          _fail(e_23);
        else
          d_23 = e_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(CheckATermList(not_null(d_23)), term_v_26));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, j_6);
      return(t);
    }
    ATerm i_6 (ATerm t)
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
    t = profile_p__2(t, g_6, i_6);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  h_23 :
  if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
    {
      j_23 = ATgetFirst((ATermList) i_23);
      k_23 = (ATerm) ATgetNext((ATermList) i_23);
      t = not_null(k_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  p_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      s_23 = ATgetArgument(q_23, 1);
      {
        ATerm w_26;
        w_26 = t;
        {
          ATerm v_23 = NULL;
          ATerm w_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(s_23));
          {
            ATerm y_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(z_26);
              }
            else
              {
                t = y_26;
                t = (ATerm) ATempty;
              }
            {
              w_23 = t;
              if(((v_23 != NULL) && (v_23 != w_23)))
                _fail(w_23);
              else
                v_23 = w_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_23), not_null(s_23), not_null(v_23));
            t = table_put_0(t);
          }
        }
        t = w_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm q_24 = NULL,s_24 = NULL,t_24 = NULL;
  ATerm a_27;
  a_27 = t;
  {
    ATerm u_24 = NULL;
    ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
    t = t_86(t);
    {
      u_24 = t;
      {
        if(((t_24 != NULL) && (t_24 != u_24)))
          _fail(u_24);
        else
          t_24 = u_24;
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_24), term_x_21);
              t = table_get_0(t);
              ;
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_24 = t;
            g_24 :
            if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
              {
                w_24 = ATgetFirst((ATermList) v_24);
                x_24 = (ATerm) ATgetNext((ATermList) v_24);
                {
                  if(((s_24 != NULL) && (s_24 != w_24)))
                    _fail(w_24);
                  else
                    s_24 = w_24;
                  {
                    if(((q_24 != NULL) && (q_24 != x_24)))
                      _fail(x_24);
                    else
                      q_24 = x_24;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_24), term_x_21, not_null(q_24));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_24);
                          {
                            ATerm k_6 (ATerm t)
                            {
                              ATerm y_24 = NULL;
                              y_24 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_24), not_null(y_24));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_6);
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
  t = a_27;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_remove(not_null(e_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_69(t);
      t = n_69(t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        t = n_69(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm j_25 = NULL;
  ATerm j_27;
  j_27 = t;
  {
    ATerm k_25 = NULL;
    ATerm l_25 = NULL;
    t = s_86(t);
    {
      k_25 = t;
      {
        if(((j_25 != NULL) && (j_25 != k_25)))
          _fail(k_25);
        else
          j_25 = k_25;
        {
          ATerm m_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), term_x_21);
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                t = (ATerm) ATempty;
              }
            {
              m_25 = t;
              if(((l_25 != NULL) && (l_25 != m_25)))
                _fail(m_25);
              else
                l_25 = m_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_25), term_x_21, (ATerm) ATinsert(CheckATermList(not_null(l_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = j_27;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm m_96 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL;
  ATerm l_6 (ATerm t)
  {
    t = term_s_21;
    return(t);
  }
  t = begin_scope_1(t, l_6);
  {
    ATerm m_6 (ATerm t)
    {
      ATerm m_27;
      m_27 = t;
      {
        ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_21;
            t = table_get_0(t);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          t_25 = t;
          q_25 :
          if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
            {
              u_25 = ATgetFirst((ATermList) t_25);
              v_25 = (ATerm) ATgetNext((ATermList) t_25);
              {
                if(((s_25 != NULL) && (s_25 != u_25)))
                  _fail(u_25);
                else
                  s_25 = u_25;
                {
                  if(((r_25 != NULL) && (r_25 != v_25)))
                    _fail(v_25);
                  else
                    r_25 = v_25;
                  {
                    t = not_null(s_25);
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
      t = m_27;
      {
        ATerm o_6 (ATerm t)
        {
          t = term_s_21;
          return(t);
        }
        t = end_scope_1(t, o_6);
      }
      return(t);
    }
    t = restore_always_2(t, m_96, m_6);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm p_96 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_25 = NULL;
        ATerm z_25 = NULL;
        t = term_f_25;
        {
          t = get_config_0(t);
          {
            z_25 = t;
            if(((y_25 != NULL) && (y_25 != z_25)))
              _fail(z_25);
            else
              y_25 = z_25;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_25));
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = term_e_24;
      }
    t = p_96(t);
    return(t);
  }
  t = xtc_temp_files_1(t, p_6);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
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
  t = xtc_input_1(t, s_6);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm x_27;
    x_27 = t;
    {
      ATerm h_26 = NULL;
      ATerm i_26 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          i_26 = t;
          if(((h_26 != NULL) && (h_26 != i_26)))
            _fail(i_26);
          else
            h_26 = i_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_26), term_y_23);
        t = geq_0(t);
      }
    }
    t = x_27;
    t = a_90(t);
    return(t);
  }
  t = try_1(t, t_6);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  t = SSL_TicksToSeconds(not_null(l_26));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,x_26 = NULL;
  q_26 = t;
  p_26 :
  if(match_cons(q_26, sym__4))
    {
      r_26 = ATgetArgument(q_26, 0);
      s_26 = ATgetArgument(q_26, 1);
      t_26 = ATgetArgument(q_26, 2);
      x_26 = ATgetArgument(q_26, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), not_null(x_26));
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
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym__2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      {
        ATerm y_27 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_27), not_null(i_27));
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = y_27;
            t = SSL_addr(not_null(h_27), not_null(i_27));
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
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym__4))
    {
      p_27 = ATgetArgument(o_27, 0);
      q_27 = ATgetArgument(o_27, 1);
      r_27 = ATgetArgument(o_27, 2);
      s_27 = ATgetArgument(o_27, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(r_27));
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
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym__2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_28), not_null(c_28));
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = SSL_subtr(not_null(b_28), not_null(c_28));
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
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  o_28 = t;
  l_28 :
  if(match_cons(o_28, sym__2))
    {
      p_28 = ATgetArgument(o_28, 0);
      u_28 = ATgetArgument(o_28, 1);
      m_28 :
      if(match_cons(p_28, sym__4))
        {
          q_28 = ATgetArgument(p_28, 0);
          r_28 = ATgetArgument(p_28, 1);
          s_28 = ATgetArgument(p_28, 2);
          t_28 = ATgetArgument(p_28, 3);
          n_28 :
          if(match_cons(u_28, sym__4))
            {
              v_28 = ATgetArgument(u_28, 0);
              w_28 = ATgetArgument(u_28, 1);
              x_28 = ATgetArgument(u_28, 2);
              y_28 = ATgetArgument(u_28, 3);
              {
                ATerm h_29 = NULL,j_29 = NULL,l_29 = NULL,n_29 = NULL;
                ATerm g_28;
                g_28 = t;
                {
                  ATerm i_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_28), not_null(v_28));
                  {
                    t = subt_0(t);
                    {
                      i_29 = t;
                      if(((h_29 != NULL) && (h_29 != i_29)))
                        _fail(i_29);
                      else
                        h_29 = i_29;
                    }
                  }
                }
                t = g_28;
                {
                  ATerm h_28;
                  h_28 = t;
                  {
                    ATerm k_29 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(w_28));
                    {
                      t = subt_0(t);
                      {
                        k_29 = t;
                        if(((j_29 != NULL) && (j_29 != k_29)))
                          _fail(k_29);
                        else
                          j_29 = k_29;
                      }
                    }
                  }
                  t = h_28;
                  {
                    ATerm i_28;
                    i_28 = t;
                    {
                      ATerm m_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_28), not_null(x_28));
                      {
                        t = subt_0(t);
                        {
                          m_29 = t;
                          if(((l_29 != NULL) && (l_29 != m_29)))
                            _fail(m_29);
                          else
                            l_29 = m_29;
                        }
                      }
                    }
                    t = i_28;
                    {
                      ATerm o_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), not_null(y_28));
                      {
                        t = subt_0(t);
                        {
                          o_29 = t;
                          if(((n_29 != NULL) && (n_29 != o_29)))
                            _fail(o_29);
                          else
                            n_29 = o_29;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(h_29), not_null(j_29), not_null(l_29), not_null(n_29));
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
ATerm profile_p__2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm y_29 = NULL;
  ATerm j_28;
  j_28 = t;
  {
    ATerm z_29 = NULL;
    t = times_0(t);
    {
      z_29 = t;
      if(((y_29 != NULL) && (y_29 != z_29)))
        _fail(z_29);
      else
        y_29 = z_29;
    }
  }
  t = j_28;
  {
    t = x_87(t);
    {
      ATerm k_28;
      k_28 = t;
      {
        ATerm a_30 = NULL,c_30 = NULL,e_30 = NULL;
        ATerm b_30 = NULL;
        t = times_0(t);
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(y_29));
          {
            t = diff_times_0(t);
            {
              ATerm z_28;
              z_28 = t;
              {
                ATerm d_30 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    d_30 = t;
                    if(((c_30 != NULL) && (c_30 != d_30)))
                      _fail(d_30);
                    else
                      c_30 = d_30;
                  }
                }
              }
              t = z_28;
              {
                ATerm f_30 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    f_30 = t;
                    if(((e_30 != NULL) && (e_30 != f_30)))
                      _fail(f_30);
                    else
                      e_30 = f_30;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_30)), term_b_29), not_null(c_30)), term_a_29);
                  t = w_87(t);
                }
              }
            }
          }
        }
      }
      t = k_28;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm c_29;
  c_29 = t;
  {
    ATerm m_30 = NULL,o_30 = NULL;
    ATerm d_29;
    d_29 = t;
    {
      ATerm n_30 = NULL;
      t = d_87(t);
      {
        n_30 = t;
        if(((m_30 != NULL) && (m_30 != n_30)))
          _fail(n_30);
        else
          m_30 = n_30;
      }
    }
    t = d_29;
    {
      ATerm p_30 = NULL;
      p_30 = t;
      if(((o_30 != NULL) && (o_30 != p_30)))
        _fail(p_30);
      else
        o_30 = p_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_30)), not_null(m_30)));
        t = printnl_0(t);
      }
    }
  }
  t = c_29;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  t = SSL_is_string(not_null(t_30));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm g_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, u_6);
            ;
            LocalPopChoice(p_29);
          }
        else
          {
            t = g_29;
            {
              ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
              c_31 = t;
              b_31 :
              if(match_cons(c_31, sym_Path_1))
                {
                  d_31 = ATgetArgument(c_31, 0);
                  t = not_null(d_31);
                }
              else
                {
                  if(match_cons(c_31, sym_Var_1))
                    {
                      d_31 = ATgetArgument(c_31, 0);
                      {
                        t = not_null(d_31);
                        {
                          ATerm q_29 = t;
                          int r_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_29);
                            }
                          else
                            {
                              t = q_29;
                              {
                                ATerm v_6 (ATerm t)
                                {
                                  t = term_s_29;
                                  return(t);
                                }
                                t = debug_1(t, v_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_31, sym_Prefix_2))
                        {
                          d_31 = ATgetArgument(c_31, 0);
                          e_31 = ATgetArgument(c_31, 1);
                          {
                            ATerm j_31 = NULL,m_31 = NULL;
                            ATerm t_29;
                            t_29 = t;
                            {
                              ATerm l_31 = NULL;
                              t = not_null(d_31);
                              {
                                t = eval_config_0(t);
                                {
                                  l_31 = t;
                                  if(((j_31 != NULL) && (j_31 != l_31)))
                                    _fail(l_31);
                                  else
                                    j_31 = l_31;
                                }
                              }
                            }
                            t = t_29;
                            {
                              ATerm n_31 = NULL;
                              t = not_null(e_31);
                              {
                                t = eval_config_0(t);
                                {
                                  n_31 = t;
                                  if(((m_31 != NULL) && (m_31 != n_31)))
                                    _fail(n_31);
                                  else
                                    m_31 = n_31;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), not_null(m_31));
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
  ATerm a_32 = NULL;
  a_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_29, not_null(a_32));
    {
      t = table_get_0(t);
      {
        ATerm c_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_29;
            v_29 = t;
            {
              ATerm c_32 = NULL;
              ATerm d_32 = NULL;
              d_32 = t;
              if(((c_32 != NULL) && (c_32 != d_32)))
                _fail(d_32);
              else
                c_32 = d_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_29, not_null(a_32), not_null(c_32));
                t = table_put_0(t);
              }
            }
            t = v_29;
          }
          return(t);
        }
        t = try_1(t, c_7);
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
  ATerm w_29;
  w_29 = t;
  {
    t = error_0(t);
    {
      t = term_y_23;
      t = exit_0(t);
    }
  }
  t = w_29;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm x_29 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_30;
      h_30 = t;
      {
        ATerm k_32 = NULL;
        ATerm l_32 = NULL;
        t = term_i_30;
        {
          t = get_config_0(t);
          {
            l_32 = t;
            if(((k_32 != NULL) && (k_32 != l_32)))
              _fail(l_32);
            else
              k_32 = l_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_30), term_u_30), term_s_30), term_r_30), term_q_30), term_l_30), term_k_30), not_null(k_32)), term_j_30));
          t = printnl_0(t);
        }
      }
      t = h_30;
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = x_29;
      {
        ATerm m_32 = NULL;
        m_32 = t;
        j_32 :
        if(!(match_string(m_32, "0.9beta11")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_68 (ATerm))
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_68(t);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym__2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      t = SSL_copy(not_null(r_32), not_null(s_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  t = SSL_table_keys(not_null(x_32));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  {
    t = table_keys_0(t);
    {
      ATerm d_7 (ATerm t)
      {
        ATerm f_33 = NULL;
        ATerm h_33 = NULL;
        f_33 = t;
        {
          ATerm i_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_33), not_null(f_33));
          {
            t = table_get_0(t);
            {
              i_33 = t;
              if(((h_33 != NULL) && (h_33 != i_33)))
                _fail(i_33);
              else
                h_33 = i_33;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_33), not_null(h_33));
        }
        return(t);
      }
      t = map_1(t, d_7);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm y_30;
    y_30 = t;
    {
      ATerm n_33 = NULL;
      ATerm o_33 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          o_33 = t;
          if(((n_33 != NULL) && (n_33 != o_33)))
            _fail(o_33);
          else
            n_33 = o_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_33), term_z_30);
        t = geq_0(t);
      }
    }
    t = y_30;
    t = e_90(t);
    return(t);
  }
  t = try_1(t, e_7);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_31;
  a_31 = t;
  {
    ATerm r_33 = NULL;
    ATerm s_33 = NULL;
    s_33 = t;
    if(((r_33 != NULL) && (r_33 != s_33)))
      _fail(s_33);
    else
      r_33 = s_33;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_17, not_null(r_33));
      t = printnl_0(t);
    }
  }
  t = a_31;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_33 = NULL;
  ATerm a_34 = NULL,b_34 = NULL;
  y_33 = t;
  {
    ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_33)));
    {
      t = table_get_0(t);
      {
        c_34 = t;
        w_33 :
        if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
          {
            d_34 = ATgetFirst((ATermList) c_34);
            g_34 = (ATerm) ATgetNext((ATermList) c_34);
            x_33 :
            if(match_cons(d_34, sym__2))
              {
                e_34 = ATgetArgument(d_34, 0);
                f_34 = ATgetArgument(d_34, 1);
                {
                  if(((a_34 != NULL) && (a_34 != e_34)))
                    _fail(e_34);
                  else
                    a_34 = e_34;
                  if(((b_34 != NULL) && (b_34 != f_34)))
                    _fail(f_34);
                  else
                    b_34 = f_34;
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
    t = not_null(b_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  m_34 :
  if(match_cons(n_34, sym__2))
    {
      o_34 = ATgetArgument(n_34, 0);
      p_34 = ATgetArgument(n_34, 1);
      {
        ATerm s_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_34)));
        {
          t = table_get_0(t);
          {
            ATerm f_7 (ATerm t)
            {
              ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
              t_34 = t;
              l_34 :
              if(match_cons(t_34, sym__2))
                {
                  u_34 = ATgetArgument(t_34, 0);
                  v_34 = ATgetArgument(t_34, 1);
                  {
                    if(((p_34 != NULL) && (p_34 != u_34)))
                      _fail(u_34);
                    else
                      p_34 = u_34;
                    if(((s_34 != NULL) && (s_34 != v_34)))
                      _fail(v_34);
                    else
                      s_34 = v_34;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, f_7);
          }
        }
        t = not_null(s_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      {
        ATerm i_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              t = filter_1(t, w_83);
              return(t);
            }
            t = Cons_2(t, w_83, i_7);
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = i_31;
            {
              ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
              a_35 = t;
              z_34 :
              if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
                {
                  b_35 = ATgetFirst((ATermList) a_35);
                  c_35 = (ATerm) ATgetNext((ATermList) a_35);
                  {
                    t = not_null(c_35);
                    t = filter_1(t, w_83);
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
ATerm repeat_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm f_35 (ATerm t)
  {
    ATerm j_7 (ATerm t)
    {
      t = t_69(t);
      t = f_35(t);
      return(t);
    }
    t = try_1(t, j_7);
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm o_31;
  o_31 = t;
  {
    ATerm m_7 (ATerm t)
    {
      t = term_q_31;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm r_31 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_31;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, m_7);
  }
  t = o_31;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    ATerm s_31;
    s_31 = t;
    {
      ATerm h_35 = NULL;
      ATerm i_35 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_35), term_t_31);
        t = geq_0(t);
      }
    }
    t = s_31;
    t = d_90(t);
    return(t);
  }
  t = try_1(t, n_7);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      {
        ATerm u_31;
        u_31 = t;
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_35), not_null(o_35));
              ;
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              t = SSL_gtr(not_null(n_35), not_null(o_35));
            }
        }
        t = u_31;
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
  ATerm u_35 = NULL;
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
      v_35 = t;
      t_35 :
      if(match_cons(v_35, sym__2))
        {
          w_35 = ATgetArgument(v_35, 0);
          x_35 = ATgetArgument(v_35, 1);
          {
            if(((u_35 != NULL) && (u_35 != w_35)))
              _fail(w_35);
            else
              u_35 = w_35;
            if(((u_35 != NULL) && (u_35 != x_35)))
              _fail(x_35);
            else
              u_35 = x_35;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm f_90 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm z_31;
    z_31 = t;
    {
      ATerm a_36 = NULL;
      ATerm b_36 = NULL;
      t = term_d_16;
      {
        t = get_config_0(t);
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), term_b_32);
        t = geq_0(t);
      }
    }
    t = z_31;
    t = f_90(t);
    return(t);
  }
  t = try_1(t, q_7);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym__2))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      if(((g_36 != NULL) && (g_36 != h_36)))
        _fail(h_36);
      else
        g_36 = h_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
    {
      o_36 = ATgetFirst((ATermList) n_36);
      p_36 = (ATerm) ATgetNext((ATermList) n_36);
      {
        t = h_82(t);
        {
          ATerm r_7 (ATerm t)
          {
            ATerm s_36 = NULL;
            s_36 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_36), not_null(s_36));
              t = g_82(t);
            }
            return(t);
          }
          t = fetch_1(t, r_7);
        }
        t = not_null(p_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym__2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      {
        t = not_null(z_36);
        {
          ATerm e_37 (ATerm t)
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_37);
                ;
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
                {
                  ATerm g_32 = t;
                  int h_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_7 (ATerm t)
                      {
                        t = not_null(a_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_82, u_7);
                      t = e_37(t);
                      ;
                      LocalPopChoice(h_32);
                    }
                  else
                    {
                      t = g_32;
                      t = Cons_2(t, _id, e_37);
                    }
                }
              }
            return(t);
          }
          t = e_37(t);
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
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym__3))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      m_37 = ATgetArgument(j_37, 2);
      {
        ATerm i_32;
        i_32 = t;
        {
          ATerm q_37 = NULL;
          ATerm r_37 = NULL,t_37 = NULL;
          ATerm s_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_37), not_null(l_37));
          {
            ATerm n_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(o_32);
              }
            else
              {
                t = n_32;
                t = (ATerm) ATempty;
              }
            {
              s_37 = t;
              if(((r_37 != NULL) && (r_37 != s_37)))
                _fail(s_37);
              else
                r_37 = s_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), not_null(m_37));
            {
              t = union_0(t);
              {
                t_37 = t;
                if(((q_37 != NULL) && (q_37 != t_37)))
                  _fail(t_37);
                else
                  q_37 = t_37;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_37), not_null(l_37), not_null(q_37));
            t = set_0(t);
          }
        }
        t = i_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm o_93 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
  b_38 = t;
  a_38 :
  if(match_cons(b_38, sym__2))
    {
      c_38 = ATgetArgument(b_38, 0);
      d_38 = ATgetArgument(b_38, 1);
      {
        t = not_null(d_38);
        {
          ATerm v_7 (ATerm t)
          {
            ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
            g_38 = t;
            z_37 :
            if(match_cons(g_38, sym__2))
              {
                h_38 = ATgetArgument(g_38, 0);
                i_38 = ATgetArgument(g_38, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_38), not_null(h_38), not_null(i_38));
                  t = o_93(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_7);
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
  ATerm o_38 = NULL;
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_38 = NULL;
      p_38 = t;
      {
        if(((o_38 != NULL) && (o_38 != p_38)))
          _fail(p_38);
        else
          o_38 = p_38;
        t = SSL_ReadFromFile(not_null(o_38));
      }
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm y_7 (ATerm t)
        {
          t = term_v_32;
          return(t);
        }
        t = debug_1(t, y_7);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm t_38 = NULL;
  ATerm y_38 = NULL;
  t_38 = t;
  {
    ATerm w_32;
    w_32 = t;
    {
      ATerm z_38 = NULL;
      t = term_y_32;
      {
        z_38 = t;
        if(((y_38 != NULL) && (y_38 != z_38)))
          _fail(z_38);
        else
          y_38 = z_38;
      }
    }
    t = w_32;
    {
      t = SSL_open_file(not_null(t_38), not_null(y_38));
      t = SSL_close_file(not_null(t_38));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm e_39 = NULL;
  ATerm g_39 = NULL;
  e_39 = t;
  {
    ATerm z_7 (ATerm t)
    {
      ATerm c_8 (ATerm t)
      {
        t = term_z_32;
        return(t);
      }
      t = debug_1(t, c_8);
      return(t);
    }
    t = if_verbose5_1(t, z_7);
    {
      ATerm a_33 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_39)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_33;
        }
      {
        ATerm b_33;
        b_33 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_31, term_c_33, (ATerm) ATinsert(ATempty, not_null(e_39)));
          t = table_put_0(t);
        }
        t = b_33;
        {
          ATerm d_8 (ATerm t)
          {
            ATerm g_8 (ATerm t)
            {
              t = term_e_33;
              return(t);
            }
            t = debug_1(t, g_8);
            return(t);
          }
          t = if_verbose4_1(t, d_8);
          {
            ATerm g_33 = t;
            int j_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(j_33);
              }
            else
              {
                t = g_33;
                t = (ATerm) ATempty;
              }
            {
              ATerm h_8 (ATerm t)
              {
                ATerm k_8 (ATerm t)
                {
                  t = term_k_33;
                  return(t);
                }
                t = say_1(t, k_8);
                return(t);
              }
              t = if_verbose6_1(t, h_8);
              {
                ATerm h_39 = NULL;
                h_39 = t;
                if(((g_39 != NULL) && (g_39 != h_39)))
                  _fail(h_39);
                else
                  g_39 = h_39;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_31, not_null(g_39));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm l_8 (ATerm t)
                      {
                        ATerm o_8 (ATerm t)
                        {
                          t = term_l_33;
                          return(t);
                        }
                        t = say_1(t, o_8);
                        return(t);
                      }
                      t = if_verbose6_1(t, l_8);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_f_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_39)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm p_8 (ATerm t)
                            {
                              ATerm s_8 (ATerm t)
                              {
                                t = term_k_33;
                                return(t);
                              }
                              t = say_1(t, s_8);
                              return(t);
                            }
                            t = if_verbose4_1(t, p_8);
                          }
                        }
                      }
                    }
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
  ATerm l_39 = NULL;
  l_39 = t;
  t = SSL_getenv(not_null(l_39));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm m_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_33;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = m_33;
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_33;
            t = getenv_0(t);
            ;
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm w_8 (ATerm t)
    {
      t = term_z_33;
      return(t);
    }
    t = debug_1(t, w_8);
    return(t);
  }
  t = if_verbose5_1(t, t_8);
  {
    ATerm h_34;
    h_34 = t;
    {
      ATerm i_34 = t;
      int j_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_34;
          t = table_get_0(t);
          ;
          LocalPopChoice(j_34);
        }
      else
        {
          t = i_34;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = h_34;
    {
      ATerm x_8 (ATerm t)
      {
        ATerm a_9 (ATerm t)
        {
          t = term_q_34;
          return(t);
        }
        t = debug_1(t, a_9);
        return(t);
      }
      t = if_verbose5_1(t, x_8);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm r_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 (ATerm t)
      {
        ATerm e_9 (ATerm t)
        {
          t = term_x_34;
          return(t);
        }
        t = debug_1(t, e_9);
        return(t);
      }
      t = if_verbose5_1(t, b_9);
      {
        t = xtc_load_0(t);
        {
          ATerm y_34 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(d_35);
            }
          else
            {
              t = y_34;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_9 (ATerm t)
            {
              ATerm i_9 (ATerm t)
              {
                t = term_x_34;
                return(t);
              }
              t = debug_1(t, i_9);
              return(t);
            }
            t = if_verbose5_1(t, f_9);
          }
        }
      }
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = r_34;
      {
        ATerm p_39 = NULL;
        ATerm q_39 = NULL;
        q_39 = t;
        if(((p_39 != NULL) && (p_39 != q_39)))
          _fail(q_39);
        else
          p_39 = q_39;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_35), not_null(p_39)), term_e_35);
          {
            t = error_0(t);
            {
              ATerm j_9 (ATerm t)
              {
                t = term_f_31;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm m_9 (ATerm t)
                    {
                      t = term_j_35;
                      return(t);
                    }
                    t = debug_1(t, m_9);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, j_9);
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
  ATerm t_39 = NULL;
  t_39 = t;
  t = SSL_string_to_int(not_null(t_39));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  b_40 = t;
  z_39 :
  if(match_string(b_40, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
        {
          c_40 = ATgetFirst((ATermList) b_40);
          d_40 = (ATerm) ATgetNext((ATermList) b_40);
          a_40 :
          if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
            {
              e_40 = ATgetFirst((ATermList) d_40);
              f_40 = (ATerm) ATgetNext((ATermList) d_40);
              {
                ATerm j_40 = NULL;
                ATerm k_35;
                k_35 = t;
                {
                  t = not_null(c_40);
                  t = l_0(t);
                }
                t = k_35;
                {
                  ATerm k_40 = NULL;
                  t = not_null(e_40);
                  {
                    t = m_0(t);
                    {
                      k_40 = t;
                      if(((j_40 != NULL) && (j_40 != k_40)))
                        _fail(k_40);
                      else
                        j_40 = k_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_40)), not_null(j_40));
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
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym__2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        ATerm d_41 = NULL;
        ATerm e_41 = NULL,g_41 = NULL;
        ATerm f_41 = NULL;
        t = not_null(x_40);
        {
          ATerm p_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(q_35);
            }
          else
            {
              t = p_35;
              t = (ATerm) ATempty;
            }
          {
            f_41 = t;
            if(((e_41 != NULL) && (e_41 != f_41)))
              _fail(f_41);
            else
              e_41 = f_41;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_40), not_null(e_41));
          {
            t = conc_0(t);
            {
              g_41 = t;
              if(((d_41 != NULL) && (d_41 != g_41)))
                _fail(g_41);
              else
                d_41 = g_41;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_29, not_null(x_40), not_null(d_41));
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
  ATerm m_41 = NULL,n_41 = NULL;
  ATerm r_35;
  r_35 = t;
  {
    ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
    o_41 = t;
    l_41 :
    if(match_cons(o_41, sym__2))
      {
        p_41 = ATgetArgument(o_41, 0);
        q_41 = ATgetArgument(o_41, 1);
        {
          if(((m_41 != NULL) && (m_41 != p_41)))
            _fail(p_41);
          else
            m_41 = p_41;
          {
            if(((n_41 != NULL) && (n_41 != q_41)))
              _fail(q_41);
            else
              n_41 = q_41;
            t = SSL_table_remove(not_null(m_41), not_null(n_41));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_35;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym__2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      {
        ATerm s_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(x_41);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_u_29, not_null(x_41));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = s_35;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_41), not_null(y_41));
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
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym__2))
    {
      s_42 = ATgetArgument(r_42, 0);
      t_42 = ATgetArgument(r_42, 1);
      {
        ATerm w_42 = NULL;
        ATerm x_42 = NULL,d_43 = NULL;
        ATerm c_43 = NULL;
        t = not_null(s_42);
        {
          ATerm z_35 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(c_36);
            }
          else
            {
              t = z_35;
              t = (ATerm) ATempty;
            }
          {
            c_43 = t;
            if(((x_42 != NULL) && (x_42 != c_43)))
              _fail(c_43);
            else
              x_42 = c_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_42), not_null(t_42));
          {
            t = conc_0(t);
            {
              d_43 = t;
              if(((w_42 != NULL) && (w_42 != d_43)))
                _fail(d_43);
              else
                w_42 = d_43;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_29, not_null(s_42), not_null(w_42));
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
  ATerm d_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 (ATerm t)
      {
        ATerm y_44 = NULL;
        y_44 = t;
        j_43 :
        if(!(match_string(y_44, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm o_9 (ATerm t)
      {
        ATerm z_44 = NULL;
        ATerm a_45 = NULL;
        a_45 = t;
        if(((z_44 != NULL) && (z_44 != a_45)))
          _fail(a_45);
        else
          z_44 = a_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_25, not_null(z_44));
          t = set_config_0(t);
        }
        t = term_d_21;
        return(t);
      }
      ATerm t_9 (ATerm t)
      {
        t = term_j_36;
        return(t);
      }
      t = ArgOption_3(t, n_9, o_9, t_9);
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = d_36;
      {
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_9 (ATerm t)
            {
              ATerm b_45 = NULL;
              b_45 = t;
              o_43 :
              if(!(match_string(b_45, "-o")))
                {
                  if(!(match_string(b_45, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm v_9 (ATerm t)
            {
              ATerm k_45 = NULL;
              ATerm l_45 = NULL;
              l_45 = t;
              if(((k_45 != NULL) && (k_45 != l_45)))
                _fail(l_45);
              else
                k_45 = l_45;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_16, not_null(k_45));
                t = set_config_0(t);
              }
              t = term_d_21;
              return(t);
            }
            ATerm y_9 (ATerm t)
            {
              t = term_q_36;
              return(t);
            }
            t = ArgOption_3(t, u_9, v_9, y_9);
            ;
            LocalPopChoice(l_36);
          }
        else
          {
            t = k_36;
            {
              ATerm r_36 = t;
              int t_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_9 (ATerm t)
                  {
                    ATerm n_45 = NULL;
                    n_45 = t;
                    q_43 :
                    if(!(match_string(n_45, "-I")))
                      {
                        if(!(match_string(n_45, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm a_10 (ATerm t)
                  {
                    ATerm o_45 = NULL;
                    ATerm p_45 = NULL;
                    p_45 = t;
                    if(((o_45 != NULL) && (o_45 != p_45)))
                      _fail(p_45);
                    else
                      o_45 = p_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_45)), term_o_26));
                      t = extend_config_0(t);
                    }
                    t = term_d_21;
                    return(t);
                  }
                  ATerm e_10 (ATerm t)
                  {
                    t = term_u_36;
                    return(t);
                  }
                  t = ArgOption_3(t, z_9, a_10, e_10);
                  ;
                  LocalPopChoice(t_36);
                }
              else
                {
                  t = r_36;
                  {
                    ATerm v_36 = t;
                    int w_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_10 (ATerm t)
                        {
                          ATerm q_45 = NULL;
                          q_45 = t;
                          b_44 :
                          if(!(match_string(q_45, "--main")))
                            {
                              if(!(match_string(q_45, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm i_10 (ATerm t)
                        {
                          ATerm r_45 = NULL;
                          ATerm s_45 = NULL;
                          s_45 = t;
                          if(((r_45 != NULL) && (r_45 != s_45)))
                            _fail(s_45);
                          else
                            r_45 = s_45;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_l_21, not_null(r_45));
                            t = set_config_0(t);
                          }
                          t = term_d_21;
                          return(t);
                        }
                        ATerm j_10 (ATerm t)
                        {
                          t = term_b_37;
                          return(t);
                        }
                        t = ArgOption_3(t, h_10, i_10, j_10);
                        ;
                        LocalPopChoice(w_36);
                      }
                    else
                      {
                        t = v_36;
                        {
                          ATerm c_37 = t;
                          int d_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_10 (ATerm t)
                              {
                                ATerm t_45 = NULL;
                                t_45 = t;
                                d_44 :
                                if(!(match_string(t_45, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm p_10 (ATerm t)
                              {
                                ATerm u_45 = NULL;
                                ATerm v_45 = NULL;
                                v_45 = t;
                                if(((u_45 != NULL) && (u_45 != v_45)))
                                  _fail(v_45);
                                else
                                  u_45 = v_45;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATempty, not_null(u_45)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_d_21;
                                return(t);
                              }
                              ATerm q_10 (ATerm t)
                              {
                                t = term_f_37;
                                return(t);
                              }
                              t = ArgOption_3(t, k_10, p_10, q_10);
                              ;
                              LocalPopChoice(d_37);
                            }
                          else
                            {
                              t = c_37;
                              {
                                ATerm g_37 = t;
                                int h_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_10 (ATerm t)
                                    {
                                      ATerm w_45 = NULL;
                                      w_45 = t;
                                      f_44 :
                                      if(!(match_string(w_45, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_10 (ATerm t)
                                    {
                                      ATerm x_45 = NULL;
                                      ATerm y_45 = NULL;
                                      y_45 = t;
                                      if(((x_45 != NULL) && (x_45 != y_45)))
                                        _fail(y_45);
                                      else
                                        x_45 = y_45;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATempty, not_null(x_45)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_d_21;
                                      return(t);
                                    }
                                    ATerm v_10 (ATerm t)
                                    {
                                      t = term_n_37;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, r_10, s_10, v_10);
                                    ;
                                    LocalPopChoice(h_37);
                                  }
                                else
                                  {
                                    t = g_37;
                                    {
                                      ATerm o_37 = t;
                                      int p_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_11 (ATerm t)
                                          {
                                            ATerm z_45 = NULL;
                                            z_45 = t;
                                            h_44 :
                                            if(!(match_string(z_45, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm c_11 (ATerm t)
                                          {
                                            ATerm e_46 = NULL;
                                            ATerm f_46 = NULL;
                                            f_46 = t;
                                            if(((e_46 != NULL) && (e_46 != f_46)))
                                              _fail(f_46);
                                            else
                                              e_46 = f_46;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(ATempty, not_null(e_46)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_d_21;
                                            return(t);
                                          }
                                          ATerm d_11 (ATerm t)
                                          {
                                            t = term_u_37;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, b_11, c_11, d_11);
                                          ;
                                          LocalPopChoice(p_37);
                                        }
                                      else
                                        {
                                          t = o_37;
                                          {
                                            ATerm v_37 = t;
                                            int w_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_11 (ATerm t)
                                                {
                                                  ATerm g_46 = NULL;
                                                  g_46 = t;
                                                  j_44 :
                                                  if(!(match_string(g_46, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm j_11 (ATerm t)
                                                {
                                                  t = term_x_37;
                                                  t = set_config_0(t);
                                                  t = term_d_21;
                                                  return(t);
                                                }
                                                ATerm k_11 (ATerm t)
                                                {
                                                  t = term_y_37;
                                                  return(t);
                                                }
                                                t = Option_3(t, e_11, j_11, k_11);
                                                ;
                                                LocalPopChoice(w_37);
                                              }
                                            else
                                              {
                                                t = v_37;
                                                {
                                                  ATerm e_38 = t;
                                                  int f_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_11 (ATerm t)
                                                      {
                                                        ATerm h_46 = NULL;
                                                        h_46 = t;
                                                        k_44 :
                                                        if(!(match_string(h_46, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm m_11 (ATerm t)
                                                      {
                                                        t = term_j_38;
                                                        t = set_config_0(t);
                                                        t = term_d_21;
                                                        return(t);
                                                      }
                                                      ATerm n_11 (ATerm t)
                                                      {
                                                        t = term_k_38;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, l_11, m_11, n_11);
                                                      ;
                                                      LocalPopChoice(f_38);
                                                    }
                                                  else
                                                    {
                                                      t = e_38;
                                                      {
                                                        ATerm l_38 = t;
                                                        int m_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_11 (ATerm t)
                                                            {
                                                              ATerm k_46 = NULL;
                                                              k_46 = t;
                                                              l_44 :
                                                              if(!(match_string(k_46, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm v_11 (ATerm t)
                                                            {
                                                              t = term_n_38;
                                                              t = set_config_0(t);
                                                              t = term_d_21;
                                                              return(t);
                                                            }
                                                            ATerm w_11 (ATerm t)
                                                            {
                                                              t = term_q_38;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, q_11, v_11, w_11);
                                                            ;
                                                            LocalPopChoice(m_38);
                                                          }
                                                        else
                                                          {
                                                            t = l_38;
                                                            {
                                                              ATerm r_38 = t;
                                                              int s_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_11 (ATerm t)
                                                                  {
                                                                    ATerm l_46 = NULL;
                                                                    l_46 = t;
                                                                    m_44 :
                                                                    if(!(match_string(l_46, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm y_11 (ATerm t)
                                                                  {
                                                                    ATerm m_46 = NULL;
                                                                    ATerm n_46 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      n_46 = t;
                                                                      if(((m_46 != NULL) && (m_46 != n_46)))
                                                                        _fail(n_46);
                                                                      else
                                                                        m_46 = n_46;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_u_20, not_null(m_46));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_d_21;
                                                                    return(t);
                                                                  }
                                                                  ATerm z_11 (ATerm t)
                                                                  {
                                                                    t = term_u_38;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, x_11, y_11, z_11);
                                                                  ;
                                                                  LocalPopChoice(s_38);
                                                                }
                                                              else
                                                                {
                                                                  t = r_38;
                                                                  {
                                                                    ATerm v_38 = t;
                                                                    int w_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm a_12 (ATerm t)
                                                                        {
                                                                          ATerm o_46 = NULL;
                                                                          o_46 = t;
                                                                          o_44 :
                                                                          if(!(match_string(o_46, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm d_12 (ATerm t)
                                                                        {
                                                                          t = term_x_38;
                                                                          t = toggle_config_0(t);
                                                                          t = term_d_21;
                                                                          return(t);
                                                                        }
                                                                        ATerm i_12 (ATerm t)
                                                                        {
                                                                          t = term_a_39;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, a_12, d_12, i_12);
                                                                        ;
                                                                        LocalPopChoice(w_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_38;
                                                                        {
                                                                          ATerm b_39 = t;
                                                                          int c_39 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm j_12 (ATerm t)
                                                                              {
                                                                                ATerm p_46 = NULL;
                                                                                p_46 = t;
                                                                                p_44 :
                                                                                if(!(match_string(p_46, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm k_12 (ATerm t)
                                                                              {
                                                                                t = term_f_39;
                                                                                t = set_config_0(t);
                                                                                t = term_d_21;
                                                                                return(t);
                                                                              }
                                                                              ATerm l_12 (ATerm t)
                                                                              {
                                                                                t = term_i_39;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, j_12, k_12, l_12);
                                                                              ;
                                                                              LocalPopChoice(c_39);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_39;
                                                                              {
                                                                                ATerm j_39 = t;
                                                                                int k_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm m_12 (ATerm t)
                                                                                    {
                                                                                      ATerm q_46 = NULL;
                                                                                      q_46 = t;
                                                                                      q_44 :
                                                                                      if(!(match_string(q_46, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm n_12 (ATerm t)
                                                                                    {
                                                                                      ATerm r_46 = NULL;
                                                                                      ATerm s_46 = NULL;
                                                                                      s_46 = t;
                                                                                      if(((r_46 != NULL) && (r_46 != s_46)))
                                                                                        _fail(s_46);
                                                                                      else
                                                                                        r_46 = s_46;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_m_39, (ATerm) ATinsert(ATempty, not_null(r_46)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_d_21;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm o_12 (ATerm t)
                                                                                    {
                                                                                      t = term_n_39;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, m_12, n_12, o_12);
                                                                                    ;
                                                                                    LocalPopChoice(k_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_39;
                                                                                    {
                                                                                      ATerm o_39 = t;
                                                                                      int r_39 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm p_12 (ATerm t)
                                                                                          {
                                                                                            ATerm t_46 = NULL;
                                                                                            t_46 = t;
                                                                                            s_44 :
                                                                                            if(!(match_string(t_46, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm q_12 (ATerm t)
                                                                                          {
                                                                                            ATerm u_46 = NULL;
                                                                                            ATerm v_46 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              v_46 = t;
                                                                                              if(((u_46 != NULL) && (u_46 != v_46)))
                                                                                                _fail(v_46);
                                                                                              else
                                                                                                u_46 = v_46;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_d_16, not_null(u_46));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_d_21;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm r_12 (ATerm t)
                                                                                          {
                                                                                            t = term_s_39;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, p_12, q_12, r_12);
                                                                                          ;
                                                                                          LocalPopChoice(r_39);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_39;
                                                                                          {
                                                                                            ATerm u_39 = t;
                                                                                            int v_39 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm v_12 (ATerm t)
                                                                                                {
                                                                                                  ATerm w_46 = NULL;
                                                                                                  w_46 = t;
                                                                                                  u_44 :
                                                                                                  if(!(match_string(w_46, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(w_46, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm y_12 (ATerm t)
                                                                                                {
                                                                                                  t = term_w_39;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_d_21;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm c_13 (ATerm t)
                                                                                                {
                                                                                                  t = term_x_39;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, v_12, y_12, c_13);
                                                                                                ;
                                                                                                LocalPopChoice(v_39);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_39;
                                                                                                {
                                                                                                  ATerm y_39 = t;
                                                                                                  int g_40 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm e_13 (ATerm t)
                                                                                                      {
                                                                                                        ATerm x_46 = NULL;
                                                                                                        x_46 = t;
                                                                                                        v_44 :
                                                                                                        if(!(match_string(x_46, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(x_46, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm f_13 (ATerm t)
                                                                                                      {
                                                                                                        t = term_i_40;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_d_21;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm g_13 (ATerm t)
                                                                                                      {
                                                                                                        t = term_l_40;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, e_13, f_13, g_13);
                                                                                                      ;
                                                                                                      LocalPopChoice(g_40);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_39;
                                                                                                      {
                                                                                                        ATerm m_40 = t;
                                                                                                        int n_40 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm h_13 (ATerm t)
                                                                                                            {
                                                                                                              ATerm y_46 = NULL;
                                                                                                              y_46 = t;
                                                                                                              w_44 :
                                                                                                              if(!(match_string(y_46, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm i_13 (ATerm t)
                                                                                                            {
                                                                                                              t = term_p_40;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_d_21;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm j_13 (ATerm t)
                                                                                                            {
                                                                                                              t = term_q_40;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, h_13, i_13, j_13);
                                                                                                            ;
                                                                                                            LocalPopChoice(n_40);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_40;
                                                                                                            {
                                                                                                              ATerm k_13 (ATerm t)
                                                                                                              {
                                                                                                                ATerm z_46 = NULL;
                                                                                                                z_46 = t;
                                                                                                                x_44 :
                                                                                                                if(!(match_string(z_46, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(z_46, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm l_13 (ATerm t)
                                                                                                              {
                                                                                                                t = term_s_40;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_d_21;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm o_13 (ATerm t)
                                                                                                              {
                                                                                                                t = term_t_40;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, k_13, l_13, o_13);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm d_48 = NULL;
  d_48 = t;
  t = SSL_table_destroy(not_null(d_48));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  k_48 :
  if(((ATgetType(l_48) == AT_LIST) && ATisEmpty(l_48)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_48) == AT_LIST) && !(ATisEmpty(l_48))))
        {
          m_48 = ATgetFirst((ATermList) l_48);
          n_48 = (ATerm) ATgetNext((ATermList) l_48);
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
  ATerm u_40;
  u_40 = t;
  {
    ATerm q_48 = NULL;
    ATerm t_48 = NULL;
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        {
          ATerm r_48 = NULL;
          ATerm s_48 = NULL;
          s_48 = t;
          if(((r_48 != NULL) && (r_48 != s_48)))
            _fail(s_48);
          else
            r_48 = s_48;
          t = (ATerm) ATinsert(ATempty, not_null(r_48));
        }
      }
    {
      t_48 = t;
      if(((q_48 != NULL) && (q_48 != t_48)))
        _fail(t_48);
      else
        q_48 = t_48;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_17, not_null(q_48));
      t = printnl_0(t);
    }
  }
  t = u_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_42), term_q_30), term_a_42), term_z_41), term_u_41), term_q_30), term_t_41), term_s_41), term_r_41), term_k_41), term_j_41), term_i_41), term_h_41), term_c_41), term_b_41);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_76 (ATerm))
{
  ATerm w_48 (ATerm t)
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        t = Cons_2(t, j_76, w_48);
      }
    return(t);
  }
  t = w_48(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  g_49 = t;
  d_49 :
  if(((ATgetType(g_49) == AT_LIST) && !(ATisEmpty(g_49))))
    {
      e_49 = ATgetFirst((ATermList) g_49);
      f_49 = (ATerm) ATgetNext((ATermList) g_49);
      {
        ATerm o_49 = NULL;
        t = not_null(f_49);
        {
          ATerm e_42;
          e_42 = t;
          {
            ATerm p_49 = NULL,r_49 = NULL,v_49 = NULL;
            ATerm f_42;
            f_42 = t;
            {
              ATerm q_49 = NULL;
              t = j_0(t);
              {
                q_49 = t;
                if(((p_49 != NULL) && (p_49 != q_49)))
                  _fail(q_49);
                else
                  p_49 = q_49;
              }
            }
            t = f_42;
            {
              ATerm s_49 = NULL;
              t = not_null(e_49);
              {
                t = i_0(t);
                {
                  s_49 = t;
                  if(((r_49 != NULL) && (r_49 != s_49)))
                    _fail(s_49);
                  else
                    r_49 = s_49;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_49)), not_null(r_49));
                {
                  v_49 = t;
                  if(((o_49 != NULL) && (o_49 != v_49)))
                    _fail(v_49);
                  else
                    o_49 = v_49;
                }
              }
            }
          }
          t = e_42;
          {
            ATerm p_13 (ATerm t)
            {
              t = not_null(o_49);
              return(t);
            }
            t = reverse_acc_2(t, i_0, p_13);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_49) == AT_LIST) && ATisEmpty(g_49)))
        {
          {
            t = term_d_21;
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
  ATerm q_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_13);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm h_50 = NULL;
  ATerm i_50 = NULL;
  t = term_d_21;
  {
    t = h_0(t);
    {
      i_50 = t;
      if(((h_50 != NULL) && (h_50 != i_50)))
        _fail(i_50);
      else
        h_50 = i_50;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_42), not_null(h_50)), term_k_42), term_q_30), term_j_42), term_q_30), term_i_42), term_h_42), term_q_30), term_g_42);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm p_50 = NULL,q_50 = NULL;
  p_50 = t;
  o_50 :
  if(match_cons(p_50, sym_Program_1))
    {
      q_50 = ATgetArgument(p_50, 0);
      {
        ATerm t_50 = NULL,v_50 = NULL;
        ATerm u_50 = NULL;
        t = SSLgetAnnotations(not_null(p_50));
        {
          u_50 = t;
          if(((t_50 != NULL) && (t_50 != u_50)))
            _fail(u_50);
          else
            t_50 = u_50;
        }
        {
          t = not_null(q_50);
          {
            ATerm c_51 = NULL;
            t = g_63(t);
            {
              v_50 = t;
              {
                ATerm d_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_50)), not_null(t_50));
                {
                  d_51 = t;
                  if(((c_51 != NULL) && (c_51 != d_51)))
                    _fail(d_51);
                  else
                    c_51 = d_51;
                }
                t = not_null(c_51);
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
  ATerm z_51 = NULL;
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_52 = NULL;
      t = term_o_42;
      {
        t = get_config_0(t);
        {
          a_52 = t;
          if(((z_51 != NULL) && (z_51 != a_52)))
            _fail(a_52);
          else
            z_51 = a_52;
        }
      }
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
      {
        ATerm v_13 (ATerm t)
        {
          ATerm w_13 (ATerm t)
          {
            ATerm b_52 = NULL;
            b_52 = t;
            if(((z_51 != NULL) && (z_51 != b_52)))
              _fail(b_52);
            else
              z_51 = b_52;
            return(t);
          }
          t = Program_1(t, w_13);
          return(t);
        }
        t = option_defined_1(t, v_13);
      }
    }
  {
    ATerm x_13 (ATerm t)
    {
      ATerm z_13 (ATerm t)
      {
        t = not_null(z_51);
        return(t);
      }
      t = short_description_1(t, z_13);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_13);
    {
      t = term_p_42;
      {
        t = echo_0(t);
        {
          t = term_y_42;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_14 (ATerm t)
                {
                  ATerm c_52 = NULL;
                  ATerm d_52 = NULL;
                  d_52 = t;
                  if(((c_52 != NULL) && (c_52 != d_52)))
                    _fail(d_52);
                  else
                    c_52 = d_52;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_52)), term_z_42);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_14);
                {
                  ATerm b_14 (ATerm t)
                  {
                    ATerm e_52 = NULL;
                    ATerm f_52 = NULL;
                    ATerm c_14 (ATerm t)
                    {
                      t = not_null(z_51);
                      return(t);
                    }
                    t = long_description_1(t, c_14);
                    {
                      f_52 = t;
                      if(((e_52 != NULL) && (e_52 != f_52)))
                        _fail(f_52);
                      else
                        e_52 = f_52;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_52)), term_q_30);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_14);
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
  ATerm a_43;
  a_43 = t;
  {
    ATerm l_52 = NULL;
    ATerm m_52 = NULL;
    m_52 = t;
    if(((l_52 != NULL) && (l_52 != m_52)))
      _fail(m_52);
    else
      l_52 = m_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATempty, not_null(l_52)));
      t = printnl_0(t);
    }
  }
  t = a_43;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm b_43;
  b_43 = t;
  {
    t = e_87(t);
    t = debug_0(t);
  }
  t = b_43;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_63 (ATerm))
{
  ATerm t_52 = NULL,u_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym_Undefined_1))
    {
      u_52 = ATgetArgument(t_52, 0);
      {
        ATerm x_52 = NULL,z_52 = NULL;
        ATerm y_52 = NULL;
        t = SSLgetAnnotations(not_null(t_52));
        {
          y_52 = t;
          if(((x_52 != NULL) && (x_52 != y_52)))
            _fail(y_52);
          else
            x_52 = y_52;
        }
        {
          t = not_null(u_52);
          {
            ATerm b_53 = NULL;
            t = h_63(t);
            {
              z_52 = t;
              {
                ATerm c_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_52)), not_null(x_52));
                {
                  c_53 = t;
                  if(((b_53 != NULL) && (b_53 != c_53)))
                    _fail(c_53);
                  else
                    b_53 = c_53;
                }
                t = not_null(b_53);
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
ATerm fetch_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm h_53 (ATerm t)
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_76, _id);
        ;
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = Cons_2(t, _id, h_53);
      }
    return(t);
  }
  t = h_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_91 (ATerm))
{
  t = fetch_1(t, d_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym_Help_0))
    {
      ATerm o_53 = NULL,q_53 = NULL;
      ATerm g_43;
      g_43 = t;
      {
        ATerm p_53 = NULL;
        t = SSLgetAnnotations(not_null(m_53));
        {
          p_53 = t;
          if(((o_53 != NULL) && (o_53 != p_53)))
            _fail(p_53);
          else
            o_53 = p_53;
        }
      }
      t = g_43;
      {
        ATerm r_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_53));
        {
          r_53 = t;
          if(((q_53 != NULL) && (q_53 != r_53)))
            _fail(r_53);
          else
            q_53 = r_53;
        }
        t = not_null(q_53);
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
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  w_53 :
  if(match_cons(x_53, sym__2))
    {
      y_53 = ATgetArgument(x_53, 0);
      z_53 = ATgetArgument(x_53, 1);
      t = SSL_table_get(not_null(y_53), not_null(z_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym__3))
    {
      h_54 = ATgetArgument(g_54, 0);
      i_54 = ATgetArgument(g_54, 1);
      j_54 = ATgetArgument(g_54, 2);
      {
        ATerm h_43;
        h_43 = t;
        {
          ATerm n_54 = NULL;
          ATerm o_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_54), not_null(i_54));
          {
            ATerm i_43 = t;
            int k_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(k_43);
              }
            else
              {
                t = i_43;
                t = (ATerm) ATempty;
              }
            {
              o_54 = t;
              if(((n_54 != NULL) && (n_54 != o_54)))
                _fail(o_54);
              else
                n_54 = o_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_54), not_null(i_54), (ATerm) ATinsert(CheckATermList(not_null(n_54)), not_null(j_54)));
            t = table_put_0(t);
          }
        }
        t = h_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_92 (ATerm))
{
  ATerm t_54 = NULL;
  ATerm u_54 = NULL;
  t = term_d_21;
  {
    t = i_92(t);
    {
      u_54 = t;
      if(((t_54 != NULL) && (t_54 != u_54)))
        _fail(u_54);
      else
        t_54 = u_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_42, term_v_42, not_null(t_54));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_55 = NULL,p_55 = NULL,r_55 = NULL;
  o_55 = t;
  n_55 :
  if(match_string(o_55, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_55) == AT_LIST) && !(ATisEmpty(o_55))))
        {
          p_55 = ATgetFirst((ATermList) o_55);
          r_55 = (ATerm) ATgetNext((ATermList) o_55);
          {
            ATerm a_56 = NULL;
            ATerm l_43;
            l_43 = t;
            {
              t = not_null(p_55);
              t = a_0(t);
            }
            t = l_43;
            {
              ATerm e_56 = NULL;
              t = term_d_21;
              {
                t = d_0(t);
                {
                  e_56 = t;
                  if(((a_56 != NULL) && (a_56 != e_56)))
                    _fail(e_56);
                  else
                    a_56 = e_56;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_55)), not_null(a_56));
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
  ATerm h_14 (ATerm t)
  {
    ATerm p_56 = NULL;
    p_56 = t;
    o_56 :
    if(!(match_string(p_56, "--help")))
      {
        if(!(match_string(p_56, "-h")))
          {
            if(!(match_string(p_56, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_14 (ATerm t)
  {
    t = term_i_40;
    {
      t = set_config_0(t);
      t = term_m_43;
    }
    return(t);
  }
  ATerm j_14 (ATerm t)
  {
    t = term_n_43;
    return(t);
  }
  t = Option_3(t, h_14, i_14, j_14);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  t_56 :
  if(((ATgetType(u_56) == AT_LIST) && !(ATisEmpty(u_56))))
    {
      v_56 = ATgetFirst((ATermList) u_56);
      w_56 = (ATerm) ATgetNext((ATermList) u_56);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_56)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_92 (ATerm))
{
  ATerm p_43;
  p_43 = t;
  {
    ATerm m_14 (ATerm t)
    {
      t = term_r_43;
      t = g_92(t);
      return(t);
    }
    t = try_1(t, m_14);
  }
  t = p_43;
  {
    ATerm n_14 (ATerm t)
    {
      ATerm e_57 = NULL;
      ATerm s_43;
      s_43 = t;
      {
        ATerm c_57 = NULL;
        ATerm d_57 = NULL;
        d_57 = t;
        if(((c_57 != NULL) && (c_57 != d_57)))
          _fail(d_57);
        else
          c_57 = d_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_42, not_null(c_57));
          t = set_config_0(t);
        }
      }
      t = s_43;
      {
        ATerm f_57 = NULL;
        f_57 = t;
        if(((e_57 != NULL) && (e_57 != f_57)))
          _fail(f_57);
        else
          e_57 = f_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_57));
      }
      return(t);
    }
    ATerm o_14 (ATerm t)
    {
      ATerm t_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(w_43);
            }
          else
            {
              t = v_43;
              {
                t = g_92(t);
                t = Cons_2(t, _id, o_14);
              }
            }
          ;
          LocalPopChoice(u_43);
        }
      else
        {
          t = t_43;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_14, o_14);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_92 (ATerm))
{
  ATerm k_57 = NULL;
  ATerm x_43;
  x_43 = t;
  {
    t = term_y_43;
    t = table_put_0(t);
  }
  t = x_43;
  {
    ATerm p_14 (ATerm t)
    {
      ATerm z_43 = t;
      int a_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_92(t);
          ;
          LocalPopChoice(a_44);
        }
      else
        {
          t = z_43;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_14);
    {
      ATerm q_14 (ATerm t)
      {
        ATerm c_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_44;
            g_44 = t;
            {
              ATerm i_44 = t;
              int n_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_40;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(n_44);
                }
              else
                {
                  t = i_44;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_44;
            {
              t = system_usage_0(t);
              {
                t = term_x_15;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(e_44);
          }
        else
          {
            t = c_44;
            {
              ATerm w_14 (ATerm t)
              {
                ATerm z_14 (ATerm t)
                {
                  ATerm l_57 = NULL;
                  l_57 = t;
                  if(((k_57 != NULL) && (k_57 != l_57)))
                    _fail(l_57);
                  else
                    k_57 = l_57;
                  return(t);
                }
                t = Undefined_1(t, z_14);
                return(t);
              }
              t = option_defined_1(t, w_14);
              {
                ATerm a_15 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_57)), term_r_44);
                  return(t);
                }
                t = say_1(t, a_15);
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_23;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_14);
      {
        ATerm t_44;
        t_44 = t;
        {
          t = term_u_42;
          t = table_destroy_0(t);
        }
        t = t_44;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  ATerm c_45;
  c_45 = t;
  {
    ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
    s_57 = t;
    o_57 :
    if(match_cons(s_57, sym__3))
      {
        t_57 = ATgetArgument(s_57, 0);
        u_57 = ATgetArgument(s_57, 1);
        v_57 = ATgetArgument(s_57, 2);
        {
          if(((p_57 != NULL) && (p_57 != t_57)))
            _fail(t_57);
          else
            p_57 = t_57;
          {
            if(((q_57 != NULL) && (q_57 != u_57)))
              _fail(u_57);
            else
              q_57 = u_57;
            {
              if(((r_57 != NULL) && (r_57 != v_57)))
                _fail(v_57);
              else
                r_57 = v_57;
              t = SSL_table_put(not_null(p_57), not_null(q_57), not_null(r_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_45;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_57 = NULL,c_58 = NULL,d_58 = NULL;
  z_57 = t;
  y_57 :
  if(match_cons(z_57, sym__2))
    {
      c_58 = ATgetArgument(z_57, 0);
      d_58 = ATgetArgument(z_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_29, not_null(c_58), not_null(d_58));
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
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
      {
        ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
        j_58 = t;
        i_58 :
        if(((ATgetType(j_58) == AT_LIST) && !(ATisEmpty(j_58))))
          {
            k_58 = ATgetFirst((ATermList) j_58);
            l_58 = (ATerm) ATgetNext((ATermList) j_58);
            {
              t = not_null(k_58);
              {
                ATerm b_15 (ATerm t)
                {
                  t = not_null(l_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_15);
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
  ATerm v_58 = NULL;
  ATerm x_58 = NULL;
  v_58 = t;
  {
    ATerm y_58 = NULL;
    ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
    t = not_null(v_58);
    {
      y_58 = t;
      {
        t = SSL_explode_term(not_null(y_58));
        {
          a_59 = t;
          t_58 :
          if(match_cons(a_59, sym__2))
            {
              b_59 = ATgetArgument(a_59, 0);
              c_59 = ATgetArgument(a_59, 1);
              u_58 :
              if(match_string(b_59, ""))
                {
                  if(((x_58 != NULL) && (x_58 != c_59)))
                    _fail(c_59);
                  else
                    x_58 = c_59;
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
      t = not_null(x_58);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm k_59 = NULL;
  k_59 = t;
  j_59 :
  if(((ATgetType(k_59) == AT_LIST) && ATisEmpty(k_59)))
    {
      {
        ATerm m_59 = NULL,o_59 = NULL;
        ATerm f_45;
        f_45 = t;
        {
          ATerm n_59 = NULL;
          t = SSLgetAnnotations(not_null(k_59));
          {
            n_59 = t;
            if(((m_59 != NULL) && (m_59 != n_59)))
              _fail(n_59);
            else
              m_59 = n_59;
          }
        }
        t = f_45;
        {
          ATerm p_59 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_59));
          {
            p_59 = t;
            if(((o_59 != NULL) && (o_59 != p_59)))
              _fail(p_59);
            else
              o_59 = p_59;
          }
          t = not_null(o_59);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm t_59 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_59);
        ;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        {
          t = Nil_0(t);
          t = y_76(t);
        }
      }
    return(t);
  }
  t = t_59(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  w_59 = t;
  v_59 :
  if(match_cons(w_59, sym__2))
    {
      x_59 = ATgetArgument(w_59, 0);
      y_59 = ATgetArgument(w_59, 1);
      {
        t = not_null(x_59);
        {
          ATerm c_15 (ATerm t)
          {
            t = not_null(y_59);
            return(t);
          }
          t = at_end_1(t, c_15);
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
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(j_45);
    }
  else
    {
      t = i_45;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm))
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
  i_60 = t;
  h_60 :
  if(match_cons(i_60, sym__2))
    {
      j_60 = ATgetArgument(i_60, 0);
      k_60 = ATgetArgument(i_60, 1);
      {
        ATerm o_60 = NULL,q_60 = NULL;
        ATerm p_60 = NULL;
        t = SSLgetAnnotations(not_null(i_60));
        {
          p_60 = t;
          if(((o_60 != NULL) && (o_60 != p_60)))
            _fail(p_60);
          else
            o_60 = p_60;
        }
        {
          t = not_null(j_60);
          {
            ATerm s_60 = NULL;
            t = r_56(t);
            {
              q_60 = t;
              {
                t = not_null(k_60);
                {
                  ATerm u_60 = NULL;
                  t = s_56(t);
                  {
                    s_60 = t;
                    {
                      ATerm v_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_60), not_null(s_60)), not_null(o_60));
                      {
                        v_60 = t;
                        if(((u_60 != NULL) && (u_60 != v_60)))
                          _fail(v_60);
                        else
                          u_60 = v_60;
                      }
                      t = not_null(u_60);
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
  ATerm c_61 = NULL;
  c_61 = t;
  t = SSL_implode_string(not_null(c_61));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
  l_61 = t;
  k_61 :
  if(((ATgetType(l_61) == AT_LIST) && !(ATisEmpty(l_61))))
    {
      m_61 = ATgetFirst((ATermList) l_61);
      n_61 = (ATerm) ATgetNext((ATermList) l_61);
      {
        ATerm r_61 = NULL,t_61 = NULL;
        ATerm s_61 = NULL;
        t = SSLgetAnnotations(not_null(l_61));
        {
          s_61 = t;
          if(((r_61 != NULL) && (r_61 != s_61)))
            _fail(s_61);
          else
            r_61 = s_61;
        }
        {
          t = not_null(m_61);
          {
            ATerm v_61 = NULL;
            t = a_58(t);
            {
              t_61 = t;
              {
                t = not_null(n_61);
                {
                  ATerm x_61 = NULL;
                  t = b_58(t);
                  {
                    v_61 = t;
                    {
                      ATerm y_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_61)), not_null(t_61)), not_null(r_61));
                      {
                        y_61 = t;
                        if(((x_61 != NULL) && (x_61 != y_61)))
                          _fail(y_61);
                        else
                          x_61 = y_61;
                      }
                      t = not_null(x_61);
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
  ATerm f_62 = NULL;
  f_62 = t;
  t = SSL_explode_string(not_null(f_62));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm m_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_62 (ATerm t)
        {
          ATerm b_46 = t;
          int c_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, k_62);
              ;
              LocalPopChoice(c_46);
            }
          else
            {
              t = b_46;
              {
                ATerm d_15 (ATerm t)
                {
                  ATerm j_62 = NULL;
                  j_62 = t;
                  i_62 :
                  if(!(match_int(j_62, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm i_15 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, d_15, i_15);
              }
            }
          return(t);
        }
        t = k_62(t);
        ;
        LocalPopChoice(a_46);
      }
    else
      {
        t = m_45;
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
  ATerm d_46;
  d_46 = t;
  {
    ATerm y_62 = NULL,a_63 = NULL,c_63 = NULL,e_63 = NULL,k_63 = NULL,o_63 = NULL,t_63 = NULL,x_63 = NULL;
    t = term_j_46;
    {
      t = set_config_0(t);
      {
        t = term_a_47;
        {
          t = set_config_0(t);
          {
            t = term_b_47;
            {
              t = set_config_0(t);
              {
                ATerm c_47;
                c_47 = t;
                {
                  ATerm z_62 = NULL;
                  t = term_d_47;
                  {
                    t = xtc_find_path_0(t);
                    {
                      z_62 = t;
                      if(((y_62 != NULL) && (y_62 != z_62)))
                        _fail(z_62);
                      else
                        y_62 = z_62;
                    }
                  }
                }
                t = c_47;
                {
                  ATerm e_47;
                  e_47 = t;
                  {
                    ATerm b_63 = NULL;
                    t = term_f_47;
                    {
                      t = xtc_find_path_0(t);
                      {
                        b_63 = t;
                        if(((a_63 != NULL) && (a_63 != b_63)))
                          _fail(b_63);
                        else
                          a_63 = b_63;
                      }
                    }
                  }
                  t = e_47;
                  {
                    ATerm d_63 = NULL;
                    t = term_g_47;
                    {
                      t = xtc_find_path_0(t);
                      {
                        d_63 = t;
                        if(((c_63 != NULL) && (c_63 != d_63)))
                          _fail(d_63);
                        else
                          c_63 = d_63;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_63)), term_o_26), not_null(a_63)), term_o_26), not_null(y_62)), term_o_26));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, term_i_47), term_h_47));
                          {
                            t = set_config_0(t);
                            {
                              ATerm j_47;
                              j_47 = t;
                              {
                                ATerm f_63 = NULL,j_63 = NULL;
                                ATerm i_63 = NULL;
                                t = term_k_47;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    i_63 = t;
                                    if(((f_63 != NULL) && (f_63 != i_63)))
                                      _fail(i_63);
                                    else
                                      f_63 = i_63;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_63), term_l_47);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      j_63 = t;
                                      if(((e_63 != NULL) && (e_63 != j_63)))
                                        _fail(j_63);
                                      else
                                        e_63 = j_63;
                                    }
                                  }
                                }
                              }
                              t = j_47;
                              {
                                ATerm m_47;
                                m_47 = t;
                                {
                                  ATerm l_63 = NULL,n_63 = NULL;
                                  ATerm m_63 = NULL;
                                  t = term_k_47;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      m_63 = t;
                                      if(((l_63 != NULL) && (l_63 != m_63)))
                                        _fail(m_63);
                                      else
                                        l_63 = m_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_63), term_l_47);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        n_63 = t;
                                        if(((k_63 != NULL) && (k_63 != n_63)))
                                          _fail(n_63);
                                        else
                                          k_63 = n_63;
                                      }
                                    }
                                  }
                                }
                                t = m_47;
                                {
                                  ATerm q_63 = NULL,s_63 = NULL;
                                  ATerm r_63 = NULL;
                                  t = term_n_47;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      r_63 = t;
                                      if(((q_63 != NULL) && (q_63 != r_63)))
                                        _fail(r_63);
                                      else
                                        q_63 = r_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), term_l_47);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        s_63 = t;
                                        if(((o_63 != NULL) && (o_63 != s_63)))
                                          _fail(s_63);
                                        else
                                          o_63 = s_63;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_63)), term_o_26), not_null(k_63)), term_o_26), not_null(e_63)), term_o_26));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm o_47;
                                        o_47 = t;
                                        {
                                          ATerm u_63 = NULL,w_63 = NULL;
                                          ATerm v_63 = NULL;
                                          t = term_k_47;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              v_63 = t;
                                              if(((u_63 != NULL) && (u_63 != v_63)))
                                                _fail(v_63);
                                              else
                                                u_63 = v_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_63), term_p_47);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                w_63 = t;
                                                if(((t_63 != NULL) && (t_63 != w_63)))
                                                  _fail(w_63);
                                                else
                                                  t_63 = w_63;
                                              }
                                            }
                                          }
                                        }
                                        t = o_47;
                                        {
                                          ATerm y_63 = NULL,a_64 = NULL;
                                          ATerm z_63 = NULL;
                                          t = term_n_47;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              z_63 = t;
                                              if(((y_63 != NULL) && (y_63 != z_63)))
                                                _fail(z_63);
                                              else
                                                y_63 = z_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_63), term_p_47);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                a_64 = t;
                                                if(((x_63 != NULL) && (x_63 != a_64)))
                                                  _fail(a_64);
                                                else
                                                  x_63 = a_64;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_47), term_t_47), not_null(x_63)), term_q_47), term_s_47), term_r_47), not_null(t_63)), term_q_47));
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
  t = d_46;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm j_15 (ATerm t)
      {
        ATerm p_64 = NULL;
        t = term_o_40;
        {
          t = get_config_0(t);
          {
            ATerm q_64 = NULL;
            t = term_v_47;
            {
              t = xtc_find_0(t);
              {
                q_64 = t;
                if(((p_64 != NULL) && (p_64 != q_64)))
                  _fail(q_64);
                else
                  p_64 = q_64;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_64), term_m_17);
              {
                t = copy_file_0(t);
                {
                  t = term_x_15;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, j_15);
      {
        ATerm k_15 (ATerm t)
        {
          t = term_r_40;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_x_15;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, k_15);
        {
          ATerm w_47 = t;
          int x_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_47;
              y_47 = t;
              {
                t = term_f_25;
                t = get_config_0(t);
              }
              t = y_47;
              ;
              LocalPopChoice(x_47);
            }
          else
            {
              t = w_47;
              {
                t = (ATerm) ATinsert(ATempty, term_z_47);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm l_15 (ATerm t)
              {
                ATerm a_48;
                a_48 = t;
                {
                  t = term_f_25;
                  {
                    t = get_config_0(t);
                    {
                      ATerm m_15 (ATerm t)
                      {
                        t = term_b_48;
                        return(t);
                      }
                      t = debug_1(t, m_15);
                    }
                  }
                }
                t = a_48;
                return(t);
              }
              t = if_verbose1_1(t, l_15);
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
  ATerm c_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm o_15 (ATerm t)
        {
          ATerm r_15 (ATerm t)
          {
            ATerm v_64 = NULL;
            ATerm w_64 = NULL;
            w_64 = t;
            if(((v_64 != NULL) && (v_64 != w_64)))
              _fail(w_64);
            else
              v_64 = w_64;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(CheckATermList(not_null(v_64)), term_f_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, r_15);
          return(t);
        }
        t = profile_p__2(t, o_15, compile_0);
        {
          ATerm s_15 (ATerm t)
          {
            ATerm x_64 = NULL;
            ATerm y_64 = NULL;
            t = run_time_0(t);
            {
              y_64 = t;
              if(((x_64 != NULL) && (x_64 != y_64)))
                _fail(y_64);
              else
                x_64 = y_64;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_48), not_null(x_64)), term_g_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, s_15);
          {
            t = term_x_15;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(e_48);
    }
  else
    {
      t = c_48;
      {
        ATerm z_64 = NULL;
        ATerm a_65 = NULL;
        t = run_time_0(t);
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_48), not_null(z_64)), term_i_48));
          {
            t = printnl_0(t);
            {
              t = term_y_23;
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
