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
ATerm term_y_33;
ATerm term_f_33;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_b_31;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_c_26;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_s_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_w_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_u_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_d_17;
ATerm term_w_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_v_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_q_12;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_g_9;
void init_constant_terms (void)
{
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_e_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_m_14);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_y_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_j_24, term_p_17);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_w_16);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_p_17);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_u_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_p_17);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_p_17);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_m_31, term_n_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_p_17);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__3, term_m_31, term_n_31, (ATerm) ATempty);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm at_suffix_rev_1 (ATerm, ATerm h_79 (ATerm));
ATerm get_filename_0 (ATerm);
ATerm map_1 (ATerm, ATerm k_78 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm s_65 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm s_58 (ATerm), ATerm t_58 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm v_80 (ATerm));
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm w_98 (ATerm), ATerm x_98 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm x_94 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm r_91 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm u_71 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm q_91 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm s_91 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm d_84 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm b_95 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm n_98 (ATerm));
ATerm assert_1 (ATerm, ATerm x_88 (ATerm));
ATerm obsolete_1 (ATerm, ATerm l_89 (ATerm));
ATerm open_file_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm m_65 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm p_98 (ATerm), ATerm q_98 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_89 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm p_91 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm v_78 (ATerm));
ATerm find_module_1 (ATerm, ATerm x_70 (ATerm));
ATerm get_module_1 (ATerm, ATerm w_70 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
ATerm diff_1 (ATerm, ATerm z_83 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm zip_1 (ATerm, ATerm q_80 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm for_3 (ATerm, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm));
ATerm filter_1 (ATerm, ATerm x_85 (ATerm));
ATerm pack_stratego_modules_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_78 (ATerm));
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
ATerm restore_always_2 (ATerm, ATerm n_71 (ATerm), ATerm o_71 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_88 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm z_97 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm a_98 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm n_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_93 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_93 (ATerm));
ATerm Program_1 (ATerm, ATerm d_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm f_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_70 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_60 (ATerm), ATerm c_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm r_90 (ATerm), ATerm s_90 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm e_98 (ATerm), ATerm f_98 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm));
ATerm pack_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
  i_1 = t;
  y_0 :
  if(match_cons(i_1, sym__2))
    {
      j_1 = ATgetArgument(i_1, 0);
      k_1 = ATgetArgument(i_1, 1);
      t = SSL_WriteToBinaryFile(not_null(j_1), not_null(k_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm w_1 = NULL;
  ATerm l_2 = NULL;
  w_1 = t;
  {
    ATerm m_2 = NULL;
    t = xtc_new_file_0(t);
    {
      m_2 = t;
      {
        if(((l_2 != NULL) && (l_2 != m_2)))
          _fail(m_2);
        else
          l_2 = m_2;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_2), not_null(w_1));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(l_2);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_2));
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  e_3 :
  if(match_cons(f_3, sym__2))
    {
      g_3 = ATgetArgument(f_3, 0);
      h_3 = ATgetArgument(f_3, 1);
      {
        t = not_null(h_3);
        {
          ATerm n_3 = t;
          int t_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(t_5);
            }
          else
            {
              t = n_3;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm a_9 = t;
                  int e_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(e_9);
                    }
                  else
                    {
                      t = a_9;
                      {
                        ATerm k_3 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm l_3 = NULL;
                          l_3 = t;
                          if(((k_3 != NULL) && (k_3 != l_3)))
                            _fail(l_3);
                          else
                            k_3 = l_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(k_3)), not_null(g_3));
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
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym__2))
    {
      s_3 = ATgetArgument(r_3, 0);
      t_3 = ATgetArgument(r_3, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_3)), term_g_9), not_null(s_3));
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
  ATerm e_4 = NULL;
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  e_4 = t;
  {
    ATerm k_4 = NULL;
    t = term_j_9;
    {
      ATerm l_4 = NULL;
      t = get_config_0(t);
      {
        k_4 = t;
        {
          if(((g_4 != NULL) && (g_4 != k_4)))
            _fail(k_4);
          else
            g_4 = k_4;
          {
            ATerm m_4 = NULL,o_4 = NULL;
            ATerm k_9 = t;
            int l_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_m_9;
                t = get_config_0(t);
                ;
                LocalPopChoice(l_9);
              }
            else
              {
                t = k_9;
                {
                  ATerm n_9 = t;
                  if((PushChoice() == 0))
                    {
                      t = term_o_9;
                      t = get_config_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = n_9;
                    }
                }
              }
            {
              l_4 = t;
              {
                if(((i_4 != NULL) && (i_4 != l_4)))
                  _fail(l_4);
                else
                  i_4 = l_4;
                {
                  ATerm n_4 = NULL;
                  n_4 = t;
                  if(((m_4 != NULL) && (m_4 != n_4)))
                    _fail(n_4);
                  else
                    m_4 = n_4;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), term_z_9);
                    {
                      ATerm p_4 = NULL;
                      t = add_extension_0(t);
                      {
                        o_4 = t;
                        {
                          if(((h_4 != NULL) && (h_4 != o_4)))
                            _fail(o_4);
                          else
                            h_4 = o_4;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), term_a_10);
                            {
                              ATerm q_4 = NULL;
                              t = open_file_0(t);
                              {
                                p_4 = t;
                                {
                                  if(((j_4 != NULL) && (j_4 != p_4)))
                                    _fail(p_4);
                                  else
                                    j_4 = p_4;
                                  {
                                    ATerm r_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(CheckATermList(not_null(e_4)), term_c_10));
                                    {
                                      t = separate_by_0(t);
                                      {
                                        r_4 = t;
                                        if(((q_4 != NULL) && (q_4 != r_4)))
                                          _fail(r_4);
                                        else
                                          q_4 = r_4;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_4), (ATerm) ATinsert(CheckATermList(not_null(q_4)), not_null(i_4)));
                                      {
                                        t = printnl_0(t);
                                        {
                                          t = not_null(j_4);
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
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_4));
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym__2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      t = SSL_WriteToTextFile(not_null(c_5), not_null(d_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_text_0 (ATerm t)
{
  ATerm j_5 = NULL;
  ATerm l_5 = NULL;
  j_5 = t;
  {
    ATerm m_5 = NULL;
    t = xtc_new_file_0(t);
    {
      m_5 = t;
      {
        if(((l_5 != NULL) && (l_5 != m_5)))
          _fail(m_5);
        else
          l_5 = m_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), not_null(j_5));
          {
            t = WriteToTextFile_0(t);
            {
              t = not_null(l_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_5));
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm q_87 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm e_0 (ATerm t)
    {
      ATerm d_10 = t;
      int e_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, e_0);
          ;
          LocalPopChoice(e_10);
        }
      else
        {
          t = d_10;
          {
            ATerm j_10 = t;
            int k_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm r_5 = NULL;
                  r_5 = t;
                  p_5 :
                  if(!(match_int(r_5, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, f_0, _id);
                ;
                LocalPopChoice(k_10);
              }
            else
              {
                t = j_10;
                {
                  ATerm h_0 (ATerm t)
                  {
                    ATerm s_5 = NULL;
                    s_5 = t;
                    q_5 :
                    if(!(match_int(s_5, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, h_0, q_87);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, e_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm at_suffix_rev_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_5);
        ;
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = h_79(t);
      }
    return(t);
  }
  t = u_5(t);
  return(t);
}
ATerm get_filename_0 (ATerm t)
{
  ATerm y_5 = NULL;
  t = explode_string_0(t);
  {
    ATerm p_0 (ATerm t)
    {
      ATerm q_0 (ATerm t)
      {
        ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
        z_5 = t;
        w_5 :
        if(((ATgetType(z_5) == AT_LIST) && !(ATisEmpty(z_5))))
          {
            a_6 = ATgetFirst((ATermList) z_5);
            b_6 = (ATerm) ATgetNext((ATermList) z_5);
            x_5 :
            if(match_int(a_6, 47))
              {
                if(((y_5 != NULL) && (y_5 != b_6)))
                  _fail(b_6);
                else
                  y_5 = b_6;
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
      t = at_suffix_rev_1(t, q_0);
      t = not_null(y_5);
      return(t);
    }
    t = try_1(t, p_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = Cons_2(t, k_78, d_6);
      }
    return(t);
  }
  t = d_6(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  t = SSL_is_string(not_null(f_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = r_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_0);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
              o_6 = t;
              n_6 :
              if(match_cons(o_6, sym_Path_1))
                {
                  p_6 = ATgetArgument(o_6, 0);
                  t = not_null(p_6);
                }
              else
                {
                  if(match_cons(o_6, sym_Var_1))
                    {
                      p_6 = ATgetArgument(o_6, 0);
                      {
                        t = not_null(p_6);
                        {
                          ATerm e_11 = t;
                          int f_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_11);
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_g_11;
                                  return(t);
                                }
                                t = debug_1(t, s_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_6, sym_Prefix_2))
                        {
                          p_6 = ATgetArgument(o_6, 0);
                          q_6 = ATgetArgument(o_6, 1);
                          {
                            ATerm v_6 = NULL,x_6 = NULL;
                            ATerm h_11;
                            h_11 = t;
                            {
                              ATerm w_6 = NULL;
                              t = not_null(p_6);
                              {
                                t = eval_config_0(t);
                                {
                                  w_6 = t;
                                  if(((v_6 != NULL) && (v_6 != w_6)))
                                    _fail(w_6);
                                  else
                                    v_6 = w_6;
                                }
                              }
                            }
                            t = h_11;
                            {
                              ATerm y_6 = NULL;
                              t = not_null(q_6);
                              {
                                t = eval_config_0(t);
                                {
                                  y_6 = t;
                                  if(((x_6 != NULL) && (x_6 != y_6)))
                                    _fail(y_6);
                                  else
                                    x_6 = y_6;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), not_null(x_6));
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
  ATerm g_7 = NULL;
  g_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(g_7));
    {
      t = table_get_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_11;
            o_11 = t;
            {
              ATerm i_7 = NULL;
              ATerm j_7 = NULL;
              j_7 = t;
              if(((i_7 != NULL) && (i_7 != j_7)))
                _fail(j_7);
              else
                i_7 = j_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(g_7), not_null(i_7));
                t = table_put_0(t);
              }
            }
            t = o_11;
          }
          return(t);
        }
        t = try_1(t, t_0);
      }
    }
  }
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm r_7 = NULL,s_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym_Imports_1))
    {
      s_7 = ATgetArgument(r_7, 0);
      {
        ATerm v_7 = NULL,x_7 = NULL;
        ATerm w_7 = NULL;
        t = SSLgetAnnotations(not_null(r_7));
        {
          w_7 = t;
          if(((v_7 != NULL) && (v_7 != w_7)))
            _fail(w_7);
          else
            v_7 = w_7;
        }
        {
          t = not_null(s_7);
          {
            ATerm z_7 = NULL;
            t = s_65(t);
            {
              x_7 = t;
              {
                ATerm a_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(x_7)), not_null(v_7));
                {
                  a_8 = t;
                  if(((z_7 != NULL) && (z_7 != a_8)))
                    _fail(a_8);
                  else
                    z_7 = a_8;
                }
                t = not_null(z_7);
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
  ATerm l_8 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL;
    i_8 = t;
    g_8 :
    if(match_cons(i_8, sym_Specification_1))
      {
        j_8 = ATgetArgument(i_8, 0);
        {
          t = not_null(j_8);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm r_11 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_11;
                }
              return(t);
            }
            t = filter_1(t, v_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, u_0);
  {
    t = concat_0(t);
    {
      ATerm m_8 = NULL;
      m_8 = t;
      if(((l_8 != NULL) && (l_8 != m_8)))
        _fail(m_8);
      else
        l_8 = m_8;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_8));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm s_58 (ATerm), ATerm t_58 (ATerm))
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym__2))
    {
      w_8 = ATgetArgument(v_8, 0);
      x_8 = ATgetArgument(v_8, 1);
      {
        ATerm b_9 = NULL,d_9 = NULL;
        ATerm c_9 = NULL;
        t = SSLgetAnnotations(not_null(v_8));
        {
          c_9 = t;
          if(((b_9 != NULL) && (b_9 != c_9)))
            _fail(c_9);
          else
            b_9 = c_9;
        }
        {
          t = not_null(w_8);
          {
            ATerm f_9 = NULL;
            t = s_58(t);
            {
              d_9 = t;
              {
                t = not_null(x_8);
                {
                  ATerm h_9 = NULL;
                  t = t_58(t);
                  {
                    f_9 = t;
                    {
                      ATerm i_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_9), not_null(f_9)), not_null(b_9));
                      {
                        i_9 = t;
                        if(((h_9 != NULL) && (h_9 != i_9)))
                          _fail(i_9);
                        else
                          h_9 = i_9;
                      }
                      t = not_null(h_9);
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
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  s_9 = t;
  p_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      w_9 = ATgetArgument(s_9, 1);
      q_9 :
      if(match_cons(t_9, sym__2))
        {
          u_9 = ATgetArgument(t_9, 0);
          v_9 = ATgetArgument(t_9, 1);
          r_9 :
          if(match_cons(w_9, sym__2))
            {
              x_9 = ATgetArgument(w_9, 0);
              y_9 = ATgetArgument(w_9, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_9)), not_null(u_9)), (ATerm) ATinsert(CheckATermList(not_null(y_9)), not_null(v_9)));
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
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
    {
      h_10 = ATgetFirst((ATermList) g_10);
      i_10 = (ATerm) ATgetNext((ATermList) g_10);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(i_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && ATisEmpty(o_10)))
    {
      t = term_s_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm v_80 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, v_80);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  v_10 = t;
  t_10 :
  if(match_cons(v_10, sym__2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      u_10 :
      if(match_cons(x_10, sym_Specification_1))
        {
          y_10 = ATgetArgument(x_10, 0);
          {
            t = not_null(y_10);
            {
              ATerm w_0 (ATerm t)
              {
                ATerm a_11 = NULL,b_11 = NULL;
                a_11 = t;
                s_10 :
                if(match_cons(a_11, sym_Imports_1))
                  {
                    b_11 = ATgetArgument(a_11, 0);
                    t = not_null(b_11);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, w_0);
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
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_stdin_0))
    {
      ATerm m_11 = NULL;
      ATerm n_11 = NULL;
      t = term_t_11;
      {
        t = ReadFromFile_0(t);
        {
          n_11 = t;
          if(((m_11 != NULL) && (m_11 != n_11)))
            _fail(n_11);
          else
            m_11 = n_11;
        }
      }
      t = not_null(m_11);
    }
  else
    {
      if(match_cons(k_11, sym_FILE_1))
        {
          l_11 = ATgetArgument(k_11, 0);
          {
            ATerm p_11 = NULL;
            ATerm q_11 = NULL;
            t = not_null(l_11);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  q_11 = t;
                  if(((p_11 != NULL) && (p_11 != q_11)))
                    _fail(q_11);
                  else
                    p_11 = q_11;
                }
              }
            }
            t = not_null(p_11);
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
  ATerm c_12 = NULL;
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  c_12 = t;
  {
    ATerm h_12 = NULL;
    ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
    t = not_null(c_12);
    {
      h_12 = t;
      {
        t = SSL_explode_term(not_null(h_12));
        {
          j_12 = t;
          y_11 :
          if(match_cons(j_12, sym__2))
            {
              k_12 = ATgetArgument(j_12, 0);
              l_12 = ATgetArgument(j_12, 1);
              z_11 :
              if(match_string(k_12, ""))
                {
                  a_12 :
                  if(((ATgetType(l_12) == AT_LIST) && !(ATisEmpty(l_12))))
                    {
                      m_12 = ATgetFirst((ATermList) l_12);
                      n_12 = (ATerm) ATgetNext((ATermList) l_12);
                      b_12 :
                      if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
                        {
                          o_12 = ATgetFirst((ATermList) n_12);
                          p_12 = (ATerm) ATgetNext((ATermList) n_12);
                          {
                            if(((e_12 != NULL) && (e_12 != m_12)))
                              _fail(m_12);
                            else
                              e_12 = m_12;
                            {
                              if(((g_12 != NULL) && (g_12 != o_12)))
                                _fail(o_12);
                              else
                                g_12 = o_12;
                              if(((f_12 != NULL) && (f_12 != p_12)))
                                _fail(p_12);
                              else
                                f_12 = p_12;
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
    t = not_null(g_12);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm v_12 = NULL;
  ATerm w_12 = NULL,y_12 = NULL;
  ATerm x_12 = NULL;
  t = term_u_11;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = term_x_11;
      }
    {
      x_12 = t;
      if(((w_12 != NULL) && (w_12 != x_12)))
        _fail(x_12);
      else
        w_12 = x_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_12), term_x_11);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          y_12 = t;
          if(((v_12 != NULL) && (v_12 != y_12)))
            _fail(y_12);
          else
            v_12 = y_12;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_12)), term_u_11);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  t = SSL_int_to_string(not_null(c_13));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym__2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      {
        ATerm d_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(i_13), not_null(j_13));
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = d_12;
            t = SSL_subtr(not_null(i_13), not_null(j_13));
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
  ATerm p_13 = NULL;
  ATerm q_13 = NULL,s_13 = NULL;
  ATerm r_13 = NULL;
  t = term_q_12;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = term_x_11;
      }
    {
      r_13 = t;
      if(((q_13 != NULL) && (q_13 != r_13)))
        _fail(r_13);
      else
        q_13 = r_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_13), term_x_11);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          s_13 = t;
          if(((p_13 != NULL) && (p_13 != s_13)))
            _fail(s_13);
          else
            p_13 = s_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_q_12);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm w_98 (ATerm), ATerm x_98 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, w_98, x_98);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  t = SSL_close_file(not_null(w_13));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      t = SSL_execvp(not_null(c_14), not_null(d_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = SSL_waitpid(not_null(i_14));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm x_94 (ATerm))
{
  ATerm s_14 = NULL;
  ATerm u_14 = NULL;
  s_14 = t;
  {
    t = fork_0(t);
    {
      u_14 = t;
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_14 = NULL;
            w_14 = t;
            o_14 :
            if(match_int(w_14, 0))
              {
                t = not_null(s_14);
                t = x_94(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            {
              ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
              t = not_null(u_14);
              {
                t = waitpid_0(t);
                {
                  x_14 = t;
                  q_14 :
                  if(match_cons(x_14, sym_WaitStatus_3))
                    {
                      y_14 = ATgetArgument(x_14, 0);
                      z_14 = ATgetArgument(x_14, 1);
                      a_15 = ATgetArgument(x_14, 2);
                      r_14 :
                      if(match_int(y_14, 0))
                        {
                          t = not_null(s_14);
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym__2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      {
        ATerm x_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), not_null(j_15));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, x_0);
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
  ATerm o_15 = NULL;
  o_15 = t;
  t = SSL_table_keys(not_null(o_15));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm w_15 = NULL;
        ATerm y_15 = NULL;
        w_15 = t;
        {
          ATerm z_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), not_null(w_15));
          {
            t = table_get_0(t);
            {
              z_15 = t;
              if(((y_15 != NULL) && (y_15 != z_15)))
                _fail(z_15);
              else
                y_15 = z_15;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), not_null(y_15));
        }
        return(t);
      }
      t = map_1(t, z_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm z_12;
    z_12 = t;
    {
      ATerm e_16 = NULL;
      ATerm f_16 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), term_a_13);
        t = geq_0(t);
      }
    }
    t = z_12;
    t = r_91(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm n_16 = NULL,o_16 = NULL;
  l_16 = t;
  {
    ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_b_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_16)));
    {
      t = table_get_0(t);
      {
        p_16 = t;
        j_16 :
        if(((ATgetType(p_16) == AT_LIST) && !(ATisEmpty(p_16))))
          {
            q_16 = ATgetFirst((ATermList) p_16);
            t_16 = (ATerm) ATgetNext((ATermList) p_16);
            k_16 :
            if(match_cons(q_16, sym__2))
              {
                r_16 = ATgetArgument(q_16, 0);
                s_16 = ATgetArgument(q_16, 1);
                {
                  if(((n_16 != NULL) && (n_16 != r_16)))
                    _fail(r_16);
                  else
                    n_16 = r_16;
                  if(((o_16 != NULL) && (o_16 != s_16)))
                    _fail(s_16);
                  else
                    o_16 = s_16;
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
    t = not_null(o_16);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym__2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      {
        ATerm f_17 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_b_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_17)));
        {
          t = table_get_0(t);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
              g_17 = t;
              y_16 :
              if(match_cons(g_17, sym__2))
                {
                  h_17 = ATgetArgument(g_17, 0);
                  i_17 = ATgetArgument(g_17, 1);
                  {
                    if(((c_17 != NULL) && (c_17 != h_17)))
                      _fail(h_17);
                    else
                      c_17 = h_17;
                    if(((f_17 != NULL) && (f_17 != i_17)))
                      _fail(i_17);
                    else
                      f_17 = i_17;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, b_1);
          }
        }
        t = not_null(f_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm l_17 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      t = u_71(t);
      t = l_17(t);
      return(t);
    }
    t = try_1(t, c_1);
    return(t);
  }
  t = l_17(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm d_13;
  d_13 = t;
  {
    ATerm d_1 (ATerm t)
    {
      t = term_f_13;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm k_13 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_13;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, d_1);
  }
  t = d_13;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    ATerm l_13;
    l_13 = t;
    {
      ATerm n_17 = NULL;
      ATerm o_17 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          o_17 = t;
          if(((n_17 != NULL) && (n_17 != o_17)))
            _fail(o_17);
          else
            n_17 = o_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), term_m_13);
        t = geq_0(t);
      }
    }
    t = l_13;
    t = q_91(t);
    return(t);
  }
  t = try_1(t, e_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm n_13;
    n_13 = t;
    {
      ATerm r_17 = NULL;
      ATerm s_17 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          s_17 = t;
          if(((r_17 != NULL) && (r_17 != s_17)))
            _fail(s_17);
          else
            r_17 = s_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), term_o_13);
        t = geq_0(t);
      }
    }
    t = n_13;
    t = s_91(t);
    return(t);
  }
  t = try_1(t, f_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm union_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym__2))
    {
      x_17 = ATgetArgument(w_17, 0);
      y_17 = ATgetArgument(w_17, 1);
      {
        t = not_null(x_17);
        {
          ATerm c_18 (ATerm t)
          {
            ATerm t_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_17);
                ;
                LocalPopChoice(u_13);
              }
            else
              {
                t = t_13;
                {
                  ATerm v_13 = t;
                  int x_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(y_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_84, g_1);
                      t = c_18(t);
                      ;
                      LocalPopChoice(x_13);
                    }
                  else
                    {
                      t = v_13;
                      t = Cons_2(t, _id, c_18);
                    }
                }
              }
            return(t);
          }
          t = c_18(t);
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
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym__3))
    {
      i_18 = ATgetArgument(h_18, 0);
      j_18 = ATgetArgument(h_18, 1);
      k_18 = ATgetArgument(h_18, 2);
      {
        ATerm y_13;
        y_13 = t;
        {
          ATerm o_18 = NULL;
          ATerm p_18 = NULL,r_18 = NULL;
          ATerm q_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_18), not_null(j_18));
          {
            ATerm z_13 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(e_14);
              }
            else
              {
                t = z_13;
                t = (ATerm) ATempty;
              }
            {
              q_18 = t;
              if(((p_18 != NULL) && (p_18 != q_18)))
                _fail(q_18);
              else
                p_18 = q_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(k_18));
            {
              t = union_0(t);
              {
                r_18 = t;
                if(((o_18 != NULL) && (o_18 != r_18)))
                  _fail(r_18);
                else
                  o_18 = r_18;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_18), not_null(j_18), not_null(o_18));
            t = set_0(t);
          }
        }
        t = y_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym__2))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      {
        t = not_null(b_19);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
            e_19 = t;
            x_18 :
            if(match_cons(e_19, sym__2))
              {
                f_19 = ATgetArgument(e_19, 0);
                g_19 = ATgetArgument(e_19, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(a_19), not_null(f_19), not_null(g_19));
                  t = b_95(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_1);
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
  ATerm m_19 = NULL;
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL;
      n_19 = t;
      {
        if(((m_19 != NULL) && (m_19 != n_19)))
          _fail(n_19);
        else
          m_19 = n_19;
        t = SSL_ReadFromFile(not_null(m_19));
      }
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm l_1 (ATerm t)
        {
          t = term_h_14;
          return(t);
        }
        t = debug_1(t, l_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm r_19 = NULL;
  ATerm t_19 = NULL;
  r_19 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = debug_1(t, n_1);
      return(t);
    }
    t = if_verbose5_1(t, m_1);
    {
      ATerm k_14 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_13, (ATerm) ATmakeAppl(sym_Imported_1, not_null(r_19)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_14;
        }
      {
        ATerm l_14;
        l_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_13, term_m_14, (ATerm) ATinsert(ATempty, not_null(r_19)));
          t = table_put_0(t);
        }
        t = l_14;
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              t = term_n_14;
              return(t);
            }
            t = debug_1(t, p_1);
            return(t);
          }
          t = if_verbose4_1(t, o_1);
          {
            ATerm p_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(t_14);
              }
            else
              {
                t = p_14;
                t = (ATerm) ATempty;
              }
            {
              ATerm q_1 (ATerm t)
              {
                ATerm r_1 (ATerm t)
                {
                  t = term_v_14;
                  return(t);
                }
                t = say_1(t, r_1);
                return(t);
              }
              t = if_verbose6_1(t, q_1);
              {
                ATerm u_19 = NULL;
                u_19 = t;
                if(((t_19 != NULL) && (t_19 != u_19)))
                  _fail(u_19);
                else
                  t_19 = u_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_13, not_null(t_19));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm s_1 (ATerm t)
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = term_b_15;
                          return(t);
                        }
                        t = say_1(t, t_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, s_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_b_13, (ATerm)ATmakeAppl(sym_Imported_1, not_null(r_19)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm v_1 (ATerm t)
                              {
                                t = term_v_14;
                                return(t);
                              }
                              t = say_1(t, v_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, u_1);
                          }
                        }
                      }
                    }
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
  ATerm y_19 = NULL;
  y_19 = t;
  t = SSL_getenv(not_null(y_19));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm f_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_15;
            t = getenv_0(t);
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = f_15;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      t = term_m_15;
      return(t);
    }
    t = debug_1(t, y_1);
    return(t);
  }
  t = if_verbose5_1(t, x_1);
  {
    ATerm n_15;
    n_15 = t;
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_15;
          t = table_get_0(t);
          ;
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = n_15;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = term_s_15;
          return(t);
        }
        t = debug_1(t, a_2);
        return(t);
      }
      t = if_verbose5_1(t, z_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm t_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_x_15;
          return(t);
        }
        t = debug_1(t, c_2);
        return(t);
      }
      t = if_verbose5_1(t, b_2);
      {
        t = xtc_load_0(t);
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm d_2 (ATerm t)
            {
              ATerm e_2 (ATerm t)
              {
                t = term_x_15;
                return(t);
              }
              t = debug_1(t, e_2);
              return(t);
            }
            t = if_verbose5_1(t, d_2);
          }
        }
      }
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = t_15;
      {
        ATerm c_20 = NULL;
        ATerm d_20 = NULL;
        d_20 = t;
        if(((c_20 != NULL) && (c_20 != d_20)))
          _fail(d_20);
        else
          c_20 = d_20;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_16), not_null(c_20)), term_c_16);
          {
            t = error_0(t);
            {
              ATerm f_2 (ATerm t)
              {
                t = term_b_13;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_g_16;
                      return(t);
                    }
                    t = debug_1(t, g_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, f_2);
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
ATerm xtc_command_1 (ATerm t, ATerm n_98 (ATerm))
{
  ATerm h_20 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    ATerm i_20 = NULL;
    t = n_98(t);
    {
      t = xtc_find_warning_0(t);
      {
        i_20 = t;
        if(((h_20 != NULL) && (h_20 != i_20)))
          _fail(i_20);
        else
          h_20 = i_20;
      }
    }
  }
  t = h_16;
  {
    ATerm i_16;
    i_16 = t;
    {
      ATerm j_20 = NULL;
      ATerm k_20 = NULL;
      k_20 = t;
      if(((j_20 != NULL) && (j_20 != k_20)))
        _fail(k_20);
      else
        j_20 = k_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(j_20));
        t = call_0(t);
      }
    }
    t = i_16;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
        ATerm m_16;
        m_16 = t;
        {
          ATerm a_21 = NULL;
          ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
          t = x_88(t);
          {
            a_21 = t;
            {
              if(((x_20 != NULL) && (x_20 != a_21)))
                _fail(a_21);
              else
                x_20 = a_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_20), not_null(t_20), not_null(u_20));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_16 = t;
                    int v_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_20), term_w_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(v_16);
                      }
                    else
                      {
                        t = u_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_21 = t;
                      q_20 :
                      if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
                        {
                          c_21 = ATgetFirst((ATermList) b_21);
                          d_21 = (ATerm) ATgetNext((ATermList) b_21);
                          {
                            if(((y_20 != NULL) && (y_20 != c_21)))
                              _fail(c_21);
                            else
                              y_20 = c_21;
                            {
                              if(((z_20 != NULL) && (z_20 != d_21)))
                                _fail(d_21);
                              else
                                z_20 = d_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_20), term_w_16, (ATerm) ATinsert(CheckATermList(not_null(z_20)), (ATerm) ATinsert(CheckATermList(not_null(y_20)), not_null(t_20))));
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
        t = m_16;
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
  ATerm x_16;
  x_16 = t;
  {
    t = l_89(t);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_d_17;
        return(t);
      }
      t = debug_1(t, h_2);
    }
  }
  t = x_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  ATerm e_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
      n_21 = t;
      i_21 :
      if(match_cons(n_21, sym__2))
        {
          o_21 = ATgetArgument(n_21, 0);
          p_21 = ATgetArgument(n_21, 1);
          {
            if(((m_21 != NULL) && (m_21 != o_21)))
              _fail(o_21);
            else
              m_21 = o_21;
            if(((l_21 != NULL) && (l_21 != p_21)))
              _fail(p_21);
            else
              l_21 = p_21;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_17);
      t = SSL_open_file(not_null(m_21), not_null(l_21));
    }
  else
    {
      t = e_17;
      {
        ATerm q_21 = NULL;
        ATerm r_21 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_k_17;
          return(t);
        }
        t = obsolete_1(t, i_2);
        {
          q_21 = t;
          {
            if(((m_21 != NULL) && (m_21 != q_21)))
              _fail(q_21);
            else
              m_21 = q_21;
            {
              ATerm m_17;
              m_17 = t;
              {
                ATerm s_21 = NULL;
                t = term_a_10;
                {
                  s_21 = t;
                  if(((r_21 != NULL) && (r_21 != s_21)))
                    _fail(s_21);
                  else
                    r_21 = s_21;
                }
              }
              t = m_17;
              t = SSL_open_file(not_null(m_21), not_null(r_21));
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
  ATerm x_21 = NULL;
  ATerm y_21 = NULL;
  t = term_p_17;
  {
    t = new_0(t);
    {
      y_21 = t;
      if(((x_21 != NULL) && (x_21 != y_21)))
        _fail(y_21);
      else
        x_21 = y_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_21), term_q_17);
    {
      t = conc_strings_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, j_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm c_22 = NULL;
  t = new_file_0(t);
  {
    c_22 = t;
    {
      ATerm t_17;
      t_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), term_a_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), term_p_17);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_u_17;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
        }
      }
      t = t_17;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_stdin_0))
    {
      ATerm o_22 = NULL;
      ATerm p_22 = NULL;
      ATerm q_22 = NULL;
      t = xtc_new_file_0(t);
      {
        p_22 = t;
        {
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
          {
            ATerm r_22 = NULL;
            t = o_0(t);
            {
              r_22 = t;
              if(((q_22 != NULL) && (q_22 != r_22)))
                _fail(r_22);
              else
                q_22 = r_22;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_22)), term_j_9));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(o_22);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_22));
    }
  else
    {
      if(match_cons(m_22, sym_FILE_1))
        {
          n_22 = ATgetArgument(m_22, 0);
          {
            ATerm t_22 = NULL;
            ATerm u_22 = NULL;
            t = not_null(n_22);
            {
              ATerm v_22 = NULL;
              t = xtc_new_file_0(t);
              {
                u_22 = t;
                {
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                  {
                    ATerm w_22 = NULL;
                    t = o_0(t);
                    {
                      w_22 = t;
                      if(((v_22 != NULL) && (v_22 != w_22)))
                        _fail(w_22);
                      else
                        v_22 = w_22;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_22)), term_j_9), not_null(n_22)), term_z_17));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(t_22);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_22));
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
  ATerm h_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_stdin_0))
    {
      ATerm j_23 = NULL,l_23 = NULL;
      ATerm a_18;
      a_18 = t;
      {
        ATerm k_23 = NULL;
        t = SSLgetAnnotations(not_null(h_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
      }
      t = a_18;
      {
        ATerm m_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(j_23));
        {
          m_23 = t;
          if(((l_23 != NULL) && (l_23 != m_23)))
            _fail(m_23);
          else
            l_23 = m_23;
        }
        t = not_null(l_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_FILE_1))
    {
      w_23 = ATgetArgument(v_23, 0);
      {
        ATerm z_23 = NULL,b_24 = NULL;
        ATerm a_24 = NULL;
        t = SSLgetAnnotations(not_null(v_23));
        {
          a_24 = t;
          if(((z_23 != NULL) && (z_23 != a_24)))
            _fail(a_24);
          else
            z_23 = a_24;
        }
        {
          t = not_null(w_23);
          {
            ATerm d_24 = NULL;
            t = m_65(t);
            {
              b_24 = t;
              {
                ATerm e_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(b_24)), not_null(z_23));
                {
                  e_24 = t;
                  if(((d_24 != NULL) && (d_24 != e_24)))
                    _fail(e_24);
                  else
                    d_24 = e_24;
                }
                t = not_null(d_24);
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
ATerm xtc_transform_2 (ATerm t, ATerm p_98 (ATerm), ATerm q_98 (ATerm))
{
  ATerm b_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          t = stdin_0(t);
        }
      LocalPopChoice(d_18);
      t = xtc_transform_file_2(t, p_98, q_98);
    }
  else
    {
      t = b_18;
      t = xtc_transform_term_2(t, p_98, q_98);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_25 = NULL;
      ATerm n_2 (ATerm t)
      {
        ATerm n_18 = t;
        if((PushChoice() == 0))
          {
            ATerm o_25 = NULL;
            o_25 = t;
            e_25 :
            if(!(match_string(o_25, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_18;
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        ATerm p_25 = NULL;
        p_25 = t;
        if(((n_25 != NULL) && (n_25 != p_25)))
          _fail(p_25);
        else
          n_25 = p_25;
        return(t);
      }
      t = _2(t, n_2, o_2);
      {
        t = Snd_0(t);
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 (ATerm t)
              {
                t = term_u_18;
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                ATerm q_25 = NULL,s_25 = NULL,u_25 = NULL;
                ATerm v_18;
                v_18 = t;
                {
                  ATerm r_25 = NULL;
                  t = pass_verbose_0(t);
                  {
                    r_25 = t;
                    if(((q_25 != NULL) && (q_25 != r_25)))
                      _fail(r_25);
                    else
                      q_25 = r_25;
                  }
                }
                t = v_18;
                {
                  ATerm w_18;
                  w_18 = t;
                  {
                    ATerm t_25 = NULL;
                    t = pass_keep_0(t);
                    {
                      t_25 = t;
                      if(((s_25 != NULL) && (s_25 != t_25)))
                        _fail(t_25);
                      else
                        s_25 = t_25;
                    }
                  }
                  t = w_18;
                  {
                    ATerm v_25 = NULL;
                    t = term_c_19;
                    {
                      t = get_config_0(t);
                      {
                        v_25 = t;
                        if(((u_25 != NULL) && (u_25 != v_25)))
                          _fail(v_25);
                        else
                          u_25 = v_25;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_25)), not_null(s_25)), not_null(q_25));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, p_2, q_2);
              t = read_from_0(t);
              ;
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), term_d_19);
                t = fatal_error_0(t);
              }
            }
        }
      }
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
        w_25 = t;
        l_25 :
        if(match_cons(w_25, sym__2))
          {
            x_25 = ATgetArgument(w_25, 0);
            y_25 = ATgetArgument(w_25, 1);
            m_25 :
            if(match_string(x_25, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm h_19 = t;
                  int i_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      ;
                      LocalPopChoice(i_19);
                    }
                  else
                    {
                      t = h_19;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_25)), term_d_19);
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
  ATerm j_19;
  j_19 = t;
  {
    ATerm h_26 = NULL,j_26 = NULL;
    ATerm k_19;
    k_19 = t;
    {
      ATerm i_26 = NULL;
      t = e_89(t);
      {
        i_26 = t;
        if(((h_26 != NULL) && (h_26 != i_26)))
          _fail(i_26);
        else
          h_26 = i_26;
      }
    }
    t = k_19;
    {
      ATerm k_26 = NULL;
      k_26 = t;
      if(((j_26 != NULL) && (j_26 != k_26)))
        _fail(k_26);
      else
        j_26 = k_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_26)), not_null(h_26)));
        t = printnl_0(t);
      }
    }
  }
  t = j_19;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm o_19;
    o_19 = t;
    {
      ATerm v_26 = NULL;
      ATerm w_26 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), term_p_19);
        t = geq_0(t);
      }
    }
    t = o_19;
    t = p_91(t);
    return(t);
  }
  t = try_1(t, r_2);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_19;
  q_19 = t;
  {
    ATerm z_26 = NULL;
    ATerm b_27 = NULL;
    b_27 = t;
    if(((z_26 != NULL) && (z_26 != b_27)))
      _fail(b_27);
    else
      z_26 = b_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_19, not_null(z_26));
      t = printnl_0(t);
    }
  }
  t = q_19;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm s_19;
  s_19 = t;
  {
    t = error_0(t);
    {
      t = term_x_11;
      t = exit_0(t);
    }
  }
  t = s_19;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm f_27 = NULL;
  ATerm h_27 = NULL;
  f_27 = t;
  {
    ATerm v_19;
    v_19 = t;
    {
      ATerm l_27 = NULL;
      t = term_w_19;
      {
        l_27 = t;
        if(((h_27 != NULL) && (h_27 != l_27)))
          _fail(l_27);
        else
          h_27 = l_27;
      }
    }
    t = v_19;
    {
      t = SSL_open_file(not_null(f_27), not_null(h_27));
      t = SSL_close_file(not_null(f_27));
    }
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_implode_string(not_null(q_27));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  t = SSL_explode_string(not_null(u_27));
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
ATerm fetch_elem_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm y_27 = NULL;
  ATerm s_2 (ATerm t)
  {
    ATerm z_27 = NULL;
    t = v_78(t);
    {
      z_27 = t;
      if(((y_27 != NULL) && (y_27 != z_27)))
        _fail(z_27);
      else
        y_27 = z_27;
    }
    return(t);
  }
  t = fetch_1(t, s_2);
  t = not_null(y_27);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm x_70 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym__2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      {
        t = x_70(t);
        {
          ATerm x_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_2 (ATerm t)
              {
                ATerm m_28 = NULL;
                m_28 = t;
                {
                  t = not_null(j_28);
                  {
                    ATerm u_2 (ATerm t)
                    {
                      ATerm o_28 = NULL,q_28 = NULL;
                      ATerm a_20;
                      a_20 = t;
                      {
                        ATerm p_28 = NULL;
                        p_28 = t;
                        if(((o_28 != NULL) && (o_28 != p_28)))
                          _fail(p_28);
                        else
                          o_28 = p_28;
                      }
                      t = a_20;
                      {
                        ATerm r_28 = NULL,t_28 = NULL;
                        ATerm s_28 = NULL;
                        s_28 = t;
                        if(((r_28 != NULL) && (r_28 != s_28)))
                          _fail(s_28);
                        else
                          r_28 = s_28;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_28)), term_g_9), not_null(i_28)), term_b_20), not_null(m_28));
                          {
                            t = concat_strings_0(t);
                            {
                              t = file_exists_0(t);
                              {
                                t_28 = t;
                                if(((q_28 != NULL) && (q_28 != t_28)))
                                  _fail(t_28);
                                else
                                  q_28 = t_28;
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_28)));
                      }
                      return(t);
                    }
                    t = fetch_elem_1(t, u_2);
                  }
                }
                return(t);
              }
              t = fetch_elem_1(t, t_2);
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = x_19;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_20), not_null(i_28)), term_e_20);
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
ATerm get_module_1 (ATerm t, ATerm w_70 (ATerm))
{
  ATerm f_29 = NULL;
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  f_29 = t;
  {
    ATerm k_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
    ATerm p_29 = NULL;
    t = not_null(f_29);
    {
      t = basename_0(t);
      {
        p_29 = t;
        if(((k_29 != NULL) && (k_29 != p_29)))
          _fail(p_29);
        else
          k_29 = p_29;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_29), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_19), term_m_20), term_l_20), term_g_20));
      {
        t = find_module_1(t, w_70);
        {
          q_29 = t;
          d_29 :
          if(match_cons(q_29, sym__2))
            {
              r_29 = ATgetArgument(q_29, 0);
              s_29 = ATgetArgument(q_29, 1);
              e_29 :
              if(match_cons(s_29, sym_FILE_1))
                {
                  t_29 = ATgetArgument(s_29, 0);
                  {
                    ATerm u_29 = NULL;
                    if(((h_29 != NULL) && (h_29 != r_29)))
                      _fail(r_29);
                    else
                      h_29 = r_29;
                    {
                      if(((i_29 != NULL) && (i_29 != t_29)))
                        _fail(t_29);
                      else
                        i_29 = t_29;
                      {
                        ATerm v_2 (ATerm t)
                        {
                          ATerm n_20;
                          n_20 = t;
                          {
                            t = not_null(i_29);
                            {
                              ATerm w_2 (ATerm t)
                              {
                                t = term_o_20;
                                return(t);
                              }
                              t = debug_1(t, w_2);
                            }
                          }
                          t = n_20;
                          return(t);
                        }
                        t = if_verbose3_1(t, v_2);
                        {
                          t = parse_module_0(t);
                          {
                            u_29 = t;
                            if(((j_29 != NULL) && (j_29 != u_29)))
                              _fail(u_29);
                            else
                              j_29 = u_29;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(j_29));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_30 = NULL;
  ATerm p_30 = NULL,q_30 = NULL;
  n_30 = t;
  {
    ATerm r_30 = NULL;
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
    t = not_null(n_30);
    {
      r_30 = t;
      {
        t = SSL_explode_term(not_null(r_30));
        {
          t_30 = t;
          k_30 :
          if(match_cons(t_30, sym__2))
            {
              u_30 = ATgetArgument(t_30, 0);
              v_30 = ATgetArgument(t_30, 1);
              l_30 :
              if(match_string(u_30, ""))
                {
                  m_30 :
                  if(((ATgetType(v_30) == AT_LIST) && !(ATisEmpty(v_30))))
                    {
                      w_30 = ATgetFirst((ATermList) v_30);
                      x_30 = (ATerm) ATgetNext((ATermList) v_30);
                      {
                        if(((q_30 != NULL) && (q_30 != w_30)))
                          _fail(w_30);
                        else
                          q_30 = w_30;
                        if(((p_30 != NULL) && (p_30 != x_30)))
                          _fail(x_30);
                        else
                          p_30 = x_30;
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
    t = not_null(q_30);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  e_31 = t;
  c_31 :
  if(match_cons(e_31, sym__5))
    {
      f_31 = ATgetArgument(e_31, 0);
      i_31 = ATgetArgument(e_31, 1);
      j_31 = ATgetArgument(e_31, 2);
      k_31 = ATgetArgument(e_31, 3);
      l_31 = ATgetArgument(e_31, 4);
      d_31 :
      if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
        {
          g_31 = ATgetFirst((ATermList) f_31);
          h_31 = (ATerm) ATgetNext((ATermList) f_31);
          t = (ATerm) ATmakeAppl(sym__5, not_null(h_31), not_null(i_31), not_null(j_31), not_null(k_31), (ATerm) ATinsert(CheckATermList(not_null(l_31)), not_null(g_31)));
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
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym__2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      if(((w_31 != NULL) && (w_31 != x_31)))
        _fail(x_31);
      else
        w_31 = x_31;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  h_32 :
  if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
    {
      m_32 = ATgetFirst((ATermList) l_32);
      n_32 = (ATerm) ATgetNext((ATermList) l_32);
      {
        t = i_84(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm q_32 = NULL;
            q_32 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_32), not_null(q_32));
              t = h_84(t);
            }
            return(t);
          }
          t = fetch_1(t, x_2);
        }
        t = not_null(n_32);
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
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym__2))
    {
      z_32 = ATgetArgument(y_32, 0);
      a_33 = ATgetArgument(y_32, 1);
      {
        t = not_null(z_32);
        {
          ATerm e_33 (ATerm t)
          {
            ATerm p_20 = t;
            int v_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(v_20);
              }
            else
              {
                t = p_20;
                {
                  ATerm w_20 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(a_33);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_83, y_2);
                      t = e_33(t);
                      ;
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = w_20;
                      t = Cons_2(t, _id, e_33);
                    }
                }
              }
            return(t);
          }
          t = e_33(t);
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
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  i_33 = t;
  g_33 :
  if(match_cons(i_33, sym__2))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      h_33 :
      if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
        {
          l_33 = ATgetFirst((ATermList) k_33);
          m_33 = (ATerm) ATgetNext((ATermList) k_33);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_33)), not_null(l_33)), not_null(m_33));
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
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_33)), not_null(u_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,o_34 = NULL;
  d_34 = t;
  a_34 :
  if(match_cons(d_34, sym__2))
    {
      e_34 = ATgetArgument(d_34, 0);
      h_34 = ATgetArgument(d_34, 1);
      b_34 :
      if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
        {
          f_34 = ATgetFirst((ATermList) e_34);
          g_34 = (ATerm) ATgetNext((ATermList) e_34);
          c_34 :
          if(((ATgetType(h_34) == AT_LIST) && !(ATisEmpty(h_34))))
            {
              i_34 = ATgetFirst((ATermList) h_34);
              o_34 = (ATerm) ATgetNext((ATermList) h_34);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_34), not_null(i_34)), (ATerm) ATmakeAppl(sym__2, not_null(g_34), not_null(o_34)));
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
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  v_34 :
  if(match_cons(y_34, sym__2))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      w_34 :
      if(((ATgetType(z_34) == AT_LIST) && ATisEmpty(z_34)))
        {
          x_34 :
          if(((ATgetType(a_35) == AT_LIST) && ATisEmpty(a_35)))
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
ATerm genzip_4 (ATerm t, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm c_35 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_80(t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          t = m_80(t);
          {
            t = _2(t, o_80, c_35);
            t = n_80(t);
          }
        }
      }
    return(t);
  }
  t = c_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm q_80 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, q_80);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  n_35 = t;
  l_35 :
  if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
    {
      o_35 = ATgetFirst((ATermList) n_35);
      r_35 = (ATerm) ATgetNext((ATermList) n_35);
      m_35 :
      if(match_cons(o_35, sym__2))
        {
          p_35 = ATgetArgument(o_35, 0);
          q_35 = ATgetArgument(o_35, 1);
          {
            ATerm v_35 = NULL,w_35 = NULL,c_36 = NULL,i_36 = NULL;
            ATerm h_21;
            h_21 = t;
            {
              ATerm x_35 = NULL;
              ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
              t = not_null(q_35);
              {
                x_35 = t;
                {
                  t = SSL_explode_term(not_null(x_35));
                  {
                    z_35 = t;
                    g_35 :
                    if(match_cons(z_35, sym__2))
                      {
                        a_36 = ATgetArgument(z_35, 0);
                        b_36 = ATgetArgument(z_35, 1);
                        {
                          if(((v_35 != NULL) && (v_35 != a_36)))
                            _fail(a_36);
                          else
                            v_35 = a_36;
                          if(((w_35 != NULL) && (w_35 != b_36)))
                            _fail(b_36);
                          else
                            w_35 = b_36;
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
            t = h_21;
            {
              ATerm j_21;
              j_21 = t;
              {
                ATerm d_36 = NULL;
                ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
                t = not_null(p_35);
                {
                  d_36 = t;
                  {
                    t = SSL_explode_term(not_null(d_36));
                    {
                      f_36 = t;
                      j_35 :
                      if(match_cons(f_36, sym__2))
                        {
                          g_36 = ATgetArgument(f_36, 0);
                          h_36 = ATgetArgument(f_36, 1);
                          {
                            if(((v_35 != NULL) && (v_35 != g_36)))
                              _fail(g_36);
                            else
                              v_35 = g_36;
                            if(((c_36 != NULL) && (c_36 != h_36)))
                              _fail(h_36);
                            else
                              c_36 = h_36;
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
              t = j_21;
              {
                ATerm j_36 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_36), not_null(w_35));
                {
                  t = zip_1(t, _id);
                  {
                    j_36 = t;
                    if(((i_36 != NULL) && (i_36 != j_36)))
                      _fail(j_36);
                    else
                      i_36 = j_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_36), not_null(r_35));
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
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  t_36 = t;
  r_36 :
  if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
    {
      u_36 = ATgetFirst((ATermList) t_36);
      x_36 = (ATerm) ATgetNext((ATermList) t_36);
      s_36 :
      if(match_cons(u_36, sym__2))
        {
          v_36 = ATgetArgument(u_36, 0);
          w_36 = ATgetArgument(u_36, 1);
          {
            ATerm z_36 = NULL;
            if(((v_36 != NULL) && (v_36 != w_36)))
              _fail(w_36);
            else
              v_36 = w_36;
            {
              if(((z_36 != NULL) && (z_36 != x_36)))
                _fail(x_36);
              else
                z_36 = x_36;
              t = not_null(z_36);
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
  ATerm k_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm c_37 = NULL;
        c_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_37));
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm w_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(z_21);
                }
              else
                {
                  t = w_21;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, c_3);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, z_2, a_3, b_3);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = k_21;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  o_37 = t;
  m_37 :
  if(match_cons(o_37, sym__5))
    {
      p_37 = ATgetArgument(o_37, 0);
      s_37 = ATgetArgument(o_37, 1);
      t_37 = ATgetArgument(o_37, 2);
      u_37 = ATgetArgument(o_37, 3);
      v_37 = ATgetArgument(o_37, 4);
      n_37 :
      if(((ATgetType(p_37) == AT_LIST) && !(ATisEmpty(p_37))))
        {
          q_37 = ATgetFirst((ATermList) p_37);
          r_37 = (ATerm) ATgetNext((ATermList) p_37);
          {
            ATerm c_38 = NULL,g_38 = NULL,h_38 = NULL,l_38 = NULL,n_38 = NULL,p_38 = NULL;
            ATerm a_22;
            a_22 = t;
            {
              ATerm i_38 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_37), not_null(t_37));
              {
                ATerm j_38 = NULL;
                t = v_99(t);
                {
                  i_38 = t;
                  {
                    if(((c_38 != NULL) && (c_38 != i_38)))
                      _fail(i_38);
                    else
                      c_38 = i_38;
                    {
                      t = not_null(c_38);
                      {
                        ATerm k_38 = NULL;
                        t = w_99(t);
                        {
                          j_38 = t;
                          {
                            if(((g_38 != NULL) && (g_38 != j_38)))
                              _fail(j_38);
                            else
                              g_38 = j_38;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_38), not_null(s_37));
                              {
                                t = diff_0(t);
                                {
                                  k_38 = t;
                                  if(((h_38 != NULL) && (h_38 != k_38)))
                                    _fail(k_38);
                                  else
                                    h_38 = k_38;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = a_22;
            {
              ATerm b_22;
              b_22 = t;
              {
                ATerm m_38 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_38), not_null(r_37));
                {
                  t = conc_0(t);
                  {
                    m_38 = t;
                    if(((l_38 != NULL) && (l_38 != m_38)))
                      _fail(m_38);
                    else
                      l_38 = m_38;
                  }
                }
              }
              t = b_22;
              {
                ATerm d_22;
                d_22 = t;
                {
                  ATerm o_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_38), not_null(s_37));
                  {
                    t = conc_0(t);
                    {
                      o_38 = t;
                      if(((n_38 != NULL) && (n_38 != o_38)))
                        _fail(o_38);
                      else
                        n_38 = o_38;
                    }
                  }
                }
                t = d_22;
                {
                  ATerm q_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(q_37), not_null(c_38), not_null(u_37));
                  {
                    t = x_99(t);
                    {
                      q_38 = t;
                      if(((p_38 != NULL) && (p_38 != q_38)))
                        _fail(q_38);
                      else
                        p_38 = q_38;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(l_38), not_null(n_38), not_null(t_37), not_null(p_38), not_null(v_37));
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
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  b_39 = t;
  z_38 :
  if(match_cons(b_39, sym__5))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      e_39 = ATgetArgument(b_39, 2);
      f_39 = ATgetArgument(b_39, 3);
      g_39 = ATgetArgument(b_39, 4);
      a_39 :
      if(((ATgetType(c_39) == AT_LIST) && ATisEmpty(c_39)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_39), not_null(g_39));
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
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_cons(r_39, sym__3))
    {
      s_39 = ATgetArgument(r_39, 0);
      t_39 = ATgetArgument(r_39, 1);
      u_39 = ATgetArgument(r_39, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(s_39), not_null(s_39), not_null(t_39), not_null(u_39), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  ATerm z_39 (ATerm t)
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_72(t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          t = k_72(t);
          t = z_39(t);
        }
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm))
{
  t = m_72(t);
  t = while_not_2(t, n_72, o_72);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, d_99, e_99, f_99);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, d_3);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm))
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  t = graph_nodes_undef_roots_3(t, s_99, t_99, u_99);
  {
    c_40 = t;
    b_40 :
    if(match_cons(c_40, sym__2))
      {
        d_40 = ATgetArgument(c_40, 0);
        e_40 = ATgetArgument(c_40, 1);
        t = not_null(d_40);
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
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              t = filter_1(t, x_85);
              return(t);
            }
            t = Cons_2(t, x_85, i_3);
            ;
            LocalPopChoice(s_22);
          }
        else
          {
            t = k_22;
            {
              ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
              k_40 = t;
              j_40 :
              if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
                {
                  l_40 = ATgetFirst((ATermList) k_40);
                  m_40 = (ATerm) ATgetNext((ATermList) k_40);
                  {
                    t = not_null(m_40);
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
  ATerm v_40 = NULL,w_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_FILE_1))
    {
      w_40 = ATgetArgument(v_40, 0);
      {
        ATerm y_40 = NULL;
        ATerm a_41 = NULL;
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_19;
            {
              t = get_config_0(t);
              {
                ATerm j_3 (ATerm t)
                {
                  ATerm z_22 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm z_40 = NULL;
                      z_40 = t;
                      q_40 :
                      if(!(match_string(z_40, "-I")))
                        {
                          _fail(t);
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = z_22;
                    }
                  return(t);
                }
                t = filter_1(t, j_3);
              }
            }
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = (ATerm) ATempty;
          }
        {
          a_41 = t;
          if(((y_40 != NULL) && (y_40 != a_41)))
            _fail(a_41);
          else
            y_40 = a_41;
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(w_40)), term_b_23), term_a_23), term_p_17, (ATerm) ATempty);
          {
            ATerm m_3 (ATerm t)
            {
              t = Fst_0(t);
              {
                ATerm p_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_40)), term_g_9);
                  return(t);
                }
                t = get_module_1(t, p_3);
              }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
              d_41 = t;
              t_40 :
              if(match_cons(d_41, sym__3))
                {
                  e_41 = ATgetArgument(d_41, 0);
                  f_41 = ATgetArgument(d_41, 1);
                  g_41 = ATgetArgument(d_41, 2);
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_41)), not_null(f_41));
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = graph_nodes_roots_3(t, m_3, get_stratego_imports_0, o_3);
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
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
        t_41 = t;
        s_41 :
        if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
          {
            u_41 = ATgetFirst((ATermList) t_41);
            v_41 = (ATerm) ATgetNext((ATermList) t_41);
            {
              t = not_null(u_41);
              {
                ATerm u_3 (ATerm t)
                {
                  t = not_null(v_41);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_3);
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
  ATerm f_42 = NULL;
  ATerm j_42 = NULL;
  f_42 = t;
  {
    ATerm k_42 = NULL;
    ATerm m_42 = NULL,y_42 = NULL,z_42 = NULL;
    t = not_null(f_42);
    {
      k_42 = t;
      {
        t = SSL_explode_term(not_null(k_42));
        {
          m_42 = t;
          d_42 :
          if(match_cons(m_42, sym__2))
            {
              y_42 = ATgetArgument(m_42, 0);
              z_42 = ATgetArgument(m_42, 1);
              e_42 :
              if(match_string(y_42, ""))
                {
                  if(((j_42 != NULL) && (j_42 != z_42)))
                    _fail(z_42);
                  else
                    j_42 = z_42;
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
      t = not_null(j_42);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm d_43 (ATerm t)
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_43);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        {
          t = Nil_0(t);
          t = z_78(t);
        }
      }
    return(t);
  }
  t = d_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym__2))
    {
      h_43 = ATgetArgument(g_43, 0);
      i_43 = ATgetArgument(g_43, 1);
      {
        t = not_null(h_43);
        {
          ATerm v_3 (ATerm t)
          {
            t = not_null(i_43);
            return(t);
          }
          t = at_end_1(t, v_3);
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
  ATerm i_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = i_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym__2))
    {
      x_43 = ATgetArgument(w_43, 0);
      y_43 = ATgetArgument(w_43, 1);
      {
        ATerm h_44 = NULL;
        ATerm i_44 = NULL,k_44 = NULL;
        ATerm j_44 = NULL;
        t = not_null(x_43);
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              t = (ATerm) ATempty;
            }
          {
            j_44 = t;
            if(((i_44 != NULL) && (i_44 != j_44)))
              _fail(j_44);
            else
              i_44 = j_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_43), not_null(i_44));
          {
            t = conc_0(t);
            {
              k_44 = t;
              if(((h_44 != NULL) && (h_44 != k_44)))
                _fail(k_44);
              else
                h_44 = k_44;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(x_43), not_null(h_44));
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
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_3 (ATerm t)
      {
        ATerm u_44 = NULL;
        u_44 = t;
        o_44 :
        if(!(match_string(u_44, "-I")))
          {
            if(!(match_string(u_44, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        ATerm v_44 = NULL;
        ATerm w_44 = NULL;
        w_44 = t;
        if(((v_44 != NULL) && (v_44 != w_44)))
          _fail(w_44);
        else
          v_44 = w_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_44)), term_c_19));
          t = extend_config_0(t);
        }
        t = term_p_17;
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_s_23;
        return(t);
      }
      t = ArgOption_3(t, w_3, x_3, y_3);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm t_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm x_44 = NULL;
              x_44 = t;
              q_44 :
              if(!(match_string(x_44, "--nodep")))
                {
                  if(!(match_string(x_44, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_c_24;
              t = set_config_0(t);
              t = term_p_17;
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              t = term_f_24;
              return(t);
            }
            t = Option_3(t, z_3, a_4, b_4);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = t_23;
            {
              ATerm g_24 = t;
              int h_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm y_44 = NULL;
                    y_44 = t;
                    r_44 :
                    if(!(match_string(y_44, "--dep")))
                      {
                        if(!(match_string(y_44, "-d")))
                          {
                            if(!(match_string(y_44, "-dep")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm d_4 (ATerm t)
                  {
                    ATerm z_44 = NULL;
                    ATerm a_45 = NULL;
                    a_45 = t;
                    if(((z_44 != NULL) && (z_44 != a_45)))
                      _fail(a_45);
                    else
                      z_44 = a_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(z_44));
                      t = set_config_0(t);
                    }
                    t = term_p_17;
                    return(t);
                  }
                  ATerm f_4 (ATerm t)
                  {
                    t = term_i_24;
                    return(t);
                  }
                  t = ArgOption_3(t, c_4, d_4, f_4);
                  ;
                  LocalPopChoice(h_24);
                }
              else
                {
                  t = g_24;
                  {
                    ATerm s_4 (ATerm t)
                    {
                      ATerm b_45 = NULL;
                      b_45 = t;
                      t_44 :
                      if(!(match_string(b_45, "--imports")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm t_4 (ATerm t)
                    {
                      t = term_k_24;
                      t = set_config_0(t);
                      t = term_p_17;
                      return(t);
                    }
                    ATerm u_4 (ATerm t)
                    {
                      t = term_l_24;
                      return(t);
                    }
                    t = Option_3(t, s_4, t_4, u_4);
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
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  f_45 :
  if(match_cons(g_45, sym__2))
    {
      h_45 = ATgetArgument(g_45, 0);
      i_45 = ATgetArgument(g_45, 1);
      t = SSL_copy(not_null(h_45), not_null(i_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  p_45 :
  if(match_cons(q_45, sym_stderr_0))
    {
      ATerm s_45 = NULL,u_45 = NULL;
      ATerm m_24;
      m_24 = t;
      {
        ATerm t_45 = NULL;
        t = SSLgetAnnotations(not_null(q_45));
        {
          t_45 = t;
          if(((s_45 != NULL) && (s_45 != t_45)))
            _fail(t_45);
          else
            s_45 = t_45;
        }
      }
      t = m_24;
      {
        ATerm v_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(s_45));
        {
          v_45 = t;
          if(((u_45 != NULL) && (u_45 != v_45)))
            _fail(v_45);
          else
            u_45 = v_45;
        }
        t = not_null(u_45);
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
  ATerm d_46 = NULL;
  d_46 = t;
  c_46 :
  if(match_cons(d_46, sym_stdout_0))
    {
      ATerm f_46 = NULL,h_46 = NULL;
      ATerm n_24;
      n_24 = t;
      {
        ATerm g_46 = NULL;
        t = SSLgetAnnotations(not_null(d_46));
        {
          g_46 = t;
          if(((f_46 != NULL) && (f_46 != g_46)))
            _fail(g_46);
          else
            f_46 = g_46;
        }
      }
      t = n_24;
      {
        ATerm i_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(f_46));
        {
          i_46 = t;
          if(((h_46 != NULL) && (h_46 != i_46)))
            _fail(i_46);
          else
            h_46 = i_46;
        }
        t = not_null(h_46);
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
  ATerm y_46 = NULL,z_46 = NULL;
  y_46 = t;
  v_46 :
  if(match_cons(y_46, sym_FILE_1))
    {
      z_46 = ATgetArgument(y_46, 0);
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_47 = NULL;
            ATerm c_47 = NULL;
            t = m_0(t);
            {
              c_47 = t;
              {
                if(((b_47 != NULL) && (b_47 != c_47)))
                  _fail(c_47);
                else
                  b_47 = c_47;
                {
                  ATerm q_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = q_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), not_null(b_47));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_46));
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_47 = NULL;
                  ATerm f_47 = NULL;
                  t = m_0(t);
                  {
                    f_47 = t;
                    {
                      if(((e_47 != NULL) && (e_47 != f_47)))
                        _fail(f_47);
                      else
                        e_47 = f_47;
                      {
                        ATerm u_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_24 = t;
                            int w_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(w_24);
                              }
                            else
                              {
                                t = v_24;
                                {
                                  ATerm x_24 = t;
                                  int y_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(y_24);
                                    }
                                  else
                                    {
                                      t = x_24;
                                      {
                                        ATerm g_47 = NULL;
                                        g_47 = t;
                                        if(((z_46 != NULL) && (z_46 != g_47)))
                                          _fail(g_47);
                                        else
                                          z_46 = g_47;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), not_null(e_47));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_46));
                  ;
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  {
                    ATerm j_47 = NULL;
                    t = m_0(t);
                    {
                      j_47 = t;
                      if(((z_46 != NULL) && (z_46 != j_47)))
                        _fail(j_47);
                      else
                        z_46 = j_47;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_46));
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
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(((ATgetType(z_47) == AT_LIST) && !(ATisEmpty(z_47))))
    {
      a_48 = ATgetFirst((ATermList) z_47);
      b_48 = (ATerm) ATgetNext((ATermList) z_47);
      t = not_null(b_48);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym__2))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      {
        ATerm z_24;
        z_24 = t;
        {
          ATerm q_48 = NULL;
          ATerm r_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_48), not_null(n_48));
          {
            ATerm a_25 = t;
            int b_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(b_25);
              }
            else
              {
                t = a_25;
                t = (ATerm) ATempty;
              }
            {
              r_48 = t;
              if(((q_48 != NULL) && (q_48 != r_48)))
                _fail(r_48);
              else
                q_48 = r_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_48), not_null(n_48), not_null(q_48));
            t = table_put_0(t);
          }
        }
        t = z_24;
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
  ATerm y_48 = NULL,z_48 = NULL,b_49 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm c_49 = NULL;
    ATerm d_49 = NULL,e_49 = NULL,k_49 = NULL;
    t = u_88(t);
    {
      c_49 = t;
      {
        if(((b_49 != NULL) && (b_49 != c_49)))
          _fail(c_49);
        else
          b_49 = c_49;
        {
          ATerm d_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_49), term_w_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = d_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_49 = t;
            x_48 :
            if(((ATgetType(d_49) == AT_LIST) && !(ATisEmpty(d_49))))
              {
                e_49 = ATgetFirst((ATermList) d_49);
                k_49 = (ATerm) ATgetNext((ATermList) d_49);
                {
                  if(((z_48 != NULL) && (z_48 != e_49)))
                    _fail(e_49);
                  else
                    z_48 = e_49;
                  {
                    if(((y_48 != NULL) && (y_48 != k_49)))
                      _fail(k_49);
                    else
                      y_48 = k_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_49), term_w_16, not_null(y_48));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_48);
                          {
                            ATerm v_4 (ATerm t)
                            {
                              ATerm l_49 = NULL;
                              l_49 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_49), not_null(l_49));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, v_4);
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
  t = c_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t_49 = t;
  t = SSL_remove(not_null(t_49));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_71 (ATerm), ATerm o_71 (ATerm))
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_71(t);
      t = o_71(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        t = o_71(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_88 (ATerm))
{
  ATerm y_49 = NULL;
  ATerm i_25;
  i_25 = t;
  {
    ATerm z_49 = NULL;
    ATerm f_50 = NULL;
    t = t_88(t);
    {
      z_49 = t;
      {
        if(((y_49 != NULL) && (y_49 != z_49)))
          _fail(z_49);
        else
          y_49 = z_49;
        {
          ATerm g_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_49), term_w_16);
          {
            ATerm j_25 = t;
            int k_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(k_25);
              }
            else
              {
                t = j_25;
                t = (ATerm) ATempty;
              }
            {
              g_50 = t;
              if(((f_50 != NULL) && (f_50 != g_50)))
                _fail(g_50);
              else
                f_50 = g_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_49), term_w_16, (ATerm) ATinsert(CheckATermList(not_null(f_50)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = i_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm z_97 (ATerm))
{
  ATerm l_50 = NULL,m_50 = NULL;
  ATerm w_4 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = begin_scope_1(t, w_4);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm z_25;
      z_25 = t;
      {
        ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_26;
            t = table_get_0(t);
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          n_50 = t;
          k_50 :
          if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
            {
              o_50 = ATgetFirst((ATermList) n_50);
              p_50 = (ATerm) ATgetNext((ATermList) n_50);
              {
                if(((m_50 != NULL) && (m_50 != o_50)))
                  _fail(o_50);
                else
                  m_50 = o_50;
                {
                  if(((l_50 != NULL) && (l_50 != p_50)))
                    _fail(p_50);
                  else
                    l_50 = p_50;
                  {
                    t = not_null(m_50);
                    {
                      ATerm y_4 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, y_4);
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
      t = z_25;
      {
        ATerm z_4 (ATerm t)
        {
          t = term_u_17;
          return(t);
        }
        t = end_scope_1(t, z_4);
      }
      return(t);
    }
    t = restore_always_2(t, z_97, x_4);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm a_98 (ATerm))
{
  ATerm e_5 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL;
        ATerm t_50 = NULL;
        t = term_z_17;
        {
          t = get_config_0(t);
          {
            t_50 = t;
            if(((s_50 != NULL) && (s_50 != t_50)))
              _fail(t_50);
            else
              s_50 = t_50;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_50));
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = term_t_11;
      }
    {
      t = a_98(t);
      {
        ATerm f_5 (ATerm t)
        {
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_j_9;
              t = get_config_0(t);
              ;
              LocalPopChoice(g_26);
            }
          else
            {
              t = f_26;
              t = term_l_26;
            }
          return(t);
        }
        t = copy_to_1(t, f_5);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, e_5);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm b_51 = NULL;
    b_51 = t;
    a_51 :
    if(!(match_string(b_51, "-v")))
      {
        if(!(match_string(b_51, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_n_26;
    t = set_config_0(t);
    t = term_o_26;
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  t = Option_3(t, g_5, h_5, i_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm i_51 = NULL;
    i_51 = t;
    c_51 :
    if(!(match_string(i_51, "-k")))
      {
        if(!(match_string(i_51, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm q_26;
    q_26 = t;
    {
      ATerm j_51 = NULL;
      ATerm r_51 = NULL;
      t = string_to_int_0(t);
      {
        r_51 = t;
        if(((j_51 != NULL) && (j_51 != r_51)))
          _fail(r_51);
        else
          j_51 = r_51;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(j_51));
        t = set_config_0(t);
      }
    }
    t = q_26;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_r_26;
    return(t);
  }
  t = ArgOption_3(t, k_5, n_5, o_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_51 = NULL;
  v_51 = t;
  t = SSL_string_to_int(not_null(v_51));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_5 (ATerm t)
      {
        ATerm d_52 = NULL;
        d_52 = t;
        y_51 :
        if(!(match_string(d_52, "-S")))
          {
            if(!(match_string(d_52, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        t = term_x_26;
        t = set_config_0(t);
        t = term_y_26;
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        t = term_a_27;
        return(t);
      }
      t = Option_3(t, v_5, c_6, e_6);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              ATerm e_52 = NULL;
              e_52 = t;
              z_51 :
              if(!(match_string(e_52, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_6 (ATerm t)
            {
              ATerm h_52 = NULL;
              ATerm e_27;
              e_27 = t;
              {
                ATerm f_52 = NULL;
                ATerm g_52 = NULL;
                t = string_to_int_0(t);
                {
                  g_52 = t;
                  if(((f_52 != NULL) && (f_52 != g_52)))
                    _fail(g_52);
                  else
                    f_52 = g_52;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(f_52));
                  t = set_config_0(t);
                }
              }
              t = e_27;
              {
                ATerm i_52 = NULL;
                i_52 = t;
                if(((h_52 != NULL) && (h_52 != i_52)))
                  _fail(i_52);
                else
                  h_52 = i_52;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_52));
              }
              return(t);
            }
            ATerm i_6 (ATerm t)
            {
              t = term_g_27;
              return(t);
            }
            t = ArgOption_3(t, g_6, h_6, i_6);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm j_6 (ATerm t)
              {
                ATerm j_52 = NULL;
                j_52 = t;
                c_52 :
                if(!(match_string(j_52, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_6 (ATerm t)
              {
                t = term_j_27;
                t = set_config_0(t);
                t = term_k_27;
                return(t);
              }
              ATerm l_6 (ATerm t)
              {
                t = term_m_27;
                return(t);
              }
              t = Option_3(t, j_6, k_6, l_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm p_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = p_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm p_52 = NULL;
    p_52 = t;
    m_52 :
    if(!(match_string(p_52, "-o")))
      {
        if(!(match_string(p_52, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    ATerm s_52 = NULL;
    ATerm s_27;
    s_27 = t;
    {
      ATerm q_52 = NULL;
      ATerm r_52 = NULL;
      r_52 = t;
      if(((q_52 != NULL) && (q_52 != r_52)))
        _fail(r_52);
      else
        q_52 = r_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(q_52));
        t = set_config_0(t);
      }
    }
    t = s_27;
    {
      ATerm t_52 = NULL;
      t_52 = t;
      if(((s_52 != NULL) && (s_52 != t_52)))
        _fail(t_52);
      else
        s_52 = t_52;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_52));
    }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_t_27;
    return(t);
  }
  t = ArgOption_3(t, m_6, r_6, s_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm t_6 (ATerm t)
        {
          ATerm x_52 = NULL;
          x_52 = t;
          w_52 :
          if(!(match_string(x_52, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_6 (ATerm t)
        {
          t = term_a_28;
          t = set_config_0(t);
          t = term_b_28;
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = term_c_28;
          return(t);
        }
        t = Option_3(t, t_6, u_6, z_6);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  d_53 = t;
  b_53 :
  if(match_string(d_53, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_53) == AT_LIST) && !(ATisEmpty(d_53))))
        {
          e_53 = ATgetFirst((ATermList) d_53);
          f_53 = (ATerm) ATgetNext((ATermList) d_53);
          c_53 :
          if(((ATgetType(f_53) == AT_LIST) && !(ATisEmpty(f_53))))
            {
              g_53 = ATgetFirst((ATermList) f_53);
              h_53 = (ATerm) ATgetNext((ATermList) f_53);
              {
                ATerm l_53 = NULL;
                ATerm d_28;
                d_28 = t;
                {
                  t = not_null(e_53);
                  t = j_0(t);
                }
                t = d_28;
                {
                  ATerm m_53 = NULL;
                  t = not_null(g_53);
                  {
                    t = k_0(t);
                    {
                      m_53 = t;
                      if(((l_53 != NULL) && (l_53 != m_53)))
                        _fail(m_53);
                      else
                        l_53 = m_53;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_53)), not_null(l_53));
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
  ATerm a_7 (ATerm t)
  {
    ATerm t_53 = NULL;
    t_53 = t;
    q_53 :
    if(!(match_string(t_53, "-i")))
      {
        if(!(match_string(t_53, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_7 (ATerm t)
  {
    ATerm w_53 = NULL;
    ATerm e_28;
    e_28 = t;
    {
      ATerm u_53 = NULL;
      ATerm v_53 = NULL;
      v_53 = t;
      if(((u_53 != NULL) && (u_53 != v_53)))
        _fail(v_53);
      else
        u_53 = v_53;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_17, not_null(u_53));
        t = set_config_0(t);
      }
    }
    t = e_28;
    {
      ATerm x_53 = NULL;
      x_53 = t;
      if(((w_53 != NULL) && (w_53 != x_53)))
        _fail(x_53);
      else
        w_53 = x_53;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_53));
    }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = term_f_28;
    return(t);
  }
  t = ArgOption_3(t, a_7, b_7, c_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm n_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = n_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_54 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm n_54 = NULL,o_54 = NULL;
      n_54 = t;
      l_54 :
      if(match_cons(n_54, sym_Program_1))
        {
          o_54 = ATgetArgument(n_54, 0);
          if(((m_54 != NULL) && (m_54 != o_54)))
            _fail(o_54);
          else
            m_54 = o_54;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, d_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_28), not_null(m_54)), term_w_28));
      {
        t = printnl_0(t);
        {
          t = term_x_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_28;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATempty, term_y_28));
  {
    t = printnl_0(t);
    {
      t = term_x_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  t = SSL_TicksToSeconds(not_null(s_54));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  w_54 :
  if(match_cons(x_54, sym__2))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      {
        ATerm z_28 = t;
        int a_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_54), not_null(z_54));
            ;
            LocalPopChoice(a_29);
          }
        else
          {
            t = z_28;
            t = SSL_addr(not_null(y_54), not_null(z_54));
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
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_84(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
        w_55 = t;
        u_55 :
        if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
          {
            x_55 = ATgetFirst((ATermList) w_55);
            y_55 = (ATerm) ATgetNext((ATermList) w_55);
            {
              ATerm k_56 = NULL;
              ATerm l_56 = NULL;
              t = not_null(y_55);
              {
                t = foldr_2(t, u_84, v_84);
                {
                  l_56 = t;
                  if(((k_56 != NULL) && (k_56 != l_56)))
                    _fail(l_56);
                  else
                    k_56 = l_56;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(k_56));
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
  ATerm u_56 = NULL;
  ATerm i_57 = NULL;
  u_56 = t;
  {
    ATerm j_57 = NULL;
    ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
    t = not_null(u_56);
    {
      j_57 = t;
      {
        t = SSL_explode_term(not_null(j_57));
        {
          l_57 = t;
          t_56 :
          if(match_cons(l_57, sym__2))
            {
              m_57 = ATgetArgument(l_57, 0);
              n_57 = ATgetArgument(l_57, 1);
              if(((i_57 != NULL) && (i_57 != n_57)))
                _fail(n_57);
              else
                i_57 = n_57;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_57);
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
    ATerm e_7 (ATerm t)
    {
      t = term_u_26;
      return(t);
    }
    t = crush_2(t, e_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
  f_58 = t;
  c_58 :
  if(match_cons(f_58, sym__2))
    {
      g_58 = ATgetArgument(f_58, 0);
      h_58 = ATgetArgument(f_58, 1);
      {
        ATerm g_29;
        g_29 = t;
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_58), not_null(h_58));
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              t = SSL_gtr(not_null(g_58), not_null(h_58));
            }
        }
        t = g_29;
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
  ATerm w_58 = NULL;
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
      x_58 = t;
      v_58 :
      if(match_cons(x_58, sym__2))
        {
          y_58 = ATgetArgument(x_58, 0);
          z_58 = ATgetArgument(x_58, 1);
          {
            if(((w_58 != NULL) && (w_58 != y_58)))
              _fail(y_58);
            else
              w_58 = y_58;
            if(((w_58 != NULL) && (w_58 != z_58)))
              _fail(z_58);
            else
              w_58 = z_58;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_91 (ATerm))
{
  ATerm f_7 (ATerm t)
  {
    ATerm v_29;
    v_29 = t;
    {
      ATerm c_59 = NULL;
      ATerm d_59 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          d_59 = t;
          if(((c_59 != NULL) && (c_59 != d_59)))
            _fail(d_59);
          else
            c_59 = d_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), term_x_11);
        t = geq_0(t);
      }
    }
    t = v_29;
    t = n_91(t);
    return(t);
  }
  t = try_1(t, f_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm h_59 = NULL,j_59 = NULL;
    ATerm w_29;
    w_29 = t;
    {
      ATerm i_59 = NULL;
      t = run_time_0(t);
      {
        i_59 = t;
        if(((h_59 != NULL) && (h_59 != i_59)))
          _fail(i_59);
        else
          h_59 = i_59;
      }
    }
    t = w_29;
    {
      ATerm k_59 = NULL;
      t = term_x_29;
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
        t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_29), not_null(h_59)), term_y_29), not_null(j_59)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_7);
  {
    t = term_u_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_59 = NULL;
  r_59 = t;
  q_59 :
  if(match_cons(r_59, sym_Version_0))
    {
      ATerm t_59 = NULL,v_59 = NULL;
      ATerm a_30;
      a_30 = t;
      {
        ATerm u_59 = NULL;
        t = SSLgetAnnotations(not_null(r_59));
        {
          u_59 = t;
          if(((t_59 != NULL) && (t_59 != u_59)))
            _fail(u_59);
          else
            t_59 = u_59;
        }
      }
      t = a_30;
      {
        ATerm w_59 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_59));
        {
          w_59 = t;
          if(((v_59 != NULL) && (v_59 != w_59)))
            _fail(w_59);
          else
            v_59 = w_59;
        }
        t = not_null(v_59);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_90 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_7);
  t = h_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_60 = NULL;
  d_60 = t;
  t = SSL_table_create(not_null(d_60));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_60 = NULL;
  h_60 = t;
  {
    ATerm f_30;
    f_30 = t;
    {
      t = term_g_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_30, term_h_30, not_null(h_60));
          t = table_put_0(t);
        }
      }
    }
    t = f_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_60 = NULL;
  l_60 = t;
  t = SSL_table_destroy(not_null(l_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_60 = NULL;
  p_60 = t;
  t = SSL_exit(not_null(p_60));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  s_60 :
  if(((ATgetType(t_60) == AT_LIST) && ATisEmpty(t_60)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_60) == AT_LIST) && !(ATisEmpty(t_60))))
        {
          u_60 = ATgetFirst((ATermList) t_60);
          v_60 = (ATerm) ATgetNext((ATermList) t_60);
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
  ATerm i_30;
  i_30 = t;
  {
    ATerm y_60 = NULL;
    ATerm b_61 = NULL;
    ATerm j_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = j_30;
        {
          ATerm z_60 = NULL;
          ATerm a_61 = NULL;
          a_61 = t;
          if(((z_60 != NULL) && (z_60 != a_61)))
            _fail(a_61);
          else
            z_60 = a_61;
          t = (ATerm) ATinsert(ATempty, not_null(z_60));
        }
      }
    {
      b_61 = t;
      if(((y_60 != NULL) && (y_60 != b_61)))
        _fail(b_61);
      else
        y_60 = b_61;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_26, not_null(y_60));
      t = printnl_0(t);
    }
  }
  t = i_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  m_61 = t;
  j_61 :
  if(((ATgetType(m_61) == AT_LIST) && !(ATisEmpty(m_61))))
    {
      k_61 = ATgetFirst((ATermList) m_61);
      l_61 = (ATerm) ATgetNext((ATermList) m_61);
      {
        ATerm p_61 = NULL;
        t = not_null(l_61);
        {
          ATerm s_30;
          s_30 = t;
          {
            ATerm q_61 = NULL,s_61 = NULL,u_61 = NULL;
            ATerm y_30;
            y_30 = t;
            {
              ATerm r_61 = NULL;
              t = i_0(t);
              {
                r_61 = t;
                if(((q_61 != NULL) && (q_61 != r_61)))
                  _fail(r_61);
                else
                  q_61 = r_61;
              }
            }
            t = y_30;
            {
              ATerm t_61 = NULL;
              t = not_null(k_61);
              {
                t = g_0(t);
                {
                  t_61 = t;
                  if(((s_61 != NULL) && (s_61 != t_61)))
                    _fail(t_61);
                  else
                    s_61 = t_61;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_61)), not_null(s_61));
                {
                  u_61 = t;
                  if(((p_61 != NULL) && (p_61 != u_61)))
                    _fail(u_61);
                  else
                    p_61 = u_61;
                }
              }
            }
          }
          t = s_30;
          {
            ATerm l_7 (ATerm t)
            {
              t = not_null(p_61);
              return(t);
            }
            t = reverse_acc_2(t, g_0, l_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_61) == AT_LIST) && ATisEmpty(m_61)))
        {
          {
            t = term_p_17;
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
  ATerm m_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm f_62 = NULL,g_62 = NULL;
  f_62 = t;
  e_62 :
  if(match_cons(f_62, sym_Program_1))
    {
      g_62 = ATgetArgument(f_62, 0);
      {
        ATerm j_62 = NULL,l_62 = NULL;
        ATerm k_62 = NULL;
        t = SSLgetAnnotations(not_null(f_62));
        {
          k_62 = t;
          if(((j_62 != NULL) && (j_62 != k_62)))
            _fail(k_62);
          else
            j_62 = k_62;
        }
        {
          t = not_null(g_62);
          {
            ATerm n_62 = NULL;
            t = d_65(t);
            {
              l_62 = t;
              {
                ATerm o_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_62)), not_null(j_62));
                {
                  o_62 = t;
                  if(((n_62 != NULL) && (n_62 != o_62)))
                    _fail(o_62);
                  else
                    n_62 = o_62;
                }
                t = not_null(n_62);
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
  ATerm x_62 = NULL;
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_62 = NULL;
      t = term_x_29;
      {
        t = get_config_0(t);
        {
          y_62 = t;
          if(((x_62 != NULL) && (x_62 != y_62)))
            _fail(y_62);
          else
            x_62 = y_62;
        }
      }
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      {
        ATerm n_7 (ATerm t)
        {
          ATerm o_7 (ATerm t)
          {
            ATerm z_62 = NULL;
            z_62 = t;
            if(((x_62 != NULL) && (x_62 != z_62)))
              _fail(z_62);
            else
              x_62 = z_62;
            return(t);
          }
          t = Program_1(t, o_7);
          return(t);
        }
        t = option_defined_1(t, n_7);
      }
    }
  {
    ATerm p_7 (ATerm t)
    {
      ATerm t_7 (ATerm t)
      {
        t = not_null(x_62);
        return(t);
      }
      t = short_description_1(t, t_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_7);
    {
      t = term_b_31;
      {
        t = echo_0(t);
        {
          t = term_o_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_7 (ATerm t)
                {
                  ATerm a_63 = NULL;
                  ATerm b_63 = NULL;
                  b_63 = t;
                  if(((a_63 != NULL) && (a_63 != b_63)))
                    _fail(b_63);
                  else
                    a_63 = b_63;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_63)), term_p_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_7);
                {
                  ATerm y_7 (ATerm t)
                  {
                    ATerm c_63 = NULL;
                    ATerm d_63 = NULL;
                    ATerm b_8 (ATerm t)
                    {
                      t = not_null(x_62);
                      return(t);
                    }
                    t = long_description_1(t, b_8);
                    {
                      d_63 = t;
                      if(((c_63 != NULL) && (c_63 != d_63)))
                        _fail(d_63);
                      else
                        c_63 = d_63;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_63)), term_q_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_7);
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
ATerm printnl_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
  k_63 = t;
  j_63 :
  if(match_cons(k_63, sym__2))
    {
      l_63 = ATgetArgument(k_63, 0);
      m_63 = ATgetArgument(k_63, 1);
      {
        ATerm r_31;
        r_31 = t;
        t = SSL_printnl(not_null(l_63), not_null(m_63));
        t = r_31;
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
  ATerm s_31;
  s_31 = t;
  {
    ATerm r_63 = NULL;
    ATerm s_63 = NULL;
    s_63 = t;
    if(((r_63 != NULL) && (r_63 != s_63)))
      _fail(s_63);
    else
      r_63 = s_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATempty, not_null(r_63)));
      t = printnl_0(t);
    }
  }
  t = s_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm t_31;
  t_31 = t;
  {
    t = f_89(t);
    t = debug_0(t);
  }
  t = t_31;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm z_63 = NULL,a_64 = NULL;
  z_63 = t;
  y_63 :
  if(match_cons(z_63, sym_Undefined_1))
    {
      a_64 = ATgetArgument(z_63, 0);
      {
        ATerm d_64 = NULL,f_64 = NULL;
        ATerm e_64 = NULL;
        t = SSLgetAnnotations(not_null(z_63));
        {
          e_64 = t;
          if(((d_64 != NULL) && (d_64 != e_64)))
            _fail(e_64);
          else
            d_64 = e_64;
        }
        {
          t = not_null(a_64);
          {
            ATerm h_64 = NULL;
            t = e_65(t);
            {
              f_64 = t;
              {
                ATerm i_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_64)), not_null(d_64));
                {
                  i_64 = t;
                  if(((h_64 != NULL) && (h_64 != i_64)))
                    _fail(i_64);
                  else
                    h_64 = i_64;
                }
                t = not_null(h_64);
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
ATerm fetch_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm n_64 (ATerm t)
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_78, _id);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = Cons_2(t, _id, n_64);
      }
    return(t);
  }
  t = n_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_92 (ATerm))
{
  t = fetch_1(t, q_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_64 = NULL;
  s_64 = t;
  r_64 :
  if(match_cons(s_64, sym_Help_0))
    {
      ATerm u_64 = NULL,w_64 = NULL;
      ATerm a_32;
      a_32 = t;
      {
        ATerm v_64 = NULL;
        t = SSLgetAnnotations(not_null(s_64));
        {
          v_64 = t;
          if(((u_64 != NULL) && (u_64 != v_64)))
            _fail(v_64);
          else
            u_64 = v_64;
        }
      }
      t = a_32;
      {
        ATerm x_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_64));
        {
          x_64 = t;
          if(((w_64 != NULL) && (w_64 != x_64)))
            _fail(x_64);
          else
            w_64 = x_64;
        }
        t = not_null(w_64);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_70 (ATerm))
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_70(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  c_65 :
  if(match_cons(f_65, sym__2))
    {
      g_65 = ATgetArgument(f_65, 0);
      h_65 = ATgetArgument(f_65, 1);
      t = SSL_table_get(not_null(g_65), not_null(h_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,t_65 = NULL;
  p_65 = t;
  o_65 :
  if(match_cons(p_65, sym__3))
    {
      q_65 = ATgetArgument(p_65, 0);
      r_65 = ATgetArgument(p_65, 1);
      t_65 = ATgetArgument(p_65, 2);
      {
        ATerm d_32;
        d_32 = t;
        {
          ATerm x_65 = NULL;
          ATerm y_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_65), not_null(r_65));
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
                t = (ATerm) ATempty;
              }
            {
              y_65 = t;
              if(((x_65 != NULL) && (x_65 != y_65)))
                _fail(y_65);
              else
                x_65 = y_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_65), not_null(r_65), (ATerm) ATinsert(CheckATermList(not_null(x_65)), not_null(t_65)));
            t = table_put_0(t);
          }
        }
        t = d_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm c_66 = NULL;
  ATerm d_66 = NULL;
  t = term_p_17;
  {
    t = v_93(t);
    {
      d_66 = t;
      if(((c_66 != NULL) && (c_66 != d_66)))
        _fail(d_66);
      else
        c_66 = d_66;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_31, term_n_31, not_null(c_66));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  i_66 :
  if(match_string(j_66, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(j_66) == AT_LIST) && !(ATisEmpty(j_66))))
        {
          k_66 = ATgetFirst((ATermList) j_66);
          l_66 = (ATerm) ATgetNext((ATermList) j_66);
          {
            ATerm o_66 = NULL;
            ATerm g_32;
            g_32 = t;
            {
              t = not_null(k_66);
              t = a_0(t);
            }
            t = g_32;
            {
              ATerm p_66 = NULL;
              t = term_p_17;
              {
                t = c_0(t);
                {
                  p_66 = t;
                  if(((o_66 != NULL) && (o_66 != p_66)))
                    _fail(p_66);
                  else
                    o_66 = p_66;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_66)), not_null(o_66));
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
  ATerm c_8 (ATerm t)
  {
    ATerm u_66 = NULL;
    u_66 = t;
    t_66 :
    if(!(match_string(u_66, "--help")))
      {
        if(!(match_string(u_66, "-h")))
          {
            if(!(match_string(u_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    t = term_j_32;
    {
      t = set_config_0(t);
      t = term_k_32;
    }
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = term_o_32;
    return(t);
  }
  t = Option_3(t, c_8, d_8, e_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  w_66 :
  if(((ATgetType(x_66) == AT_LIST) && !(ATisEmpty(x_66))))
    {
      y_66 = ATgetFirst((ATermList) x_66);
      z_66 = (ATerm) ATgetNext((ATermList) x_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_66)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_60 (ATerm), ATerm c_60 (ATerm))
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  i_67 :
  if(((ATgetType(j_67) == AT_LIST) && !(ATisEmpty(j_67))))
    {
      k_67 = ATgetFirst((ATermList) j_67);
      l_67 = (ATerm) ATgetNext((ATermList) j_67);
      {
        ATerm p_67 = NULL,r_67 = NULL;
        ATerm q_67 = NULL;
        t = SSLgetAnnotations(not_null(j_67));
        {
          q_67 = t;
          if(((p_67 != NULL) && (p_67 != q_67)))
            _fail(q_67);
          else
            p_67 = q_67;
        }
        {
          t = not_null(k_67);
          {
            ATerm t_67 = NULL;
            t = b_60(t);
            {
              r_67 = t;
              {
                t = not_null(l_67);
                {
                  ATerm v_67 = NULL;
                  t = c_60(t);
                  {
                    t_67 = t;
                    {
                      ATerm w_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_67)), not_null(r_67)), not_null(p_67));
                      {
                        w_67 = t;
                        if(((v_67 != NULL) && (v_67 != w_67)))
                          _fail(w_67);
                        else
                          v_67 = w_67;
                      }
                      t = not_null(v_67);
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
  ATerm g_68 = NULL;
  g_68 = t;
  f_68 :
  if(((ATgetType(g_68) == AT_LIST) && ATisEmpty(g_68)))
    {
      {
        ATerm i_68 = NULL,k_68 = NULL;
        ATerm p_32;
        p_32 = t;
        {
          ATerm j_68 = NULL;
          t = SSLgetAnnotations(not_null(g_68));
          {
            j_68 = t;
            if(((i_68 != NULL) && (i_68 != j_68)))
              _fail(j_68);
            else
              i_68 = j_68;
          }
        }
        t = p_32;
        {
          ATerm l_68 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_68));
          {
            l_68 = t;
            if(((k_68 != NULL) && (k_68 != l_68)))
              _fail(l_68);
            else
              k_68 = l_68;
          }
          t = not_null(k_68);
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
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  q_68 :
  if(match_cons(r_68, sym__2))
    {
      s_68 = ATgetArgument(r_68, 0);
      t_68 = ATgetArgument(r_68, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(s_68), not_null(t_68));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_93 (ATerm))
{
  ATerm r_32;
  r_32 = t;
  {
    ATerm f_8 (ATerm t)
    {
      t = term_s_32;
      t = t_93(t);
      return(t);
    }
    t = try_1(t, f_8);
  }
  t = r_32;
  {
    ATerm h_8 (ATerm t)
    {
      ATerm b_69 = NULL;
      ATerm t_32;
      t_32 = t;
      {
        ATerm z_68 = NULL;
        ATerm a_69 = NULL;
        a_69 = t;
        if(((z_68 != NULL) && (z_68 != a_69)))
          _fail(a_69);
        else
          z_68 = a_69;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_29, not_null(z_68));
          t = set_config_0(t);
        }
      }
      t = t_32;
      {
        ATerm c_69 = NULL;
        c_69 = t;
        if(((b_69 != NULL) && (b_69 != c_69)))
          _fail(c_69);
        else
          b_69 = c_69;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_69));
      }
      return(t);
    }
    ATerm k_8 (ATerm t)
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_32 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_33);
            }
          else
            {
              t = w_32;
              {
                t = t_93(t);
                t = Cons_2(t, _id, k_8);
              }
            }
          ;
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_8, k_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  ATerm c_33;
  c_33 = t;
  {
    ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
    l_69 = t;
    h_69 :
    if(match_cons(l_69, sym__3))
      {
        m_69 = ATgetArgument(l_69, 0);
        n_69 = ATgetArgument(l_69, 1);
        o_69 = ATgetArgument(l_69, 2);
        {
          if(((i_69 != NULL) && (i_69 != m_69)))
            _fail(m_69);
          else
            i_69 = m_69;
          {
            if(((j_69 != NULL) && (j_69 != n_69)))
              _fail(n_69);
            else
              j_69 = n_69;
            {
              if(((k_69 != NULL) && (k_69 != o_69)))
                _fail(o_69);
              else
                k_69 = o_69;
              t = SSL_table_put(not_null(i_69), not_null(j_69), not_null(k_69));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm r_69 = NULL;
  ATerm d_33;
  d_33 = t;
  {
    t = term_f_33;
    t = table_put_0(t);
  }
  t = d_33;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm n_33 = t;
      int o_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_93(t);
          ;
          LocalPopChoice(o_33);
        }
      else
        {
          t = n_33;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_8);
    {
      ATerm o_8 (ATerm t)
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_33;
            r_33 = t;
            {
              ATerm w_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_33);
                }
              else
                {
                  t = w_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_33;
            {
              t = system_usage_0(t);
              {
                t = term_u_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            {
              ATerm p_8 (ATerm t)
              {
                ATerm q_8 (ATerm t)
                {
                  ATerm s_69 = NULL;
                  s_69 = t;
                  if(((r_69 != NULL) && (r_69 != s_69)))
                    _fail(s_69);
                  else
                    r_69 = s_69;
                  return(t);
                }
                t = Undefined_1(t, q_8);
                return(t);
              }
              t = option_defined_1(t, p_8);
              {
                ATerm r_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_69)), term_y_33);
                  return(t);
                }
                t = say_1(t, r_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_x_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_8);
      {
        ATerm z_33;
        z_33 = t;
        {
          t = term_m_31;
          t = table_destroy_0(t);
        }
        t = z_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm))
{
  t = parse_options_1(t, n_90);
  {
    t = store_options_0(t);
    {
      t = p_90(t);
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_90);
            ;
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            {
              ATerm l_34 = t;
              int m_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_90(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_34);
                }
              else
                {
                  t = l_34;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm r_90 (ATerm), ATerm s_90 (ATerm))
{
  t = option_wrap_4(t, r_90, default_usage_0, _id, s_90);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm e_98 (ATerm), ATerm f_98 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm n_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_98(t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = n_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    t = xtc_io_1(t, f_98);
    return(t);
  }
  t = option_wrap_2(t, s_8, t_8);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm))
{
  t = xtc_io_wrap_2(t, k_98, l_98);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL;
  ATerm y_8 (ATerm t)
  {
    ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
    t = pack_stratego_modules_0(t);
    {
      y_69 = t;
      v_69 :
      if(match_cons(y_69, sym__2))
        {
          z_69 = ATgetArgument(y_69, 0);
          a_70 = ATgetArgument(y_69, 1);
          {
            if(((w_69 != NULL) && (w_69 != z_69)))
              _fail(z_69);
            else
              w_69 = z_69;
            {
              if(((x_69 != NULL) && (x_69 != a_70)))
                _fail(a_70);
              else
                x_69 = a_70;
              {
                ATerm q_34 = t;
                int r_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_24;
                    {
                      t = get_config_0(t);
                      {
                        t = not_null(w_69);
                        {
                          ATerm z_8 (ATerm t)
                          {
                            t = get_filename_0(t);
                            t = basename_0(t);
                            return(t);
                          }
                          t = map_1(t, z_8);
                          t = write_to_text_0(t);
                        }
                      }
                    }
                    ;
                    LocalPopChoice(r_34);
                  }
                else
                  {
                    t = q_34;
                    {
                      t = not_null(w_69);
                      {
                        t = create_dep_file_0(t);
                        {
                          t = not_null(x_69);
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
  t = xtc_iowrap_2(t, pack_stratego_options_0, y_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
