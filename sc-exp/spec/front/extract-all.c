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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_m_31;
ATerm term_e_31;
ATerm term_w_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_m_25;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_q_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_e_9;
ATerm term_u_7;
ATerm term_l_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Op_2, term_z_11, (ATerm) ATempty);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_g_24, term_q_15);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_v_19);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_19);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_e_26, term_q_15);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_q_15);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_q_15);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__3, term_c_30, term_d_30, (ATerm) ATempty);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm));
ATerm Let_2 (ATerm, ATerm w_78 (ATerm), ATerm x_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_101 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm p_92 (ATerm), ATerm q_92 (ATerm));
ATerm alltd_1 (ATerm, ATerm j_94 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm substitute_1 (ATerm, ATerm c_92 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm));
ATerm Prim_2 (ATerm, ATerm k_77 (ATerm), ATerm l_77 (ATerm));
ATerm Explode_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm Op_2 (ATerm, ATerm o_79 (ATerm), ATerm p_79 (ATerm));
ATerm pat_td_1 (ATerm, ATerm i_88 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm n_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm y_102 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm));
ATerm Con_3 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm oncetd_1 (ATerm, ATerm v_93 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_92 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm t_96 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm w_106 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm l_97 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm w_103 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm));
ATerm zip_1 (ATerm, ATerm i_97 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_103 (ATerm), ATerm o_103 (ATerm));
ATerm for_3 (ATerm, ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm s_103 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm h_118 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_119 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm f_119 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_104 (ATerm), ATerm f_104 (ATerm));
ATerm union_1 (ATerm, ATerm a_104 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm t_79 (ATerm));
ATerm Cons_2 (ATerm, ATerm i_77 (ATerm), ATerm j_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_79 (ATerm));
ATerm _2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_89 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_112 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm k_111 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_114 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_110 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_96 (ATerm), ATerm e_96 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_106 (ATerm), ATerm i_106 (ATerm));
ATerm crush_2 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_112 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_115 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_117 (ATerm));
ATerm map_1 (ATerm, ATerm a_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_117 (ATerm));
ATerm Program_1 (ATerm, ATerm t_83 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_83 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_89 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_116 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_95 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_117 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_117 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_117 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm p_115 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm x_114 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_114 (ATerm), ATerm u_114 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_114 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(((ATgetType(i_3) == AT_LIST) && ATisEmpty(i_3)))
    {
      {
        ATerm k_4 = NULL,m_4 = NULL;
        ATerm j_6;
        j_6 = t;
        {
          ATerm l_4 = NULL;
          t = SSLgetAnnotations(not_null(i_3));
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        t = j_6;
        {
          ATerm o_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            o_5 = t;
            if(((m_4 != NULL) && (m_4 != o_5)))
              _fail(o_5);
            else
              m_4 = o_5;
          }
          t = not_null(m_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  g_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_6), not_null(m_6)), term_o_6), not_null(l_6)), term_n_6);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
  t_6 = t;
  r_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      x_6 = ATgetArgument(t_6, 1);
      s_6 :
      if(match_cons(u_6, sym_Mod_2))
        {
          v_6 = ATgetArgument(u_6, 0);
          w_6 = ATgetArgument(u_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_6), not_null(x_6)), term_o_6), not_null(w_6)), term_q_6), not_null(v_6)), term_n_6);
            t = error_0(t);
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
ATerm MissingDefs_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  d_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      e_7 :
      if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
        {
          i_7 = ATgetFirst((ATermList) h_7);
          j_7 = (ATerm) ATgetNext((ATermList) h_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_7)), not_null(i_7));
            {
              ATerm f_0 (ATerm t)
              {
                ATerm y_6 = t;
                int z_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(z_6);
                  }
                else
                  {
                    t = y_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, f_0);
            }
            t = not_null(g_7);
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  p_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      q_7 :
      if(((ATgetType(t_7) == AT_LIST) && ATisEmpty(t_7)))
        {
          t = not_null(s_7);
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
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_7;
  a_7 = t;
  {
    t = error_0(t);
    {
      t = term_b_7;
      t = exit_0(t);
    }
  }
  t = a_7;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm k_7;
  k_7 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = k_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  j_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      k_8 :
      if(match_int(n_8, 0))
        {
          ATerm m_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
              t = not_null(m_8);
              {
                t = Arities_0(t);
                {
                  p_8 = t;
                  e_8 :
                  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
                    {
                      q_8 = ATgetFirst((ATermList) p_8);
                      r_8 = (ATerm) ATgetNext((ATermList) p_8);
                      f_8 :
                      if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                        {
                          s_8 = ATgetFirst((ATermList) r_8);
                          t_8 = (ATerm) ATgetNext((ATermList) r_8);
                          {
                            ATerm o_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  ATerm u_8 = NULL;
                                  u_8 = t;
                                  d_8 :
                                  if(!(match_int(u_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, h_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = o_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_u_7);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
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
              ;
              LocalPopChoice(n_7);
            }
          else
            {
              t = m_7;
              {
                ATerm w_8 = NULL;
                ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
                t = not_null(m_8);
                {
                  t = Arities_0(t);
                  {
                    x_8 = t;
                    h_8 :
                    if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
                      {
                        y_8 = ATgetFirst((ATermList) x_8);
                        z_8 = (ATerm) ATgetNext((ATermList) x_8);
                        i_8 :
                        if(((ATgetType(z_8) == AT_LIST) && ATisEmpty(z_8)))
                          {
                            {
                              if(((w_8 != NULL) && (w_8 != y_8)))
                                _fail(y_8);
                              else
                                w_8 = y_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
                                t = Definitions_0(t);
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
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
ATerm Rec_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Rec_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(k_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        {
          t = not_null(l_9);
          {
            ATerm u_9 = NULL;
            t = u_78(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = v_78(t);
                  {
                    u_9 = t;
                    {
                      ATerm x_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_9), not_null(u_9)), not_null(q_9));
                      {
                        x_9 = t;
                        if(((w_9 != NULL) && (w_9 != x_9)))
                          _fail(x_9);
                        else
                          w_9 = x_9;
                      }
                      t = not_null(w_9);
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
ATerm SDef_3 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_SDef_3))
    {
      l_10 = ATgetArgument(k_10, 0);
      m_10 = ATgetArgument(k_10, 1);
      n_10 = ATgetArgument(k_10, 2);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(k_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(l_10);
          {
            ATerm w_10 = NULL;
            t = y_78(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = z_78(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = a_79(t);
                        {
                          y_10 = t;
                          {
                            ATerm b_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_10), not_null(w_10), not_null(y_10)), not_null(s_10));
                            {
                              b_11 = t;
                              if(((a_11 != NULL) && (a_11 != b_11)))
                                _fail(b_11);
                              else
                                a_11 = b_11;
                            }
                            t = not_null(a_11);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm w_78 (ATerm), ATerm x_78 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm u_11 = NULL,w_11 = NULL;
        ATerm v_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm y_11 = NULL;
            t = w_78(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = x_78(t);
                  {
                    y_11 = t;
                    {
                      ATerm b_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_11), not_null(y_11)), not_null(u_11));
                      {
                        b_12 = t;
                        if(((a_12 != NULL) && (a_12 != b_12)))
                          _fail(b_12);
                        else
                          a_12 = b_12;
                      }
                      t = not_null(a_12);
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
ATerm sboundin_3 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm))
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, w_91, w_91);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, y_91, y_91, w_91);
            ;
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = Rec_2(t, y_91, w_91);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Rec_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_SDef_3))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      {
        t = not_null(v_12);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
            a_13 = t;
            r_12 :
            if(match_cons(a_13, sym_VarDec_2))
              {
                b_13 = ATgetArgument(a_13, 0);
                c_13 = ATgetArgument(a_13, 1);
                t = not_null(b_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Let_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        t = not_null(l_13);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
            p_13 = t;
            i_13 :
            if(match_cons(p_13, sym_SDef_3))
              {
                q_13 = ATgetArgument(p_13, 0);
                r_13 = ATgetArgument(p_13, 1);
                s_13 = ATgetArgument(p_13, 2);
                t = not_null(q_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm))
{
  ATerm c_14 = NULL;
  ATerm e_14 = NULL;
  c_14 = t;
  {
    ATerm f_14 = NULL;
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = not_null(c_14);
    {
      f_14 = t;
      {
        t = SSL_explode_term(not_null(f_14));
        {
          h_14 = t;
          b_14 :
          if(match_cons(h_14, sym__2))
            {
              i_14 = ATgetArgument(h_14, 0);
              j_14 = ATgetArgument(h_14, 1);
              if(((e_14 != NULL) && (e_14 != j_14)))
                _fail(j_14);
              else
                e_14 = j_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_14);
      t = foldr_3(t, n_104, o_104, p_104);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_101 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_100(t);
          ;
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm g_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm v_8;
          v_8 = t;
          {
            ATerm p_14 = NULL;
            t = a_101(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = v_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, t_0);
              t = diff_1(t, c_101);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = b_101(t, r_0, q_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          ;
          LocalPopChoice(o_8);
        }
      else
        {
          t = g_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, q_14);
          }
        }
      return(t);
    }
    t = split_2(t, o_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
    z_14 = t;
    u_14 :
    if(match_cons(z_14, sym_Call_2))
      {
        a_15 = ATgetArgument(z_14, 0);
        c_15 = ATgetArgument(z_14, 1);
        v_14 :
        if(match_cons(a_15, sym_SVar_1))
          {
            b_15 = ATgetArgument(a_15, 0);
            {
              ATerm f_15 = NULL;
              ATerm g_15 = NULL;
              t = not_null(c_15);
              {
                t = length_0(t);
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(f_15)));
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
  ATerm x_0 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
          ATerm c_9 = t;
          int d_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(d_9);
            }
          else
            {
              t = c_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
    h_15 = t;
    x_14 :
    if(match_cons(h_15, sym__2))
      {
        i_15 = ATgetArgument(h_15, 0);
        l_15 = ATgetArgument(h_15, 1);
        y_14 :
        if(match_cons(i_15, sym__2))
          {
            j_15 = ATgetArgument(i_15, 0);
            k_15 = ATgetArgument(i_15, 1);
            if(((j_15 != NULL) && (j_15 != l_15)))
              _fail(l_15);
            else
              j_15 = l_15;
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
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  {
    ATerm c_16 = NULL;
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
    t = not_null(x_15);
    {
      c_16 = t;
      {
        t = SSL_explode_term(not_null(c_16));
        {
          e_16 = t;
          t_15 :
          if(match_cons(e_16, sym__2))
            {
              f_16 = ATgetArgument(e_16, 0);
              g_16 = ATgetArgument(e_16, 1);
              u_15 :
              if(match_string(f_16, ""))
                {
                  v_15 :
                  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                    {
                      h_16 = ATgetFirst((ATermList) g_16);
                      i_16 = (ATerm) ATgetNext((ATermList) g_16);
                      w_15 :
                      if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
                        {
                          j_16 = ATgetFirst((ATermList) i_16);
                          k_16 = (ATerm) ATgetNext((ATermList) i_16);
                          {
                            if(((z_15 != NULL) && (z_15 != h_16)))
                              _fail(h_16);
                            else
                              z_15 = h_16;
                            {
                              if(((b_16 != NULL) && (b_16 != j_16)))
                                _fail(j_16);
                              else
                                b_16 = j_16;
                              if(((a_16 != NULL) && (a_16 != k_16)))
                                _fail(k_16);
                              else
                                a_16 = k_16;
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
    t = not_null(b_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_e_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm f_9;
    f_9 = t;
    {
      ATerm r_16 = NULL;
      t = Fst_0(t);
      {
        r_16 = t;
        if(((q_16 != NULL) && (q_16 != r_16)))
          _fail(r_16);
        else
          q_16 = r_16;
      }
    }
    t = f_9;
    {
      ATerm t_16 = NULL;
      t = Snd_0(t);
      {
        t_16 = t;
        if(((s_16 != NULL) && (s_16 != t_16)))
          _fail(t_16);
        else
          s_16 = t_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_16), not_null(s_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  a_17 = t;
  x_16 :
  if(match_cons(a_17, sym_Call_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      d_17 = ATgetArgument(a_17, 1);
      y_16 :
      if(match_cons(b_17, sym_SVar_1))
        {
          c_17 = ATgetArgument(b_17, 0);
          z_16 :
          if(((ATgetType(d_17) == AT_LIST) && ATisEmpty(d_17)))
            {
              t = not_null(c_17);
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
ATerm Look2_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      i_17 :
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          n_17 = (ATerm) ATgetNext((ATermList) l_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(n_17));
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
ATerm Look1_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  s_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      t_17 :
      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
        {
          y_17 = ATgetFirst((ATermList) x_17);
          b_18 = (ATerm) ATgetNext((ATermList) x_17);
          u_17 :
          if(match_cons(y_17, sym__2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              {
                ATerm d_18 = NULL;
                if(((w_17 != NULL) && (w_17 != z_17)))
                  _fail(z_17);
                else
                  w_17 = z_17;
                {
                  if(((d_18 != NULL) && (d_18 != a_18)))
                    _fail(a_18);
                  else
                    d_18 = a_18;
                  t = not_null(d_18);
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
ATerm lookup_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm p_92 (ATerm), ATerm q_92 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = p_92(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = q_92(t);
            {
              o_18 = t;
              if(((m_18 != NULL) && (m_18 != o_18)))
                _fail(o_18);
              else
                m_18 = o_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(m_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm j_94 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm i_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_94(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = i_9;
        t = _all(t, s_18);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm c_19 = NULL;
        if(((c_19 != NULL) && (c_19 != z_18)))
          _fail(z_18);
        else
          c_19 = z_18;
      }
    }
  else
    {
      if(match_cons(x_18, sym__3))
        {
          y_18 = ATgetArgument(x_18, 0);
          z_18 = ATgetArgument(x_18, 1);
          a_19 = ATgetArgument(x_18, 2);
          {
            ATerm i_19 = NULL;
            ATerm j_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(z_18));
            {
              t = zip_1(t, _id);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(a_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = subs_args_0(t);
  {
    p_19 = t;
    o_19 :
    if(match_cons(p_19, sym__2))
      {
        q_19 = ATgetArgument(p_19, 0);
        r_19 = ATgetArgument(p_19, 1);
        {
          t = not_null(r_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(q_19);
                return(t);
              }
              t = SubsVar_2(t, a_92, c_1);
              t = b_92(t);
              return(t);
            }
            t = alltd_1(t, b_1);
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
ATerm substitute_1 (ATerm t, ATerm c_92 (ATerm))
{
  t = substitute_2(t, c_92, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_VarDec_2))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      {
        ATerm h_20 = NULL,j_20 = NULL;
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(b_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        {
          t = not_null(c_20);
          {
            ATerm l_20 = NULL;
            t = b_79(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = c_79(t);
                  {
                    l_20 = t;
                    {
                      ATerm o_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_20), not_null(l_20)), not_null(h_20));
                      {
                        o_20 = t;
                        if(((n_20 != NULL) && (n_20 != o_20)))
                          _fail(o_20);
                        else
                          n_20 = o_20;
                      }
                      t = not_null(n_20);
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  i_21 = t;
  g_21 :
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      n_21 = (ATerm) ATgetNext((ATermList) i_21);
      h_21 :
      if(match_cons(j_21, sym_SDef_3))
        {
          k_21 = ATgetArgument(j_21, 0);
          l_21 = ATgetArgument(j_21, 1);
          m_21 = ATgetArgument(j_21, 2);
          {
            ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,p_22 = NULL;
            ATerm o_9;
            o_9 = t;
            {
              ATerm v_21 = NULL;
              t = not_null(l_21);
              {
                ATerm b_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  v_21 = t;
                  {
                    if(((s_21 != NULL) && (s_21 != v_21)))
                      _fail(v_21);
                    else
                      s_21 = v_21;
                    {
                      t = not_null(s_21);
                      {
                        ATerm o_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
                          w_21 = t;
                          x_20 :
                          if(match_cons(w_21, sym_VarDec_2))
                            {
                              x_21 = ATgetArgument(w_21, 0);
                              y_21 = ATgetArgument(w_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          b_22 = t;
                          {
                            if(((t_21 != NULL) && (t_21 != b_22)))
                              _fail(b_22);
                            else
                              t_21 = b_22;
                            {
                              t = not_null(i_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                  c_22 = t;
                                  d_21 :
                                  if(match_cons(c_22, sym_SDef_3))
                                    {
                                      d_22 = ATgetArgument(c_22, 0);
                                      e_22 = ATgetArgument(c_22, 1);
                                      f_22 = ATgetArgument(c_22, 2);
                                      {
                                        ATerm i_22 = NULL;
                                        ATerm n_22 = NULL;
                                        t = not_null(e_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
                                            j_22 = t;
                                            b_21 :
                                            if(match_cons(j_22, sym_VarDec_2))
                                              {
                                                k_22 = ATgetArgument(j_22, 0);
                                                l_22 = ATgetArgument(j_22, 1);
                                                t = not_null(k_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            n_22 = t;
                                            if(((i_22 != NULL) && (i_22 != n_22)))
                                              _fail(n_22);
                                            else
                                              i_22 = n_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(i_22), not_null(t_21), not_null(f_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  o_22 = t;
                                  if(((u_21 != NULL) && (u_21 != o_22)))
                                    _fail(o_22);
                                  else
                                    u_21 = o_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = o_9;
            {
              ATerm q_22 = NULL;
              t = not_null(u_21);
              {
                t = choices_0(t);
                {
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_21), not_null(s_21), not_null(p_22));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  b_23 :
  if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
    {
      e_23 = ATgetFirst((ATermList) d_23);
      f_23 = (ATerm) ATgetNext((ATermList) d_23);
      c_23 :
      if(((ATgetType(f_23) == AT_LIST) && ATisEmpty(f_23)))
        {
          t = not_null(e_23);
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
ATerm joindefs_0 (ATerm t)
{
  ATerm p_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = p_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      q_23 = ATgetArgument(m_23, 1);
      l_23 :
      if(match_cons(n_23, sym__2))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          {
            ATerm u_23 = NULL;
            ATerm v_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(p_23));
            {
              t = Definitions_0(t);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(q_23));
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
ATerm Expl_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  q_24 = t;
  o_24 :
  if(match_cons(q_24, sym_ExplodeCong_2))
    {
      r_24 = ATgetArgument(q_24, 0);
      p_24 = ATgetArgument(q_24, 1);
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
        ATerm y_24 = NULL;
        ATerm z_24 = NULL;
        t = new_0(t);
        {
          y_24 = t;
          {
            if(((u_24 != NULL) && (u_24 != y_24)))
              _fail(y_24);
            else
              u_24 = y_24;
            {
              ATerm a_25 = NULL;
              t = new_0(t);
              {
                z_24 = t;
                {
                  if(((v_24 != NULL) && (v_24 != z_24)))
                    _fail(z_24);
                  else
                    v_24 = z_24;
                  {
                    ATerm b_25 = NULL;
                    t = new_0(t);
                    {
                      a_25 = t;
                      {
                        if(((w_24 != NULL) && (w_24 != a_25)))
                          _fail(a_25);
                        else
                          w_24 = a_25;
                        {
                          t = new_0(t);
                          {
                            b_25 = t;
                            if(((x_24 != NULL) && (x_24 != b_25)))
                              _fail(b_25);
                            else
                              x_24 = b_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
      }
    }
  else
    {
      if(match_cons(q_24, sym_Build_1))
        {
          r_24 = ATgetArgument(q_24, 0);
          {
            ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
            ATerm h_25 = NULL;
            ATerm l_25 = NULL;
            t = new_0(t);
            {
              h_25 = t;
              {
                if(((f_25 != NULL) && (f_25 != h_25)))
                  _fail(h_25);
                else
                  f_25 = h_25;
                {
                  t = not_null(r_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
                      i_25 = t;
                      h_24 :
                      if(match_cons(i_25, sym_Explode_2))
                        {
                          j_25 = ATgetArgument(i_25, 0);
                          k_25 = ATgetArgument(i_25, 1);
                          {
                            if(((d_25 != NULL) && (d_25 != j_25)))
                              _fail(j_25);
                            else
                              d_25 = j_25;
                            {
                              if(((e_25 != NULL) && (e_25 != k_25)))
                                _fail(k_25);
                              else
                                e_25 = k_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      l_25 = t;
                      if(((g_25 != NULL) && (g_25 != l_25)))
                        _fail(l_25);
                      else
                        g_25 = l_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
          }
        }
      else
        {
          if(match_cons(q_24, sym_Match_1))
            {
              r_24 = ATgetArgument(q_24, 0);
              {
                ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                ATerm s_25 = NULL;
                ATerm t_25 = NULL;
                t = new_0(t);
                {
                  s_25 = t;
                  {
                    if(((p_25 != NULL) && (p_25 != s_25)))
                      _fail(s_25);
                    else
                      p_25 = s_25;
                    {
                      ATerm x_25 = NULL;
                      t = new_0(t);
                      {
                        t_25 = t;
                        {
                          if(((q_25 != NULL) && (q_25 != t_25)))
                            _fail(t_25);
                          else
                            q_25 = t_25;
                          {
                            t = not_null(r_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
                                u_25 = t;
                                m_24 :
                                if(match_cons(u_25, sym_Explode_2))
                                  {
                                    v_25 = ATgetArgument(u_25, 0);
                                    w_25 = ATgetArgument(u_25, 1);
                                    {
                                      if(((n_25 != NULL) && (n_25 != v_25)))
                                        _fail(v_25);
                                      else
                                        n_25 = v_25;
                                      {
                                        if(((o_25 != NULL) && (o_25 != w_25)))
                                          _fail(w_25);
                                        else
                                          o_25 = w_25;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_25));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                x_25 = t;
                                if(((r_25 != NULL) && (r_25 != x_25)))
                                  _fail(x_25);
                                else
                                  r_25 = x_25;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Match_1))
    {
      d_27 = ATgetArgument(c_27, 0);
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
            ATerm j_27 = NULL;
            ATerm n_27 = NULL;
            t = new_0(t);
            {
              j_27 = t;
              {
                if(((h_27 != NULL) && (h_27 != j_27)))
                  _fail(j_27);
                else
                  h_27 = j_27;
                {
                  t = not_null(d_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
                      k_27 = t;
                      r_26 :
                      if(match_cons(k_27, sym_Anno_2))
                        {
                          l_27 = ATgetArgument(k_27, 0);
                          m_27 = ATgetArgument(k_27, 1);
                          {
                            if(((f_27 != NULL) && (f_27 != l_27)))
                              _fail(l_27);
                            else
                              f_27 = l_27;
                            {
                              if(((g_27 != NULL) && (g_27 != m_27)))
                                _fail(m_27);
                              else
                                g_27 = m_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_27)), not_null(f_27));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      n_27 = t;
                      if(((i_27 != NULL) && (i_27 != n_27)))
                        _fail(n_27);
                      else
                        i_27 = n_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_27))))));
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                  ATerm s_27 = NULL;
                  ATerm v_27 = NULL;
                  t = new_0(t);
                  {
                    s_27 = t;
                    {
                      if(((q_27 != NULL) && (q_27 != s_27)))
                        _fail(s_27);
                      else
                        q_27 = s_27;
                      {
                        t = not_null(d_27);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm t_27 = NULL,u_27 = NULL;
                            t_27 = t;
                            v_26 :
                            if(match_cons(t_27, sym_RootApp_1))
                              {
                                u_27 = ATgetArgument(t_27, 0);
                                {
                                  if(((p_27 != NULL) && (p_27 != u_27)))
                                    _fail(u_27);
                                  else
                                    p_27 = u_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, k_1);
                          {
                            v_27 = t;
                            if(((r_27 != NULL) && (r_27 != v_27)))
                              _fail(v_27);
                            else
                              r_27 = v_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27))), not_null(p_27))));
                  ;
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  {
                    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
                    ATerm b_28 = NULL;
                    ATerm f_28 = NULL;
                    t = new_0(t);
                    {
                      b_28 = t;
                      {
                        if(((z_27 != NULL) && (z_27 != b_28)))
                          _fail(b_28);
                        else
                          z_27 = b_28;
                        {
                          t = not_null(d_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
                              c_28 = t;
                              z_26 :
                              if(match_cons(c_28, sym_App_2))
                                {
                                  d_28 = ATgetArgument(c_28, 0);
                                  e_28 = ATgetArgument(c_28, 1);
                                  {
                                    if(((y_27 != NULL) && (y_27 != d_28)))
                                      _fail(d_28);
                                    else
                                      y_27 = d_28;
                                    {
                                      if(((x_27 != NULL) && (x_27 != e_28)))
                                        _fail(e_28);
                                      else
                                        x_27 = e_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, l_1);
                            {
                              f_28 = t;
                              if(((a_28 != NULL) && (a_28 != f_28)))
                                _fail(f_28);
                              else
                                a_28 = f_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_27)), not_null(y_27)))));
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  w_28 = t;
  u_28 :
  if(match_cons(w_28, sym_Match_1))
    {
      x_28 = ATgetArgument(w_28, 0);
      v_28 :
      if(match_cons(x_28, sym_RootApp_1))
        {
          y_28 = ATgetArgument(x_28, 0);
          t = not_null(y_28);
        }
      else
        {
          if(match_cons(x_28, sym_App_2))
            {
              y_28 = ATgetArgument(x_28, 0);
              z_28 = ATgetArgument(x_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_28), not_null(z_28));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm l_29 = NULL,c_33 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Match_1))
    {
      c_33 = ATgetArgument(l_29, 0);
      {
        ATerm e_33 = NULL,f_33 = NULL;
        ATerm j_33 = NULL;
        t = not_null(c_33);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
            g_33 = t;
            h_29 :
            if(match_cons(g_33, sym_RootApp_1))
              {
                h_33 = ATgetArgument(g_33, 0);
                i_29 :
                if(match_cons(h_33, sym_Match_1))
                  {
                    i_33 = ATgetArgument(h_33, 0);
                    {
                      if(((e_33 != NULL) && (e_33 != i_33)))
                        _fail(i_33);
                      else
                        e_33 = i_33;
                      t = not_null(e_33);
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
          t = pat_td_1(t, m_1);
          {
            j_33 = t;
            if(((f_33 != NULL) && (f_33 != j_33)))
              _fail(j_33);
            else
              f_33 = j_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(f_33));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  z_34 :
  if(match_cons(v_37, sym_Build_1))
    {
      w_37 = ATgetArgument(v_37, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
            ATerm c_38 = NULL;
            ATerm g_38 = NULL;
            t = new_0(t);
            {
              c_38 = t;
              {
                if(((a_38 != NULL) && (a_38 != c_38)))
                  _fail(c_38);
                else
                  a_38 = c_38;
                {
                  t = not_null(w_37);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
                      d_38 = t;
                      s_33 :
                      if(match_cons(d_38, sym_Anno_2))
                        {
                          e_38 = ATgetArgument(d_38, 0);
                          f_38 = ATgetArgument(d_38, 1);
                          {
                            if(((y_37 != NULL) && (y_37 != e_38)))
                              _fail(e_38);
                            else
                              y_37 = e_38;
                            {
                              if(((z_37 != NULL) && (z_37 != f_38)))
                                _fail(f_38);
                              else
                                z_37 = f_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, n_1);
                    {
                      g_38 = t;
                      if(((b_38 != NULL) && (b_38 != g_38)))
                        _fail(g_38);
                      else
                        b_38 = g_38;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_q_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), not_null(y_37))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38))));
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm r_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
                  ATerm l_38 = NULL;
                  ATerm o_38 = NULL;
                  t = new_0(t);
                  {
                    l_38 = t;
                    {
                      if(((j_38 != NULL) && (j_38 != l_38)))
                        _fail(l_38);
                      else
                        j_38 = l_38;
                      {
                        t = not_null(w_37);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm m_38 = NULL,n_38 = NULL;
                            m_38 = t;
                            t_34 :
                            if(match_cons(m_38, sym_RootApp_1))
                              {
                                n_38 = ATgetArgument(m_38, 0);
                                {
                                  if(((i_38 != NULL) && (i_38 != n_38)))
                                    _fail(n_38);
                                  else
                                    i_38 = n_38;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_38));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, o_1);
                          {
                            o_38 = t;
                            if(((k_38 != NULL) && (k_38 != o_38)))
                              _fail(o_38);
                            else
                              k_38 = o_38;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_38), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_38))));
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = r_10;
                  {
                    ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
                    ATerm u_38 = NULL;
                    ATerm y_38 = NULL;
                    t = new_0(t);
                    {
                      u_38 = t;
                      {
                        if(((s_38 != NULL) && (s_38 != u_38)))
                          _fail(u_38);
                        else
                          s_38 = u_38;
                        {
                          t = not_null(w_37);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
                              v_38 = t;
                              x_34 :
                              if(match_cons(v_38, sym_App_2))
                                {
                                  w_38 = ATgetArgument(v_38, 0);
                                  x_38 = ATgetArgument(v_38, 1);
                                  {
                                    if(((q_38 != NULL) && (q_38 != w_38)))
                                      _fail(w_38);
                                    else
                                      q_38 = w_38;
                                    {
                                      if(((r_38 != NULL) && (r_38 != x_38)))
                                        _fail(x_38);
                                      else
                                        r_38 = x_38;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_38));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, p_1);
                            {
                              y_38 = t;
                              if(((t_38 != NULL) && (t_38 != y_38)))
                                _fail(y_38);
                              else
                                t_38 = y_38;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_38), not_null(r_38), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_38)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_38))));
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  a_40 = t;
  y_39 :
  if(match_cons(a_40, sym_Build_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      z_39 :
      if(match_cons(b_40, sym_RootApp_1))
        {
          c_40 = ATgetArgument(b_40, 0);
          t = not_null(c_40);
        }
      else
        {
          if(match_cons(b_40, sym_App_2))
            {
              c_40 = ATgetArgument(b_40, 0);
              d_40 = ATgetArgument(b_40, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_40)), not_null(c_40));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm))
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_As_2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        ATerm v_40 = NULL,x_40 = NULL;
        ATerm w_40 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          w_40 = t;
          if(((v_40 != NULL) && (v_40 != w_40)))
            _fail(w_40);
          else
            v_40 = w_40;
        }
        {
          t = not_null(q_40);
          {
            ATerm z_40 = NULL;
            t = e_81(t);
            {
              x_40 = t;
              {
                t = not_null(r_40);
                {
                  ATerm b_41 = NULL;
                  t = f_81(t);
                  {
                    z_40 = t;
                    {
                      ATerm c_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(x_40), not_null(z_40)), not_null(v_40));
                      {
                        c_41 = t;
                        if(((b_41 != NULL) && (b_41 != c_41)))
                          _fail(c_41);
                        else
                          b_41 = c_41;
                      }
                      t = not_null(b_41);
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
ATerm Prim_2 (ATerm t, ATerm k_77 (ATerm), ATerm l_77 (ATerm))
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym_Prim_2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      {
        ATerm x_41 = NULL,z_41 = NULL;
        ATerm y_41 = NULL;
        t = SSLgetAnnotations(not_null(o_41));
        {
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
        }
        {
          t = not_null(p_41);
          {
            ATerm b_42 = NULL;
            t = k_77(t);
            {
              z_41 = t;
              {
                t = not_null(q_41);
                {
                  ATerm d_42 = NULL;
                  t = l_77(t);
                  {
                    b_42 = t;
                    {
                      ATerm e_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(z_41), not_null(b_42)), not_null(x_41));
                      {
                        e_42 = t;
                        if(((d_42 != NULL) && (d_42 != e_42)))
                          _fail(e_42);
                        else
                          d_42 = e_42;
                      }
                      t = not_null(d_42);
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
ATerm Explode_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  l_43 :
  if(match_cons(n_43, sym_Explode_2))
    {
      o_43 = ATgetArgument(n_43, 0);
      p_43 = ATgetArgument(n_43, 1);
      {
        ATerm t_43 = NULL,v_43 = NULL;
        ATerm u_43 = NULL;
        t = SSLgetAnnotations(not_null(n_43));
        {
          u_43 = t;
          if(((t_43 != NULL) && (t_43 != u_43)))
            _fail(u_43);
          else
            t_43 = u_43;
        }
        {
          t = not_null(o_43);
          {
            ATerm x_43 = NULL;
            t = a_81(t);
            {
              v_43 = t;
              {
                t = not_null(p_43);
                {
                  ATerm z_43 = NULL;
                  t = b_81(t);
                  {
                    x_43 = t;
                    {
                      ATerm a_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(v_43), not_null(x_43)), not_null(t_43));
                      {
                        a_44 = t;
                        if(((z_43 != NULL) && (z_43 != a_44)))
                          _fail(a_44);
                        else
                          z_43 = a_44;
                      }
                      t = not_null(z_43);
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
ATerm Op_2 (ATerm t, ATerm o_79 (ATerm), ATerm p_79 (ATerm))
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(match_cons(t_44, sym_Op_2))
    {
      u_44 = ATgetArgument(t_44, 0);
      v_44 = ATgetArgument(t_44, 1);
      {
        ATerm z_44 = NULL,b_45 = NULL;
        ATerm a_45 = NULL;
        t = SSLgetAnnotations(not_null(t_44));
        {
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
        }
        {
          t = not_null(u_44);
          {
            ATerm d_45 = NULL;
            t = o_79(t);
            {
              b_45 = t;
              {
                t = not_null(v_44);
                {
                  ATerm f_45 = NULL;
                  t = p_79(t);
                  {
                    d_45 = t;
                    {
                      ATerm g_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_45), not_null(d_45)), not_null(z_44));
                      {
                        g_45 = t;
                        if(((f_45 != NULL) && (f_45 != g_45)))
                          _fail(g_45);
                        else
                          f_45 = g_45;
                      }
                      t = not_null(f_45);
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
ATerm pat_td_1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_88(t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = x_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, i_88);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm e_11 = t;
              int f_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, i_88);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  ;
                  LocalPopChoice(f_11);
                }
              else
                {
                  t = e_11;
                  {
                    ATerm g_11 = t;
                    int h_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, i_88);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        ;
                        LocalPopChoice(h_11);
                      }
                    else
                      {
                        t = g_11;
                        {
                          ATerm i_11 = t;
                          int j_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, i_88);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              ;
                              LocalPopChoice(j_11);
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, i_88);
                                  return(t);
                                }
                                t = As_2(t, _id, w_1);
                              }
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym_Build_1))
    {
      y_45 = ATgetArgument(x_45, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_46 = NULL,b_46 = NULL;
            ATerm f_46 = NULL;
            t = not_null(y_45);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
                c_46 = t;
                p_45 :
                if(match_cons(c_46, sym_RootApp_1))
                  {
                    d_46 = ATgetArgument(c_46, 0);
                    q_45 :
                    if(match_cons(d_46, sym_Build_1))
                      {
                        e_46 = ATgetArgument(d_46, 0);
                        {
                          if(((a_46 != NULL) && (a_46 != e_46)))
                            _fail(e_46);
                          else
                            a_46 = e_46;
                          t = not_null(a_46);
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
              t = pat_td_1(t, x_1);
              {
                f_46 = t;
                if(((b_46 != NULL) && (b_46 != f_46)))
                  _fail(f_46);
                else
                  b_46 = f_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_46));
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm h_46 = NULL,m_46 = NULL,n_46 = NULL;
              ATerm a_47 = NULL;
              t = not_null(y_45);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
                  o_46 = t;
                  t_45 :
                  if(match_cons(o_46, sym_App_2))
                    {
                      p_46 = ATgetArgument(o_46, 0);
                      r_46 = ATgetArgument(o_46, 1);
                      u_45 :
                      if(match_cons(p_46, sym_Build_1))
                        {
                          q_46 = ATgetArgument(p_46, 0);
                          {
                            if(((m_46 != NULL) && (m_46 != q_46)))
                              _fail(q_46);
                            else
                              m_46 = q_46;
                            {
                              if(((h_46 != NULL) && (h_46 != r_46)))
                                _fail(r_46);
                              else
                                h_46 = r_46;
                              t = not_null(m_46);
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
                t = pat_td_1(t, y_1);
                {
                  a_47 = t;
                  if(((n_46 != NULL) && (n_46 != a_47)))
                    _fail(a_47);
                  else
                    n_46 = a_47;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_46));
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
ATerm Bapp_0 (ATerm t)
{
  ATerm m_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = m_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  u_47 :
  if(match_cons(f_48, sym_Lets_2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_48), not_null(h_48));
    }
  else
    {
      if(match_cons(f_48, sym_LChoices_1))
        {
          g_48 = ATgetArgument(f_48, 0);
          v_47 :
          if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
            {
              c_48 = ATgetFirst((ATermList) g_48);
              d_48 = (ATerm) ATgetNext((ATermList) g_48);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_48)));
            }
          else
            {
              if(((ATgetType(g_48) == AT_LIST) && ATisEmpty(g_48)))
                {
                  t = term_e_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(f_48, sym_Choices_1))
            {
              g_48 = ATgetArgument(f_48, 0);
              a_48 :
              if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
                {
                  c_48 = ATgetFirst((ATermList) g_48);
                  d_48 = (ATerm) ATgetNext((ATermList) g_48);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(d_48)));
                }
              else
                {
                  if(((ATgetType(g_48) == AT_LIST) && ATisEmpty(g_48)))
                    {
                      t = term_e_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(f_48, sym_Seqs_1))
                {
                  g_48 = ATgetArgument(f_48, 0);
                  b_48 :
                  if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
                    {
                      c_48 = ATgetFirst((ATermList) g_48);
                      d_48 = (ATerm) ATgetNext((ATermList) g_48);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_48)));
                    }
                  else
                    {
                      if(((ATgetType(g_48) == AT_LIST) && ATisEmpty(g_48)))
                        {
                          t = term_x_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(f_48, sym_DefaultVarDec_1))
                    {
                      g_48 = ATgetArgument(f_48, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12));
                    }
                  else
                    {
                      if(match_cons(f_48, sym_InfixApp_3))
                        {
                          g_48 = ATgetArgument(f_48, 0);
                          h_48 = ATgetArgument(f_48, 1);
                          e_48 = ATgetArgument(f_48, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_48)), not_null(g_48))));
                        }
                      else
                        {
                          if(match_cons(f_48, sym_BAM_3))
                            {
                              g_48 = ATgetArgument(f_48, 0);
                              h_48 = ATgetArgument(f_48, 1);
                              e_48 = ATgetArgument(f_48, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(e_48))), not_null(g_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_48))));
                            }
                          else
                            {
                              if(match_cons(f_48, sym_AM_2))
                                {
                                  g_48 = ATgetArgument(f_48, 0);
                                  h_48 = ATgetArgument(f_48, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_48)));
                                }
                              else
                                {
                                  if(match_cons(f_48, sym_MA_2))
                                    {
                                      g_48 = ATgetArgument(f_48, 0);
                                      h_48 = ATgetArgument(f_48, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_48)), not_null(h_48));
                                    }
                                  else
                                    {
                                      if(match_cons(f_48, sym_BA_2))
                                        {
                                          g_48 = ATgetArgument(f_48, 0);
                                          h_48 = ATgetArgument(f_48, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_48)), not_null(g_48));
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
        }
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm u_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  u_49 = t;
  r_49 :
  if(match_cons(u_49, sym__2))
    {
      w_49 = ATgetArgument(u_49, 0);
      z_49 = ATgetArgument(u_49, 1);
      s_49 :
      if(match_cons(w_49, sym__2))
        {
          x_49 = ATgetArgument(w_49, 0);
          y_49 = ATgetArgument(w_49, 1);
          t_49 :
          if(match_cons(z_49, sym__2))
            {
              a_50 = ATgetArgument(z_49, 0);
              b_50 = ATgetArgument(z_49, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_50)), not_null(x_49)), (ATerm) ATinsert(CheckATermList(not_null(b_50)), not_null(y_49)));
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
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(((ATgetType(j_50) == AT_LIST) && !(ATisEmpty(j_50))))
    {
      k_50 = ATgetFirst((ATermList) j_50);
      l_50 = (ATerm) ATgetNext((ATermList) j_50);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), not_null(l_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  q_50 :
  if(((ATgetType(r_50) == AT_LIST) && ATisEmpty(r_50)))
    {
      t = term_e_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm n_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, n_97);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  ATerm d_51 (ATerm t)
  {
    ATerm a_51 = NULL;
    ATerm b_51 = NULL;
    t = not_null(x_50);
    {
      ATerm f_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_12;
        }
      {
        t = new_0(t);
        {
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(a_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_50)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_51))));
    return(t);
  }
  ATerm e_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50))));
    return(t);
  }
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym_Var_1))
    {
      y_50 = ATgetArgument(x_50, 0);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_51(t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = e_51(t);
          }
      }
    }
  else
    {
      t = d_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm p_51 = NULL,q_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym_Var_1))
    {
      q_51 = ATgetArgument(p_51, 0);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_51 = NULL,v_51 = NULL;
            ATerm u_51 = NULL;
            t = SSLgetAnnotations(not_null(p_51));
            {
              u_51 = t;
              if(((t_51 != NULL) && (t_51 != u_51)))
                _fail(u_51);
              else
                t_51 = u_51;
            }
            {
              t = not_null(q_51);
              {
                ATerm x_51 = NULL;
                t = p_0(t);
                {
                  v_51 = t;
                  {
                    ATerm y_51 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_51)), not_null(t_51));
                    {
                      y_51 = t;
                      if(((x_51 != NULL) && (x_51 != y_51)))
                        _fail(y_51);
                      else
                        x_51 = y_51;
                    }
                    t = not_null(x_51);
                  }
                }
              }
            }
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm b_52 = NULL,d_52 = NULL;
              ATerm c_52 = NULL;
              t = SSLgetAnnotations(not_null(p_51));
              {
                c_52 = t;
                if(((b_52 != NULL) && (b_52 != c_52)))
                  _fail(c_52);
                else
                  b_52 = c_52;
              }
              {
                t = not_null(q_51);
                {
                  ATerm f_52 = NULL;
                  t = p_0(t);
                  {
                    d_52 = t;
                    {
                      ATerm g_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_52)), not_null(b_52));
                      {
                        g_52 = t;
                        if(((f_52 != NULL) && (f_52 != g_52)))
                          _fail(g_52);
                        else
                          f_52 = g_52;
                      }
                      t = not_null(f_52);
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
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  u_52 = t;
  t_52 :
  if(match_cons(u_52, sym_Prim_2))
    {
      v_52 = ATgetArgument(u_52, 0);
      w_52 = ATgetArgument(u_52, 1);
      {
        ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
        ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
        t = not_null(w_52);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm o_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(w_52);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm a_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, a_2);
                {
                  c_53 = t;
                  r_52 :
                  if(match_cons(c_53, sym__2))
                    {
                      d_53 = ATgetArgument(c_53, 0);
                      e_53 = ATgetArgument(c_53, 1);
                      s_52 :
                      if(match_cons(e_53, sym__2))
                        {
                          f_53 = ATgetArgument(e_53, 0);
                          g_53 = ATgetArgument(e_53, 1);
                          {
                            if(((z_52 != NULL) && (z_52 != d_53)))
                              _fail(d_53);
                            else
                              z_52 = d_53;
                            {
                              if(((a_53 != NULL) && (a_53 != f_53)))
                                _fail(f_53);
                              else
                                a_53 = f_53;
                              if(((b_53 != NULL) && (b_53 != g_53)))
                                _fail(g_53);
                              else
                                b_53 = g_53;
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
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_52), not_null(b_53))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_102 (ATerm))
{
  ATerm j_53 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      t = y_102(t);
      t = j_53(t);
      return(t);
    }
    t = try_1(t, b_2);
    return(t);
  }
  t = j_53(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm o_53 = NULL;
  o_53 = t;
  n_53 :
  if(match_cons(o_53, sym_Wld_0))
    {
      ATerm q_53 = NULL,s_53 = NULL;
      ATerm p_12;
      p_12 = t;
      {
        ATerm r_53 = NULL;
        t = SSLgetAnnotations(not_null(o_53));
        {
          r_53 = t;
          if(((q_53 != NULL) && (q_53 != r_53)))
            _fail(r_53);
          else
            q_53 = r_53;
        }
      }
      t = p_12;
      {
        ATerm t_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(q_53));
        {
          t_53 = t;
          if(((s_53 != NULL) && (s_53 != t_53)))
            _fail(t_53);
          else
            s_53 = t_53;
        }
        t = not_null(s_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm q_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm))
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym_App_2))
    {
      e_54 = ATgetArgument(d_54, 0);
      f_54 = ATgetArgument(d_54, 1);
      {
        ATerm j_54 = NULL,o_54 = NULL;
        ATerm n_54 = NULL;
        t = SSLgetAnnotations(not_null(d_54));
        {
          n_54 = t;
          if(((j_54 != NULL) && (j_54 != n_54)))
            _fail(n_54);
          else
            j_54 = n_54;
        }
        {
          t = not_null(e_54);
          {
            ATerm u_54 = NULL;
            t = u_80(t);
            {
              o_54 = t;
              {
                t = not_null(f_54);
                {
                  ATerm b_55 = NULL;
                  t = v_80(t);
                  {
                    u_54 = t;
                    {
                      ATerm c_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(o_54), not_null(u_54)), not_null(j_54));
                      {
                        c_55 = t;
                        if(((b_55 != NULL) && (b_55 != c_55)))
                          _fail(c_55);
                        else
                          b_55 = c_55;
                      }
                      t = not_null(b_55);
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
ATerm Con_3 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm))
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,w_55 = NULL;
  p_55 = t;
  o_55 :
  if(match_cons(p_55, sym_Con_3))
    {
      q_55 = ATgetArgument(p_55, 0);
      r_55 = ATgetArgument(p_55, 1);
      w_55 = ATgetArgument(p_55, 2);
      {
        ATerm b_56 = NULL,d_56 = NULL;
        ATerm c_56 = NULL;
        t = SSLgetAnnotations(not_null(p_55));
        {
          c_56 = t;
          if(((b_56 != NULL) && (b_56 != c_56)))
            _fail(c_56);
          else
            b_56 = c_56;
        }
        {
          t = not_null(q_55);
          {
            ATerm f_56 = NULL;
            t = r_80(t);
            {
              d_56 = t;
              {
                t = not_null(r_55);
                {
                  ATerm o_56 = NULL;
                  t = s_80(t);
                  {
                    f_56 = t;
                    {
                      t = not_null(w_55);
                      {
                        ATerm q_56 = NULL;
                        t = t_80(t);
                        {
                          o_56 = t;
                          {
                            ATerm r_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(d_56), not_null(f_56), not_null(o_56)), not_null(b_56));
                            {
                              r_56 = t;
                              if(((q_56 != NULL) && (q_56 != r_56)))
                                _fail(r_56);
                              else
                                q_56 = r_56;
                            }
                            t = not_null(q_56);
                          }
                        }
                      }
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
ATerm pureterm_0 (ATerm t)
{
  ATerm z_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  c_57 = t;
  a_57 :
  if(match_cons(c_57, sym_SRule_1))
    {
      d_57 = ATgetArgument(c_57, 0);
      b_57 :
      if(match_cons(d_57, sym_StratRule_3))
        {
          e_57 = ATgetArgument(d_57, 0);
          f_57 = ATgetArgument(d_57, 1);
          g_57 = ATgetArgument(d_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(g_57))), not_null(e_57)));
        }
      else
        {
          if(match_cons(d_57, sym_Rule_3))
            {
              e_57 = ATgetArgument(d_57, 0);
              f_57 = ATgetArgument(d_57, 1);
              g_57 = ATgetArgument(d_57, 2);
              {
                t = not_null(e_57);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(f_57);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(f_57))), (ATerm) ATmakeAppl(sym_Where_1, not_null(g_57))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_57))));
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  ATerm w_57 = NULL,z_57 = NULL,a_58 = NULL;
  w_57 = t;
  v_57 :
  if(match_cons(w_57, sym_Scope_2))
    {
      z_57 = ATgetArgument(w_57, 0);
      a_58 = ATgetArgument(w_57, 1);
      {
        ATerm g_58 = NULL,i_58 = NULL;
        ATerm h_58 = NULL;
        t = SSLgetAnnotations(not_null(w_57));
        {
          h_58 = t;
          if(((g_58 != NULL) && (g_58 != h_58)))
            _fail(h_58);
          else
            g_58 = h_58;
        }
        {
          t = not_null(z_57);
          {
            ATerm k_58 = NULL;
            t = s_77(t);
            {
              i_58 = t;
              {
                t = not_null(a_58);
                {
                  ATerm m_58 = NULL;
                  t = t_77(t);
                  {
                    k_58 = t;
                    {
                      ATerm n_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(i_58), not_null(k_58)), not_null(g_58));
                      {
                        n_58 = t;
                        if(((m_58 != NULL) && (m_58 != n_58)))
                          _fail(n_58);
                        else
                          m_58 = n_58;
                      }
                      t = not_null(m_58);
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
ATerm oncetd_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm t_58 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_93(t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = _one(t, t_58);
      }
    return(t);
  }
  t = t_58(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  l_59 = t;
  j_59 :
  if(match_cons(l_59, sym_SRule_1))
    {
      m_59 = ATgetArgument(l_59, 0);
      k_59 :
      if(match_cons(m_59, sym_Rule_3))
        {
          n_59 = ATgetArgument(m_59, 0);
          o_59 = ATgetArgument(m_59, 1);
          p_59 = ATgetArgument(m_59, 2);
          {
            ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
            ATerm b_60 = NULL;
            ATerm h_60 = NULL;
            t = new_0(t);
            {
              b_60 = t;
              {
                if(((y_59 != NULL) && (y_59 != b_60)))
                  _fail(b_60);
                else
                  y_59 = b_60;
                {
                  t = not_null(n_59);
                  {
                    ATerm p_60 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
                      c_60 = t;
                      z_58 :
                      if(match_cons(c_60, sym_Con_3))
                        {
                          d_60 = ATgetArgument(c_60, 0);
                          f_60 = ATgetArgument(c_60, 1);
                          g_60 = ATgetArgument(c_60, 2);
                          a_59 :
                          if(match_cons(d_60, sym_Var_1))
                            {
                              e_60 = ATgetArgument(d_60, 0);
                              {
                                if(((x_59 != NULL) && (x_59 != e_60)))
                                  _fail(e_60);
                                else
                                  x_59 = e_60;
                                {
                                  if(((v_59 != NULL) && (v_59 != f_60)))
                                    _fail(f_60);
                                  else
                                    v_59 = f_60;
                                  {
                                    if(((t_59 != NULL) && (t_59 != g_60)))
                                      _fail(g_60);
                                    else
                                      t_59 = g_60;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_59));
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
                    t = oncetd_1(t, e_2);
                    {
                      h_60 = t;
                      {
                        if(((z_59 != NULL) && (z_59 != h_60)))
                          _fail(h_60);
                        else
                          z_59 = h_60;
                        {
                          t = not_null(o_59);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
                              i_60 = t;
                              e_59 :
                              if(match_cons(i_60, sym_Con_3))
                                {
                                  j_60 = ATgetArgument(i_60, 0);
                                  l_60 = ATgetArgument(i_60, 1);
                                  m_60 = ATgetArgument(i_60, 2);
                                  f_59 :
                                  if(match_cons(j_60, sym_Var_1))
                                    {
                                      k_60 = ATgetArgument(j_60, 0);
                                      g_59 :
                                      if(match_cons(m_60, sym_Call_2))
                                        {
                                          n_60 = ATgetArgument(m_60, 0);
                                          o_60 = ATgetArgument(m_60, 1);
                                          h_59 :
                                          if(((ATgetType(o_60) == AT_LIST) && ATisEmpty(o_60)))
                                            {
                                              {
                                                if(((x_59 != NULL) && (x_59 != k_60)))
                                                  _fail(k_60);
                                                else
                                                  x_59 = k_60;
                                                {
                                                  if(((w_59 != NULL) && (w_59 != l_60)))
                                                    _fail(l_60);
                                                  else
                                                    w_59 = l_60;
                                                  {
                                                    if(((u_59 != NULL) && (u_59 != n_60)))
                                                      _fail(n_60);
                                                    else
                                                      u_59 = n_60;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59));
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
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = oncetd_1(t, f_2);
                            {
                              p_60 = t;
                              if(((a_60 != NULL) && (a_60 != p_60)))
                                _fail(p_60);
                              else
                                a_60 = p_60;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_59), not_null(a_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_59), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(u_59), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_59), not_null(w_59), term_x_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59)))))));
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
ATerm desugarRule_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = h_13;
        {
          ATerm o_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = o_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_92 (ATerm))
{
  t = r_92(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, r_92);
      return(t);
    }
    t = _all(t, h_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm w_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  {
                    ATerm y_13 = t;
                    int z_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(z_13);
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm a_14 = t;
                          int d_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(d_14);
                            }
                          else
                            {
                              t = a_14;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, j_2);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  a_61 :
  if(match_cons(b_61, sym__0))
    {
      ATerm d_61 = NULL,f_61 = NULL;
      ATerm g_14;
      g_14 = t;
      {
        ATerm e_61 = NULL;
        t = SSLgetAnnotations(not_null(b_61));
        {
          e_61 = t;
          if(((d_61 != NULL) && (d_61 != e_61)))
            _fail(e_61);
          else
            d_61 = e_61;
        }
      }
      t = g_14;
      {
        ATerm m_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(d_61));
        {
          m_61 = t;
          if(((f_61 != NULL) && (f_61 != m_61)))
            _fail(m_61);
          else
            f_61 = m_61;
        }
        t = not_null(f_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm y_61 = NULL;
  ATerm a_62 = NULL,b_62 = NULL,j_62 = NULL,l_62 = NULL;
  y_61 = t;
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm c_62 = NULL;
      ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
      t = not_null(y_61);
      {
        c_62 = t;
        {
          t = SSL_explode_term(not_null(c_62));
          {
            e_62 = t;
            t_61 :
            if(match_cons(e_62, sym__2))
              {
                f_62 = ATgetArgument(e_62, 0);
                g_62 = ATgetArgument(e_62, 1);
                u_61 :
                if(match_string(f_62, ""))
                  {
                    v_61 :
                    if(((ATgetType(g_62) == AT_LIST) && !(ATisEmpty(g_62))))
                      {
                        h_62 = ATgetFirst((ATermList) g_62);
                        i_62 = (ATerm) ATgetNext((ATermList) g_62);
                        {
                          if(((a_62 != NULL) && (a_62 != h_62)))
                            _fail(h_62);
                          else
                            a_62 = h_62;
                          if(((b_62 != NULL) && (b_62 != i_62)))
                            _fail(i_62);
                          else
                            b_62 = i_62;
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
    }
    t = k_14;
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm k_62 = NULL;
        t = term_z_9;
        {
          k_62 = t;
          if(((j_62 != NULL) && (j_62 != k_62)))
            _fail(k_62);
          else
            j_62 = k_62;
        }
      }
      t = l_14;
      {
        t = SSL_mkterm(not_null(j_62), not_null(b_62));
        {
          l_62 = t;
          t = not_null(l_62);
        }
      }
    }
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm t_96 (ATerm))
{
  ATerm b_63 = NULL,d_63 = NULL,f_63 = NULL;
  ATerm h_63 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_62 = NULL,z_62 = NULL;
        ATerm r_14;
        r_14 = t;
        {
          ATerm y_62 = NULL;
          t = map_1(t, Thd_0);
          {
            t = t_96(t);
            {
              y_62 = t;
              if(((x_62 != NULL) && (x_62 != y_62)))
                _fail(y_62);
              else
                x_62 = y_62;
            }
          }
        }
        t = r_14;
        {
          ATerm a_63 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = h_63(t);
            {
              a_63 = t;
              if(((z_62 != NULL) && (z_62 != a_63)))
                _fail(a_63);
              else
                z_62 = a_63;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(z_62)), not_null(x_62));
        }
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = h_63(t);
  {
    ATerm s_14;
    s_14 = t;
    {
      ATerm c_63 = NULL;
      c_63 = t;
      if(((b_63 != NULL) && (b_63 != c_63)))
        _fail(c_63);
      else
        b_63 = c_63;
    }
    t = s_14;
    {
      ATerm t_14;
      t_14 = t;
      {
        ATerm e_63 = NULL;
        t = term_z_9;
        {
          e_63 = t;
          if(((d_63 != NULL) && (d_63 != e_63)))
            _fail(e_63);
          else
            d_63 = e_63;
        }
      }
      t = t_14;
      {
        t = SSL_mkterm(not_null(d_63), not_null(b_63));
        {
          f_63 = t;
          t = not_null(f_63);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm r_63 = NULL;
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  r_63 = t;
  {
    ATerm w_63 = NULL;
    ATerm x_63 = NULL;
    t = new_0(t);
    {
      w_63 = t;
      {
        if(((t_63 != NULL) && (t_63 != w_63)))
          _fail(w_63);
        else
          t_63 = w_63;
        {
          ATerm y_63 = NULL;
          t = new_0(t);
          {
            x_63 = t;
            {
              if(((u_63 != NULL) && (u_63 != x_63)))
                _fail(x_63);
              else
                u_63 = x_63;
              {
                t = new_0(t);
                {
                  y_63 = t;
                  if(((v_63 != NULL) && (v_63 != y_63)))
                    _fail(y_63);
                  else
                    v_63 = y_63;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_63)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_63)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_63)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_63))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(t_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12)), not_null(u_63), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_63)), not_null(v_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_63)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  f_64 = t;
  e_64 :
  if(match_cons(f_64, sym__2))
    {
      g_64 = ATgetArgument(f_64, 0);
      h_64 = ATgetArgument(f_64, 1);
      {
        ATerm w_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(g_64), not_null(h_64));
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = w_14;
            t = SSL_subtr(not_null(g_64), not_null(h_64));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm w_106 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
    d_65 = t;
    m_64 :
    if(match_cons(d_65, sym__2))
      {
        e_65 = ATgetArgument(d_65, 0);
        f_65 = ATgetArgument(d_65, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_65), not_null(f_65), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
    i_65 = t;
    s_64 :
    if(match_cons(i_65, sym__3))
      {
        j_65 = ATgetArgument(i_65, 0);
        k_65 = ATgetArgument(i_65, 1);
        l_65 = ATgetArgument(i_65, 2);
        t_64 :
        if(match_int(j_65, 0))
          {
            t = not_null(l_65);
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
  ATerm m_2 (ATerm t)
  {
    ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
    o_65 = t;
    c_65 :
    if(match_cons(o_65, sym__3))
      {
        p_65 = ATgetArgument(o_65, 0);
        q_65 = ATgetArgument(o_65, 1);
        r_65 = ATgetArgument(o_65, 2);
        {
          ATerm v_65 = NULL,z_65 = NULL;
          ATerm e_15;
          e_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_65), term_b_7);
            t = geq_0(t);
          }
          t = e_15;
          {
            ATerm m_15;
            m_15 = t;
            {
              ATerm w_65 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_65), term_b_7);
              {
                t = subt_0(t);
                {
                  w_65 = t;
                  if(((v_65 != NULL) && (v_65 != w_65)))
                    _fail(w_65);
                  else
                    v_65 = w_65;
                }
              }
            }
            t = m_15;
            {
              ATerm a_66 = NULL;
              t = not_null(q_65);
              {
                t = w_106(t);
                {
                  a_66 = t;
                  if(((z_65 != NULL) && (z_65 != a_66)))
                    _fail(a_66);
                  else
                    z_65 = a_66;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(v_65), not_null(q_65), (ATerm) ATinsert(CheckATermList(not_null(r_65)), not_null(z_65)));
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
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  q_66 = t;
  p_66 :
  if(match_cons(q_66, sym__2))
    {
      r_66 = ATgetArgument(q_66, 0);
      s_66 = ATgetArgument(q_66, 1);
      {
        ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
        ATerm y_66 = NULL;
        ATerm a_67 = NULL;
        t = new_0(t);
        {
          y_66 = t;
          {
            if(((v_66 != NULL) && (v_66 != y_66)))
              _fail(y_66);
            else
              v_66 = y_66;
            {
              ATerm b_67 = NULL;
              t = new_0(t);
              {
                a_67 = t;
                {
                  if(((w_66 != NULL) && (w_66 != a_67)))
                    _fail(a_67);
                  else
                    w_66 = a_67;
                  {
                    t = new_0(t);
                    {
                      b_67 = t;
                      if(((x_66 != NULL) && (x_66 != b_67)))
                        _fail(b_67);
                      else
                        x_66 = b_67;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_66)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_66))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66)))), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_66))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_66))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_66), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12)), not_null(w_66), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_66)), not_null(x_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_66)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  h_67 :
  if(match_cons(j_67, sym__2))
    {
      k_67 = ATgetArgument(j_67, 0);
      l_67 = ATgetArgument(j_67, 1);
      i_67 :
      if(((ATgetType(l_67) == AT_LIST) && ATisEmpty(l_67)))
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
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm l_97 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, l_97);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL;
  v_67 = t;
  o_67 :
  if(((ATgetType(v_67) == AT_LIST) && !(ATisEmpty(v_67))))
    {
      w_67 = ATgetFirst((ATermList) v_67);
      x_67 = (ATerm) ATgetNext((ATermList) v_67);
      t = not_null(x_67);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
  e_68 = t;
  c_68 :
  if(((ATgetType(e_68) == AT_LIST) && !(ATisEmpty(e_68))))
    {
      f_68 = ATgetFirst((ATermList) e_68);
      g_68 = (ATerm) ATgetNext((ATermList) e_68);
      d_68 :
      if(((ATgetType(g_68) == AT_LIST) && ATisEmpty(g_68)))
        {
          t = not_null(f_68);
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
ATerm last_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  ATerm q_71 (ATerm t)
  {
    ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,e_70 = NULL;
    ATerm p_15;
    p_15 = t;
    {
      ATerm r_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
      ATerm s_69 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), term_b_7);
      {
        t = add_0(t);
        {
          s_69 = t;
          if(((r_69 != NULL) && (r_69 != s_69)))
            _fail(s_69);
          else
            r_69 = s_69;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_69), term_q_15);
        {
          t = copy_1(t, new_0);
          {
            t_69 = t;
            s_68 :
            if(((ATgetType(t_69) == AT_LIST) && !(ATisEmpty(t_69))))
              {
                u_69 = ATgetFirst((ATermList) t_69);
                v_69 = (ATerm) ATgetNext((ATermList) t_69);
                {
                  ATerm w_69 = NULL;
                  if(((j_69 != NULL) && (j_69 != u_69)))
                    _fail(u_69);
                  else
                    j_69 = u_69;
                  {
                    if(((k_69 != NULL) && (k_69 != v_69)))
                      _fail(v_69);
                    else
                      k_69 = v_69;
                    {
                      t = not_null(k_69);
                      {
                        ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
                        t = last_0(t);
                        {
                          w_69 = t;
                          {
                            if(((i_69 != NULL) && (i_69 != w_69)))
                              _fail(w_69);
                            else
                              i_69 = w_69;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_69)), not_null(j_69)), not_null(k_69));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    x_69 = t;
                                    r_68 :
                                    if(match_cons(x_69, sym__6))
                                      {
                                        y_69 = ATgetArgument(x_69, 0);
                                        z_69 = ATgetArgument(x_69, 1);
                                        a_70 = ATgetArgument(x_69, 2);
                                        b_70 = ATgetArgument(x_69, 3);
                                        c_70 = ATgetArgument(x_69, 4);
                                        d_70 = ATgetArgument(x_69, 5);
                                        {
                                          if(((l_69 != NULL) && (l_69 != y_69)))
                                            _fail(y_69);
                                          else
                                            l_69 = y_69;
                                          {
                                            if(((m_69 != NULL) && (m_69 != z_69)))
                                              _fail(z_69);
                                            else
                                              m_69 = z_69;
                                            {
                                              if(((n_69 != NULL) && (n_69 != a_70)))
                                                _fail(a_70);
                                              else
                                                n_69 = a_70;
                                              {
                                                if(((o_69 != NULL) && (o_69 != b_70)))
                                                  _fail(b_70);
                                                else
                                                  o_69 = b_70;
                                                {
                                                  if(((p_69 != NULL) && (p_69 != c_70)))
                                                    _fail(c_70);
                                                  else
                                                    p_69 = c_70;
                                                  if(((q_69 != NULL) && (q_69 != d_70)))
                                                    _fail(d_70);
                                                  else
                                                    q_69 = d_70;
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
    t = p_15;
    {
      ATerm k_70 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_69)), not_null(n_69)), not_null(k_69));
      {
        t = concat_0(t);
        {
          k_70 = t;
          if(((e_70 != NULL) && (e_70 != k_70)))
            _fail(k_70);
          else
            e_70 = k_70;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_69), term_r_15), not_null(m_69), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(e_70)), not_null(j_69)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_69))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_69), not_null(o_69)))), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_69))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_69), not_null(q_69)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_69))))));
    }
    return(t);
  }
  ATerm r_71 (ATerm t)
  {
    ATerm m_70 = NULL;
    ATerm n_70 = NULL;
    t = new_0(t);
    {
      n_70 = t;
      if(((m_70 != NULL) && (m_70 != n_70)))
        _fail(n_70);
      else
        m_70 = n_70;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_69), term_r_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_70)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_69), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_69), (ATerm) ATempty))), term_x_11))));
    return(t);
  }
  ATerm s_71 (ATerm t)
  {
    ATerm q_70 = NULL,r_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,o_71 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm e_71 = NULL;
      ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
      t = new_0(t);
      {
        e_71 = t;
        {
          if(((q_70 != NULL) && (q_70 != e_71)))
            _fail(e_71);
          else
            q_70 = e_71;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_70)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  h_71 = t;
                  x_68 :
                  if(match_cons(h_71, sym__6))
                    {
                      i_71 = ATgetArgument(h_71, 0);
                      j_71 = ATgetArgument(h_71, 1);
                      k_71 = ATgetArgument(h_71, 2);
                      l_71 = ATgetArgument(h_71, 3);
                      m_71 = ATgetArgument(h_71, 4);
                      n_71 = ATgetArgument(h_71, 5);
                      {
                        if(((r_70 != NULL) && (r_70 != i_71)))
                          _fail(i_71);
                        else
                          r_70 = i_71;
                        {
                          if(((z_70 != NULL) && (z_70 != j_71)))
                            _fail(j_71);
                          else
                            z_70 = j_71;
                          {
                            if(((a_71 != NULL) && (a_71 != k_71)))
                              _fail(k_71);
                            else
                              a_71 = k_71;
                            {
                              if(((b_71 != NULL) && (b_71 != l_71)))
                                _fail(l_71);
                              else
                                b_71 = l_71;
                              {
                                if(((c_71 != NULL) && (c_71 != m_71)))
                                  _fail(m_71);
                                else
                                  c_71 = m_71;
                                if(((d_71 != NULL) && (d_71 != n_71)))
                                  _fail(n_71);
                                else
                                  d_71 = n_71;
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
      }
    }
    t = s_15;
    {
      ATerm p_71 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_71), not_null(c_71));
      {
        t = conc_0(t);
        {
          p_71 = t;
          if(((o_71 != NULL) && (o_71 != p_71)))
            _fail(p_71);
          else
            o_71 = p_71;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_69), term_y_15), not_null(z_70), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(o_71)), not_null(q_70)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_69), not_null(b_71)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(d_69), not_null(d_71)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_70))))));
    }
    return(t);
  }
  c_69 = t;
  z_68 :
  if(match_cons(c_69, sym__3))
    {
      d_69 = ATgetArgument(c_69, 0);
      e_69 = ATgetArgument(c_69, 1);
      f_69 = ATgetArgument(c_69, 2);
      a_69 :
      if(match_string(e_69, "T"))
        {
          b_69 :
          if(match_int(f_69, 0))
            {
              ATerm d_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_71(t);
                  ;
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = d_16;
                  t = r_71(t);
                }
            }
          else
            {
              t = q_71(t);
            }
        }
      else
        {
          if(match_string(e_69, "D"))
            {
              t = s_71(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  o_72 = t;
  e_72 :
  if(match_cons(o_72, sym__2))
    {
      p_72 = ATgetArgument(o_72, 0);
      u_72 = ATgetArgument(o_72, 1);
      f_72 :
      if(match_cons(p_72, sym__2))
        {
          q_72 = ATgetArgument(p_72, 0);
          t_72 = ATgetArgument(p_72, 1);
          n_72 :
          if(match_cons(q_72, sym_Mod_2))
            {
              r_72 = ATgetArgument(q_72, 0);
              s_72 = ATgetArgument(q_72, 1);
              {
                ATerm z_72 = NULL;
                ATerm a_73 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_72), not_null(s_72), not_null(t_72));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      a_73 = t;
                      if(((z_72 != NULL) && (z_72 != a_73)))
                        _fail(a_73);
                      else
                        z_72 = a_73;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(u_72));
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
ATerm get_definition_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,x_73 = NULL;
  g_73 = t;
  e_73 :
  if(match_cons(g_73, sym__5))
    {
      h_73 = ATgetArgument(g_73, 0);
      k_73 = ATgetArgument(g_73, 1);
      l_73 = ATgetArgument(g_73, 2);
      m_73 = ATgetArgument(g_73, 3);
      x_73 = ATgetArgument(g_73, 4);
      f_73 :
      if(((ATgetType(h_73) == AT_LIST) && !(ATisEmpty(h_73))))
        {
          i_73 = ATgetFirst((ATermList) h_73);
          j_73 = (ATerm) ATgetNext((ATermList) h_73);
          t = (ATerm) ATmakeAppl(sym__5, not_null(j_73), not_null(k_73), not_null(l_73), not_null(m_73), (ATerm) ATinsert(CheckATermList(not_null(x_73)), not_null(i_73)));
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
ATerm diff_1 (ATerm t, ATerm w_103 (ATerm))
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
  k_74 = t;
  j_74 :
  if(match_cons(k_74, sym__2))
    {
      l_74 = ATgetArgument(k_74, 0);
      m_74 = ATgetArgument(k_74, 1);
      {
        t = not_null(l_74);
        {
          ATerm k_75 (ATerm t)
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
                {
                  ATerm u_16 = t;
                  int v_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = not_null(m_74);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_103, n_2);
                      t = k_75(t);
                      ;
                      LocalPopChoice(v_16);
                    }
                  else
                    {
                      t = u_16;
                      t = Cons_2(t, _id, k_75);
                    }
                }
              }
            return(t);
          }
          t = k_75(t);
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
  ATerm o_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,y_75 = NULL;
  o_75 = t;
  m_75 :
  if(match_cons(o_75, sym__2))
    {
      u_75 = ATgetArgument(o_75, 0);
      v_75 = ATgetArgument(o_75, 1);
      n_75 :
      if(((ATgetType(v_75) == AT_LIST) && !(ATisEmpty(v_75))))
        {
          w_75 = ATgetFirst((ATermList) v_75);
          y_75 = (ATerm) ATgetNext((ATermList) v_75);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_75)), not_null(w_75)), not_null(y_75));
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
  ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL;
  h_76 = t;
  g_76 :
  if(match_cons(h_76, sym__2))
    {
      i_76 = ATgetArgument(h_76, 0);
      j_76 = ATgetArgument(h_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_76)), not_null(i_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
  r_76 = t;
  o_76 :
  if(match_cons(r_76, sym__2))
    {
      s_76 = ATgetArgument(r_76, 0);
      v_76 = ATgetArgument(r_76, 1);
      p_76 :
      if(((ATgetType(s_76) == AT_LIST) && !(ATisEmpty(s_76))))
        {
          t_76 = ATgetFirst((ATermList) s_76);
          u_76 = (ATerm) ATgetNext((ATermList) s_76);
          q_76 :
          if(((ATgetType(v_76) == AT_LIST) && !(ATisEmpty(v_76))))
            {
              w_76 = ATgetFirst((ATermList) v_76);
              x_76 = (ATerm) ATgetNext((ATermList) v_76);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_76), not_null(w_76)), (ATerm) ATmakeAppl(sym__2, not_null(u_76), not_null(x_76)));
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
  ATerm h_77 = NULL,m_77 = NULL,n_77 = NULL;
  h_77 = t;
  e_77 :
  if(match_cons(h_77, sym__2))
    {
      m_77 = ATgetArgument(h_77, 0);
      n_77 = ATgetArgument(h_77, 1);
      f_77 :
      if(((ATgetType(m_77) == AT_LIST) && ATisEmpty(m_77)))
        {
          g_77 :
          if(((ATgetType(n_77) == AT_LIST) && ATisEmpty(n_77)))
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
ATerm genzip_4 (ATerm t, ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm))
{
  ATerm p_77 (ATerm t)
  {
    ATerm w_16 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = w_16;
        {
          t = e_97(t);
          {
            t = _2(t, g_97, p_77);
            t = f_97(t);
          }
        }
      }
    return(t);
  }
  t = p_77(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm i_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, i_97);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
  c_78 = t;
  a_78 :
  if(((ATgetType(c_78) == AT_LIST) && !(ATisEmpty(c_78))))
    {
      d_78 = ATgetFirst((ATermList) c_78);
      g_78 = (ATerm) ATgetNext((ATermList) c_78);
      b_78 :
      if(match_cons(d_78, sym__2))
        {
          e_78 = ATgetArgument(d_78, 0);
          f_78 = ATgetArgument(d_78, 1);
          {
            ATerm k_78 = NULL,l_78 = NULL,r_78 = NULL,g_79 = NULL;
            ATerm f_17;
            f_17 = t;
            {
              ATerm m_78 = NULL;
              ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
              t = not_null(f_78);
              {
                m_78 = t;
                {
                  t = SSL_explode_term(not_null(m_78));
                  {
                    o_78 = t;
                    v_77 :
                    if(match_cons(o_78, sym__2))
                      {
                        p_78 = ATgetArgument(o_78, 0);
                        q_78 = ATgetArgument(o_78, 1);
                        {
                          if(((k_78 != NULL) && (k_78 != p_78)))
                            _fail(p_78);
                          else
                            k_78 = p_78;
                          if(((l_78 != NULL) && (l_78 != q_78)))
                            _fail(q_78);
                          else
                            l_78 = q_78;
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
            t = f_17;
            {
              ATerm g_17;
              g_17 = t;
              {
                ATerm s_78 = NULL;
                ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
                t = not_null(e_78);
                {
                  s_78 = t;
                  {
                    t = SSL_explode_term(not_null(s_78));
                    {
                      d_79 = t;
                      y_77 :
                      if(match_cons(d_79, sym__2))
                        {
                          e_79 = ATgetArgument(d_79, 0);
                          f_79 = ATgetArgument(d_79, 1);
                          {
                            if(((k_78 != NULL) && (k_78 != e_79)))
                              _fail(e_79);
                            else
                              k_78 = e_79;
                            if(((r_78 != NULL) && (r_78 != f_79)))
                              _fail(f_79);
                            else
                              r_78 = f_79;
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
              t = g_17;
              {
                ATerm h_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_78), not_null(l_78));
                {
                  t = zip_1(t, _id);
                  {
                    h_79 = t;
                    if(((g_79 != NULL) && (g_79 != h_79)))
                      _fail(h_79);
                    else
                      g_79 = h_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_79), not_null(g_78));
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
  ATerm u_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL;
  u_79 = t;
  r_79 :
  if(((ATgetType(u_79) == AT_LIST) && !(ATisEmpty(u_79))))
    {
      w_79 = ATgetFirst((ATermList) u_79);
      z_79 = (ATerm) ATgetNext((ATermList) u_79);
      s_79 :
      if(match_cons(w_79, sym__2))
        {
          x_79 = ATgetArgument(w_79, 0);
          y_79 = ATgetArgument(w_79, 1);
          {
            ATerm b_80 = NULL;
            if(((x_79 != NULL) && (x_79 != y_79)))
              _fail(y_79);
            else
              x_79 = y_79;
            {
              if(((b_80 != NULL) && (b_80 != z_79)))
                _fail(z_79);
              else
                b_80 = z_79;
              t = not_null(b_80);
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
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm e_80 = NULL;
        e_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_80));
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm c_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = c_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, r_2);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_2, p_2, q_2);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm))
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,c_81 = NULL,d_81 = NULL,g_81 = NULL,h_81 = NULL;
  w_80 = t;
  p_80 :
  if(match_cons(w_80, sym__5))
    {
      x_80 = ATgetArgument(w_80, 0);
      c_81 = ATgetArgument(w_80, 1);
      d_81 = ATgetArgument(w_80, 2);
      g_81 = ATgetArgument(w_80, 3);
      h_81 = ATgetArgument(w_80, 4);
      q_80 :
      if(((ATgetType(x_80) == AT_LIST) && !(ATisEmpty(x_80))))
        {
          y_80 = ATgetFirst((ATermList) x_80);
          z_80 = (ATerm) ATgetNext((ATermList) x_80);
          {
            ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,x_81 = NULL,z_81 = NULL,b_82 = NULL;
            ATerm f_18;
            f_18 = t;
            {
              ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_80), not_null(d_81));
              {
                t = u_118(t);
                {
                  s_81 = t;
                  l_80 :
                  if(match_cons(s_81, sym__2))
                    {
                      t_81 = ATgetArgument(s_81, 0);
                      u_81 = ATgetArgument(s_81, 1);
                      {
                        ATerm v_81 = NULL;
                        if(((p_81 != NULL) && (p_81 != t_81)))
                          _fail(t_81);
                        else
                          p_81 = t_81;
                        {
                          if(((o_81 != NULL) && (o_81 != u_81)))
                            _fail(u_81);
                          else
                            o_81 = u_81;
                          {
                            t = not_null(p_81);
                            {
                              ATerm w_81 = NULL;
                              t = v_118(t);
                              {
                                v_81 = t;
                                {
                                  if(((q_81 != NULL) && (q_81 != v_81)))
                                    _fail(v_81);
                                  else
                                    q_81 = v_81;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_81), not_null(c_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        w_81 = t;
                                        if(((r_81 != NULL) && (r_81 != w_81)))
                                          _fail(w_81);
                                        else
                                          r_81 = w_81;
                                      }
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
                }
              }
            }
            t = f_18;
            {
              ATerm g_18;
              g_18 = t;
              {
                ATerm y_81 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_81), not_null(z_80));
                {
                  t = conc_0(t);
                  {
                    y_81 = t;
                    if(((x_81 != NULL) && (x_81 != y_81)))
                      _fail(y_81);
                    else
                      x_81 = y_81;
                  }
                }
              }
              t = g_18;
              {
                ATerm h_18;
                h_18 = t;
                {
                  ATerm a_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_81), not_null(c_81));
                  {
                    t = conc_0(t);
                    {
                      a_82 = t;
                      if(((z_81 != NULL) && (z_81 != a_82)))
                        _fail(a_82);
                      else
                        z_81 = a_82;
                    }
                  }
                }
                t = h_18;
                {
                  ATerm c_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_80), not_null(p_81), not_null(g_81));
                  {
                    t = w_118(t);
                    {
                      c_82 = t;
                      if(((b_82 != NULL) && (b_82 != c_82)))
                        _fail(c_82);
                      else
                        b_82 = c_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(x_81), not_null(z_81), not_null(o_81), not_null(b_82), not_null(h_81));
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
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  n_82 = t;
  l_82 :
  if(match_cons(n_82, sym__5))
    {
      o_82 = ATgetArgument(n_82, 0);
      p_82 = ATgetArgument(n_82, 1);
      q_82 = ATgetArgument(n_82, 2);
      r_82 = ATgetArgument(n_82, 3);
      s_82 = ATgetArgument(n_82, 4);
      m_82 :
      if(((ATgetType(o_82) == AT_LIST) && ATisEmpty(o_82)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(s_82));
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
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL;
  a_83 = t;
  z_82 :
  if(match_cons(a_83, sym__3))
    {
      b_83 = ATgetArgument(a_83, 0);
      c_83 = ATgetArgument(a_83, 1);
      d_83 = ATgetArgument(a_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(b_83), not_null(b_83), not_null(c_83), not_null(d_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm n_103 (ATerm), ATerm o_103 (ATerm))
{
  ATerm i_83 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_103(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        {
          t = o_103(t);
          t = i_83(t);
        }
      }
    return(t);
  }
  t = i_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm s_103 (ATerm))
{
  t = q_103(t);
  t = while_not_2(t, r_103, s_103);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm h_118 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, f_118, g_118, h_118);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_2);
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL;
    l_83 = t;
    k_83 :
    if(match_cons(l_83, sym__3))
      {
        m_83 = ATgetArgument(l_83, 0);
        n_83 = ATgetArgument(l_83, 1);
        o_83 = ATgetArgument(l_83, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(o_83)), not_null(n_83));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_b_7;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_119 (ATerm))
{
  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
  z_83 = t;
  y_83 :
  if(match_cons(z_83, sym__2))
    {
      a_84 = ATgetArgument(z_83, 0);
      b_84 = ATgetArgument(z_83, 1);
      {
        ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
        ATerm u_18;
        u_18 = t;
        {
          ATerm h_84 = NULL;
          ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL;
          t = d_119(t);
          {
            h_84 = t;
            {
              if(((e_84 != NULL) && (e_84 != h_84)))
                _fail(h_84);
              else
                e_84 = h_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_84), not_null(a_84), not_null(b_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_18 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_84), term_d_19);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(b_19);
                      }
                    else
                      {
                        t = v_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      i_84 = t;
                      x_83 :
                      if(((ATgetType(i_84) == AT_LIST) && !(ATisEmpty(i_84))))
                        {
                          j_84 = ATgetFirst((ATermList) i_84);
                          k_84 = (ATerm) ATgetNext((ATermList) i_84);
                          {
                            if(((f_84 != NULL) && (f_84 != j_84)))
                              _fail(j_84);
                            else
                              f_84 = j_84;
                            {
                              if(((g_84 != NULL) && (g_84 != k_84)))
                                _fail(k_84);
                              else
                                g_84 = k_84;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_84), term_d_19, (ATerm) ATinsert(CheckATermList(not_null(g_84)), (ATerm) ATinsert(CheckATermList(not_null(f_84)), not_null(a_84))));
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
        t = u_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm s_84 = NULL;
  ATerm v_84 = NULL;
  s_84 = t;
  {
    ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
    t = not_null(s_84);
    {
      ATerm w_2 (ATerm t)
      {
        t = term_e_19;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        w_84 = t;
        q_84 :
        if(match_cons(w_84, sym_Defined_2))
          {
            x_84 = ATgetArgument(w_84, 0);
            y_84 = ATgetArgument(w_84, 1);
            r_84 :
            if(match_string(x_84, "e_0"))
              {
                if(((v_84 != NULL) && (v_84 != y_84)))
                  _fail(y_84);
                else
                  v_84 = y_84;
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
    t = not_null(v_84);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
  d_85 = t;
  c_85 :
  if(((ATgetType(d_85) == AT_LIST) && !(ATisEmpty(d_85))))
    {
      e_85 = ATgetFirst((ATermList) d_85);
      f_85 = (ATerm) ATgetNext((ATermList) d_85);
      t = not_null(e_85);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL;
  k_85 = t;
  j_85 :
  if(match_cons(k_85, sym__2))
    {
      l_85 = ATgetArgument(k_85, 0);
      m_85 = ATgetArgument(k_85, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_85), not_null(m_85));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm f_119 (ATerm))
{
  ATerm s_85 = NULL;
  ATerm u_85 = NULL;
  s_85 = t;
  {
    ATerm v_85 = NULL;
    t = term_q_15;
    {
      t = f_119(t);
      {
        v_85 = t;
        if(((u_85 != NULL) && (u_85 != v_85)))
          _fail(v_85);
        else
          u_85 = v_85;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_85), not_null(s_85));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL;
  d_86 = t;
  c_86 :
  if(match_cons(d_86, sym__2))
    {
      e_86 = ATgetArgument(d_86, 0);
      f_86 = ATgetArgument(d_86, 1);
      {
        ATerm j_86 = NULL,k_86 = NULL;
        ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL;
        t = not_null(d_86);
        {
          ATerm x_2 (ATerm t)
          {
            t = term_f_19;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            l_86 = t;
            a_86 :
            if(match_cons(l_86, sym_Defined_3))
              {
                m_86 = ATgetArgument(l_86, 0);
                n_86 = ATgetArgument(l_86, 1);
                o_86 = ATgetArgument(l_86, 2);
                b_86 :
                if(match_string(m_86, "c_0"))
                  {
                    if(((j_86 != NULL) && (j_86 != n_86)))
                      _fail(n_86);
                    else
                      j_86 = n_86;
                    if(((k_86 != NULL) && (k_86 != o_86)))
                      _fail(o_86);
                    else
                      k_86 = o_86;
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
        t = (ATerm) ATinsert(CheckATermList(not_null(k_86)), not_null(j_86));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
    x_86 = t;
    w_86 :
    if(match_cons(x_86, sym_SDef_3))
      {
        y_86 = ATgetArgument(x_86, 0);
        z_86 = ATgetArgument(x_86, 1);
        a_87 = ATgetArgument(x_86, 2);
        {
          ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
          ATerm g_19;
          g_19 = t;
          {
            ATerm i_87 = NULL;
            t = not_null(z_86);
            {
              ATerm j_87 = NULL;
              t = length_0(t);
              {
                i_87 = t;
                {
                  if(((g_87 != NULL) && (g_87 != i_87)))
                    _fail(i_87);
                  else
                    g_87 = i_87;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_86), not_null(g_87));
                    {
                      ATerm k_87 = NULL,m_87 = NULL;
                      ATerm h_19 = t;
                      int k_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          ;
                          LocalPopChoice(k_19);
                        }
                      else
                        {
                          t = h_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        j_87 = t;
                        {
                          if(((f_87 != NULL) && (f_87 != j_87)))
                            _fail(j_87);
                          else
                            f_87 = j_87;
                          {
                            ATerm l_87 = NULL;
                            t = not_null(y_86);
                            {
                              ATerm l_19 = t;
                              int m_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  ;
                                  LocalPopChoice(m_19);
                                }
                              else
                                {
                                  t = l_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                l_87 = t;
                                if(((k_87 != NULL) && (k_87 != l_87)))
                                  _fail(l_87);
                                else
                                  k_87 = l_87;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(g_87)), not_null(k_87));
                              {
                                t = union_0(t);
                                {
                                  m_87 = t;
                                  {
                                    if(((h_87 != NULL) && (h_87 != m_87)))
                                      _fail(m_87);
                                    else
                                      h_87 = m_87;
                                    {
                                      ATerm n_19;
                                      n_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_86), not_null(g_87)), (ATerm) ATmakeAppl(sym_Defined_3, term_s_19, not_null(x_86), not_null(f_87)));
                                        {
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_f_19;
                                            return(t);
                                          }
                                          t = assert_1(t, z_2);
                                        }
                                      }
                                      t = n_19;
                                      {
                                        ATerm t_19;
                                        t_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_86), (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, not_null(h_87)));
                                          {
                                            ATerm a_3 (ATerm t)
                                            {
                                              t = term_e_19;
                                              return(t);
                                            }
                                            t = assert_1(t, a_3);
                                          }
                                        }
                                        t = t_19;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = g_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, y_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    t = term_v_19;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_b_7;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  u_87 = t;
  t_87 :
  if(match_cons(u_87, sym__2))
    {
      v_87 = ATgetArgument(u_87, 0);
      w_87 = ATgetArgument(u_87, 1);
      if(((v_87 != NULL) && (v_87 != w_87)))
        _fail(w_87);
      else
        v_87 = w_87;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_104 (ATerm), ATerm f_104 (ATerm))
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
  c_88 = t;
  b_88 :
  if(((ATgetType(c_88) == AT_LIST) && !(ATisEmpty(c_88))))
    {
      d_88 = ATgetFirst((ATermList) c_88);
      e_88 = (ATerm) ATgetNext((ATermList) c_88);
      {
        t = f_104(t);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm j_88 = NULL;
            j_88 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_88), not_null(j_88));
              t = e_104(t);
            }
            return(t);
          }
          t = fetch_1(t, d_3);
        }
        t = not_null(e_88);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_104 (ATerm))
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
  p_88 = t;
  o_88 :
  if(match_cons(p_88, sym__2))
    {
      q_88 = ATgetArgument(p_88, 0);
      r_88 = ATgetArgument(p_88, 1);
      {
        t = not_null(q_88);
        {
          ATerm v_88 (ATerm t)
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_88);
                ;
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                {
                  ATerm y_19 = t;
                  int z_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(r_88);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_104, e_3);
                      t = v_88(t);
                      ;
                      LocalPopChoice(z_19);
                    }
                  else
                    {
                      t = y_19;
                      t = Cons_2(t, _id, v_88);
                    }
                }
              }
            return(t);
          }
          t = v_88(t);
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
ATerm foldr_3 (ATerm t, ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm))
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_106(t);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
        d_89 = t;
        c_89 :
        if(((ATgetType(d_89) == AT_LIST) && !(ATisEmpty(d_89))))
          {
            e_89 = ATgetFirst((ATermList) d_89);
            f_89 = (ATerm) ATgetNext((ATermList) d_89);
            {
              ATerm i_89 = NULL,m_89 = NULL;
              ATerm g_20;
              g_20 = t;
              {
                ATerm l_89 = NULL;
                t = not_null(e_89);
                {
                  t = l_106(t);
                  {
                    l_89 = t;
                    if(((i_89 != NULL) && (i_89 != l_89)))
                      _fail(l_89);
                    else
                      i_89 = l_89;
                  }
                }
              }
              t = g_20;
              {
                ATerm n_89 = NULL;
                t = not_null(f_89);
                {
                  t = foldr_3(t, j_106, k_106, l_106);
                  {
                    n_89 = t;
                    if(((m_89 != NULL) && (m_89 != n_89)))
                      _fail(n_89);
                    else
                      m_89 = n_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_89), not_null(m_89));
                  t = k_106(t);
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
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL;
    w_89 = t;
    v_89 :
    if(match_cons(w_89, sym_SDef_3))
      {
        x_89 = ATgetArgument(w_89, 0);
        y_89 = ATgetArgument(w_89, 1);
        z_89 = ATgetArgument(w_89, 2);
        {
          ATerm c_90 = NULL;
          ATerm d_90 = NULL;
          t = not_null(y_89);
          {
            t = length_0(t);
            {
              d_90 = t;
              if(((c_90 != NULL) && (c_90 != d_90)))
                _fail(d_90);
              else
                c_90 = d_90;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(x_89), not_null(c_90)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, f_3, union_0, g_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm i_90 = NULL,k_90 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm j_90 = NULL;
    t = definition_names_0(t);
    {
      j_90 = t;
      if(((i_90 != NULL) && (i_90 != j_90)))
        _fail(j_90);
      else
        i_90 = j_90;
    }
  }
  t = k_20;
  {
    ATerm l_90 = NULL;
    t = sort_defs_0(t);
    {
      l_90 = t;
      if(((k_90 != NULL) && (k_90 != l_90)))
        _fail(l_90);
      else
        k_90 = l_90;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(i_90), not_null(k_90), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm t_90 = NULL,u_90 = NULL;
  t_90 = t;
  s_90 :
  if(match_cons(t_90, sym_Strategies_1))
    {
      u_90 = ATgetArgument(t_90, 0);
      {
        ATerm x_90 = NULL,z_90 = NULL;
        ATerm y_90 = NULL;
        t = SSLgetAnnotations(not_null(t_90));
        {
          y_90 = t;
          if(((x_90 != NULL) && (x_90 != y_90)))
            _fail(y_90);
          else
            x_90 = y_90;
        }
        {
          t = not_null(u_90);
          {
            ATerm b_91 = NULL;
            t = t_79(t);
            {
              z_90 = t;
              {
                ATerm c_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_90)), not_null(x_90));
                {
                  c_91 = t;
                  if(((b_91 != NULL) && (b_91 != c_91)))
                    _fail(c_91);
                  else
                    b_91 = c_91;
                }
                t = not_null(b_91);
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
ATerm Cons_2 (ATerm t, ATerm i_77 (ATerm), ATerm j_77 (ATerm))
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL;
  n_91 = t;
  m_91 :
  if(((ATgetType(n_91) == AT_LIST) && !(ATisEmpty(n_91))))
    {
      o_91 = ATgetFirst((ATermList) n_91);
      p_91 = (ATerm) ATgetNext((ATermList) n_91);
      {
        ATerm t_91 = NULL,v_91 = NULL;
        ATerm u_91 = NULL;
        t = SSLgetAnnotations(not_null(n_91));
        {
          u_91 = t;
          if(((t_91 != NULL) && (t_91 != u_91)))
            _fail(u_91);
          else
            t_91 = u_91;
        }
        {
          t = not_null(o_91);
          {
            ATerm d_92 = NULL;
            t = i_77(t);
            {
              v_91 = t;
              {
                t = not_null(p_91);
                {
                  ATerm f_92 = NULL;
                  t = j_77(t);
                  {
                    d_92 = t;
                    {
                      ATerm g_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_92)), not_null(v_91)), not_null(t_91));
                      {
                        g_92 = t;
                        if(((f_92 != NULL) && (f_92 != g_92)))
                          _fail(g_92);
                        else
                          f_92 = g_92;
                      }
                      t = not_null(f_92);
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
ATerm Specification_1 (ATerm t, ATerm v_79 (ATerm))
{
  ATerm u_92 = NULL,v_92 = NULL;
  u_92 = t;
  t_92 :
  if(match_cons(u_92, sym_Specification_1))
    {
      v_92 = ATgetArgument(u_92, 0);
      {
        ATerm y_92 = NULL,a_93 = NULL;
        ATerm z_92 = NULL;
        t = SSLgetAnnotations(not_null(u_92));
        {
          z_92 = t;
          if(((y_92 != NULL) && (y_92 != z_92)))
            _fail(z_92);
          else
            y_92 = z_92;
        }
        {
          t = not_null(v_92);
          {
            ATerm c_93 = NULL;
            t = v_79(t);
            {
              a_93 = t;
              {
                ATerm d_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(a_93)), not_null(y_92));
                {
                  d_93 = t;
                  if(((c_93 != NULL) && (c_93 != d_93)))
                    _fail(d_93);
                  else
                    c_93 = d_93;
                }
                t = not_null(c_93);
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
ATerm _2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
  o_93 = t;
  n_93 :
  if(match_cons(o_93, sym__2))
    {
      p_93 = ATgetArgument(o_93, 0);
      q_93 = ATgetArgument(o_93, 1);
      {
        ATerm u_93 = NULL,y_93 = NULL;
        ATerm x_93 = NULL;
        t = SSLgetAnnotations(not_null(o_93));
        {
          x_93 = t;
          if(((u_93 != NULL) && (u_93 != x_93)))
            _fail(x_93);
          else
            u_93 = x_93;
        }
        {
          t = not_null(p_93);
          {
            ATerm a_94 = NULL;
            t = z_75(t);
            {
              y_93 = t;
              {
                t = not_null(q_93);
                {
                  ATerm c_94 = NULL;
                  t = a_76(t);
                  {
                    a_94 = t;
                    {
                      ATerm d_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_93), not_null(a_94)), not_null(u_93));
                      {
                        d_94 = t;
                        if(((c_94 != NULL) && (c_94 != d_94)))
                          _fail(d_94);
                        else
                          c_94 = d_94;
                      }
                      t = not_null(c_94);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm m_20;
  m_20 = t;
  {
    ATerm m_94 = NULL;
    ATerm n_94 = NULL;
    t = term_q_15;
    {
      t = whoami_0(t);
      {
        n_94 = t;
        if(((m_94 != NULL) && (m_94 != n_94)))
          _fail(n_94);
        else
          m_94 = n_94;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_20), not_null(m_94)), term_p_20));
      {
        t = printnl_0(t);
        {
          t = term_b_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  r_94 = t;
  q_94 :
  if(match_cons(r_94, sym__2))
    {
      s_94 = ATgetArgument(r_94, 0);
      t_94 = ATgetArgument(r_94, 1);
      {
        ATerm r_20;
        r_20 = t;
        t = SSL_printnl(not_null(s_94), not_null(t_94));
        t = r_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_94 = NULL;
  y_94 = t;
  t = SSL_implode_string(not_null(y_94));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL;
        d_95 = t;
        c_95 :
        if(((ATgetType(d_95) == AT_LIST) && !(ATisEmpty(d_95))))
          {
            e_95 = ATgetFirst((ATermList) d_95);
            f_95 = (ATerm) ATgetNext((ATermList) d_95);
            {
              t = not_null(e_95);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(f_95);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_3);
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
  ATerm q_95 = NULL;
  ATerm s_95 = NULL;
  q_95 = t;
  {
    ATerm t_95 = NULL;
    ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
    t = not_null(q_95);
    {
      t_95 = t;
      {
        t = SSL_explode_term(not_null(t_95));
        {
          v_95 = t;
          o_95 :
          if(match_cons(v_95, sym__2))
            {
              w_95 = ATgetArgument(v_95, 0);
              x_95 = ATgetArgument(v_95, 1);
              p_95 :
              if(match_string(w_95, ""))
                {
                  if(((s_95 != NULL) && (s_95 != x_95)))
                    _fail(x_95);
                  else
                    s_95 = x_95;
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
      t = not_null(s_95);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_89 (ATerm))
{
  ATerm b_96 (ATerm t)
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_96);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        {
          t = Nil_0(t);
          t = p_89(t);
        }
      }
    return(t);
  }
  t = b_96(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL,i_96 = NULL;
  g_96 = t;
  f_96 :
  if(match_cons(g_96, sym__2))
    {
      h_96 = ATgetArgument(g_96, 0);
      i_96 = ATgetArgument(g_96, 1);
      {
        t = not_null(h_96);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(i_96);
            return(t);
          }
          t = at_end_1(t, k_3);
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
  ATerm w_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = w_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_96 = NULL;
  n_96 = t;
  t = SSL_explode_string(not_null(n_96));
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
ATerm eval_config_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm c_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_3);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = c_21;
            {
              ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
              y_96 = t;
              x_96 :
              if(match_cons(y_96, sym_Path_1))
                {
                  z_96 = ATgetArgument(y_96, 0);
                  t = not_null(z_96);
                }
              else
                {
                  if(match_cons(y_96, sym_Var_1))
                    {
                      z_96 = ATgetArgument(y_96, 0);
                      {
                        t = not_null(z_96);
                        {
                          ATerm f_21 = t;
                          int o_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(o_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_p_21;
                                  return(t);
                                }
                                t = debug_1(t, m_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_96, sym_Prefix_2))
                        {
                          z_96 = ATgetArgument(y_96, 0);
                          a_97 = ATgetArgument(y_96, 1);
                          {
                            ATerm m_97 = NULL,p_97 = NULL;
                            ATerm q_21;
                            q_21 = t;
                            {
                              ATerm o_97 = NULL;
                              t = not_null(z_96);
                              {
                                t = eval_config_0(t);
                                {
                                  o_97 = t;
                                  if(((m_97 != NULL) && (m_97 != o_97)))
                                    _fail(o_97);
                                  else
                                    m_97 = o_97;
                                }
                              }
                            }
                            t = q_21;
                            {
                              ATerm q_97 = NULL;
                              t = not_null(a_97);
                              {
                                t = eval_config_0(t);
                                {
                                  q_97 = t;
                                  if(((p_97 != NULL) && (p_97 != q_97)))
                                    _fail(q_97);
                                  else
                                    p_97 = q_97;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_97), not_null(p_97));
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
  ATerm y_97 = NULL;
  y_97 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_21, not_null(y_97));
    {
      t = table_get_0(t);
      {
        ATerm n_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_21;
            z_21 = t;
            {
              ATerm a_98 = NULL;
              ATerm b_98 = NULL;
              b_98 = t;
              if(((a_98 != NULL) && (a_98 != b_98)))
                _fail(b_98);
              else
                a_98 = b_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_r_21, not_null(y_97), not_null(a_98));
                t = table_put_0(t);
              }
            }
            t = z_21;
          }
          return(t);
        }
        t = try_1(t, n_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_112 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm a_22;
    a_22 = t;
    {
      ATerm f_98 = NULL;
      ATerm g_98 = NULL;
      t = term_g_22;
      {
        t = get_config_0(t);
        {
          g_98 = t;
          if(((f_98 != NULL) && (f_98 != g_98)))
            _fail(g_98);
          else
            f_98 = g_98;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_98), term_h_22);
        t = geq_0(t);
      }
    }
    t = a_22;
    t = o_112(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL;
  n_98 = t;
  k_98 :
  if(match_cons(n_98, sym__2))
    {
      o_98 = ATgetArgument(n_98, 0);
      p_98 = ATgetArgument(n_98, 1);
      l_98 :
      if(match_cons(p_98, sym_Stream_1))
        {
          q_98 = ATgetArgument(p_98, 0);
          {
            ATerm t_98 = NULL;
            t = SSL_fputc(not_null(o_98), not_null(q_98));
            {
              ATerm u_98 = NULL;
              u_98 = t;
              if(((t_98 != NULL) && (t_98 != u_98)))
                _fail(u_98);
              else
                t_98 = u_98;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_98));
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
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL;
  b_99 = t;
  z_98 :
  if(match_cons(b_99, sym__2))
    {
      c_99 = ATgetArgument(b_99, 0);
      e_99 = ATgetArgument(b_99, 1);
      a_99 :
      if(match_cons(c_99, sym_Stream_1))
        {
          d_99 = ATgetArgument(c_99, 0);
          {
            ATerm h_99 = NULL;
            t = SSL_write_term_to_stream_text(not_null(d_99), not_null(e_99));
            {
              ATerm i_99 = NULL;
              i_99 = t;
              if(((h_99 != NULL) && (h_99 != i_99)))
                _fail(i_99);
              else
                h_99 = i_99;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_99));
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm m_99 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm n_99 = NULL;
      n_99 = t;
      if(((m_99 != NULL) && (m_99 != n_99)))
        _fail(n_99);
      else
        m_99 = n_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_22, not_null(m_99));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, p_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL;
  t_99 = t;
  r_99 :
  if(match_cons(t_99, sym__2))
    {
      u_99 = ATgetArgument(t_99, 0);
      w_99 = ATgetArgument(t_99, 1);
      s_99 :
      if(match_cons(u_99, sym_Stream_1))
        {
          v_99 = ATgetArgument(u_99, 0);
          {
            ATerm z_99 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(v_99), not_null(w_99));
            {
              ATerm a_100 = NULL;
              a_100 = t;
              if(((z_99 != NULL) && (z_99 != a_100)))
                _fail(a_100);
              else
                z_99 = a_100;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_99));
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
ATerm WriteToFile_1 (ATerm t, ATerm k_111 (ATerm))
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL;
  h_100 = t;
  g_100 :
  if(match_cons(h_100, sym__2))
    {
      i_100 = ATgetArgument(h_100, 0);
      j_100 = ATgetArgument(h_100, 1);
      {
        ATerm m_100 = NULL,o_100 = NULL;
        t = not_null(i_100);
        {
          ATerm n_100 = NULL;
          n_100 = t;
          if(((m_100 != NULL) && (m_100 != n_100)))
            _fail(n_100);
          else
            m_100 = n_100;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_100), term_r_22);
            {
              t = open_stream_0(t);
              {
                ATerm p_100 = NULL;
                p_100 = t;
                if(((o_100 != NULL) && (o_100 != p_100)))
                  _fail(p_100);
                else
                  o_100 = p_100;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_100), not_null(j_100));
                  {
                    t = k_111(t);
                    {
                      t = fclose_0(t);
                      t = not_null(j_100);
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
ATerm output_file_0 (ATerm t)
{
  ATerm x_100 = NULL;
  ATerm s_22;
  s_22 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm y_100 = NULL,e_101 = NULL;
            y_100 = t;
            u_100 :
            if(match_cons(y_100, sym_Output_1))
              {
                e_101 = ATgetArgument(y_100, 0);
                if(((x_100 != NULL) && (x_100 != e_101)))
                  _fail(e_101);
                else
                  x_100 = e_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_3);
          ;
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm f_101 = NULL;
            t = term_v_22;
            {
              f_101 = t;
              if(((x_100 != NULL) && (x_100 != f_101)))
                _fail(f_101);
              else
                x_100 = f_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = s_22;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(x_100);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm w_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm g_101 = NULL;
              g_101 = t;
              w_100 :
              if(!(match_cons(g_101, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_3);
            return(t);
          }
          t = _2(t, u_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(x_22);
        }
      else
        {
          t = w_22;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm m_114 (ATerm))
{
  ATerm m_101 = NULL,o_101 = NULL,p_101 = NULL,q_101 = NULL;
  ATerm y_22;
  y_22 = t;
  t = dtime_0(t);
  t = y_22;
  {
    t = m_114(t);
    {
      ATerm z_22;
      z_22 = t;
      {
        ATerm n_101 = NULL;
        t = dtime_0(t);
        {
          n_101 = t;
          if(((m_101 != NULL) && (m_101 != n_101)))
            _fail(n_101);
          else
            m_101 = n_101;
        }
      }
      t = z_22;
      {
        o_101 = t;
        l_101 :
        if(match_cons(o_101, sym__2))
          {
            p_101 = ATgetArgument(o_101, 0);
            q_101 = ATgetArgument(o_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_101))), not_null(q_101));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm y_101 = NULL,z_101 = NULL;
  ATerm f_102 (ATerm t)
  {
    t = SSL_fclose(not_null(z_101));
    return(t);
  }
  z_101 = t;
  x_101 :
  if(match_cons(z_101, sym_Stream_1))
    {
      y_101 = ATgetArgument(z_101, 0);
      {
        ATerm a_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_101));
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = a_23;
            t = f_102(t);
          }
      }
    }
  else
    {
      t = f_102(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL;
  i_102 = t;
  h_102 :
  if(match_cons(i_102, sym_Stream_1))
    {
      j_102 = ATgetArgument(i_102, 0);
      t = SSL_read_term_from_stream(not_null(j_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_110 (ATerm))
{
  ATerm h_23;
  h_23 = t;
  {
    ATerm o_102 = NULL,q_102 = NULL;
    ATerm i_23;
    i_23 = t;
    {
      ATerm p_102 = NULL;
      t = w_110(t);
      {
        p_102 = t;
        if(((o_102 != NULL) && (o_102 != p_102)))
          _fail(p_102);
        else
          o_102 = p_102;
      }
    }
    t = i_23;
    {
      ATerm r_102 = NULL;
      r_102 = t;
      if(((q_102 != NULL) && (q_102 != r_102)))
        _fail(r_102);
      else
        q_102 = r_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_102)), not_null(o_102)));
        t = printnl_0(t);
      }
    }
  }
  t = h_23;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm x_102 = NULL,a_103 = NULL,b_103 = NULL;
  x_102 = t;
  w_102 :
  if(match_cons(x_102, sym__2))
    {
      a_103 = ATgetArgument(x_102, 0);
      b_103 = ATgetArgument(x_102, 1);
      {
        ATerm e_103 = NULL;
        t = SSL_fopen(not_null(a_103), not_null(b_103));
        {
          ATerm f_103 = NULL;
          f_103 = t;
          if(((e_103 != NULL) && (e_103 != f_103)))
            _fail(f_103);
          else
            e_103 = f_103;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_103));
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
  ATerm j_103 = NULL;
  j_103 = t;
  t = SSL_is_string(not_null(j_103));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm t_103 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm u_103 = NULL;
    u_103 = t;
    if(((t_103 != NULL) && (t_103 != u_103)))
      _fail(u_103);
    else
      t_103 = u_103;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_103));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm z_103 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm c_104 = NULL;
    c_104 = t;
    if(((z_103 != NULL) && (z_103 != c_104)))
      _fail(c_104);
    else
      z_103 = c_104;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_103));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm h_104 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm i_104 = NULL;
    i_104 = t;
    if(((h_104 != NULL) && (h_104 != i_104)))
      _fail(i_104);
    else
      h_104 = i_104;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_104));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm t_104 = NULL;
  t_104 = t;
  s_104 :
  if(match_cons(t_104, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(t_104, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(t_104, sym_stdin_0))
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
  ATerm d_105 = NULL;
  ATerm f_105 = NULL,g_105 = NULL;
  d_105 = t;
  {
    ATerm h_105 = NULL;
    ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL;
    t = not_null(d_105);
    {
      h_105 = t;
      {
        t = SSL_explode_term(not_null(h_105));
        {
          j_105 = t;
          a_105 :
          if(match_cons(j_105, sym__2))
            {
              k_105 = ATgetArgument(j_105, 0);
              l_105 = ATgetArgument(j_105, 1);
              b_105 :
              if(match_string(k_105, ""))
                {
                  c_105 :
                  if(((ATgetType(l_105) == AT_LIST) && !(ATisEmpty(l_105))))
                    {
                      m_105 = ATgetFirst((ATermList) l_105);
                      n_105 = (ATerm) ATgetNext((ATermList) l_105);
                      {
                        if(((g_105 != NULL) && (g_105 != m_105)))
                          _fail(m_105);
                        else
                          g_105 = m_105;
                        if(((f_105 != NULL) && (f_105 != n_105)))
                          _fail(n_105);
                        else
                          f_105 = n_105;
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
    t = not_null(g_105);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL;
  v_105 = t;
  u_105 :
  if(match_cons(v_105, sym__2))
    {
      w_105 = ATgetArgument(v_105, 0);
      x_105 = ATgetArgument(v_105, 1);
      {
        ATerm j_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(r_23);
          }
        else
          {
            t = j_23;
            {
              ATerm s_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm y_105 = NULL,z_105 = NULL;
                    y_105 = t;
                    t_105 :
                    if(match_cons(y_105, sym_Path_1))
                      {
                        z_105 = ATgetArgument(y_105, 0);
                        t = not_null(z_105);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, w_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = s_23;
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
  ATerm m_106 = NULL;
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_106 = NULL;
      ATerm g_106 = NULL;
      g_106 = t;
      if(((f_106 != NULL) && (f_106 != g_106)))
        _fail(g_106);
      else
        f_106 = g_106;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_106), term_y_23);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm x_3 (ATerm t)
        {
          t = term_z_23;
          return(t);
        }
        t = debug_1(t, x_3);
        _fail(t);
      }
    }
  {
    ATerm a_24;
    a_24 = t;
    {
      ATerm n_106 = NULL;
      t = read_from_stream_0(t);
      {
        n_106 = t;
        if(((m_106 != NULL) && (m_106 != n_106)))
          _fail(n_106);
        else
          m_106 = n_106;
      }
    }
    t = a_24;
    {
      t = fclose_0(t);
      t = not_null(m_106);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_96 (ATerm), ATerm e_96 (ATerm))
{
  ATerm s_106 = NULL,u_106 = NULL;
  ATerm b_24;
  b_24 = t;
  {
    ATerm t_106 = NULL;
    t = d_96(t);
    {
      t_106 = t;
      if(((s_106 != NULL) && (s_106 != t_106)))
        _fail(t_106);
      else
        s_106 = t_106;
    }
  }
  t = b_24;
  {
    ATerm x_106 = NULL;
    t = e_96(t);
    {
      x_106 = t;
      if(((u_106 != NULL) && (u_106 != x_106)))
        _fail(x_106);
      else
        u_106 = x_106;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_106), not_null(u_106));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_107 = NULL;
  ATerm c_24;
  c_24 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm e_107 = NULL,f_107 = NULL;
          e_107 = t;
          b_107 :
          if(match_cons(e_107, sym_Input_1))
            {
              f_107 = ATgetArgument(e_107, 0);
              if(((d_107 != NULL) && (d_107 != f_107)))
                _fail(f_107);
              else
                d_107 = f_107;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm g_107 = NULL;
          t = term_f_24;
          {
            g_107 = t;
            if(((d_107 != NULL) && (d_107 != g_107)))
              _fail(g_107);
            else
              d_107 = g_107;
          }
        }
      }
  }
  t = c_24;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(d_107);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm k_107 = NULL;
    k_107 = t;
    j_107 :
    if(!(match_string(k_107, "-v")))
      {
        if(!(match_string(k_107, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_i_24;
    t = set_config_0(t);
    t = term_j_24;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_k_24;
    return(t);
  }
  t = Option_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm n_107 = NULL;
    n_107 = t;
    l_107 :
    if(!(match_string(n_107, "-k")))
      {
        if(!(match_string(n_107, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm l_24;
    l_24 = t;
    {
      ATerm o_107 = NULL;
      ATerm p_107 = NULL;
      t = string_to_int_0(t);
      {
        p_107 = t;
        if(((o_107 != NULL) && (o_107 != p_107)))
          _fail(p_107);
        else
          o_107 = p_107;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_24, not_null(o_107));
        t = set_config_0(t);
      }
    }
    t = l_24;
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  t = ArgOption_3(t, d_4, e_4, f_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_107 = NULL;
  s_107 = t;
  t = SSL_string_to_int(not_null(s_107));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_24 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm a_108 = NULL;
        a_108 = t;
        v_107 :
        if(!(match_string(a_108, "-S")))
          {
            if(!(match_string(a_108, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_m_25;
        t = set_config_0(t);
        t = term_y_25;
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = term_z_25;
        return(t);
      }
      t = Option_3(t, g_4, h_4, i_4);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = t_24;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm b_108 = NULL;
              b_108 = t;
              w_107 :
              if(!(match_string(b_108, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm e_108 = NULL;
              ATerm c_26;
              c_26 = t;
              {
                ATerm c_108 = NULL;
                ATerm d_108 = NULL;
                t = string_to_int_0(t);
                {
                  d_108 = t;
                  if(((c_108 != NULL) && (c_108 != d_108)))
                    _fail(d_108);
                  else
                    c_108 = d_108;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_22, not_null(c_108));
                  t = set_config_0(t);
                }
              }
              t = c_26;
              {
                ATerm f_108 = NULL;
                f_108 = t;
                if(((e_108 != NULL) && (e_108 != f_108)))
                  _fail(f_108);
                else
                  e_108 = f_108;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_108));
              }
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = term_d_26;
              return(t);
            }
            t = ArgOption_3(t, j_4, n_4, o_4);
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm g_108 = NULL;
                g_108 = t;
                z_107 :
                if(!(match_string(g_108, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_f_26;
                t = set_config_0(t);
                t = term_g_26;
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_h_26;
                return(t);
              }
              t = Option_3(t, p_4, q_4, r_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm m_108 = NULL;
    m_108 = t;
    j_108 :
    if(!(match_string(m_108, "-o")))
      {
        if(!(match_string(m_108, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm p_108 = NULL;
    ATerm m_26;
    m_26 = t;
    {
      ATerm n_108 = NULL;
      ATerm o_108 = NULL;
      o_108 = t;
      if(((n_108 != NULL) && (n_108 != o_108)))
        _fail(o_108);
      else
        n_108 = o_108;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_26, not_null(n_108));
        t = set_config_0(t);
      }
    }
    t = m_26;
    {
      ATerm q_108 = NULL;
      q_108 = t;
      if(((p_108 != NULL) && (p_108 != q_108)))
        _fail(q_108);
      else
        p_108 = q_108;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_108));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm u_108 = NULL;
          u_108 = t;
          t_108 :
          if(!(match_string(u_108, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_t_26;
          t = set_config_0(t);
          t = term_u_26;
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_w_26;
          return(t);
        }
        t = Option_3(t, v_4, w_4, x_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL;
  a_109 = t;
  y_108 :
  if(match_string(a_109, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(a_109) == AT_LIST) && !(ATisEmpty(a_109))))
        {
          b_109 = ATgetFirst((ATermList) a_109);
          c_109 = (ATerm) ATgetNext((ATermList) a_109);
          z_108 :
          if(((ATgetType(c_109) == AT_LIST) && !(ATisEmpty(c_109))))
            {
              d_109 = ATgetFirst((ATermList) c_109);
              e_109 = (ATerm) ATgetNext((ATermList) c_109);
              {
                ATerm i_109 = NULL;
                ATerm x_26;
                x_26 = t;
                {
                  t = not_null(b_109);
                  t = k_0(t);
                }
                t = x_26;
                {
                  ATerm j_109 = NULL;
                  t = not_null(d_109);
                  {
                    t = m_0(t);
                    {
                      j_109 = t;
                      if(((i_109 != NULL) && (i_109 != j_109)))
                        _fail(j_109);
                      else
                        i_109 = j_109;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_109)), not_null(i_109));
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
  ATerm y_4 (ATerm t)
  {
    ATerm q_109 = NULL;
    q_109 = t;
    n_109 :
    if(!(match_string(q_109, "-i")))
      {
        if(!(match_string(q_109, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm t_109 = NULL;
    ATerm y_26;
    y_26 = t;
    {
      ATerm r_109 = NULL;
      ATerm s_109 = NULL;
      s_109 = t;
      if(((r_109 != NULL) && (r_109 != s_109)))
        _fail(s_109);
      else
        r_109 = s_109;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_27, not_null(r_109));
        t = set_config_0(t);
      }
    }
    t = y_26;
    {
      ATerm u_109 = NULL;
      u_109 = t;
      if(((t_109 != NULL) && (t_109 != u_109)))
        _fail(u_109);
      else
        t_109 = u_109;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_109));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  t = ArgOption_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = o_27;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm y_109 = NULL;
  t = report_run_time_0(t);
  {
    ATerm z_109 = NULL;
    t = term_q_15;
    {
      t = whoami_0(t);
      {
        z_109 = t;
        if(((y_109 != NULL) && (y_109 != z_109)))
          _fail(z_109);
        else
          y_109 = z_109;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, term_i_28), not_null(y_109)));
      {
        t = printnl_0(t);
        {
          t = term_b_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_j_28;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_110 = NULL;
  c_110 = t;
  t = SSL_TicksToSeconds(not_null(c_110));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL;
  h_110 = t;
  g_110 :
  if(match_cons(h_110, sym__2))
    {
      i_110 = ATgetArgument(h_110, 0);
      j_110 = ATgetArgument(h_110, 1);
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_110), not_null(j_110));
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            t = SSL_addr(not_null(i_110), not_null(j_110));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_106 (ATerm), ATerm i_106 (ATerm))
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_106(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL;
        q_110 = t;
        p_110 :
        if(((ATgetType(q_110) == AT_LIST) && !(ATisEmpty(q_110))))
          {
            r_110 = ATgetFirst((ATermList) q_110);
            s_110 = (ATerm) ATgetNext((ATermList) q_110);
            {
              ATerm v_110 = NULL;
              ATerm x_110 = NULL;
              t = not_null(s_110);
              {
                t = foldr_2(t, h_106, i_106);
                {
                  x_110 = t;
                  if(((v_110 != NULL) && (v_110 != x_110)))
                    _fail(x_110);
                  else
                    v_110 = x_110;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_110), not_null(v_110));
                t = i_106(t);
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
ATerm crush_2 (ATerm t, ATerm l_104 (ATerm), ATerm m_104 (ATerm))
{
  ATerm e_111 = NULL;
  ATerm g_111 = NULL;
  e_111 = t;
  {
    ATerm h_111 = NULL;
    ATerm j_111 = NULL,l_111 = NULL,m_111 = NULL;
    t = not_null(e_111);
    {
      h_111 = t;
      {
        t = SSL_explode_term(not_null(h_111));
        {
          j_111 = t;
          d_111 :
          if(match_cons(j_111, sym__2))
            {
              l_111 = ATgetArgument(j_111, 0);
              m_111 = ATgetArgument(j_111, 1);
              if(((g_111 != NULL) && (g_111 != m_111)))
                _fail(m_111);
              else
                g_111 = m_111;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_111);
      t = foldr_2(t, l_104, m_104);
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
    ATerm b_5 (ATerm t)
    {
      t = term_v_19;
      return(t);
    }
    t = crush_2(t, b_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL;
  s_111 = t;
  r_111 :
  if(match_cons(s_111, sym__2))
    {
      t_111 = ATgetArgument(s_111, 0);
      u_111 = ATgetArgument(s_111, 1);
      {
        ATerm o_28;
        o_28 = t;
        {
          ATerm p_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_111), not_null(u_111));
              ;
              LocalPopChoice(q_28);
            }
          else
            {
              t = p_28;
              t = SSL_gtr(not_null(t_111), not_null(u_111));
            }
        }
        t = o_28;
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
  ATerm a_112 = NULL;
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL;
      b_112 = t;
      z_111 :
      if(match_cons(b_112, sym__2))
        {
          c_112 = ATgetArgument(b_112, 0);
          d_112 = ATgetArgument(b_112, 1);
          {
            if(((a_112 != NULL) && (a_112 != c_112)))
              _fail(c_112);
            else
              a_112 = c_112;
            if(((a_112 != NULL) && (a_112 != d_112)))
              _fail(d_112);
            else
              a_112 = d_112;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_112 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm t_28;
    t_28 = t;
    {
      ATerm g_112 = NULL;
      ATerm h_112 = NULL;
      t = term_g_22;
      {
        t = get_config_0(t);
        {
          h_112 = t;
          if(((g_112 != NULL) && (g_112 != h_112)))
            _fail(h_112);
          else
            g_112 = h_112;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_112), term_b_7);
        t = geq_0(t);
      }
    }
    t = t_28;
    t = n_112(t);
    return(t);
  }
  t = try_1(t, c_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm l_112 = NULL,p_112 = NULL;
    ATerm a_29;
    a_29 = t;
    {
      ATerm m_112 = NULL;
      t = run_time_0(t);
      {
        m_112 = t;
        if(((l_112 != NULL) && (l_112 != m_112)))
          _fail(m_112);
        else
          l_112 = m_112;
      }
    }
    t = a_29;
    {
      ATerm q_112 = NULL;
      t = term_q_15;
      {
        t = whoami_0(t);
        {
          q_112 = t;
          if(((p_112 != NULL) && (p_112 != q_112)))
            _fail(q_112);
          else
            p_112 = q_112;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_29), not_null(l_112)), term_b_29), not_null(p_112)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_v_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_112 = NULL;
  x_112 = t;
  w_112 :
  if(match_cons(x_112, sym_Version_0))
    {
      ATerm z_112 = NULL,b_113 = NULL;
      ATerm d_29;
      d_29 = t;
      {
        ATerm a_113 = NULL;
        t = SSLgetAnnotations(not_null(x_112));
        {
          a_113 = t;
          if(((z_112 != NULL) && (z_112 != a_113)))
            _fail(a_113);
          else
            z_112 = a_113;
        }
      }
      t = d_29;
      {
        ATerm c_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_112));
        {
          c_113 = t;
          if(((b_113 != NULL) && (b_113 != c_113)))
            _fail(c_113);
          else
            b_113 = c_113;
        }
        t = not_null(b_113);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_115 (ATerm))
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_29;
      t = get_config_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm j_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = j_29;
              {
                ATerm n_29 = t;
                int o_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(o_29);
                  }
                else
                  {
                    t = n_29;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  t = k_115(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_113 = NULL;
  h_113 = t;
  t = SSL_table_create(not_null(h_113));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_113 = NULL;
  l_113 = t;
  {
    ATerm p_29;
    p_29 = t;
    {
      t = term_q_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_29, term_r_29, not_null(l_113));
          t = table_put_0(t);
        }
      }
    }
    t = p_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_113 = NULL;
  p_113 = t;
  t = SSL_table_destroy(not_null(p_113));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_113 = NULL;
  t_113 = t;
  t = SSL_exit(not_null(t_113));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL;
  x_113 = t;
  w_113 :
  if(((ATgetType(x_113) == AT_LIST) && ATisEmpty(x_113)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_113) == AT_LIST) && !(ATisEmpty(x_113))))
        {
          y_113 = ATgetFirst((ATermList) x_113);
          z_113 = (ATerm) ATgetNext((ATermList) x_113);
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
  ATerm s_29;
  s_29 = t;
  {
    ATerm c_114 = NULL;
    ATerm f_114 = NULL;
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        {
          ATerm d_114 = NULL;
          ATerm e_114 = NULL;
          e_114 = t;
          if(((d_114 != NULL) && (d_114 != e_114)))
            _fail(e_114);
          else
            d_114 = e_114;
          t = (ATerm) ATinsert(ATempty, not_null(d_114));
        }
      }
    {
      f_114 = t;
      if(((c_114 != NULL) && (c_114 != f_114)))
        _fail(f_114);
      else
        c_114 = f_114;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(c_114));
      t = printnl_0(t);
    }
  }
  t = s_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_117 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_89 (ATerm))
{
  ATerm i_114 (ATerm t)
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = Cons_2(t, a_89, i_114);
      }
    return(t);
  }
  t = i_114(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_114 = NULL,s_114 = NULL,y_114 = NULL;
  y_114 = t;
  p_114 :
  if(((ATgetType(y_114) == AT_LIST) && !(ATisEmpty(y_114))))
    {
      r_114 = ATgetFirst((ATermList) y_114);
      s_114 = (ATerm) ATgetNext((ATermList) y_114);
      {
        ATerm f_115 = NULL;
        t = not_null(s_114);
        {
          ATerm x_29;
          x_29 = t;
          {
            ATerm g_115 = NULL,i_115 = NULL,l_115 = NULL;
            ATerm y_29;
            y_29 = t;
            {
              ATerm h_115 = NULL;
              t = i_0(t);
              {
                h_115 = t;
                if(((g_115 != NULL) && (g_115 != h_115)))
                  _fail(h_115);
                else
                  g_115 = h_115;
              }
            }
            t = y_29;
            {
              ATerm j_115 = NULL;
              t = not_null(r_114);
              {
                t = g_0(t);
                {
                  j_115 = t;
                  if(((i_115 != NULL) && (i_115 != j_115)))
                    _fail(j_115);
                  else
                    i_115 = j_115;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_115)), not_null(i_115));
                {
                  l_115 = t;
                  if(((f_115 != NULL) && (f_115 != l_115)))
                    _fail(l_115);
                  else
                    f_115 = l_115;
                }
              }
            }
          }
          t = x_29;
          {
            ATerm f_5 (ATerm t)
            {
              t = not_null(f_115);
              return(t);
            }
            t = reverse_acc_2(t, g_0, f_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_114) == AT_LIST) && ATisEmpty(y_114)))
        {
          {
            t = term_q_15;
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
  ATerm g_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_117 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm a_116 = NULL,b_116 = NULL;
  a_116 = t;
  z_115 :
  if(match_cons(a_116, sym_Program_1))
    {
      b_116 = ATgetArgument(a_116, 0);
      {
        ATerm e_116 = NULL,g_116 = NULL;
        ATerm f_116 = NULL;
        t = SSLgetAnnotations(not_null(a_116));
        {
          f_116 = t;
          if(((e_116 != NULL) && (e_116 != f_116)))
            _fail(f_116);
          else
            e_116 = f_116;
        }
        {
          t = not_null(b_116);
          {
            ATerm i_116 = NULL;
            t = t_83(t);
            {
              g_116 = t;
              {
                ATerm j_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_116)), not_null(e_116));
                {
                  j_116 = t;
                  if(((i_116 != NULL) && (i_116 != j_116)))
                    _fail(j_116);
                  else
                    i_116 = j_116;
                }
                t = not_null(i_116);
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
  ATerm t_116 = NULL;
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_116 = NULL;
      t = term_j_28;
      {
        t = get_config_0(t);
        {
          u_116 = t;
          if(((t_116 != NULL) && (t_116 != u_116)))
            _fail(u_116);
          else
            t_116 = u_116;
        }
      }
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm v_116 = NULL;
            v_116 = t;
            if(((t_116 != NULL) && (t_116 != v_116)))
              _fail(v_116);
            else
              t_116 = v_116;
            return(t);
          }
          t = Program_1(t, i_5);
          return(t);
        }
        t = option_defined_1(t, h_5);
      }
    }
  {
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        t = not_null(t_116);
        return(t);
      }
      t = short_description_1(t, k_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_5);
    {
      t = term_b_30;
      {
        t = echo_0(t);
        {
          t = term_e_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm w_116 = NULL;
                  ATerm x_116 = NULL;
                  x_116 = t;
                  if(((w_116 != NULL) && (w_116 != x_116)))
                    _fail(x_116);
                  else
                    w_116 = x_116;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_116)), term_f_30);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm y_116 = NULL;
                    ATerm z_116 = NULL;
                    ATerm n_5 (ATerm t)
                    {
                      t = not_null(t_116);
                      return(t);
                    }
                    t = long_description_1(t, n_5);
                    {
                      z_116 = t;
                      if(((y_116 != NULL) && (y_116 != z_116)))
                        _fail(z_116);
                      else
                        y_116 = z_116;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_116)), term_g_30);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_5);
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
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_83 (ATerm))
{
  ATerm j_117 = NULL,q_117 = NULL;
  j_117 = t;
  i_117 :
  if(match_cons(j_117, sym_Undefined_1))
    {
      q_117 = ATgetArgument(j_117, 0);
      {
        ATerm t_117 = NULL,v_117 = NULL;
        ATerm u_117 = NULL;
        t = SSLgetAnnotations(not_null(j_117));
        {
          u_117 = t;
          if(((t_117 != NULL) && (t_117 != u_117)))
            _fail(u_117);
          else
            t_117 = u_117;
        }
        {
          t = not_null(q_117);
          {
            ATerm x_117 = NULL;
            t = u_83(t);
            {
              v_117 = t;
              {
                ATerm y_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_117)), not_null(t_117));
                {
                  y_117 = t;
                  if(((x_117 != NULL) && (x_117 != y_117)))
                    _fail(y_117);
                  else
                    x_117 = y_117;
                }
                t = not_null(x_117);
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
ATerm fetch_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm d_118 (ATerm t)
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_89, _id);
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = Cons_2(t, _id, d_118);
      }
    return(t);
  }
  t = d_118(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_116 (ATerm))
{
  t = fetch_1(t, k_116);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_118 = NULL;
  l_118 = t;
  k_118 :
  if(match_cons(l_118, sym_Help_0))
    {
      ATerm n_118 = NULL,p_118 = NULL;
      ATerm l_30;
      l_30 = t;
      {
        ATerm o_118 = NULL;
        t = SSLgetAnnotations(not_null(l_118));
        {
          o_118 = t;
          if(((n_118 != NULL) && (n_118 != o_118)))
            _fail(o_118);
          else
            n_118 = o_118;
        }
      }
      t = l_30;
      {
        ATerm q_118 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_118));
        {
          q_118 = t;
          if(((p_118 != NULL) && (p_118 != q_118)))
            _fail(q_118);
          else
            p_118 = q_118;
        }
        t = not_null(p_118);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_95 (ATerm))
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_95(t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_118 = NULL,a_119 = NULL,b_119 = NULL;
  z_118 = t;
  y_118 :
  if(match_cons(z_118, sym__2))
    {
      a_119 = ATgetArgument(z_118, 0);
      b_119 = ATgetArgument(z_118, 1);
      t = SSL_table_get(not_null(a_119), not_null(b_119));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_119 = NULL,l_119 = NULL,m_119 = NULL,n_119 = NULL;
  k_119 = t;
  j_119 :
  if(match_cons(k_119, sym__3))
    {
      l_119 = ATgetArgument(k_119, 0);
      m_119 = ATgetArgument(k_119, 1);
      n_119 = ATgetArgument(k_119, 2);
      {
        ATerm o_30;
        o_30 = t;
        {
          ATerm r_119 = NULL;
          ATerm s_119 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_119), not_null(m_119));
          {
            ATerm p_30 = t;
            int q_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(q_30);
              }
            else
              {
                t = p_30;
                t = (ATerm) ATempty;
              }
            {
              s_119 = t;
              if(((r_119 != NULL) && (r_119 != s_119)))
                _fail(s_119);
              else
                r_119 = s_119;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_119), not_null(m_119), (ATerm) ATinsert(CheckATermList(not_null(r_119)), not_null(n_119)));
            t = table_put_0(t);
          }
        }
        t = o_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_117 (ATerm))
{
  ATerm w_119 = NULL;
  ATerm x_119 = NULL;
  t = term_q_15;
  {
    t = p_117(t);
    {
      x_119 = t;
      if(((w_119 != NULL) && (w_119 != x_119)))
        _fail(x_119);
      else
        w_119 = x_119;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_30, term_d_30, not_null(w_119));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL;
  d_120 = t;
  c_120 :
  if(match_string(d_120, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(d_120) == AT_LIST) && !(ATisEmpty(d_120))))
        {
          e_120 = ATgetFirst((ATermList) d_120);
          f_120 = (ATerm) ATgetNext((ATermList) d_120);
          {
            ATerm i_120 = NULL;
            ATerm r_30;
            r_30 = t;
            {
              t = not_null(e_120);
              t = a_0(t);
            }
            t = r_30;
            {
              ATerm j_120 = NULL;
              t = term_q_15;
              {
                t = b_0(t);
                {
                  j_120 = t;
                  if(((i_120 != NULL) && (i_120 != j_120)))
                    _fail(j_120);
                  else
                    i_120 = j_120;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_120)), not_null(i_120));
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
  ATerm p_5 (ATerm t)
  {
    ATerm o_120 = NULL;
    o_120 = t;
    n_120 :
    if(!(match_string(o_120, "--help")))
      {
        if(!(match_string(o_120, "-h")))
          {
            if(!(match_string(o_120, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_s_30;
    {
      t = set_config_0(t);
      t = term_t_30;
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_u_30;
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL,t_120 = NULL;
  r_120 = t;
  q_120 :
  if(((ATgetType(r_120) == AT_LIST) && !(ATisEmpty(r_120))))
    {
      s_120 = ATgetFirst((ATermList) r_120);
      t_120 = (ATerm) ATgetNext((ATermList) r_120);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_120)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_120)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL;
  z_120 = t;
  y_120 :
  if(match_cons(z_120, sym__2))
    {
      a_121 = ATgetArgument(z_120, 0);
      b_121 = ATgetArgument(z_120, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_21, not_null(a_121), not_null(b_121));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_117 (ATerm))
{
  ATerm v_30;
  v_30 = t;
  {
    ATerm s_5 (ATerm t)
    {
      t = term_w_30;
      t = n_117(t);
      return(t);
    }
    t = try_1(t, s_5);
  }
  t = v_30;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm j_121 = NULL;
      ATerm x_30;
      x_30 = t;
      {
        ATerm h_121 = NULL;
        ATerm i_121 = NULL;
        i_121 = t;
        if(((h_121 != NULL) && (h_121 != i_121)))
          _fail(i_121);
        else
          h_121 = i_121;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_28, not_null(h_121));
          t = set_config_0(t);
        }
      }
      t = x_30;
      {
        ATerm k_121 = NULL;
        k_121 = t;
        if(((j_121 != NULL) && (j_121 != k_121)))
          _fail(k_121);
        else
          j_121 = k_121;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_121));
      }
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      ATerm y_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              {
                t = n_117(t);
                t = Cons_2(t, _id, u_5);
              }
            }
          ;
          LocalPopChoice(z_30);
        }
      else
        {
          t = y_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_5, u_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL;
  ATerm c_31;
  c_31 = t;
  {
    ATerm t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL;
    t_121 = t;
    p_121 :
    if(match_cons(t_121, sym__3))
      {
        u_121 = ATgetArgument(t_121, 0);
        v_121 = ATgetArgument(t_121, 1);
        w_121 = ATgetArgument(t_121, 2);
        {
          if(((q_121 != NULL) && (q_121 != u_121)))
            _fail(u_121);
          else
            q_121 = u_121;
          {
            if(((r_121 != NULL) && (r_121 != v_121)))
              _fail(v_121);
            else
              r_121 = v_121;
            {
              if(((s_121 != NULL) && (s_121 != w_121)))
                _fail(w_121);
              else
                s_121 = w_121;
              t = SSL_table_put(not_null(q_121), not_null(r_121), not_null(s_121));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_117 (ATerm))
{
  ATerm z_121 = NULL;
  ATerm d_31;
  d_31 = t;
  {
    t = term_e_31;
    t = table_put_0(t);
  }
  t = d_31;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_117(t);
          ;
          LocalPopChoice(g_31);
        }
      else
        {
          t = f_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_5);
    {
      ATerm w_5 (ATerm t)
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_31;
            j_31 = t;
            {
              ATerm k_31 = t;
              int l_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_g_29;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_31);
                }
              else
                {
                  t = k_31;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_31;
            {
              t = system_usage_0(t);
              {
                t = term_v_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm x_5 (ATerm t)
              {
                ATerm y_5 (ATerm t)
                {
                  ATerm a_122 = NULL;
                  a_122 = t;
                  if(((z_121 != NULL) && (z_121 != a_122)))
                    _fail(a_122);
                  else
                    z_121 = a_122;
                  return(t);
                }
                t = Undefined_1(t, y_5);
                return(t);
              }
              t = option_defined_1(t, x_5);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_121)), term_m_31));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_b_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_5);
      {
        ATerm n_31;
        n_31 = t;
        {
          t = term_c_30;
          t = table_destroy_0(t);
        }
        t = n_31;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm p_115 (ATerm))
{
  t = parse_options_1(t, m_115);
  {
    t = store_options_0(t);
    {
      t = o_115(t);
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_115);
            ;
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            {
              ATerm q_31 = t;
              int r_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_115(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(r_31);
                }
              else
                {
                  t = q_31;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_115(t);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_115);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_5, d_115, e_115, a_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm x_114 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm u_31;
      u_31 = t;
      {
        ATerm d_122 = NULL;
        ATerm e_122 = NULL;
        t = term_j_28;
        {
          t = get_config_0(t);
          {
            e_122 = t;
            if(((d_122 != NULL) && (d_122 != e_122)))
              _fail(e_122);
            else
              d_122 = e_122;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATempty, not_null(d_122)));
          t = printnl_0(t);
        }
      }
      t = u_31;
      return(t);
    }
    t = if_verbose2_1(t, c_6);
    return(t);
  }
  t = iowrap_4(t, v_114, w_114, x_114, b_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_114 (ATerm), ATerm u_114 (ATerm))
{
  t = iowrap_3(t, t_114, u_114, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_114 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    t = _2(t, _id, q_114);
    return(t);
  }
  t = iowrap_2(t, d_6, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      ATerm h_6 (ATerm t)
      {
        ATerm i_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, i_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, h_6);
      return(t);
    }
    t = Specification_1(t, f_6);
    return(t);
  }
  t = iowrap_1(t, e_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
