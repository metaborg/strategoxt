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
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Ins_1;
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
Symbol sym_Cong_2;
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
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
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
Symbol sym_PrimTS_3;
Symbol sym_PrimS_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
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
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
  ATprotectSymbol(sym_Ins_1);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
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
  sym_PrimTS_3 = ATmakeSymbol("PrimTS", 3, ATfalse);
  ATprotectSymbol(sym_PrimTS_3);
  sym_PrimS_2 = ATmakeSymbol("PrimS", 2, ATfalse);
  ATprotectSymbol(sym_PrimS_2);
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
  init_constant_terms();
}
ATerm term_y_21;
ATerm term_v_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_n_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_m_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_x_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_n_6;
ATerm term_h_6;
ATerm term_z_5;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Cong_2, term_u_5, (ATerm) ATempty);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Op_2, term_u_5, (ATerm) ATempty);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_x_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_x_8);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_x_8);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_s_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_x_8);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_x_8);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_m_16, term_x_8);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__3, term_s_17, term_w_17, (ATerm) ATempty);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0 (ATerm);
ATerm TrmOp_0 (ATerm);
ATerm TrmCons_0 (ATerm);
ATerm TrmNil_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm));
ATerm LstMetaVar_0 (ATerm);
ATerm TrmConc_0 (ATerm);
ATerm TrmAnno_0 (ATerm);
ATerm TrmFromStr_0 (ATerm);
ATerm TrmFromApp_0 (ATerm);
ATerm TrmFromTerm_0 (ATerm);
ATerm TrmStr_0 (ATerm);
ATerm TrmLMetaVar_0 (ATerm);
ATerm TrmMetaVar_0 (ATerm);
ATerm trm_explode_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm t_78 (ATerm));
ATerm MetaExplode_0 (ATerm);
ATerm _2 (ATerm, ATerm u_60 (ATerm), ATerm v_60 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_83 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_96 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm c_95 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_98 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_94 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_90 (ATerm), ATerm h_90 (ATerm));
ATerm input_file_0 (ATerm);
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
ATerm foldr_2 (ATerm, ATerm r_88 (ATerm), ATerm s_88 (ATerm));
ATerm crush_2 (ATerm, ATerm k_92 (ATerm), ATerm l_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_96 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_99 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_101 (ATerm));
ATerm map_1 (ATerm, ATerm s_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_101 (ATerm));
ATerm Program_1 (ATerm, ATerm j_68 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_83 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_100 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_75 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_101 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_62 (ATerm), ATerm e_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_101 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_101 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_98 (ATerm), ATerm m_98 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_98 (ATerm));
ATerm meta_explode_0 (ATerm);
ATerm main_0 (ATerm);
ATerm str_explode_0 (ATerm t)
{
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 = NULL,c_2 = NULL;
      b_2 = t;
      q_0 :
      if(match_cons(b_2, sym_meta_var_1))
        {
          c_2 = ATgetArgument(b_2, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_2)), (ATerm) ATempty);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      {
        ATerm c_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0(t);
            ;
            LocalPopChoice(h_5);
          }
        else
          {
            t = c_5;
            {
              ATerm p_5 = t;
              int q_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0(t);
                  ;
                  LocalPopChoice(q_5);
                }
              else
                {
                  t = p_5;
                  {
                    ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL;
                    ATerm a_3 (ATerm t)
                    {
                      ATerm o_2 = NULL,p_2 = NULL,v_2 = NULL;
                      ATerm r_5;
                      r_5 = t;
                      {
                        ATerm q_2 = NULL;
                        ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL;
                        t = not_null(g_2);
                        {
                          q_2 = t;
                          {
                            t = SSL_explode_term(not_null(q_2));
                            {
                              s_2 = t;
                              y_1 :
                              if(match_cons(s_2, sym__2))
                                {
                                  t_2 = ATgetArgument(s_2, 0);
                                  u_2 = ATgetArgument(s_2, 1);
                                  {
                                    if(((o_2 != NULL) && (o_2 != t_2)))
                                      _fail(t_2);
                                    else
                                      o_2 = t_2;
                                    if(((p_2 != NULL) && (p_2 != u_2)))
                                      _fail(u_2);
                                    else
                                      p_2 = u_2;
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
                      t = r_5;
                      {
                        ATerm w_2 = NULL;
                        t = not_null(p_2);
                        {
                          t = map_1(t, str_explode_0);
                          {
                            w_2 = t;
                            if(((v_2 != NULL) && (v_2 != w_2)))
                              _fail(w_2);
                            else
                              v_2 = w_2;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(o_2), not_null(v_2));
                      }
                      return(t);
                    }
                    g_2 = t;
                    a_2 :
                    if(((ATgetType(g_2) == AT_LIST) && ATisEmpty(g_2)))
                      {
                        {
                          ATerm s_5 = t;
                          int t_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_z_5;
                              ;
                              LocalPopChoice(t_5);
                            }
                          else
                            {
                              t = s_5;
                              t = a_3(t);
                            }
                        }
                      }
                    else
                      {
                        if(((ATgetType(g_2) == AT_LIST) && !(ATisEmpty(g_2))))
                          {
                            e_2 = ATgetFirst((ATermList) g_2);
                            f_2 = (ATerm) ATgetNext((ATermList) g_2);
                            {
                              ATerm a_6 = t;
                              int f_6 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_2 = NULL,l_2 = NULL;
                                  ATerm g_6;
                                  g_6 = t;
                                  {
                                    ATerm k_2 = NULL;
                                    t = not_null(e_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        k_2 = t;
                                        if(((j_2 != NULL) && (j_2 != k_2)))
                                          _fail(k_2);
                                        else
                                          j_2 = k_2;
                                      }
                                    }
                                  }
                                  t = g_6;
                                  {
                                    ATerm m_2 = NULL;
                                    t = not_null(f_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        m_2 = t;
                                        if(((l_2 != NULL) && (l_2 != m_2)))
                                          _fail(m_2);
                                        else
                                          l_2 = m_2;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Cong_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_2)), not_null(j_2)));
                                  }
                                  ;
                                  LocalPopChoice(f_6);
                                }
                              else
                                {
                                  t = a_6;
                                  t = a_3(t);
                                }
                            }
                          }
                        else
                          {
                            t = a_3(t);
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
ATerm TrmOp_0 (ATerm t)
{
  ATerm l_3 = NULL;
  ATerm n_3 = NULL,o_3 = NULL,u_3 = NULL;
  l_3 = t;
  {
    ATerm i_6;
    i_6 = t;
    {
      ATerm p_3 = NULL;
      ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
      t = not_null(l_3);
      {
        p_3 = t;
        {
          t = SSL_explode_term(not_null(p_3));
          {
            r_3 = t;
            j_3 :
            if(match_cons(r_3, sym__2))
              {
                s_3 = ATgetArgument(r_3, 0);
                t_3 = ATgetArgument(r_3, 1);
                {
                  if(((n_3 != NULL) && (n_3 != s_3)))
                    _fail(s_3);
                  else
                    n_3 = s_3;
                  if(((o_3 != NULL) && (o_3 != t_3)))
                    _fail(t_3);
                  else
                    o_3 = t_3;
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
    t = i_6;
    {
      ATerm v_3 = NULL;
      t = not_null(o_3);
      {
        t = map_1(t, trm_explode_0);
        {
          v_3 = t;
          if(((u_3 != NULL) && (u_3 != v_3)))
            _fail(v_3);
          else
            u_3 = v_3;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_3), not_null(u_3));
    }
  }
  return(t);
}
ATerm TrmCons_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(((ATgetType(e_4) == AT_LIST) && !(ATisEmpty(e_4))))
    {
      f_4 = ATgetFirst((ATermList) e_4);
      g_4 = (ATerm) ATgetNext((ATermList) e_4);
      {
        ATerm j_4 = NULL,l_4 = NULL;
        ATerm m_6;
        m_6 = t;
        {
          ATerm k_4 = NULL;
          t = not_null(f_4);
          {
            t = trm_explode_0(t);
            {
              k_4 = t;
              if(((j_4 != NULL) && (j_4 != k_4)))
                _fail(k_4);
              else
                j_4 = k_4;
            }
          }
        }
        t = m_6;
        {
          ATerm m_4 = NULL;
          t = not_null(g_4);
          {
            t = trm_explode_0(t);
            {
              m_4 = t;
              if(((l_4 != NULL) && (l_4 != m_4)))
                _fail(m_4);
              else
                l_4 = m_4;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Op_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_4)), not_null(j_4)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmNil_0 (ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  r_4 :
  if(((ATgetType(s_4) == AT_LIST) && ATisEmpty(s_4)))
    {
      t = term_n_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm b_5 = NULL;
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  b_5 = t;
  {
    ATerm g_5 = NULL;
    ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
    t = not_null(b_5);
    {
      g_5 = t;
      {
        t = SSL_explode_term(not_null(g_5));
        {
          i_5 = t;
          x_4 :
          if(match_cons(i_5, sym__2))
            {
              j_5 = ATgetArgument(i_5, 0);
              k_5 = ATgetArgument(i_5, 1);
              y_4 :
              if(match_string(j_5, ""))
                {
                  z_4 :
                  if(((ATgetType(k_5) == AT_LIST) && !(ATisEmpty(k_5))))
                    {
                      l_5 = ATgetFirst((ATermList) k_5);
                      m_5 = (ATerm) ATgetNext((ATermList) k_5);
                      a_5 :
                      if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
                        {
                          n_5 = ATgetFirst((ATermList) m_5);
                          o_5 = (ATerm) ATgetNext((ATermList) m_5);
                          {
                            if(((d_5 != NULL) && (d_5 != l_5)))
                              _fail(l_5);
                            else
                              d_5 = l_5;
                            {
                              if(((f_5 != NULL) && (f_5 != n_5)))
                                _fail(n_5);
                              else
                                f_5 = n_5;
                              if(((e_5 != NULL) && (e_5 != o_5)))
                                _fail(o_5);
                              else
                                e_5 = o_5;
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
    t = not_null(f_5);
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_88(t);
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
        ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
        w_5 = t;
        v_5 :
        if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
          {
            x_5 = ATgetFirst((ATermList) w_5);
            y_5 = (ATerm) ATgetNext((ATermList) w_5);
            {
              ATerm b_6 = NULL,d_6 = NULL;
              ATerm q_6;
              q_6 = t;
              {
                ATerm c_6 = NULL;
                t = not_null(x_5);
                {
                  t = v_88(t);
                  {
                    c_6 = t;
                    if(((b_6 != NULL) && (b_6 != c_6)))
                      _fail(c_6);
                    else
                      b_6 = c_6;
                  }
                }
              }
              t = q_6;
              {
                ATerm e_6 = NULL;
                t = not_null(y_5);
                {
                  t = foldr_3(t, t_88, u_88, v_88);
                  {
                    e_6 = t;
                    if(((d_6 != NULL) && (d_6 != e_6)))
                      _fail(e_6);
                    else
                      d_6 = e_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), not_null(d_6));
                  t = u_88(t);
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
ATerm LstMetaVar_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_meta_listvar_1))
    {
      l_6 = ATgetArgument(k_6, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(l_6)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmConc_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_Conc_2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      {
        t = not_null(u_6);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm y_6 = NULL;
            ATerm z_6 = NULL;
            t = LstMetaVar_0(t);
            {
              z_6 = t;
              if(((y_6 != NULL) && (y_6 != z_6)))
                _fail(z_6);
              else
                y_6 = z_6;
            }
            t = (ATerm) ATinsert(ATempty, not_null(y_6));
            return(t);
          }
          t = try_1(t, c_0);
          {
            ATerm e_0 (ATerm t)
            {
              t = not_null(v_6);
              {
                ATerm r_6 = t;
                int w_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TrmLMetaVar_0(t);
                    ;
                    LocalPopChoice(w_6);
                  }
                else
                  {
                    t = r_6;
                    t = trm_explode_0(t);
                  }
              }
              return(t);
            }
            ATerm f_0 (ATerm t)
            {
              ATerm a_7 = NULL,c_7 = NULL;
              ATerm x_6;
              x_6 = t;
              {
                ATerm b_7 = NULL;
                t = Fst_0(t);
                {
                  b_7 = t;
                  if(((a_7 != NULL) && (a_7 != b_7)))
                    _fail(b_7);
                  else
                    a_7 = b_7;
                }
              }
              t = x_6;
              {
                ATerm d_7 = NULL;
                t = Snd_0(t);
                {
                  d_7 = t;
                  if(((c_7 != NULL) && (c_7 != d_7)))
                    _fail(d_7);
                  else
                    c_7 = d_7;
                }
                t = (ATerm) ATmakeAppl(sym_Op_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_7)), not_null(a_7)));
              }
              return(t);
            }
            t = foldr_3(t, e_0, f_0, trm_explode_0);
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
ATerm TrmAnno_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_WithAnno_2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        ATerm r_7 = NULL,t_7 = NULL;
        ATerm e_7;
        e_7 = t;
        {
          ATerm s_7 = NULL;
          t = not_null(n_7);
          {
            t = trm_explode_0(t);
            {
              s_7 = t;
              if(((r_7 != NULL) && (r_7 != s_7)))
                _fail(s_7);
              else
                r_7 = s_7;
            }
          }
        }
        t = e_7;
        {
          ATerm u_7 = NULL;
          t = not_null(o_7);
          {
            t = MetaExplode_0(t);
            {
              u_7 = t;
              if(((t_7 != NULL) && (t_7 != u_7)))
                _fail(u_7);
              else
                t_7 = u_7;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(r_7), not_null(t_7));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmFromStr_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_FromStrategy_1))
    {
      b_8 = ATgetArgument(a_8, 0);
      {
        t = not_null(b_8);
        t = MetaExplode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmFromApp_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym_FromApp_1))
    {
      i_8 = ATgetArgument(h_8, 0);
      {
        ATerm k_8 = NULL;
        t = not_null(i_8);
        {
          ATerm l_8 = NULL;
          t = MetaExplode_0(t);
          {
            l_8 = t;
            if(((k_8 != NULL) && (k_8 != l_8)))
              _fail(l_8);
            else
              k_8 = l_8;
          }
          t = (ATerm) ATmakeAppl(sym_RootApp_1, not_null(k_8));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmFromTerm_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_FromTerm_1))
    {
      r_8 = ATgetArgument(q_8, 0);
      {
        t = not_null(r_8);
        t = MetaExplode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmStr_0 (ATerm t)
{
  ATerm v_8 = NULL;
  t = is_string_0(t);
  {
    ATerm w_8 = NULL;
    w_8 = t;
    if(((v_8 != NULL) && (v_8 != w_8)))
      _fail(w_8);
    else
      v_8 = w_8;
    t = (ATerm) ATmakeAppl(sym_Str_1, not_null(v_8));
  }
  return(t);
}
ATerm TrmLMetaVar_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_meta_listvar_1))
    {
      b_9 = ATgetArgument(a_9, 0);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, term_n_6), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(b_9)))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmMetaVar_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_meta_var_1))
    {
      h_9 = ATgetArgument(g_9, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm trm_explode_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TrmMetaVar_0(t);
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
            t = TrmLMetaVar_0(t);
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
                  t = TrmStr_0(t);
                  ;
                  LocalPopChoice(k_7);
                }
              else
                {
                  t = j_7;
                  {
                    ATerm p_7 = t;
                    int q_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0(t);
                        ;
                        LocalPopChoice(q_7);
                      }
                    else
                      {
                        t = p_7;
                        {
                          ATerm v_7 = t;
                          int w_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromApp_0(t);
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
                                    t = TrmFromStr_0(t);
                                    ;
                                    LocalPopChoice(y_7);
                                  }
                                else
                                  {
                                    t = x_7;
                                    {
                                      ATerm c_8 = t;
                                      int d_8 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmAnno_0(t);
                                          ;
                                          LocalPopChoice(d_8);
                                        }
                                      else
                                        {
                                          t = c_8;
                                          {
                                            ATerm e_8 = t;
                                            int f_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TrmConc_0(t);
                                                ;
                                                LocalPopChoice(f_8);
                                              }
                                            else
                                              {
                                                t = e_8;
                                                {
                                                  ATerm j_8 = t;
                                                  int m_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmNil_0(t);
                                                      ;
                                                      LocalPopChoice(m_8);
                                                    }
                                                  else
                                                    {
                                                      t = j_8;
                                                      {
                                                        ATerm n_8 = t;
                                                        int o_8 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = TrmCons_0(t);
                                                            ;
                                                            LocalPopChoice(o_8);
                                                          }
                                                        else
                                                          {
                                                            t = n_8;
                                                            t = TrmOp_0(t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm alltd_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm k_9 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_78(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = _all(t, k_9);
      }
    return(t);
  }
  t = k_9(t);
  return(t);
}
ATerm MetaExplode_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm q_9 = NULL,r_9 = NULL;
    q_9 = t;
    p_9 :
    if(match_cons(q_9, sym_ToTerm_1))
      {
        r_9 = ATgetArgument(q_9, 0);
        {
          t = not_null(r_9);
          t = trm_explode_0(t);
        }
      }
    else
      {
        if(match_cons(q_9, sym_ToBuild_1))
          {
            r_9 = ATgetArgument(q_9, 0);
            {
              ATerm u_9 = NULL;
              t = not_null(r_9);
              {
                ATerm v_9 = NULL;
                t = trm_explode_0(t);
                {
                  v_9 = t;
                  if(((u_9 != NULL) && (u_9 != v_9)))
                    _fail(v_9);
                  else
                    u_9 = v_9;
                }
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_9));
              }
            }
          }
        else
          {
            if(match_cons(q_9, sym_ToStrategy_1))
              {
                r_9 = ATgetArgument(q_9, 0);
                {
                  t = not_null(r_9);
                  t = str_explode_0(t);
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
  t = alltd_1(t, h_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm u_60 (ATerm), ATerm v_60 (ATerm))
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      {
        ATerm n_10 = NULL,p_10 = NULL;
        ATerm o_10 = NULL;
        t = SSLgetAnnotations(not_null(h_10));
        {
          o_10 = t;
          if(((n_10 != NULL) && (n_10 != o_10)))
            _fail(o_10);
          else
            n_10 = o_10;
        }
        {
          t = not_null(i_10);
          {
            ATerm r_10 = NULL;
            t = u_60(t);
            {
              p_10 = t;
              {
                t = not_null(j_10);
                {
                  ATerm t_10 = NULL;
                  t = v_60(t);
                  {
                    r_10 = t;
                    {
                      ATerm u_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_10), not_null(r_10)), not_null(n_10));
                      {
                        u_10 = t;
                        if(((t_10 != NULL) && (t_10 != u_10)))
                          _fail(u_10);
                        else
                          t_10 = u_10;
                      }
                      t = not_null(t_10);
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
  ATerm u_8;
  u_8 = t;
  {
    ATerm b_11 = NULL;
    ATerm c_11 = NULL;
    t = term_x_8;
    {
      t = whoami_0(t);
      {
        c_11 = t;
        if(((b_11 != NULL) && (b_11 != c_11)))
          _fail(c_11);
        else
          b_11 = c_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_9), not_null(b_11)), term_c_9));
      {
        t = printnl_0(t);
        {
          t = term_e_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym__2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      {
        ATerm i_9;
        i_9 = t;
        t = SSL_printnl(not_null(h_11), not_null(i_11));
        t = i_9;
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
  ATerm n_11 = NULL;
  n_11 = t;
  t = SSL_implode_string(not_null(n_11));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = j_9;
      {
        ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
        s_11 = t;
        r_11 :
        if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
          {
            t_11 = ATgetFirst((ATermList) s_11);
            u_11 = (ATerm) ATgetNext((ATermList) s_11);
            {
              t = not_null(t_11);
              {
                ATerm m_0 (ATerm t)
                {
                  t = not_null(u_11);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_0);
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
  ATerm e_12 = NULL;
  ATerm g_12 = NULL;
  e_12 = t;
  {
    ATerm h_12 = NULL;
    ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
    t = not_null(e_12);
    {
      h_12 = t;
      {
        t = SSL_explode_term(not_null(h_12));
        {
          j_12 = t;
          c_12 :
          if(match_cons(j_12, sym__2))
            {
              k_12 = ATgetArgument(j_12, 0);
              l_12 = ATgetArgument(j_12, 1);
              d_12 :
              if(match_string(k_12, ""))
                {
                  if(((g_12 != NULL) && (g_12 != l_12)))
                    _fail(l_12);
                  else
                    g_12 = l_12;
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
      t = not_null(g_12);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_83 (ATerm))
{
  ATerm p_12 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_12);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          t = Nil_0(t);
          t = h_83(t);
        }
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym__2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        t = not_null(t_12);
        {
          ATerm n_0 (ATerm t)
          {
            t = not_null(u_12);
            return(t);
          }
          t = at_end_1(t, n_0);
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
  ATerm o_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = o_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  t = SSL_explode_string(not_null(z_12));
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
  ATerm t_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = t_9;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_0);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
              i_13 = t;
              h_13 :
              if(match_cons(i_13, sym_Path_1))
                {
                  j_13 = ATgetArgument(i_13, 0);
                  t = not_null(j_13);
                }
              else
                {
                  if(match_cons(i_13, sym_Var_1))
                    {
                      j_13 = ATgetArgument(i_13, 0);
                      {
                        t = not_null(j_13);
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
                                ATerm p_0 (ATerm t)
                                {
                                  t = term_b_10;
                                  return(t);
                                }
                                t = debug_1(t, p_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_13, sym_Prefix_2))
                        {
                          j_13 = ATgetArgument(i_13, 0);
                          k_13 = ATgetArgument(i_13, 1);
                          {
                            ATerm p_13 = NULL,r_13 = NULL;
                            ATerm c_10;
                            c_10 = t;
                            {
                              ATerm q_13 = NULL;
                              t = not_null(j_13);
                              {
                                t = eval_config_0(t);
                                {
                                  q_13 = t;
                                  if(((p_13 != NULL) && (p_13 != q_13)))
                                    _fail(q_13);
                                  else
                                    p_13 = q_13;
                                }
                              }
                            }
                            t = c_10;
                            {
                              ATerm s_13 = NULL;
                              t = not_null(k_13);
                              {
                                t = eval_config_0(t);
                                {
                                  s_13 = t;
                                  if(((r_13 != NULL) && (r_13 != s_13)))
                                    _fail(s_13);
                                  else
                                    r_13 = s_13;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(r_13));
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
  ATerm a_14 = NULL;
  a_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(a_14));
    {
      t = table_get_0(t);
      {
        ATerm r_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_10;
            e_10 = t;
            {
              ATerm c_14 = NULL;
              ATerm d_14 = NULL;
              d_14 = t;
              if(((c_14 != NULL) && (c_14 != d_14)))
                _fail(d_14);
              else
                c_14 = d_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(a_14), not_null(c_14));
                t = table_put_0(t);
              }
            }
            t = e_10;
          }
          return(t);
        }
        t = try_1(t, r_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_96 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm h_14 = NULL;
      ATerm i_14 = NULL;
      t = term_k_10;
      {
        t = get_config_0(t);
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_14), term_l_10);
        t = geq_0(t);
      }
    }
    t = f_10;
    t = g_96(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  o_14 = t;
  m_14 :
  if(match_cons(o_14, sym__2))
    {
      p_14 = ATgetArgument(o_14, 0);
      q_14 = ATgetArgument(o_14, 1);
      n_14 :
      if(match_cons(q_14, sym_Stream_1))
        {
          r_14 = ATgetArgument(q_14, 0);
          {
            ATerm u_14 = NULL;
            t = SSL_fputc(not_null(p_14), not_null(r_14));
            {
              ATerm v_14 = NULL;
              v_14 = t;
              if(((u_14 != NULL) && (u_14 != v_14)))
                _fail(v_14);
              else
                u_14 = v_14;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_14));
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  c_15 = t;
  a_15 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      f_15 = ATgetArgument(c_15, 1);
      b_15 :
      if(match_cons(d_15, sym_Stream_1))
        {
          e_15 = ATgetArgument(d_15, 0);
          {
            ATerm i_15 = NULL;
            t = SSL_write_term_to_stream_text(not_null(e_15), not_null(f_15));
            {
              ATerm j_15 = NULL;
              j_15 = t;
              if(((i_15 != NULL) && (i_15 != j_15)))
                _fail(j_15);
              else
                i_15 = j_15;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_15));
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
  ATerm t_0 (ATerm t)
  {
    ATerm n_15 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm o_15 = NULL;
      o_15 = t;
      if(((n_15 != NULL) && (n_15 != o_15)))
        _fail(o_15);
      else
        n_15 = o_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(n_15));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, t_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  u_15 = t;
  s_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      x_15 = ATgetArgument(u_15, 1);
      t_15 :
      if(match_cons(v_15, sym_Stream_1))
        {
          w_15 = ATgetArgument(v_15, 0);
          {
            ATerm a_16 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(w_15), not_null(x_15));
            {
              ATerm b_16 = NULL;
              b_16 = t;
              if(((a_16 != NULL) && (a_16 != b_16)))
                _fail(b_16);
              else
                a_16 = b_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_16));
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
ATerm WriteToFile_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      {
        ATerm n_16 = NULL,p_16 = NULL;
        t = not_null(j_16);
        {
          ATerm o_16 = NULL;
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), term_q_10);
            {
              t = open_stream_0(t);
              {
                ATerm q_16 = NULL;
                q_16 = t;
                if(((p_16 != NULL) && (p_16 != q_16)))
                  _fail(q_16);
                else
                  p_16 = q_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(k_16));
                  {
                    t = c_95(t);
                    {
                      t = fclose_0(t);
                      t = not_null(k_16);
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
  ATerm y_16 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_10 = t;
      int w_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            ATerm z_16 = NULL,a_17 = NULL;
            z_16 = t;
            v_16 :
            if(match_cons(z_16, sym_Output_1))
              {
                a_17 = ATgetArgument(z_16, 0);
                if(((y_16 != NULL) && (y_16 != a_17)))
                  _fail(a_17);
                else
                  y_16 = a_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_0);
          ;
          LocalPopChoice(w_10);
        }
      else
        {
          t = v_10;
          {
            ATerm b_17 = NULL;
            t = term_x_10;
            {
              b_17 = t;
              if(((y_16 != NULL) && (y_16 != b_17)))
                _fail(b_17);
              else
                y_16 = b_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_0, _id);
  }
  t = s_10;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        t = not_null(y_16);
        return(t);
      }
      t = split_2(t, x_0, _id);
      return(t);
    }
    t = _2(t, _id, w_0);
    {
      ATerm y_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm c_17 = NULL;
              c_17 = t;
              x_16 :
              if(!(match_cons(c_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_0);
            return(t);
          }
          t = _2(t, y_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(z_10);
        }
      else
        {
          t = y_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm i_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  ATerm a_11;
  a_11 = t;
  t = dtime_0(t);
  t = a_11;
  {
    t = e_98(t);
    {
      ATerm d_11;
      d_11 = t;
      {
        ATerm j_17 = NULL;
        t = dtime_0(t);
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
      }
      t = d_11;
      {
        k_17 = t;
        h_17 :
        if(match_cons(k_17, sym__2))
          {
            l_17 = ATgetArgument(k_17, 0);
            m_17 = ATgetArgument(k_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_17))), not_null(m_17));
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
  ATerm u_17 = NULL,v_17 = NULL;
  ATerm b_18 (ATerm t)
  {
    t = SSL_fclose(not_null(v_17));
    return(t);
  }
  v_17 = t;
  t_17 :
  if(match_cons(v_17, sym_Stream_1))
    {
      u_17 = ATgetArgument(v_17, 0);
      {
        ATerm e_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(u_17));
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = e_11;
            t = b_18(t);
          }
      }
    }
  else
    {
      t = b_18(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_Stream_1))
    {
      f_18 = ATgetArgument(e_18, 0);
      t = SSL_read_term_from_stream(not_null(f_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_94 (ATerm))
{
  ATerm k_11;
  k_11 = t;
  {
    ATerm k_18 = NULL,m_18 = NULL;
    ATerm l_11;
    l_11 = t;
    {
      ATerm l_18 = NULL;
      t = o_94(t);
      {
        l_18 = t;
        if(((k_18 != NULL) && (k_18 != l_18)))
          _fail(l_18);
        else
          k_18 = l_18;
      }
    }
    t = l_11;
    {
      ATerm n_18 = NULL;
      n_18 = t;
      if(((m_18 != NULL) && (m_18 != n_18)))
        _fail(n_18);
      else
        m_18 = n_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_18)), not_null(k_18)));
        t = printnl_0(t);
      }
    }
  }
  t = k_11;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym__2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      {
        ATerm y_18 = NULL;
        t = SSL_fopen(not_null(u_18), not_null(v_18));
        {
          ATerm z_18 = NULL;
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_18));
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
  ATerm d_19 = NULL;
  d_19 = t;
  t = SSL_is_string(not_null(d_19));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_19 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_19 = NULL;
    i_19 = t;
    if(((h_19 != NULL) && (h_19 != i_19)))
      _fail(i_19);
    else
      h_19 = i_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_19));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_19 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_19 = NULL;
    m_19 = t;
    if(((l_19 != NULL) && (l_19 != m_19)))
      _fail(m_19);
    else
      l_19 = m_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_19));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_19 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_19 = NULL;
    q_19 = t;
    if(((p_19 != NULL) && (p_19 != q_19)))
      _fail(q_19);
    else
      p_19 = q_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_19));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(w_19, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(w_19, sym_stdin_0))
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
  ATerm g_20 = NULL;
  ATerm i_20 = NULL,j_20 = NULL;
  g_20 = t;
  {
    ATerm k_20 = NULL;
    ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
    t = not_null(g_20);
    {
      k_20 = t;
      {
        t = SSL_explode_term(not_null(k_20));
        {
          m_20 = t;
          d_20 :
          if(match_cons(m_20, sym__2))
            {
              n_20 = ATgetArgument(m_20, 0);
              o_20 = ATgetArgument(m_20, 1);
              e_20 :
              if(match_string(n_20, ""))
                {
                  f_20 :
                  if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
                    {
                      p_20 = ATgetFirst((ATermList) o_20);
                      q_20 = (ATerm) ATgetNext((ATermList) o_20);
                      {
                        if(((j_20 != NULL) && (j_20 != p_20)))
                          _fail(p_20);
                        else
                          j_20 = p_20;
                        if(((i_20 != NULL) && (i_20 != q_20)))
                          _fail(q_20);
                        else
                          i_20 = q_20;
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
    t = not_null(j_20);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym__2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        ATerm m_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = m_11;
            {
              ATerm p_11 = t;
              int q_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_1 (ATerm t)
                  {
                    ATerm b_21 = NULL,c_21 = NULL;
                    b_21 = t;
                    w_20 :
                    if(match_cons(b_21, sym_Path_1))
                      {
                        c_21 = ATgetArgument(b_21, 0);
                        t = not_null(c_21);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, a_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(q_11);
                }
              else
                {
                  t = p_11;
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
  ATerm k_21 = NULL;
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      ATerm j_21 = NULL;
      j_21 = t;
      if(((i_21 != NULL) && (i_21 != j_21)))
        _fail(j_21);
      else
        i_21 = j_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), term_x_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm b_1 (ATerm t)
        {
          t = term_y_11;
          return(t);
        }
        t = debug_1(t, b_1);
        _fail(t);
      }
    }
  {
    ATerm z_11;
    z_11 = t;
    {
      ATerm l_21 = NULL;
      t = read_from_stream_0(t);
      {
        l_21 = t;
        if(((k_21 != NULL) && (k_21 != l_21)))
          _fail(l_21);
        else
          k_21 = l_21;
      }
    }
    t = z_11;
    {
      t = fclose_0(t);
      t = not_null(k_21);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_90 (ATerm), ATerm h_90 (ATerm))
{
  ATerm q_21 = NULL,s_21 = NULL;
  ATerm a_12;
  a_12 = t;
  {
    ATerm r_21 = NULL;
    t = g_90(t);
    {
      r_21 = t;
      if(((q_21 != NULL) && (q_21 != r_21)))
        _fail(r_21);
      else
        q_21 = r_21;
    }
  }
  t = a_12;
  {
    ATerm t_21 = NULL;
    t = h_90(t);
    {
      t_21 = t;
      if(((s_21 != NULL) && (s_21 != t_21)))
        _fail(t_21);
      else
        s_21 = t_21;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), not_null(s_21));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_21 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm f_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 (ATerm t)
        {
          ATerm a_22 = NULL,b_22 = NULL;
          a_22 = t;
          x_21 :
          if(match_cons(a_22, sym_Input_1))
            {
              b_22 = ATgetArgument(a_22, 0);
              if(((z_21 != NULL) && (z_21 != b_22)))
                _fail(b_22);
              else
                z_21 = b_22;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_1);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = f_12;
        {
          ATerm c_22 = NULL;
          t = term_m_12;
          {
            c_22 = t;
            if(((z_21 != NULL) && (z_21 != c_22)))
              _fail(c_22);
            else
              z_21 = c_22;
          }
        }
      }
  }
  t = b_12;
  {
    ATerm d_1 (ATerm t)
    {
      t = not_null(z_21);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm h_22 = NULL;
    h_22 = t;
    f_22 :
    if(!(match_string(h_22, "-k")))
      {
        if(!(match_string(h_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm n_12;
    n_12 = t;
    {
      ATerm i_22 = NULL;
      ATerm j_22 = NULL;
      t = string_to_int_0(t);
      {
        j_22 = t;
        if(((i_22 != NULL) && (i_22 != j_22)))
          _fail(j_22);
        else
          i_22 = j_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_12, not_null(i_22));
        t = set_config_0(t);
      }
    }
    t = n_12;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = term_q_12;
    return(t);
  }
  t = ArgOption_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  t = SSL_string_to_int(not_null(m_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm u_22 = NULL;
        u_22 = t;
        p_22 :
        if(!(match_string(u_22, "-S")))
          {
            if(!(match_string(u_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        t = term_y_12;
        t = set_config_0(t);
        t = term_a_13;
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_b_13;
        return(t);
      }
      t = Option_3(t, h_1, i_1, j_1);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm v_22 = NULL;
              v_22 = t;
              q_22 :
              if(!(match_string(v_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              ATerm y_22 = NULL;
              ATerm e_13;
              e_13 = t;
              {
                ATerm w_22 = NULL;
                ATerm x_22 = NULL;
                t = string_to_int_0(t);
                {
                  x_22 = t;
                  if(((w_22 != NULL) && (w_22 != x_22)))
                    _fail(x_22);
                  else
                    w_22 = x_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(w_22));
                  t = set_config_0(t);
                }
              }
              t = e_13;
              {
                ATerm z_22 = NULL;
                z_22 = t;
                if(((y_22 != NULL) && (y_22 != z_22)))
                  _fail(z_22);
                else
                  y_22 = z_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_22));
              }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              t = term_f_13;
              return(t);
            }
            t = ArgOption_3(t, k_1, l_1, m_1);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            {
              ATerm n_1 (ATerm t)
              {
                ATerm a_23 = NULL;
                a_23 = t;
                t_22 :
                if(!(match_string(a_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                t = term_l_13;
                t = set_config_0(t);
                t = term_m_13;
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                t = term_n_13;
                return(t);
              }
              t = Option_3(t, n_1, o_1, p_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = o_13;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm g_23 = NULL;
    g_23 = t;
    d_23 :
    if(!(match_string(g_23, "-o")))
      {
        if(!(match_string(g_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm j_23 = NULL;
    ATerm u_13;
    u_13 = t;
    {
      ATerm h_23 = NULL;
      ATerm i_23 = NULL;
      i_23 = t;
      if(((h_23 != NULL) && (h_23 != i_23)))
        _fail(i_23);
      else
        h_23 = i_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_13, not_null(h_23));
        t = set_config_0(t);
      }
    }
    t = u_13;
    {
      ATerm k_23 = NULL;
      k_23 = t;
      if(((j_23 != NULL) && (j_23 != k_23)))
        _fail(k_23);
      else
        j_23 = k_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_23));
    }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_w_13;
    return(t);
  }
  t = ArgOption_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm t_1 (ATerm t)
        {
          ATerm o_23 = NULL;
          o_23 = t;
          n_23 :
          if(!(match_string(o_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_1 (ATerm t)
        {
          t = term_b_14;
          t = set_config_0(t);
          t = term_e_14;
          return(t);
        }
        ATerm v_1 (ATerm t)
        {
          t = term_f_14;
          return(t);
        }
        t = Option_3(t, t_1, u_1, v_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  u_23 = t;
  s_23 :
  if(match_string(u_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
        {
          v_23 = ATgetFirst((ATermList) u_23);
          w_23 = (ATerm) ATgetNext((ATermList) u_23);
          t_23 :
          if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
            {
              x_23 = ATgetFirst((ATermList) w_23);
              y_23 = (ATerm) ATgetNext((ATermList) w_23);
              {
                ATerm c_24 = NULL;
                ATerm g_14;
                g_14 = t;
                {
                  t = not_null(v_23);
                  t = j_0(t);
                }
                t = g_14;
                {
                  ATerm d_24 = NULL;
                  t = not_null(x_23);
                  {
                    t = k_0(t);
                    {
                      d_24 = t;
                      if(((c_24 != NULL) && (c_24 != d_24)))
                        _fail(d_24);
                      else
                        c_24 = d_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_23)), not_null(c_24));
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
  ATerm w_1 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    h_24 :
    if(!(match_string(k_24, "-i")))
      {
        if(!(match_string(k_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm n_24 = NULL;
    ATerm j_14;
    j_14 = t;
    {
      ATerm l_24 = NULL;
      ATerm m_24 = NULL;
      m_24 = t;
      if(((l_24 != NULL) && (l_24 != m_24)))
        _fail(m_24);
      else
        l_24 = m_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(l_24));
        t = set_config_0(t);
      }
    }
    t = j_14;
    {
      ATerm o_24 = NULL;
      o_24 = t;
      if(((n_24 != NULL) && (n_24 != o_24)))
        _fail(o_24);
      else
        n_24 = o_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_24));
    }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_l_14;
    return(t);
  }
  t = ArgOption_3(t, w_1, x_1, z_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm s_24 = NULL;
  t = report_run_time_0(t);
  {
    ATerm t_24 = NULL;
    t = term_x_8;
    {
      t = whoami_0(t);
      {
        t_24 = t;
        if(((s_24 != NULL) && (s_24 != t_24)))
          _fail(t_24);
        else
          s_24 = t_24;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, term_y_14), not_null(s_24)));
      {
        t = printnl_0(t);
        {
          t = term_e_9;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_z_14;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = SSL_TicksToSeconds(not_null(w_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_25), not_null(d_25));
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = SSL_addr(not_null(c_25), not_null(d_25));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_88 (ATerm), ATerm s_88 (ATerm))
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_88(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
        k_25 = t;
        j_25 :
        if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
          {
            l_25 = ATgetFirst((ATermList) k_25);
            m_25 = (ATerm) ATgetNext((ATermList) k_25);
            {
              ATerm p_25 = NULL;
              ATerm q_25 = NULL;
              t = not_null(m_25);
              {
                t = foldr_2(t, r_88, s_88);
                {
                  q_25 = t;
                  if(((p_25 != NULL) && (p_25 != q_25)))
                    _fail(q_25);
                  else
                    p_25 = q_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_25), not_null(p_25));
                t = s_88(t);
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
ATerm crush_2 (ATerm t, ATerm k_92 (ATerm), ATerm l_92 (ATerm))
{
  ATerm x_25 = NULL;
  ATerm z_25 = NULL;
  x_25 = t;
  {
    ATerm a_26 = NULL;
    ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
    t = not_null(x_25);
    {
      a_26 = t;
      {
        t = SSL_explode_term(not_null(a_26));
        {
          c_26 = t;
          w_25 :
          if(match_cons(c_26, sym__2))
            {
              d_26 = ATgetArgument(c_26, 0);
              e_26 = ATgetArgument(c_26, 1);
              if(((z_25 != NULL) && (z_25 != e_26)))
                _fail(e_26);
              else
                z_25 = e_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_25);
      t = foldr_2(t, k_92, l_92);
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
    ATerm d_2 (ATerm t)
    {
      t = term_x_12;
      return(t);
    }
    t = crush_2(t, d_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,c_27 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym__2))
    {
      l_26 = ATgetArgument(k_26, 0);
      c_27 = ATgetArgument(k_26, 1);
      {
        ATerm m_15;
        m_15 = t;
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_26), not_null(c_27));
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              t = SSL_gtr(not_null(l_26), not_null(c_27));
            }
        }
        t = m_15;
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
  ATerm i_27 = NULL;
  ATerm r_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
      j_27 = t;
      h_27 :
      if(match_cons(j_27, sym__2))
        {
          k_27 = ATgetArgument(j_27, 0);
          l_27 = ATgetArgument(j_27, 1);
          {
            if(((i_27 != NULL) && (i_27 != k_27)))
              _fail(k_27);
            else
              i_27 = k_27;
            if(((i_27 != NULL) && (i_27 != l_27)))
              _fail(l_27);
            else
              i_27 = l_27;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = r_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_96 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm z_15;
    z_15 = t;
    {
      ATerm o_27 = NULL;
      ATerm p_27 = NULL;
      t = term_k_10;
      {
        t = get_config_0(t);
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_27), term_e_9);
        t = geq_0(t);
      }
    }
    t = z_15;
    t = f_96(t);
    return(t);
  }
  t = try_1(t, h_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm t_27 = NULL,v_27 = NULL;
    ATerm c_16;
    c_16 = t;
    {
      ATerm u_27 = NULL;
      t = run_time_0(t);
      {
        u_27 = t;
        if(((t_27 != NULL) && (t_27 != u_27)))
          _fail(u_27);
        else
          t_27 = u_27;
      }
    }
    t = c_16;
    {
      ATerm w_27 = NULL;
      t = term_x_8;
      {
        t = whoami_0(t);
        {
          w_27 = t;
          if(((v_27 != NULL) && (v_27 != w_27)))
            _fail(w_27);
          else
            v_27 = w_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_16), not_null(t_27)), term_d_16), not_null(v_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_x_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  c_28 :
  if(match_cons(d_28, sym_Version_0))
    {
      ATerm f_28 = NULL,h_28 = NULL;
      ATerm f_16;
      f_16 = t;
      {
        ATerm g_28 = NULL;
        t = SSLgetAnnotations(not_null(d_28));
        {
          g_28 = t;
          if(((f_28 != NULL) && (f_28 != g_28)))
            _fail(g_28);
          else
            f_28 = g_28;
        }
      }
      t = f_16;
      {
        ATerm i_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_28));
        {
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
        }
        t = not_null(h_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_99 (ATerm))
{
  ATerm g_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_16;
      t = get_config_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = g_16;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              {
                ATerm t_16 = t;
                int u_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(u_16);
                  }
                else
                  {
                    t = t_16;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, n_2);
      }
    }
  t = c_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_table_create(not_null(s_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  {
    ATerm w_16;
    w_16 = t;
    {
      t = term_d_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_17, term_e_17, not_null(w_28));
          t = table_put_0(t);
        }
      }
    }
    t = w_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_table_destroy(not_null(a_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_exit(not_null(e_29));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_82 (ATerm))
{
  ATerm k_29 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = Cons_2(t, s_82, k_29);
      }
    return(t);
  }
  t = k_29(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t_29 = t;
  q_29 :
  if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
    {
      r_29 = ATgetFirst((ATermList) t_29);
      s_29 = (ATerm) ATgetNext((ATermList) t_29);
      {
        ATerm w_29 = NULL;
        t = not_null(s_29);
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm x_29 = NULL,z_29 = NULL,b_30 = NULL;
            ATerm o_17;
            o_17 = t;
            {
              ATerm y_29 = NULL;
              t = i_0(t);
              {
                y_29 = t;
                if(((x_29 != NULL) && (x_29 != y_29)))
                  _fail(y_29);
                else
                  x_29 = y_29;
              }
            }
            t = o_17;
            {
              ATerm a_30 = NULL;
              t = not_null(r_29);
              {
                t = g_0(t);
                {
                  a_30 = t;
                  if(((z_29 != NULL) && (z_29 != a_30)))
                    _fail(a_30);
                  else
                    z_29 = a_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_29)), not_null(z_29));
                {
                  b_30 = t;
                  if(((w_29 != NULL) && (w_29 != b_30)))
                    _fail(b_30);
                  else
                    w_29 = b_30;
                }
              }
            }
          }
          t = n_17;
          {
            ATerm r_2 (ATerm t)
            {
              t = not_null(w_29);
              return(t);
            }
            t = reverse_acc_2(t, g_0, r_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_29) == AT_LIST) && ATisEmpty(t_29)))
        {
          {
            t = term_x_8;
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
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm m_30 = NULL,n_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym_Program_1))
    {
      n_30 = ATgetArgument(m_30, 0);
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
            t = j_68(t);
            {
              s_30 = t;
              {
                ATerm v_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_30)), not_null(q_30));
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
  ATerm e_31 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_31 = NULL;
      t = term_z_14;
      {
        t = get_config_0(t);
        {
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
        }
      }
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm g_31 = NULL;
            g_31 = t;
            if(((e_31 != NULL) && (e_31 != g_31)))
              _fail(g_31);
            else
              e_31 = g_31;
            return(t);
          }
          t = Program_1(t, z_2);
          return(t);
        }
        t = option_defined_1(t, y_2);
      }
    }
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = not_null(e_31);
        return(t);
      }
      t = short_description_1(t, c_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_3);
    {
      t = term_r_17;
      {
        t = echo_0(t);
        {
          t = term_x_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm h_31 = NULL;
                  ATerm i_31 = NULL;
                  i_31 = t;
                  if(((h_31 != NULL) && (h_31 != i_31)))
                    _fail(i_31);
                  else
                    h_31 = i_31;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_31)), term_y_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_3);
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm j_31 = NULL;
                    ATerm k_31 = NULL;
                    ATerm f_3 (ATerm t)
                    {
                      t = not_null(e_31);
                      return(t);
                    }
                    t = long_description_1(t, f_3);
                    {
                      k_31 = t;
                      if(((j_31 != NULL) && (j_31 != k_31)))
                        _fail(k_31);
                      else
                        j_31 = k_31;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_31)), term_z_17);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_3);
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
  ATerm a_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = a_18;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_68 (ATerm))
{
  ATerm u_31 = NULL,v_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym_Undefined_1))
    {
      v_31 = ATgetArgument(u_31, 0);
      {
        ATerm y_31 = NULL,a_32 = NULL;
        ATerm z_31 = NULL;
        t = SSLgetAnnotations(not_null(u_31));
        {
          z_31 = t;
          if(((y_31 != NULL) && (y_31 != z_31)))
            _fail(z_31);
          else
            y_31 = z_31;
        }
        {
          t = not_null(v_31);
          {
            ATerm c_32 = NULL;
            t = k_68(t);
            {
              a_32 = t;
              {
                ATerm d_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_32)), not_null(y_31));
                {
                  d_32 = t;
                  if(((c_32 != NULL) && (c_32 != d_32)))
                    _fail(d_32);
                  else
                    c_32 = d_32;
                }
                t = not_null(c_32);
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
ATerm fetch_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm i_32 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_83, _id);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = Cons_2(t, _id, i_32);
      }
    return(t);
  }
  t = i_32(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_100 (ATerm))
{
  t = fetch_1(t, c_100);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  j_32 :
  if(((ATgetType(k_32) == AT_LIST) && ATisEmpty(k_32)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
        {
          l_32 = ATgetFirst((ATermList) k_32);
          m_32 = (ATerm) ATgetNext((ATermList) k_32);
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
  ATerm i_18;
  i_18 = t;
  {
    ATerm p_32 = NULL;
    ATerm s_32 = NULL;
    ATerm j_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = j_18;
        {
          ATerm q_32 = NULL;
          ATerm r_32 = NULL;
          r_32 = t;
          if(((q_32 != NULL) && (q_32 != r_32)))
            _fail(r_32);
          else
            q_32 = r_32;
          t = (ATerm) ATinsert(ATempty, not_null(q_32));
        }
      }
    {
      s_32 = t;
      if(((p_32 != NULL) && (p_32 != s_32)))
        _fail(s_32);
      else
        p_32 = s_32;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(p_32));
      t = printnl_0(t);
    }
  }
  t = i_18;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_z_14;
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
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_32 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_Help_0))
    {
      ATerm b_33 = NULL,d_33 = NULL;
      ATerm r_18;
      r_18 = t;
      {
        ATerm c_33 = NULL;
        t = SSLgetAnnotations(not_null(z_32));
        {
          c_33 = t;
          if(((b_33 != NULL) && (b_33 != c_33)))
            _fail(c_33);
          else
            b_33 = c_33;
        }
      }
      t = r_18;
      {
        ATerm e_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_33));
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
        t = not_null(d_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_75(t);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm k_33 = NULL;
        k_33 = t;
        i_33 :
        if(!(match_string(k_33, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_e_19;
        t = set_config_0(t);
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = Option_3(t, g_3, h_3, i_3);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_33 = NULL;
          l_33 = t;
          j_33 :
          if(!(match_string(l_33, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          t = term_e_19;
          {
            t = set_config_0(t);
            {
              t = term_j_19;
              t = set_config_0(t);
            }
          }
          t = term_k_19;
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_n_19;
          return(t);
        }
        t = Option_3(t, k_3, m_3, q_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  n_33 :
  if(match_cons(o_33, sym__2))
    {
      p_33 = ATgetArgument(o_33, 0);
      q_33 = ATgetArgument(o_33, 1);
      t = SSL_table_get(not_null(p_33), not_null(q_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym__3))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      a_34 = ATgetArgument(x_33, 2);
      {
        ATerm o_19;
        o_19 = t;
        {
          ATerm e_34 = NULL;
          ATerm f_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(z_33));
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_19);
              }
            else
              {
                t = r_19;
                t = (ATerm) ATempty;
              }
            {
              f_34 = t;
              if(((e_34 != NULL) && (e_34 != f_34)))
                _fail(f_34);
              else
                e_34 = f_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_33), not_null(z_33), (ATerm) ATinsert(CheckATermList(not_null(e_34)), not_null(a_34)));
            t = table_put_0(t);
          }
        }
        t = o_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_101 (ATerm))
{
  ATerm j_34 = NULL;
  ATerm k_34 = NULL;
  t = term_x_8;
  {
    t = h_101(t);
    {
      k_34 = t;
      if(((j_34 != NULL) && (j_34 != k_34)))
        _fail(k_34);
      else
        j_34 = k_34;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_17, term_w_17, not_null(j_34));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  p_34 :
  if(match_string(q_34, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
        {
          r_34 = ATgetFirst((ATermList) q_34);
          s_34 = (ATerm) ATgetNext((ATermList) q_34);
          {
            ATerm z_34 = NULL;
            ATerm t_19;
            t_19 = t;
            {
              t = not_null(r_34);
              t = a_0(t);
            }
            t = t_19;
            {
              ATerm a_35 = NULL;
              t = term_x_8;
              {
                t = b_0(t);
                {
                  a_35 = t;
                  if(((z_34 != NULL) && (z_34 != a_35)))
                    _fail(a_35);
                  else
                    z_34 = a_35;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_34)), not_null(z_34));
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
  ATerm w_3 (ATerm t)
  {
    ATerm f_35 = NULL;
    f_35 = t;
    e_35 :
    if(!(match_string(f_35, "--help")))
      {
        if(!(match_string(f_35, "-h")))
          {
            if(!(match_string(f_35, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_u_19;
    {
      t = set_config_0(t);
      t = term_x_19;
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_y_19;
    return(t);
  }
  t = Option_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  i_35 = t;
  h_35 :
  if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
    {
      j_35 = ATgetFirst((ATermList) i_35);
      k_35 = (ATerm) ATgetNext((ATermList) i_35);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_35)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_35)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_62 (ATerm), ATerm e_62 (ATerm))
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t_35 :
  if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
    {
      v_35 = ATgetFirst((ATermList) u_35);
      w_35 = (ATerm) ATgetNext((ATermList) u_35);
      {
        ATerm a_36 = NULL,c_36 = NULL;
        ATerm b_36 = NULL;
        t = SSLgetAnnotations(not_null(u_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
        {
          t = not_null(v_35);
          {
            ATerm e_36 = NULL;
            t = d_62(t);
            {
              c_36 = t;
              {
                t = not_null(w_35);
                {
                  ATerm g_36 = NULL;
                  t = e_62(t);
                  {
                    e_36 = t;
                    {
                      ATerm h_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_36)), not_null(c_36)), not_null(a_36));
                      {
                        h_36 = t;
                        if(((g_36 != NULL) && (g_36 != h_36)))
                          _fail(h_36);
                        else
                          g_36 = h_36;
                      }
                      t = not_null(g_36);
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
  ATerm w_36 = NULL;
  w_36 = t;
  v_36 :
  if(((ATgetType(w_36) == AT_LIST) && ATisEmpty(w_36)))
    {
      {
        ATerm y_36 = NULL,a_37 = NULL;
        ATerm z_19;
        z_19 = t;
        {
          ATerm z_36 = NULL;
          t = SSLgetAnnotations(not_null(w_36));
          {
            z_36 = t;
            if(((y_36 != NULL) && (y_36 != z_36)))
              _fail(z_36);
            else
              y_36 = z_36;
          }
        }
        t = z_19;
        {
          ATerm b_37 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_36));
          {
            b_37 = t;
            if(((a_37 != NULL) && (a_37 != b_37)))
              _fail(b_37);
            else
              a_37 = b_37;
          }
          t = not_null(a_37);
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
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym__2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(i_37), not_null(j_37));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_101 (ATerm))
{
  ATerm a_20;
  a_20 = t;
  {
    ATerm z_3 (ATerm t)
    {
      t = term_b_20;
      t = f_101(t);
      return(t);
    }
    t = try_1(t, z_3);
  }
  t = a_20;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm r_37 = NULL;
      ATerm c_20;
      c_20 = t;
      {
        ATerm p_37 = NULL;
        ATerm q_37 = NULL;
        q_37 = t;
        if(((p_37 != NULL) && (p_37 != q_37)))
          _fail(q_37);
        else
          p_37 = q_37;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(p_37));
          t = set_config_0(t);
        }
      }
      t = c_20;
      {
        ATerm s_37 = NULL;
        s_37 = t;
        if(((r_37 != NULL) && (r_37 != s_37)))
          _fail(s_37);
        else
          r_37 = s_37;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_37));
      }
      return(t);
    }
    ATerm b_4 (ATerm t)
    {
      ATerm h_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              {
                t = f_101(t);
                t = Cons_2(t, _id, b_4);
              }
            }
          ;
          LocalPopChoice(l_20);
        }
      else
        {
          t = h_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_4, b_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  ATerm t_20;
  t_20 = t;
  {
    ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
    b_38 = t;
    x_37 :
    if(match_cons(b_38, sym__3))
      {
        c_38 = ATgetArgument(b_38, 0);
        d_38 = ATgetArgument(b_38, 1);
        e_38 = ATgetArgument(b_38, 2);
        {
          if(((y_37 != NULL) && (y_37 != c_38)))
            _fail(c_38);
          else
            y_37 = c_38;
          {
            if(((z_37 != NULL) && (z_37 != d_38)))
              _fail(d_38);
            else
              z_37 = d_38;
            {
              if(((a_38 != NULL) && (a_38 != e_38)))
                _fail(e_38);
              else
                a_38 = e_38;
              t = SSL_table_put(not_null(y_37), not_null(z_37), not_null(a_38));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_101 (ATerm))
{
  ATerm h_38 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    t = term_v_20;
    t = table_put_0(t);
  }
  t = u_20;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm d_21 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_101(t);
          ;
          LocalPopChoice(e_21);
        }
      else
        {
          t = d_21;
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, c_4);
    {
      ATerm h_4 (ATerm t)
      {
        ATerm h_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_21;
            n_21 = t;
            {
              ATerm o_21 = t;
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = o_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_21;
            {
              t = system_usage_0(t);
              {
                t = term_x_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = h_21;
            {
              ATerm u_21 = t;
              int v_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_21;
                  w_21 = t;
                  {
                    t = term_c_19;
                    t = get_config_0(t);
                  }
                  t = w_21;
                  {
                    t = system_about_0(t);
                    {
                      t = term_x_12;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(v_21);
                }
              else
                {
                  t = u_21;
                  {
                    ATerm i_4 (ATerm t)
                    {
                      ATerm n_4 (ATerm t)
                      {
                        ATerm i_38 = NULL;
                        i_38 = t;
                        if(((h_38 != NULL) && (h_38 != i_38)))
                          _fail(i_38);
                        else
                          h_38 = i_38;
                        return(t);
                      }
                      t = Undefined_1(t, n_4);
                      return(t);
                    }
                    t = option_defined_1(t, i_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_38)), term_y_21));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_e_9;
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
      t = try_1(t, h_4);
      {
        ATerm d_22;
        d_22 = t;
        {
          t = term_s_17;
          t = table_destroy_0(t);
        }
        t = d_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm))
{
  t = parse_options_1(t, e_99);
  {
    t = store_options_0(t);
    {
      t = g_99(t);
      {
        ATerm e_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_99);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = e_22;
            {
              ATerm k_22 = t;
              int l_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_99(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(l_22);
                }
              else
                {
                  t = k_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_98(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_4, v_98, w_98, p_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm r_22;
      r_22 = t;
      {
        ATerm l_38 = NULL;
        ATerm m_38 = NULL;
        t = term_z_14;
        {
          t = get_config_0(t);
          {
            m_38 = t;
            if(((l_38 != NULL) && (l_38 != m_38)))
              _fail(m_38);
            else
              l_38 = m_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATempty, not_null(l_38)));
          t = printnl_0(t);
        }
      }
      t = r_22;
      return(t);
    }
    t = if_verbose2_1(t, t_4);
    return(t);
  }
  t = iowrap_4(t, n_98, o_98, p_98, q_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_98 (ATerm), ATerm m_98 (ATerm))
{
  t = iowrap_3(t, l_98, m_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    t = _2(t, _id, i_98);
    return(t);
  }
  t = iowrap_2(t, u_4, _fail);
  return(t);
}
ATerm meta_explode_0 (ATerm t)
{
  t = iowrap_1(t, MetaExplode_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = meta_explode_0(t);
  return(t);
}
