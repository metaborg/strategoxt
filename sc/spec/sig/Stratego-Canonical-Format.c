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
Symbol sym_MatchOp_2;
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
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
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
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  init_constant_terms();
}
ATerm term_o_17;
ATerm term_a_17;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_q_6;
ATerm term_s_5;
ATerm term_h_5;
void init_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_j_9);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_j_9);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_j_9);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_j_9);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__3, term_f_15, term_g_15, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm w_70 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm z_70 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
ATerm Alt_3 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm k_71 (ATerm));
ATerm Case_4 (ATerm, ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm));
ATerm Let_2 (ATerm, ATerm g_61 (ATerm), ATerm h_61 (ATerm));
ATerm Prim_2 (ATerm, ATerm u_59 (ATerm), ATerm v_59 (ATerm));
ATerm Where_1 (ATerm, ATerm e_60 (ATerm));
ATerm Scope_2 (ATerm, ATerm c_60 (ATerm), ATerm d_60 (ATerm));
ATerm Build_1 (ATerm, ATerm z_59 (ATerm));
ATerm Op_2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm As_2 (ATerm, ATerm x_63 (ATerm), ATerm y_63 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm z_63 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm y_59 (ATerm));
ATerm Thread_1 (ATerm, ATerm m_60 (ATerm));
ATerm All_1 (ATerm, ATerm l_60 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm j_60 (ATerm));
ATerm Cong_2 (ATerm, ATerm h_60 (ATerm), ATerm i_60 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_61 (ATerm), ATerm f_61 (ATerm));
ATerm SVar_1 (ATerm, ATerm d_61 (ATerm));
ATerm Call_2 (ATerm, ATerm s_61 (ATerm), ATerm t_61 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm a_61 (ATerm), ATerm b_61 (ATerm));
ATerm GChoice_2 (ATerm, ATerm y_60 (ATerm), ATerm z_60 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm));
ATerm LChoice_2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm Choice_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm Seq_2 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm Test_1 (ATerm, ATerm n_60 (ATerm));
ATerm Not_1 (ATerm, ATerm o_60 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm l_61 (ATerm), ATerm m_61 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm k_61 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_79 (ATerm));
ATerm Strategies_1 (ATerm, ATerm m_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_62 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_79 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_92 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm i_91 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_94 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_90 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm));
ATerm input_file_0 (ATerm);
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
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_84 (ATerm), ATerm y_84 (ATerm));
ATerm crush_2 (ATerm, ATerm q_88 (ATerm), ATerm r_88 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_92 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_95 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_97 (ATerm));
ATerm map_1 (ATerm, ATerm y_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_97 (ATerm));
ATerm Program_1 (ATerm, ATerm j_70 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_71 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_97 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_97 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_97 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_94 (ATerm), ATerm s_94 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_94 (ATerm));
ATerm main_0 (ATerm);
ATerm Continue_1 (ATerm t, ATerm w_70 (ATerm))
{
  ATerm v_10 = NULL,z_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_Continue_1))
    {
      z_10 = ATgetArgument(v_10, 0);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(z_10);
          {
            ATerm d_13 = NULL;
            t = w_70(t);
            {
              o_12 = t;
              {
                ATerm e_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(o_12)), not_null(m_12));
                {
                  e_13 = t;
                  if(((d_13 != NULL) && (d_13 != e_13)))
                    _fail(e_13);
                  else
                    d_13 = e_13;
                }
                t = not_null(d_13);
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
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Var_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_14 = NULL,l_14 = NULL;
            ATerm k_14 = NULL;
            t = SSLgetAnnotations(not_null(f_14));
            {
              k_14 = t;
              if(((j_14 != NULL) && (j_14 != k_14)))
                _fail(k_14);
              else
                j_14 = k_14;
            }
            {
              t = not_null(g_14);
              {
                ATerm n_14 = NULL;
                t = s_0(t);
                {
                  l_14 = t;
                  {
                    ATerm o_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_14)), not_null(j_14));
                    {
                      o_14 = t;
                      if(((n_14 != NULL) && (n_14 != o_14)))
                        _fail(o_14);
                      else
                        n_14 = o_14;
                    }
                    t = not_null(n_14);
                  }
                }
              }
            }
            ;
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm r_14 = NULL,t_14 = NULL;
              ATerm s_14 = NULL;
              t = SSLgetAnnotations(not_null(f_14));
              {
                s_14 = t;
                if(((r_14 != NULL) && (r_14 != s_14)))
                  _fail(s_14);
                else
                  r_14 = s_14;
              }
              {
                t = not_null(g_14);
                {
                  ATerm v_14 = NULL;
                  t = s_0(t);
                  {
                    t_14 = t;
                    {
                      ATerm w_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_14)), not_null(r_14));
                      {
                        w_14 = t;
                        if(((v_14 != NULL) && (v_14 != w_14)))
                          _fail(w_14);
                        else
                          v_14 = w_14;
                      }
                      t = not_null(v_14);
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
ATerm Assign_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Assign_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm s_15 = NULL;
            t = z_70(t);
            {
              q_15 = t;
              {
                ATerm t_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(q_15)), not_null(o_15));
                {
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                }
                t = not_null(s_15);
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
ATerm term_expression_0 (ATerm t)
{
  ATerm r_4 = t;
  int s_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(s_4);
    }
  else
    {
      t = r_4;
      {
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(u_4);
          }
        else
          {
            t = t_4;
            {
              ATerm v_4 = t;
              int w_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(w_4);
                }
              else
                {
                  t = v_4;
                  {
                    ATerm x_4 = t;
                    int y_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(y_4);
                      }
                    else
                      {
                        t = x_4;
                        {
                          ATerm z_4 = t;
                          int a_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(a_5);
                            }
                          else
                            {
                              t = z_4;
                              {
                                ATerm b_5 = t;
                                int c_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    ;
                                    LocalPopChoice(c_5);
                                  }
                                else
                                  {
                                    t = b_5;
                                    {
                                      ATerm d_5 = t;
                                      int e_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          ;
                                          LocalPopChoice(e_5);
                                        }
                                      else
                                        {
                                          t = d_5;
                                          {
                                            ATerm f_5 = t;
                                            int g_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, e_0);
                                                ;
                                                LocalPopChoice(g_5);
                                              }
                                            else
                                              {
                                                t = f_5;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = term_h_5;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, f_0);
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
ATerm Assign_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Assign_2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL,s_16 = NULL;
            ATerm r_16 = NULL;
            t = SSLgetAnnotations(not_null(k_16));
            {
              r_16 = t;
              if(((q_16 != NULL) && (q_16 != r_16)))
                _fail(r_16);
              else
                q_16 = r_16;
            }
            {
              t = not_null(l_16);
              {
                ATerm u_16 = NULL;
                t = q_0(t);
                {
                  s_16 = t;
                  {
                    t = not_null(m_16);
                    {
                      ATerm w_16 = NULL;
                      t = r_0(t);
                      {
                        u_16 = t;
                        {
                          ATerm x_16 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(s_16), not_null(u_16)), not_null(q_16));
                          {
                            x_16 = t;
                            if(((w_16 != NULL) && (w_16 != x_16)))
                              _fail(x_16);
                            else
                              w_16 = x_16;
                          }
                          t = not_null(w_16);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            {
              ATerm b_17 = NULL,d_17 = NULL;
              ATerm c_17 = NULL;
              t = SSLgetAnnotations(not_null(k_16));
              {
                c_17 = t;
                if(((b_17 != NULL) && (b_17 != c_17)))
                  _fail(c_17);
                else
                  b_17 = c_17;
              }
              {
                t = not_null(l_16);
                {
                  ATerm f_17 = NULL;
                  t = q_0(t);
                  {
                    d_17 = t;
                    {
                      t = not_null(m_16);
                      {
                        ATerm h_17 = NULL;
                        t = r_0(t);
                        {
                          f_17 = t;
                          {
                            ATerm i_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(d_17), not_null(f_17)), not_null(b_17));
                            {
                              i_17 = t;
                              if(((h_17 != NULL) && (h_17 != i_17)))
                                _fail(i_17);
                              else
                                h_17 = i_17;
                            }
                            t = not_null(h_17);
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
ATerm Fun_2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Fun_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm f_18 = NULL,h_18 = NULL;
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        {
          t = not_null(a_18);
          {
            ATerm j_18 = NULL;
            t = a_71(t);
            {
              h_18 = t;
              {
                t = not_null(b_18);
                {
                  ATerm l_18 = NULL;
                  t = b_71(t);
                  {
                    j_18 = t;
                    {
                      ATerm m_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(h_18), not_null(j_18)), not_null(f_18));
                      {
                        m_18 = t;
                        if(((l_18 != NULL) && (l_18 != m_18)))
                          _fail(m_18);
                        else
                          l_18 = m_18;
                      }
                      t = not_null(l_18);
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
ATerm Alt_3 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Alt_3))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      c_19 = ATgetArgument(z_18, 2);
      {
        ATerm h_19 = NULL,j_19 = NULL;
        ATerm i_19 = NULL;
        t = SSLgetAnnotations(not_null(z_18));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        {
          t = not_null(a_19);
          {
            ATerm l_19 = NULL;
            t = t_70(t);
            {
              j_19 = t;
              {
                t = not_null(b_19);
                {
                  ATerm n_19 = NULL;
                  t = u_70(t);
                  {
                    l_19 = t;
                    {
                      t = not_null(c_19);
                      {
                        ATerm p_19 = NULL;
                        t = v_70(t);
                        {
                          n_19 = t;
                          {
                            ATerm q_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(j_19), not_null(l_19), not_null(n_19)), not_null(h_19));
                            {
                              q_19 = t;
                              if(((p_19 != NULL) && (p_19 != q_19)))
                                _fail(q_19);
                              else
                                p_19 = q_19;
                            }
                            t = not_null(p_19);
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
ATerm case_alternative_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
            ;
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm o_5 = t;
              int p_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Str_1(t, is_string_0);
                  ;
                  LocalPopChoice(p_5);
                }
              else
                {
                  t = o_5;
                  {
                    ATerm q_5 = t;
                    int r_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        ;
                        LocalPopChoice(r_5);
                      }
                    else
                      {
                        t = q_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, u_0);
        return(t);
      }
      t = Alt_3(t, h_0, t_0, k_71);
      ;
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_s_5;
          return(t);
        }
        t = debug_1(t, v_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Case_4))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      i_20 = ATgetArgument(f_20, 2);
      j_20 = ATgetArgument(f_20, 3);
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm t_20 = NULL;
            t = m_70(t);
            {
              r_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm v_20 = NULL;
                  t = n_70(t);
                  {
                    t_20 = t;
                    {
                      t = not_null(i_20);
                      {
                        ATerm x_20 = NULL;
                        t = o_70(t);
                        {
                          v_20 = t;
                          {
                            t = not_null(j_20);
                            {
                              ATerm z_20 = NULL;
                              t = p_70(t);
                              {
                                x_20 = t;
                                {
                                  ATerm a_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(r_20), not_null(t_20), not_null(v_20), not_null(x_20)), not_null(p_20));
                                  {
                                    a_21 = t;
                                    if(((z_20 != NULL) && (z_20 != a_21)))
                                      _fail(a_21);
                                    else
                                      z_20 = a_21;
                                  }
                                  t = not_null(z_20);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_61 (ATerm), ATerm h_61 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Let_2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm u_21 = NULL,w_21 = NULL;
        ATerm v_21 = NULL;
        t = SSLgetAnnotations(not_null(o_21));
        {
          v_21 = t;
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
        }
        {
          t = not_null(p_21);
          {
            ATerm y_21 = NULL;
            t = g_61(t);
            {
              w_21 = t;
              {
                t = not_null(q_21);
                {
                  ATerm a_22 = NULL;
                  t = h_61(t);
                  {
                    y_21 = t;
                    {
                      ATerm b_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_21), not_null(y_21)), not_null(u_21));
                      {
                        b_22 = t;
                        if(((a_22 != NULL) && (a_22 != b_22)))
                          _fail(b_22);
                        else
                          a_22 = b_22;
                      }
                      t = not_null(a_22);
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
ATerm Prim_2 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Prim_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm t_22 = NULL,v_22 = NULL;
        ATerm u_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
        {
          t = not_null(o_22);
          {
            ATerm x_22 = NULL;
            t = u_59(t);
            {
              v_22 = t;
              {
                t = not_null(p_22);
                {
                  ATerm z_22 = NULL;
                  t = v_59(t);
                  {
                    x_22 = t;
                    {
                      ATerm a_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_22), not_null(x_22)), not_null(t_22));
                      {
                        a_23 = t;
                        if(((z_22 != NULL) && (z_22 != a_23)))
                          _fail(a_23);
                        else
                          z_22 = a_23;
                      }
                      t = not_null(z_22);
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
ATerm Where_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_Where_1))
    {
      m_23 = ATgetArgument(l_23, 0);
      {
        ATerm p_23 = NULL,r_23 = NULL;
        ATerm q_23 = NULL;
        t = SSLgetAnnotations(not_null(l_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
        {
          t = not_null(m_23);
          {
            ATerm t_23 = NULL;
            t = e_60(t);
            {
              r_23 = t;
              {
                ATerm u_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(r_23)), not_null(p_23));
                {
                  u_23 = t;
                  if(((t_23 != NULL) && (t_23 != u_23)))
                    _fail(u_23);
                  else
                    t_23 = u_23;
                }
                t = not_null(t_23);
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
ATerm Scope_2 (ATerm t, ATerm c_60 (ATerm), ATerm d_60 (ATerm))
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym_Scope_2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      {
        ATerm l_24 = NULL,n_24 = NULL;
        ATerm m_24 = NULL;
        t = SSLgetAnnotations(not_null(f_24));
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
        {
          t = not_null(g_24);
          {
            ATerm p_24 = NULL;
            t = c_60(t);
            {
              n_24 = t;
              {
                t = not_null(h_24);
                {
                  ATerm r_24 = NULL;
                  t = d_60(t);
                  {
                    p_24 = t;
                    {
                      ATerm s_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(n_24), not_null(p_24)), not_null(l_24));
                      {
                        s_24 = t;
                        if(((r_24 != NULL) && (r_24 != s_24)))
                          _fail(s_24);
                        else
                          r_24 = s_24;
                      }
                      t = not_null(r_24);
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
ATerm Build_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm d_25 = NULL,e_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_Build_1))
    {
      e_25 = ATgetArgument(d_25, 0);
      {
        ATerm h_25 = NULL,j_25 = NULL;
        ATerm i_25 = NULL;
        t = SSLgetAnnotations(not_null(d_25));
        {
          i_25 = t;
          if(((h_25 != NULL) && (h_25 != i_25)))
            _fail(i_25);
          else
            h_25 = i_25;
        }
        {
          t = not_null(e_25);
          {
            ATerm l_25 = NULL;
            t = z_59(t);
            {
              j_25 = t;
              {
                ATerm m_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(j_25)), not_null(h_25));
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
ATerm Op_2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_Op_2))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      {
        ATerm i_26 = NULL,k_26 = NULL;
        ATerm j_26 = NULL;
        t = SSLgetAnnotations(not_null(x_25));
        {
          j_26 = t;
          if(((i_26 != NULL) && (i_26 != j_26)))
            _fail(j_26);
          else
            i_26 = j_26;
        }
        {
          t = not_null(y_25);
          {
            ATerm m_26 = NULL;
            t = y_61(t);
            {
              k_26 = t;
              {
                t = not_null(z_25);
                {
                  ATerm o_26 = NULL;
                  t = z_61(t);
                  {
                    m_26 = t;
                    {
                      ATerm p_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(k_26), not_null(m_26)), not_null(i_26));
                      {
                        p_26 = t;
                        if(((o_26 != NULL) && (o_26 != p_26)))
                          _fail(p_26);
                        else
                          o_26 = p_26;
                      }
                      t = not_null(o_26);
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
ATerm As_2 (ATerm t, ATerm x_63 (ATerm), ATerm y_63 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_As_2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      {
        ATerm k_27 = NULL,m_27 = NULL;
        ATerm l_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
        {
          t = not_null(f_27);
          {
            ATerm o_27 = NULL;
            t = x_63(t);
            {
              m_27 = t;
              {
                t = not_null(g_27);
                {
                  ATerm q_27 = NULL;
                  t = y_63(t);
                  {
                    o_27 = t;
                    {
                      ATerm r_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(m_27), not_null(o_27)), not_null(k_27));
                      {
                        r_27 = t;
                        if(((q_27 != NULL) && (q_27 != r_27)))
                          _fail(r_27);
                        else
                          q_27 = r_27;
                      }
                      t = not_null(q_27);
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
ATerm BuildDefault_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_BuildDefault_1))
    {
      d_28 = ATgetArgument(c_28, 0);
      {
        ATerm g_28 = NULL,i_28 = NULL;
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(c_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
        {
          t = not_null(d_28);
          {
            ATerm k_28 = NULL;
            t = z_63(t);
            {
              i_28 = t;
              {
                ATerm l_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(i_28)), not_null(g_28));
                {
                  l_28 = t;
                  if(((k_28 != NULL) && (k_28 != l_28)))
                    _fail(l_28);
                  else
                    k_28 = l_28;
                }
                t = not_null(k_28);
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
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_Str_1))
    {
      a_29 = ATgetArgument(z_28, 0);
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_29 = NULL,f_29 = NULL;
            ATerm e_29 = NULL;
            t = SSLgetAnnotations(not_null(z_28));
            {
              e_29 = t;
              if(((d_29 != NULL) && (d_29 != e_29)))
                _fail(e_29);
              else
                d_29 = e_29;
            }
            {
              t = not_null(a_29);
              {
                ATerm h_29 = NULL;
                t = p_0(t);
                {
                  f_29 = t;
                  {
                    ATerm i_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_29)), not_null(d_29));
                    {
                      i_29 = t;
                      if(((h_29 != NULL) && (h_29 != i_29)))
                        _fail(i_29);
                      else
                        h_29 = i_29;
                    }
                    t = not_null(h_29);
                  }
                }
              }
            }
            ;
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm l_29 = NULL,n_29 = NULL;
              ATerm m_29 = NULL;
              t = SSLgetAnnotations(not_null(z_28));
              {
                m_29 = t;
                if(((l_29 != NULL) && (l_29 != m_29)))
                  _fail(m_29);
                else
                  l_29 = m_29;
              }
              {
                t = not_null(a_29);
                {
                  ATerm p_29 = NULL;
                  t = p_0(t);
                  {
                    n_29 = t;
                    {
                      ATerm q_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(n_29)), not_null(l_29));
                      {
                        q_29 = t;
                        if(((p_29 != NULL) && (p_29 != q_29)))
                          _fail(q_29);
                        else
                          p_29 = q_29;
                      }
                      t = not_null(p_29);
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
ATerm is_real_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  t = SSL_is_real(not_null(a_30));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm m_30 = NULL,n_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym_Real_1))
    {
      n_30 = ATgetArgument(m_30, 0);
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_30 = NULL,s_30 = NULL;
            ATerm r_30 = NULL;
            t = SSLgetAnnotations(not_null(m_30));
            {
              r_30 = t;
              if(((q_30 != NULL) && (q_30 != r_30)))
                _fail(r_30);
              else
                q_30 = r_30;
            }
            {
              t = not_null(n_30);
              {
                ATerm u_30 = NULL;
                t = o_0(t);
                {
                  s_30 = t;
                  {
                    ATerm v_30 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(s_30)), not_null(q_30));
                    {
                      v_30 = t;
                      if(((u_30 != NULL) && (u_30 != v_30)))
                        _fail(v_30);
                      else
                        u_30 = v_30;
                    }
                    t = not_null(u_30);
                  }
                }
              }
            }
            ;
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            {
              ATerm y_30 = NULL,a_31 = NULL;
              ATerm z_30 = NULL;
              t = SSLgetAnnotations(not_null(m_30));
              {
                z_30 = t;
                if(((y_30 != NULL) && (y_30 != z_30)))
                  _fail(z_30);
                else
                  y_30 = z_30;
              }
              {
                t = not_null(n_30);
                {
                  ATerm c_31 = NULL;
                  t = o_0(t);
                  {
                    a_31 = t;
                    {
                      ATerm d_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(a_31)), not_null(y_30));
                      {
                        d_31 = t;
                        if(((c_31 != NULL) && (c_31 != d_31)))
                          _fail(d_31);
                        else
                          c_31 = d_31;
                      }
                      t = not_null(c_31);
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm v_31 = NULL,w_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym_Int_1))
    {
      w_31 = ATgetArgument(v_31, 0);
      {
        ATerm x_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_31 = NULL,b_32 = NULL;
            ATerm a_32 = NULL;
            t = SSLgetAnnotations(not_null(v_31));
            {
              a_32 = t;
              if(((z_31 != NULL) && (z_31 != a_32)))
                _fail(a_32);
              else
                z_31 = a_32;
            }
            {
              t = not_null(w_31);
              {
                ATerm d_32 = NULL;
                t = n_0(t);
                {
                  b_32 = t;
                  {
                    ATerm e_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(b_32)), not_null(z_31));
                    {
                      e_32 = t;
                      if(((d_32 != NULL) && (d_32 != e_32)))
                        _fail(e_32);
                      else
                        d_32 = e_32;
                    }
                    t = not_null(d_32);
                  }
                }
              }
            }
            ;
            LocalPopChoice(y_5);
          }
        else
          {
            t = x_5;
            {
              ATerm j_32 = NULL,l_32 = NULL;
              ATerm k_32 = NULL;
              t = SSLgetAnnotations(not_null(v_31));
              {
                k_32 = t;
                if(((j_32 != NULL) && (j_32 != k_32)))
                  _fail(k_32);
                else
                  j_32 = k_32;
              }
              {
                t = not_null(w_31);
                {
                  ATerm n_32 = NULL;
                  t = n_0(t);
                  {
                    l_32 = t;
                    {
                      ATerm o_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(l_32)), not_null(j_32));
                      {
                        o_32 = t;
                        if(((n_32 != NULL) && (n_32 != o_32)))
                          _fail(o_32);
                        else
                          n_32 = o_32;
                      }
                      t = not_null(n_32);
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
ATerm Wld_0 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym_Wld_0))
    {
      ATerm d_33 = NULL,f_33 = NULL;
      ATerm z_5;
      z_5 = t;
      {
        ATerm e_33 = NULL;
        t = SSLgetAnnotations(not_null(b_33));
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
      }
      t = z_5;
      {
        ATerm g_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(d_33));
        {
          g_33 = t;
          if(((f_33 != NULL) && (f_33 != g_33)))
            _fail(g_33);
          else
            f_33 = g_33;
        }
        t = not_null(f_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm c_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(d_6);
          }
        else
          {
            t = c_6;
            {
              ATerm e_6 = t;
              int f_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(f_6);
                }
              else
                {
                  t = e_6;
                  {
                    ATerm g_6 = t;
                    int h_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(h_6);
                      }
                    else
                      {
                        t = g_6;
                        {
                          ATerm i_6 = t;
                          int j_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(j_6);
                            }
                          else
                            {
                              t = i_6;
                              {
                                ATerm k_6 = t;
                                int l_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    ;
                                    LocalPopChoice(l_6);
                                  }
                                else
                                  {
                                    t = k_6;
                                    {
                                      ATerm m_6 = t;
                                      int n_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, w_0, match_term_exp_0);
                                          ;
                                          LocalPopChoice(n_6);
                                        }
                                      else
                                        {
                                          t = m_6;
                                          {
                                            ATerm o_6 = t;
                                            int p_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, x_0);
                                                ;
                                                LocalPopChoice(p_6);
                                              }
                                            else
                                              {
                                                t = o_6;
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_q_6;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, y_0);
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
ATerm Match_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym_Match_1))
    {
      r_33 = ATgetArgument(q_33, 0);
      {
        ATerm u_33 = NULL,y_33 = NULL;
        ATerm v_33 = NULL;
        t = SSLgetAnnotations(not_null(q_33));
        {
          v_33 = t;
          if(((u_33 != NULL) && (u_33 != v_33)))
            _fail(v_33);
          else
            u_33 = v_33;
        }
        {
          t = not_null(r_33);
          {
            ATerm a_34 = NULL;
            t = y_59(t);
            {
              y_33 = t;
              {
                ATerm b_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(y_33)), not_null(u_33));
                {
                  b_34 = t;
                  if(((a_34 != NULL) && (a_34 != b_34)))
                    _fail(b_34);
                  else
                    a_34 = b_34;
                }
                t = not_null(a_34);
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
ATerm Thread_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm l_34 = NULL,m_34 = NULL;
  l_34 = t;
  k_34 :
  if(match_cons(l_34, sym_Thread_1))
    {
      m_34 = ATgetArgument(l_34, 0);
      {
        ATerm p_34 = NULL,r_34 = NULL;
        ATerm q_34 = NULL;
        t = SSLgetAnnotations(not_null(l_34));
        {
          q_34 = t;
          if(((p_34 != NULL) && (p_34 != q_34)))
            _fail(q_34);
          else
            p_34 = q_34;
        }
        {
          t = not_null(m_34);
          {
            ATerm t_34 = NULL;
            t = m_60(t);
            {
              r_34 = t;
              {
                ATerm u_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(r_34)), not_null(p_34));
                {
                  u_34 = t;
                  if(((t_34 != NULL) && (t_34 != u_34)))
                    _fail(u_34);
                  else
                    t_34 = u_34;
                }
                t = not_null(t_34);
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
ATerm All_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm e_35 = NULL,f_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym_All_1))
    {
      f_35 = ATgetArgument(e_35, 0);
      {
        ATerm i_35 = NULL,k_35 = NULL;
        ATerm j_35 = NULL;
        t = SSLgetAnnotations(not_null(e_35));
        {
          j_35 = t;
          if(((i_35 != NULL) && (i_35 != j_35)))
            _fail(j_35);
          else
            i_35 = j_35;
        }
        {
          t = not_null(f_35);
          {
            ATerm m_35 = NULL;
            t = l_60(t);
            {
              k_35 = t;
              {
                ATerm n_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(k_35)), not_null(i_35));
                {
                  n_35 = t;
                  if(((m_35 != NULL) && (m_35 != n_35)))
                    _fail(n_35);
                  else
                    m_35 = n_35;
                }
                t = not_null(m_35);
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm b_36 = NULL,c_36 = NULL;
  b_36 = t;
  a_36 :
  if(match_cons(b_36, sym_Some_1))
    {
      c_36 = ATgetArgument(b_36, 0);
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_36 = NULL,h_36 = NULL;
            ATerm g_36 = NULL;
            t = SSLgetAnnotations(not_null(b_36));
            {
              g_36 = t;
              if(((f_36 != NULL) && (f_36 != g_36)))
                _fail(g_36);
              else
                f_36 = g_36;
            }
            {
              t = not_null(c_36);
              {
                ATerm j_36 = NULL;
                t = m_0(t);
                {
                  h_36 = t;
                  {
                    ATerm k_36 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(h_36)), not_null(f_36));
                    {
                      k_36 = t;
                      if(((j_36 != NULL) && (j_36 != k_36)))
                        _fail(k_36);
                      else
                        j_36 = k_36;
                    }
                    t = not_null(j_36);
                  }
                }
              }
            }
            ;
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            {
              ATerm n_36 = NULL,p_36 = NULL;
              ATerm o_36 = NULL;
              t = SSLgetAnnotations(not_null(b_36));
              {
                o_36 = t;
                if(((n_36 != NULL) && (n_36 != o_36)))
                  _fail(o_36);
                else
                  n_36 = o_36;
              }
              {
                t = not_null(c_36);
                {
                  ATerm r_36 = NULL;
                  t = m_0(t);
                  {
                    p_36 = t;
                    {
                      ATerm s_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(p_36)), not_null(n_36));
                      {
                        s_36 = t;
                        if(((r_36 != NULL) && (r_36 != s_36)))
                          _fail(s_36);
                        else
                          r_36 = s_36;
                      }
                      t = not_null(r_36);
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
ATerm One_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_One_1))
    {
      h_37 = ATgetArgument(g_37, 0);
      {
        ATerm k_37 = NULL,m_37 = NULL;
        ATerm l_37 = NULL;
        t = SSLgetAnnotations(not_null(g_37));
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
        {
          t = not_null(h_37);
          {
            ATerm o_37 = NULL;
            t = j_60(t);
            {
              m_37 = t;
              {
                ATerm p_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(m_37)), not_null(k_37));
                {
                  p_37 = t;
                  if(((o_37 != NULL) && (o_37 != p_37)))
                    _fail(p_37);
                  else
                    o_37 = p_37;
                }
                t = not_null(o_37);
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
ATerm Cong_2 (ATerm t, ATerm h_60 (ATerm), ATerm i_60 (ATerm))
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  z_37 :
  if(match_cons(a_38, sym_Cong_2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      {
        ATerm g_38 = NULL,i_38 = NULL;
        ATerm h_38 = NULL;
        t = SSLgetAnnotations(not_null(a_38));
        {
          h_38 = t;
          if(((g_38 != NULL) && (g_38 != h_38)))
            _fail(h_38);
          else
            g_38 = h_38;
        }
        {
          t = not_null(b_38);
          {
            ATerm k_38 = NULL;
            t = h_60(t);
            {
              i_38 = t;
              {
                t = not_null(c_38);
                {
                  ATerm m_38 = NULL;
                  t = i_60(t);
                  {
                    k_38 = t;
                    {
                      ATerm n_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(i_38), not_null(k_38)), not_null(g_38));
                      {
                        n_38 = t;
                        if(((m_38 != NULL) && (m_38 != n_38)))
                          _fail(n_38);
                        else
                          m_38 = n_38;
                      }
                      t = not_null(m_38);
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
ATerm is_int_0 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t = SSL_is_int(not_null(u_38));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym_Path_2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      {
        ATerm n_39 = NULL,p_39 = NULL;
        ATerm o_39 = NULL;
        t = SSLgetAnnotations(not_null(h_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
        {
          t = not_null(i_39);
          {
            ATerm r_39 = NULL;
            t = f_60(t);
            {
              p_39 = t;
              {
                t = not_null(j_39);
                {
                  ATerm t_39 = NULL;
                  t = g_60(t);
                  {
                    r_39 = t;
                    {
                      ATerm u_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(p_39), not_null(r_39)), not_null(n_39));
                      {
                        u_39 = t;
                        if(((t_39 != NULL) && (t_39 != u_39)))
                          _fail(u_39);
                        else
                          t_39 = u_39;
                      }
                      t = not_null(t_39);
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
ATerm Rec_2 (ATerm t, ATerm e_61 (ATerm), ATerm f_61 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym_Rec_2))
    {
      h_40 = ATgetArgument(g_40, 0);
      i_40 = ATgetArgument(g_40, 1);
      {
        ATerm m_40 = NULL,o_40 = NULL;
        ATerm n_40 = NULL;
        t = SSLgetAnnotations(not_null(g_40));
        {
          n_40 = t;
          if(((m_40 != NULL) && (m_40 != n_40)))
            _fail(n_40);
          else
            m_40 = n_40;
        }
        {
          t = not_null(h_40);
          {
            ATerm q_40 = NULL;
            t = e_61(t);
            {
              o_40 = t;
              {
                t = not_null(i_40);
                {
                  ATerm t_40 = NULL;
                  t = f_61(t);
                  {
                    q_40 = t;
                    {
                      ATerm u_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(o_40), not_null(q_40)), not_null(m_40));
                      {
                        u_40 = t;
                        if(((t_40 != NULL) && (t_40 != u_40)))
                          _fail(u_40);
                        else
                          t_40 = u_40;
                      }
                      t = not_null(t_40);
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
ATerm SVar_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm i_41 = NULL,j_41 = NULL;
  i_41 = t;
  h_41 :
  if(match_cons(i_41, sym_SVar_1))
    {
      j_41 = ATgetArgument(i_41, 0);
      {
        ATerm m_41 = NULL,o_41 = NULL;
        ATerm n_41 = NULL;
        t = SSLgetAnnotations(not_null(i_41));
        {
          n_41 = t;
          if(((m_41 != NULL) && (m_41 != n_41)))
            _fail(n_41);
          else
            m_41 = n_41;
        }
        {
          t = not_null(j_41);
          {
            ATerm q_41 = NULL;
            t = d_61(t);
            {
              o_41 = t;
              {
                ATerm r_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(o_41)), not_null(m_41));
                {
                  r_41 = t;
                  if(((q_41 != NULL) && (q_41 != r_41)))
                    _fail(r_41);
                  else
                    q_41 = r_41;
                }
                t = not_null(q_41);
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
ATerm Call_2 (ATerm t, ATerm s_61 (ATerm), ATerm t_61 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_Call_2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        ATerm l_42 = NULL,n_42 = NULL;
        ATerm m_42 = NULL;
        t = SSLgetAnnotations(not_null(f_42));
        {
          m_42 = t;
          if(((l_42 != NULL) && (l_42 != m_42)))
            _fail(m_42);
          else
            l_42 = m_42;
        }
        {
          t = not_null(g_42);
          {
            ATerm p_42 = NULL;
            t = s_61(t);
            {
              n_42 = t;
              {
                t = not_null(h_42);
                {
                  ATerm r_42 = NULL;
                  t = t_61(t);
                  {
                    p_42 = t;
                    {
                      ATerm t_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(n_42), not_null(p_42)), not_null(l_42));
                      {
                        t_42 = t;
                        if(((r_42 != NULL) && (r_42 != t_42)))
                          _fail(t_42);
                        else
                          r_42 = t_42;
                      }
                      t = not_null(r_42);
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
ATerm LGChoice_2 (ATerm t, ATerm a_61 (ATerm), ATerm b_61 (ATerm))
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym_LGChoice_2))
    {
      g_43 = ATgetArgument(f_43, 0);
      h_43 = ATgetArgument(f_43, 1);
      {
        ATerm l_43 = NULL,n_43 = NULL;
        ATerm m_43 = NULL;
        t = SSLgetAnnotations(not_null(f_43));
        {
          m_43 = t;
          if(((l_43 != NULL) && (l_43 != m_43)))
            _fail(m_43);
          else
            l_43 = m_43;
        }
        {
          t = not_null(g_43);
          {
            ATerm p_43 = NULL;
            t = a_61(t);
            {
              n_43 = t;
              {
                t = not_null(h_43);
                {
                  ATerm r_43 = NULL;
                  t = b_61(t);
                  {
                    p_43 = t;
                    {
                      ATerm s_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(n_43), not_null(p_43)), not_null(l_43));
                      {
                        s_43 = t;
                        if(((r_43 != NULL) && (r_43 != s_43)))
                          _fail(s_43);
                        else
                          r_43 = s_43;
                      }
                      t = not_null(r_43);
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
ATerm GChoice_2 (ATerm t, ATerm y_60 (ATerm), ATerm z_60 (ATerm))
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_GChoice_2))
    {
      l_44 = ATgetArgument(k_44, 0);
      m_44 = ATgetArgument(k_44, 1);
      {
        ATerm q_44 = NULL,s_44 = NULL;
        ATerm r_44 = NULL;
        t = SSLgetAnnotations(not_null(k_44));
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
        {
          t = not_null(l_44);
          {
            ATerm u_44 = NULL;
            t = y_60(t);
            {
              s_44 = t;
              {
                t = not_null(m_44);
                {
                  ATerm w_44 = NULL;
                  t = z_60(t);
                  {
                    u_44 = t;
                    {
                      ATerm x_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(s_44), not_null(u_44)), not_null(q_44));
                      {
                        x_44 = t;
                        if(((w_44 != NULL) && (w_44 != x_44)))
                          _fail(x_44);
                        else
                          w_44 = x_44;
                      }
                      t = not_null(w_44);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym_GuardedLChoice_3))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      n_45 = ATgetArgument(k_45, 2);
      {
        ATerm s_45 = NULL,u_45 = NULL;
        ATerm t_45 = NULL;
        t = SSLgetAnnotations(not_null(k_45));
        {
          t_45 = t;
          if(((s_45 != NULL) && (s_45 != t_45)))
            _fail(t_45);
          else
            s_45 = t_45;
        }
        {
          t = not_null(l_45);
          {
            ATerm w_45 = NULL;
            t = v_60(t);
            {
              u_45 = t;
              {
                t = not_null(m_45);
                {
                  ATerm y_45 = NULL;
                  t = w_60(t);
                  {
                    w_45 = t;
                    {
                      t = not_null(n_45);
                      {
                        ATerm a_46 = NULL;
                        t = x_60(t);
                        {
                          y_45 = t;
                          {
                            ATerm b_46 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(u_45), not_null(w_45), not_null(y_45)), not_null(s_45));
                            {
                              b_46 = t;
                              if(((a_46 != NULL) && (a_46 != b_46)))
                                _fail(b_46);
                              else
                                a_46 = b_46;
                            }
                            t = not_null(a_46);
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
ATerm LChoice_2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym_LChoice_2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm u_46 = NULL,w_46 = NULL;
        ATerm v_46 = NULL;
        t = SSLgetAnnotations(not_null(o_46));
        {
          v_46 = t;
          if(((u_46 != NULL) && (u_46 != v_46)))
            _fail(v_46);
          else
            u_46 = v_46;
        }
        {
          t = not_null(p_46);
          {
            ATerm y_46 = NULL;
            t = t_60(t);
            {
              w_46 = t;
              {
                t = not_null(q_46);
                {
                  ATerm a_47 = NULL;
                  t = u_60(t);
                  {
                    y_46 = t;
                    {
                      ATerm b_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(w_46), not_null(y_46)), not_null(u_46));
                      {
                        b_47 = t;
                        if(((a_47 != NULL) && (a_47 != b_47)))
                          _fail(b_47);
                        else
                          a_47 = b_47;
                      }
                      t = not_null(a_47);
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
ATerm Choice_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
  w_47 = t;
  v_47 :
  if(match_cons(w_47, sym_Choice_2))
    {
      x_47 = ATgetArgument(w_47, 0);
      y_47 = ATgetArgument(w_47, 1);
      {
        ATerm c_48 = NULL,e_48 = NULL;
        ATerm d_48 = NULL;
        t = SSLgetAnnotations(not_null(w_47));
        {
          d_48 = t;
          if(((c_48 != NULL) && (c_48 != d_48)))
            _fail(d_48);
          else
            c_48 = d_48;
        }
        {
          t = not_null(x_47);
          {
            ATerm g_48 = NULL;
            t = r_60(t);
            {
              e_48 = t;
              {
                t = not_null(y_47);
                {
                  ATerm i_48 = NULL;
                  t = s_60(t);
                  {
                    g_48 = t;
                    {
                      ATerm j_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(e_48), not_null(g_48)), not_null(c_48));
                      {
                        j_48 = t;
                        if(((i_48 != NULL) && (i_48 != j_48)))
                          _fail(j_48);
                        else
                          i_48 = j_48;
                      }
                      t = not_null(i_48);
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
ATerm Seq_2 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm))
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  w_48 :
  if(match_cons(x_48, sym_Seq_2))
    {
      y_48 = ATgetArgument(x_48, 0);
      z_48 = ATgetArgument(x_48, 1);
      {
        ATerm i_49 = NULL,k_49 = NULL;
        ATerm j_49 = NULL;
        t = SSLgetAnnotations(not_null(x_48));
        {
          j_49 = t;
          if(((i_49 != NULL) && (i_49 != j_49)))
            _fail(j_49);
          else
            i_49 = j_49;
        }
        {
          t = not_null(y_48);
          {
            ATerm m_49 = NULL;
            t = p_60(t);
            {
              k_49 = t;
              {
                t = not_null(z_48);
                {
                  ATerm o_49 = NULL;
                  t = q_60(t);
                  {
                    m_49 = t;
                    {
                      ATerm p_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(k_49), not_null(m_49)), not_null(i_49));
                      {
                        p_49 = t;
                        if(((o_49 != NULL) && (o_49 != p_49)))
                          _fail(p_49);
                        else
                          o_49 = p_49;
                      }
                      t = not_null(o_49);
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
ATerm Test_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym_Test_1))
    {
      c_50 = ATgetArgument(b_50, 0);
      {
        ATerm f_50 = NULL,h_50 = NULL;
        ATerm g_50 = NULL;
        t = SSLgetAnnotations(not_null(b_50));
        {
          g_50 = t;
          if(((f_50 != NULL) && (f_50 != g_50)))
            _fail(g_50);
          else
            f_50 = g_50;
        }
        {
          t = not_null(c_50);
          {
            ATerm j_50 = NULL;
            t = n_60(t);
            {
              h_50 = t;
              {
                ATerm q_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(h_50)), not_null(f_50));
                {
                  q_50 = t;
                  if(((j_50 != NULL) && (j_50 != q_50)))
                    _fail(q_50);
                  else
                    j_50 = q_50;
                }
                t = not_null(j_50);
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
ATerm Not_1 (ATerm t, ATerm o_60 (ATerm))
{
  ATerm b_51 = NULL,c_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym_Not_1))
    {
      c_51 = ATgetArgument(b_51, 0);
      {
        ATerm f_51 = NULL,h_51 = NULL;
        ATerm g_51 = NULL;
        t = SSLgetAnnotations(not_null(b_51));
        {
          g_51 = t;
          if(((f_51 != NULL) && (f_51 != g_51)))
            _fail(g_51);
          else
            f_51 = g_51;
        }
        {
          t = not_null(c_51);
          {
            ATerm j_51 = NULL;
            t = o_60(t);
            {
              h_51 = t;
              {
                ATerm k_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(h_51)), not_null(f_51));
                {
                  k_51 = t;
                  if(((j_51 != NULL) && (j_51 != k_51)))
                    _fail(k_51);
                  else
                    j_51 = k_51;
                }
                t = not_null(j_51);
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
ATerm Fail_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t_51 = t;
  s_51 :
  if(match_cons(t_51, sym_Fail_0))
    {
      ATerm v_51 = NULL,x_51 = NULL;
      ATerm t_6;
      t_6 = t;
      {
        ATerm w_51 = NULL;
        t = SSLgetAnnotations(not_null(t_51));
        {
          w_51 = t;
          if(((v_51 != NULL) && (v_51 != w_51)))
            _fail(w_51);
          else
            v_51 = w_51;
        }
      }
      t = t_6;
      {
        ATerm y_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(v_51));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm g_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym_Id_0))
    {
      ATerm i_52 = NULL,k_52 = NULL;
      ATerm u_6;
      u_6 = t;
      {
        ATerm j_52 = NULL;
        t = SSLgetAnnotations(not_null(g_52));
        {
          j_52 = t;
          if(((i_52 != NULL) && (i_52 != j_52)))
            _fail(j_52);
          else
            i_52 = j_52;
        }
      }
      t = u_6;
      {
        ATerm l_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(i_52));
        {
          l_52 = t;
          if(((k_52 != NULL) && (k_52 != l_52)))
            _fail(l_52);
          else
            k_52 = l_52;
        }
        t = not_null(k_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            {
              ATerm z_6 = t;
              int a_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(a_7);
                }
              else
                {
                  t = z_6;
                  {
                    ATerm b_7 = t;
                    int c_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(c_7);
                      }
                    else
                      {
                        t = b_7;
                        {
                          ATerm d_7 = t;
                          int e_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(e_7);
                            }
                          else
                            {
                              t = d_7;
                              {
                                ATerm f_7 = t;
                                int g_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(g_7);
                                  }
                                else
                                  {
                                    t = f_7;
                                    {
                                      ATerm h_7 = t;
                                      int i_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(i_7);
                                        }
                                      else
                                        {
                                          t = h_7;
                                          {
                                            ATerm j_7 = t;
                                            int k_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(k_7);
                                              }
                                            else
                                              {
                                                t = j_7;
                                                {
                                                  ATerm l_7 = t;
                                                  int m_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(m_7);
                                                    }
                                                  else
                                                    {
                                                      t = l_7;
                                                      {
                                                        ATerm n_7 = t;
                                                        int o_7 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(o_7);
                                                          }
                                                        else
                                                          {
                                                            t = n_7;
                                                            {
                                                              ATerm p_7 = t;
                                                              int q_7 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm a_1 (ATerm t)
                                                                  {
                                                                    ATerm b_1 (ATerm t)
                                                                    {
                                                                      ATerm c_1 (ATerm t)
                                                                      {
                                                                        t = SVar_1(t, is_string_0);
                                                                        return(t);
                                                                      }
                                                                      t = Call_2(t, c_1, Nil_0);
                                                                      return(t);
                                                                    }
                                                                    t = list_1(t, b_1);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, z_0, a_1);
                                                                  ;
                                                                  LocalPopChoice(q_7);
                                                                }
                                                              else
                                                                {
                                                                  t = p_7;
                                                                  {
                                                                    ATerm r_7 = t;
                                                                    int s_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        ;
                                                                        LocalPopChoice(s_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_7;
                                                                        {
                                                                          ATerm t_7 = t;
                                                                          int u_7 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(u_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_7;
                                                                              {
                                                                                ATerm v_7 = t;
                                                                                int w_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, d_1);
                                                                                    ;
                                                                                    LocalPopChoice(w_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_7;
                                                                                    {
                                                                                      ATerm x_7 = t;
                                                                                      int y_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(y_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_7;
                                                                                          {
                                                                                            ATerm z_7 = t;
                                                                                            int a_8 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(a_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_7;
                                                                                                {
                                                                                                  ATerm b_8 = t;
                                                                                                  int c_8 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(c_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_8;
                                                                                                      {
                                                                                                        ATerm d_8 = t;
                                                                                                        int e_8 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(e_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_8;
                                                                                                            {
                                                                                                              ATerm f_8 = t;
                                                                                                              int g_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(g_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_8;
                                                                                                                  {
                                                                                                                    ATerm h_8 = t;
                                                                                                                    int i_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(i_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = h_8;
                                                                                                                        {
                                                                                                                          ATerm j_8 = t;
                                                                                                                          int k_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, e_1, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(k_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_8;
                                                                                                                              {
                                                                                                                                ATerm l_8 = t;
                                                                                                                                int m_8 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(m_8);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = l_8;
                                                                                                                                    {
                                                                                                                                      ATerm n_8 = t;
                                                                                                                                      int o_8 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm f_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, f_1);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(o_8);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = n_8;
                                                                                                                                          {
                                                                                                                                            ATerm p_8 = t;
                                                                                                                                            int q_8 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm g_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm h_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm i_1 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = VarDec_2(t, is_string_0, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, j_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_3(t, is_string_0, i_1, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, h_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, g_1, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(q_8);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = p_8;
                                                                                                                                                {
                                                                                                                                                  ATerm r_8 = t;
                                                                                                                                                  int s_8 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm k_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      ATerm l_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm m_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = list_1(t, m_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Case_4(t, is_string_0, k_1, l_1, strategy_expression_0);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(s_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = r_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm t_8 = t;
                                                                                                                                                        int u_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm n_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, n_1, term_expression_0);
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(u_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = t_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm v_8 = t;
                                                                                                                                                              int w_8 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm o_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, o_1);
                                                                                                                                                                  ;
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
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        ;
                                                                                                                                                                        LocalPopChoice(y_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = x_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm p_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_z_8;
                                                                                                                                                                            return(t);
                                                                                                                                                                          }
                                                                                                                                                                          t = debug_1(t, p_1);
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
ATerm VarDec_2 (ATerm t, ATerm l_61 (ATerm), ATerm m_61 (ATerm))
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(match_cons(w_52, sym_VarDec_2))
    {
      x_52 = ATgetArgument(w_52, 0);
      y_52 = ATgetArgument(w_52, 1);
      {
        ATerm h_53 = NULL,j_53 = NULL;
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(w_52));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
        {
          t = not_null(x_52);
          {
            ATerm l_53 = NULL;
            t = l_61(t);
            {
              j_53 = t;
              {
                t = not_null(y_52);
                {
                  ATerm u_53 = NULL;
                  t = m_61(t);
                  {
                    l_53 = t;
                    {
                      ATerm v_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_53), not_null(l_53)), not_null(h_53));
                      {
                        v_53 = t;
                        if(((u_53 != NULL) && (u_53 != v_53)))
                          _fail(v_53);
                        else
                          u_53 = v_53;
                      }
                      t = not_null(u_53);
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
ATerm SDef_3 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm k_61 (ATerm))
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  i_54 = t;
  h_54 :
  if(match_cons(i_54, sym_SDef_3))
    {
      j_54 = ATgetArgument(i_54, 0);
      k_54 = ATgetArgument(i_54, 1);
      l_54 = ATgetArgument(i_54, 2);
      {
        ATerm q_54 = NULL,s_54 = NULL;
        ATerm r_54 = NULL;
        t = SSLgetAnnotations(not_null(i_54));
        {
          r_54 = t;
          if(((q_54 != NULL) && (q_54 != r_54)))
            _fail(r_54);
          else
            q_54 = r_54;
        }
        {
          t = not_null(j_54);
          {
            ATerm u_54 = NULL;
            t = i_61(t);
            {
              s_54 = t;
              {
                t = not_null(k_54);
                {
                  ATerm w_54 = NULL;
                  t = j_61(t);
                  {
                    u_54 = t;
                    {
                      t = not_null(l_54);
                      {
                        ATerm y_54 = NULL;
                        t = k_61(t);
                        {
                          w_54 = t;
                          {
                            ATerm z_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_54), not_null(u_54), not_null(w_54)), not_null(q_54));
                            {
                              z_54 = t;
                              if(((y_54 != NULL) && (y_54 != z_54)))
                                _fail(z_54);
                              else
                                y_54 = z_54;
                            }
                            t = not_null(y_54);
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, r_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, q_1, strategy_expression_0);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_c_9;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm n_55 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = Cons_2(t, a_79, n_55);
      }
    return(t);
  }
  t = n_55(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm t_55 = NULL,u_55 = NULL;
  t_55 = t;
  s_55 :
  if(match_cons(t_55, sym_Strategies_1))
    {
      u_55 = ATgetArgument(t_55, 0);
      {
        ATerm x_55 = NULL,z_55 = NULL;
        ATerm y_55 = NULL;
        t = SSLgetAnnotations(not_null(t_55));
        {
          y_55 = t;
          if(((x_55 != NULL) && (x_55 != y_55)))
            _fail(y_55);
          else
            x_55 = y_55;
        }
        {
          t = not_null(u_55);
          {
            ATerm b_56 = NULL;
            t = m_62(t);
            {
              z_55 = t;
              {
                ATerm c_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_55)), not_null(x_55));
                {
                  c_56 = t;
                  if(((b_56 != NULL) && (b_56 != c_56)))
                    _fail(c_56);
                  else
                    b_56 = c_56;
                }
                t = not_null(b_56);
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
ATerm Specification_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm m_56 = NULL,n_56 = NULL;
  m_56 = t;
  l_56 :
  if(match_cons(m_56, sym_Specification_1))
    {
      n_56 = ATgetArgument(m_56, 0);
      {
        ATerm q_56 = NULL,s_56 = NULL;
        ATerm r_56 = NULL;
        t = SSLgetAnnotations(not_null(m_56));
        {
          r_56 = t;
          if(((q_56 != NULL) && (q_56 != r_56)))
            _fail(r_56);
          else
            q_56 = r_56;
        }
        {
          t = not_null(n_56);
          {
            ATerm u_56 = NULL;
            t = o_62(t);
            {
              s_56 = t;
              {
                ATerm v_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_56)), not_null(q_56));
                {
                  v_56 = t;
                  if(((u_56 != NULL) && (u_56 != v_56)))
                    _fail(v_56);
                  else
                    u_56 = v_56;
                }
                t = not_null(u_56);
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
ATerm stratego_specification_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, w_1);
            return(t);
          }
          t = Cons_2(t, v_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, u_1);
        return(t);
      }
      t = Specification_1(t, t_1);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = debug_1(t, x_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm))
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  f_57 :
  if(match_cons(g_57, sym__2))
    {
      h_57 = ATgetArgument(g_57, 0);
      i_57 = ATgetArgument(g_57, 1);
      {
        ATerm m_57 = NULL,o_57 = NULL;
        ATerm n_57 = NULL;
        t = SSLgetAnnotations(not_null(g_57));
        {
          n_57 = t;
          if(((m_57 != NULL) && (m_57 != n_57)))
            _fail(n_57);
          else
            m_57 = n_57;
        }
        {
          t = not_null(h_57);
          {
            ATerm q_57 = NULL;
            t = h_58(t);
            {
              o_57 = t;
              {
                t = not_null(i_57);
                {
                  ATerm s_57 = NULL;
                  t = i_58(t);
                  {
                    q_57 = t;
                    {
                      ATerm t_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_57), not_null(q_57)), not_null(m_57));
                      {
                        t_57 = t;
                        if(((s_57 != NULL) && (s_57 != t_57)))
                          _fail(t_57);
                        else
                          s_57 = t_57;
                      }
                      t = not_null(s_57);
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
  ATerm i_9;
  i_9 = t;
  {
    ATerm a_58 = NULL;
    ATerm b_58 = NULL;
    t = term_j_9;
    {
      t = whoami_0(t);
      {
        b_58 = t;
        if(((a_58 != NULL) && (a_58 != b_58)))
          _fail(b_58);
        else
          a_58 = b_58;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_9), not_null(a_58)), term_l_9));
      {
        t = printnl_0(t);
        {
          t = term_n_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,j_58 = NULL;
  f_58 = t;
  e_58 :
  if(match_cons(f_58, sym__2))
    {
      g_58 = ATgetArgument(f_58, 0);
      j_58 = ATgetArgument(f_58, 1);
      {
        ATerm o_9;
        o_9 = t;
        t = SSL_printnl(not_null(g_58), not_null(j_58));
        t = o_9;
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
  ATerm o_58 = NULL;
  o_58 = t;
  t = SSL_implode_string(not_null(o_58));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
        t_58 = t;
        s_58 :
        if(((ATgetType(t_58) == AT_LIST) && !(ATisEmpty(t_58))))
          {
            u_58 = ATgetFirst((ATermList) t_58);
            v_58 = (ATerm) ATgetNext((ATermList) t_58);
            {
              t = not_null(u_58);
              {
                ATerm y_1 (ATerm t)
                {
                  t = not_null(v_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_1);
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
  ATerm f_59 = NULL;
  ATerm h_59 = NULL;
  f_59 = t;
  {
    ATerm i_59 = NULL;
    ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
    t = not_null(f_59);
    {
      i_59 = t;
      {
        t = SSL_explode_term(not_null(i_59));
        {
          k_59 = t;
          d_59 :
          if(match_cons(k_59, sym__2))
            {
              l_59 = ATgetArgument(k_59, 0);
              m_59 = ATgetArgument(k_59, 1);
              e_59 :
              if(match_string(l_59, ""))
                {
                  if(((h_59 != NULL) && (h_59 != m_59)))
                    _fail(m_59);
                  else
                    h_59 = m_59;
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
      t = not_null(h_59);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm s_59 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_59);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        {
          t = Nil_0(t);
          t = n_79(t);
        }
      }
    return(t);
  }
  t = s_59(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_59 = NULL,a_60 = NULL,b_60 = NULL;
  x_59 = t;
  w_59 :
  if(match_cons(x_59, sym__2))
    {
      a_60 = ATgetArgument(x_59, 0);
      b_60 = ATgetArgument(x_59, 1);
      {
        t = not_null(a_60);
        {
          ATerm z_1 (ATerm t)
          {
            t = not_null(b_60);
            return(t);
          }
          t = at_end_1(t, z_1);
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
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_61 = NULL;
  p_61 = t;
  t = SSL_explode_string(not_null(p_61));
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
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_2);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
              c_62 = t;
              b_62 :
              if(match_cons(c_62, sym_Path_1))
                {
                  d_62 = ATgetArgument(c_62, 0);
                  t = not_null(d_62);
                }
              else
                {
                  if(match_cons(c_62, sym_Var_1))
                    {
                      d_62 = ATgetArgument(c_62, 0);
                      {
                        t = not_null(d_62);
                        {
                          ATerm z_9 = t;
                          int a_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_10);
                            }
                          else
                            {
                              t = z_9;
                              {
                                ATerm b_2 (ATerm t)
                                {
                                  t = term_b_10;
                                  return(t);
                                }
                                t = debug_1(t, b_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_62, sym_Prefix_2))
                        {
                          d_62 = ATgetArgument(c_62, 0);
                          e_62 = ATgetArgument(c_62, 1);
                          {
                            ATerm j_62 = NULL,l_62 = NULL;
                            ATerm c_10;
                            c_10 = t;
                            {
                              ATerm k_62 = NULL;
                              t = not_null(d_62);
                              {
                                t = eval_config_0(t);
                                {
                                  k_62 = t;
                                  if(((j_62 != NULL) && (j_62 != k_62)))
                                    _fail(k_62);
                                  else
                                    j_62 = k_62;
                                }
                              }
                            }
                            t = c_10;
                            {
                              ATerm n_62 = NULL;
                              t = not_null(e_62);
                              {
                                t = eval_config_0(t);
                                {
                                  n_62 = t;
                                  if(((l_62 != NULL) && (l_62 != n_62)))
                                    _fail(n_62);
                                  else
                                    l_62 = n_62;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_62), not_null(l_62));
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
  ATerm w_62 = NULL;
  w_62 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(w_62));
    {
      t = table_get_0(t);
      {
        ATerm c_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_10;
            e_10 = t;
            {
              ATerm y_62 = NULL;
              ATerm z_62 = NULL;
              z_62 = t;
              if(((y_62 != NULL) && (y_62 != z_62)))
                _fail(z_62);
              else
                y_62 = z_62;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(w_62), not_null(y_62));
                t = table_put_0(t);
              }
            }
            t = e_10;
          }
          return(t);
        }
        t = try_1(t, c_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_92 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm d_63 = NULL;
      ATerm e_63 = NULL;
      t = term_g_10;
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
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_63), term_h_10);
        t = geq_0(t);
      }
    }
    t = f_10;
    t = m_92(t);
    return(t);
  }
  t = try_1(t, d_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
  k_63 = t;
  i_63 :
  if(match_cons(k_63, sym__2))
    {
      l_63 = ATgetArgument(k_63, 0);
      m_63 = ATgetArgument(k_63, 1);
      j_63 :
      if(match_cons(m_63, sym_Stream_1))
        {
          n_63 = ATgetArgument(m_63, 0);
          {
            ATerm q_63 = NULL;
            t = SSL_fputc(not_null(l_63), not_null(n_63));
            {
              ATerm r_63 = NULL;
              r_63 = t;
              if(((q_63 != NULL) && (q_63 != r_63)))
                _fail(r_63);
              else
                q_63 = r_63;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_63));
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
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL;
  b_64 = t;
  w_63 :
  if(match_cons(b_64, sym__2))
    {
      c_64 = ATgetArgument(b_64, 0);
      e_64 = ATgetArgument(b_64, 1);
      a_64 :
      if(match_cons(c_64, sym_Stream_1))
        {
          d_64 = ATgetArgument(c_64, 0);
          {
            ATerm h_64 = NULL;
            t = SSL_write_term_to_stream_text(not_null(d_64), not_null(e_64));
            {
              ATerm i_64 = NULL;
              i_64 = t;
              if(((h_64 != NULL) && (h_64 != i_64)))
                _fail(i_64);
              else
                h_64 = i_64;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_64));
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
  ATerm e_2 (ATerm t)
  {
    ATerm m_64 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm n_64 = NULL;
      n_64 = t;
      if(((m_64 != NULL) && (m_64 != n_64)))
        _fail(n_64);
      else
        m_64 = n_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(m_64));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, e_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  t_64 = t;
  r_64 :
  if(match_cons(t_64, sym__2))
    {
      u_64 = ATgetArgument(t_64, 0);
      w_64 = ATgetArgument(t_64, 1);
      s_64 :
      if(match_cons(u_64, sym_Stream_1))
        {
          v_64 = ATgetArgument(u_64, 0);
          {
            ATerm z_64 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(v_64), not_null(w_64));
            {
              ATerm a_65 = NULL;
              a_65 = t;
              if(((z_64 != NULL) && (z_64 != a_65)))
                _fail(a_65);
              else
                z_64 = a_65;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_64));
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
ATerm WriteToFile_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  h_65 = t;
  g_65 :
  if(match_cons(h_65, sym__2))
    {
      i_65 = ATgetArgument(h_65, 0);
      j_65 = ATgetArgument(h_65, 1);
      {
        ATerm m_65 = NULL,o_65 = NULL;
        t = not_null(i_65);
        {
          ATerm n_65 = NULL;
          n_65 = t;
          if(((m_65 != NULL) && (m_65 != n_65)))
            _fail(n_65);
          else
            m_65 = n_65;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_65), term_j_10);
            {
              t = open_stream_0(t);
              {
                ATerm p_65 = NULL;
                p_65 = t;
                if(((o_65 != NULL) && (o_65 != p_65)))
                  _fail(p_65);
                else
                  o_65 = p_65;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_65), not_null(j_65));
                  {
                    t = i_91(t);
                    {
                      t = fclose_0(t);
                      t = not_null(j_65);
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
  ATerm x_65 = NULL;
  ATerm k_10;
  k_10 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm l_10 = t;
      int m_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_2 (ATerm t)
          {
            ATerm y_65 = NULL,z_65 = NULL;
            y_65 = t;
            u_65 :
            if(match_cons(y_65, sym_Output_1))
              {
                z_65 = ATgetArgument(y_65, 0);
                if(((x_65 != NULL) && (x_65 != z_65)))
                  _fail(z_65);
                else
                  x_65 = z_65;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_2);
          ;
          LocalPopChoice(m_10);
        }
      else
        {
          t = l_10;
          {
            ATerm a_66 = NULL;
            t = term_n_10;
            {
              a_66 = t;
              if(((x_65 != NULL) && (x_65 != a_66)))
                _fail(a_66);
              else
                x_65 = a_66;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_2, _id);
  }
  t = k_10;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_2 (ATerm t)
      {
        t = not_null(x_65);
        return(t);
      }
      t = split_2(t, i_2, _id);
      return(t);
    }
    t = _2(t, _id, h_2);
    {
      ATerm o_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              ATerm b_66 = NULL;
              b_66 = t;
              w_65 :
              if(!(match_cons(b_66, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_2);
            return(t);
          }
          t = _2(t, j_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(p_10);
        }
      else
        {
          t = o_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_94 (ATerm))
{
  ATerm h_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
  ATerm q_10;
  q_10 = t;
  t = dtime_0(t);
  t = q_10;
  {
    t = k_94(t);
    {
      ATerm r_10;
      r_10 = t;
      {
        ATerm i_66 = NULL;
        t = dtime_0(t);
        {
          i_66 = t;
          if(((h_66 != NULL) && (h_66 != i_66)))
            _fail(i_66);
          else
            h_66 = i_66;
        }
      }
      t = r_10;
      {
        j_66 = t;
        g_66 :
        if(match_cons(j_66, sym__2))
          {
            k_66 = ATgetArgument(j_66, 0);
            l_66 = ATgetArgument(j_66, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_66)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_66))), not_null(l_66));
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
  ATerm t_66 = NULL,u_66 = NULL;
  ATerm a_67 (ATerm t)
  {
    t = SSL_fclose(not_null(u_66));
    return(t);
  }
  u_66 = t;
  s_66 :
  if(match_cons(u_66, sym_Stream_1))
    {
      t_66 = ATgetArgument(u_66, 0);
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(t_66));
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = a_67(t);
          }
      }
    }
  else
    {
      t = a_67(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL;
  d_67 = t;
  c_67 :
  if(match_cons(d_67, sym_Stream_1))
    {
      e_67 = ATgetArgument(d_67, 0);
      t = SSL_read_term_from_stream(not_null(e_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm w_10;
  w_10 = t;
  {
    ATerm j_67 = NULL,l_67 = NULL;
    ATerm x_10;
    x_10 = t;
    {
      ATerm k_67 = NULL;
      t = u_90(t);
      {
        k_67 = t;
        if(((j_67 != NULL) && (j_67 != k_67)))
          _fail(k_67);
        else
          j_67 = k_67;
      }
    }
    t = x_10;
    {
      ATerm m_67 = NULL;
      m_67 = t;
      if(((l_67 != NULL) && (l_67 != m_67)))
        _fail(m_67);
      else
        l_67 = m_67;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_67)), not_null(j_67)));
        t = printnl_0(t);
      }
    }
  }
  t = w_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_cons(s_67, sym__2))
    {
      t_67 = ATgetArgument(s_67, 0);
      u_67 = ATgetArgument(s_67, 1);
      {
        ATerm x_67 = NULL;
        t = SSL_fopen(not_null(t_67), not_null(u_67));
        {
          ATerm y_67 = NULL;
          y_67 = t;
          if(((x_67 != NULL) && (x_67 != y_67)))
            _fail(y_67);
          else
            x_67 = y_67;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_67));
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
  ATerm c_68 = NULL;
  c_68 = t;
  t = SSL_is_string(not_null(c_68));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm g_68 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_68 = NULL;
    h_68 = t;
    if(((g_68 != NULL) && (g_68 != h_68)))
      _fail(h_68);
    else
      g_68 = h_68;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_68));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_68 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_68 = NULL;
    l_68 = t;
    if(((k_68 != NULL) && (k_68 != l_68)))
      _fail(l_68);
    else
      k_68 = l_68;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_68));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_68 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_68 = NULL;
    p_68 = t;
    if(((o_68 != NULL) && (o_68 != p_68)))
      _fail(p_68);
    else
      o_68 = p_68;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_68));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_68 = NULL;
  v_68 = t;
  u_68 :
  if(match_cons(v_68, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_68, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_68, sym_stdin_0))
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
  ATerm f_69 = NULL;
  ATerm h_69 = NULL,i_69 = NULL;
  f_69 = t;
  {
    ATerm j_69 = NULL;
    ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
    t = not_null(f_69);
    {
      j_69 = t;
      {
        t = SSL_explode_term(not_null(j_69));
        {
          l_69 = t;
          c_69 :
          if(match_cons(l_69, sym__2))
            {
              m_69 = ATgetArgument(l_69, 0);
              n_69 = ATgetArgument(l_69, 1);
              d_69 :
              if(match_string(m_69, ""))
                {
                  e_69 :
                  if(((ATgetType(n_69) == AT_LIST) && !(ATisEmpty(n_69))))
                    {
                      o_69 = ATgetFirst((ATermList) n_69);
                      p_69 = (ATerm) ATgetNext((ATermList) n_69);
                      {
                        if(((i_69 != NULL) && (i_69 != o_69)))
                          _fail(o_69);
                        else
                          i_69 = o_69;
                        if(((h_69 != NULL) && (h_69 != p_69)))
                          _fail(p_69);
                        else
                          h_69 = p_69;
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
    t = not_null(i_69);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  x_69 = t;
  w_69 :
  if(match_cons(x_69, sym__2))
    {
      y_69 = ATgetArgument(x_69, 0);
      z_69 = ATgetArgument(x_69, 1);
      {
        ATerm y_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = y_10;
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm a_70 = NULL,b_70 = NULL;
                    a_70 = t;
                    v_69 :
                    if(match_cons(a_70, sym_Path_1))
                      {
                        b_70 = ATgetArgument(a_70, 0);
                        t = not_null(b_70);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
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
  ATerm l_70 = NULL;
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_70 = NULL;
      ATerm i_70 = NULL;
      i_70 = t;
      if(((h_70 != NULL) && (h_70 != i_70)))
        _fail(i_70);
      else
        h_70 = i_70;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_70), term_f_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_g_11;
          return(t);
        }
        t = debug_1(t, m_2);
        _fail(t);
      }
    }
  {
    ATerm h_11;
    h_11 = t;
    {
      ATerm q_70 = NULL;
      t = read_from_stream_0(t);
      {
        q_70 = t;
        if(((l_70 != NULL) && (l_70 != q_70)))
          _fail(q_70);
        else
          l_70 = q_70;
      }
    }
    t = h_11;
    {
      t = fclose_0(t);
      t = not_null(l_70);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm))
{
  ATerm c_71 = NULL,e_71 = NULL;
  ATerm i_11;
  i_11 = t;
  {
    ATerm d_71 = NULL;
    t = m_86(t);
    {
      d_71 = t;
      if(((c_71 != NULL) && (c_71 != d_71)))
        _fail(d_71);
      else
        c_71 = d_71;
    }
  }
  t = i_11;
  {
    ATerm f_71 = NULL;
    t = n_86(t);
    {
      f_71 = t;
      if(((e_71 != NULL) && (e_71 != f_71)))
        _fail(f_71);
      else
        e_71 = f_71;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_71), not_null(e_71));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_71 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          ATerm r_71 = NULL,s_71 = NULL;
          r_71 = t;
          o_71 :
          if(match_cons(r_71, sym_Input_1))
            {
              s_71 = ATgetArgument(r_71, 0);
              if(((q_71 != NULL) && (q_71 != s_71)))
                _fail(s_71);
              else
                q_71 = s_71;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_2);
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        {
          ATerm t_71 = NULL;
          t = term_m_11;
          {
            t_71 = t;
            if(((q_71 != NULL) && (q_71 != t_71)))
              _fail(t_71);
            else
              q_71 = t_71;
          }
        }
      }
  }
  t = j_11;
  {
    ATerm o_2 (ATerm t)
    {
      t = not_null(q_71);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm x_71 = NULL;
    x_71 = t;
    w_71 :
    if(!(match_string(x_71, "-v")))
      {
        if(!(match_string(x_71, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_o_11;
    t = set_config_0(t);
    t = term_p_11;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = Option_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm a_72 = NULL;
    a_72 = t;
    y_71 :
    if(!(match_string(a_72, "-k")))
      {
        if(!(match_string(a_72, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm r_11;
    r_11 = t;
    {
      ATerm b_72 = NULL;
      ATerm c_72 = NULL;
      t = string_to_int_0(t);
      {
        c_72 = t;
        if(((b_72 != NULL) && (b_72 != c_72)))
          _fail(c_72);
        else
          b_72 = c_72;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(b_72));
        t = set_config_0(t);
      }
    }
    t = r_11;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_t_11;
    return(t);
  }
  t = ArgOption_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_72 = NULL;
  f_72 = t;
  t = SSL_string_to_int(not_null(f_72));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm n_72 = NULL;
        n_72 = t;
        i_72 :
        if(!(match_string(n_72, "-S")))
          {
            if(!(match_string(n_72, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_x_11;
        t = set_config_0(t);
        t = term_y_11;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_z_11;
        return(t);
      }
      t = Option_3(t, v_2, w_2, x_2);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              ATerm o_72 = NULL;
              o_72 = t;
              j_72 :
              if(!(match_string(o_72, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              ATerm r_72 = NULL;
              ATerm c_12;
              c_12 = t;
              {
                ATerm p_72 = NULL;
                ATerm q_72 = NULL;
                t = string_to_int_0(t);
                {
                  q_72 = t;
                  if(((p_72 != NULL) && (p_72 != q_72)))
                    _fail(q_72);
                  else
                    p_72 = q_72;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(p_72));
                  t = set_config_0(t);
                }
              }
              t = c_12;
              {
                ATerm s_72 = NULL;
                s_72 = t;
                if(((r_72 != NULL) && (r_72 != s_72)))
                  _fail(s_72);
                else
                  r_72 = s_72;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_72));
              }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = term_d_12;
              return(t);
            }
            t = ArgOption_3(t, y_2, z_2, a_3);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm b_3 (ATerm t)
              {
                ATerm t_72 = NULL;
                t_72 = t;
                m_72 :
                if(!(match_string(t_72, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_f_12;
                t = set_config_0(t);
                t = term_g_12;
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_h_12;
                return(t);
              }
              t = Option_3(t, b_3, c_3, d_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm z_72 = NULL;
    z_72 = t;
    w_72 :
    if(!(match_string(z_72, "-o")))
      {
        if(!(match_string(z_72, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm c_73 = NULL;
    ATerm p_12;
    p_12 = t;
    {
      ATerm a_73 = NULL;
      ATerm b_73 = NULL;
      b_73 = t;
      if(((a_73 != NULL) && (a_73 != b_73)))
        _fail(b_73);
      else
        a_73 = b_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(a_73));
        t = set_config_0(t);
      }
    }
    t = p_12;
    {
      ATerm d_73 = NULL;
      d_73 = t;
      if(((c_73 != NULL) && (c_73 != d_73)))
        _fail(d_73);
      else
        c_73 = d_73;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_73));
    }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_r_12;
    return(t);
  }
  t = ArgOption_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm h_73 = NULL;
          h_73 = t;
          g_73 :
          if(!(match_string(h_73, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_v_12;
          t = set_config_0(t);
          t = term_w_12;
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = Option_3(t, h_3, i_3, j_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  n_73 = t;
  l_73 :
  if(match_string(n_73, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_73) == AT_LIST) && !(ATisEmpty(n_73))))
        {
          o_73 = ATgetFirst((ATermList) n_73);
          p_73 = (ATerm) ATgetNext((ATermList) n_73);
          m_73 :
          if(((ATgetType(p_73) == AT_LIST) && !(ATisEmpty(p_73))))
            {
              q_73 = ATgetFirst((ATermList) p_73);
              r_73 = (ATerm) ATgetNext((ATermList) p_73);
              {
                ATerm v_73 = NULL;
                ATerm y_12;
                y_12 = t;
                {
                  t = not_null(o_73);
                  t = j_0(t);
                }
                t = y_12;
                {
                  ATerm w_73 = NULL;
                  t = not_null(q_73);
                  {
                    t = k_0(t);
                    {
                      w_73 = t;
                      if(((v_73 != NULL) && (v_73 != w_73)))
                        _fail(w_73);
                      else
                        v_73 = w_73;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_73)), not_null(v_73));
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
  ATerm k_3 (ATerm t)
  {
    ATerm d_74 = NULL;
    d_74 = t;
    a_74 :
    if(!(match_string(d_74, "-i")))
      {
        if(!(match_string(d_74, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm g_74 = NULL;
    ATerm z_12;
    z_12 = t;
    {
      ATerm e_74 = NULL;
      ATerm f_74 = NULL;
      f_74 = t;
      if(((e_74 != NULL) && (e_74 != f_74)))
        _fail(f_74);
      else
        e_74 = f_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(e_74));
        t = set_config_0(t);
      }
    }
    t = z_12;
    {
      ATerm h_74 = NULL;
      h_74 = t;
      if(((g_74 != NULL) && (g_74 != h_74)))
        _fail(h_74);
      else
        g_74 = h_74;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_74));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_b_13;
    return(t);
  }
  t = ArgOption_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = c_13;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm l_74 = NULL;
  t = report_run_time_0(t);
  {
    ATerm m_74 = NULL;
    t = term_j_9;
    {
      t = whoami_0(t);
      {
        m_74 = t;
        if(((l_74 != NULL) && (l_74 != m_74)))
          _fail(m_74);
        else
          l_74 = m_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATempty, term_i_13), not_null(l_74)));
      {
        t = printnl_0(t);
        {
          t = term_n_9;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_j_13;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_74 = NULL;
  p_74 = t;
  t = SSL_TicksToSeconds(not_null(p_74));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL;
  u_74 = t;
  t_74 :
  if(match_cons(u_74, sym__2))
    {
      v_74 = ATgetArgument(u_74, 0);
      w_74 = ATgetArgument(u_74, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_74), not_null(w_74));
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = SSL_addr(not_null(v_74), not_null(w_74));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_84 (ATerm), ATerm y_84 (ATerm))
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_84(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
        d_75 = t;
        c_75 :
        if(((ATgetType(d_75) == AT_LIST) && !(ATisEmpty(d_75))))
          {
            e_75 = ATgetFirst((ATermList) d_75);
            f_75 = (ATerm) ATgetNext((ATermList) d_75);
            {
              ATerm i_75 = NULL;
              ATerm j_75 = NULL;
              t = not_null(f_75);
              {
                t = foldr_2(t, x_84, y_84);
                {
                  j_75 = t;
                  if(((i_75 != NULL) && (i_75 != j_75)))
                    _fail(j_75);
                  else
                    i_75 = j_75;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_75), not_null(i_75));
                t = y_84(t);
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
ATerm crush_2 (ATerm t, ATerm q_88 (ATerm), ATerm r_88 (ATerm))
{
  ATerm q_75 = NULL;
  ATerm s_75 = NULL;
  q_75 = t;
  {
    ATerm t_75 = NULL;
    ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
    t = not_null(q_75);
    {
      t_75 = t;
      {
        t = SSL_explode_term(not_null(t_75));
        {
          v_75 = t;
          p_75 :
          if(match_cons(v_75, sym__2))
            {
              w_75 = ATgetArgument(v_75, 0);
              x_75 = ATgetArgument(v_75, 1);
              if(((s_75 != NULL) && (s_75 != x_75)))
                _fail(x_75);
              else
                s_75 = x_75;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_75);
      t = foldr_2(t, q_88, r_88);
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
    ATerm n_3 (ATerm t)
    {
      t = term_w_11;
      return(t);
    }
    t = crush_2(t, n_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  d_76 = t;
  c_76 :
  if(match_cons(d_76, sym__2))
    {
      e_76 = ATgetArgument(d_76, 0);
      f_76 = ATgetArgument(d_76, 1);
      {
        ATerm o_13;
        o_13 = t;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_76), not_null(f_76));
              ;
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = SSL_gtr(not_null(e_76), not_null(f_76));
            }
        }
        t = o_13;
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
  ATerm l_76 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
      m_76 = t;
      k_76 :
      if(match_cons(m_76, sym__2))
        {
          n_76 = ATgetArgument(m_76, 0);
          o_76 = ATgetArgument(m_76, 1);
          {
            if(((l_76 != NULL) && (l_76 != n_76)))
              _fail(n_76);
            else
              l_76 = n_76;
            if(((l_76 != NULL) && (l_76 != o_76)))
              _fail(o_76);
            else
              l_76 = o_76;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_92 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm t_13;
    t_13 = t;
    {
      ATerm r_76 = NULL;
      ATerm s_76 = NULL;
      t = term_g_10;
      {
        t = get_config_0(t);
        {
          s_76 = t;
          if(((r_76 != NULL) && (r_76 != s_76)))
            _fail(s_76);
          else
            r_76 = s_76;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_76), term_n_9);
        t = geq_0(t);
      }
    }
    t = t_13;
    t = l_92(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm w_76 = NULL,y_76 = NULL;
    ATerm u_13;
    u_13 = t;
    {
      ATerm x_76 = NULL;
      t = run_time_0(t);
      {
        x_76 = t;
        if(((w_76 != NULL) && (w_76 != x_76)))
          _fail(x_76);
        else
          w_76 = x_76;
      }
    }
    t = u_13;
    {
      ATerm z_76 = NULL;
      t = term_j_9;
      {
        t = whoami_0(t);
        {
          z_76 = t;
          if(((y_76 != NULL) && (y_76 != z_76)))
            _fail(z_76);
          else
            y_76 = z_76;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), not_null(w_76)), term_v_13), not_null(y_76)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_w_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_77 = NULL;
  g_77 = t;
  f_77 :
  if(match_cons(g_77, sym_Version_0))
    {
      ATerm i_77 = NULL,k_77 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm j_77 = NULL;
        t = SSLgetAnnotations(not_null(g_77));
        {
          j_77 = t;
          if(((i_77 != NULL) && (i_77 != j_77)))
            _fail(j_77);
          else
            i_77 = j_77;
        }
      }
      t = x_13;
      {
        ATerm l_77 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_77));
        {
          l_77 = t;
          if(((k_77 != NULL) && (k_77 != l_77)))
            _fail(l_77);
          else
            k_77 = l_77;
        }
        t = not_null(k_77);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_95 (ATerm))
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_14;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm d_14 = t;
                int h_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_14);
                  }
                else
                  {
                    t = d_14;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, q_3);
      }
    }
  t = i_95(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_77 = NULL;
  q_77 = t;
  t = SSL_table_create(not_null(q_77));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_77 = NULL;
  u_77 = t;
  {
    ATerm i_14;
    i_14 = t;
    {
      t = term_m_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_14, term_p_14, not_null(u_77));
          t = table_put_0(t);
        }
      }
    }
    t = i_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_77 = NULL;
  y_77 = t;
  t = SSL_table_destroy(not_null(y_77));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_78 = NULL;
  c_78 = t;
  t = SSL_exit(not_null(c_78));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  f_78 :
  if(((ATgetType(g_78) == AT_LIST) && ATisEmpty(g_78)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_78) == AT_LIST) && !(ATisEmpty(g_78))))
        {
          h_78 = ATgetFirst((ATermList) g_78);
          i_78 = (ATerm) ATgetNext((ATermList) g_78);
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
  ATerm q_14;
  q_14 = t;
  {
    ATerm l_78 = NULL;
    ATerm o_78 = NULL;
    ATerm u_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = u_14;
        {
          ATerm m_78 = NULL;
          ATerm n_78 = NULL;
          n_78 = t;
          if(((m_78 != NULL) && (m_78 != n_78)))
            _fail(n_78);
          else
            m_78 = n_78;
          t = (ATerm) ATinsert(ATempty, not_null(m_78));
        }
      }
    {
      o_78 = t;
      if(((l_78 != NULL) && (l_78 != o_78)))
        _fail(o_78);
      else
        l_78 = o_78;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_10, not_null(l_78));
      t = printnl_0(t);
    }
  }
  t = q_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_97 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm r_78 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = Cons_2(t, y_78, r_78);
      }
    return(t);
  }
  t = r_78(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  f_79 = t;
  c_79 :
  if(((ATgetType(f_79) == AT_LIST) && !(ATisEmpty(f_79))))
    {
      d_79 = ATgetFirst((ATermList) f_79);
      e_79 = (ATerm) ATgetNext((ATermList) f_79);
      {
        ATerm k_79 = NULL;
        t = not_null(e_79);
        {
          ATerm a_15;
          a_15 = t;
          {
            ATerm l_79 = NULL,p_79 = NULL,r_79 = NULL;
            ATerm b_15;
            b_15 = t;
            {
              ATerm m_79 = NULL;
              t = i_0(t);
              {
                m_79 = t;
                if(((l_79 != NULL) && (l_79 != m_79)))
                  _fail(m_79);
                else
                  l_79 = m_79;
              }
            }
            t = b_15;
            {
              ATerm q_79 = NULL;
              t = not_null(d_79);
              {
                t = g_0(t);
                {
                  q_79 = t;
                  if(((p_79 != NULL) && (p_79 != q_79)))
                    _fail(q_79);
                  else
                    p_79 = q_79;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_79)), not_null(p_79));
                {
                  r_79 = t;
                  if(((k_79 != NULL) && (k_79 != r_79)))
                    _fail(r_79);
                  else
                    k_79 = r_79;
                }
              }
            }
          }
          t = a_15;
          {
            ATerm r_3 (ATerm t)
            {
              t = not_null(k_79);
              return(t);
            }
            t = reverse_acc_2(t, g_0, r_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_79) == AT_LIST) && ATisEmpty(f_79)))
        {
          {
            t = term_j_9;
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
  ATerm s_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_97 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm c_80 = NULL,d_80 = NULL;
  c_80 = t;
  b_80 :
  if(match_cons(c_80, sym_Program_1))
    {
      d_80 = ATgetArgument(c_80, 0);
      {
        ATerm g_80 = NULL,i_80 = NULL;
        ATerm h_80 = NULL;
        t = SSLgetAnnotations(not_null(c_80));
        {
          h_80 = t;
          if(((g_80 != NULL) && (g_80 != h_80)))
            _fail(h_80);
          else
            g_80 = h_80;
        }
        {
          t = not_null(d_80);
          {
            ATerm k_80 = NULL;
            t = j_70(t);
            {
              i_80 = t;
              {
                ATerm l_80 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_80)), not_null(g_80));
                {
                  l_80 = t;
                  if(((k_80 != NULL) && (k_80 != l_80)))
                    _fail(l_80);
                  else
                    k_80 = l_80;
                }
                t = not_null(k_80);
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
  ATerm u_80 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_80 = NULL;
      t = term_j_13;
      {
        t = get_config_0(t);
        {
          v_80 = t;
          if(((u_80 != NULL) && (u_80 != v_80)))
            _fail(v_80);
          else
            u_80 = v_80;
        }
      }
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm u_3 (ATerm t)
          {
            ATerm w_80 = NULL;
            w_80 = t;
            if(((u_80 != NULL) && (u_80 != w_80)))
              _fail(w_80);
            else
              u_80 = w_80;
            return(t);
          }
          t = Program_1(t, u_3);
          return(t);
        }
        t = option_defined_1(t, t_3);
      }
    }
  {
    ATerm v_3 (ATerm t)
    {
      ATerm w_3 (ATerm t)
      {
        t = not_null(u_80);
        return(t);
      }
      t = short_description_1(t, w_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_3);
    {
      t = term_e_15;
      {
        t = echo_0(t);
        {
          t = term_h_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm x_80 = NULL;
                  ATerm y_80 = NULL;
                  y_80 = t;
                  if(((x_80 != NULL) && (x_80 != y_80)))
                    _fail(y_80);
                  else
                    x_80 = y_80;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_80)), term_i_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_3);
                {
                  ATerm y_3 (ATerm t)
                  {
                    ATerm z_80 = NULL;
                    ATerm a_81 = NULL;
                    ATerm z_3 (ATerm t)
                    {
                      t = not_null(u_80);
                      return(t);
                    }
                    t = long_description_1(t, z_3);
                    {
                      a_81 = t;
                      if(((z_80 != NULL) && (z_80 != a_81)))
                        _fail(a_81);
                      else
                        z_80 = a_81;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_80)), term_m_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_3);
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
  ATerm n_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = n_15;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm k_81 = NULL,l_81 = NULL;
  k_81 = t;
  j_81 :
  if(match_cons(k_81, sym_Undefined_1))
    {
      l_81 = ATgetArgument(k_81, 0);
      {
        ATerm o_81 = NULL,q_81 = NULL;
        ATerm p_81 = NULL;
        t = SSLgetAnnotations(not_null(k_81));
        {
          p_81 = t;
          if(((o_81 != NULL) && (o_81 != p_81)))
            _fail(p_81);
          else
            o_81 = p_81;
        }
        {
          t = not_null(l_81);
          {
            ATerm s_81 = NULL;
            t = k_70(t);
            {
              q_81 = t;
              {
                ATerm t_81 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_81)), not_null(o_81));
                {
                  t_81 = t;
                  if(((s_81 != NULL) && (s_81 != t_81)))
                    _fail(t_81);
                  else
                    s_81 = t_81;
                }
                t = not_null(s_81);
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
ATerm fetch_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm y_81 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_79, _id);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = Cons_2(t, _id, y_81);
      }
    return(t);
  }
  t = y_81(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_96 (ATerm))
{
  t = fetch_1(t, i_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_82 = NULL;
  d_82 = t;
  c_82 :
  if(match_cons(d_82, sym_Help_0))
    {
      ATerm f_82 = NULL,h_82 = NULL;
      ATerm w_15;
      w_15 = t;
      {
        ATerm g_82 = NULL;
        t = SSLgetAnnotations(not_null(d_82));
        {
          g_82 = t;
          if(((f_82 != NULL) && (f_82 != g_82)))
            _fail(g_82);
          else
            f_82 = g_82;
        }
      }
      t = w_15;
      {
        ATerm i_82 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_82));
        {
          i_82 = t;
          if(((h_82 != NULL) && (h_82 != i_82)))
            _fail(i_82);
          else
            h_82 = i_82;
        }
        t = not_null(h_82);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_71(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL;
  o_82 = t;
  n_82 :
  if(match_cons(o_82, sym__2))
    {
      p_82 = ATgetArgument(o_82, 0);
      q_82 = ATgetArgument(o_82, 1);
      t = SSL_table_get(not_null(p_82), not_null(q_82));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
  x_82 = t;
  w_82 :
  if(match_cons(x_82, sym__3))
    {
      y_82 = ATgetArgument(x_82, 0);
      z_82 = ATgetArgument(x_82, 1);
      a_83 = ATgetArgument(x_82, 2);
      {
        ATerm z_15;
        z_15 = t;
        {
          ATerm e_83 = NULL;
          ATerm f_83 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_82), not_null(z_82));
          {
            ATerm a_16 = t;
            int b_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_16);
              }
            else
              {
                t = a_16;
                t = (ATerm) ATempty;
              }
            {
              f_83 = t;
              if(((e_83 != NULL) && (e_83 != f_83)))
                _fail(f_83);
              else
                e_83 = f_83;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_82), not_null(z_82), (ATerm) ATinsert(CheckATermList(not_null(e_83)), not_null(a_83)));
            t = table_put_0(t);
          }
        }
        t = z_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_97 (ATerm))
{
  ATerm j_83 = NULL;
  ATerm k_83 = NULL;
  t = term_j_9;
  {
    t = n_97(t);
    {
      k_83 = t;
      if(((j_83 != NULL) && (j_83 != k_83)))
        _fail(k_83);
      else
        j_83 = k_83;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_15, term_g_15, not_null(j_83));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  p_83 :
  if(match_string(q_83, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_83) == AT_LIST) && !(ATisEmpty(q_83))))
        {
          r_83 = ATgetFirst((ATermList) q_83);
          s_83 = (ATerm) ATgetNext((ATermList) q_83);
          {
            ATerm v_83 = NULL;
            ATerm c_16;
            c_16 = t;
            {
              t = not_null(r_83);
              t = a_0(t);
            }
            t = c_16;
            {
              ATerm w_83 = NULL;
              t = term_j_9;
              {
                t = b_0(t);
                {
                  w_83 = t;
                  if(((v_83 != NULL) && (v_83 != w_83)))
                    _fail(w_83);
                  else
                    v_83 = w_83;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_83)), not_null(v_83));
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
  ATerm a_4 (ATerm t)
  {
    ATerm b_84 = NULL;
    b_84 = t;
    a_84 :
    if(!(match_string(b_84, "--help")))
      {
        if(!(match_string(b_84, "-h")))
          {
            if(!(match_string(b_84, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_d_16;
    {
      t = set_config_0(t);
      t = term_e_16;
    }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_f_16;
    return(t);
  }
  t = Option_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  d_84 :
  if(((ATgetType(e_84) == AT_LIST) && !(ATisEmpty(e_84))))
    {
      f_84 = ATgetFirst((ATermList) e_84);
      g_84 = (ATerm) ATgetNext((ATermList) e_84);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_84)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_84)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm))
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL;
  q_84 = t;
  p_84 :
  if(((ATgetType(q_84) == AT_LIST) && !(ATisEmpty(q_84))))
    {
      r_84 = ATgetFirst((ATermList) q_84);
      s_84 = (ATerm) ATgetNext((ATermList) q_84);
      {
        ATerm w_84 = NULL,a_85 = NULL;
        ATerm z_84 = NULL;
        t = SSLgetAnnotations(not_null(q_84));
        {
          z_84 = t;
          if(((w_84 != NULL) && (w_84 != z_84)))
            _fail(z_84);
          else
            w_84 = z_84;
        }
        {
          t = not_null(r_84);
          {
            ATerm c_85 = NULL;
            t = q_59(t);
            {
              a_85 = t;
              {
                t = not_null(s_84);
                {
                  ATerm e_85 = NULL;
                  t = r_59(t);
                  {
                    c_85 = t;
                    {
                      ATerm f_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_85)), not_null(a_85)), not_null(w_84));
                      {
                        f_85 = t;
                        if(((e_85 != NULL) && (e_85 != f_85)))
                          _fail(f_85);
                        else
                          e_85 = f_85;
                      }
                      t = not_null(e_85);
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
  ATerm p_85 = NULL;
  p_85 = t;
  o_85 :
  if(((ATgetType(p_85) == AT_LIST) && ATisEmpty(p_85)))
    {
      {
        ATerm r_85 = NULL,t_85 = NULL;
        ATerm g_16;
        g_16 = t;
        {
          ATerm s_85 = NULL;
          t = SSLgetAnnotations(not_null(p_85));
          {
            s_85 = t;
            if(((r_85 != NULL) && (r_85 != s_85)))
              _fail(s_85);
            else
              r_85 = s_85;
          }
        }
        t = g_16;
        {
          ATerm u_85 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_85));
          {
            u_85 = t;
            if(((t_85 != NULL) && (t_85 != u_85)))
              _fail(u_85);
            else
              t_85 = u_85;
          }
          t = not_null(t_85);
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
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
  a_86 = t;
  z_85 :
  if(match_cons(a_86, sym__2))
    {
      b_86 = ATgetArgument(a_86, 0);
      c_86 = ATgetArgument(a_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(b_86), not_null(c_86));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_97 (ATerm))
{
  ATerm h_16;
  h_16 = t;
  {
    ATerm d_4 (ATerm t)
    {
      t = term_i_16;
      t = l_97(t);
      return(t);
    }
    t = try_1(t, d_4);
  }
  t = h_16;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm k_86 = NULL;
      ATerm n_16;
      n_16 = t;
      {
        ATerm i_86 = NULL;
        ATerm j_86 = NULL;
        j_86 = t;
        if(((i_86 != NULL) && (i_86 != j_86)))
          _fail(j_86);
        else
          i_86 = j_86;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(i_86));
          t = set_config_0(t);
        }
      }
      t = n_16;
      {
        ATerm l_86 = NULL;
        l_86 = t;
        if(((k_86 != NULL) && (k_86 != l_86)))
          _fail(l_86);
        else
          k_86 = l_86;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_86));
      }
      return(t);
    }
    ATerm f_4 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(v_16);
            }
          else
            {
              t = t_16;
              {
                t = l_97(t);
                t = Cons_2(t, _id, f_4);
              }
            }
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_4, f_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  ATerm y_16;
  y_16 = t;
  {
    ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL;
    w_86 = t;
    s_86 :
    if(match_cons(w_86, sym__3))
      {
        x_86 = ATgetArgument(w_86, 0);
        y_86 = ATgetArgument(w_86, 1);
        z_86 = ATgetArgument(w_86, 2);
        {
          if(((t_86 != NULL) && (t_86 != x_86)))
            _fail(x_86);
          else
            t_86 = x_86;
          {
            if(((u_86 != NULL) && (u_86 != y_86)))
              _fail(y_86);
            else
              u_86 = y_86;
            {
              if(((v_86 != NULL) && (v_86 != z_86)))
                _fail(z_86);
              else
                v_86 = z_86;
              t = SSL_table_put(not_null(t_86), not_null(u_86), not_null(v_86));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm c_87 = NULL;
  ATerm z_16;
  z_16 = t;
  {
    t = term_a_17;
    t = table_put_0(t);
  }
  t = z_16;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm e_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_97(t);
          ;
          LocalPopChoice(g_17);
        }
      else
        {
          t = e_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_4);
    {
      ATerm h_4 (ATerm t)
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_17;
            l_17 = t;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_a_14;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = l_17;
            {
              t = system_usage_0(t);
              {
                t = term_w_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm i_4 (ATerm t)
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm d_87 = NULL;
                  d_87 = t;
                  if(((c_87 != NULL) && (c_87 != d_87)))
                    _fail(d_87);
                  else
                    c_87 = d_87;
                  return(t);
                }
                t = Undefined_1(t, j_4);
                return(t);
              }
              t = option_defined_1(t, i_4);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_87)), term_o_17));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_n_9;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_4);
      {
        ATerm p_17;
        p_17 = t;
        {
          t = term_f_15;
          t = table_destroy_0(t);
        }
        t = p_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm))
{
  t = parse_options_1(t, k_95);
  {
    t = store_options_0(t);
    {
      t = m_95(t);
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_95);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            {
              ATerm s_17 = t;
              int t_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_95(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(t_17);
                }
              else
                {
                  t = s_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_95(t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_94);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, k_4, b_95, c_95, l_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      ATerm w_17;
      w_17 = t;
      {
        ATerm g_87 = NULL;
        ATerm h_87 = NULL;
        t = term_j_13;
        {
          t = get_config_0(t);
          {
            h_87 = t;
            if(((g_87 != NULL) && (g_87 != h_87)))
              _fail(h_87);
            else
              g_87 = h_87;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATempty, not_null(g_87)));
          t = printnl_0(t);
        }
      }
      t = w_17;
      return(t);
    }
    t = if_verbose2_1(t, n_4);
    return(t);
  }
  t = iowrap_4(t, t_94, u_94, v_94, m_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_94 (ATerm), ATerm s_94 (ATerm))
{
  t = iowrap_3(t, r_94, s_94, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_94 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    t = _2(t, _id, o_94);
    return(t);
  }
  t = iowrap_2(t, o_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
