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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
ATerm term_k_35;
ATerm term_j_34;
ATerm term_x_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_d_33;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_m_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_q_26;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_v_19;
ATerm term_p_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_u_18;
ATerm term_t_17;
ATerm term_m_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_w_13;
ATerm term_h_13;
ATerm term_z_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_l_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_c_8;
ATerm term_w_7;
ATerm term_v_7;
void init_constant_terms (void)
{
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_e_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_d_14);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_m_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_c_17);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_f_16);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_c_17);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_o_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_c_17);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_c_17);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_f_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_c_17);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__3, term_e_32, term_f_32, (ATerm) ATempty);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_text_0 (ATerm);
ATerm basename_1 (ATerm, ATerm q_87 (ATerm));
ATerm basename_0 (ATerm);
ATerm at_suffix_rev_1 (ATerm, ATerm d_79 (ATerm));
ATerm get_filename_0 (ATerm);
ATerm map_1 (ATerm, ATerm g_78 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm j_65 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm r_80 (ATerm));
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm r_98 (ATerm), ATerm s_98 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm w_94 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm q_91 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm p_91 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm r_91 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm d_84 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm a_95 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm i_98 (ATerm));
ATerm assert_1 (ATerm, ATerm x_88 (ATerm));
ATerm obsolete_1 (ATerm, ATerm l_89 (ATerm));
ATerm open_file_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm d_65 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_89 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm o_91 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm r_78 (ATerm));
ATerm find_module_1 (ATerm, ATerm o_70 (ATerm));
ATerm get_module_1 (ATerm, ATerm n_70 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
ATerm diff_1 (ATerm, ATerm z_83 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm zip_1 (ATerm, ATerm m_80 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_71 (ATerm), ATerm v_71 (ATerm));
ATerm for_3 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm z_71 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm));
ATerm filter_1 (ATerm, ATerm x_85 (ATerm));
ATerm pack_stratego_modules_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_78 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm u_88 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_88 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm y_97 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm z_97 (ATerm));
ATerm version_option_0 (ATerm);
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_84 (ATerm), ATerm v_84 (ATerm));
ATerm crush_2 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_93 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_93 (ATerm));
ATerm Program_1 (ATerm, ATerm u_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm f_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_70 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm d_98 (ATerm), ATerm e_98 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm g_98 (ATerm), ATerm h_98 (ATerm));
ATerm pack_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_1 = NULL,o_1 = NULL,q_1 = NULL;
  j_1 = t;
  i_1 :
  if(match_cons(j_1, sym__2))
    {
      o_1 = ATgetArgument(j_1, 0);
      q_1 = ATgetArgument(j_1, 1);
      t = SSL_WriteToBinaryFile(not_null(o_1), not_null(q_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm z_2 = NULL;
  ATerm f_3 = NULL;
  z_2 = t;
  {
    ATerm g_3 = NULL;
    t = xtc_new_file_0(t);
    {
      g_3 = t;
      {
        if(((f_3 != NULL) && (f_3 != g_3)))
          _fail(g_3);
        else
          f_3 = g_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(z_2));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(f_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_3));
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        t = not_null(p_3);
        {
          ATerm v_3 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_7);
            }
          else
            {
              t = v_3;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm t_7 = t;
                  int u_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(u_7);
                    }
                  else
                    {
                      t = t_7;
                      {
                        ATerm s_3 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm t_3 = NULL;
                          t_3 = t;
                          if(((s_3 != NULL) && (s_3 != t_3)))
                            _fail(t_3);
                          else
                            s_3 = t_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(s_3)), not_null(o_3));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, b_0);
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
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym__2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_4)), term_v_7), not_null(a_4));
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
  ATerm m_4 = NULL;
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  m_4 = t;
  {
    ATerm s_4 = NULL;
    t = term_w_7;
    {
      ATerm t_4 = NULL;
      t = get_config_0(t);
      {
        s_4 = t;
        {
          if(((o_4 != NULL) && (o_4 != s_4)))
            _fail(s_4);
          else
            o_4 = s_4;
          {
            ATerm u_4 = NULL,w_4 = NULL;
            ATerm x_7 = t;
            int b_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_8;
                t = get_config_0(t);
                LocalPopChoice(b_8);
              }
            else
              {
                t = x_7;
                {
                  ATerm g_8 = t;
                  if((PushChoice() == 0))
                    {
                      t = term_j_8;
                      t = get_config_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = g_8;
                    }
                }
              }
            {
              t_4 = t;
              {
                if(((q_4 != NULL) && (q_4 != t_4)))
                  _fail(t_4);
                else
                  q_4 = t_4;
                {
                  ATerm v_4 = NULL;
                  v_4 = t;
                  if(((u_4 != NULL) && (u_4 != v_4)))
                    _fail(v_4);
                  else
                    u_4 = v_4;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), term_k_8);
                    {
                      ATerm x_4 = NULL;
                      t = add_extension_0(t);
                      {
                        w_4 = t;
                        {
                          if(((p_4 != NULL) && (p_4 != w_4)))
                            _fail(w_4);
                          else
                            p_4 = w_4;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_l_8);
                            {
                              ATerm y_4 = NULL;
                              t = open_file_0(t);
                              {
                                x_4 = t;
                                {
                                  if(((r_4 != NULL) && (r_4 != x_4)))
                                    _fail(x_4);
                                  else
                                    r_4 = x_4;
                                  {
                                    ATerm z_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(CheckATermList(not_null(m_4)), term_n_8));
                                    {
                                      t = separate_by_0(t);
                                      {
                                        z_4 = t;
                                        if(((y_4 != NULL) && (y_4 != z_4)))
                                          _fail(z_4);
                                        else
                                          y_4 = z_4;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), (ATerm) ATinsert(CheckATermList(not_null(y_4)), not_null(q_4)));
                                      {
                                        t = printnl_0(t);
                                        {
                                          t = not_null(r_4);
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
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_4));
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      t = SSL_WriteToTextFile(not_null(k_5), not_null(l_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_text_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL;
  r_5 = t;
  {
    ATerm u_5 = NULL;
    t = xtc_new_file_0(t);
    {
      u_5 = t;
      {
        if(((t_5 != NULL) && (t_5 != u_5)))
          _fail(u_5);
        else
          t_5 = u_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(r_5));
          {
            t = WriteToTextFile_0(t);
            {
              t = not_null(t_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_5));
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm q_87 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm p_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 (ATerm t)
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, b_6);
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              {
                ATerm x_8 = t;
                int y_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_0 (ATerm t)
                    {
                      ATerm z_5 = NULL;
                      z_5 = t;
                      x_5 :
                      if(!(match_int(z_5, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, c_0, _id);
                    LocalPopChoice(y_8);
                  }
                else
                  {
                    t = x_8;
                    {
                      ATerm e_0 (ATerm t)
                      {
                        ATerm a_6 = NULL;
                        a_6 = t;
                        y_5 :
                        if(!(match_int(a_6, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, e_0, q_87);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = b_6(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = p_8;
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
ATerm at_suffix_rev_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_6);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = d_79(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm get_filename_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = explode_string_0(t);
  {
    ATerm b_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
          h_6 = t;
          e_6 :
          if(((ATgetType(h_6) == AT_LIST) && !(ATisEmpty(h_6))))
            {
              i_6 = ATgetFirst((ATermList) h_6);
              j_6 = (ATerm) ATgetNext((ATermList) h_6);
              f_6 :
              if(match_int(i_6, 47))
                {
                  if(((g_6 != NULL) && (g_6 != j_6)))
                    _fail(j_6);
                  else
                    g_6 = j_6;
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
        t = at_suffix_rev_1(t, f_0);
        t = not_null(g_6);
        LocalPopChoice(g_9);
      }
    else
      {
        t = b_9;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = Cons_2(t, g_78, l_6);
      }
    return(t);
  }
  t = l_6(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  t = SSL_is_string(not_null(n_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = m_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm t_9 = t;
              int u_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(u_9);
                }
              else
                {
                  t = t_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, p_0);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            {
              ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
              w_6 = t;
              v_6 :
              if(match_cons(w_6, sym_Path_1))
                {
                  x_6 = ATgetArgument(w_6, 0);
                  t = not_null(x_6);
                }
              else
                {
                  if(match_cons(w_6, sym_Var_1))
                    {
                      x_6 = ATgetArgument(w_6, 0);
                      {
                        t = not_null(x_6);
                        {
                          ATerm v_9 = t;
                          int w_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_9);
                            }
                          else
                            {
                              t = v_9;
                              {
                                ATerm q_0 (ATerm t)
                                {
                                  t = term_h_10;
                                  return(t);
                                }
                                t = debug_1(t, q_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_6, sym_Prefix_2))
                        {
                          x_6 = ATgetArgument(w_6, 0);
                          y_6 = ATgetArgument(w_6, 1);
                          {
                            ATerm d_7 = NULL,f_7 = NULL;
                            ATerm i_10;
                            i_10 = t;
                            {
                              ATerm e_7 = NULL;
                              t = not_null(x_6);
                              {
                                t = eval_config_0(t);
                                {
                                  e_7 = t;
                                  if(((d_7 != NULL) && (d_7 != e_7)))
                                    _fail(e_7);
                                  else
                                    d_7 = e_7;
                                }
                              }
                            }
                            t = i_10;
                            {
                              ATerm g_7 = NULL;
                              t = not_null(y_6);
                              {
                                t = eval_config_0(t);
                                {
                                  g_7 = t;
                                  if(((f_7 != NULL) && (f_7 != g_7)))
                                    _fail(g_7);
                                  else
                                    f_7 = g_7;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(f_7));
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
  ATerm o_7 = NULL;
  o_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(o_7));
    {
      t = table_get_0(t);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_10;
              m_10 = t;
              {
                ATerm q_7 = NULL;
                ATerm r_7 = NULL;
                r_7 = t;
                if(((q_7 != NULL) && (q_7 != r_7)))
                  _fail(r_7);
                else
                  q_7 = r_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_j_10, not_null(o_7), not_null(q_7));
                  t = table_put_0(t);
                }
              }
              t = m_10;
            }
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_Imports_1))
    {
      a_8 = ATgetArgument(z_7, 0);
      {
        ATerm d_8 = NULL,f_8 = NULL;
        ATerm e_8 = NULL;
        t = SSLgetAnnotations(not_null(z_7));
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
        {
          t = not_null(a_8);
          {
            ATerm h_8 = NULL;
            t = j_65(t);
            {
              f_8 = t;
              {
                ATerm i_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(f_8)), not_null(d_8));
                {
                  i_8 = t;
                  if(((h_8 != NULL) && (h_8 != i_8)))
                    _fail(i_8);
                  else
                    h_8 = i_8;
                }
                t = not_null(h_8);
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
  ATerm t_8 = NULL;
  ATerm r_0 (ATerm t)
  {
    ATerm q_8 = NULL,r_8 = NULL;
    q_8 = t;
    o_8 :
    if(match_cons(q_8, sym_Specification_1))
      {
        r_8 = ATgetArgument(q_8, 0);
        {
          t = not_null(r_8);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm r_10 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_10;
                }
              return(t);
            }
            t = filter_1(t, s_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, r_0);
  {
    t = concat_0(t);
    {
      ATerm u_8 = NULL;
      u_8 = t;
      if(((t_8 != NULL) && (t_8 != u_8)))
        _fail(u_8);
      else
        t_8 = u_8;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_8));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym__2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm j_9 = NULL,l_9 = NULL;
        ATerm k_9 = NULL;
        t = SSLgetAnnotations(not_null(d_9));
        {
          k_9 = t;
          if(((j_9 != NULL) && (j_9 != k_9)))
            _fail(k_9);
          else
            j_9 = k_9;
        }
        {
          t = not_null(e_9);
          {
            ATerm n_9 = NULL;
            t = j_58(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = k_58(t);
                  {
                    n_9 = t;
                    {
                      ATerm q_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_9), not_null(n_9)), not_null(j_9));
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
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  a_10 = t;
  x_9 :
  if(match_cons(a_10, sym__2))
    {
      b_10 = ATgetArgument(a_10, 0);
      e_10 = ATgetArgument(a_10, 1);
      y_9 :
      if(match_cons(b_10, sym__2))
        {
          c_10 = ATgetArgument(b_10, 0);
          d_10 = ATgetArgument(b_10, 1);
          z_9 :
          if(match_cons(e_10, sym__2))
            {
              f_10 = ATgetArgument(e_10, 0);
              g_10 = ATgetArgument(e_10, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_10)), not_null(c_10)), (ATerm) ATinsert(CheckATermList(not_null(g_10)), not_null(d_10)));
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
    {
      p_10 = ATgetFirst((ATermList) o_10);
      q_10 = (ATerm) ATgetNext((ATermList) o_10);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), not_null(q_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  v_10 :
  if(((ATgetType(w_10) == AT_LIST) && ATisEmpty(w_10)))
    {
      t = term_s_10;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm r_80 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, r_80);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  d_11 = t;
  b_11 :
  if(match_cons(d_11, sym__2))
    {
      e_11 = ATgetArgument(d_11, 0);
      f_11 = ATgetArgument(d_11, 1);
      c_11 :
      if(match_cons(f_11, sym_Specification_1))
        {
          g_11 = ATgetArgument(f_11, 0);
          {
            t = not_null(g_11);
            {
              ATerm t_0 (ATerm t)
              {
                ATerm i_11 = NULL,j_11 = NULL;
                i_11 = t;
                a_11 :
                if(match_cons(i_11, sym_Imports_1))
                  {
                    j_11 = ATgetArgument(i_11, 0);
                    t = not_null(j_11);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, t_0);
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
  ATerm s_11 = NULL,t_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_stdin_0))
    {
      ATerm u_11 = NULL;
      ATerm v_11 = NULL;
      t = term_t_10;
      {
        t = ReadFromFile_0(t);
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
      }
      t = not_null(u_11);
    }
  else
    {
      if(match_cons(s_11, sym_FILE_1))
        {
          t_11 = ATgetArgument(s_11, 0);
          {
            ATerm x_11 = NULL;
            ATerm y_11 = NULL;
            t = not_null(t_11);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  y_11 = t;
                  if(((x_11 != NULL) && (x_11 != y_11)))
                    _fail(y_11);
                  else
                    x_11 = y_11;
                }
              }
            }
            t = not_null(x_11);
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
  ATerm k_12 = NULL;
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  k_12 = t;
  {
    ATerm p_12 = NULL;
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
    t = not_null(k_12);
    {
      p_12 = t;
      {
        t = SSL_explode_term(not_null(p_12));
        {
          r_12 = t;
          g_12 :
          if(match_cons(r_12, sym__2))
            {
              s_12 = ATgetArgument(r_12, 0);
              t_12 = ATgetArgument(r_12, 1);
              h_12 :
              if(match_string(s_12, ""))
                {
                  i_12 :
                  if(((ATgetType(t_12) == AT_LIST) && !(ATisEmpty(t_12))))
                    {
                      u_12 = ATgetFirst((ATermList) t_12);
                      v_12 = (ATerm) ATgetNext((ATermList) t_12);
                      j_12 :
                      if(((ATgetType(v_12) == AT_LIST) && !(ATisEmpty(v_12))))
                        {
                          w_12 = ATgetFirst((ATermList) v_12);
                          x_12 = (ATerm) ATgetNext((ATermList) v_12);
                          {
                            if(((m_12 != NULL) && (m_12 != u_12)))
                              _fail(u_12);
                            else
                              m_12 = u_12;
                            {
                              if(((o_12 != NULL) && (o_12 != w_12)))
                                _fail(w_12);
                              else
                                o_12 = w_12;
                              if(((n_12 != NULL) && (n_12 != x_12)))
                                _fail(x_12);
                              else
                                n_12 = x_12;
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
    t = not_null(o_12);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm d_13 = NULL;
  ATerm e_13 = NULL,g_13 = NULL;
  ATerm f_13 = NULL;
  t = term_u_10;
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = term_z_10;
      }
    {
      f_13 = t;
      if(((e_13 != NULL) && (e_13 != f_13)))
        _fail(f_13);
      else
        e_13 = f_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_z_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          g_13 = t;
          if(((d_13 != NULL) && (d_13 != g_13)))
            _fail(g_13);
          else
            d_13 = g_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_13)), term_u_10);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  t = SSL_int_to_string(not_null(k_13));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym__2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        ATerm h_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(q_13), not_null(r_13));
            LocalPopChoice(k_11);
          }
        else
          {
            t = h_11;
            t = SSL_subtr(not_null(q_13), not_null(r_13));
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
  ATerm x_13 = NULL;
  ATerm y_13 = NULL,a_14 = NULL;
  ATerm z_13 = NULL;
  t = term_l_11;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = term_z_10;
      }
    {
      z_13 = t;
      if(((y_13 != NULL) && (y_13 != z_13)))
        _fail(z_13);
      else
        y_13 = z_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_z_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          a_14 = t;
          if(((x_13 != NULL) && (x_13 != a_14)))
            _fail(a_14);
          else
            x_13 = a_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_13)), term_l_11);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm r_98 (ATerm), ATerm s_98 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, r_98, s_98);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm e_14 = NULL;
  e_14 = t;
  t = SSL_close_file(not_null(e_14));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym__2))
    {
      k_14 = ATgetArgument(j_14, 0);
      l_14 = ATgetArgument(j_14, 1);
      t = SSL_execvp(not_null(k_14), not_null(l_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = SSL_waitpid(not_null(q_14));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm w_94 (ATerm))
{
  ATerm a_15 = NULL;
  ATerm c_15 = NULL;
  a_15 = t;
  {
    t = fork_0(t);
    {
      c_15 = t;
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_15 = NULL;
            e_15 = t;
            w_14 :
            if(match_int(e_15, 0))
              {
                t = not_null(a_15);
                t = w_94(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
              t = not_null(c_15);
              {
                t = waitpid_0(t);
                {
                  f_15 = t;
                  y_14 :
                  if(match_cons(f_15, sym_WaitStatus_3))
                    {
                      g_15 = ATgetArgument(f_15, 0);
                      h_15 = ATgetArgument(f_15, 1);
                      i_15 = ATgetArgument(f_15, 2);
                      z_14 :
                      if(match_int(g_15, 0))
                        {
                          t = not_null(a_15);
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
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm u_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(r_15));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, u_0);
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
  ATerm w_15 = NULL;
  w_15 = t;
  t = SSL_table_keys(not_null(w_15));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  {
    t = table_keys_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm e_16 = NULL;
        ATerm g_16 = NULL;
        e_16 = t;
        {
          ATerm h_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(e_16));
          {
            t = table_get_0(t);
            {
              h_16 = t;
              if(((g_16 != NULL) && (g_16 != h_16)))
                _fail(h_16);
              else
                g_16 = h_16;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(g_16));
        }
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm q_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11;
      z_11 = t;
      {
        ATerm m_16 = NULL;
        ATerm n_16 = NULL;
        t = term_l_11;
        {
          t = get_config_0(t);
          {
            n_16 = t;
            if(((m_16 != NULL) && (m_16 != n_16)))
              _fail(n_16);
            else
              m_16 = n_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), term_a_12);
          t = geq_0(t);
        }
      }
      t = z_11;
      t = q_91(t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = q_11;
      {
      }
    }
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm t_16 = NULL;
  ATerm v_16 = NULL,w_16 = NULL;
  t_16 = t;
  {
    ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_16)));
    {
      t = table_get_0(t);
      {
        x_16 = t;
        r_16 :
        if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
          {
            y_16 = ATgetFirst((ATermList) x_16);
            b_17 = (ATerm) ATgetNext((ATermList) x_16);
            s_16 :
            if(match_cons(y_16, sym__2))
              {
                z_16 = ATgetArgument(y_16, 0);
                a_17 = ATgetArgument(y_16, 1);
                {
                  if(((v_16 != NULL) && (v_16 != z_16)))
                    _fail(z_16);
                  else
                    v_16 = z_16;
                  if(((w_16 != NULL) && (w_16 != a_17)))
                    _fail(a_17);
                  else
                    w_16 = a_17;
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
    t = not_null(w_16);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__2))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      {
        ATerm n_17 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_17)));
        {
          t = table_get_0(t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
              o_17 = t;
              g_17 :
              if(match_cons(o_17, sym__2))
                {
                  p_17 = ATgetArgument(o_17, 0);
                  q_17 = ATgetArgument(o_17, 1);
                  {
                    if(((k_17 != NULL) && (k_17 != p_17)))
                      _fail(p_17);
                    else
                      k_17 = p_17;
                    if(((n_17 != NULL) && (n_17 != q_17)))
                      _fail(q_17);
                    else
                      n_17 = q_17;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_0);
          }
        }
        t = not_null(n_17);
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
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_12;
      {
        t = table_get_0(t);
        {
          ATerm x_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, x_0);
        }
      }
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm l_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12;
      y_12 = t;
      {
        ATerm u_17 = NULL;
        ATerm v_17 = NULL;
        t = term_l_11;
        {
          t = get_config_0(t);
          {
            v_17 = t;
            if(((u_17 != NULL) && (u_17 != v_17)))
              _fail(v_17);
            else
              u_17 = v_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), term_z_12);
          t = geq_0(t);
        }
      }
      t = y_12;
      t = p_91(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = l_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13;
      c_13 = t;
      {
        ATerm y_17 = NULL;
        ATerm z_17 = NULL;
        t = term_l_11;
        {
          t = get_config_0(t);
          {
            z_17 = t;
            if(((y_17 != NULL) && (y_17 != z_17)))
              _fail(z_17);
            else
              y_17 = z_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), term_h_13);
          t = geq_0(t);
        }
      }
      t = c_13;
      t = r_91(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
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
ATerm union_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        t = not_null(e_18);
        {
          ATerm j_18 (ATerm t)
          {
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_18);
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
                {
                  ATerm l_13 = t;
                  int m_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = not_null(f_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_84, y_0);
                      t = j_18(t);
                      LocalPopChoice(m_13);
                    }
                  else
                    {
                      t = l_13;
                      t = Cons_2(t, _id, j_18);
                    }
                }
              }
            return(t);
          }
          t = j_18(t);
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
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym__3))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      r_18 = ATgetArgument(o_18, 2);
      {
        ATerm n_13;
        n_13 = t;
        {
          ATerm v_18 = NULL;
          ATerm w_18 = NULL,y_18 = NULL;
          ATerm x_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(q_18));
          {
            ATerm s_13 = t;
            int t_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_13);
              }
            else
              {
                t = s_13;
                t = (ATerm) ATempty;
              }
            {
              x_18 = t;
              if(((w_18 != NULL) && (w_18 != x_18)))
                _fail(x_18);
              else
                w_18 = x_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), not_null(r_18));
            {
              t = union_1(t, eq_0);
              {
                y_18 = t;
                if(((v_18 != NULL) && (v_18 != y_18)))
                  _fail(y_18);
                else
                  v_18 = y_18;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_18), not_null(q_18), not_null(v_18));
            t = table_put_0(t);
          }
        }
        t = n_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm a_95 (ATerm))
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym__2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      {
        t = not_null(i_19);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
            l_19 = t;
            e_19 :
            if(match_cons(l_19, sym__2))
              {
                m_19 = ATgetArgument(l_19, 0);
                n_19 = ATgetArgument(l_19, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), not_null(m_19), not_null(n_19));
                  t = a_95(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_0);
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
  ATerm t_19 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_19 = NULL;
      u_19 = t;
      {
        if(((t_19 != NULL) && (t_19 != u_19)))
          _fail(u_19);
        else
          t_19 = u_19;
        t = SSL_ReadFromFile(not_null(t_19));
      }
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm a_1 (ATerm t)
        {
          t = term_w_13;
          return(t);
        }
        t = debug_1(t, a_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm a_20 = NULL;
  y_19 = t;
  {
    ATerm b_14 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATmakeAppl(sym_Imported_1, not_null(y_19)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_14;
      }
    {
      ATerm c_14;
      c_14 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_d_14, (ATerm) ATinsert(ATempty, not_null(y_19)));
        t = table_put_0(t);
      }
      t = c_14;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = term_f_14;
            return(t);
          }
          t = debug_1(t, c_1);
          return(t);
        }
        t = if_verbose4_1(t, b_1);
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = (ATerm) ATempty;
            }
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = term_m_14;
                return(t);
              }
              t = say_1(t, e_1);
              return(t);
            }
            t = if_verbose6_1(t, d_1);
            {
              ATerm b_20 = NULL;
              b_20 = t;
              if(((a_20 != NULL) && (a_20 != b_20)))
                _fail(b_20);
              else
                a_20 = b_20;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(a_20));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm f_1 (ATerm t)
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = term_n_14;
                        return(t);
                      }
                      t = say_1(t, g_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, f_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_b_12, (ATerm)ATmakeAppl(sym_Imported_1, not_null(y_19)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm h_1 (ATerm t)
                          {
                            ATerm k_1 (ATerm t)
                            {
                              t = term_m_14;
                              return(t);
                            }
                            t = say_1(t, k_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, h_1);
                        }
                      }
                    }
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
  ATerm f_20 = NULL;
  f_20 = t;
  t = SSL_getenv(not_null(f_20));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_14;
      t = get_config_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_14;
            t = getenv_0(t);
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = term_v_14;
      return(t);
    }
    t = debug_1(t, m_1);
    return(t);
  }
  t = if_verbose5_1(t, l_1);
  {
    ATerm x_14;
    x_14 = t;
    {
      ATerm b_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_15;
          t = table_get_0(t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = b_15;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = x_14;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = term_k_15;
          return(t);
        }
        t = debug_1(t, p_1);
        return(t);
      }
      t = if_verbose5_1(t, n_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_n_15;
          return(t);
        }
        t = debug_1(t, s_1);
        return(t);
      }
      t = if_verbose5_1(t, r_1);
      {
        t = xtc_load_0(t);
        {
          ATerm s_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(t_15);
            }
          else
            {
              t = s_15;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                t = term_n_15;
                return(t);
              }
              t = debug_1(t, u_1);
              return(t);
            }
            t = if_verbose5_1(t, t_1);
          }
        }
      }
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm j_20 = NULL;
        ATerm k_20 = NULL;
        k_20 = t;
        if(((j_20 != NULL) && (j_20 != k_20)))
          _fail(k_20);
        else
          j_20 = k_20;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_15), not_null(j_20)), term_u_15);
          {
            t = error_0(t);
            {
              ATerm v_1 (ATerm t)
              {
                t = term_b_12;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      t = term_x_15;
                      return(t);
                    }
                    t = debug_1(t, w_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, v_1);
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
ATerm xtc_command_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm o_20 = NULL;
  ATerm y_15;
  y_15 = t;
  {
    ATerm p_20 = NULL;
    t = i_98(t);
    {
      t = xtc_find_0(t);
      {
        p_20 = t;
        if(((o_20 != NULL) && (o_20 != p_20)))
          _fail(p_20);
        else
          o_20 = p_20;
      }
    }
  }
  t = y_15;
  {
    ATerm z_15;
    z_15 = t;
    {
      ATerm q_20 = NULL;
      ATerm r_20 = NULL;
      r_20 = t;
      if(((q_20 != NULL) && (q_20 != r_20)))
        _fail(r_20);
      else
        q_20 = r_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), not_null(q_20));
        t = call_0(t);
      }
    }
    t = z_15;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      {
        ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
        ATerm a_16;
        a_16 = t;
        {
          ATerm h_21 = NULL;
          ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
          t = x_88(t);
          {
            h_21 = t;
            {
              if(((e_21 != NULL) && (e_21 != h_21)))
                _fail(h_21);
              else
                e_21 = h_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_21), not_null(a_21), not_null(b_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_16 = t;
                    int d_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), term_f_16);
                        t = table_get_0(t);
                        LocalPopChoice(d_16);
                      }
                    else
                      {
                        t = b_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      i_21 = t;
                      x_20 :
                      if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
                        {
                          j_21 = ATgetFirst((ATermList) i_21);
                          k_21 = (ATerm) ATgetNext((ATermList) i_21);
                          {
                            if(((f_21 != NULL) && (f_21 != j_21)))
                              _fail(j_21);
                            else
                              f_21 = j_21;
                            {
                              if(((g_21 != NULL) && (g_21 != k_21)))
                                _fail(k_21);
                              else
                                g_21 = k_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_21), term_f_16, (ATerm) ATinsert(CheckATermList(not_null(g_21)), (ATerm) ATinsert(CheckATermList(not_null(f_21)), not_null(a_21))));
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
        t = a_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm l_89 (ATerm))
{
  ATerm i_16;
  i_16 = t;
  {
    t = l_89(t);
    {
      ATerm x_1 (ATerm t)
      {
        t = term_j_16;
        return(t);
      }
      t = debug_1(t, x_1);
    }
  }
  t = i_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
      u_21 = t;
      p_21 :
      if(match_cons(u_21, sym__2))
        {
          v_21 = ATgetArgument(u_21, 0);
          w_21 = ATgetArgument(u_21, 1);
          {
            if(((t_21 != NULL) && (t_21 != v_21)))
              _fail(v_21);
            else
              t_21 = v_21;
            if(((s_21 != NULL) && (s_21 != w_21)))
              _fail(w_21);
            else
              s_21 = w_21;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_16);
      t = SSL_open_file(not_null(t_21), not_null(s_21));
    }
  else
    {
      t = k_16;
      {
        ATerm x_21 = NULL;
        ATerm y_21 = NULL;
        ATerm y_1 (ATerm t)
        {
          t = term_o_16;
          return(t);
        }
        t = obsolete_1(t, y_1);
        {
          x_21 = t;
          {
            if(((t_21 != NULL) && (t_21 != x_21)))
              _fail(x_21);
            else
              t_21 = x_21;
            {
              ATerm p_16;
              p_16 = t;
              {
                ATerm z_21 = NULL;
                t = term_l_8;
                {
                  z_21 = t;
                  if(((y_21 != NULL) && (y_21 != z_21)))
                    _fail(z_21);
                  else
                    y_21 = z_21;
                }
              }
              t = p_16;
              t = SSL_open_file(not_null(t_21), not_null(y_21));
            }
          }
        }
      }
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm q_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = q_16;
        t = conc_more_lists_0(t);
      }
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
  ATerm e_22 = NULL;
  ATerm f_22 = NULL;
  t = term_c_17;
  {
    t = new_0(t);
    {
      f_22 = t;
      if(((e_22 != NULL) && (e_22 != f_22)))
        _fail(f_22);
      else
        e_22 = f_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_22), term_d_17);
    {
      t = conc_strings_0(t);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
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
  ATerm j_22 = NULL;
  t = new_file_0(t);
  {
    j_22 = t;
    {
      ATerm l_17;
      l_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), term_l_8);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), term_c_17);
            {
              ATerm z_1 (ATerm t)
              {
                t = term_m_17;
                return(t);
              }
              t = assert_1(t, z_1);
            }
          }
        }
      }
      t = l_17;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_stdin_0))
    {
      ATerm v_22 = NULL;
      ATerm w_22 = NULL;
      ATerm x_22 = NULL;
      t = xtc_new_file_0(t);
      {
        w_22 = t;
        {
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
          {
            ATerm y_22 = NULL;
            t = o_0(t);
            {
              y_22 = t;
              if(((x_22 != NULL) && (x_22 != y_22)))
                _fail(y_22);
              else
                x_22 = y_22;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_22)), term_w_7));
              {
                ATerm r_17 = t;
                int s_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(s_17);
                  }
                else
                  {
                    t = r_17;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(v_22);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_22));
    }
  else
    {
      if(match_cons(t_22, sym_FILE_1))
        {
          u_22 = ATgetArgument(t_22, 0);
          {
            ATerm a_23 = NULL;
            ATerm b_23 = NULL;
            t = not_null(u_22);
            {
              ATerm c_23 = NULL;
              t = xtc_new_file_0(t);
              {
                b_23 = t;
                {
                  if(((a_23 != NULL) && (a_23 != b_23)))
                    _fail(b_23);
                  else
                    a_23 = b_23;
                  {
                    ATerm d_23 = NULL;
                    t = o_0(t);
                    {
                      d_23 = t;
                      if(((c_23 != NULL) && (c_23 != d_23)))
                        _fail(d_23);
                      else
                        c_23 = d_23;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_23)), term_w_7), not_null(u_22)), term_t_17));
                      {
                        ATerm w_17 = t;
                        int x_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(x_17);
                          }
                        else
                          {
                            t = w_17;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(a_23);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_23));
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
  ATerm o_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_stdin_0))
    {
      ATerm q_23 = NULL,s_23 = NULL;
      ATerm a_18;
      a_18 = t;
      {
        ATerm r_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          r_23 = t;
          if(((q_23 != NULL) && (q_23 != r_23)))
            _fail(r_23);
          else
            q_23 = r_23;
        }
      }
      t = a_18;
      {
        ATerm t_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(q_23));
        {
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
        }
        t = not_null(s_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym_FILE_1))
    {
      d_24 = ATgetArgument(c_24, 0);
      {
        ATerm c_25 = NULL,e_25 = NULL;
        ATerm d_25 = NULL;
        t = SSLgetAnnotations(not_null(c_24));
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
        {
          t = not_null(d_24);
          {
            ATerm g_25 = NULL;
            t = d_65(t);
            {
              e_25 = t;
              {
                ATerm h_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(e_25)), not_null(c_25));
                {
                  h_25 = t;
                  if(((g_25 != NULL) && (g_25 != h_25)))
                    _fail(h_25);
                  else
                    g_25 = h_25;
                }
                t = not_null(g_25);
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
ATerm xtc_transform_2 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm))
{
  ATerm b_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = stdin_0(t);
        }
      LocalPopChoice(g_18);
      t = xtc_transform_file_2(t, k_98, l_98);
    }
  else
    {
      t = b_18;
      t = xtc_transform_term_2(t, k_98, l_98);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL;
      ATerm a_2 (ATerm t)
      {
        ATerm m_18 = t;
        if((PushChoice() == 0))
          {
            ATerm v_25 = NULL;
            v_25 = t;
            m_25 :
            if(!(match_string(v_25, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_18;
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm w_25 = NULL;
        w_25 = t;
        if(((u_25 != NULL) && (u_25 != w_25)))
          _fail(w_25);
        else
          u_25 = w_25;
        return(t);
      }
      t = _2(t, a_2, b_2);
      {
        t = Snd_0(t);
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_2 (ATerm t)
              {
                t = term_u_18;
                return(t);
              }
              ATerm d_2 (ATerm t)
              {
                ATerm x_25 = NULL,z_25 = NULL,b_26 = NULL;
                ATerm z_18;
                z_18 = t;
                {
                  ATerm y_25 = NULL;
                  t = pass_verbose_0(t);
                  {
                    y_25 = t;
                    if(((x_25 != NULL) && (x_25 != y_25)))
                      _fail(y_25);
                    else
                      x_25 = y_25;
                  }
                }
                t = z_18;
                {
                  ATerm a_19;
                  a_19 = t;
                  {
                    ATerm a_26 = NULL;
                    t = pass_keep_0(t);
                    {
                      a_26 = t;
                      if(((z_25 != NULL) && (z_25 != a_26)))
                        _fail(a_26);
                      else
                        z_25 = a_26;
                    }
                  }
                  t = a_19;
                  {
                    ATerm c_26 = NULL;
                    t = term_b_19;
                    {
                      t = get_config_0(t);
                      {
                        c_26 = t;
                        if(((b_26 != NULL) && (b_26 != c_26)))
                          _fail(c_26);
                        else
                          b_26 = c_26;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_26)), not_null(z_25)), not_null(x_25));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, c_2, d_2);
              t = read_from_0(t);
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_25)), term_c_19);
                t = fatal_error_0(t);
              }
            }
        }
      }
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm d_26 = NULL,g_26 = NULL,h_26 = NULL;
        d_26 = t;
        s_25 :
        if(match_cons(d_26, sym__2))
          {
            g_26 = ATgetArgument(d_26, 0);
            h_26 = ATgetArgument(d_26, 1);
            t_25 :
            if(match_string(g_26, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm d_19 = t;
                  int j_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      LocalPopChoice(j_19);
                    }
                  else
                    {
                      t = d_19;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_26)), term_c_19);
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
ATerm debug_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm k_19;
  k_19 = t;
  {
    ATerm w_26 = NULL,y_26 = NULL;
    ATerm o_19;
    o_19 = t;
    {
      ATerm x_26 = NULL;
      t = e_89(t);
      {
        x_26 = t;
        if(((w_26 != NULL) && (w_26 != x_26)))
          _fail(x_26);
        else
          w_26 = x_26;
      }
    }
    t = o_19;
    {
      ATerm z_26 = NULL;
      z_26 = t;
      if(((y_26 != NULL) && (y_26 != z_26)))
        _fail(z_26);
      else
        y_26 = z_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_26)), not_null(w_26)));
        t = printnl_0(t);
      }
    }
  }
  t = k_19;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm o_91 (ATerm))
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19;
      s_19 = t;
      {
        ATerm h_27 = NULL;
        ATerm i_27 = NULL;
        t = term_l_11;
        {
          t = get_config_0(t);
          {
            i_27 = t;
            if(((h_27 != NULL) && (h_27 != i_27)))
              _fail(i_27);
            else
              h_27 = i_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), term_v_19);
          t = geq_0(t);
        }
      }
      t = s_19;
      t = o_91(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_19;
  w_19 = t;
  {
    ATerm l_27 = NULL;
    ATerm m_27 = NULL;
    m_27 = t;
    if(((l_27 != NULL) && (l_27 != m_27)))
      _fail(m_27);
    else
      l_27 = m_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_19, not_null(l_27));
      t = printnl_0(t);
    }
  }
  t = w_19;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm x_19;
  x_19 = t;
  {
    t = error_0(t);
    {
      t = term_z_10;
      t = exit_0(t);
    }
  }
  t = x_19;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_27 = NULL;
  ATerm s_27 = NULL;
  q_27 = t;
  {
    ATerm z_19;
    z_19 = t;
    {
      ATerm t_27 = NULL;
      t = term_c_20;
      {
        t_27 = t;
        if(((s_27 != NULL) && (s_27 != t_27)))
          _fail(t_27);
        else
          s_27 = t_27;
      }
    }
    t = z_19;
    {
      t = SSL_open_file(not_null(q_27), not_null(s_27));
      t = SSL_close_file(not_null(q_27));
    }
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_implode_string(not_null(x_27));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = SSL_explode_string(not_null(b_28));
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
ATerm fetch_elem_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm f_28 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm g_28 = NULL;
    t = r_78(t);
    {
      g_28 = t;
      if(((f_28 != NULL) && (f_28 != g_28)))
        _fail(g_28);
      else
        f_28 = g_28;
    }
    return(t);
  }
  t = fetch_1(t, e_2);
  t = not_null(f_28);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  n_28 :
  if(match_cons(o_28, sym__2))
    {
      p_28 = ATgetArgument(o_28, 0);
      q_28 = ATgetArgument(o_28, 1);
      {
        t = o_70(t);
        {
          ATerm d_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_2 (ATerm t)
              {
                ATerm t_28 = NULL;
                t_28 = t;
                {
                  t = not_null(q_28);
                  {
                    ATerm g_2 (ATerm t)
                    {
                      ATerm v_28 = NULL,x_28 = NULL;
                      ATerm g_20;
                      g_20 = t;
                      {
                        ATerm w_28 = NULL;
                        w_28 = t;
                        if(((v_28 != NULL) && (v_28 != w_28)))
                          _fail(w_28);
                        else
                          v_28 = w_28;
                      }
                      t = g_20;
                      {
                        ATerm y_28 = NULL,a_29 = NULL;
                        ATerm z_28 = NULL;
                        z_28 = t;
                        if(((y_28 != NULL) && (y_28 != z_28)))
                          _fail(z_28);
                        else
                          y_28 = z_28;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_28)), term_v_7), not_null(p_28)), term_h_20), not_null(t_28));
                          {
                            t = concat_strings_0(t);
                            {
                              t = file_exists_0(t);
                              {
                                a_29 = t;
                                if(((x_28 != NULL) && (x_28 != a_29)))
                                  _fail(a_29);
                                else
                                  x_28 = a_29;
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_28)));
                      }
                      return(t);
                    }
                    t = fetch_elem_1(t, g_2);
                  }
                }
                return(t);
              }
              t = fetch_elem_1(t, f_2);
              LocalPopChoice(e_20);
            }
          else
            {
              t = d_20;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_20), not_null(p_28)), term_i_20);
                t = fatal_error_0(t);
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
ATerm get_module_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm y_29 = NULL;
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  y_29 = t;
  {
    ATerm d_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
    ATerm e_30 = NULL;
    t = not_null(y_29);
    {
      t = basename_1(t, _id);
      {
        e_30 = t;
        if(((d_30 != NULL) && (d_30 != e_30)))
          _fail(e_30);
        else
          d_30 = e_30;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_30), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_20), term_s_20), term_n_20), term_m_20));
      {
        t = find_module_1(t, n_70);
        {
          f_30 = t;
          w_29 :
          if(match_cons(f_30, sym__2))
            {
              g_30 = ATgetArgument(f_30, 0);
              h_30 = ATgetArgument(f_30, 1);
              x_29 :
              if(match_cons(h_30, sym_FILE_1))
                {
                  i_30 = ATgetArgument(h_30, 0);
                  {
                    ATerm j_30 = NULL;
                    if(((a_30 != NULL) && (a_30 != g_30)))
                      _fail(g_30);
                    else
                      a_30 = g_30;
                    {
                      if(((b_30 != NULL) && (b_30 != i_30)))
                        _fail(i_30);
                      else
                        b_30 = i_30;
                      {
                        ATerm h_2 (ATerm t)
                        {
                          ATerm t_20;
                          t_20 = t;
                          {
                            t = not_null(b_30);
                            {
                              ATerm i_2 (ATerm t)
                              {
                                t = term_u_20;
                                return(t);
                              }
                              t = debug_1(t, i_2);
                            }
                          }
                          t = t_20;
                          return(t);
                        }
                        t = if_verbose3_1(t, h_2);
                        {
                          t = parse_module_0(t);
                          {
                            j_30 = t;
                            if(((c_30 != NULL) && (c_30 != j_30)))
                              _fail(j_30);
                            else
                              c_30 = j_30;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), not_null(c_30));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_30 = NULL;
  ATerm w_30 = NULL,x_30 = NULL;
  u_30 = t;
  {
    ATerm y_30 = NULL;
    ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
    t = not_null(u_30);
    {
      y_30 = t;
      {
        t = SSL_explode_term(not_null(y_30));
        {
          a_31 = t;
          r_30 :
          if(match_cons(a_31, sym__2))
            {
              b_31 = ATgetArgument(a_31, 0);
              c_31 = ATgetArgument(a_31, 1);
              s_30 :
              if(match_string(b_31, ""))
                {
                  t_30 :
                  if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
                    {
                      d_31 = ATgetFirst((ATermList) c_31);
                      e_31 = (ATerm) ATgetNext((ATermList) c_31);
                      {
                        if(((x_30 != NULL) && (x_30 != d_31)))
                          _fail(d_31);
                        else
                          x_30 = d_31;
                        if(((w_30 != NULL) && (w_30 != e_31)))
                          _fail(e_31);
                        else
                          w_30 = e_31;
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
    t = not_null(x_30);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,s_31 = NULL,t_31 = NULL;
  l_31 = t;
  j_31 :
  if(match_cons(l_31, sym__5))
    {
      m_31 = ATgetArgument(l_31, 0);
      p_31 = ATgetArgument(l_31, 1);
      q_31 = ATgetArgument(l_31, 2);
      s_31 = ATgetArgument(l_31, 3);
      t_31 = ATgetArgument(l_31, 4);
      k_31 :
      if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
        {
          n_31 = ATgetFirst((ATermList) m_31);
          o_31 = (ATerm) ATgetNext((ATermList) m_31);
          t = (ATerm) ATmakeAppl(sym__5, not_null(o_31), not_null(p_31), not_null(q_31), not_null(s_31), (ATerm) ATinsert(CheckATermList(not_null(t_31)), not_null(n_31)));
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
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym__2))
    {
      l_32 = ATgetArgument(k_32, 0);
      m_32 = ATgetArgument(k_32, 1);
      if(((l_32 != NULL) && (l_32 != m_32)))
        _fail(m_32);
      else
        l_32 = m_32;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
    {
      v_32 = ATgetFirst((ATermList) u_32);
      w_32 = (ATerm) ATgetNext((ATermList) u_32);
      {
        t = i_84(t);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm z_32 = NULL;
            z_32 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), not_null(z_32));
              t = h_84(t);
            }
            return(t);
          }
          t = fetch_1(t, j_2);
        }
        t = not_null(w_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym__2))
    {
      g_33 = ATgetArgument(f_33, 0);
      h_33 = ATgetArgument(f_33, 1);
      {
        t = not_null(g_33);
        {
          ATerm l_33 (ATerm t)
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                {
                  ATerm c_21 = t;
                  int d_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_2 (ATerm t)
                      {
                        t = not_null(h_33);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_83, k_2);
                      t = l_33(t);
                      LocalPopChoice(d_21);
                    }
                  else
                    {
                      t = c_21;
                      t = Cons_2(t, _id, l_33);
                    }
                }
              }
            return(t);
          }
          t = l_33(t);
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
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  p_33 = t;
  n_33 :
  if(match_cons(p_33, sym__2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      o_33 :
      if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
        {
          s_33 = ATgetFirst((ATermList) r_33);
          t_33 = (ATerm) ATgetNext((ATermList) r_33);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_33)), not_null(s_33)), not_null(t_33));
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
  ATerm a_34 = NULL,b_34 = NULL,h_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym__2))
    {
      b_34 = ATgetArgument(a_34, 0);
      h_34 = ATgetArgument(a_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_34)), not_null(b_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  p_34 = t;
  m_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      t_34 = ATgetArgument(p_34, 1);
      n_34 :
      if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
        {
          r_34 = ATgetFirst((ATermList) q_34);
          s_34 = (ATerm) ATgetNext((ATermList) q_34);
          o_34 :
          if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
            {
              u_34 = ATgetFirst((ATermList) t_34);
              v_34 = (ATerm) ATgetNext((ATermList) t_34);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_34), not_null(u_34)), (ATerm) ATmakeAppl(sym__2, not_null(s_34), not_null(v_34)));
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
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  c_35 :
  if(match_cons(f_35, sym__2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      d_35 :
      if(((ATgetType(g_35) == AT_LIST) && ATisEmpty(g_35)))
        {
          e_35 :
          if(((ATgetType(h_35) == AT_LIST) && ATisEmpty(h_35)))
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
ATerm genzip_4 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm j_35 (ATerm t)
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          t = i_80(t);
          {
            t = _2(t, k_80, j_35);
            t = j_80(t);
          }
        }
      }
    return(t);
  }
  t = j_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_80 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_80);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  u_35 = t;
  s_35 :
  if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
    {
      v_35 = ATgetFirst((ATermList) u_35);
      y_35 = (ATerm) ATgetNext((ATermList) u_35);
      t_35 :
      if(match_cons(v_35, sym__2))
        {
          w_35 = ATgetArgument(v_35, 0);
          x_35 = ATgetArgument(v_35, 1);
          {
            ATerm c_36 = NULL,d_36 = NULL,j_36 = NULL,p_36 = NULL;
            ATerm n_21;
            n_21 = t;
            {
              ATerm e_36 = NULL;
              ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
              t = not_null(x_35);
              {
                e_36 = t;
                {
                  t = SSL_explode_term(not_null(e_36));
                  {
                    g_36 = t;
                    n_35 :
                    if(match_cons(g_36, sym__2))
                      {
                        h_36 = ATgetArgument(g_36, 0);
                        i_36 = ATgetArgument(g_36, 1);
                        {
                          if(((c_36 != NULL) && (c_36 != h_36)))
                            _fail(h_36);
                          else
                            c_36 = h_36;
                          if(((d_36 != NULL) && (d_36 != i_36)))
                            _fail(i_36);
                          else
                            d_36 = i_36;
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
            t = n_21;
            {
              ATerm o_21;
              o_21 = t;
              {
                ATerm k_36 = NULL;
                ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
                t = not_null(w_35);
                {
                  k_36 = t;
                  {
                    t = SSL_explode_term(not_null(k_36));
                    {
                      m_36 = t;
                      q_35 :
                      if(match_cons(m_36, sym__2))
                        {
                          n_36 = ATgetArgument(m_36, 0);
                          o_36 = ATgetArgument(m_36, 1);
                          {
                            if(((c_36 != NULL) && (c_36 != n_36)))
                              _fail(n_36);
                            else
                              c_36 = n_36;
                            if(((j_36 != NULL) && (j_36 != o_36)))
                              _fail(o_36);
                            else
                              j_36 = o_36;
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
              t = o_21;
              {
                ATerm q_36 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), not_null(d_36));
                {
                  t = zip_1(t, _id);
                  {
                    q_36 = t;
                    if(((p_36 != NULL) && (p_36 != q_36)))
                      _fail(q_36);
                    else
                      p_36 = q_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(y_35));
                  {
                    ATerm q_21 = t;
                    int r_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(r_21);
                      }
                    else
                      {
                        t = q_21;
                        t = conc_more_lists_0(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  a_37 = t;
  y_36 :
  if(((ATgetType(a_37) == AT_LIST) && !(ATisEmpty(a_37))))
    {
      b_37 = ATgetFirst((ATermList) a_37);
      e_37 = (ATerm) ATgetNext((ATermList) a_37);
      z_36 :
      if(match_cons(b_37, sym__2))
        {
          c_37 = ATgetArgument(b_37, 0);
          d_37 = ATgetArgument(b_37, 1);
          {
            ATerm g_37 = NULL;
            if(((c_37 != NULL) && (c_37 != d_37)))
              _fail(d_37);
            else
              c_37 = d_37;
            {
              if(((g_37 != NULL) && (g_37 != e_37)))
                _fail(e_37);
              else
                g_37 = e_37;
              t = not_null(g_37);
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
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm j_37 = NULL;
        j_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_37));
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm g_22 = t;
              int h_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(h_22);
                }
              else
                {
                  t = g_22;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, o_2);
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, l_2, m_2, n_2);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm v_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  v_37 = t;
  t_37 :
  if(match_cons(v_37, sym__5))
    {
      z_37 = ATgetArgument(v_37, 0);
      c_38 = ATgetArgument(v_37, 1);
      d_38 = ATgetArgument(v_37, 2);
      e_38 = ATgetArgument(v_37, 3);
      f_38 = ATgetArgument(v_37, 4);
      u_37 :
      if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
        {
          a_38 = ATgetFirst((ATermList) z_37);
          b_38 = (ATerm) ATgetNext((ATermList) z_37);
          {
            ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,s_38 = NULL,u_38 = NULL,w_38 = NULL;
            ATerm i_22;
            i_22 = t;
            {
              ATerm p_38 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_38), not_null(d_38));
              {
                ATerm q_38 = NULL;
                t = q_99(t);
                {
                  p_38 = t;
                  {
                    if(((m_38 != NULL) && (m_38 != p_38)))
                      _fail(p_38);
                    else
                      m_38 = p_38;
                    {
                      t = not_null(m_38);
                      {
                        ATerm r_38 = NULL;
                        t = r_99(t);
                        {
                          q_38 = t;
                          {
                            if(((n_38 != NULL) && (n_38 != q_38)))
                              _fail(q_38);
                            else
                              n_38 = q_38;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), not_null(c_38));
                              {
                                t = diff_0(t);
                                {
                                  r_38 = t;
                                  if(((o_38 != NULL) && (o_38 != r_38)))
                                    _fail(r_38);
                                  else
                                    o_38 = r_38;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = i_22;
            {
              ATerm k_22;
              k_22 = t;
              {
                ATerm t_38 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), not_null(b_38));
                {
                  ATerm l_22 = t;
                  int m_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(m_22);
                    }
                  else
                    {
                      t = l_22;
                      t = conc_more_lists_0(t);
                    }
                  {
                    t_38 = t;
                    if(((s_38 != NULL) && (s_38 != t_38)))
                      _fail(t_38);
                    else
                      s_38 = t_38;
                  }
                }
              }
              t = k_22;
              {
                ATerm n_22;
                n_22 = t;
                {
                  ATerm v_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), not_null(c_38));
                  {
                    ATerm o_22 = t;
                    int p_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(p_22);
                      }
                    else
                      {
                        t = o_22;
                        t = conc_more_lists_0(t);
                      }
                    {
                      v_38 = t;
                      if(((u_38 != NULL) && (u_38 != v_38)))
                        _fail(v_38);
                      else
                        u_38 = v_38;
                    }
                  }
                }
                t = n_22;
                {
                  ATerm x_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(a_38), not_null(m_38), not_null(e_38));
                  {
                    t = s_99(t);
                    {
                      x_38 = t;
                      if(((w_38 != NULL) && (w_38 != x_38)))
                        _fail(x_38);
                      else
                        w_38 = x_38;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(s_38), not_null(u_38), not_null(d_38), not_null(w_38), not_null(f_38));
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
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  l_39 = t;
  j_39 :
  if(match_cons(l_39, sym__5))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      o_39 = ATgetArgument(l_39, 2);
      p_39 = ATgetArgument(l_39, 3);
      q_39 = ATgetArgument(l_39, 4);
      k_39 :
      if(((ATgetType(m_39) == AT_LIST) && ATisEmpty(m_39)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), not_null(q_39));
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
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym__3))
    {
      z_39 = ATgetArgument(y_39, 0);
      a_40 = ATgetArgument(y_39, 1);
      b_40 = ATgetArgument(y_39, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(z_39), not_null(z_39), not_null(a_40), not_null(b_40), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm u_71 (ATerm), ATerm v_71 (ATerm))
{
  ATerm g_40 (ATerm t)
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_71(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          t = v_71(t);
          t = g_40(t);
        }
      }
    return(t);
  }
  t = g_40(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm z_71 (ATerm))
{
  t = x_71(t);
  t = while_not_2(t, y_71, z_71);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm z_22 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, y_98, z_98, a_99);
        LocalPopChoice(e_23);
      }
    else
      {
        t = z_22;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, p_2);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm))
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  t = graph_nodes_undef_roots_3(t, n_99, o_99, p_99);
  {
    j_40 = t;
    i_40 :
    if(match_cons(j_40, sym__2))
      {
        k_40 = ATgetArgument(j_40, 0);
        l_40 = ATgetArgument(j_40, 1);
        t = not_null(k_40);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              t = filter_1(t, x_85);
              return(t);
            }
            t = Cons_2(t, x_85, q_2);
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
              r_40 = t;
              q_40 :
              if(((ATgetType(r_40) == AT_LIST) && !(ATisEmpty(r_40))))
                {
                  s_40 = ATgetFirst((ATermList) r_40);
                  t_40 = (ATerm) ATgetNext((ATermList) r_40);
                  {
                    t = not_null(t_40);
                    t = filter_1(t, x_85);
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
  ATerm i_41 = NULL,j_41 = NULL;
  i_41 = t;
  f_41 :
  if(match_cons(i_41, sym_FILE_1))
    {
      j_41 = ATgetArgument(i_41, 0);
      {
        ATerm l_41 = NULL;
        ATerm n_41 = NULL;
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_19;
            {
              t = get_config_0(t);
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm l_23 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm m_41 = NULL;
                      m_41 = t;
                      z_40 :
                      if(!(match_string(m_41, "-I")))
                        {
                          _fail(t);
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = l_23;
                    }
                  return(t);
                }
                t = filter_1(t, r_2);
              }
            }
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = (ATerm) ATempty;
          }
        {
          n_41 = t;
          if(((l_41 != NULL) && (l_41 != n_41)))
            _fail(n_41);
          else
            l_41 = n_41;
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(j_41)), term_p_23), term_m_23), term_c_17, (ATerm) ATempty);
          {
            ATerm s_2 (ATerm t)
            {
              t = Fst_0(t);
              {
                ATerm u_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_41)), term_v_7);
                  return(t);
                }
                t = get_module_1(t, u_2);
              }
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
              o_41 = t;
              e_41 :
              if(match_cons(o_41, sym__3))
                {
                  p_41 = ATgetArgument(o_41, 0);
                  q_41 = ATgetArgument(o_41, 1);
                  r_41 = ATgetArgument(o_41, 2);
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_41)), not_null(q_41));
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = graph_nodes_roots_3(t, s_2, get_stratego_imports_0, t_2);
            {
              t = unzip_1(t, _id);
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
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
        c_42 = t;
        z_41 :
        if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
          {
            d_42 = ATgetFirst((ATermList) c_42);
            e_42 = (ATerm) ATgetNext((ATermList) c_42);
            {
              t = not_null(d_42);
              {
                ATerm v_2 (ATerm t)
                {
                  t = not_null(e_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_2);
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
  ATerm z_42 = NULL;
  ATerm b_43 = NULL;
  z_42 = t;
  {
    ATerm c_43 = NULL;
    ATerm e_43 = NULL,j_43 = NULL,k_43 = NULL;
    t = not_null(z_42);
    {
      c_43 = t;
      {
        t = SSL_explode_term(not_null(c_43));
        {
          e_43 = t;
          x_42 :
          if(match_cons(e_43, sym__2))
            {
              j_43 = ATgetArgument(e_43, 0);
              k_43 = ATgetArgument(e_43, 1);
              y_42 :
              if(match_string(j_43, ""))
                {
                  if(((b_43 != NULL) && (b_43 != k_43)))
                    _fail(k_43);
                  else
                    b_43 = k_43;
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
      t = not_null(b_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm q_43 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_43);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
          t = Nil_0(t);
          t = v_78(t);
        }
      }
    return(t);
  }
  t = q_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  x_43 :
  if(match_cons(z_43, sym__2))
    {
      a_44 = ATgetArgument(z_43, 0);
      b_44 = ATgetArgument(z_43, 1);
      {
        t = not_null(a_44);
        {
          ATerm w_2 (ATerm t)
          {
            t = not_null(b_44);
            return(t);
          }
          t = at_end_1(t, w_2);
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
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym__2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      {
        ATerm o_44 = NULL;
        ATerm p_44 = NULL,r_44 = NULL;
        ATerm q_44 = NULL;
        t = not_null(k_44);
        {
          ATerm a_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(e_24);
            }
          else
            {
              t = a_24;
              t = (ATerm) ATempty;
            }
          {
            q_44 = t;
            if(((p_44 != NULL) && (p_44 != q_44)))
              _fail(q_44);
            else
              p_44 = q_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_44), not_null(p_44));
          {
            ATerm f_24 = t;
            int g_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(g_24);
              }
            else
              {
                t = f_24;
                t = conc_more_lists_0(t);
              }
            {
              r_44 = t;
              if(((o_44 != NULL) && (o_44 != r_44)))
                _fail(r_44);
              else
                o_44 = r_44;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_10, not_null(k_44), not_null(o_44));
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
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm b_45 = NULL;
        b_45 = t;
        v_44 :
        if(!(match_string(b_45, "-I")))
          {
            if(!(match_string(b_45, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        ATerm c_45 = NULL;
        ATerm d_45 = NULL;
        d_45 = t;
        if(((c_45 != NULL) && (c_45 != d_45)))
          _fail(d_45);
        else
          c_45 = d_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_45)), term_b_19));
          t = extend_config_0(t);
        }
        t = term_c_17;
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_j_24;
        return(t);
      }
      t = ArgOption_3(t, x_2, y_2, a_3);
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm e_45 = NULL;
              e_45 = t;
              x_44 :
              if(!(match_string(e_45, "--nodep")))
                {
                  if(!(match_string(e_45, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_n_24;
              t = set_config_0(t);
              t = term_c_17;
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              t = term_o_24;
              return(t);
            }
            t = Option_3(t, b_3, c_3, d_3);
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm p_24 = t;
              int q_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm f_45 = NULL;
                    f_45 = t;
                    y_44 :
                    if(!(match_string(f_45, "--dep")))
                      {
                        if(!(match_string(f_45, "-d")))
                          {
                            if(!(match_string(f_45, "-dep")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm h_3 (ATerm t)
                  {
                    ATerm g_45 = NULL;
                    ATerm h_45 = NULL;
                    h_45 = t;
                    if(((g_45 != NULL) && (g_45 != h_45)))
                      _fail(h_45);
                    else
                      g_45 = h_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(g_45));
                      t = set_config_0(t);
                    }
                    t = term_c_17;
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    t = term_r_24;
                    return(t);
                  }
                  t = ArgOption_3(t, e_3, h_3, i_3);
                  LocalPopChoice(q_24);
                }
              else
                {
                  t = p_24;
                  {
                    ATerm j_3 (ATerm t)
                    {
                      ATerm i_45 = NULL;
                      i_45 = t;
                      a_45 :
                      if(!(match_string(i_45, "--imports")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm k_3 (ATerm t)
                    {
                      t = term_t_24;
                      t = set_config_0(t);
                      t = term_c_17;
                      return(t);
                    }
                    ATerm l_3 (ATerm t)
                    {
                      t = term_u_24;
                      return(t);
                    }
                    t = Option_3(t, j_3, k_3, l_3);
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
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym__2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      t = SSL_copy(not_null(o_45), not_null(p_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym_stderr_0))
    {
      ATerm z_45 = NULL,b_46 = NULL;
      ATerm v_24;
      v_24 = t;
      {
        ATerm a_46 = NULL;
        t = SSLgetAnnotations(not_null(x_45));
        {
          a_46 = t;
          if(((z_45 != NULL) && (z_45 != a_46)))
            _fail(a_46);
          else
            z_45 = a_46;
        }
      }
      t = v_24;
      {
        ATerm c_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(z_45));
        {
          c_46 = t;
          if(((b_46 != NULL) && (b_46 != c_46)))
            _fail(c_46);
          else
            b_46 = c_46;
        }
        t = not_null(b_46);
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
  ATerm m_46 = NULL;
  m_46 = t;
  l_46 :
  if(match_cons(m_46, sym_stdout_0))
    {
      ATerm q_46 = NULL,s_46 = NULL;
      ATerm w_24;
      w_24 = t;
      {
        ATerm r_46 = NULL;
        t = SSLgetAnnotations(not_null(m_46));
        {
          r_46 = t;
          if(((q_46 != NULL) && (q_46 != r_46)))
            _fail(r_46);
          else
            q_46 = r_46;
        }
      }
      t = w_24;
      {
        ATerm t_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(q_46));
        {
          t_46 = t;
          if(((s_46 != NULL) && (s_46 != t_46)))
            _fail(t_46);
          else
            s_46 = t_46;
        }
        t = not_null(s_46);
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
  ATerm m_47 = NULL,n_47 = NULL;
  m_47 = t;
  g_47 :
  if(match_cons(m_47, sym_FILE_1))
    {
      n_47 = ATgetArgument(m_47, 0);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_47 = NULL;
            ATerm q_47 = NULL;
            t = m_0(t);
            {
              q_47 = t;
              {
                if(((p_47 != NULL) && (p_47 != q_47)))
                  _fail(q_47);
                else
                  p_47 = q_47;
                {
                  ATerm z_24 = t;
                  int a_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(a_25);
                    }
                  else
                    {
                      t = z_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_47), not_null(p_47));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_47));
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm b_25 = t;
              int f_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_47 = NULL;
                  ATerm t_47 = NULL;
                  t = m_0(t);
                  {
                    t_47 = t;
                    {
                      if(((s_47 != NULL) && (s_47 != t_47)))
                        _fail(t_47);
                      else
                        s_47 = t_47;
                      {
                        ATerm i_25 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm j_25 = t;
                            int k_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(k_25);
                              }
                            else
                              {
                                t = j_25;
                                {
                                  ATerm l_25 = t;
                                  int n_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(n_25);
                                    }
                                  else
                                    {
                                      t = l_25;
                                      {
                                        ATerm y_47 = NULL;
                                        y_47 = t;
                                        if(((n_47 != NULL) && (n_47 != y_47)))
                                          _fail(y_47);
                                        else
                                          n_47 = y_47;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = i_25;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_47), not_null(s_47));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_47));
                  LocalPopChoice(f_25);
                }
              else
                {
                  t = b_25;
                  {
                    ATerm a_48 = NULL;
                    t = m_0(t);
                    {
                      a_48 = t;
                      if(((n_47 != NULL) && (n_47 != a_48)))
                        _fail(a_48);
                      else
                        n_47 = a_48;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_47));
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
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  j_48 :
  if(((ATgetType(k_48) == AT_LIST) && !(ATisEmpty(k_48))))
    {
      l_48 = ATgetFirst((ATermList) k_48);
      m_48 = (ATerm) ATgetNext((ATermList) k_48);
      t = not_null(m_48);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_cons(t_48, sym__2))
    {
      u_48 = ATgetArgument(t_48, 0);
      v_48 = ATgetArgument(t_48, 1);
      {
        ATerm o_25;
        o_25 = t;
        {
          ATerm d_49 = NULL;
          ATerm e_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(v_48));
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                t = (ATerm) ATempty;
              }
            {
              e_49 = t;
              if(((d_49 != NULL) && (d_49 != e_49)))
                _fail(e_49);
              else
                d_49 = e_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_48), not_null(v_48), not_null(d_49));
            t = table_put_0(t);
          }
        }
        t = o_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_88 (ATerm))
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  ATerm r_25;
  r_25 = t;
  {
    ATerm q_49 = NULL;
    ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
    t = u_88(t);
    {
      q_49 = t;
      {
        if(((p_49 != NULL) && (p_49 != q_49)))
          _fail(q_49);
        else
          p_49 = q_49;
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_49), term_f_16);
              t = table_get_0(t);
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            w_49 = t;
            m_49 :
            if(((ATgetType(w_49) == AT_LIST) && !(ATisEmpty(w_49))))
              {
                x_49 = ATgetFirst((ATermList) w_49);
                y_49 = (ATerm) ATgetNext((ATermList) w_49);
                {
                  if(((o_49 != NULL) && (o_49 != x_49)))
                    _fail(x_49);
                  else
                    o_49 = x_49;
                  {
                    if(((n_49 != NULL) && (n_49 != y_49)))
                      _fail(y_49);
                    else
                      n_49 = y_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_49), term_f_16, not_null(n_49));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_49);
                          {
                            ATerm q_3 (ATerm t)
                            {
                              ATerm z_49 = NULL;
                              z_49 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_49), not_null(z_49));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, q_3);
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
  t = r_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  t = SSL_remove(not_null(f_50));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_70(t);
      t = a_71(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        t = a_71(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_88 (ATerm))
{
  ATerm k_50 = NULL;
  ATerm k_26;
  k_26 = t;
  {
    ATerm l_50 = NULL;
    ATerm r_50 = NULL;
    t = t_88(t);
    {
      l_50 = t;
      {
        if(((k_50 != NULL) && (k_50 != l_50)))
          _fail(l_50);
        else
          k_50 = l_50;
        {
          ATerm s_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), term_f_16);
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_26);
              }
            else
              {
                t = l_26;
                t = (ATerm) ATempty;
              }
            {
              s_50 = t;
              if(((r_50 != NULL) && (r_50 != s_50)))
                _fail(s_50);
              else
                r_50 = s_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_50), term_f_16, (ATerm) ATinsert(CheckATermList(not_null(r_50)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm y_97 (ATerm))
{
  ATerm i_51 = NULL,j_51 = NULL;
  ATerm r_3 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  t = begin_scope_1(t, r_3);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm n_26;
      n_26 = t;
      {
        ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_26;
            t = table_get_0(t);
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          l_51 = t;
          a_51 :
          if(((ATgetType(l_51) == AT_LIST) && !(ATisEmpty(l_51))))
            {
              m_51 = ATgetFirst((ATermList) l_51);
              n_51 = (ATerm) ATgetNext((ATermList) l_51);
              {
                if(((j_51 != NULL) && (j_51 != m_51)))
                  _fail(m_51);
                else
                  j_51 = m_51;
                {
                  if(((i_51 != NULL) && (i_51 != n_51)))
                    _fail(n_51);
                  else
                    i_51 = n_51;
                  {
                    t = not_null(j_51);
                    {
                      ATerm w_3 (ATerm t)
                      {
                        ATerm r_26 = t;
                        int s_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(s_26);
                          }
                        else
                          {
                            t = r_26;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, w_3);
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
      t = n_26;
      {
        ATerm x_3 (ATerm t)
        {
          t = term_m_17;
          return(t);
        }
        t = end_scope_1(t, x_3);
      }
      return(t);
    }
    t = restore_always_2(t, y_97, u_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm z_97 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_51 = NULL;
        ATerm r_51 = NULL;
        t = term_t_17;
        {
          t = get_config_0(t);
          {
            r_51 = t;
            if(((q_51 != NULL) && (q_51 != r_51)))
              _fail(r_51);
            else
              q_51 = r_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_51));
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        t = term_t_10;
      }
    {
      t = z_97(t);
      {
        ATerm d_4 (ATerm t)
        {
          ATerm v_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_w_7;
              t = get_config_0(t);
              LocalPopChoice(a_27);
            }
          else
            {
              t = v_26;
              t = term_b_27;
            }
          return(t);
        }
        t = copy_to_1(t, d_4);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, c_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm u_51 = NULL;
    u_51 = t;
    t_51 :
    if(!(match_string(u_51, "-v")))
      {
        if(!(match_string(u_51, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_d_27;
    t = set_config_0(t);
    t = term_e_27;
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_f_27;
    return(t);
  }
  t = Option_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm x_51 = NULL;
    x_51 = t;
    v_51 :
    if(!(match_string(x_51, "-k")))
      {
        if(!(match_string(x_51, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm g_27;
    g_27 = t;
    {
      ATerm y_51 = NULL;
      ATerm z_51 = NULL;
      t = string_to_int_0(t);
      {
        z_51 = t;
        if(((y_51 != NULL) && (y_51 != z_51)))
          _fail(z_51);
        else
          y_51 = z_51;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_10, not_null(y_51));
        t = set_config_0(t);
      }
    }
    t = g_27;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_j_27;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_52 = NULL;
  c_52 = t;
  t = SSL_string_to_int(not_null(c_52));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        ATerm k_52 = NULL;
        k_52 = t;
        f_52 :
        if(!(match_string(k_52, "-S")))
          {
            if(!(match_string(k_52, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_p_27;
        t = set_config_0(t);
        t = term_r_27;
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_u_27;
        return(t);
      }
      t = Option_3(t, k_4, l_4, n_4);
      LocalPopChoice(n_27);
    }
  else
    {
      t = k_27;
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              ATerm l_52 = NULL;
              l_52 = t;
              g_52 :
              if(!(match_string(l_52, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              ATerm o_52 = NULL;
              ATerm y_27;
              y_27 = t;
              {
                ATerm m_52 = NULL;
                ATerm n_52 = NULL;
                t = string_to_int_0(t);
                {
                  n_52 = t;
                  if(((m_52 != NULL) && (m_52 != n_52)))
                    _fail(n_52);
                  else
                    m_52 = n_52;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(m_52));
                  t = set_config_0(t);
                }
              }
              t = y_27;
              {
                ATerm p_52 = NULL;
                p_52 = t;
                if(((o_52 != NULL) && (o_52 != p_52)))
                  _fail(p_52);
                else
                  o_52 = p_52;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_52));
              }
              return(t);
            }
            ATerm c_5 (ATerm t)
            {
              t = term_z_27;
              return(t);
            }
            t = ArgOption_3(t, a_5, b_5, c_5);
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            {
              ATerm d_5 (ATerm t)
              {
                ATerm q_52 = NULL;
                q_52 = t;
                j_52 :
                if(!(match_string(q_52, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_5 (ATerm t)
              {
                t = term_c_28;
                t = set_config_0(t);
                t = term_d_28;
                return(t);
              }
              ATerm f_5 (ATerm t)
              {
                t = term_e_28;
                return(t);
              }
              t = Option_3(t, d_5, e_5, f_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm w_52 = NULL;
    w_52 = t;
    t_52 :
    if(!(match_string(w_52, "-o")))
      {
        if(!(match_string(w_52, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm z_52 = NULL;
    ATerm l_28;
    l_28 = t;
    {
      ATerm x_52 = NULL;
      ATerm y_52 = NULL;
      y_52 = t;
      if(((x_52 != NULL) && (x_52 != y_52)))
        _fail(y_52);
      else
        x_52 = y_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(x_52));
        t = set_config_0(t);
      }
    }
    t = l_28;
    {
      ATerm a_53 = NULL;
      a_53 = t;
      if(((z_52 != NULL) && (z_52 != a_53)))
        _fail(a_53);
      else
        z_52 = a_53;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_52));
    }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  t = ArgOption_3(t, g_5, h_5, m_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm n_5 (ATerm t)
        {
          ATerm e_53 = NULL;
          e_53 = t;
          d_53 :
          if(!(match_string(e_53, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_b_29;
          t = set_config_0(t);
          t = term_c_29;
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_d_29;
          return(t);
        }
        t = Option_3(t, n_5, o_5, p_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  k_53 = t;
  i_53 :
  if(match_string(k_53, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(k_53) == AT_LIST) && !(ATisEmpty(k_53))))
        {
          l_53 = ATgetFirst((ATermList) k_53);
          m_53 = (ATerm) ATgetNext((ATermList) k_53);
          j_53 :
          if(((ATgetType(m_53) == AT_LIST) && !(ATisEmpty(m_53))))
            {
              n_53 = ATgetFirst((ATermList) m_53);
              o_53 = (ATerm) ATgetNext((ATermList) m_53);
              {
                ATerm c_54 = NULL;
                ATerm e_29;
                e_29 = t;
                {
                  t = not_null(l_53);
                  t = j_0(t);
                }
                t = e_29;
                {
                  ATerm d_54 = NULL;
                  t = not_null(n_53);
                  {
                    t = k_0(t);
                    {
                      d_54 = t;
                      if(((c_54 != NULL) && (c_54 != d_54)))
                        _fail(d_54);
                      else
                        c_54 = d_54;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_53)), not_null(c_54));
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
  ATerm q_5 (ATerm t)
  {
    ATerm l_54 = NULL;
    l_54 = t;
    i_54 :
    if(!(match_string(l_54, "-i")))
      {
        if(!(match_string(l_54, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm o_54 = NULL;
    ATerm f_29;
    f_29 = t;
    {
      ATerm m_54 = NULL;
      ATerm n_54 = NULL;
      n_54 = t;
      if(((m_54 != NULL) && (m_54 != n_54)))
        _fail(n_54);
      else
        m_54 = n_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_17, not_null(m_54));
        t = set_config_0(t);
      }
    }
    t = f_29;
    {
      ATerm p_54 = NULL;
      p_54 = t;
      if(((o_54 != NULL) && (o_54 != p_54)))
        _fail(p_54);
      else
        o_54 = p_54;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_54));
    }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_g_29;
    return(t);
  }
  t = ArgOption_3(t, q_5, s_5, v_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_55 = NULL;
  ATerm l_29;
  l_29 = t;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm k_55 = NULL,l_55 = NULL;
      k_55 = t;
      g_55 :
      if(match_cons(k_55, sym_Program_1))
        {
          l_55 = ATgetArgument(k_55, 0);
          if(((j_55 != NULL) && (j_55 != l_55)))
            _fail(l_55);
          else
            j_55 = l_55;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, w_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_29), not_null(j_55)), term_m_29));
      {
        t = printnl_0(t);
        {
          t = term_z_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATempty, term_o_29));
  {
    t = printnl_0(t);
    {
      t = term_z_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  t = SSL_TicksToSeconds(not_null(p_55));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
  d_56 = t;
  c_56 :
  if(match_cons(d_56, sym__2))
    {
      e_56 = ATgetArgument(d_56, 0);
      f_56 = ATgetArgument(d_56, 1);
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_56), not_null(f_56));
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            t = SSL_addr(not_null(e_56), not_null(f_56));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_84(t);
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
        a_57 = t;
        z_56 :
        if(((ATgetType(a_57) == AT_LIST) && !(ATisEmpty(a_57))))
          {
            b_57 = ATgetFirst((ATermList) a_57);
            c_57 = (ATerm) ATgetNext((ATermList) a_57);
            {
              ATerm f_57 = NULL;
              ATerm g_57 = NULL;
              t = not_null(c_57);
              {
                t = foldr_2(t, u_84, v_84);
                {
                  g_57 = t;
                  if(((f_57 != NULL) && (f_57 != g_57)))
                    _fail(g_57);
                  else
                    f_57 = g_57;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_57), not_null(f_57));
                t = v_84(t);
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
ATerm crush_2 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  ATerm b_58 = NULL;
  ATerm i_58 = NULL;
  b_58 = t;
  {
    ATerm l_58 = NULL;
    ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
    t = not_null(b_58);
    {
      l_58 = t;
      {
        t = SSL_explode_term(not_null(l_58));
        {
          n_58 = t;
          y_57 :
          if(match_cons(n_58, sym__2))
            {
              o_58 = ATgetArgument(n_58, 0);
              p_58 = ATgetArgument(n_58, 1);
              if(((i_58 != NULL) && (i_58 != p_58)))
                _fail(p_58);
              else
                i_58 = p_58;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_58);
      t = foldr_2(t, s_83, t_83);
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
    ATerm d_6 (ATerm t)
    {
      t = term_o_27;
      return(t);
    }
    t = crush_2(t, d_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym__2))
    {
      w_58 = ATgetArgument(v_58, 0);
      x_58 = ATgetArgument(v_58, 1);
      {
        ATerm t_29;
        t_29 = t;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_58), not_null(x_58));
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = SSL_gtr(not_null(w_58), not_null(x_58));
            }
        }
        t = t_29;
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
  ATerm d_59 = NULL;
  ATerm z_29 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
      e_59 = t;
      c_59 :
      if(match_cons(e_59, sym__2))
        {
          f_59 = ATgetArgument(e_59, 0);
          g_59 = ATgetArgument(e_59, 1);
          {
            if(((d_59 != NULL) && (d_59 != f_59)))
              _fail(f_59);
            else
              d_59 = f_59;
            if(((d_59 != NULL) && (d_59 != g_59)))
              _fail(g_59);
            else
              d_59 = g_59;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_30);
    }
  else
    {
      t = z_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_91 (ATerm))
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30;
      n_30 = t;
      {
        ATerm j_59 = NULL;
        ATerm k_59 = NULL;
        t = term_l_11;
        {
          t = get_config_0(t);
          {
            k_59 = t;
            if(((j_59 != NULL) && (j_59 != k_59)))
              _fail(k_59);
            else
              j_59 = k_59;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_59), term_z_10);
          t = geq_0(t);
        }
      }
      t = n_30;
      t = m_91(t);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm o_59 = NULL,q_59 = NULL;
    ATerm o_30;
    o_30 = t;
    {
      ATerm p_59 = NULL;
      t = run_time_0(t);
      {
        p_59 = t;
        if(((o_59 != NULL) && (o_59 != p_59)))
          _fail(p_59);
        else
          o_59 = p_59;
      }
    }
    t = o_30;
    {
      ATerm r_59 = NULL;
      t = term_p_30;
      {
        t = get_config_0(t);
        {
          r_59 = t;
          if(((q_59 != NULL) && (q_59 != r_59)))
            _fail(r_59);
          else
            q_59 = r_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_30), not_null(o_59)), term_q_30), not_null(q_59)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_6);
  {
    t = term_o_27;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_60 = NULL;
  a_60 = t;
  z_59 :
  if(match_cons(a_60, sym_Version_0))
    {
      ATerm c_60 = NULL,e_60 = NULL;
      ATerm z_30;
      z_30 = t;
      {
        ATerm d_60 = NULL;
        t = SSLgetAnnotations(not_null(a_60));
        {
          d_60 = t;
          if(((c_60 != NULL) && (c_60 != d_60)))
            _fail(d_60);
          else
            c_60 = d_60;
        }
      }
      t = z_30;
      {
        ATerm f_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_60));
        {
          f_60 = t;
          if(((e_60 != NULL) && (e_60 != f_60)))
            _fail(f_60);
          else
            e_60 = f_60;
        }
        t = not_null(e_60);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_90 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, m_6);
  t = g_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_60 = NULL;
  k_60 = t;
  t = SSL_table_create(not_null(k_60));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_60 = NULL;
  o_60 = t;
  {
    ATerm r_31;
    r_31 = t;
    {
      t = term_u_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_31, term_v_31, not_null(o_60));
          t = table_put_0(t);
        }
      }
    }
    t = r_31;
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
ATerm exit_0 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  t = SSL_exit(not_null(w_60));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
  a_61 = t;
  z_60 :
  if(((ATgetType(a_61) == AT_LIST) && ATisEmpty(a_61)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_61) == AT_LIST) && !(ATisEmpty(a_61))))
        {
          b_61 = ATgetFirst((ATermList) a_61);
          c_61 = (ATerm) ATgetNext((ATermList) a_61);
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
  ATerm w_31;
  w_31 = t;
  {
    ATerm f_61 = NULL;
    ATerm i_61 = NULL;
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        {
          ATerm g_61 = NULL;
          ATerm h_61 = NULL;
          h_61 = t;
          if(((g_61 != NULL) && (g_61 != h_61)))
            _fail(h_61);
          else
            g_61 = h_61;
          t = (ATerm) ATinsert(ATempty, not_null(g_61));
        }
      }
    {
      i_61 = t;
      if(((f_61 != NULL) && (f_61 != i_61)))
        _fail(i_61);
      else
        f_61 = i_61;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_27, not_null(f_61));
      t = printnl_0(t);
    }
  }
  t = w_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
  t_61 = t;
  q_61 :
  if(((ATgetType(t_61) == AT_LIST) && !(ATisEmpty(t_61))))
    {
      r_61 = ATgetFirst((ATermList) t_61);
      s_61 = (ATerm) ATgetNext((ATermList) t_61);
      {
        ATerm w_61 = NULL;
        t = not_null(s_61);
        {
          ATerm z_31;
          z_31 = t;
          {
            ATerm x_61 = NULL,z_61 = NULL,b_62 = NULL;
            ATerm a_32;
            a_32 = t;
            {
              ATerm y_61 = NULL;
              t = i_0(t);
              {
                y_61 = t;
                if(((x_61 != NULL) && (x_61 != y_61)))
                  _fail(y_61);
                else
                  x_61 = y_61;
              }
            }
            t = a_32;
            {
              ATerm a_62 = NULL;
              t = not_null(r_61);
              {
                t = h_0(t);
                {
                  a_62 = t;
                  if(((z_61 != NULL) && (z_61 != a_62)))
                    _fail(a_62);
                  else
                    z_61 = a_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_61)), not_null(z_61));
                {
                  b_62 = t;
                  if(((w_61 != NULL) && (w_61 != b_62)))
                    _fail(b_62);
                  else
                    w_61 = b_62;
                }
              }
            }
          }
          t = z_31;
          {
            ATerm o_6 (ATerm t)
            {
              t = not_null(w_61);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_61) == AT_LIST) && ATisEmpty(t_61)))
        {
          {
            t = term_c_17;
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
  ATerm p_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm m_62 = NULL,n_62 = NULL;
  m_62 = t;
  l_62 :
  if(match_cons(m_62, sym_Program_1))
    {
      n_62 = ATgetArgument(m_62, 0);
      {
        ATerm q_62 = NULL,s_62 = NULL;
        ATerm r_62 = NULL;
        t = SSLgetAnnotations(not_null(m_62));
        {
          r_62 = t;
          if(((q_62 != NULL) && (q_62 != r_62)))
            _fail(r_62);
          else
            q_62 = r_62;
        }
        {
          t = not_null(n_62);
          {
            ATerm u_62 = NULL;
            t = u_64(t);
            {
              s_62 = t;
              {
                ATerm v_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_62)), not_null(q_62));
                {
                  v_62 = t;
                  if(((u_62 != NULL) && (u_62 != v_62)))
                    _fail(v_62);
                  else
                    u_62 = v_62;
                }
                t = not_null(u_62);
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
  ATerm d_63 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_63 = NULL;
      t = term_p_30;
      {
        t = get_config_0(t);
        {
          e_63 = t;
          if(((d_63 != NULL) && (d_63 != e_63)))
            _fail(e_63);
          else
            d_63 = e_63;
        }
      }
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm q_6 (ATerm t)
        {
          ATerm r_6 (ATerm t)
          {
            ATerm f_63 = NULL;
            f_63 = t;
            if(((d_63 != NULL) && (d_63 != f_63)))
              _fail(f_63);
            else
              d_63 = f_63;
            return(t);
          }
          t = Program_1(t, r_6);
          return(t);
        }
        t = fetch_1(t, q_6);
      }
    }
  {
    t = term_d_32;
    {
      t = echo_0(t);
      {
        t = term_g_32;
        {
          t = table_get_0(t);
          {
            ATerm s_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, s_6);
            {
              ATerm t_6 (ATerm t)
              {
                ATerm g_63 = NULL;
                ATerm h_63 = NULL;
                h_63 = t;
                if(((g_63 != NULL) && (g_63 != h_63)))
                  _fail(h_63);
                else
                  g_63 = h_63;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_63)), term_h_32);
                  t = echo_0(t);
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
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  m_63 :
  if(match_cons(n_63, sym__2))
    {
      o_63 = ATgetArgument(n_63, 0);
      p_63 = ATgetArgument(n_63, 1);
      {
        ATerm i_32;
        i_32 = t;
        t = SSL_printnl(not_null(o_63), not_null(p_63));
        t = i_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm n_32;
  n_32 = t;
  {
    ATerm u_63 = NULL;
    ATerm v_63 = NULL;
    v_63 = t;
    if(((u_63 != NULL) && (u_63 != v_63)))
      _fail(v_63);
    else
      u_63 = v_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATempty, not_null(u_63)));
      t = printnl_0(t);
    }
  }
  t = n_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm o_32;
  o_32 = t;
  {
    t = f_89(t);
    t = debug_0(t);
  }
  t = o_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL;
  c_64 = t;
  b_64 :
  if(match_cons(c_64, sym_Undefined_1))
    {
      d_64 = ATgetArgument(c_64, 0);
      {
        ATerm g_64 = NULL,i_64 = NULL;
        ATerm h_64 = NULL;
        t = SSLgetAnnotations(not_null(c_64));
        {
          h_64 = t;
          if(((g_64 != NULL) && (g_64 != h_64)))
            _fail(h_64);
          else
            g_64 = h_64;
        }
        {
          t = not_null(d_64);
          {
            ATerm k_64 = NULL;
            t = v_64(t);
            {
              i_64 = t;
              {
                ATerm l_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_64)), not_null(g_64));
                {
                  l_64 = t;
                  if(((k_64 != NULL) && (k_64 != l_64)))
                    _fail(l_64);
                  else
                    k_64 = l_64;
                }
                t = not_null(k_64);
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
ATerm fetch_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm q_64 (ATerm t)
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_78, _id);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = Cons_2(t, _id, q_64);
      }
    return(t);
  }
  t = q_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_92 (ATerm))
{
  t = fetch_1(t, p_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym_Help_0))
    {
      ATerm z_64 = NULL,b_65 = NULL;
      ATerm r_32;
      r_32 = t;
      {
        ATerm a_65 = NULL;
        t = SSLgetAnnotations(not_null(x_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
      }
      t = r_32;
      {
        ATerm c_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_64));
        {
          c_65 = t;
          if(((b_65 != NULL) && (b_65 != c_65)))
            _fail(c_65);
          else
            b_65 = c_65;
        }
        t = not_null(b_65);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_70 (ATerm))
{
  ATerm s_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_70(t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = s_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
  k_65 = t;
  i_65 :
  if(match_cons(k_65, sym__2))
    {
      l_65 = ATgetArgument(k_65, 0);
      m_65 = ATgetArgument(k_65, 1);
      t = SSL_table_get(not_null(l_65), not_null(m_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  t_65 = t;
  s_65 :
  if(match_cons(t_65, sym__3))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      w_65 = ATgetArgument(t_65, 2);
      {
        ATerm y_32;
        y_32 = t;
        {
          ATerm a_66 = NULL;
          ATerm b_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_65), not_null(v_65));
          {
            ATerm a_33 = t;
            int b_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_33);
              }
            else
              {
                t = a_33;
                t = (ATerm) ATempty;
              }
            {
              b_66 = t;
              if(((a_66 != NULL) && (a_66 != b_66)))
                _fail(b_66);
              else
                a_66 = b_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_65), not_null(v_65), (ATerm) ATinsert(CheckATermList(not_null(a_66)), not_null(w_65)));
            t = table_put_0(t);
          }
        }
        t = y_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_93 (ATerm))
{
  ATerm f_66 = NULL;
  ATerm g_66 = NULL;
  t = term_c_17;
  {
    t = u_93(t);
    {
      g_66 = t;
      if(((f_66 != NULL) && (f_66 != g_66)))
        _fail(g_66);
      else
        f_66 = g_66;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_32, term_f_32, not_null(f_66));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
  m_66 = t;
  l_66 :
  if(match_string(m_66, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_66) == AT_LIST) && !(ATisEmpty(m_66))))
        {
          n_66 = ATgetFirst((ATermList) m_66);
          o_66 = (ATerm) ATgetNext((ATermList) m_66);
          {
            ATerm r_66 = NULL;
            ATerm c_33;
            c_33 = t;
            {
              t = not_null(n_66);
              t = a_0(t);
            }
            t = c_33;
            {
              ATerm s_66 = NULL;
              t = term_c_17;
              {
                t = d_0(t);
                {
                  s_66 = t;
                  if(((r_66 != NULL) && (r_66 != s_66)))
                    _fail(s_66);
                  else
                    r_66 = s_66;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_66)), not_null(r_66));
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
  ATerm u_6 (ATerm t)
  {
    ATerm x_66 = NULL;
    x_66 = t;
    w_66 :
    if(!(match_string(x_66, "--help")))
      {
        if(!(match_string(x_66, "-h")))
          {
            if(!(match_string(x_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_i_33;
    {
      t = set_config_0(t);
      t = term_j_33;
    }
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_k_33;
    return(t);
  }
  t = Option_3(t, u_6, z_6, a_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  z_66 :
  if(((ATgetType(a_67) == AT_LIST) && !(ATisEmpty(a_67))))
    {
      b_67 = ATgetFirst((ATermList) a_67);
      c_67 = (ATerm) ATgetNext((ATermList) a_67);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_67)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_67)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
  m_67 = t;
  l_67 :
  if(((ATgetType(m_67) == AT_LIST) && !(ATisEmpty(m_67))))
    {
      n_67 = ATgetFirst((ATermList) m_67);
      o_67 = (ATerm) ATgetNext((ATermList) m_67);
      {
        ATerm s_67 = NULL,u_67 = NULL;
        ATerm t_67 = NULL;
        t = SSLgetAnnotations(not_null(m_67));
        {
          t_67 = t;
          if(((s_67 != NULL) && (s_67 != t_67)))
            _fail(t_67);
          else
            s_67 = t_67;
        }
        {
          t = not_null(n_67);
          {
            ATerm w_67 = NULL;
            t = s_59(t);
            {
              u_67 = t;
              {
                t = not_null(o_67);
                {
                  ATerm y_67 = NULL;
                  t = t_59(t);
                  {
                    w_67 = t;
                    {
                      ATerm z_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_67)), not_null(u_67)), not_null(s_67));
                      {
                        z_67 = t;
                        if(((y_67 != NULL) && (y_67 != z_67)))
                          _fail(z_67);
                        else
                          y_67 = z_67;
                      }
                      t = not_null(y_67);
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
  ATerm j_68 = NULL;
  j_68 = t;
  i_68 :
  if(((ATgetType(j_68) == AT_LIST) && ATisEmpty(j_68)))
    {
      {
        ATerm l_68 = NULL,n_68 = NULL;
        ATerm m_33;
        m_33 = t;
        {
          ATerm m_68 = NULL;
          t = SSLgetAnnotations(not_null(j_68));
          {
            m_68 = t;
            if(((l_68 != NULL) && (l_68 != m_68)))
              _fail(m_68);
            else
              l_68 = m_68;
          }
        }
        t = m_33;
        {
          ATerm o_68 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_68));
          {
            o_68 = t;
            if(((n_68 != NULL) && (n_68 != o_68)))
              _fail(o_68);
            else
              n_68 = o_68;
          }
          t = not_null(n_68);
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
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
  u_68 = t;
  t_68 :
  if(match_cons(u_68, sym__2))
    {
      v_68 = ATgetArgument(u_68, 0);
      w_68 = ATgetArgument(u_68, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_10, not_null(v_68), not_null(w_68));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm u_33;
  u_33 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_33;
        t = s_93(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
        }
      }
  }
  t = u_33;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm e_69 = NULL;
      ATerm y_33;
      y_33 = t;
      {
        ATerm c_69 = NULL;
        ATerm d_69 = NULL;
        d_69 = t;
        if(((c_69 != NULL) && (c_69 != d_69)))
          _fail(d_69);
        else
          c_69 = d_69;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_30, not_null(c_69));
          t = set_config_0(t);
        }
      }
      t = y_33;
      {
        ATerm f_69 = NULL;
        f_69 = t;
        if(((e_69 != NULL) && (e_69 != f_69)))
          _fail(f_69);
        else
          e_69 = f_69;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_69));
      }
      return(t);
    }
    ATerm c_7 (ATerm t)
    {
      ATerm c_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
              {
                t = s_93(t);
                t = Cons_2(t, _id, c_7);
              }
            }
          LocalPopChoice(d_34);
        }
      else
        {
          t = c_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_7, c_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  ATerm g_34;
  g_34 = t;
  {
    ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL;
    o_69 = t;
    k_69 :
    if(match_cons(o_69, sym__3))
      {
        p_69 = ATgetArgument(o_69, 0);
        q_69 = ATgetArgument(o_69, 1);
        r_69 = ATgetArgument(o_69, 2);
        {
          if(((l_69 != NULL) && (l_69 != p_69)))
            _fail(p_69);
          else
            l_69 = p_69;
          {
            if(((m_69 != NULL) && (m_69 != q_69)))
              _fail(q_69);
            else
              m_69 = q_69;
            {
              if(((n_69 != NULL) && (n_69 != r_69)))
                _fail(r_69);
              else
                n_69 = r_69;
              t = SSL_table_put(not_null(l_69), not_null(m_69), not_null(n_69));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_93 (ATerm))
{
  ATerm u_69 = NULL;
  ATerm i_34;
  i_34 = t;
  {
    t = term_j_34;
    t = table_put_0(t);
  }
  t = i_34;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_93(t);
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_7);
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_34;
          y_34 = t;
          {
            ATerm z_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_33;
                t = get_config_0(t);
                LocalPopChoice(a_35);
              }
            else
              {
                t = z_34;
                t = fetch_1(t, Help_0);
              }
          }
          t = y_34;
          {
            t = system_usage_0(t);
            {
              t = term_o_27;
              t = exit_0(t);
            }
          }
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm b_35 = t;
            int i_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_7 (ATerm t)
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm v_69 = NULL;
                    v_69 = t;
                    if(((u_69 != NULL) && (u_69 != v_69)))
                      _fail(v_69);
                    else
                      u_69 = v_69;
                    return(t);
                  }
                  t = Undefined_1(t, j_7);
                  return(t);
                }
                t = fetch_1(t, i_7);
                {
                  ATerm k_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_69)), term_k_35);
                    return(t);
                  }
                  t = say_1(t, k_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_10;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(i_35);
              }
            else
              {
                t = b_35;
                {
                }
              }
          }
        }
      {
        ATerm l_35;
        l_35 = t;
        {
          t = term_e_32;
          t = table_destroy_0(t);
        }
        t = l_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  t = parse_options_1(t, m_90);
  {
    t = store_options_0(t);
    {
      t = o_90(t);
      {
        ATerm m_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_90);
            LocalPopChoice(o_35);
          }
        else
          {
            t = m_35;
            {
              ATerm p_35 = t;
              int r_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_90(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_35);
                }
              else
                {
                  t = p_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm))
{
  t = option_wrap_4(t, q_90, default_usage_0, _id, r_90);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm d_98 (ATerm), ATerm e_98 (ATerm))
{
  ATerm l_7 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = xtc_io_1(t, e_98);
    return(t);
  }
  t = option_wrap_2(t, l_7, m_7);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm g_98 (ATerm), ATerm h_98 (ATerm))
{
  t = xtc_io_wrap_2(t, g_98, h_98);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  ATerm n_7 (ATerm t)
  {
    ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
    t = pack_stratego_modules_0(t);
    {
      b_70 = t;
      y_69 :
      if(match_cons(b_70, sym__2))
        {
          c_70 = ATgetArgument(b_70, 0);
          d_70 = ATgetArgument(b_70, 1);
          {
            if(((z_69 != NULL) && (z_69 != c_70)))
              _fail(c_70);
            else
              z_69 = c_70;
            {
              if(((a_70 != NULL) && (a_70 != d_70)))
                _fail(d_70);
              else
                a_70 = d_70;
              {
                ATerm b_36 = t;
                int f_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_s_24;
                    {
                      t = get_config_0(t);
                      {
                        t = not_null(z_69);
                        {
                          ATerm p_7 (ATerm t)
                          {
                            t = get_filename_0(t);
                            t = basename_1(t, _id);
                            return(t);
                          }
                          t = map_1(t, p_7);
                          t = write_to_text_0(t);
                        }
                      }
                    }
                    LocalPopChoice(f_36);
                  }
                else
                  {
                    t = b_36;
                    {
                      t = not_null(z_69);
                      {
                        t = create_dep_file_0(t);
                        {
                          t = not_null(a_70);
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
  t = xtc_iowrap_2(t, pack_stratego_options_0, n_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
