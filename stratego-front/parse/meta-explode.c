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
ATerm term_z_20;
ATerm term_b_20;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_o_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_h_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_x_5;
ATerm term_l_5;
ATerm term_f_5;
ATerm term_e_5;
void init_constant_terms (void)
{
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_Cong_2, term_e_5, (ATerm) ATempty);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_Op_2, term_e_5, (ATerm) ATempty);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_f_8);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_f_8);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_f_8);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_m_18, term_f_8);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_o_15, term_f_8);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__3, term_q_16, term_r_16, (ATerm) ATempty);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0 (ATerm);
ATerm TrmOp_0 (ATerm);
ATerm TrmCons_0 (ATerm);
ATerm TrmNil_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm));
ATerm LstMetaVar_0 (ATerm);
ATerm TrmConc_0 (ATerm);
ATerm Anno_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm TrmAnno_0 (ATerm);
ATerm TrmFromStr_0 (ATerm);
ATerm TrmFromApp_0 (ATerm);
ATerm TrmFromTerm_0 (ATerm);
ATerm TrmStr_0 (ATerm);
ATerm TrmLMetaVar_0 (ATerm);
ATerm TrmMetaVar_0 (ATerm);
ATerm trm_explode_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm q_78 (ATerm));
ATerm MetaExplode_0 (ATerm);
ATerm _2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_83 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_96 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm z_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_98 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_94 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_90 (ATerm), ATerm e_90 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm o_88 (ATerm), ATerm p_88 (ATerm));
ATerm crush_2 (ATerm, ATerm h_92 (ATerm), ATerm i_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_96 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_101 (ATerm));
ATerm map_1 (ATerm, ATerm p_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_100 (ATerm));
ATerm Program_1 (ATerm, ATerm g_68 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_99 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_75 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_101 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_101 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_101 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_98 (ATerm), ATerm j_98 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_98 (ATerm));
ATerm meta_explode_0 (ATerm);
ATerm main_0 (ATerm);
ATerm str_explode_0 (ATerm t)
{
  ATerm n_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      r_2 = t;
      g_1 :
      if(match_cons(r_2, sym_meta_var_1))
        {
          s_2 = ATgetArgument(r_2, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_2)), (ATerm) ATempty);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_4);
    }
  else
    {
      t = n_4;
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0(t);
            ;
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm r_4 = t;
              int s_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0(t);
                  ;
                  LocalPopChoice(s_4);
                }
              else
                {
                  t = r_4;
                  {
                    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
                    ATerm q_3 (ATerm t)
                    {
                      ATerm e_3 = NULL,f_3 = NULL,l_3 = NULL;
                      ATerm x_4;
                      x_4 = t;
                      {
                        ATerm g_3 = NULL;
                        ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
                        t = not_null(w_2);
                        {
                          g_3 = t;
                          {
                            t = SSL_explode_term(not_null(g_3));
                            {
                              i_3 = t;
                              o_2 :
                              if(match_cons(i_3, sym__2))
                                {
                                  j_3 = ATgetArgument(i_3, 0);
                                  k_3 = ATgetArgument(i_3, 1);
                                  {
                                    if(((e_3 != NULL) && (e_3 != j_3)))
                                      _fail(j_3);
                                    else
                                      e_3 = j_3;
                                    if(((f_3 != NULL) && (f_3 != k_3)))
                                      _fail(k_3);
                                    else
                                      f_3 = k_3;
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
                      t = x_4;
                      {
                        ATerm m_3 = NULL;
                        t = not_null(f_3);
                        {
                          t = map_1(t, str_explode_0);
                          {
                            m_3 = t;
                            if(((l_3 != NULL) && (l_3 != m_3)))
                              _fail(m_3);
                            else
                              l_3 = m_3;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(e_3), not_null(l_3));
                      }
                      return(t);
                    }
                    w_2 = t;
                    q_2 :
                    if(((ATgetType(w_2) == AT_LIST) && ATisEmpty(w_2)))
                      {
                        {
                          ATerm y_4 = t;
                          int d_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_f_5;
                              ;
                              LocalPopChoice(d_5);
                            }
                          else
                            {
                              t = y_4;
                              t = q_3(t);
                            }
                        }
                      }
                    else
                      {
                        if(((ATgetType(w_2) == AT_LIST) && !(ATisEmpty(w_2))))
                          {
                            u_2 = ATgetFirst((ATermList) w_2);
                            v_2 = (ATerm) ATgetNext((ATermList) w_2);
                            {
                              ATerm g_5 = t;
                              int j_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_2 = NULL,b_3 = NULL;
                                  ATerm k_5;
                                  k_5 = t;
                                  {
                                    ATerm a_3 = NULL;
                                    t = not_null(u_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        a_3 = t;
                                        if(((z_2 != NULL) && (z_2 != a_3)))
                                          _fail(a_3);
                                        else
                                          z_2 = a_3;
                                      }
                                    }
                                  }
                                  t = k_5;
                                  {
                                    ATerm c_3 = NULL;
                                    t = not_null(v_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        c_3 = t;
                                        if(((b_3 != NULL) && (b_3 != c_3)))
                                          _fail(c_3);
                                        else
                                          b_3 = c_3;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Cong_2, term_l_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_3)), not_null(z_2)));
                                  }
                                  ;
                                  LocalPopChoice(j_5);
                                }
                              else
                                {
                                  t = g_5;
                                  t = q_3(t);
                                }
                            }
                          }
                        else
                          {
                            t = q_3(t);
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
  ATerm b_4 = NULL;
  ATerm d_4 = NULL,e_4 = NULL,k_4 = NULL;
  b_4 = t;
  {
    ATerm m_5;
    m_5 = t;
    {
      ATerm f_4 = NULL;
      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
      t = not_null(b_4);
      {
        f_4 = t;
        {
          t = SSL_explode_term(not_null(f_4));
          {
            h_4 = t;
            z_3 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                j_4 = ATgetArgument(h_4, 1);
                {
                  if(((d_4 != NULL) && (d_4 != i_4)))
                    _fail(i_4);
                  else
                    d_4 = i_4;
                  if(((e_4 != NULL) && (e_4 != j_4)))
                    _fail(j_4);
                  else
                    e_4 = j_4;
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
    t = m_5;
    {
      ATerm l_4 = NULL;
      t = not_null(e_4);
      {
        t = map_1(t, trm_explode_0);
        {
          l_4 = t;
          if(((k_4 != NULL) && (k_4 != l_4)))
            _fail(l_4);
          else
            k_4 = l_4;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_4), not_null(k_4));
    }
  }
  return(t);
}
ATerm TrmCons_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  t_4 :
  if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
    {
      v_4 = ATgetFirst((ATermList) u_4);
      w_4 = (ATerm) ATgetNext((ATermList) u_4);
      {
        ATerm z_4 = NULL,b_5 = NULL;
        ATerm s_5;
        s_5 = t;
        {
          ATerm a_5 = NULL;
          t = not_null(v_4);
          {
            t = trm_explode_0(t);
            {
              a_5 = t;
              if(((z_4 != NULL) && (z_4 != a_5)))
                _fail(a_5);
              else
                z_4 = a_5;
            }
          }
        }
        t = s_5;
        {
          ATerm c_5 = NULL;
          t = not_null(w_4);
          {
            t = trm_explode_0(t);
            {
              c_5 = t;
              if(((b_5 != NULL) && (b_5 != c_5)))
                _fail(c_5);
              else
                b_5 = c_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Op_2, term_l_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_5)), not_null(z_4)));
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
  ATerm i_5 = NULL;
  i_5 = t;
  h_5 :
  if(((ATgetType(i_5) == AT_LIST) && ATisEmpty(i_5)))
    {
      t = term_x_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  r_5 = t;
  {
    ATerm w_5 = NULL;
    ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
    t = not_null(r_5);
    {
      w_5 = t;
      {
        t = SSL_explode_term(not_null(w_5));
        {
          y_5 = t;
          n_5 :
          if(match_cons(y_5, sym__2))
            {
              z_5 = ATgetArgument(y_5, 0);
              a_6 = ATgetArgument(y_5, 1);
              o_5 :
              if(match_string(z_5, ""))
                {
                  p_5 :
                  if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
                    {
                      b_6 = ATgetFirst((ATermList) a_6);
                      c_6 = (ATerm) ATgetNext((ATermList) a_6);
                      q_5 :
                      if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
                        {
                          d_6 = ATgetFirst((ATermList) c_6);
                          e_6 = (ATerm) ATgetNext((ATermList) c_6);
                          {
                            if(((t_5 != NULL) && (t_5 != b_6)))
                              _fail(b_6);
                            else
                              t_5 = b_6;
                            {
                              if(((v_5 != NULL) && (v_5 != d_6)))
                                _fail(d_6);
                              else
                                v_5 = d_6;
                              if(((u_5 != NULL) && (u_5 != e_6)))
                                _fail(e_6);
                              else
                                u_5 = e_6;
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
    t = not_null(v_5);
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm))
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_88(t);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      {
        ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
        m_6 = t;
        l_6 :
        if(((ATgetType(m_6) == AT_LIST) && !(ATisEmpty(m_6))))
          {
            n_6 = ATgetFirst((ATermList) m_6);
            o_6 = (ATerm) ATgetNext((ATermList) m_6);
            {
              ATerm r_6 = NULL,t_6 = NULL;
              ATerm h_6;
              h_6 = t;
              {
                ATerm s_6 = NULL;
                t = not_null(n_6);
                {
                  t = s_88(t);
                  {
                    s_6 = t;
                    if(((r_6 != NULL) && (r_6 != s_6)))
                      _fail(s_6);
                    else
                      r_6 = s_6;
                  }
                }
              }
              t = h_6;
              {
                ATerm u_6 = NULL;
                t = not_null(o_6);
                {
                  t = foldr_3(t, q_88, r_88, s_88);
                  {
                    u_6 = t;
                    if(((t_6 != NULL) && (t_6 != u_6)))
                      _fail(u_6);
                    else
                      t_6 = u_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), not_null(t_6));
                  t = r_88(t);
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
  ATerm a_7 = NULL,b_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym_meta_listvar_1))
    {
      b_7 = ATgetArgument(a_7, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(b_7)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmConc_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym_Conc_2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      {
        t = not_null(k_7);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm o_7 = NULL;
            ATerm p_7 = NULL;
            t = LstMetaVar_0(t);
            {
              p_7 = t;
              if(((o_7 != NULL) && (o_7 != p_7)))
                _fail(p_7);
              else
                o_7 = p_7;
            }
            t = (ATerm) ATinsert(ATempty, not_null(o_7));
            return(t);
          }
          t = try_1(t, c_0);
          {
            ATerm e_0 (ATerm t)
            {
              t = not_null(l_7);
              {
                ATerm i_6 = t;
                int j_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TrmLMetaVar_0(t);
                    ;
                    LocalPopChoice(j_6);
                  }
                else
                  {
                    t = i_6;
                    t = trm_explode_0(t);
                  }
              }
              return(t);
            }
            ATerm f_0 (ATerm t)
            {
              ATerm q_7 = NULL,s_7 = NULL;
              ATerm k_6;
              k_6 = t;
              {
                ATerm r_7 = NULL;
                t = Fst_0(t);
                {
                  r_7 = t;
                  if(((q_7 != NULL) && (q_7 != r_7)))
                    _fail(r_7);
                  else
                    q_7 = r_7;
                }
              }
              t = k_6;
              {
                ATerm t_7 = NULL;
                t = Snd_0(t);
                {
                  t_7 = t;
                  if(((s_7 != NULL) && (s_7 != t_7)))
                    _fail(t_7);
                  else
                    s_7 = t_7;
                }
                t = (ATerm) ATmakeAppl(sym_Op_2, term_l_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_7)), not_null(q_7)));
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
ATerm Anno_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_Anno_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 = NULL,r_8 = NULL;
            ATerm q_8 = NULL;
            t = SSLgetAnnotations(not_null(j_8));
            {
              q_8 = t;
              if(((p_8 != NULL) && (p_8 != q_8)))
                _fail(q_8);
              else
                p_8 = q_8;
            }
            {
              t = not_null(k_8);
              {
                ATerm t_8 = NULL;
                t = m_0(t);
                {
                  r_8 = t;
                  {
                    t = not_null(l_8);
                    {
                      ATerm v_8 = NULL;
                      t = n_0(t);
                      {
                        t_8 = t;
                        {
                          ATerm w_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(r_8), not_null(t_8)), not_null(p_8));
                          {
                            w_8 = t;
                            if(((v_8 != NULL) && (v_8 != w_8)))
                              _fail(w_8);
                            else
                              v_8 = w_8;
                          }
                          t = not_null(v_8);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
            {
              ATerm a_9 = NULL,c_9 = NULL;
              ATerm b_9 = NULL;
              t = SSLgetAnnotations(not_null(j_8));
              {
                b_9 = t;
                if(((a_9 != NULL) && (a_9 != b_9)))
                  _fail(b_9);
                else
                  a_9 = b_9;
              }
              {
                t = not_null(k_8);
                {
                  ATerm e_9 = NULL;
                  t = m_0(t);
                  {
                    c_9 = t;
                    {
                      t = not_null(l_8);
                      {
                        ATerm g_9 = NULL;
                        t = n_0(t);
                        {
                          e_9 = t;
                          {
                            ATerm h_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(c_9), not_null(e_9)), not_null(a_9));
                            {
                              h_9 = t;
                              if(((g_9 != NULL) && (g_9 != h_9)))
                                _fail(h_9);
                              else
                                g_9 = h_9;
                            }
                            t = not_null(g_9);
                          }
                        }
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
ATerm TrmAnno_0 (ATerm t)
{
  t = Anno_2(t, trm_explode_0, MetaExplode_0);
  return(t);
}
ATerm TrmFromStr_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym_FromStrategy_1))
    {
      v_9 = ATgetArgument(u_9, 0);
      {
        t = not_null(v_9);
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
  ATerm b_10 = NULL,c_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym_FromApp_1))
    {
      c_10 = ATgetArgument(b_10, 0);
      {
        ATerm e_10 = NULL;
        t = not_null(c_10);
        {
          ATerm f_10 = NULL;
          t = MetaExplode_0(t);
          {
            f_10 = t;
            if(((e_10 != NULL) && (e_10 != f_10)))
              _fail(f_10);
            else
              e_10 = f_10;
          }
          t = (ATerm) ATmakeAppl(sym_RootApp_1, not_null(e_10));
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
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_FromTerm_1))
    {
      l_10 = ATgetArgument(k_10, 0);
      {
        t = not_null(l_10);
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
  ATerm p_10 = NULL;
  t = is_string_0(t);
  {
    ATerm q_10 = NULL;
    q_10 = t;
    if(((p_10 != NULL) && (p_10 != q_10)))
      _fail(q_10);
    else
      p_10 = q_10;
    t = (ATerm) ATmakeAppl(sym_Str_1, not_null(p_10));
  }
  return(t);
}
ATerm TrmLMetaVar_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_meta_listvar_1))
    {
      v_10 = ATgetArgument(u_10, 0);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_l_5, (ATerm) ATinsert(ATinsert(ATempty, term_x_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(v_10)))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmMetaVar_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  z_10 :
  if(match_cons(a_11, sym_meta_var_1))
    {
      b_11 = ATgetArgument(a_11, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm trm_explode_0 (ATerm t)
{
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TrmMetaVar_0(t);
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
            t = TrmLMetaVar_0(t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            {
              ATerm c_7 = t;
              int d_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0(t);
                  ;
                  LocalPopChoice(d_7);
                }
              else
                {
                  t = c_7;
                  {
                    ATerm e_7 = t;
                    int f_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0(t);
                        ;
                        LocalPopChoice(f_7);
                      }
                    else
                      {
                        t = e_7;
                        {
                          ATerm g_7 = t;
                          int h_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromApp_0(t);
                              ;
                              LocalPopChoice(h_7);
                            }
                          else
                            {
                              t = g_7;
                              {
                                ATerm m_7 = t;
                                int n_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = TrmFromStr_0(t);
                                    ;
                                    LocalPopChoice(n_7);
                                  }
                                else
                                  {
                                    t = m_7;
                                    {
                                      ATerm u_7 = t;
                                      int v_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmAnno_0(t);
                                          ;
                                          LocalPopChoice(v_7);
                                        }
                                      else
                                        {
                                          t = u_7;
                                          {
                                            ATerm w_7 = t;
                                            int x_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TrmConc_0(t);
                                                ;
                                                LocalPopChoice(x_7);
                                              }
                                            else
                                              {
                                                t = w_7;
                                                {
                                                  ATerm y_7 = t;
                                                  int z_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmNil_0(t);
                                                      ;
                                                      LocalPopChoice(z_7);
                                                    }
                                                  else
                                                    {
                                                      t = y_7;
                                                      {
                                                        ATerm a_8 = t;
                                                        int b_8 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = TrmCons_0(t);
                                                            ;
                                                            LocalPopChoice(b_8);
                                                          }
                                                        else
                                                          {
                                                            t = a_8;
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
ATerm alltd_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm e_11 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_78(t);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = _all(t, e_11);
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm MetaExplode_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm k_11 = NULL,l_11 = NULL;
    k_11 = t;
    j_11 :
    if(match_cons(k_11, sym_ToTerm_1))
      {
        l_11 = ATgetArgument(k_11, 0);
        {
          t = not_null(l_11);
          t = trm_explode_0(t);
        }
      }
    else
      {
        if(match_cons(k_11, sym_ToBuild_1))
          {
            l_11 = ATgetArgument(k_11, 0);
            {
              ATerm o_11 = NULL;
              t = not_null(l_11);
              {
                ATerm p_11 = NULL;
                t = trm_explode_0(t);
                {
                  p_11 = t;
                  if(((o_11 != NULL) && (o_11 != p_11)))
                    _fail(p_11);
                  else
                    o_11 = p_11;
                }
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_11));
              }
            }
          }
        else
          {
            if(match_cons(k_11, sym_ToStrategy_1))
              {
                l_11 = ATgetArgument(k_11, 0);
                {
                  t = not_null(l_11);
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
ATerm _2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      {
        ATerm h_12 = NULL,j_12 = NULL;
        ATerm i_12 = NULL;
        t = SSLgetAnnotations(not_null(b_12));
        {
          i_12 = t;
          if(((h_12 != NULL) && (h_12 != i_12)))
            _fail(i_12);
          else
            h_12 = i_12;
        }
        {
          t = not_null(c_12);
          {
            ATerm l_12 = NULL;
            t = r_60(t);
            {
              j_12 = t;
              {
                t = not_null(d_12);
                {
                  ATerm n_12 = NULL;
                  t = s_60(t);
                  {
                    l_12 = t;
                    {
                      ATerm o_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_12), not_null(l_12)), not_null(h_12));
                      {
                        o_12 = t;
                        if(((n_12 != NULL) && (n_12 != o_12)))
                          _fail(o_12);
                        else
                          n_12 = o_12;
                      }
                      t = not_null(n_12);
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
  ATerm e_8;
  e_8 = t;
  {
    ATerm v_12 = NULL;
    ATerm w_12 = NULL;
    t = term_f_8;
    {
      t = whoami_0(t);
      {
        w_12 = t;
        if(((v_12 != NULL) && (v_12 != w_12)))
          _fail(w_12);
        else
          v_12 = w_12;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_8), not_null(v_12)), term_h_8));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      {
        ATerm o_8;
        o_8 = t;
        t = SSL_printnl(not_null(b_13), not_null(c_13));
        t = o_8;
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
  ATerm h_13 = NULL;
  h_13 = t;
  t = SSL_implode_string(not_null(h_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = s_8;
      {
        ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
        m_13 = t;
        l_13 :
        if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
          {
            n_13 = ATgetFirst((ATermList) m_13);
            o_13 = (ATerm) ATgetNext((ATermList) m_13);
            {
              t = not_null(n_13);
              {
                ATerm o_0 (ATerm t)
                {
                  t = not_null(o_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_0);
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
  ATerm y_13 = NULL;
  ATerm a_14 = NULL;
  y_13 = t;
  {
    ATerm b_14 = NULL;
    ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
    t = not_null(y_13);
    {
      b_14 = t;
      {
        t = SSL_explode_term(not_null(b_14));
        {
          d_14 = t;
          w_13 :
          if(match_cons(d_14, sym__2))
            {
              e_14 = ATgetArgument(d_14, 0);
              f_14 = ATgetArgument(d_14, 1);
              x_13 :
              if(match_string(e_14, ""))
                {
                  if(((a_14 != NULL) && (a_14 != f_14)))
                    _fail(f_14);
                  else
                    a_14 = f_14;
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
      t = not_null(a_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm j_14 (ATerm t)
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_14);
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          t = Nil_0(t);
          t = e_83(t);
        }
      }
    return(t);
  }
  t = j_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym__2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      {
        t = not_null(n_14);
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(o_14);
            return(t);
          }
          t = at_end_1(t, p_0);
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
  ATerm z_8 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = z_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  t = SSL_explode_string(not_null(t_14));
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
  ATerm f_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = f_9;
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_0);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
              ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
              c_15 = t;
              b_15 :
              if(match_cons(c_15, sym_Path_1))
                {
                  d_15 = ATgetArgument(c_15, 0);
                  t = not_null(d_15);
                }
              else
                {
                  if(match_cons(c_15, sym_Var_1))
                    {
                      d_15 = ATgetArgument(c_15, 0);
                      {
                        t = not_null(d_15);
                        {
                          ATerm l_9 = t;
                          int m_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_9);
                            }
                          else
                            {
                              t = l_9;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_n_9;
                                  return(t);
                                }
                                t = debug_1(t, r_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_15, sym_Prefix_2))
                        {
                          d_15 = ATgetArgument(c_15, 0);
                          e_15 = ATgetArgument(c_15, 1);
                          {
                            ATerm j_15 = NULL,l_15 = NULL;
                            ATerm o_9;
                            o_9 = t;
                            {
                              ATerm k_15 = NULL;
                              t = not_null(d_15);
                              {
                                t = eval_config_0(t);
                                {
                                  k_15 = t;
                                  if(((j_15 != NULL) && (j_15 != k_15)))
                                    _fail(k_15);
                                  else
                                    j_15 = k_15;
                                }
                              }
                            }
                            t = o_9;
                            {
                              ATerm m_15 = NULL;
                              t = not_null(e_15);
                              {
                                t = eval_config_0(t);
                                {
                                  m_15 = t;
                                  if(((l_15 != NULL) && (l_15 != m_15)))
                                    _fail(m_15);
                                  else
                                    l_15 = m_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(l_15));
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
  ATerm u_15 = NULL;
  u_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(u_15));
    {
      t = table_get_0(t);
      {
        ATerm s_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_9;
            q_9 = t;
            {
              ATerm w_15 = NULL;
              ATerm x_15 = NULL;
              x_15 = t;
              if(((w_15 != NULL) && (w_15 != x_15)))
                _fail(x_15);
              else
                w_15 = x_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_9, not_null(u_15), not_null(w_15));
                t = table_put_0(t);
              }
            }
            t = q_9;
          }
          return(t);
        }
        t = try_1(t, s_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_96 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm b_16 = NULL;
      ATerm c_16 = NULL;
      t = term_s_9;
      {
        t = get_config_0(t);
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), term_w_9);
        t = geq_0(t);
      }
    }
    t = r_9;
    t = d_96(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  i_16 = t;
  g_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      h_16 :
      if(match_cons(k_16, sym_Stream_1))
        {
          l_16 = ATgetArgument(k_16, 0);
          {
            ATerm o_16 = NULL;
            t = SSL_fputc(not_null(j_16), not_null(l_16));
            {
              ATerm p_16 = NULL;
              p_16 = t;
              if(((o_16 != NULL) && (o_16 != p_16)))
                _fail(p_16);
              else
                o_16 = p_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_16));
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
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  w_16 = t;
  u_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      z_16 = ATgetArgument(w_16, 1);
      v_16 :
      if(match_cons(x_16, sym_Stream_1))
        {
          y_16 = ATgetArgument(x_16, 0);
          {
            ATerm c_17 = NULL;
            t = SSL_write_term_to_stream_text(not_null(y_16), not_null(z_16));
            {
              ATerm d_17 = NULL;
              d_17 = t;
              if(((c_17 != NULL) && (c_17 != d_17)))
                _fail(d_17);
              else
                c_17 = d_17;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_17));
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
  ATerm u_0 (ATerm t)
  {
    ATerm h_17 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm i_17 = NULL;
      i_17 = t;
      if(((h_17 != NULL) && (h_17 != i_17)))
        _fail(i_17);
      else
        h_17 = i_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(h_17));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, u_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  o_17 = t;
  m_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      r_17 = ATgetArgument(o_17, 1);
      n_17 :
      if(match_cons(p_17, sym_Stream_1))
        {
          q_17 = ATgetArgument(p_17, 0);
          {
            ATerm u_17 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_17), not_null(r_17));
            {
              ATerm v_17 = NULL;
              v_17 = t;
              if(((u_17 != NULL) && (u_17 != v_17)))
                _fail(v_17);
              else
                u_17 = v_17;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_17));
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
ATerm WriteToFile_1 (ATerm t, ATerm z_94 (ATerm))
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym__2))
    {
      d_18 = ATgetArgument(c_18, 0);
      e_18 = ATgetArgument(c_18, 1);
      {
        ATerm h_18 = NULL,j_18 = NULL;
        t = not_null(d_18);
        {
          ATerm i_18 = NULL;
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), term_y_9);
            {
              t = open_stream_0(t);
              {
                ATerm k_18 = NULL;
                k_18 = t;
                if(((j_18 != NULL) && (j_18 != k_18)))
                  _fail(k_18);
                else
                  j_18 = k_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(e_18));
                  {
                    t = z_94(t);
                    {
                      t = fclose_0(t);
                      t = not_null(e_18);
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
  ATerm s_18 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm d_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm t_18 = NULL,u_18 = NULL;
            t_18 = t;
            p_18 :
            if(match_cons(t_18, sym_Output_1))
              {
                u_18 = ATgetArgument(t_18, 0);
                if(((s_18 != NULL) && (s_18 != u_18)))
                  _fail(u_18);
                else
                  s_18 = u_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_0);
          ;
          LocalPopChoice(g_10);
        }
      else
        {
          t = d_10;
          {
            ATerm v_18 = NULL;
            t = term_h_10;
            {
              v_18 = t;
              if(((s_18 != NULL) && (s_18 != v_18)))
                _fail(v_18);
              else
                s_18 = v_18;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_0, _id);
  }
  t = z_9;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = not_null(s_18);
        return(t);
      }
      t = split_2(t, y_0, _id);
      return(t);
    }
    t = _2(t, _id, x_0);
    {
      ATerm i_10 = t;
      int m_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm w_18 = NULL;
              w_18 = t;
              r_18 :
              if(!(match_cons(w_18, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_1);
            return(t);
          }
          t = _2(t, z_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(m_10);
        }
      else
        {
          t = i_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_98 (ATerm))
{
  ATerm c_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  ATerm n_10;
  n_10 = t;
  t = dtime_0(t);
  t = n_10;
  {
    t = b_98(t);
    {
      ATerm o_10;
      o_10 = t;
      {
        ATerm d_19 = NULL;
        t = dtime_0(t);
        {
          d_19 = t;
          if(((c_19 != NULL) && (c_19 != d_19)))
            _fail(d_19);
          else
            c_19 = d_19;
        }
      }
      t = o_10;
      {
        e_19 = t;
        b_19 :
        if(match_cons(e_19, sym__2))
          {
            f_19 = ATgetArgument(e_19, 0);
            g_19 = ATgetArgument(e_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_19))), not_null(g_19));
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
  ATerm o_19 = NULL,p_19 = NULL;
  ATerm v_19 (ATerm t)
  {
    t = SSL_fclose(not_null(p_19));
    return(t);
  }
  p_19 = t;
  n_19 :
  if(match_cons(p_19, sym_Stream_1))
    {
      o_19 = ATgetArgument(p_19, 0);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(o_19));
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = v_19(t);
          }
      }
    }
  else
    {
      t = v_19(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym_Stream_1))
    {
      z_19 = ATgetArgument(y_19, 0);
      t = SSL_read_term_from_stream(not_null(z_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm w_10;
  w_10 = t;
  {
    ATerm e_20 = NULL,g_20 = NULL;
    ATerm x_10;
    x_10 = t;
    {
      ATerm f_20 = NULL;
      t = l_94(t);
      {
        f_20 = t;
        if(((e_20 != NULL) && (e_20 != f_20)))
          _fail(f_20);
        else
          e_20 = f_20;
      }
    }
    t = x_10;
    {
      ATerm h_20 = NULL;
      h_20 = t;
      if(((g_20 != NULL) && (g_20 != h_20)))
        _fail(h_20);
      else
        g_20 = h_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_20)), not_null(e_20)));
        t = printnl_0(t);
      }
    }
  }
  t = w_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      {
        ATerm s_20 = NULL;
        t = SSL_fopen(not_null(o_20), not_null(p_20));
        {
          ATerm t_20 = NULL;
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_20));
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
  ATerm x_20 = NULL;
  x_20 = t;
  t = SSL_is_string(not_null(x_20));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm c_21 = NULL;
    c_21 = t;
    if(((b_21 != NULL) && (b_21 != c_21)))
      _fail(c_21);
    else
      b_21 = c_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_21));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm f_21 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm g_21 = NULL;
    g_21 = t;
    if(((f_21 != NULL) && (f_21 != g_21)))
      _fail(g_21);
    else
      f_21 = g_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_21));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm j_21 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm k_21 = NULL;
    k_21 = t;
    if(((j_21 != NULL) && (j_21 != k_21)))
      _fail(k_21);
    else
      j_21 = k_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_21));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm q_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(q_21, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(q_21, sym_stdin_0))
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
  ATerm a_22 = NULL;
  ATerm c_22 = NULL,d_22 = NULL;
  a_22 = t;
  {
    ATerm e_22 = NULL;
    ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
    t = not_null(a_22);
    {
      e_22 = t;
      {
        t = SSL_explode_term(not_null(e_22));
        {
          g_22 = t;
          x_21 :
          if(match_cons(g_22, sym__2))
            {
              h_22 = ATgetArgument(g_22, 0);
              i_22 = ATgetArgument(g_22, 1);
              y_21 :
              if(match_string(h_22, ""))
                {
                  z_21 :
                  if(((ATgetType(i_22) == AT_LIST) && !(ATisEmpty(i_22))))
                    {
                      j_22 = ATgetFirst((ATermList) i_22);
                      k_22 = (ATerm) ATgetNext((ATermList) i_22);
                      {
                        if(((d_22 != NULL) && (d_22 != j_22)))
                          _fail(j_22);
                        else
                          d_22 = j_22;
                        if(((c_22 != NULL) && (c_22 != k_22)))
                          _fail(k_22);
                        else
                          c_22 = k_22;
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
    t = not_null(d_22);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm y_10 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = y_10;
            {
              ATerm d_11 = t;
              int f_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_1 (ATerm t)
                  {
                    ATerm v_22 = NULL,w_22 = NULL;
                    v_22 = t;
                    q_22 :
                    if(match_cons(v_22, sym_Path_1))
                      {
                        w_22 = ATgetArgument(v_22, 0);
                        t = not_null(w_22);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, b_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(f_11);
                }
              else
                {
                  t = d_11;
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
  ATerm e_23 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_23 = NULL;
      ATerm d_23 = NULL;
      d_23 = t;
      if(((c_23 != NULL) && (c_23 != d_23)))
        _fail(d_23);
      else
        c_23 = d_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), term_i_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_m_11;
          return(t);
        }
        t = debug_1(t, c_1);
        _fail(t);
      }
    }
  {
    ATerm n_11;
    n_11 = t;
    {
      ATerm f_23 = NULL;
      t = read_from_stream_0(t);
      {
        f_23 = t;
        if(((e_23 != NULL) && (e_23 != f_23)))
          _fail(f_23);
        else
          e_23 = f_23;
      }
    }
    t = n_11;
    {
      t = fclose_0(t);
      t = not_null(e_23);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_90 (ATerm), ATerm e_90 (ATerm))
{
  ATerm k_23 = NULL,m_23 = NULL;
  ATerm q_11;
  q_11 = t;
  {
    ATerm l_23 = NULL;
    t = d_90(t);
    {
      l_23 = t;
      if(((k_23 != NULL) && (k_23 != l_23)))
        _fail(l_23);
      else
        k_23 = l_23;
    }
  }
  t = q_11;
  {
    ATerm n_23 = NULL;
    t = e_90(t);
    {
      n_23 = t;
      if(((m_23 != NULL) && (m_23 != n_23)))
        _fail(n_23);
      else
        m_23 = n_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), not_null(m_23));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_23 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 (ATerm t)
        {
          ATerm u_23 = NULL,v_23 = NULL;
          u_23 = t;
          r_23 :
          if(match_cons(u_23, sym_Input_1))
            {
              v_23 = ATgetArgument(u_23, 0);
              if(((t_23 != NULL) && (t_23 != v_23)))
                _fail(v_23);
              else
                t_23 = v_23;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, d_1);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          ATerm w_23 = NULL;
          t = term_u_11;
          {
            w_23 = t;
            if(((t_23 != NULL) && (t_23 != w_23)))
              _fail(w_23);
            else
              t_23 = w_23;
          }
        }
      }
  }
  t = r_11;
  {
    ATerm e_1 (ATerm t)
    {
      t = not_null(t_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm b_24 = NULL;
    b_24 = t;
    z_23 :
    if(!(match_string(b_24, "-k")))
      {
        if(!(match_string(b_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm v_11;
    v_11 = t;
    {
      ATerm c_24 = NULL;
      ATerm d_24 = NULL;
      t = string_to_int_0(t);
      {
        d_24 = t;
        if(((c_24 != NULL) && (c_24 != d_24)))
          _fail(d_24);
        else
          c_24 = d_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(c_24));
        t = set_config_0(t);
      }
    }
    t = v_11;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  t = ArgOption_3(t, f_1, h_1, i_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  t = SSL_string_to_int(not_null(g_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm o_24 = NULL;
        o_24 = t;
        j_24 :
        if(!(match_string(o_24, "-S")))
          {
            if(!(match_string(o_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_f_12;
        t = set_config_0(t);
        t = term_g_12;
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_k_12;
        return(t);
      }
      t = Option_3(t, j_1, k_1, l_1);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm m_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm p_24 = NULL;
              p_24 = t;
              k_24 :
              if(!(match_string(p_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm s_24 = NULL;
              ATerm q_12;
              q_12 = t;
              {
                ATerm q_24 = NULL;
                ATerm r_24 = NULL;
                t = string_to_int_0(t);
                {
                  r_24 = t;
                  if(((q_24 != NULL) && (q_24 != r_24)))
                    _fail(r_24);
                  else
                    q_24 = r_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(q_24));
                  t = set_config_0(t);
                }
              }
              t = q_12;
              {
                ATerm t_24 = NULL;
                t_24 = t;
                if(((s_24 != NULL) && (s_24 != t_24)))
                  _fail(t_24);
                else
                  s_24 = t_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_24));
              }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_r_12;
              return(t);
            }
            t = ArgOption_3(t, m_1, n_1, o_1);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = m_12;
            {
              ATerm p_1 (ATerm t)
              {
                ATerm u_24 = NULL;
                u_24 = t;
                n_24 :
                if(!(match_string(u_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_t_12;
                t = set_config_0(t);
                t = term_u_12;
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_x_12;
                return(t);
              }
              t = Option_3(t, p_1, q_1, r_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_12 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = y_12;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm a_25 = NULL;
    a_25 = t;
    x_24 :
    if(!(match_string(a_25, "-o")))
      {
        if(!(match_string(a_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm d_25 = NULL;
    ATerm e_13;
    e_13 = t;
    {
      ATerm b_25 = NULL;
      ATerm c_25 = NULL;
      c_25 = t;
      if(((b_25 != NULL) && (b_25 != c_25)))
        _fail(c_25);
      else
        b_25 = c_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(b_25));
        t = set_config_0(t);
      }
    }
    t = e_13;
    {
      ATerm e_25 = NULL;
      e_25 = t;
      if(((d_25 != NULL) && (d_25 != e_25)))
        _fail(e_25);
      else
        d_25 = e_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_25));
    }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  t = ArgOption_3(t, s_1, t_1, u_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm v_1 (ATerm t)
        {
          ATerm i_25 = NULL;
          i_25 = t;
          h_25 :
          if(!(match_string(i_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          t = term_p_13;
          t = set_config_0(t);
          t = term_q_13;
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = term_r_13;
          return(t);
        }
        t = Option_3(t, v_1, w_1, x_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  o_25 = t;
  m_25 :
  if(match_string(o_25, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
        {
          p_25 = ATgetFirst((ATermList) o_25);
          q_25 = (ATerm) ATgetNext((ATermList) o_25);
          n_25 :
          if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
            {
              r_25 = ATgetFirst((ATermList) q_25);
              s_25 = (ATerm) ATgetNext((ATermList) q_25);
              {
                ATerm w_25 = NULL;
                ATerm s_13;
                s_13 = t;
                {
                  t = not_null(p_25);
                  t = j_0(t);
                }
                t = s_13;
                {
                  ATerm x_25 = NULL;
                  t = not_null(r_25);
                  {
                    t = k_0(t);
                    {
                      x_25 = t;
                      if(((w_25 != NULL) && (w_25 != x_25)))
                        _fail(x_25);
                      else
                        w_25 = x_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_25)), not_null(w_25));
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
  ATerm y_1 (ATerm t)
  {
    ATerm e_26 = NULL;
    e_26 = t;
    b_26 :
    if(!(match_string(e_26, "-i")))
      {
        if(!(match_string(e_26, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm h_26 = NULL;
    ATerm t_13;
    t_13 = t;
    {
      ATerm f_26 = NULL;
      ATerm g_26 = NULL;
      g_26 = t;
      if(((f_26 != NULL) && (f_26 != g_26)))
        _fail(g_26);
      else
        f_26 = g_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_13, not_null(f_26));
        t = set_config_0(t);
      }
    }
    t = t_13;
    {
      ATerm i_26 = NULL;
      i_26 = t;
      if(((h_26 != NULL) && (h_26 != i_26)))
        _fail(i_26);
      else
        h_26 = i_26;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_26));
    }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_v_13;
    return(t);
  }
  t = ArgOption_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = z_13;
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm a_27 = NULL;
  t = report_run_time_0(t);
  {
    ATerm b_27 = NULL;
    t = term_f_8;
    {
      t = whoami_0(t);
      {
        b_27 = t;
        if(((a_27 != NULL) && (a_27 != b_27)))
          _fail(b_27);
        else
          a_27 = b_27;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, term_i_14), not_null(a_27)));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_k_14;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  t = SSL_TicksToSeconds(not_null(e_27));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_27), not_null(l_27));
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            t = SSL_addr(not_null(k_27), not_null(l_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_88 (ATerm), ATerm p_88 (ATerm))
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_88(t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
        s_27 = t;
        r_27 :
        if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
          {
            t_27 = ATgetFirst((ATermList) s_27);
            u_27 = (ATerm) ATgetNext((ATermList) s_27);
            {
              ATerm x_27 = NULL;
              ATerm y_27 = NULL;
              t = not_null(u_27);
              {
                t = foldr_2(t, o_88, p_88);
                {
                  y_27 = t;
                  if(((x_27 != NULL) && (x_27 != y_27)))
                    _fail(y_27);
                  else
                    x_27 = y_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(x_27));
                t = p_88(t);
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
ATerm crush_2 (ATerm t, ATerm h_92 (ATerm), ATerm i_92 (ATerm))
{
  ATerm f_28 = NULL;
  ATerm h_28 = NULL;
  f_28 = t;
  {
    ATerm i_28 = NULL;
    ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
    t = not_null(f_28);
    {
      i_28 = t;
      {
        t = SSL_explode_term(not_null(i_28));
        {
          p_28 = t;
          e_28 :
          if(match_cons(p_28, sym__2))
            {
              q_28 = ATgetArgument(p_28, 0);
              r_28 = ATgetArgument(p_28, 1);
              if(((h_28 != NULL) && (h_28 != r_28)))
                _fail(r_28);
              else
                h_28 = r_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_28);
      t = foldr_2(t, h_92, i_92);
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
    ATerm b_2 (ATerm t)
    {
      t = term_e_12;
      return(t);
    }
    t = crush_2(t, b_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym__2))
    {
      y_28 = ATgetArgument(x_28, 0);
      z_28 = ATgetArgument(x_28, 1);
      {
        ATerm u_14;
        u_14 = t;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_28), not_null(z_28));
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = SSL_gtr(not_null(y_28), not_null(z_28));
            }
        }
        t = u_14;
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
  ATerm i_29 = NULL;
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
      j_29 = t;
      h_29 :
      if(match_cons(j_29, sym__2))
        {
          k_29 = ATgetArgument(j_29, 0);
          l_29 = ATgetArgument(j_29, 1);
          {
            if(((i_29 != NULL) && (i_29 != k_29)))
              _fail(k_29);
            else
              i_29 = k_29;
            if(((i_29 != NULL) && (i_29 != l_29)))
              _fail(l_29);
            else
              i_29 = l_29;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_96 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm z_14;
    z_14 = t;
    {
      ATerm o_29 = NULL;
      ATerm p_29 = NULL;
      t = term_s_9;
      {
        t = get_config_0(t);
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), term_n_8);
        t = geq_0(t);
      }
    }
    t = z_14;
    t = c_96(t);
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm t_29 = NULL,v_29 = NULL;
    ATerm a_15;
    a_15 = t;
    {
      ATerm u_29 = NULL;
      t = run_time_0(t);
      {
        u_29 = t;
        if(((t_29 != NULL) && (t_29 != u_29)))
          _fail(u_29);
        else
          t_29 = u_29;
      }
    }
    t = a_15;
    {
      ATerm w_29 = NULL;
      t = term_f_8;
      {
        t = whoami_0(t);
        {
          w_29 = t;
          if(((v_29 != NULL) && (v_29 != w_29)))
            _fail(w_29);
          else
            v_29 = w_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_15), not_null(t_29)), term_f_15), not_null(v_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_e_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Version_0))
    {
      ATerm f_30 = NULL,h_30 = NULL;
      ATerm h_15;
      h_15 = t;
      {
        ATerm g_30 = NULL;
        t = SSLgetAnnotations(not_null(d_30));
        {
          g_30 = t;
          if(((f_30 != NULL) && (f_30 != g_30)))
            _fail(g_30);
          else
            f_30 = g_30;
        }
      }
      t = h_15;
      {
        ATerm i_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_30));
        {
          i_30 = t;
          if(((h_30 != NULL) && (h_30 != i_30)))
            _fail(i_30);
          else
            h_30 = i_30;
        }
        t = not_null(h_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_98 (ATerm))
{
  ATerm i_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = i_15;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              {
                ATerm r_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = r_15;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, e_2);
      }
    }
  t = z_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = SSL_table_create(not_null(n_30));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  {
    ATerm t_15;
    t_15 = t;
    {
      t = term_v_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_15, term_y_15, not_null(r_30));
          t = table_put_0(t);
        }
      }
    }
    t = t_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  t = SSL_table_destroy(not_null(v_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  t = SSL_exit(not_null(z_30));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm c_31 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        t = Cons_2(t, p_82, c_31);
      }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  l_31 = t;
  i_31 :
  if(((ATgetType(l_31) == AT_LIST) && !(ATisEmpty(l_31))))
    {
      j_31 = ATgetFirst((ATermList) l_31);
      k_31 = (ATerm) ATgetNext((ATermList) l_31);
      {
        ATerm o_31 = NULL;
        t = not_null(k_31);
        {
          ATerm d_16;
          d_16 = t;
          {
            ATerm p_31 = NULL,r_31 = NULL,t_31 = NULL;
            ATerm e_16;
            e_16 = t;
            {
              ATerm q_31 = NULL;
              t = i_0(t);
              {
                q_31 = t;
                if(((p_31 != NULL) && (p_31 != q_31)))
                  _fail(q_31);
                else
                  p_31 = q_31;
              }
            }
            t = e_16;
            {
              ATerm s_31 = NULL;
              t = not_null(j_31);
              {
                t = g_0(t);
                {
                  s_31 = t;
                  if(((r_31 != NULL) && (r_31 != s_31)))
                    _fail(s_31);
                  else
                    r_31 = s_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_31)), not_null(r_31));
                {
                  t_31 = t;
                  if(((o_31 != NULL) && (o_31 != t_31)))
                    _fail(t_31);
                  else
                    o_31 = t_31;
                }
              }
            }
          }
          t = d_16;
          {
            ATerm f_2 (ATerm t)
            {
              t = not_null(o_31);
              return(t);
            }
            t = reverse_acc_2(t, g_0, f_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_31) == AT_LIST) && ATisEmpty(l_31)))
        {
          {
            t = term_f_8;
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
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_68 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Program_1))
    {
      f_32 = ATgetArgument(e_32, 0);
      {
        ATerm i_32 = NULL,k_32 = NULL;
        ATerm j_32 = NULL;
        t = SSLgetAnnotations(not_null(e_32));
        {
          j_32 = t;
          if(((i_32 != NULL) && (i_32 != j_32)))
            _fail(j_32);
          else
            i_32 = j_32;
        }
        {
          t = not_null(f_32);
          {
            ATerm m_32 = NULL;
            t = g_68(t);
            {
              k_32 = t;
              {
                ATerm n_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_32)), not_null(i_32));
                {
                  n_32 = t;
                  if(((m_32 != NULL) && (m_32 != n_32)))
                    _fail(n_32);
                  else
                    m_32 = n_32;
                }
                t = not_null(m_32);
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
  ATerm w_32 = NULL;
  ATerm f_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_32 = NULL;
      t = term_k_14;
      {
        t = get_config_0(t);
        {
          x_32 = t;
          if(((w_32 != NULL) && (w_32 != x_32)))
            _fail(x_32);
          else
            w_32 = x_32;
        }
      }
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = f_16;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm y_32 = NULL;
            y_32 = t;
            if(((w_32 != NULL) && (w_32 != y_32)))
              _fail(y_32);
            else
              w_32 = y_32;
            return(t);
          }
          t = Program_1(t, i_2);
          return(t);
        }
        t = option_defined_1(t, h_2);
      }
    }
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        t = not_null(w_32);
        return(t);
      }
      t = short_description_1(t, k_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_2);
    {
      t = term_n_16;
      {
        t = echo_0(t);
        {
          t = term_s_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_2 (ATerm t)
                {
                  ATerm z_32 = NULL;
                  ATerm a_33 = NULL;
                  a_33 = t;
                  if(((z_32 != NULL) && (z_32 != a_33)))
                    _fail(a_33);
                  else
                    z_32 = a_33;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_32)), term_t_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_2);
                {
                  ATerm m_2 (ATerm t)
                  {
                    ATerm b_33 = NULL;
                    ATerm c_33 = NULL;
                    ATerm n_2 (ATerm t)
                    {
                      t = not_null(w_32);
                      return(t);
                    }
                    t = long_description_1(t, n_2);
                    {
                      c_33 = t;
                      if(((b_33 != NULL) && (b_33 != c_33)))
                        _fail(c_33);
                      else
                        b_33 = c_33;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_33)), term_a_17);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_2);
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
  ATerm b_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = b_17;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_68 (ATerm))
{
  ATerm m_33 = NULL,n_33 = NULL;
  m_33 = t;
  l_33 :
  if(match_cons(m_33, sym_Undefined_1))
    {
      n_33 = ATgetArgument(m_33, 0);
      {
        ATerm q_33 = NULL,s_33 = NULL;
        ATerm r_33 = NULL;
        t = SSLgetAnnotations(not_null(m_33));
        {
          r_33 = t;
          if(((q_33 != NULL) && (q_33 != r_33)))
            _fail(r_33);
          else
            q_33 = r_33;
        }
        {
          t = not_null(n_33);
          {
            ATerm u_33 = NULL;
            t = h_68(t);
            {
              s_33 = t;
              {
                ATerm v_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_33)), not_null(q_33));
                {
                  v_33 = t;
                  if(((u_33 != NULL) && (u_33 != v_33)))
                    _fail(v_33);
                  else
                    u_33 = v_33;
                }
                t = not_null(u_33);
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
ATerm fetch_1 (ATerm t, ATerm y_82 (ATerm))
{
  ATerm a_34 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_82, _id);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = Cons_2(t, _id, a_34);
      }
    return(t);
  }
  t = a_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_99 (ATerm))
{
  t = fetch_1(t, z_99);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  b_34 :
  if(((ATgetType(c_34) == AT_LIST) && ATisEmpty(c_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
        {
          d_34 = ATgetFirst((ATermList) c_34);
          e_34 = (ATerm) ATgetNext((ATermList) c_34);
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
  ATerm j_17;
  j_17 = t;
  {
    ATerm h_34 = NULL;
    ATerm k_34 = NULL;
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm i_34 = NULL;
          ATerm j_34 = NULL;
          j_34 = t;
          if(((i_34 != NULL) && (i_34 != j_34)))
            _fail(j_34);
          else
            i_34 = j_34;
          t = (ATerm) ATinsert(ATempty, not_null(i_34));
        }
      }
    {
      k_34 = t;
      if(((h_34 != NULL) && (h_34 != k_34)))
        _fail(k_34);
      else
        h_34 = k_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(h_34));
      t = printnl_0(t);
    }
  }
  t = j_17;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_k_14;
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
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  q_34 :
  if(match_cons(v_34, sym_Help_0))
    {
      ATerm x_34 = NULL,z_34 = NULL;
      ATerm w_17;
      w_17 = t;
      {
        ATerm y_34 = NULL;
        t = SSLgetAnnotations(not_null(v_34));
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
      }
      t = w_17;
      {
        ATerm a_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        t = not_null(z_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_75(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm g_35 = NULL;
        g_35 = t;
        e_35 :
        if(!(match_string(g_35, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_g_18;
        t = set_config_0(t);
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_l_18;
        return(t);
      }
      t = Option_3(t, p_2, t_2, x_2);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm h_35 = NULL;
          h_35 = t;
          f_35 :
          if(!(match_string(h_35, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_3 (ATerm t)
        {
          t = term_g_18;
          {
            t = set_config_0(t);
            {
              t = term_n_18;
              t = set_config_0(t);
            }
          }
          t = term_o_18;
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_q_18;
          return(t);
        }
        t = Option_3(t, y_2, d_3, h_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
  k_35 = t;
  j_35 :
  if(match_cons(k_35, sym__2))
    {
      l_35 = ATgetArgument(k_35, 0);
      m_35 = ATgetArgument(k_35, 1);
      t = SSL_table_get(not_null(l_35), not_null(m_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym__3))
    {
      u_35 = ATgetArgument(t_35, 0);
      v_35 = ATgetArgument(t_35, 1);
      w_35 = ATgetArgument(t_35, 2);
      {
        ATerm x_18;
        x_18 = t;
        {
          ATerm a_36 = NULL;
          ATerm b_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_35), not_null(v_35));
          {
            ATerm y_18 = t;
            int z_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_18);
              }
            else
              {
                t = y_18;
                t = (ATerm) ATempty;
              }
            {
              b_36 = t;
              if(((a_36 != NULL) && (a_36 != b_36)))
                _fail(b_36);
              else
                a_36 = b_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_35), not_null(v_35), (ATerm) ATinsert(CheckATermList(not_null(a_36)), not_null(w_35)));
            t = table_put_0(t);
          }
        }
        t = x_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_101 (ATerm))
{
  ATerm f_36 = NULL;
  ATerm l_36 = NULL;
  t = term_f_8;
  {
    t = e_101(t);
    {
      l_36 = t;
      if(((f_36 != NULL) && (f_36 != l_36)))
        _fail(l_36);
      else
        f_36 = l_36;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_16, term_r_16, not_null(f_36));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_string(r_36, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
        {
          s_36 = ATgetFirst((ATermList) r_36);
          t_36 = (ATerm) ATgetNext((ATermList) r_36);
          {
            ATerm w_36 = NULL;
            ATerm a_19;
            a_19 = t;
            {
              t = not_null(s_36);
              t = a_0(t);
            }
            t = a_19;
            {
              ATerm x_36 = NULL;
              t = term_f_8;
              {
                t = b_0(t);
                {
                  x_36 = t;
                  if(((w_36 != NULL) && (w_36 != x_36)))
                    _fail(x_36);
                  else
                    w_36 = x_36;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_36)), not_null(w_36));
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
  ATerm n_3 (ATerm t)
  {
    ATerm c_37 = NULL;
    c_37 = t;
    b_37 :
    if(!(match_string(c_37, "--help")))
      {
        if(!(match_string(c_37, "-h")))
          {
            if(!(match_string(c_37, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_h_19;
    {
      t = set_config_0(t);
      t = term_i_19;
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_j_19;
    return(t);
  }
  t = Option_3(t, n_3, o_3, p_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(((ATgetType(f_37) == AT_LIST) && !(ATisEmpty(f_37))))
    {
      g_37 = ATgetFirst((ATermList) f_37);
      h_37 = (ATerm) ATgetNext((ATermList) f_37);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_37)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_37)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  q_37 :
  if(((ATgetType(r_37) == AT_LIST) && !(ATisEmpty(r_37))))
    {
      s_37 = ATgetFirst((ATermList) r_37);
      t_37 = (ATerm) ATgetNext((ATermList) r_37);
      {
        ATerm x_37 = NULL,z_37 = NULL;
        ATerm y_37 = NULL;
        t = SSLgetAnnotations(not_null(r_37));
        {
          y_37 = t;
          if(((x_37 != NULL) && (x_37 != y_37)))
            _fail(y_37);
          else
            x_37 = y_37;
        }
        {
          t = not_null(s_37);
          {
            ATerm b_38 = NULL;
            t = a_62(t);
            {
              z_37 = t;
              {
                t = not_null(t_37);
                {
                  ATerm d_38 = NULL;
                  t = b_62(t);
                  {
                    b_38 = t;
                    {
                      ATerm e_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_38)), not_null(z_37)), not_null(x_37));
                      {
                        e_38 = t;
                        if(((d_38 != NULL) && (d_38 != e_38)))
                          _fail(e_38);
                        else
                          d_38 = e_38;
                      }
                      t = not_null(d_38);
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
  ATerm o_38 = NULL;
  o_38 = t;
  n_38 :
  if(((ATgetType(o_38) == AT_LIST) && ATisEmpty(o_38)))
    {
      {
        ATerm q_38 = NULL,s_38 = NULL;
        ATerm k_19;
        k_19 = t;
        {
          ATerm r_38 = NULL;
          t = SSLgetAnnotations(not_null(o_38));
          {
            r_38 = t;
            if(((q_38 != NULL) && (q_38 != r_38)))
              _fail(r_38);
            else
              q_38 = r_38;
          }
        }
        t = k_19;
        {
          ATerm t_38 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_38));
          {
            t_38 = t;
            if(((s_38 != NULL) && (s_38 != t_38)))
              _fail(t_38);
            else
              s_38 = t_38;
          }
          t = not_null(s_38);
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
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym__2))
    {
      a_39 = ATgetArgument(z_38, 0);
      b_39 = ATgetArgument(z_38, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_9, not_null(a_39), not_null(b_39));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_101 (ATerm))
{
  ATerm l_19;
  l_19 = t;
  {
    ATerm r_3 (ATerm t)
    {
      t = term_m_19;
      t = c_101(t);
      return(t);
    }
    t = try_1(t, r_3);
  }
  t = l_19;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm j_39 = NULL;
      ATerm q_19;
      q_19 = t;
      {
        ATerm h_39 = NULL;
        ATerm i_39 = NULL;
        i_39 = t;
        if(((h_39 != NULL) && (h_39 != i_39)))
          _fail(i_39);
        else
          h_39 = i_39;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(h_39));
          t = set_config_0(t);
        }
      }
      t = q_19;
      {
        ATerm k_39 = NULL;
        k_39 = t;
        if(((j_39 != NULL) && (j_39 != k_39)))
          _fail(k_39);
        else
          j_39 = k_39;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_39));
      }
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              {
                t = c_101(t);
                t = Cons_2(t, _id, t_3);
              }
            }
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_3, t_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  ATerm w_19;
  w_19 = t;
  {
    ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
    t_39 = t;
    p_39 :
    if(match_cons(t_39, sym__3))
      {
        u_39 = ATgetArgument(t_39, 0);
        v_39 = ATgetArgument(t_39, 1);
        w_39 = ATgetArgument(t_39, 2);
        {
          if(((q_39 != NULL) && (q_39 != u_39)))
            _fail(u_39);
          else
            q_39 = u_39;
          {
            if(((r_39 != NULL) && (r_39 != v_39)))
              _fail(v_39);
            else
              r_39 = v_39;
            {
              if(((s_39 != NULL) && (s_39 != w_39)))
                _fail(w_39);
              else
                s_39 = w_39;
              t = SSL_table_put(not_null(q_39), not_null(r_39), not_null(s_39));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_101 (ATerm))
{
  ATerm z_39 = NULL;
  ATerm a_20;
  a_20 = t;
  {
    t = term_b_20;
    t = table_put_0(t);
  }
  t = a_20;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm c_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_101(t);
          ;
          LocalPopChoice(d_20);
        }
      else
        {
          t = c_20;
          {
            ATerm i_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(j_20);
              }
            else
              {
                t = i_20;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, u_3);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_20;
            q_20 = t;
            {
              ATerm r_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = r_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = q_20;
            {
              t = system_usage_0(t);
              {
                t = term_e_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            {
              ATerm v_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_20;
                  y_20 = t;
                  {
                    t = term_f_18;
                    t = get_config_0(t);
                  }
                  t = y_20;
                  {
                    t = system_about_0(t);
                    {
                      t = term_e_12;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = v_20;
                  {
                    ATerm w_3 (ATerm t)
                    {
                      ATerm x_3 (ATerm t)
                      {
                        ATerm a_40 = NULL;
                        a_40 = t;
                        if(((z_39 != NULL) && (z_39 != a_40)))
                          _fail(a_40);
                        else
                          z_39 = a_40;
                        return(t);
                      }
                      t = Undefined_1(t, x_3);
                      return(t);
                    }
                    t = option_defined_1(t, w_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), term_z_20));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_n_8;
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
      t = try_1(t, v_3);
      {
        ATerm a_21;
        a_21 = t;
        {
          t = term_q_16;
          t = table_destroy_0(t);
        }
        t = a_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm))
{
  t = parse_options_1(t, b_99);
  {
    t = store_options_0(t);
    {
      t = d_99(t);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_99);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_99(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_98(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_3, s_98, t_98, a_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm n_21;
      n_21 = t;
      {
        ATerm d_40 = NULL;
        ATerm e_40 = NULL;
        t = term_k_14;
        {
          t = get_config_0(t);
          {
            e_40 = t;
            if(((d_40 != NULL) && (d_40 != e_40)))
              _fail(e_40);
            else
              d_40 = e_40;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, not_null(d_40)));
          t = printnl_0(t);
        }
      }
      t = n_21;
      return(t);
    }
    t = if_verbose2_1(t, g_4);
    return(t);
  }
  t = iowrap_4(t, k_98, l_98, m_98, c_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm))
{
  t = iowrap_3(t, i_98, j_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    t = _2(t, _id, f_98);
    return(t);
  }
  t = iowrap_2(t, m_4, _fail);
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
