#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
static Symbol sym_F__OK_0;
static Symbol sym_W__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_ErrorNumber_1;
static Symbol sym_Path_1;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
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
static Symbol sym_Some_1;
static Symbol sym_None_0;
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
static Symbol sym_XtcConf_4;
static Symbol sym_Tool_1;
static Symbol sym_Import_0;
static Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
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
  sym_XtcConf_4 = ATmakeSymbol("XtcConf", 4, ATfalse);
  ATprotectSymbol(sym_XtcConf_4);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
static ATerm term_f_90;
static ATerm term_e_90;
static ATerm term_x_89;
static ATerm term_m_89;
static ATerm term_j_89;
static ATerm term_i_89;
static ATerm term_h_89;
static ATerm term_c_89;
static ATerm term_b_89;
static ATerm term_a_89;
static ATerm term_z_88;
static ATerm term_u_88;
static ATerm term_t_88;
static ATerm term_s_88;
static ATerm term_r_88;
static ATerm term_q_88;
static ATerm term_p_88;
static ATerm term_o_88;
static ATerm term_j_88;
static ATerm term_i_88;
static ATerm term_h_88;
static ATerm term_w_87;
static ATerm term_n_87;
static ATerm term_m_87;
static ATerm term_l_87;
static ATerm term_k_87;
static ATerm term_j_87;
static ATerm term_g_87;
static ATerm term_z_86;
static ATerm term_y_86;
static ATerm term_x_86;
static ATerm term_s_86;
static ATerm term_p_86;
static ATerm term_o_86;
static ATerm term_n_86;
static ATerm term_m_86;
static ATerm term_l_86;
static ATerm term_e_86;
static ATerm term_d_86;
static ATerm term_c_86;
static ATerm term_b_86;
static ATerm term_a_86;
static ATerm term_z_85;
static ATerm term_y_85;
static ATerm term_x_85;
static ATerm term_w_85;
static ATerm term_t_85;
static ATerm term_b_85;
static ATerm term_y_84;
static ATerm term_x_84;
static ATerm term_y_83;
static ATerm term_x_83;
static ATerm term_w_83;
static ATerm term_v_83;
static ATerm term_o_83;
static ATerm term_m_82;
static ATerm term_g_82;
static ATerm term_b_82;
static ATerm term_y_81;
static ATerm term_r_81;
static ATerm term_p_81;
static ATerm term_j_81;
static ATerm term_f_80;
static ATerm term_o_79;
static ATerm term_r_76;
static ATerm term_t_75;
static ATerm term_s_75;
static ATerm term_a_75;
static ATerm term_u_74;
static ATerm term_t_74;
static ATerm term_q_74;
static ATerm term_n_74;
static ATerm term_m_74;
static ATerm term_l_74;
static ATerm term_r_73;
static ATerm term_q_73;
static ATerm term_e_72;
static ATerm term_d_72;
static ATerm term_c_72;
static ATerm term_b_72;
static ATerm term_s_71;
static ATerm term_r_71;
static ATerm term_q_71;
static ATerm term_p_71;
static ATerm term_o_71;
static ATerm term_u_70;
static ATerm term_k_70;
static ATerm term_f_70;
static ATerm term_e_70;
static ATerm term_d_70;
static ATerm term_c_70;
static ATerm term_b_70;
static ATerm term_x_69;
static ATerm term_k_66;
static ATerm term_h_66;
static ATerm term_d_66;
static ATerm term_w_65;
static ATerm term_v_65;
static ATerm term_u_65;
static ATerm term_m_65;
static ATerm term_k_63;
static ATerm term_i_61;
static ATerm term_f_61;
static ATerm term_e_61;
static ATerm term_d_61;
static ATerm term_y_60;
static ATerm term_x_60;
static ATerm term_w_60;
static ATerm term_m_60;
static ATerm term_j_60;
static ATerm term_z_59;
static ATerm term_y_59;
static ATerm term_s_59;
static ATerm term_r_57;
static ATerm term_e_57;
static ATerm term_p_56;
static ATerm term_o_56;
static ATerm term_n_56;
static ATerm term_z_55;
static ATerm term_y_55;
static ATerm term_q_55;
static ATerm term_i_55;
static ATerm term_f_55;
static ATerm term_a_55;
static ATerm term_z_54;
static ATerm term_m_54;
static ATerm term_k_53;
static ATerm term_a_52;
static ATerm term_z_51;
static ATerm term_r_49;
static ATerm term_o_49;
static ATerm term_l_49;
static ATerm term_d_49;
static ATerm term_y_47;
static ATerm term_x_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_t_47;
static ATerm term_s_47;
static ATerm term_h_46;
static ATerm term_g_46;
static ATerm term_f_46;
static ATerm term_e_46;
static ATerm term_f_43;
static ATerm term_a_43;
static ATerm term_w_42;
static ATerm term_h_42;
static ATerm term_c_42;
static ATerm term_p_38;
static ATerm term_y_37;
static ATerm term_e_35;
static ATerm term_d_35;
static ATerm term_c_35;
static ATerm term_w_34;
static ATerm term_t_34;
static ATerm term_s_34;
static ATerm term_p_34;
static ATerm term_o_34;
static ATerm term_n_34;
static ATerm term_l_34;
static ATerm term_k_34;
static ATerm term_j_34;
static ATerm term_i_34;
static ATerm term_h_34;
static ATerm term_g_34;
static ATerm term_f_34;
static ATerm term_e_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_a_34;
static ATerm term_z_33;
static ATerm term_w_33;
static ATerm term_v_33;
static ATerm term_u_33;
static ATerm term_r_33;
static ATerm term_y_31;
static ATerm term_o_28;
static ATerm term_c_28;
static ATerm term_k_27;
static ATerm term_v_26;
static ATerm term_u_26;
static ATerm term_y_21;
static ATerm term_x_21;
static ATerm term_w_21;
static ATerm term_v_21;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_q_19;
static ATerm term_m_19;
static ATerm term_h_19;
static ATerm term_d_19;
static ATerm term_v_18;
static ATerm term_u_18;
static ATerm term_p_18;
static ATerm term_n_18;
static ATerm term_m_18;
static ATerm term_l_18;
static ATerm term_j_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_y_17;
static ATerm term_x_17;
static ATerm term_w_17;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_t_17;
static ATerm term_s_17;
static ATerm term_r_17;
static ATerm term_q_17;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_n_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_k_17;
static ATerm term_j_17;
static ATerm term_i_17;
static ATerm term_h_17;
static ATerm term_g_17;
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_c_17;
static ATerm term_b_17;
static ATerm term_a_17;
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_t_16;
static ATerm term_s_16;
static ATerm term_r_16;
static ATerm term_q_16;
static ATerm term_p_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_j_16;
static ATerm term_i_16;
static ATerm term_h_16;
static ATerm term_g_16;
static ATerm term_f_16;
static ATerm term_e_16;
static ATerm term_d_16;
static ATerm term_c_16;
static ATerm term_b_16;
static ATerm term_a_16;
static ATerm term_z_15;
static ATerm term_y_15;
static ATerm term_x_15;
static ATerm term_w_15;
static ATerm term_v_15;
static ATerm term_u_15;
static ATerm term_t_15;
static ATerm term_s_15;
static ATerm term_r_15;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_o_15;
static ATerm term_n_15;
static ATerm term_m_15;
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_j_15;
static ATerm term_i_15;
static ATerm term_h_15;
static ATerm term_g_15;
static ATerm term_f_15;
static ATerm term_e_15;
static ATerm term_d_15;
static ATerm term_c_15;
static ATerm term_b_15;
static ATerm term_a_15;
static ATerm term_z_14;
static ATerm term_y_14;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_v_14;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_p_14;
static ATerm term_o_14;
static ATerm term_n_14;
static ATerm term_m_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_h_14;
static ATerm term_g_14;
static ATerm term_f_14;
static ATerm term_e_14;
static ATerm term_d_14;
static ATerm term_c_14;
static ATerm term_b_14;
static ATerm term_a_14;
static ATerm term_z_13;
static ATerm term_y_13;
static ATerm term_x_13;
static ATerm term_w_13;
static ATerm term_v_13;
static ATerm term_u_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_n_13;
static ATerm term_m_13;
static ATerm term_l_13;
static ATerm term_k_13;
static ATerm term_j_13;
static ATerm term_f_13;
static ATerm term_e_13;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_o_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-transform", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_j_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_String_1, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Some_1, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_File_1, term_v_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Input_1, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Some_1, term_x_21);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_u_26);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Type_1, term_u_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Some_1, term_v_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Default_1, term_z_33);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Some_1, term_a_34);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_d_34);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_f_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_h_34);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Some_1, term_k_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_String_1, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Some_1, term_o_34);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_File_1, term_p_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Output_1, term_s_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Some_1, term_t_34);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Streams_3, term_y_21, term_w_34, term_p_18);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Exec_1, term_c_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_d_35);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_e_46, term_f_46);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym__2, term_x_47, term_t_12);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym_String_1, term_z_59);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_y_59, term_j_60);
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym_String_1, term_w_60);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_y_59, term_x_60);
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym_String_1, term_d_61);
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_y_59, term_e_61);
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(sym_String_1, term_i_61);
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_y_59, term_k_63);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(sym_String_1, term_u_65);
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_y_59, term_v_65);
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(sym_String_1, term_d_66);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_y_59, term_h_66);
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_x_69);
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(sym_Template_2, term_c_70, term_p_18);
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_b_70, term_d_70);
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_p_81));
  term_p_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_y_81));
  term_y_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_x_83);
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym__2, term_q_55, term_m_54);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(sym__2, term_q_74, term_t_74);
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_74);
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(sym__2, term_m_18, term_t_12);
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(sym__2, term_m_86, term_t_12);
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_86));
  term_s_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(sym__2, term_s_47, term_t_12);
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_87));
  term_j_87 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_87));
  term_n_87 = (ATerm) ATmakeAppl(sym__2, term_l_87, term_m_87);
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(sym__2, term_o_88, term_t_12);
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(sym__2, term_r_88, term_t_12);
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(sym__2, term_z_88, term_t_12);
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_89));
  term_c_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_89));
  term_i_89 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_89));
  term_j_89 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(sym__3, term_l_87, term_m_87, (ATerm) ATempty);
  ATprotect(&(term_x_89));
  term_x_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_90));
  term_e_90 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr-xtd", 0, ATtrue));
  ATprotect(&(term_f_90));
  term_f_90 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_transform_1_0 (ATerm a_153 (ATerm), ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm h_153 (ATerm), ATerm i_153 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm b_153 (ATerm), ATerm c_153 (ATerm), ATerm t);
ATerm stderr_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
ATerm get_last_error_0_0 (ATerm t);
ATerm rename_file_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm m_3 (ATerm), ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_24 (ATerm t_23, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm xtc_fetch_loc_0_0 (ATerm t);
ATerm xtc_find_loc_1_0 (ATerm p_153 (ATerm), ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm execvp_0_0 (ATerm t);
ATerm dup2_0_0 (ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm p_123 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm exec_http_0_1 (ATerm x_87, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm l_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm k_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm k_30 (ATerm q_29, ATerm r_29, ATerm t);
static ATerm l_30 (ATerm b_30, ATerm c_30, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm o_31 (ATerm s_30, ATerm t_30, ATerm t);
static ATerm p_31 (ATerm d_31, ATerm e_31, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm y_33 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t);
static ATerm b_34 (ATerm c_33, ATerm d_33, ATerm e_33, ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm n_36 (ATerm q_34, ATerm r_34, ATerm u_34, ATerm v_34, ATerm x_34, ATerm y_34, ATerm z_34, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t);
static ATerm a_49 (ATerm g_43, ATerm h_43, ATerm i_43, ATerm j_43, ATerm k_43, ATerm t);
static ATerm f_49 (ATerm w_43, ATerm x_43, ATerm y_43, ATerm z_43, ATerm a_44, ATerm t);
static ATerm g_49 (ATerm j_44, ATerm k_44, ATerm l_44, ATerm m_44, ATerm n_44, ATerm t);
static ATerm h_49 (ATerm z_44, ATerm a_45, ATerm b_45, ATerm c_45, ATerm d_45, ATerm t);
static ATerm i_49 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm p_45, ATerm q_45, ATerm t);
static ATerm j_49 (ATerm c_46, ATerm k_46, ATerm l_46, ATerm m_46, ATerm n_46, ATerm t);
static ATerm m_49 (ATerm x_46, ATerm y_46, ATerm z_46, ATerm a_47, ATerm b_47, ATerm t);
static ATerm n_49 (ATerm n_47, ATerm o_47, ATerm p_47, ATerm q_47, ATerm r_47, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm j_3, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm i_3, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm g_3, ATerm h_3, ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm k_1 (ATerm), ATerm n_1 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm c_1, ATerm d_1, ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm l_64 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm t);
static ATerm m_64 (ATerm y_61, ATerm z_61, ATerm t);
static ATerm n_64 (ATerm l_62, ATerm t);
static ATerm o_64 (ATerm q_62, ATerm t);
static ATerm p_64 (ATerm v_62, ATerm w_62, ATerm x_62, ATerm t);
static ATerm q_64 (ATerm d_63, ATerm e_63, ATerm f_63, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t);
ATerm warn_0_1 (ATerm w_78, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm a_1 (ATerm), ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm z_0 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t);
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm xtc_command_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm close_0_0 (ATerm t);
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t);
ATerm err_0_1 (ATerm v_78, ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm w_0, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t);
ATerm dbg_0_1 (ATerm y_78, ATerm t);
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t);
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm xtc_search_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t);
static ATerm r_6 (ATerm t);
ATerm xtc_register_0_1 (ATerm t_0, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t);
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t);
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm if_log_severity_1_1 (ATerm p_150 (ATerm), ATerm f_79, ATerm t);
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t);
ATerm notice_0_1 (ATerm x_78, ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
static ATerm k_104 (ATerm b_104, ATerm c_104, ATerm t);
static ATerm l_104 (ATerm f_104, ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t);
ATerm init_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm z_133 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm xtc_load_0_1 (ATerm v_79, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm xtc_init_0_2 (ATerm y_79, ATerm z_79, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm getenv_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_init_0_0 (ATerm t);
ATerm XtcQuery_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t);
ATerm XtcQuery_1_0 (ATerm f_110 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm xtc_desugar_query_0_0 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_131 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t);
ATerm is_url_http_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_tokenize_1_0 (ATerm c_133 (ATerm), ATerm t);
ATerm string_tokenize_0_1 (ATerm d_46, ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
static ATerm i_116 (ATerm b_116, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
static ATerm i_117 (ATerm d_117, ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_pop_rm_0_0 (ATerm t);
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t);
ATerm remove_file_0_0 (ATerm t);
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm general_options_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm aterm_output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm k_145 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm j_145 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm override_system_usage_0_0 (ATerm t);
ATerm system_usage_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm override_system_about_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
ATerm ticks_to_seconds_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm foldr_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t);
ATerm crush_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm try_1_0 (ATerm x_114 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t);
ATerm hashtable_put_0_2 (ATerm o_59, ATerm p_59, ATerm t);
ATerm hashtable_get_0_1 (ATerm r_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_59, ATerm x_59, ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm l_56, ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t);
ATerm xtc_wrap_2_0 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm o_152 (ATerm), ATerm p_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm m_152 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm main_inherit_test_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm a_153 (ATerm), ATerm t)
{
  t = xtc_transform_2_0(a_153, a_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = xtc_new_file_0_0(t);
  if(((e_22 != NULL) && (e_22 != t)))
    _fail(t);
  else
    e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_22), not_null(f_22));
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_22));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm h_153 (ATerm), ATerm i_153 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(h_153, i_153, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  ATerm k_22 = NULL;
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm b_153 (ATerm), ATerm c_153 (ATerm), ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_22 = NULL,j_22 = NULL;
      if(((j_22 != NULL) && (j_22 != t)))
        _fail(t);
      else
        j_22 = t;
      t = term_o_12;
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = not_null(j_22);
      t = dbg_0_1(not_null(i_22), t);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(d_0, t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = stdin_0_0(t);
          }
      }
      LocalPopChoice(n_12);
      t = xtc_transform_file_2_0(b_153, c_153, t);
    }
  else
    {
      t = m_12;
      t = xtc_transform_term_2_0(b_153, c_153, t);
    }
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
ATerm get_last_error_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  t = get_errno_0_0(t);
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  t = (ATerm) ATmakeAppl(sym_ErrorNumber_1, not_null(l_22));
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_22 != NULL) && (o_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_22 = ATgetArgument(t, 0);
      if(((n_22 != NULL) && (n_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_rename(not_null(o_22), not_null(n_22));
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm p_22 = NULL;
          t = get_last_error_0_0(t);
          if(match_cons(t, sym_ErrorNumber_1))
            {
              if(((p_22 != NULL) && (p_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_t_12;
          t = EXDEV_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), not_null(n_22));
          t = copy_file_0_0(t);
          t = not_null(o_22);
          t = remove_file_0_0(t);
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm m_3 (ATerm), ATerm t)
{
  static ATerm h_23 (ATerm t_22, ATerm u_22, ATerm t);
  static ATerm i_23 (ATerm x_22, ATerm y_22, ATerm t);
  static ATerm h_23 (ATerm t_22, ATerm u_22, ATerm t)
  {
    ATerm v_22 = NULL,w_22 = NULL;
    t = not_null(t_22);
    if(((v_22 != NULL) && (v_22 != t)))
      _fail(t);
    else
      v_22 = t;
    t = not_null(u_22);
    if(((w_22 != NULL) && (w_22 != t)))
      _fail(t);
    else
      w_22 = t;
    t = m_3(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_22), term_u_12);
    t = copy_file_0_0(t);
    t = not_null(v_22);
    t = remove_file_0_0(t);
    t = term_u_12;
    return(t);
  }
  static ATerm i_23 (ATerm x_22, ATerm y_22, ATerm t)
  {
    ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
    t = not_null(x_22);
    if(((z_22 != NULL) && (z_22 != t)))
      _fail(t);
    else
      z_22 = t;
    t = not_null(y_22);
    if(((b_23 != NULL) && (b_23 != t)))
      _fail(t);
    else
      b_23 = t;
    t = m_3(t);
    if(((a_23 != NULL) && (a_23 != t)))
      _fail(t);
    else
      a_23 = t;
    {
      ATerm v_12 = t;
      if((PushChoice() == 0))
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              {
                ATerm c_23 = NULL;
                if(((c_23 != NULL) && (c_23 != t)))
                  _fail(t);
                else
                  c_23 = t;
                if(((z_22 != NULL) && (z_22 != t)))
                  _fail(t);
                else
                  z_22 = t;
                t = not_null(c_23);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_12;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(a_23));
    t = rename_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_23));
    return(t);
  }
  ATerm d_23 = NULL,e_23 = NULL;
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((e_23 != NULL) && (e_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_23(not_null(e_23), not_null(d_23), t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_23(not_null(e_23), not_null(d_23), t);
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
              {
                ATerm f_23 = NULL,g_23 = NULL;
                t = not_null(e_23);
                if(((f_23 != NULL) && (f_23 != t)))
                  _fail(t);
                else
                  f_23 = t;
                t = not_null(d_23);
                if(((g_23 != NULL) && (g_23 != t)))
                  _fail(t);
                else
                  g_23 = t;
                t = m_3(t);
                if(((f_23 != NULL) && (f_23 != t)))
                  _fail(t);
                else
                  f_23 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_23));
              }
            }
        }
      }
  }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((j_23 != NULL) && (j_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(j_23));
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL,o_23 = NULL;
        t = not_null(m_23);
        if(((o_23 != NULL) && (o_23 != t)))
          _fail(t);
        else
          o_23 = t;
        t = not_null(m_23);
        if(((n_23 != NULL) && (n_23 != t)))
          _fail(t);
        else
          n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), term_e_13);
        t = open_stream_0_0(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
          ATerm p_23 = NULL,q_23 = NULL;
          t = not_null(m_23);
          if(((q_23 != NULL) && (q_23 != t)))
            _fail(t);
          else
            q_23 = t;
          t = not_null(m_23);
          if(((p_23 != NULL) && (p_23 != t)))
            _fail(t);
          else
            p_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(p_23));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = read_from_stream_0_0(t);
  if(((k_23 != NULL) && (k_23 != t)))
    _fail(t);
  else
    k_23 = t;
  t = not_null(l_23);
  t = fclose_0_0(t);
  t = not_null(k_23);
  return(t);
}
static ATerm h_24 (ATerm t_23, ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  t = not_null(t_23);
  if(((x_23 != NULL) && (x_23 != t)))
    _fail(t);
  else
    x_23 = t;
  t = not_null(t_23);
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  t = not_null(x_23);
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  t = SSL_explode_term(not_null(z_23));
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((u_23 != NULL) && (u_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_23);
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  t = not_null(u_23);
  t = concat_0_0(t);
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
            t = not_null(a_24);
            if(((d_24 != NULL) && (d_24 != t)))
              _fail(t);
            else
              d_24 = t;
            t = not_null(b_24);
            if(((e_24 != NULL) && (e_24 != t)))
              _fail(t);
            else
              e_24 = t;
            t = not_null(c_24);
            if(((g_24 != NULL) && (g_24 != t)))
              _fail(t);
            else
              g_24 = t;
            t = not_null(d_24);
            {
              static ATerm g_0 (ATerm t);
              static ATerm g_0 (ATerm t)
              {
                t = not_null(e_24);
                return(t);
              }
              t = at_end_1_0(g_0, t);
            }
            if(((f_24 != NULL) && (f_24 != t)))
              _fail(t);
            else
              f_24 = t;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = h_24(not_null(c_24), t);
          }
      }
    }
  else
    {
      t = h_24(not_null(c_24), t);
    }
  return(t);
}
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = r_141(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(j_24));
    t = execvp_0_0(t);
    t = term_j_13;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((i_24 != NULL) && (i_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_24 = ATgetArgument(t, 0);
      if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(i_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm l_24 = NULL;
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(j_0, t);
  return(t);
}
ATerm xtc_fetch_loc_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_find_loc_1_0 (ATerm p_153 (ATerm), ATerm t)
{
  t = xtc_find_reg_1_0(p_153, t);
  t = xtc_fetch_loc_0_0(t);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_24 != NULL) && (m_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_24 = ATgetArgument(t, 0);
      if(((n_24 != NULL) && (n_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(m_24), not_null(n_24));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_24 = ATgetArgument(t, 0);
      if(((p_24 != NULL) && (p_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(o_24), not_null(p_24));
  return(t);
}
ATerm STDERR__FILENO_0_0 (ATerm t)
{
  t = SSL_STDERR_FILENO();
  return(t);
}
ATerm STDOUT__FILENO_0_0 (ATerm t)
{
  t = SSL_STDOUT_FILENO();
  return(t);
}
ATerm STDIN__FILENO_0_0 (ATerm t)
{
  t = SSL_STDIN_FILENO();
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm q_24 = NULL;
  if(((q_24 != NULL) && (q_24 != t)))
    _fail(t);
  else
    q_24 = t;
  t = SSL_int_to_string(not_null(q_24));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_24 = ATgetArgument(t, 0);
      {
        ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
        t = not_null(t_24);
        if(((w_24 != NULL) && (w_24 != t)))
          _fail(t);
        else
          w_24 = t;
        t = not_null(s_24);
        if(((y_24 != NULL) && (y_24 != t)))
          _fail(t);
        else
          y_24 = t;
        if(((a_25 != NULL) && (a_25 != t)))
          _fail(t);
        else
          a_25 = t;
        t = not_null(w_24);
        t = int_to_string_0_0(t);
        if(((z_24 != NULL) && (z_24 != t)))
          _fail(t);
        else
          z_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_13), not_null(z_24)), term_k_13);
        t = concat_strings_0_0(t);
        if(((x_24 != NULL) && (x_24 != t)))
          _fail(t);
        else
          x_24 = t;
      }
    }
  else
    {
      ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((t_24 != NULL) && (t_24 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_24 = ATgetArgument(t, 0);
          if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_24 = ATgetArgument(t, 1);
          if(((v_24 != NULL) && (v_24 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            v_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(t_24);
      if(((b_25 != NULL) && (b_25 != t)))
        _fail(t);
      else
        b_25 = t;
      t = not_null(u_24);
      if(((c_25 != NULL) && (c_25 != t)))
        _fail(t);
      else
        c_25 = t;
      t = not_null(v_24);
      if(((d_25 != NULL) && (d_25 != t)))
        _fail(t);
      else
        d_25 = t;
      t = not_null(s_24);
      if(((f_25 != NULL) && (f_25 != t)))
        _fail(t);
      else
        f_25 = t;
      if(((h_25 != NULL) && (h_25 != t)))
        _fail(t);
      else
        h_25 = t;
      t = not_null(c_25);
      t = int_to_string_0_0(t);
      if(((g_25 != NULL) && (g_25 != t)))
        _fail(t);
      else
        g_25 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_25)), term_n_13), not_null(g_25)), term_m_13), not_null(b_25));
      t = concat_strings_0_0(t);
      if(((e_25 != NULL) && (e_25 != t)))
        _fail(t);
      else
        e_25 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm i_25 = NULL;
  static ATerm l_0 (ATerm t);
  static ATerm l_0 (ATerm t)
  {
    t = p_123(t);
    if(((i_25 != NULL) && (i_25 != t)))
      _fail(t);
    else
      i_25 = t;
    return(t);
  }
  t = fetch_1_0(l_0, t);
  t = not_null(i_25);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_25 = NULL;
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_0 (ATerm t);
        static ATerm n_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_13 = ATgetArgument(t, 0);
              if(((j_25 != NULL) && (j_25 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                j_25 = ATgetArgument(t, 1);
              {
                ATerm r_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), term_u_17), term_q_17), term_m_17), term_i_17), term_e_17), term_a_17), term_w_16), term_s_16), term_o_16), term_k_16), term_g_16), term_c_16), term_y_15), term_u_15), term_q_15), term_m_15), term_i_15), term_e_15), term_a_15), term_w_14), term_s_14), term_o_14), term_k_14), term_g_14), term_c_14), term_y_13), term_u_13);
        t = fetch_elem_1_0(n_0, t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(j_25));
      }
  }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      if(((n_25 != NULL) && (n_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_25 = ATgetArgument(t, 1);
      {
        ATerm a_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(n_25);
  {
    ATerm b_18 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_18;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_25)), term_d_18));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_25 = NULL;
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  t = try_1_0(q_0, t);
  t = not_null(k_25);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm o_25 = NULL;
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  t = SSL_waitpid(not_null(o_25));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = fork_0_0(t);
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(r_25);
        t = t_141(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(r_25));
        t = u_141(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm t_25 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm u_25 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((u_25 != NULL) && (u_25 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_25 = ATgetArgument(t, 0);
        if(((t_25 != NULL) && (t_25 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(u_25);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm g_18 = ATgetArgument(t, 0);
        if(((ATgetType(g_18) != AT_INT) || (ATgetInt((ATermInt) g_18) != 0)))
          _fail(t);
        {
          ATerm h_18 = ATgetArgument(t, 1);
        }
        {
          ATerm i_18 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(t_25);
    return(t);
  }
  t = fork_2_0(v_141, s_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  if(((c_26 != NULL) && (c_26 != t)))
    _fail(t);
  else
    c_26 = t;
  t = not_null(f_26);
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  t = STDIN__FILENO_0_0(t);
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_26), not_null(d_26));
  t = dup2_0_0(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = not_null(j_26);
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(h_26));
  t = dup2_0_0(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  if(((n_26 != NULL) && (n_26 != t)))
    _fail(t);
  else
    n_26 = t;
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  t = not_null(n_26);
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = STDERR__FILENO_0_0(t);
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(l_26));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  t = term_j_18;
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = not_null(b_26);
  t = dbg_0_1(not_null(a_26), t);
  if(match_cons(t, sym__3))
    {
      if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_25 = ATgetArgument(t, 0);
      {
        ATerm k_18 = ATgetArgument(t, 1);
        if(match_cons(k_18, sym__3))
          {
            if(((v_25 != NULL) && (v_25 != ATgetArgument(k_18, 0))))
              _fail(ATgetArgument(k_18, 0));
            else
              v_25 = ATgetArgument(k_18, 0);
            if(((w_25 != NULL) && (w_25 != ATgetArgument(k_18, 1))))
              _fail(ATgetArgument(k_18, 1));
            else
              w_25 = ATgetArgument(k_18, 1);
            if(((x_25 != NULL) && (x_25 != ATgetArgument(k_18, 2))))
              _fail(ATgetArgument(k_18, 2));
            else
              x_25 = ATgetArgument(k_18, 2);
          }
        else
          _fail(t);
      }
      if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm v_0 (ATerm t);
    static ATerm v_0 (ATerm t)
    {
      t = not_null(v_25);
      t = option_1_0(y_0, t);
      t = not_null(w_25);
      t = option_1_0(b_1, t);
      t = not_null(x_25);
      t = option_1_0(e_1, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(z_25));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
  }
  t = term_t_12;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm exec_http_0_1 (ATerm x_87, ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_n_18), term_m_18), not_null(s_26));
  t = conc_0_0(t);
  if(((r_26 != NULL) && (r_26 != t)))
    _fail(t);
  else
    r_26 = t;
  t = not_null(x_87);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_26 = ATgetArgument(t, 0);
      if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_26 = ATgetArgument(t, 1);
      if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_26 = ATgetArgument(t, 2);
      {
        ATerm o_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_p_18, not_null(p_26), not_null(q_26), not_null(r_26));
  t = xtc_command_1_0(f_1, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  if(match_cons(t, sym__3))
    {
      if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_26 = ATgetArgument(t, 0);
      if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_26 = ATgetArgument(t, 1);
      if(((a_27 != NULL) && (a_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        a_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(x_26);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm b_27 = NULL,c_27 = NULL;
      t = not_null(z_26);
      if(((c_27 != NULL) && (c_27 != t)))
        _fail(t);
      else
        c_27 = t;
      t = not_null(a_27);
      if(((b_27 != NULL) && (b_27 != t)))
        _fail(t);
      else
        b_27 = t;
      t = exec_http_0_1(not_null(c_27), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          y_26 = ATgetArgument(t, 0);
          {
            ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
            t = not_null(y_26);
            if(((d_27 != NULL) && (d_27 != t)))
              _fail(t);
            else
              d_27 = t;
            t = not_null(z_26);
            if(((f_27 != NULL) && (f_27 != t)))
              _fail(t);
            else
              f_27 = t;
            t = not_null(a_27);
            if(((e_27 != NULL) && (e_27 != t)))
              _fail(t);
            else
              e_27 = t;
            t = exec_http_0_1(not_null(f_27), t);
          }
        }
      else
        {
          ATerm g_27 = NULL,h_27 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(y_26);
          if(((g_27 != NULL) && (g_27 != t)))
            _fail(t);
          else
            g_27 = t;
          t = not_null(a_27);
          if(((h_27 != NULL) && (h_27 != t)))
            _fail(t);
          else
            h_27 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm i_27 = NULL;
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  t = SSL_open(not_null(i_27));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm l_3, ATerm t)
{
  static ATerm a_28 (ATerm n_27, ATerm o_27, ATerm t);
  static ATerm b_28 (ATerm t_27, ATerm t);
  static ATerm a_28 (ATerm n_27, ATerm o_27, ATerm t)
  {
    ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
    t = not_null(n_27);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    t = not_null(o_27);
    if(((r_27 != NULL) && (r_27 != t)))
      _fail(t);
    else
      r_27 = t;
    t = not_null(l_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm q_18 = ATgetArgument(t, 0);
        if(match_cons(q_18, sym_FILE_1))
          {
            if(((s_27 != NULL) && (s_27 != ATgetArgument(q_18, 0))))
              _fail(ATgetArgument(q_18, 0));
            else
              s_27 = ATgetArgument(q_18, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(s_27);
    t = open_0_0(t);
    if(((q_27 != NULL) && (q_27 != t)))
      _fail(t);
    else
      q_27 = t;
    return(t);
  }
  static ATerm b_28 (ATerm t_27, ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
    t = not_null(t_27);
    if(((v_27 != NULL) && (v_27 != t)))
      _fail(t);
    else
      v_27 = t;
    t = not_null(l_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm r_18 = ATgetArgument(t, 0);
        if(match_cons(r_18, sym_FILE_1))
          {
            if(((w_27 != NULL) && (w_27 != ATgetArgument(r_18, 0))))
              _fail(ATgetArgument(r_18, 0));
            else
              w_27 = ATgetArgument(r_18, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(w_27);
    t = open_0_0(t);
    if(((u_27 != NULL) && (u_27 != t)))
      _fail(t);
    else
      u_27 = t;
    return(t);
  }
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(z_27);
  if(match_cons(t, sym_Some_1))
    {
      x_27 = ATgetArgument(t, 0);
      t = a_28(not_null(x_27), not_null(y_27), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = b_28(not_null(y_27), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm k_3, ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  if(((d_28 != NULL) && (d_28 != t)))
    _fail(t);
  else
    d_28 = t;
  if(match_cons(t, sym_Error_1))
    {
      e_28 = ATgetArgument(t, 0);
      {
        ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
        t = not_null(e_28);
        if(((f_28 != NULL) && (f_28 != t)))
          _fail(t);
        else
          f_28 = t;
        t = not_null(d_28);
        if(((h_28 != NULL) && (h_28 != t)))
          _fail(t);
        else
          h_28 = t;
        t = not_null(f_28);
        t = xtc_streamdef_to_fd_0_1(not_null(k_3), t);
        if(((g_28 != NULL) && (g_28 != t)))
          _fail(t);
        else
          g_28 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          e_28 = ATgetArgument(t, 0);
          {
            ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
            t = not_null(e_28);
            if(((i_28 != NULL) && (i_28 != t)))
              _fail(t);
            else
              i_28 = t;
            t = not_null(d_28);
            if(((k_28 != NULL) && (k_28 != t)))
              _fail(t);
            else
              k_28 = t;
            t = not_null(i_28);
            t = xtc_streamdef_to_fd_0_1(not_null(k_3), t);
            if(((j_28 != NULL) && (j_28 != t)))
              _fail(t);
            else
              j_28 = t;
          }
        }
      else
        {
          ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((e_28 != NULL) && (e_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(e_28);
          if(((l_28 != NULL) && (l_28 != t)))
            _fail(t);
          else
            l_28 = t;
          t = not_null(d_28);
          if(((n_28 != NULL) && (n_28 != t)))
            _fail(t);
          else
            n_28 = t;
          t = not_null(l_28);
          t = xtc_streamdef_to_fd_0_1(not_null(k_3), t);
          if(((m_28 != NULL) && (m_28 != t)))
            _fail(t);
          else
            m_28 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm p_28 = NULL,q_28 = NULL;
        if(((p_28 != NULL) && (p_28 != t)))
          _fail(t);
        else
          p_28 = t;
        if(match_cons(t, sym_URL_1))
          {
            q_28 = ATgetArgument(t, 0);
            {
              ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
              t = not_null(q_28);
              if(((r_28 != NULL) && (r_28 != t)))
                _fail(t);
              else
                r_28 = t;
              t = not_null(p_28);
              if(((t_28 != NULL) && (t_28 != t)))
                _fail(t);
              else
                t_28 = t;
              t = not_null(r_28);
              t = xtc_arg_to_string_0_0(t);
              if(((s_28 != NULL) && (s_28 != t)))
                _fail(t);
              else
                s_28 = t;
            }
          }
        else
          {
            ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((q_28 != NULL) && (q_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(q_28);
            if(((u_28 != NULL) && (u_28 != t)))
              _fail(t);
            else
              u_28 = t;
            t = not_null(p_28);
            if(((w_28 != NULL) && (w_28 != t)))
              _fail(t);
            else
              w_28 = t;
            t = not_null(u_28);
            t = xtc_arg_to_string_0_0(t);
            if(((v_28 != NULL) && (v_28 != t)))
              _fail(t);
            else
              v_28 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  if(((z_28 != NULL) && (z_28 != t)))
    _fail(t);
  else
    z_28 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      a_29 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
      {
        ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
        t = not_null(a_29);
        if(((b_29 != NULL) && (b_29 != t)))
          _fail(t);
        else
          b_29 = t;
        t = not_null(y_28);
        if(((c_29 != NULL) && (c_29 != t)))
          _fail(t);
        else
          c_29 = t;
        t = not_null(z_28);
        if(((g_29 != NULL) && (g_29 != t)))
          _fail(t);
        else
          g_29 = t;
        t = not_null(b_29);
        t = xtc_argterm_to_exec_0_0(t);
        if(((d_29 != NULL) && (d_29 != t)))
          _fail(t);
        else
          d_29 = t;
        t = not_null(g_29);
        if(((f_29 != NULL) && (f_29 != t)))
          _fail(t);
        else
          f_29 = t;
        t = not_null(c_29);
        t = xtc_argterm_to_exec_0_0(t);
        if(((e_29 != NULL) && (e_29 != t)))
          _fail(t);
        else
          e_29 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_29)), not_null(d_29));
      }
    }
  else
    {
      ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((a_29 != NULL) && (a_29 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_29);
      if(((h_29 != NULL) && (h_29 != t)))
        _fail(t);
      else
        h_29 = t;
      t = not_null(z_28);
      if(((j_29 != NULL) && (j_29 != t)))
        _fail(t);
      else
        j_29 = t;
      t = not_null(h_29);
      t = xtc_argterm_to_exec_0_0(t);
      if(((i_29 != NULL) && (i_29 != t)))
        _fail(t);
      else
        i_29 = t;
      t = (ATerm) ATinsert(ATempty, not_null(i_29));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm k_30 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  t = not_null(q_29);
  if(((s_29 != NULL) && (s_29 != t)))
    _fail(t);
  else
    s_29 = t;
  t = not_null(r_29);
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  t = not_null(s_29);
  t = xtc_argterm_to_http_0_0(t);
  if(((x_29 != NULL) && (x_29 != t)))
    _fail(t);
  else
    x_29 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_29 = ATgetArgument(t, 0);
      {
        ATerm z_29 = NULL;
        t = not_null(y_29);
        if(((z_29 != NULL) && (z_29 != t)))
          _fail(t);
        else
          z_29 = t;
      }
    }
  else
    {
      ATerm a_30 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((y_29 != NULL) && (y_29 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(y_29);
      if(((a_30 != NULL) && (a_30 != t)))
        _fail(t);
      else
        a_30 = t;
    }
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  t = not_null(w_29);
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_29)), term_u_18);
  t = concat_strings_0_0(t);
  if(((u_29 != NULL) && (u_29 != t)))
    _fail(t);
  else
    u_29 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(u_29)));
  return(t);
}
static ATerm l_30 (ATerm b_30, ATerm c_30, ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  t = not_null(b_30);
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  t = not_null(c_30);
  if(((f_30 != NULL) && (f_30 != t)))
    _fail(t);
  else
    f_30 = t;
  t = not_null(d_30);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm w_18 = t;
    if((PushChoice() == 0))
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(g_1, t);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            t = URL_1_0(h_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_18;
      }
  }
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(e_30)));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm g_30 = NULL;
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm h_30 = NULL;
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((j_30 != NULL) && (j_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_30(not_null(j_30), not_null(i_30), t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = l_30(not_null(j_30), not_null(i_30), t);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(i_1, t);
  return(t);
}
static ATerm o_31 (ATerm s_30, ATerm t_30, ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  t = not_null(s_30);
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  t = not_null(t_30);
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  t = not_null(u_30);
  t = xtc_argterm_to_http_0_0(t);
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_31 = ATgetArgument(t, 0);
      {
        ATerm b_31 = NULL;
        t = not_null(a_31);
        if(((b_31 != NULL) && (b_31 != t)))
          _fail(t);
        else
          b_31 = t;
      }
    }
  else
    {
      ATerm c_31 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((a_31 != NULL) && (a_31 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_31);
      if(((c_31 != NULL) && (c_31 != t)))
        _fail(t);
      else
        c_31 = t;
    }
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = not_null(y_30);
  if(((x_30 != NULL) && (x_30 != t)))
    _fail(t);
  else
    x_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_30)), term_d_19);
  t = concat_strings_0_0(t);
  if(((w_30 != NULL) && (w_30 != t)))
    _fail(t);
  else
    w_30 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(w_30)));
  return(t);
}
static ATerm p_31 (ATerm d_31, ATerm e_31, ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  t = not_null(d_31);
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  t = not_null(e_31);
  if(((j_31 != NULL) && (j_31 != t)))
    _fail(t);
  else
    j_31 = t;
  t = not_null(f_31);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm e_19 = t;
    if((PushChoice() == 0))
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(j_1, t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = URL_1_0(l_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_19;
      }
  }
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  t = not_null(j_31);
  if(((i_31 != NULL) && (i_31 != t)))
    _fail(t);
  else
    i_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_31)), term_h_19);
  t = concat_strings_0_0(t);
  if(((h_31 != NULL) && (h_31 != t)))
    _fail(t);
  else
    h_31 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(h_31)));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm k_31 = NULL;
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm l_31 = NULL;
  if(((l_31 != NULL) && (l_31 != t)))
    _fail(t);
  else
    l_31 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  if(((m_31 != NULL) && (m_31 != t)))
    _fail(t);
  else
    m_31 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((n_31 != NULL) && (n_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_31(not_null(n_31), not_null(m_31), t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = p_31(not_null(n_31), not_null(m_31), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,m_1 = NULL,a_12 = NULL;
  if(((v_31 != NULL) && (v_31 != t)))
    _fail(t);
  else
    v_31 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((r_31 != NULL) && (r_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  t = SSLgetAnnotations(not_null(v_31));
  if(((q_31 != NULL) && (q_31 != t)))
    _fail(t);
  else
    q_31 = t;
  t = not_null(r_31);
  t = n_109(t);
  if(((s_31 != NULL) && (s_31 != t)))
    _fail(t);
  else
    s_31 = t;
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(s_31));
  if(((m_1 != NULL) && (m_1 != t)))
    _fail(t);
  else
    m_1 = t;
  t = SSLsetAnnotations(not_null(m_1), not_null(q_31));
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm x_31 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((x_31 != NULL) && (x_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(x_31);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm z_31 = NULL,a_32 = NULL;
        if(((z_31 != NULL) && (z_31 != t)))
          _fail(t);
        else
          z_31 = t;
        if(match_cons(t, sym_URL_1))
          {
            a_32 = ATgetArgument(t, 0);
            {
              ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
              t = not_null(a_32);
              if(((b_32 != NULL) && (b_32 != t)))
                _fail(t);
              else
                b_32 = t;
              t = not_null(z_31);
              if(((d_32 != NULL) && (d_32 != t)))
                _fail(t);
              else
                d_32 = t;
              t = not_null(b_32);
              t = xtc_arg_to_string_0_0(t);
              if(((c_32 != NULL) && (c_32 != t)))
                _fail(t);
              else
                c_32 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(c_32));
            }
          }
        else
          {
            ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((a_32 != NULL) && (a_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(a_32);
            if(((e_32 != NULL) && (e_32 != t)))
              _fail(t);
            else
              e_32 = t;
            t = not_null(z_31);
            if(((g_32 != NULL) && (g_32 != t)))
              _fail(t);
            else
              g_32 = t;
            t = not_null(e_32);
            t = xtc_arg_to_string_0_0(t);
            if(((f_32 != NULL) && (f_32 != t)))
              _fail(t);
            else
              f_32 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_32));
          }
      }
    }
  return(t);
}
static ATerm y_33 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  t = not_null(o_32);
  if(((r_32 != NULL) && (r_32 != t)))
    _fail(t);
  else
    r_32 = t;
  t = not_null(p_32);
  if(((t_32 != NULL) && (t_32 != t)))
    _fail(t);
  else
    t_32 = t;
  t = not_null(q_32);
  if(((x_32 != NULL) && (x_32 != t)))
    _fail(t);
  else
    x_32 = t;
  t = not_null(r_32);
  t = xtc_argterm_to_http_0_0(t);
  if(((s_32 != NULL) && (s_32 != t)))
    _fail(t);
  else
    s_32 = t;
  t = not_null(t_32);
  t = xtc_argterm_to_http_0_0(t);
  if(((y_32 != NULL) && (y_32 != t)))
    _fail(t);
  else
    y_32 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_32 = ATgetArgument(t, 0);
      {
        ATerm a_33 = NULL;
        t = not_null(z_32);
        if(((a_33 != NULL) && (a_33 != t)))
          _fail(t);
        else
          a_33 = t;
      }
    }
  else
    {
      ATerm b_33 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((z_32 != NULL) && (z_32 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(z_32);
      if(((b_33 != NULL) && (b_33 != t)))
        _fail(t);
      else
        b_33 = t;
    }
  if(((u_32 != NULL) && (u_32 != t)))
    _fail(t);
  else
    u_32 = t;
  t = not_null(x_32);
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_32)), term_m_19), not_null(s_32));
  t = concat_strings_0_0(t);
  if(((v_32 != NULL) && (v_32 != t)))
    _fail(t);
  else
    v_32 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(v_32)));
  return(t);
}
static ATerm b_34 (ATerm c_33, ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  t = not_null(c_33);
  if(((f_33 != NULL) && (f_33 != t)))
    _fail(t);
  else
    f_33 = t;
  t = not_null(d_33);
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  t = not_null(e_33);
  if(((l_33 != NULL) && (l_33 != t)))
    _fail(t);
  else
    l_33 = t;
  t = not_null(f_33);
  t = xtc_argterm_to_http_0_0(t);
  if(((g_33 != NULL) && (g_33 != t)))
    _fail(t);
  else
    g_33 = t;
  t = not_null(h_33);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm n_19 = t;
    if((PushChoice() == 0))
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(o_1, t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = URL_1_0(p_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_19;
      }
  }
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  t = not_null(l_33);
  if(((k_33 != NULL) && (k_33 != t)))
    _fail(t);
  else
    k_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_33)), term_q_19), not_null(g_33));
  t = concat_strings_0_0(t);
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(j_33)));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm m_33 = NULL;
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm n_33 = NULL;
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,x_33 = NULL;
  if(((s_33 != NULL) && (s_33 != t)))
    _fail(t);
  else
    s_33 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((t_33 != NULL) && (t_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_33 = ATgetArgument(t, 0);
      if(((x_33 != NULL) && (x_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_33(not_null(t_33), not_null(x_33), not_null(s_33), t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = b_34(not_null(t_33), not_null(x_33), not_null(s_33), t);
      }
  }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(q_1, t);
  return(t);
}
static ATerm n_36 (ATerm q_34, ATerm r_34, ATerm u_34, ATerm v_34, ATerm x_34, ATerm y_34, ATerm z_34, ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,i_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  t = not_null(q_34);
  if(((p_35 != NULL) && (p_35 != t)))
    _fail(t);
  else
    p_35 = t;
  t = not_null(r_34);
  if(((j_35 != NULL) && (j_35 != t)))
    _fail(t);
  else
    j_35 = t;
  t = not_null(u_34);
  if(((n_35 != NULL) && (n_35 != t)))
    _fail(t);
  else
    n_35 = t;
  t = not_null(v_34);
  if(((q_35 != NULL) && (q_35 != t)))
    _fail(t);
  else
    q_35 = t;
  t = not_null(x_34);
  if(((b_35 != NULL) && (b_35 != t)))
    _fail(t);
  else
    b_35 = t;
  t = not_null(y_34);
  if(((a_35 != NULL) && (a_35 != t)))
    _fail(t);
  else
    a_35 = t;
  t = not_null(z_34);
  if(((s_35 != NULL) && (s_35 != t)))
    _fail(t);
  else
    s_35 = t;
  t = not_null(b_35);
  t = xtc_args_to_exec_0_0(t);
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = not_null(p_35);
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_1 (ATerm t);
        static ATerm r_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(j_35), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(r_1, t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = term_p_18;
      }
  }
  if(((m_35 != NULL) && (m_35 != t)))
    _fail(t);
  else
    m_35 = t;
  t = not_null(p_35);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_1 (ATerm t);
        static ATerm s_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(n_35), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(s_1, t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = term_p_18;
      }
  }
  if(((o_35 != NULL) && (o_35 != t)))
    _fail(t);
  else
    o_35 = t;
  t = not_null(p_35);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(q_35), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(t_1, t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = term_p_18;
      }
  }
  if(((r_35 != NULL) && (r_35 != t)))
    _fail(t);
  else
    r_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_35), (ATerm)ATmakeAppl(sym__3, not_null(m_35), not_null(o_35), not_null(r_35)), not_null(i_35));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(((t_35 != NULL) && (t_35 != t)))
    _fail(t);
  else
    t_35 = t;
  if(match_cons(t, sym__3))
    {
      if(((u_35 != NULL) && (u_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_35 = ATgetArgument(t, 0);
      if(((w_35 != NULL) && (w_35 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_35 = ATgetArgument(t, 1);
      if(((b_36 != NULL) && (b_36 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(u_35);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
      t = not_null(w_35);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((x_35 != NULL) && (x_35 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_35 = ATgetArgument(t, 0);
          if(((y_35 != NULL) && (y_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_35 = ATgetArgument(t, 1);
          if(((z_35 != NULL) && (z_35 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            z_35 = ATgetArgument(t, 2);
          if(((a_36 != NULL) && (a_36 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            a_36 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(b_36);
      if(match_cons(t, sym__2))
        {
          if(((c_36 != NULL) && (c_36 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_36 = ATgetArgument(t, 0);
          if(((d_36 != NULL) && (d_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(a_36);
      if(((f_36 != NULL) && (f_36 != t)))
        _fail(t);
      else
        f_36 = t;
      t = not_null(c_36);
      if(((e_36 != NULL) && (e_36 != t)))
        _fail(t);
      else
        e_36 = t;
      t = not_null(t_35);
      if(((h_36 != NULL) && (h_36 != t)))
        _fail(t);
      else
        h_36 = t;
      t = not_null(f_36);
      t = xtc_args_to_xtservice_0_0(t);
      if(((g_36 != NULL) && (g_36 != t)))
        _fail(t);
      else
        g_36 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_36)), not_null(e_36));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          v_35 = ATgetArgument(t, 0);
          {
            ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
            t = not_null(w_35);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((x_35 != NULL) && (x_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_35 = ATgetArgument(t, 0);
                if(((y_35 != NULL) && (y_35 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_35 = ATgetArgument(t, 1);
                if(((z_35 != NULL) && (z_35 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  z_35 = ATgetArgument(t, 2);
                if(((a_36 != NULL) && (a_36 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  a_36 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(b_36);
            if(match_cons(t, sym__2))
              {
                if(((c_36 != NULL) && (c_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_36 = ATgetArgument(t, 0);
                if(((d_36 != NULL) && (d_36 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  d_36 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(v_35);
            if(((i_36 != NULL) && (i_36 != t)))
              _fail(t);
            else
              i_36 = t;
            t = not_null(a_36);
            if(((k_36 != NULL) && (k_36 != t)))
              _fail(t);
            else
              k_36 = t;
            t = not_null(c_36);
            if(((j_36 != NULL) && (j_36 != t)))
              _fail(t);
            else
              j_36 = t;
            t = not_null(t_35);
            if(((m_36 != NULL) && (m_36 != t)))
              _fail(t);
            else
              m_36 = t;
            t = not_null(k_36);
            t = xtc_args_to_http_0_0(t);
            if(((l_36 != NULL) && (l_36 != t)))
              _fail(t);
            else
              l_36 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(l_36)), not_null(j_36));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((v_35 != NULL) && (v_35 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(w_35);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((x_35 != NULL) && (x_35 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_35 = ATgetArgument(t, 0);
              if(((y_35 != NULL) && (y_35 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                y_35 = ATgetArgument(t, 1);
              if(((z_35 != NULL) && (z_35 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                z_35 = ATgetArgument(t, 2);
              if(((a_36 != NULL) && (a_36 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                a_36 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(b_36);
          if(match_cons(t, sym__2))
            {
              if(((c_36 != NULL) && (c_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_36 = ATgetArgument(t, 0);
              if(((d_36 != NULL) && (d_36 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_36(not_null(v_35), not_null(x_35), not_null(y_35), not_null(z_35), not_null(a_36), not_null(c_36), not_null(t_35), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm b_20 = ATgetArgument(t, 0);
      if(!(match_cons(b_20, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(s_91);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(o_36), t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
          if(((q_36 != NULL) && (q_36 != t)))
            _fail(t);
          else
            q_36 = t;
          if(((s_36 != NULL) && (s_36 != t)))
            _fail(t);
          else
            s_36 = t;
          t = not_null(q_36);
          if(((r_36 != NULL) && (r_36 != t)))
            _fail(t);
          else
            r_36 = t;
          t = (ATerm) ATinsert(ATempty, not_null(r_36));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((p_36 != NULL) && (p_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_36 = ATgetArgument(t, 0);
      if(((o_36 != NULL) && (o_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_36);
  t = mapconcat_1_0(u_1, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_36 != NULL) && (v_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_36 = ATgetArgument(t, 0);
      if(((u_36 != NULL) && (u_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_36 != NULL) && (y_36 != t)))
    _fail(t);
  else
    y_36 = t;
  t = Fst_0_0(t);
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm z_36 = NULL;
      ATerm e_20 = t;
      int f_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_37 (ATerm a_37, ATerm t);
          static ATerm l_37 (ATerm a_37, ATerm t)
          {
            ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
            t = not_null(a_37);
            if(((z_36 != NULL) && (z_36 != t)))
              _fail(t);
            else
              z_36 = t;
            t = not_null(a_37);
            if(((c_37 != NULL) && (c_37 != t)))
              _fail(t);
            else
              c_37 = t;
            if(((d_37 != NULL) && (d_37 != t)))
              _fail(t);
            else
              d_37 = t;
            t = not_null(u_36);
            {
              static ATerm w_1 (ATerm t);
              static ATerm w_1 (ATerm t)
              {
                ATerm e_37 = NULL,j_37 = NULL;
                if(((j_37 != NULL) && (j_37 != t)))
                  _fail(t);
                else
                  j_37 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(j_37));
                if(((z_36 != NULL) && (z_36 != t)))
                  _fail(t);
                else
                  z_36 = t;
                return(t);
              }
              t = SRTS_one(w_1, t);
            }
            t = not_null(d_37);
            if(((b_37 != NULL) && (b_37 != t)))
              _fail(t);
            else
              b_37 = t;
            t = (ATerm) ATinsert(ATempty, not_null(b_37));
            return(t);
          }
          ATerm k_37 = NULL;
          if(((k_37 != NULL) && (k_37 != t)))
            _fail(t);
          else
            k_37 = t;
          t = l_37(not_null(k_37), t);
          LocalPopChoice(f_20);
        }
      else
        {
          t = e_20;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(v_1, t);
  }
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), not_null(w_36));
  t = diff_0_0(t);
  if(((x_36 != NULL) && (x_36 != t)))
    _fail(t);
  else
    x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_36), not_null(x_36));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((m_37 != NULL) && (m_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_37 = ATgetArgument(t, 0);
      if(((r_37 != NULL) && (r_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_37 = ATgetArgument(t, 1);
      if(((o_37 != NULL) && (o_37 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), not_null(r_37));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((v_37 != NULL) && (v_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_37 = ATgetArgument(t, 0);
      if(((n_37 != NULL) && (n_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(v_37);
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_37 = NULL;
        if(((w_37 != NULL) && (w_37 != t)))
          _fail(t);
        else
          w_37 = t;
        {
          ATerm i_20 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_20;
            }
        }
        t = not_null(w_37);
        LocalPopChoice(h_20);
        t = h_151(t);
      }
    else
      {
        t = g_20;
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_37 = NULL;
              if(((x_37 != NULL) && (x_37 != t)))
                _fail(t);
              else
                x_37 = t;
              t = not_null(o_37);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm l_20 = ATgetArgument(t, 0);
                  if(!(match_cons(l_20, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(x_37);
              LocalPopChoice(k_20);
              t = not_null(r_37);
              t = Hd_0_0(t);
              if(((s_37 != NULL) && (s_37 != t)))
                _fail(t);
              else
                s_37 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(s_37)));
            }
          else
            {
              t = j_20;
              t = i_151(t);
            }
        }
      }
  }
  if(((t_37 != NULL) && (t_37 != t)))
    _fail(t);
  else
    t_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(n_37));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_38 = NULL;
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  return(t);
}
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_38 != NULL) && (a_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_38 = ATgetArgument(t, 0);
      if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_38 != NULL) && (c_38 != t)))
    _fail(t);
  else
    c_38 = t;
  t = not_null(a_38);
  {
    static ATerm e_38 (ATerm t);
    static ATerm e_38 (ATerm t)
    {
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(n_20);
        }
      else
        {
          t = m_20;
          {
            ATerm o_20 = t;
            int p_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm x_1 (ATerm t);
                static ATerm x_1 (ATerm t)
                {
                  t = not_null(z_37);
                  return(t);
                }
                t = HdMember_p__2_0(j_127, x_1, t);
                t = e_38(t);
                LocalPopChoice(p_20);
              }
            else
              {
                t = o_20;
                t = Cons_2_0(y_1, e_38, t);
              }
          }
        }
      return(t);
    }
    t = e_38(t);
  }
  if(((b_38 != NULL) && (b_38 != t)))
    _fail(t);
  else
    b_38 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_38 != NULL) && (g_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_38 = ATgetArgument(t, 0);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
          {
            if(((f_38 != NULL) && (f_38 != ATgetFirst((ATermList) q_20))))
              _fail(ATgetFirst((ATermList) q_20));
            else
              f_38 = ATgetFirst((ATermList) q_20);
            if(((h_38 != NULL) && (h_38 != (ATerm) ATgetNext((ATermList) q_20))))
              _fail((ATerm) ATgetNext((ATermList) q_20));
            else
              h_38 = (ATerm) ATgetNext((ATermList) q_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_38)), not_null(f_38)), not_null(h_38));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_38 = ATgetArgument(t, 0);
      if(((j_38 != NULL) && (j_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(j_38)), not_null(i_38));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
        {
          if(((k_38 != NULL) && (k_38 != ATgetFirst((ATermList) r_20))))
            _fail(ATgetFirst((ATermList) r_20));
          else
            k_38 = ATgetFirst((ATermList) r_20);
          if(((m_38 != NULL) && (m_38 != (ATerm) ATgetNext((ATermList) r_20))))
            _fail((ATerm) ATgetNext((ATermList) r_20));
          else
            m_38 = (ATerm) ATgetNext((ATermList) r_20);
        }
      else
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
          {
            if(((l_38 != NULL) && (l_38 != ATgetFirst((ATermList) s_20))))
              _fail(ATgetFirst((ATermList) s_20));
            else
              l_38 = ATgetFirst((ATermList) s_20);
            if(((n_38 != NULL) && (n_38 != (ATerm) ATgetNext((ATermList) s_20))))
              _fail((ATerm) ATgetNext((ATermList) s_20));
            else
              n_38 = (ATerm) ATgetNext((ATermList) s_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_38), not_null(l_38)), (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(n_38)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(((ATgetType(t_20) != AT_LIST) || !(ATisEmpty(t_20))))
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(((ATgetType(u_20) != AT_LIST) || !(ATisEmpty(u_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm genzip_4_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t)
{
  static ATerm o_38 (ATerm t);
  static ATerm o_38 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_125(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = i_125(t);
        t = _2_0(k_125, o_38, t);
        t = j_125(t);
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, m_125, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm e_39 = NULL;
  if(((e_39 != NULL) && (e_39 != t)))
    _fail(t);
  else
    e_39 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_20 = ATgetFirst((ATermList) t);
      if(match_cons(x_20, sym__2))
        {
          if(((y_38 != NULL) && (y_38 != ATgetArgument(x_20, 0))))
            _fail(ATgetArgument(x_20, 0));
          else
            y_38 = ATgetArgument(x_20, 0);
          if(((b_39 != NULL) && (b_39 != ATgetArgument(x_20, 1))))
            _fail(ATgetArgument(x_20, 1));
          else
            b_39 = ATgetArgument(x_20, 1);
        }
      else
        _fail(t);
      if(((t_38 != NULL) && (t_38 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        t_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((c_39 != NULL) && (c_39 != t)))
    _fail(t);
  else
    c_39 = t;
  t = not_null(b_39);
  if(((d_39 != NULL) && (d_39 != t)))
    _fail(t);
  else
    d_39 = t;
  t = SSL_explode_term(not_null(d_39));
  if(match_cons(t, sym__2))
    {
      if(((q_38 != NULL) && (q_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_38 = ATgetArgument(t, 0);
      if(((s_38 != NULL) && (s_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(c_39);
  if(((z_38 != NULL) && (z_38 != t)))
    _fail(t);
  else
    z_38 = t;
  t = not_null(y_38);
  if(((a_39 != NULL) && (a_39 != t)))
    _fail(t);
  else
    a_39 = t;
  t = SSL_explode_term(not_null(a_39));
  if(match_cons(t, sym__2))
    {
      if(((q_38 != NULL) && (q_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_38 = ATgetArgument(t, 0);
      if(((r_38 != NULL) && (r_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_38);
  if(((v_38 != NULL) && (v_38 != t)))
    _fail(t);
  else
    v_38 = t;
  if(((x_38 != NULL) && (x_38 != t)))
    _fail(t);
  else
    x_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_38), not_null(s_38));
  t = zip_1_0(z_1, t);
  if(((w_38 != NULL) && (w_38 != t)))
    _fail(t);
  else
    w_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_38), not_null(t_38));
  t = conc_0_0(t);
  if(((u_38 != NULL) && (u_38 != t)))
    _fail(t);
  else
    u_38 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_20 = ATgetFirst((ATermList) t);
      if(match_cons(y_20, sym__2))
        {
          if(((f_39 != NULL) && (f_39 != ATgetArgument(y_20, 0))))
            _fail(ATgetArgument(y_20, 0));
          else
            f_39 = ATgetArgument(y_20, 0);
          if(((f_39 != NULL) && (f_39 != ATgetArgument(y_20, 1))))
            _fail(ATgetArgument(y_20, 1));
          else
            f_39 = ATgetArgument(y_20, 1);
        }
      else
        _fail(t);
      if(((g_39 != NULL) && (g_39 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(g_39);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_39 = NULL;
  if(((j_39 != NULL) && (j_39 != t)))
    _fail(t);
  else
    j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_39));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = _2_0(d_2, Nil_0_0, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(e_2, f_2, t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm k_39 = NULL;
  if(((k_39 != NULL) && (k_39 != t)))
    _fail(t);
  else
    k_39 = t;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm l_39 = NULL;
  if(((l_39 != NULL) && (l_39 != t)))
    _fail(t);
  else
    l_39 = t;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_2, b_2, c_2, t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_39 != NULL) && (p_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_39 = ATgetArgument(t, 0);
      if(((o_39 != NULL) && (o_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_39 != NULL) && (s_39 != t)))
    _fail(t);
  else
    s_39 = t;
  t = Fst_0_0(t);
  {
    static ATerm g_2 (ATerm t);
    static ATerm g_2 (ATerm t)
    {
      ATerm t_39 = NULL,y_39 = NULL;
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_40 (ATerm z_39, ATerm d_40, ATerm e_40, ATerm t);
          static ATerm l_40 (ATerm z_39, ATerm d_40, ATerm e_40, ATerm t)
          {
            ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
            t = not_null(z_39);
            if(((t_39 != NULL) && (t_39 != t)))
              _fail(t);
            else
              t_39 = t;
            t = not_null(d_40);
            if(((y_39 != NULL) && (y_39 != t)))
              _fail(t);
            else
              y_39 = t;
            t = not_null(e_40);
            if(((g_40 != NULL) && (g_40 != t)))
              _fail(t);
            else
              g_40 = t;
            if(((h_40 != NULL) && (h_40 != t)))
              _fail(t);
            else
              h_40 = t;
            t = not_null(o_39);
            {
              static ATerm h_2 (ATerm t);
              static ATerm h_2 (ATerm t)
              {
                if(((t_39 != NULL) && (t_39 != t)))
                  _fail(t);
                else
                  t_39 = t;
                return(t);
              }
              t = SRTS_one(h_2, t);
            }
            t = not_null(h_40);
            if(((f_40 != NULL) && (f_40 != t)))
              _fail(t);
            else
              f_40 = t;
            t = (ATerm) ATinsert(ATempty, not_null(f_40));
            return(t);
          }
          ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
          if(((i_40 != NULL) && (i_40 != t)))
            _fail(t);
          else
            i_40 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((j_40 != NULL) && (j_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_40 = ATgetArgument(t, 0);
              if(((k_40 != NULL) && (k_40 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_40(not_null(j_40), not_null(k_40), not_null(i_40), t);
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(g_2, t);
  }
  if(((q_39 != NULL) && (q_39 != t)))
    _fail(t);
  else
    q_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), not_null(q_39));
  t = diff_0_0(t);
  if(((r_39 != NULL) && (r_39 != t)))
    _fail(t);
  else
    r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_39), not_null(r_39));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((n_40 != NULL) && (n_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_40 = ATgetArgument(t, 0);
      if(((o_40 != NULL) && (o_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_40 = ATgetArgument(t, 1);
      if(((q_40 != NULL) && (q_40 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_40 = ATgetArgument(t, 2);
      if(((m_40 != NULL) && (m_40 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        m_40 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((s_40 != NULL) && (s_40 != t)))
    _fail(t);
  else
    s_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_40), not_null(o_40));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((t_40 != NULL) && (t_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_40 = ATgetArgument(t, 0);
      if(((p_40 != NULL) && (p_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_40);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_40 = NULL;
        if(((u_40 != NULL) && (u_40 != t)))
          _fail(t);
        else
          u_40 = t;
        {
          ATerm j_21 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_21;
            }
        }
        t = not_null(u_40);
        LocalPopChoice(i_21);
        t = j_151(t);
      }
    else
      {
        t = h_21;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_40 = NULL;
              if(((v_40 != NULL) && (v_40 != t)))
                _fail(t);
              else
                v_40 = t;
              t = not_null(q_40);
              {
                ATerm m_21 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_21;
                  }
              }
              t = not_null(v_40);
              LocalPopChoice(l_21);
              t = k_151(t);
            }
          else
            {
              t = k_21;
              t = l_151(t);
            }
        }
      }
  }
  if(((r_40 != NULL) && (r_40 != t)))
    _fail(t);
  else
    r_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_40), not_null(p_40));
  return(t);
}
static ATerm a_49 (ATerm g_43, ATerm h_43, ATerm i_43, ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  t = not_null(g_43);
  if(((n_43 != NULL) && (n_43 != t)))
    _fail(t);
  else
    n_43 = t;
  t = not_null(h_43);
  if(((o_43 != NULL) && (o_43 != t)))
    _fail(t);
  else
    o_43 = t;
  t = not_null(i_43);
  if(((m_43 != NULL) && (m_43 != t)))
    _fail(t);
  else
    m_43 = t;
  t = not_null(j_43);
  if(((l_43 != NULL) && (l_43 != t)))
    _fail(t);
  else
    l_43 = t;
  t = not_null(k_43);
  if(((s_43 != NULL) && (s_43 != t)))
    _fail(t);
  else
    s_43 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(l_43), not_null(n_43), not_null(o_43), not_null(m_43));
  {
    static ATerm j_2 (ATerm t);
    static ATerm j_2 (ATerm t)
    {
      static ATerm l_2 (ATerm t);
      static ATerm l_2 (ATerm t)
      {
        ATerm u_43 = NULL,v_43 = NULL;
        if(((v_43 != NULL) && (v_43 != t)))
          _fail(t);
        else
          v_43 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(p_43), not_null(v_43));
        return(t);
      }
      t = not_null(n_43);
      t = Hd_0_0(t);
      if(((p_43 != NULL) && (p_43 != t)))
        _fail(t);
      else
        p_43 = t;
      t = not_null(o_43);
      t = map_1_0(l_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(i_2, j_2, k_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((q_43 != NULL) && (q_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_43 = ATgetArgument(t, 0);
      if(((r_43 != NULL) && (r_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_43), not_null(r_43));
  return(t);
}
static ATerm f_49 (ATerm w_43, ATerm x_43, ATerm y_43, ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  t = not_null(w_43);
  if(((d_44 != NULL) && (d_44 != t)))
    _fail(t);
  else
    d_44 = t;
  t = not_null(x_43);
  if(((e_44 != NULL) && (e_44 != t)))
    _fail(t);
  else
    e_44 = t;
  t = not_null(y_43);
  if(((b_44 != NULL) && (b_44 != t)))
    _fail(t);
  else
    b_44 = t;
  t = not_null(z_43);
  if(((c_44 != NULL) && (c_44 != t)))
    _fail(t);
  else
    c_44 = t;
  t = not_null(a_44);
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(c_44), not_null(d_44), not_null(e_44));
  t = xtc_toption_to_args_2_0(m_2, n_2, t);
  if(match_cons(t, sym__2))
    {
      if(((f_44 != NULL) && (f_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_44 = ATgetArgument(t, 0);
      if(((g_44 != NULL) && (g_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), not_null(g_44));
  return(t);
}
static ATerm g_49 (ATerm j_44, ATerm k_44, ATerm l_44, ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t = not_null(j_44);
  if(((q_44 != NULL) && (q_44 != t)))
    _fail(t);
  else
    q_44 = t;
  t = not_null(k_44);
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  t = not_null(l_44);
  if(((p_44 != NULL) && (p_44 != t)))
    _fail(t);
  else
    p_44 = t;
  t = not_null(m_44);
  if(((o_44 != NULL) && (o_44 != t)))
    _fail(t);
  else
    o_44 = t;
  t = not_null(n_44);
  if(((v_44 != NULL) && (v_44 != t)))
    _fail(t);
  else
    v_44 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(o_44), not_null(q_44), not_null(r_44), not_null(p_44));
  {
    static ATerm p_2 (ATerm t);
    static ATerm p_2 (ATerm t)
    {
      static ATerm q_2 (ATerm t);
      static ATerm q_2 (ATerm t)
      {
        ATerm x_44 = NULL,y_44 = NULL;
        if(((y_44 != NULL) && (y_44 != t)))
          _fail(t);
        else
          y_44 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(s_44), not_null(y_44));
        return(t);
      }
      t = not_null(q_44);
      t = Hd_0_0(t);
      if(((s_44 != NULL) && (s_44 != t)))
        _fail(t);
      else
        s_44 = t;
      t = not_null(r_44);
      t = map_1_0(q_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(o_2, p_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((t_44 != NULL) && (t_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_44 = ATgetArgument(t, 0);
      if(((u_44 != NULL) && (u_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_44), not_null(u_44));
  return(t);
}
static ATerm h_49 (ATerm z_44, ATerm a_45, ATerm b_45, ATerm c_45, ATerm d_45, ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
  t = not_null(z_44);
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  t = not_null(a_45);
  if(((h_45 != NULL) && (h_45 != t)))
    _fail(t);
  else
    h_45 = t;
  t = not_null(b_45);
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  t = not_null(c_45);
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  t = not_null(d_45);
  if(((k_45 != NULL) && (k_45 != t)))
    _fail(t);
  else
    k_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(f_45), not_null(g_45), not_null(h_45));
  t = xtc_toption_to_args_2_0(r_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((i_45 != NULL) && (i_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_45 = ATgetArgument(t, 0);
      if(((j_45 != NULL) && (j_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_45), not_null(j_45));
  return(t);
}
static ATerm i_49 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  t = not_null(m_45);
  if(((t_45 != NULL) && (t_45 != t)))
    _fail(t);
  else
    t_45 = t;
  t = not_null(n_45);
  if(((u_45 != NULL) && (u_45 != t)))
    _fail(t);
  else
    u_45 = t;
  t = not_null(o_45);
  if(((s_45 != NULL) && (s_45 != t)))
    _fail(t);
  else
    s_45 = t;
  t = not_null(p_45);
  if(((r_45 != NULL) && (r_45 != t)))
    _fail(t);
  else
    r_45 = t;
  t = not_null(q_45);
  if(((z_45 != NULL) && (z_45 != t)))
    _fail(t);
  else
    z_45 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(r_45), not_null(t_45), not_null(u_45), not_null(s_45));
  {
    static ATerm t_2 (ATerm t);
    static ATerm t_2 (ATerm t)
    {
      t = not_null(t_45);
      t = Hd_0_0(t);
      if(((v_45 != NULL) && (v_45 != t)))
        _fail(t);
      else
        v_45 = t;
      t = not_null(u_45);
      t = Hd_0_0(t);
      if(((w_45 != NULL) && (w_45 != t)))
        _fail(t);
      else
        w_45 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(v_45), not_null(w_45)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(s_2, t_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((x_45 != NULL) && (x_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_45 = ATgetArgument(t, 0);
      if(((y_45 != NULL) && (y_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_45), not_null(y_45));
  return(t);
}
static ATerm j_49 (ATerm c_46, ATerm k_46, ATerm l_46, ATerm m_46, ATerm n_46, ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  t = not_null(c_46);
  if(((q_46 != NULL) && (q_46 != t)))
    _fail(t);
  else
    q_46 = t;
  t = not_null(k_46);
  if(((r_46 != NULL) && (r_46 != t)))
    _fail(t);
  else
    r_46 = t;
  t = not_null(l_46);
  if(((o_46 != NULL) && (o_46 != t)))
    _fail(t);
  else
    o_46 = t;
  t = not_null(m_46);
  if(((p_46 != NULL) && (p_46 != t)))
    _fail(t);
  else
    p_46 = t;
  t = not_null(n_46);
  if(((u_46 != NULL) && (u_46 != t)))
    _fail(t);
  else
    u_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_46), not_null(q_46), not_null(r_46));
  t = xtc_toption_to_args_2_0(u_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((s_46 != NULL) && (s_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_46 = ATgetArgument(t, 0);
      if(((t_46 != NULL) && (t_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_46), not_null(t_46));
  return(t);
}
static ATerm m_49 (ATerm x_46, ATerm y_46, ATerm z_46, ATerm a_47, ATerm b_47, ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
  t = not_null(x_46);
  if(((e_47 != NULL) && (e_47 != t)))
    _fail(t);
  else
    e_47 = t;
  t = not_null(y_46);
  if(((f_47 != NULL) && (f_47 != t)))
    _fail(t);
  else
    f_47 = t;
  t = not_null(z_46);
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = not_null(a_47);
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  t = not_null(b_47);
  if(((k_47 != NULL) && (k_47 != t)))
    _fail(t);
  else
    k_47 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(c_47), not_null(e_47), not_null(f_47), not_null(d_47));
  {
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      t = not_null(e_47);
      t = Hd_0_0(t);
      if(((g_47 != NULL) && (g_47 != t)))
        _fail(t);
      else
        g_47 = t;
      t = not_null(f_47);
      t = Hd_0_0(t);
      if(((h_47 != NULL) && (h_47 != t)))
        _fail(t);
      else
        h_47 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(g_47), not_null(h_47)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(v_2, w_2, x_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((i_47 != NULL) && (i_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_47 = ATgetArgument(t, 0);
      if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_47), not_null(j_47));
  return(t);
}
static ATerm n_49 (ATerm n_47, ATerm o_47, ATerm p_47, ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm w_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
  t = not_null(n_47);
  if(((b_48 != NULL) && (b_48 != t)))
    _fail(t);
  else
    b_48 = t;
  t = not_null(o_47);
  if(((c_48 != NULL) && (c_48 != t)))
    _fail(t);
  else
    c_48 = t;
  t = not_null(p_47);
  if(((w_47 != NULL) && (w_47 != t)))
    _fail(t);
  else
    w_47 = t;
  t = not_null(q_47);
  if(((a_48 != NULL) && (a_48 != t)))
    _fail(t);
  else
    a_48 = t;
  t = not_null(r_47);
  if(((g_48 != NULL) && (g_48 != t)))
    _fail(t);
  else
    g_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_48), not_null(b_48), not_null(c_48));
  t = xtc_toption_to_args_2_0(y_2, z_2, t);
  if(match_cons(t, sym__2))
    {
      if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_48 = ATgetArgument(t, 0);
      if(((f_48 != NULL) && (f_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_48), not_null(f_48));
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm t_43 = NULL;
  if(((t_43 != NULL) && (t_43 != t)))
    _fail(t);
  else
    t_43 = t;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm i_44 = NULL;
  if(((i_44 != NULL) && (i_44 != t)))
    _fail(t);
  else
    i_44 = t;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm w_44 = NULL;
  if(((w_44 != NULL) && (w_44 != t)))
    _fail(t);
  else
    w_44 = t;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm l_45 = NULL;
  if(((l_45 != NULL) && (l_45 != t)))
    _fail(t);
  else
    l_45 = t;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  if(((b_46 != NULL) && (b_46 != t)))
    _fail(t);
  else
    b_46 = t;
  t = Hd_0_0(t);
  if(((a_46 != NULL) && (a_46 != t)))
    _fail(t);
  else
    a_46 = t;
  t = (ATerm) ATinsert(ATempty, not_null(a_46));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  if(((w_46 != NULL) && (w_46 != t)))
    _fail(t);
  else
    w_46 = t;
  t = Hd_0_0(t);
  if(((v_46 != NULL) && (v_46 != t)))
    _fail(t);
  else
    v_46 = t;
  t = (ATerm) ATinsert(ATempty, not_null(v_46));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  if(((m_47 != NULL) && (m_47 != t)))
    _fail(t);
  else
    m_47 = t;
  t = Hd_0_0(t);
  if(((l_47 != NULL) && (l_47 != t)))
    _fail(t);
  else
    l_47 = t;
  t = (ATerm) ATinsert(ATempty, not_null(l_47));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  if(((i_48 != NULL) && (i_48 != t)))
    _fail(t);
  else
    i_48 = t;
  t = Hd_0_0(t);
  if(((h_48 != NULL) && (h_48 != t)))
    _fail(t);
  else
    h_48 = t;
  t = (ATerm) ATinsert(ATempty, not_null(h_48));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,o_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,y_48 = NULL;
  if(((l_48 != NULL) && (l_48 != t)))
    _fail(t);
  else
    l_48 = t;
  if(match_cons(t, sym__2))
    {
      if(((m_48 != NULL) && (m_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_48 = ATgetArgument(t, 0);
      if(((y_48 != NULL) && (y_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_48);
  if(match_cons(t, sym_TVarStar_4))
    {
      o_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
      r_48 = ATgetArgument(t, 2);
      t_48 = ATgetArgument(t, 3);
      t = not_null(o_48);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(r_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(s_48);
          if(match_cons(t, sym_Default_1))
            {
              if(((j_48 != NULL) && (j_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(j_48);
          if(match_cons(t, sym_Values_1))
            {
              if(((k_48 != NULL) && (k_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(t_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_49(not_null(q_48), not_null(k_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(r_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(t_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_49(not_null(q_48), not_null(s_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          o_48 = ATgetArgument(t, 0);
          q_48 = ATgetArgument(t, 1);
          r_48 = ATgetArgument(t, 2);
          t_48 = ATgetArgument(t, 3);
          t = not_null(o_48);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(r_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(s_48);
              if(match_cons(t, sym_Default_1))
                {
                  if(((j_48 != NULL) && (j_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(j_48);
              if(match_cons(t, sym_Values_1))
                {
                  if(((k_48 != NULL) && (k_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    k_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(t_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_49(not_null(q_48), not_null(k_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(r_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(t_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_49(not_null(q_48), not_null(s_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              o_48 = ATgetArgument(t, 0);
              q_48 = ATgetArgument(t, 1);
              r_48 = ATgetArgument(t, 2);
              t_48 = ATgetArgument(t, 3);
              t = not_null(o_48);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(r_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(s_48);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((j_48 != NULL) && (j_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(j_48);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((k_48 != NULL) && (k_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(t_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_49(not_null(q_48), not_null(k_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(r_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(t_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_49(not_null(q_48), not_null(s_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((o_48 != NULL) && (o_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    o_48 = ATgetArgument(t, 0);
                  if(((q_48 != NULL) && (q_48 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    q_48 = ATgetArgument(t, 1);
                  if(((r_48 != NULL) && (r_48 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    r_48 = ATgetArgument(t, 2);
                  if(((t_48 != NULL) && (t_48 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    t_48 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(o_48);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(r_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(s_48);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((j_48 != NULL) && (j_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(j_48);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((k_48 != NULL) && (k_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(t_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_49(not_null(q_48), not_null(k_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(r_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(t_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_49(not_null(q_48), not_null(s_48), not_null(u_48), not_null(y_48), not_null(l_48), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm j_3, ATerm t)
{
  static ATerm l_50 (ATerm x_49, ATerm y_49, ATerm t);
  static ATerm m_50 (ATerm d_50, ATerm t);
  static ATerm l_50 (ATerm x_49, ATerm y_49, ATerm t)
  {
    ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
    t = not_null(x_49);
    if(((z_49 != NULL) && (z_49 != t)))
      _fail(t);
    else
      z_49 = t;
    t = not_null(y_49);
    if(((b_50 != NULL) && (b_50 != t)))
      _fail(t);
    else
      b_50 = t;
    t = not_null(j_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((c_50 != NULL) && (c_50 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_50 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(c_50);
    if(((a_50 != NULL) && (a_50 != t)))
      _fail(t);
    else
      a_50 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(z_49), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(a_50)))));
    return(t);
  }
  static ATerm m_50 (ATerm d_50, ATerm t)
  {
    ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
    t = not_null(d_50);
    if(((f_50 != NULL) && (f_50 != t)))
      _fail(t);
    else
      f_50 = t;
    t = not_null(j_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((g_50 != NULL) && (g_50 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_50 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(g_50);
    if(((e_50 != NULL) && (e_50 != t)))
      _fail(t);
    else
      e_50 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(e_50)))));
    return(t);
  }
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  if(((i_50 != NULL) && (i_50 != t)))
    _fail(t);
  else
    i_50 = t;
  if(match_cons(t, sym_File_1))
    {
      j_50 = ATgetArgument(t, 0);
      t = not_null(j_50);
      if(match_cons(t, sym_Some_1))
        {
          h_50 = ATgetArgument(t, 0);
          t = l_50(not_null(h_50), not_null(i_50), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = m_50(not_null(i_50), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((j_50 != NULL) && (j_50 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(j_50);
      if(match_cons(t, sym_Some_1))
        {
          h_50 = ATgetArgument(t, 0);
          {
            ATerm k_50 = NULL;
            t = not_null(h_50);
            if(((k_50 != NULL) && (k_50 != t)))
              _fail(t);
            else
              k_50 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(k_50)));
          }
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
ATerm xtc_stream_to_arg_0_1 (ATerm i_3, ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  if(match_cons(t, sym_Error_1))
    {
      p_50 = ATgetArgument(t, 0);
      {
        ATerm q_50 = NULL,t_50 = NULL,u_50 = NULL;
        t = not_null(p_50);
        if(((q_50 != NULL) && (q_50 != t)))
          _fail(t);
        else
          q_50 = t;
        t = not_null(o_50);
        if(((u_50 != NULL) && (u_50 != t)))
          _fail(t);
        else
          u_50 = t;
        t = not_null(q_50);
        t = xtc_streamdef_to_arg_0_1(not_null(i_3), t);
        if(((t_50 != NULL) && (t_50 != t)))
          _fail(t);
        else
          t_50 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          p_50 = ATgetArgument(t, 0);
          {
            ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
            t = not_null(p_50);
            if(((v_50 != NULL) && (v_50 != t)))
              _fail(t);
            else
              v_50 = t;
            t = not_null(o_50);
            if(((x_50 != NULL) && (x_50 != t)))
              _fail(t);
            else
              x_50 = t;
            t = not_null(v_50);
            t = xtc_streamdef_to_arg_0_1(not_null(i_3), t);
            if(((w_50 != NULL) && (w_50 != t)))
              _fail(t);
            else
              w_50 = t;
          }
        }
      else
        {
          ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(p_50);
          if(((y_50 != NULL) && (y_50 != t)))
            _fail(t);
          else
            y_50 = t;
          t = not_null(o_50);
          if(((a_51 != NULL) && (a_51 != t)))
            _fail(t);
          else
            a_51 = t;
          t = not_null(y_50);
          t = xtc_streamdef_to_arg_0_1(not_null(i_3), t);
          if(((z_50 != NULL) && (z_50 != t)))
            _fail(t);
          else
            z_50 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm b_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if(match_cons(n_21, sym_Some_1))
        {
          if(((b_51 != NULL) && (b_51 != ATgetArgument(n_21, 0))))
            _fail(ATgetArgument(n_21, 0));
          else
            b_51 = ATgetArgument(n_21, 0);
        }
      else
        _fail(t);
      {
        ATerm o_21 = ATgetArgument(t, 1);
      }
      {
        ATerm p_21 = ATgetArgument(t, 2);
      }
      {
        ATerm q_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(b_51);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm c_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((c_51 != NULL) && (c_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_51 = ATgetArgument(t, 0);
      {
        ATerm r_21 = ATgetArgument(t, 1);
      }
      {
        ATerm s_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(c_51);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
  if(((f_51 != NULL) && (f_51 != t)))
    _fail(t);
  else
    f_51 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((g_51 != NULL) && (g_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(g_51);
  if(match_cons(t, sym_HTTP_1))
    {
      h_51 = ATgetArgument(t, 0);
      {
        ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
        t = not_null(h_51);
        if(((i_51 != NULL) && (i_51 != t)))
          _fail(t);
        else
          i_51 = t;
        t = not_null(f_51);
        if(((k_51 != NULL) && (k_51 != t)))
          _fail(t);
        else
          k_51 = t;
        t = not_null(i_51);
        t = xtc_stream_input_0_0(t);
        if(((j_51 != NULL) && (j_51 != t)))
          _fail(t);
        else
          j_51 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_y_21;
        }
      else
        {
          ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((h_51 != NULL) && (h_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(h_51);
          if(((l_51 != NULL) && (l_51 != t)))
            _fail(t);
          else
            l_51 = t;
          t = not_null(f_51);
          if(((n_51 != NULL) && (n_51 != t)))
            _fail(t);
          else
            n_51 = t;
          t = not_null(l_51);
          t = xtc_stream_input_0_0(t);
          if(((m_51 != NULL) && (m_51 != t)))
            _fail(t);
          else
            m_51 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm o_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      ATerm a_22 = ATgetArgument(t, 1);
      if(match_cons(a_22, sym_Some_1))
        {
          if(((o_51 != NULL) && (o_51 != ATgetArgument(a_22, 0))))
            _fail(ATgetArgument(a_22, 0));
          else
            o_51 = ATgetArgument(a_22, 0);
        }
      else
        _fail(t);
      {
        ATerm b_22 = ATgetArgument(t, 2);
      }
      {
        ATerm c_22 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(o_51);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm p_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if(((p_51 != NULL) && (p_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_51 = ATgetArgument(t, 1);
      {
        ATerm h_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(p_51);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm q_22 = ATgetArgument(t, 0);
      if(match_cons(q_22, sym_Exec_1))
        {
          if(((q_51 != NULL) && (q_51 != ATgetArgument(q_22, 0))))
            _fail(ATgetArgument(q_22, 0));
          else
            q_51 = ATgetArgument(q_22, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((s_51 != NULL) && (s_51 != t)))
    _fail(t);
  else
    s_51 = t;
  t = not_null(q_51);
  t = xtc_stream_output_0_0(t);
  if(((r_51 != NULL) && (r_51 != t)))
    _fail(t);
  else
    r_51 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm r_22 = ATgetArgument(t, 0);
      ATerm s_22 = ATgetArgument(t, 1);
      ATerm r_23 = ATgetArgument(t, 2);
      if(match_cons(r_23, sym_Some_1))
        {
          if(((t_51 != NULL) && (t_51 != ATgetArgument(r_23, 0))))
            _fail(ATgetArgument(r_23, 0));
          else
            t_51 = ATgetArgument(r_23, 0);
        }
      else
        _fail(t);
      {
        ATerm s_23 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(t_51);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm k_24 = ATgetArgument(t, 0);
      ATerm r_24 = ATgetArgument(t, 1);
      if(((u_51 != NULL) && (u_51 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(u_51);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm p_25 = ATgetArgument(t, 0);
      if(match_cons(p_25, sym_Exec_1))
        {
          if(((v_51 != NULL) && (v_51 != ATgetArgument(p_25, 0))))
            _fail(ATgetArgument(p_25, 0));
          else
            v_51 = ATgetArgument(p_25, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((x_51 != NULL) && (x_51 != t)))
    _fail(t);
  else
    x_51 = t;
  t = not_null(v_51);
  t = xtc_stream_error_0_0(t);
  if(((w_51 != NULL) && (w_51 != t)))
    _fail(t);
  else
    w_51 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm g_3, ATerm h_3, ATerm t)
{
  static ATerm f_53 (ATerm d_52, ATerm t);
  static ATerm g_53 (ATerm l_52, ATerm t);
  static ATerm h_53 (ATerm t_52, ATerm t);
  static ATerm f_53 (ATerm d_52, ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
    t = not_null(d_52);
    if(((f_52 != NULL) && (f_52 != t)))
      _fail(t);
    else
      f_52 = t;
    t = not_null(g_3);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((g_52 != NULL) && (g_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(g_52);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    if(((k_52 != NULL) && (k_52 != t)))
      _fail(t);
    else
      k_52 = t;
    t = not_null(h_3);
    t = xtc_conf_error_0_0(t);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(i_52);
    t = xtc_stream_to_arg_0_1(not_null(h_52), t);
    if(((e_52 != NULL) && (e_52 != t)))
      _fail(t);
    else
      e_52 = t;
    return(t);
  }
  static ATerm g_53 (ATerm l_52, ATerm t)
  {
    ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
    t = not_null(l_52);
    if(((n_52 != NULL) && (n_52 != t)))
      _fail(t);
    else
      n_52 = t;
    t = not_null(g_3);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((o_52 != NULL) && (o_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          o_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(o_52);
    if(((q_52 != NULL) && (q_52 != t)))
      _fail(t);
    else
      q_52 = t;
    if(((s_52 != NULL) && (s_52 != t)))
      _fail(t);
    else
      s_52 = t;
    t = not_null(h_3);
    t = xtc_conf_output_0_0(t);
    if(((r_52 != NULL) && (r_52 != t)))
      _fail(t);
    else
      r_52 = t;
    if(((p_52 != NULL) && (p_52 != t)))
      _fail(t);
    else
      p_52 = t;
    t = not_null(q_52);
    t = xtc_stream_to_arg_0_1(not_null(p_52), t);
    if(((m_52 != NULL) && (m_52 != t)))
      _fail(t);
    else
      m_52 = t;
    return(t);
  }
  static ATerm h_53 (ATerm t_52, ATerm t)
  {
    ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
    t = not_null(t_52);
    if(((v_52 != NULL) && (v_52 != t)))
      _fail(t);
    else
      v_52 = t;
    t = not_null(g_3);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((w_52 != NULL) && (w_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          w_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(w_52);
    if(((y_52 != NULL) && (y_52 != t)))
      _fail(t);
    else
      y_52 = t;
    if(((a_53 != NULL) && (a_53 != t)))
      _fail(t);
    else
      a_53 = t;
    t = not_null(h_3);
    t = xtc_conf_input_0_0(t);
    if(((z_52 != NULL) && (z_52 != t)))
      _fail(t);
    else
      z_52 = t;
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = not_null(y_52);
    t = xtc_stream_to_arg_0_1(not_null(x_52), t);
    if(((u_52 != NULL) && (u_52 != t)))
      _fail(t);
    else
      u_52 = t;
    return(t);
  }
  ATerm b_53 = NULL,e_53 = NULL;
  if(((b_53 != NULL) && (b_53 != t)))
    _fail(t);
  else
    b_53 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((e_53 != NULL) && (e_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(e_53);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_v_26);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = f_53(not_null(b_53), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = g_53(not_null(b_53), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = h_53(not_null(b_53), t);
            }
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm z_53 = NULL;
  if(((z_53 != NULL) && (z_53 != t)))
    _fail(t);
  else
    z_53 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if(match_cons(j_27, sym_TOr_2))
        {
          if(((l_53 != NULL) && (l_53 != ATgetArgument(j_27, 0))))
            _fail(ATgetArgument(j_27, 0));
          else
            l_53 = ATgetArgument(j_27, 0);
          if(((m_53 != NULL) && (m_53 != ATgetArgument(j_27, 1))))
            _fail(ATgetArgument(j_27, 1));
          else
            m_53 = ATgetArgument(j_27, 1);
        }
      else
        _fail(t);
      if(((n_53 != NULL) && (n_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_53 != NULL) && (s_53 != t)))
    _fail(t);
  else
    s_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(m_53));
  if(((u_53 != NULL) && (u_53 != t)))
    _fail(t);
  else
    u_53 = t;
  t = term_k_27;
  if(((t_53 != NULL) && (t_53 != t)))
    _fail(t);
  else
    t_53 = t;
  t = not_null(u_53);
  t = dbg_0_1(not_null(t_53), t);
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_53 = NULL,w_53 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(n_53));
        t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
        if(((w_53 != NULL) && (w_53 != t)))
          _fail(t);
        else
          w_53 = t;
        t = term_c_28;
        if(((v_53 != NULL) && (v_53 != t)))
          _fail(t);
        else
          v_53 = t;
        t = not_null(w_53);
        t = dbg_0_1(not_null(v_53), t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm x_53 = NULL,y_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_53), not_null(n_53));
          t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
          if(((y_53 != NULL) && (y_53 != t)))
            _fail(t);
          else
            y_53 = t;
          t = term_o_28;
          if(((x_53 != NULL) && (x_53 != t)))
            _fail(t);
          else
            x_53 = t;
          t = not_null(y_53);
          t = dbg_0_1(not_null(x_53), t);
        }
      }
  }
  t = _2_0(concat_0_0, a_3, t);
  if(match_cons(t, sym__2))
    {
      if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_53 = ATgetArgument(t, 0);
      if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), not_null(r_53));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm a_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if(((ATgetType(x_28) != AT_LIST) || !(ATisEmpty(x_28))))
        _fail(t);
      if(((a_54 != NULL) && (a_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_54));
  return(t);
}
ATerm Cons_T_2_0 (ATerm k_1 (ATerm), ATerm n_1 (ATerm), ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,k_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
        {
          if(((e_54 != NULL) && (e_54 != ATgetFirst((ATermList) k_29))))
            _fail(ATgetFirst((ATermList) k_29));
          else
            e_54 = ATgetFirst((ATermList) k_29);
          if(((f_54 != NULL) && (f_54 != (ATerm) ATgetNext((ATermList) k_29))))
            _fail((ATerm) ATgetNext((ATermList) k_29));
          else
            f_54 = (ATerm) ATgetNext((ATermList) k_29);
        }
      else
        _fail(t);
      if(((b_54 != NULL) && (b_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_54 != NULL) && (k_54 != t)))
    _fail(t);
  else
    k_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_54), not_null(b_54));
  t = k_1(t);
  if(match_cons(t, sym__2))
    {
      if(((g_54 != NULL) && (g_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_54 = ATgetArgument(t, 0);
      if(((c_54 != NULL) && (c_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), not_null(c_54));
  t = n_1(t);
  if(match_cons(t, sym__2))
    {
      if(((h_54 != NULL) && (h_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_54 = ATgetArgument(t, 0);
      if(((d_54 != NULL) && (d_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_54)), not_null(g_54)), not_null(d_54));
  return(t);
}
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  static ATerm l_54 (ATerm t);
  static ATerm l_54 (ATerm t)
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(t_130, l_54, t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = l_54(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm n_54 = NULL;
  if(((n_54 != NULL) && (n_54 != t)))
    _fail(t);
  else
    n_54 = t;
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t)
{
  static ATerm b_3 (ATerm t);
  static ATerm b_3 (ATerm t)
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(x_91), not_null(y_91), t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        {
          ATerm p_29 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm c_3 (ATerm t);
              static ATerm c_3 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(x_91), not_null(y_91), t);
                return(t);
              }
              t = _2_0(c_3, d_3, t);
              LocalPopChoice(m_30);
            }
          else
            {
              t = p_29;
              {
                ATerm n_30 = t;
                int o_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(o_30);
                  }
                else
                  {
                    t = n_30;
                    t = n_151(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(b_3, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm p_54 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      ATerm q_30 = ATgetArgument(t, 1);
      ATerm r_30 = ATgetArgument(t, 2);
      if(((p_54 != NULL) && (p_54 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        p_54 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(p_54);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL;
  if(((w_54 != NULL) && (w_54 != t)))
    _fail(t);
  else
    w_54 = t;
  t = Snd_0_0(t);
  if(((v_54 != NULL) && (v_54 != t)))
    _fail(t);
  else
    v_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_54));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm x_54 = NULL;
  if(((x_54 != NULL) && (x_54 != t)))
    _fail(t);
  else
    x_54 = t;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm c_55 = NULL,g_55 = NULL,h_55 = NULL;
  if(((c_55 != NULL) && (c_55 != t)))
    _fail(t);
  else
    c_55 = t;
  t = Snd_0_0(t);
  if(((h_55 != NULL) && (h_55 != t)))
    _fail(t);
  else
    h_55 = t;
  t = term_y_31;
  if(((g_55 != NULL) && (g_55 != t)))
    _fail(t);
  else
    g_55 = t;
  t = not_null(h_55);
  t = err_0_1(not_null(g_55), t);
  t = not_null(c_55);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_32 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm i_32 = ATgetArgument(t, 0);
          if(!(match_cons(i_32, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_32;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  if(((u_54 != NULL) && (u_54 != t)))
    _fail(t);
  else
    u_54 = t;
  if(((r_54 != NULL) && (r_54 != t)))
    _fail(t);
  else
    r_54 = t;
  t = not_null(u_54);
  if(((t_54 != NULL) && (t_54 != t)))
    _fail(t);
  else
    t_54 = t;
  t = not_null(w_91);
  t = xtc_conf_args_0_0(t);
  if(((s_54 != NULL) && (s_54 != t)))
    _fail(t);
  else
    s_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_54), not_null(s_54));
  t = xtc_targ_thread_map_1_2(e_3, not_null(v_91), not_null(w_91), t);
  t = _2_0(concat_0_0, f_3, t);
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_55 = NULL;
        if(((b_55 != NULL) && (b_55 != t)))
          _fail(t);
        else
          b_55 = t;
        t = Snd_0_0(t);
        {
          ATerm l_32 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_32;
            }
        }
        t = not_null(b_55);
        LocalPopChoice(k_32);
        t = restore_2_0(m_151, n_3, t);
      }
    else
      {
        t = j_32;
        t = Fst_0_0(t);
        t = filter_1_0(o_3, t);
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm m_32 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm n_32 = ATgetArgument(t, 0);
          if(!(match_cons(n_32, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_32;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  if(((j_55 != NULL) && (j_55 != t)))
    _fail(t);
  else
    j_55 = t;
  if(((l_55 != NULL) && (l_55 != t)))
    _fail(t);
  else
    l_55 = t;
  t = filter_1_0(p_3, t);
  if(((k_55 != NULL) && (k_55 != t)))
    _fail(t);
  else
    k_55 = t;
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_55 = NULL;
        if(((m_55 != NULL) && (m_55 != t)))
          _fail(t);
        else
          m_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_55), not_null(k_55));
        {
          ATerm q_33 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_33;
            }
        }
        t = not_null(m_55);
        LocalPopChoice(p_33);
        {
          ATerm n_55 = NULL,o_55 = NULL;
          if(((o_55 != NULL) && (o_55 != t)))
            _fail(t);
          else
            o_55 = t;
          t = term_r_33;
          if(((n_55 != NULL) && (n_55 != t)))
            _fail(t);
          else
            n_55 = t;
          t = not_null(o_55);
          t = err_0_1(not_null(n_55), t);
        }
      }
    else
      {
        t = o_33;
        {
          ATerm p_55 = NULL;
          if(((p_55 != NULL) && (p_55 != t)))
            _fail(t);
          else
            p_55 = t;
        }
      }
  }
  t = not_null(k_55);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm c_1, ATerm d_1, ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  if(((f_56 != NULL) && (f_56 != t)))
    _fail(t);
  else
    f_56 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((g_56 != NULL) && (g_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_56 = ATgetArgument(t, 0);
      if(((h_56 != NULL) && (h_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_56);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm k_56 = NULL,x_56 = NULL,y_56 = NULL;
      t = not_null(h_56);
      if(match_cons(t, sym_Some_1))
        {
          if(((i_56 != NULL) && (i_56 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(i_56);
      if(match_cons(t, sym_Layout_1))
        {
          if(((j_56 != NULL) && (j_56 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(j_56);
      if(((k_56 != NULL) && (k_56 != t)))
        _fail(t);
      else
        k_56 = t;
      t = not_null(f_56);
      if(((y_56 != NULL) && (y_56 != t)))
        _fail(t);
      else
        y_56 = t;
      t = not_null(k_56);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(c_1), not_null(d_1), t);
      if(((x_56 != NULL) && (x_56 != t)))
        _fail(t);
      else
        x_56 = t;
    }
  else
    {
      ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(h_56);
      if(match_cons(t, sym_Some_1))
        {
          if(((i_56 != NULL) && (i_56 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(i_56);
      if(match_cons(t, sym_Layout_1))
        {
          if(((j_56 != NULL) && (j_56 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(j_56);
      if(((z_56 != NULL) && (z_56 != t)))
        _fail(t);
      else
        z_56 = t;
      t = not_null(f_56);
      if(((b_57 != NULL) && (b_57 != t)))
        _fail(t);
      else
        b_57 = t;
      t = not_null(z_56);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(c_1), not_null(d_1), t);
      if(((a_57 != NULL) && (a_57 != t)))
        _fail(t);
      else
        a_57 = t;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm h_57 = NULL;
  if(((h_57 != NULL) && (h_57 != t)))
    _fail(t);
  else
    h_57 = t;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_57 = NULL;
  if(((i_57 != NULL) && (i_57 != t)))
    _fail(t);
  else
    i_57 = t;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm j_57 = NULL;
  if(((j_57 != NULL) && (j_57 != t)))
    _fail(t);
  else
    j_57 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  static ATerm t_3 (ATerm t);
  static ATerm t_3 (ATerm t)
  {
    t = not_null(f_57);
    t = xtc_template_to_args_0_2(not_null(g_57), not_null(p_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((g_57 != NULL) && (g_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_57 = ATgetArgument(t, 0);
      if(((f_57 != NULL) && (f_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_92);
  t = XtcConf_4_0(q_3, r_3, s_3, t_3, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  if(((z_57 != NULL) && (z_57 != t)))
    _fail(t);
  else
    z_57 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      a_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
      c_58 = ATgetArgument(t, 2);
      d_58 = ATgetArgument(t, 3);
      t = not_null(c_58);
      if(match_cons(t, sym_Some_1))
        {
          x_57 = ATgetArgument(t, 0);
          {
            ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
            t = not_null(d_58);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(a_58);
            if(((e_58 != NULL) && (e_58 != t)))
              _fail(t);
            else
              e_58 = t;
            t = not_null(b_58);
            if(((f_58 != NULL) && (f_58 != t)))
              _fail(t);
            else
              f_58 = t;
            t = not_null(x_57);
            if(((g_58 != NULL) && (g_58 != t)))
              _fail(t);
            else
              g_58 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(e_58), not_null(f_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(g_58)), term_w_33);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(d_58);
          if(match_cons(t, sym_Some_1))
            {
              y_57 = ATgetArgument(t, 0);
              {
                ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
                t = not_null(a_58);
                if(((h_58 != NULL) && (h_58 != t)))
                  _fail(t);
                else
                  h_58 = t;
                t = not_null(b_58);
                if(((i_58 != NULL) && (i_58 != t)))
                  _fail(t);
                else
                  i_58 = t;
                t = not_null(y_57);
                if(((j_58 != NULL) && (j_58 != t)))
                  _fail(t);
                else
                  j_58 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(h_58), not_null(i_58), term_c_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(j_58)));
              }
            }
          else
            {
              ATerm k_58 = NULL,l_58 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(a_58);
              if(((k_58 != NULL) && (k_58 != t)))
                _fail(t);
              else
                k_58 = t;
              t = not_null(b_58);
              if(((l_58 != NULL) && (l_58 != t)))
                _fail(t);
              else
                l_58 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(k_58), not_null(l_58), term_c_34, term_w_33);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          a_58 = ATgetArgument(t, 0);
          b_58 = ATgetArgument(t, 1);
          c_58 = ATgetArgument(t, 2);
          d_58 = ATgetArgument(t, 3);
          t = not_null(c_58);
          if(match_cons(t, sym_Some_1))
            {
              x_57 = ATgetArgument(t, 0);
              {
                ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
                t = not_null(d_58);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(a_58);
                if(((m_58 != NULL) && (m_58 != t)))
                  _fail(t);
                else
                  m_58 = t;
                t = not_null(b_58);
                if(((n_58 != NULL) && (n_58 != t)))
                  _fail(t);
                else
                  n_58 = t;
                t = not_null(x_57);
                if(((o_58 != NULL) && (o_58 != t)))
                  _fail(t);
                else
                  o_58 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(m_58), not_null(n_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(o_58)), term_w_33);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(d_58);
              if(match_cons(t, sym_Some_1))
                {
                  y_57 = ATgetArgument(t, 0);
                  {
                    ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
                    t = not_null(a_58);
                    if(((p_58 != NULL) && (p_58 != t)))
                      _fail(t);
                    else
                      p_58 = t;
                    t = not_null(b_58);
                    if(((q_58 != NULL) && (q_58 != t)))
                      _fail(t);
                    else
                      q_58 = t;
                    t = not_null(y_57);
                    if(((r_58 != NULL) && (r_58 != t)))
                      _fail(t);
                    else
                      r_58 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(p_58), not_null(q_58), term_c_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(r_58)));
                  }
                }
              else
                {
                  ATerm s_58 = NULL,t_58 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(a_58);
                  if(((s_58 != NULL) && (s_58 != t)))
                    _fail(t);
                  else
                    s_58 = t;
                  t = not_null(b_58);
                  if(((t_58 != NULL) && (t_58 != t)))
                    _fail(t);
                  else
                    t_58 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(s_58), not_null(t_58), term_c_34, term_w_33);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              a_58 = ATgetArgument(t, 0);
              b_58 = ATgetArgument(t, 1);
              c_58 = ATgetArgument(t, 2);
              d_58 = ATgetArgument(t, 3);
              t = not_null(c_58);
              if(match_cons(t, sym_Some_1))
                {
                  x_57 = ATgetArgument(t, 0);
                  {
                    ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
                    t = not_null(d_58);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(a_58);
                    if(((u_58 != NULL) && (u_58 != t)))
                      _fail(t);
                    else
                      u_58 = t;
                    t = not_null(b_58);
                    if(((v_58 != NULL) && (v_58 != t)))
                      _fail(t);
                    else
                      v_58 = t;
                    t = not_null(x_57);
                    if(((w_58 != NULL) && (w_58 != t)))
                      _fail(t);
                    else
                      w_58 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(u_58), not_null(v_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(w_58)), term_w_33);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(d_58);
                  if(match_cons(t, sym_Some_1))
                    {
                      y_57 = ATgetArgument(t, 0);
                      {
                        ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
                        t = not_null(a_58);
                        if(((x_58 != NULL) && (x_58 != t)))
                          _fail(t);
                        else
                          x_58 = t;
                        t = not_null(b_58);
                        if(((y_58 != NULL) && (y_58 != t)))
                          _fail(t);
                        else
                          y_58 = t;
                        t = not_null(y_57);
                        if(((z_58 != NULL) && (z_58 != t)))
                          _fail(t);
                        else
                          z_58 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(x_58), not_null(y_58), term_c_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(z_58)));
                      }
                    }
                  else
                    {
                      ATerm a_59 = NULL,b_59 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(a_58);
                      if(((a_59 != NULL) && (a_59 != t)))
                        _fail(t);
                      else
                        a_59 = t;
                      t = not_null(b_58);
                      if(((b_59 != NULL) && (b_59 != t)))
                        _fail(t);
                      else
                        b_59 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(a_59), not_null(b_59), term_c_34, term_w_33);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((a_58 != NULL) && (a_58 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_58 = ATgetArgument(t, 0);
                  if(((b_58 != NULL) && (b_58 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    b_58 = ATgetArgument(t, 1);
                  if(((c_58 != NULL) && (c_58 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    c_58 = ATgetArgument(t, 2);
                  if(((d_58 != NULL) && (d_58 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    d_58 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(c_58);
              if(match_cons(t, sym_Some_1))
                {
                  x_57 = ATgetArgument(t, 0);
                  {
                    ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
                    t = not_null(d_58);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(a_58);
                    if(((c_59 != NULL) && (c_59 != t)))
                      _fail(t);
                    else
                      c_59 = t;
                    t = not_null(b_58);
                    if(((d_59 != NULL) && (d_59 != t)))
                      _fail(t);
                    else
                      d_59 = t;
                    t = not_null(x_57);
                    if(((e_59 != NULL) && (e_59 != t)))
                      _fail(t);
                    else
                      e_59 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(c_59), not_null(d_59), (ATerm)ATmakeAppl(sym_Some_1, not_null(e_59)), term_w_33);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(d_58);
                  if(match_cons(t, sym_Some_1))
                    {
                      y_57 = ATgetArgument(t, 0);
                      {
                        ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
                        t = not_null(a_58);
                        if(((f_59 != NULL) && (f_59 != t)))
                          _fail(t);
                        else
                          f_59 = t;
                        t = not_null(b_58);
                        if(((g_59 != NULL) && (g_59 != t)))
                          _fail(t);
                        else
                          g_59 = t;
                        t = not_null(y_57);
                        if(((h_59 != NULL) && (h_59 != t)))
                          _fail(t);
                        else
                          h_59 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(f_59), not_null(g_59), term_c_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(h_59)));
                      }
                    }
                  else
                    {
                      ATerm i_59 = NULL,j_59 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(a_58);
                      if(((i_59 != NULL) && (i_59 != t)))
                        _fail(t);
                      else
                        i_59 = t;
                      t = not_null(b_58);
                      if(((j_59 != NULL) && (j_59 != t)))
                        _fail(t);
                      else
                        j_59 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(i_59), not_null(j_59), term_c_34, term_w_33);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  if(((c_60 != NULL) && (c_60 != t)))
    _fail(t);
  else
    c_60 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((d_60 != NULL) && (d_60 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_60 = ATgetArgument(t, 0);
      if(((e_60 != NULL) && (e_60 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(e_60);
  if(match_cons(t, sym_Some_1))
    {
      a_60 = ATgetArgument(t, 0);
      {
        ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
        t = not_null(d_60);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(a_60);
        if(match_cons(t, sym_Layout_1))
          {
            if(((b_60 != NULL) && (b_60 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              b_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(b_60);
        if(((f_60 != NULL) && (f_60 != t)))
          _fail(t);
        else
          f_60 = t;
        t = not_null(c_60);
        if(((h_60 != NULL) && (h_60 != t)))
          _fail(t);
        else
          h_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), term_i_34), term_g_34), term_e_34), not_null(f_60));
        t = union_0_0(t);
        if(((g_60 != NULL) && (g_60 != t)))
          _fail(t);
        else
          g_60 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_j_34, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(g_60))));
      }
    }
  else
    {
      ATerm i_60 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(d_60);
      if(((i_60 != NULL) && (i_60 != t)))
        _fail(t);
      else
        i_60 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(i_60), term_l_34);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      if(!(match_cons(m_34, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_e_35;
  return(t);
}
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm u_3 (ATerm t);
  static ATerm u_3 (ATerm t)
  {
    t = bottomup_1_0(v_116, t);
    return(t);
  }
  t = SRTS_all(u_3, t);
  t = v_116(t);
  return(t);
}
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  static ATerm v_3 (ATerm t);
  static ATerm v_3 (ATerm t)
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      t = a_121(t);
      t = innermost_1_0(a_121, t);
      return(t);
    }
    t = try_1_0(w_3, t);
    return(t);
  }
  t = bottomup_1_0(v_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm h_35 = t;
        int k_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(k_35);
          }
        else
          {
            t = h_35;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(x_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm k_60 = NULL;
  if(((k_60 != NULL) && (k_60 != t)))
    _fail(t);
  else
    k_60 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  static ATerm l_60 (ATerm t);
  static ATerm l_60 (ATerm t)
  {
    ATerm l_35 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_3, l_60, t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = l_35;
        t = Nil_0_0(t);
        t = u_123(t);
      }
    return(t);
  }
  t = l_60(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
        if(((n_60 != NULL) && (n_60 != t)))
          _fail(t);
        else
          n_60 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_60 != NULL) && (o_60 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_60 = ATgetFirst((ATermList) t);
            if(((p_60 != NULL) && (p_60 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(o_60);
        if(((q_60 != NULL) && (q_60 != t)))
          _fail(t);
        else
          q_60 = t;
        t = not_null(p_60);
        if(((r_60 != NULL) && (r_60 != t)))
          _fail(t);
        else
          r_60 = t;
        t = not_null(n_60);
        if(((t_60 != NULL) && (t_60 != t)))
          _fail(t);
        else
          t_60 = t;
        t = not_null(q_60);
        {
          static ATerm z_3 (ATerm t);
          static ATerm z_3 (ATerm t)
          {
            t = not_null(r_60);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_3, t);
        }
        if(((s_60 != NULL) && (s_60 != t)))
          _fail(t);
        else
          s_60 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm l_64 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  t = not_null(j_61);
  if(((m_61 != NULL) && (m_61 != t)))
    _fail(t);
  else
    m_61 = t;
  t = not_null(k_61);
  if(((n_61 != NULL) && (n_61 != t)))
    _fail(t);
  else
    n_61 = t;
  t = not_null(l_61);
  if(((p_61 != NULL) && (p_61 != t)))
    _fail(t);
  else
    p_61 = t;
  t = not_null(m_61);
  t = is_string_0_0(t);
  t = not_null(n_61);
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(a_4, t);
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = XtcQuery_2_0(b_4, c_4, t);
      }
  }
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_61 = NULL;
        if(((t_61 != NULL) && (t_61 != t)))
          _fail(t);
        else
          t_61 = t;
        t = xtc_find_0_0(t);
        if(((o_61 != NULL) && (o_61 != t)))
          _fail(t);
        else
          o_61 = t;
        t = not_null(t_61);
        LocalPopChoice(q_37);
        {
          ATerm u_61 = NULL,v_61 = NULL;
          if(((v_61 != NULL) && (v_61 != t)))
            _fail(t);
          else
            v_61 = t;
          t = term_y_37;
          if(((u_61 != NULL) && (u_61 != t)))
            _fail(t);
          else
            u_61 = t;
          t = not_null(v_61);
          t = dbg_0_1(not_null(u_61), t);
        }
      }
    else
      {
        t = p_37;
        {
          ATerm w_61 = NULL,x_61 = NULL;
          if(((x_61 != NULL) && (x_61 != t)))
            _fail(t);
          else
            x_61 = t;
          t = term_p_38;
          if(((w_61 != NULL) && (w_61 != t)))
            _fail(t);
          else
            w_61 = t;
          t = not_null(x_61);
          t = err_0_1(not_null(w_61), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(m_61)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(o_61)))));
  return(t);
}
static ATerm m_64 (ATerm y_61, ATerm z_61, ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
  t = not_null(y_61);
  if(((a_62 != NULL) && (a_62 != t)))
    _fail(t);
  else
    a_62 = t;
  t = not_null(z_61);
  if(((c_62 != NULL) && (c_62 != t)))
    _fail(t);
  else
    c_62 = t;
  t = not_null(a_62);
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(d_4, t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = XtcQuery_2_0(e_4, f_4, t);
      }
  }
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 = NULL;
        if(((g_62 != NULL) && (g_62 != t)))
          _fail(t);
        else
          g_62 = t;
        t = xtc_find_0_0(t);
        if(((b_62 != NULL) && (b_62 != t)))
          _fail(t);
        else
          b_62 = t;
        t = not_null(g_62);
        LocalPopChoice(n_39);
        {
          ATerm h_62 = NULL,i_62 = NULL;
          if(((i_62 != NULL) && (i_62 != t)))
            _fail(t);
          else
            i_62 = t;
          t = term_y_37;
          if(((h_62 != NULL) && (h_62 != t)))
            _fail(t);
          else
            h_62 = t;
          t = not_null(i_62);
          t = dbg_0_1(not_null(h_62), t);
        }
      }
    else
      {
        t = m_39;
        {
          ATerm j_62 = NULL,k_62 = NULL;
          if(((k_62 != NULL) && (k_62 != t)))
            _fail(t);
          else
            k_62 = t;
          t = term_p_38;
          if(((j_62 != NULL) && (j_62 != t)))
            _fail(t);
          else
            j_62 = t;
          t = not_null(k_62);
          t = err_0_1(not_null(j_62), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(b_62)))));
  return(t);
}
static ATerm n_64 (ATerm l_62, ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
  t = not_null(l_62);
  if(((m_62 != NULL) && (m_62 != t)))
    _fail(t);
  else
    m_62 = t;
  t = not_null(l_62);
  if(((o_62 != NULL) && (o_62 != t)))
    _fail(t);
  else
    o_62 = t;
  t = not_null(m_62);
  if(match_cons(t, sym_URL_1))
    {
      if(((p_62 != NULL) && (p_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(p_62);
  if(((n_62 != NULL) && (n_62 != t)))
    _fail(t);
  else
    n_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(n_62)))));
  return(t);
}
static ATerm o_64 (ATerm q_62, ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  t = not_null(q_62);
  if(((r_62 != NULL) && (r_62 != t)))
    _fail(t);
  else
    r_62 = t;
  t = not_null(q_62);
  if(((t_62 != NULL) && (t_62 != t)))
    _fail(t);
  else
    t_62 = t;
  t = not_null(r_62);
  if(match_cons(t, sym_FILE_1))
    {
      if(((u_62 != NULL) && (u_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(u_62);
  if(((s_62 != NULL) && (s_62 != t)))
    _fail(t);
  else
    s_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_62)))));
  return(t);
}
static ATerm p_64 (ATerm v_62, ATerm w_62, ATerm x_62, ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  t = not_null(v_62);
  if(((y_62 != NULL) && (y_62 != t)))
    _fail(t);
  else
    y_62 = t;
  t = not_null(w_62);
  if(((z_62 != NULL) && (z_62 != t)))
    _fail(t);
  else
    z_62 = t;
  t = not_null(x_62);
  if(((b_63 != NULL) && (b_63 != t)))
    _fail(t);
  else
    b_63 = t;
  t = not_null(y_62);
  t = is_string_0_0(t);
  t = not_null(z_62);
  if(match_cons(t, sym_URL_1))
    {
      if(((c_63 != NULL) && (c_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(c_63);
  if(((a_63 != NULL) && (a_63 != t)))
    _fail(t);
  else
    a_63 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(y_62)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(a_63)))));
  return(t);
}
static ATerm q_64 (ATerm d_63, ATerm e_63, ATerm f_63, ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,l_63 = NULL;
  t = not_null(d_63);
  if(((g_63 != NULL) && (g_63 != t)))
    _fail(t);
  else
    g_63 = t;
  t = not_null(e_63);
  if(((h_63 != NULL) && (h_63 != t)))
    _fail(t);
  else
    h_63 = t;
  t = not_null(f_63);
  if(((j_63 != NULL) && (j_63 != t)))
    _fail(t);
  else
    j_63 = t;
  t = not_null(g_63);
  t = is_string_0_0(t);
  t = not_null(h_63);
  if(match_cons(t, sym_FILE_1))
    {
      if(((l_63 != NULL) && (l_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(l_63);
  if(((i_63 != NULL) && (i_63 != t)))
    _fail(t);
  else
    i_63 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(g_63)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(i_63)))));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_61 = NULL;
  if(((q_61 != NULL) && (q_61 != t)))
    _fail(t);
  else
    q_61 = t;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm r_61 = NULL;
  if(((r_61 != NULL) && (r_61 != t)))
    _fail(t);
  else
    r_61 = t;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm s_61 = NULL;
  if(((s_61 != NULL) && (s_61 != t)))
    _fail(t);
  else
    s_61 = t;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm d_62 = NULL;
  if(((d_62 != NULL) && (d_62 != t)))
    _fail(t);
  else
    d_62 = t;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm e_62 = NULL;
  if(((e_62 != NULL) && (e_62 != t)))
    _fail(t);
  else
    e_62 = t;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm f_62 = NULL;
  if(((f_62 != NULL) && (f_62 != t)))
    _fail(t);
  else
    f_62 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL;
  if(((n_63 != NULL) && (n_63 != t)))
    _fail(t);
  else
    n_63 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      o_63 = ATgetArgument(t, 0);
      p_63 = ATgetArgument(t, 1);
      t = not_null(o_63);
      if(match_cons(t, sym_String_1))
        {
          m_63 = ATgetArgument(t, 0);
          {
            ATerm u_39 = t;
            int v_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_64(not_null(m_63), not_null(p_63), not_null(n_63), t);
                LocalPopChoice(v_39);
              }
            else
              {
                t = u_39;
                {
                  ATerm w_39 = t;
                  int x_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_64(not_null(n_63), t);
                      LocalPopChoice(x_39);
                    }
                  else
                    {
                      t = w_39;
                      {
                        ATerm a_40 = t;
                        int b_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = o_64(not_null(n_63), t);
                            LocalPopChoice(b_40);
                          }
                        else
                          {
                            t = a_40;
                            {
                              ATerm q_63 = NULL,r_63 = NULL;
                              t = not_null(n_63);
                              if(((q_63 != NULL) && (q_63 != t)))
                                _fail(t);
                              else
                                q_63 = t;
                              t = not_null(n_63);
                              if(((r_63 != NULL) && (r_63 != t)))
                                _fail(t);
                              else
                                r_63 = t;
                              t = not_null(q_63);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(q_63))));
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
          ATerm c_40 = t;
          int w_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_64(not_null(n_63), t);
              LocalPopChoice(w_40);
            }
          else
            {
              t = c_40;
              {
                ATerm x_40 = t;
                int y_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = o_64(not_null(n_63), t);
                    LocalPopChoice(y_40);
                  }
                else
                  {
                    t = x_40;
                    {
                      ATerm s_63 = NULL,t_63 = NULL;
                      t = not_null(n_63);
                      if(((s_63 != NULL) && (s_63 != t)))
                        _fail(t);
                      else
                        s_63 = t;
                      t = not_null(n_63);
                      if(((t_63 != NULL) && (t_63 != t)))
                        _fail(t);
                      else
                        t_63 = t;
                      t = not_null(s_63);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_63))));
                    }
                  }
              }
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Option_1))
        {
          o_63 = ATgetArgument(t, 0);
          {
            ATerm z_40 = t;
            int a_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_64(not_null(o_63), not_null(n_63), t);
                LocalPopChoice(a_41);
              }
            else
              {
                t = z_40;
                {
                  ATerm b_41 = t;
                  int c_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_64(not_null(n_63), t);
                      LocalPopChoice(c_41);
                    }
                  else
                    {
                      t = b_41;
                      {
                        ATerm d_41 = t;
                        int e_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = o_64(not_null(n_63), t);
                            LocalPopChoice(e_41);
                          }
                        else
                          {
                            t = d_41;
                            {
                              ATerm u_63 = NULL,v_63 = NULL;
                              t = not_null(n_63);
                              if(((u_63 != NULL) && (u_63 != t)))
                                _fail(t);
                              else
                                u_63 = t;
                              t = not_null(n_63);
                              if(((v_63 != NULL) && (v_63 != t)))
                                _fail(t);
                              else
                                v_63 = t;
                              t = not_null(u_63);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(u_63))));
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
          if(match_cons(t, sym__2))
            {
              o_63 = ATgetArgument(t, 0);
              p_63 = ATgetArgument(t, 1);
              {
                ATerm f_41 = t;
                int g_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_64(not_null(n_63), t);
                    LocalPopChoice(g_41);
                  }
                else
                  {
                    t = f_41;
                    {
                      ATerm h_41 = t;
                      int i_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_64(not_null(n_63), t);
                          LocalPopChoice(i_41);
                        }
                      else
                        {
                          t = h_41;
                          {
                            ATerm j_41 = t;
                            int k_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_63 = NULL,x_63 = NULL;
                                t = not_null(n_63);
                                if(((w_63 != NULL) && (w_63 != t)))
                                  _fail(t);
                                else
                                  w_63 = t;
                                t = not_null(n_63);
                                if(((x_63 != NULL) && (x_63 != t)))
                                  _fail(t);
                                else
                                  x_63 = t;
                                t = not_null(w_63);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(w_63))));
                                LocalPopChoice(k_41);
                              }
                            else
                              {
                                t = j_41;
                                {
                                  ATerm l_41 = t;
                                  int m_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_64(not_null(o_63), not_null(p_63), not_null(n_63), t);
                                      LocalPopChoice(m_41);
                                    }
                                  else
                                    {
                                      t = l_41;
                                      {
                                        ATerm n_41 = t;
                                        int o_41 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = q_64(not_null(o_63), not_null(p_63), not_null(n_63), t);
                                            LocalPopChoice(o_41);
                                          }
                                        else
                                          {
                                            t = n_41;
                                            {
                                              ATerm p_41 = t;
                                              int q_41 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL;
                                                  t = not_null(o_63);
                                                  if(((y_63 != NULL) && (y_63 != t)))
                                                    _fail(t);
                                                  else
                                                    y_63 = t;
                                                  t = not_null(p_63);
                                                  if(((z_63 != NULL) && (z_63 != t)))
                                                    _fail(t);
                                                  else
                                                    z_63 = t;
                                                  t = not_null(n_63);
                                                  if(((a_64 != NULL) && (a_64 != t)))
                                                    _fail(t);
                                                  else
                                                    a_64 = t;
                                                  t = not_null(y_63);
                                                  t = is_string_0_0(t);
                                                  t = not_null(z_63);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(y_63)), (ATerm) ATmakeAppl(sym_String_1, not_null(z_63))));
                                                  LocalPopChoice(q_41);
                                                }
                                              else
                                                {
                                                  t = p_41;
                                                  {
                                                    ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL;
                                                    t = not_null(o_63);
                                                    if(((c_64 != NULL) && (c_64 != t)))
                                                      _fail(t);
                                                    else
                                                      c_64 = t;
                                                    t = not_null(p_63);
                                                    if(((b_64 != NULL) && (b_64 != t)))
                                                      _fail(t);
                                                    else
                                                      b_64 = t;
                                                    t = not_null(n_63);
                                                    if(((e_64 != NULL) && (e_64 != t)))
                                                      _fail(t);
                                                    else
                                                      e_64 = t;
                                                    t = not_null(c_64);
                                                    t = is_string_0_0(t);
                                                    t = not_null(b_64);
                                                    {
                                                      static ATerm g_4 (ATerm t);
                                                      static ATerm g_4 (ATerm t)
                                                      {
                                                        ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
                                                        if(((g_64 != NULL) && (g_64 != t)))
                                                          _fail(t);
                                                        else
                                                          g_64 = t;
                                                        if(((i_64 != NULL) && (i_64 != t)))
                                                          _fail(t);
                                                        else
                                                          i_64 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_64), not_null(g_64));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((h_64 != NULL) && (h_64 != t)))
                                                          _fail(t);
                                                        else
                                                          h_64 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(g_4, t);
                                                    }
                                                    if(((d_64 != NULL) && (d_64 != t)))
                                                      _fail(t);
                                                    else
                                                      d_64 = t;
                                                  }
                                                }
                                            }
                                          }
                                      }
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
              ATerm r_41 = t;
              int s_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_64(not_null(n_63), t);
                  LocalPopChoice(s_41);
                }
              else
                {
                  t = r_41;
                  {
                    ATerm t_41 = t;
                    int u_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_64(not_null(n_63), t);
                        LocalPopChoice(u_41);
                      }
                    else
                      {
                        t = t_41;
                        {
                          ATerm j_64 = NULL,k_64 = NULL;
                          t = not_null(n_63);
                          if(((j_64 != NULL) && (j_64 != t)))
                            _fail(t);
                          else
                            j_64 = t;
                          t = not_null(n_63);
                          if(((k_64 != NULL) && (k_64 != t)))
                            _fail(t);
                          else
                            k_64 = t;
                          t = not_null(j_64);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(j_64))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      {
        ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
        if(((i_65 != NULL) && (i_65 != t)))
          _fail(t);
        else
          i_65 = t;
        if(((k_65 != NULL) && (k_65 != t)))
          _fail(t);
        else
          k_65 = t;
        t = not_null(i_65);
        if(((j_65 != NULL) && (j_65 != t)))
          _fail(t);
        else
          j_65 = t;
        t = (ATerm) ATinsert(ATempty, not_null(j_65));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
  static ATerm l_65 (ATerm t);
  static ATerm l_65 (ATerm t)
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_64 != NULL) && (r_64 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_64 = ATgetFirst((ATermList) t);
            {
              ATerm z_41 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_41) == AT_LIST) && !(ATisEmpty(z_41))))
                {
                  if(((s_64 != NULL) && (s_64 != ATgetFirst((ATermList) z_41))))
                    _fail(ATgetFirst((ATermList) z_41));
                  else
                    s_64 = ATgetFirst((ATermList) z_41);
                  if(((t_64 != NULL) && (t_64 != (ATerm) ATgetNext((ATermList) z_41))))
                    _fail((ATerm) ATgetNext((ATermList) z_41));
                  else
                    t_64 = (ATerm) ATgetNext((ATermList) z_41);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_41);
        {
          ATerm a_42 = t;
          int b_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_64 = NULL;
              if(((u_64 != NULL) && (u_64 != t)))
                _fail(t);
              else
                u_64 = t;
              t = not_null(r_64);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(u_64);
              LocalPopChoice(b_42);
              {
                ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
                if(((y_64 != NULL) && (y_64 != t)))
                  _fail(t);
                else
                  y_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_64), not_null(s_64));
                if(((a_65 != NULL) && (a_65 != t)))
                  _fail(t);
                else
                  a_65 = t;
                t = term_c_42;
                if(((z_64 != NULL) && (z_64 != t)))
                  _fail(t);
                else
                  z_64 = t;
                t = not_null(a_65);
                t = dbg_0_1(not_null(z_64), t);
                t = xtc_desugar_arg_0_0(t);
                if(((v_64 != NULL) && (v_64 != t)))
                  _fail(t);
                else
                  v_64 = t;
                t = not_null(y_64);
                if(((x_64 != NULL) && (x_64 != t)))
                  _fail(t);
                else
                  x_64 = t;
                t = not_null(t_64);
                t = l_65(t);
                if(((w_64 != NULL) && (w_64 != t)))
                  _fail(t);
                else
                  w_64 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(w_64)), not_null(v_64));
              }
            }
          else
            {
              t = a_42;
              {
                ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
                if(((e_65 != NULL) && (e_65 != t)))
                  _fail(t);
                else
                  e_65 = t;
                t = not_null(r_64);
                {
                  ATerm d_42 = t;
                  int e_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(e_42);
                    }
                  else
                    {
                      t = d_42;
                      {
                        ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
                        if(((f_65 != NULL) && (f_65 != t)))
                          _fail(t);
                        else
                          f_65 = t;
                        if(((h_65 != NULL) && (h_65 != t)))
                          _fail(t);
                        else
                          h_65 = t;
                        t = not_null(f_65);
                        if(((g_65 != NULL) && (g_65 != t)))
                          _fail(t);
                        else
                          g_65 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(g_65));
                      }
                    }
                }
                if(((b_65 != NULL) && (b_65 != t)))
                  _fail(t);
                else
                  b_65 = t;
                t = not_null(e_65);
                if(((d_65 != NULL) && (d_65 != t)))
                  _fail(t);
                else
                  d_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(s_64)), not_null(t_64));
                t = conc_0_0(t);
                t = l_65(t);
                if(((c_65 != NULL) && (c_65 != t)))
                  _fail(t);
                else
                  c_65 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(c_65)), not_null(b_65));
              }
            }
        }
      }
    else
      {
        t = x_41;
        {
          ATerm f_42 = t;
          int g_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(h_4, l_65, t);
              LocalPopChoice(g_42);
            }
          else
            {
              t = f_42;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = l_65(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm p_65 = NULL;
  if(((p_65 != NULL) && (p_65 != t)))
    _fail(t);
  else
    p_65 = t;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm q_65 = NULL;
  if(((q_65 != NULL) && (q_65 != t)))
    _fail(t);
  else
    q_65 = t;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_65 = NULL;
  if(((r_65 != NULL) && (r_65 != t)))
    _fail(t);
  else
    r_65 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(i_4, j_4, k_4, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm j_66 = NULL;
  if(((j_66 != NULL) && (j_66 != t)))
    _fail(t);
  else
    j_66 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,i_66 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, l_4, t);
  if(match_cons(t, sym__2))
    {
      if(((y_65 != NULL) && (y_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_65 = ATgetArgument(t, 0);
      if(((z_65 != NULL) && (z_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((i_66 != NULL) && (i_66 != t)))
    _fail(t);
  else
    i_66 = t;
  t = term_h_42;
  if(((g_66 != NULL) && (g_66 != t)))
    _fail(t);
  else
    g_66 = t;
  t = not_null(i_66);
  t = xtc_fetch_meta_0_1(not_null(g_66), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm i_42 = ATgetArgument(t, 0);
      if(match_cons(i_42, sym_XtcDesc_1))
        {
          if(((a_66 != NULL) && (a_66 != ATgetArgument(i_42, 0))))
            _fail(ATgetArgument(i_42, 0));
          else
            a_66 = ATgetArgument(i_42, 0);
        }
      else
        _fail(t);
      {
        ATerm j_42 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(y_65), t);
  if(((b_66 != NULL) && (b_66 != t)))
    _fail(t);
  else
    b_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_66), not_null(b_66), not_null(z_65));
  t = xtc_prepare_0_0(t);
  if(((f_66 != NULL) && (f_66 != t)))
    _fail(t);
  else
    f_66 = t;
  if(((e_66 != NULL) && (e_66 != t)))
    _fail(t);
  else
    e_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_66), not_null(b_66), not_null(e_66));
  return(t);
}
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, q_130, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t)
{
  static ATerm m_4 (ATerm t);
  static ATerm m_4 (ATerm t)
  {
    ATerm l_66 = NULL;
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_66 (ATerm m_66, ATerm t);
        static ATerm x_66 (ATerm m_66, ATerm t)
        {
          ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
          t = not_null(m_66);
          if(((q_66 != NULL) && (q_66 != t)))
            _fail(t);
          else
            q_66 = t;
          t = not_null(m_66);
          if(((r_66 != NULL) && (r_66 != t)))
            _fail(t);
          else
            r_66 = t;
          t = not_null(q_66);
          if(((s_66 != NULL) && (s_66 != t)))
            _fail(t);
          else
            s_66 = t;
          t = SSL_explode_term(not_null(s_66));
          if(match_cons(t, sym__2))
            {
              if(((l_66 != NULL) && (l_66 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_66 = ATgetArgument(t, 0);
              {
                ATerm m_42 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(r_66);
          if(((p_66 != NULL) && (p_66 != t)))
            _fail(t);
          else
            p_66 = t;
          t = not_null(e_80);
          {
            ATerm n_42 = t;
            if((PushChoice() == 0))
              {
                static ATerm n_4 (ATerm t);
                static ATerm n_4 (ATerm t)
                {
                  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
                  if(((t_66 != NULL) && (t_66 != t)))
                    _fail(t);
                  else
                    t_66 = t;
                  if(((u_66 != NULL) && (u_66 != t)))
                    _fail(t);
                  else
                    u_66 = t;
                  t = not_null(t_66);
                  if(((v_66 != NULL) && (v_66 != t)))
                    _fail(t);
                  else
                    v_66 = t;
                  t = SSL_explode_term(not_null(v_66));
                  if(match_cons(t, sym__2))
                    {
                      if(((l_66 != NULL) && (l_66 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_66 = ATgetArgument(t, 0);
                      {
                        ATerm o_42 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(u_66);
                  return(t);
                }
                t = SRTS_one(n_4, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_42;
              }
          }
          t = not_null(p_66);
          if(((o_66 != NULL) && (o_66 != t)))
            _fail(t);
          else
            o_66 = t;
          if(((n_66 != NULL) && (n_66 != t)))
            _fail(t);
          else
            n_66 = t;
          t = (ATerm) ATinsert(ATempty, not_null(n_66));
          return(t);
        }
        ATerm w_66 = NULL;
        if(((w_66 != NULL) && (w_66 != t)))
          _fail(t);
        else
          w_66 = t;
        t = x_66(not_null(w_66), t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(m_4, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_66 != NULL) && (y_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_66 = ATgetArgument(t, 0);
      if(((d_67 != NULL) && (d_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_67);
  t = xtc_filter_meta_0_1(not_null(c_80), t);
  if(((a_67 != NULL) && (a_67 != t)))
    _fail(t);
  else
    a_67 = t;
  if(((c_67 != NULL) && (c_67 != t)))
    _fail(t);
  else
    c_67 = t;
  if(((b_67 != NULL) && (b_67 != t)))
    _fail(t);
  else
    b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_67), not_null(c_80));
  t = union_0_0(t);
  if(((z_66 != NULL) && (z_66 != t)))
    _fail(t);
  else
    z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), not_null(z_66));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_42 = ATgetArgument(t, 0);
      if(match_cons(p_42, sym_XtcConf_4))
        {
          if(((e_67 != NULL) && (e_67 != ATgetArgument(p_42, 0))))
            _fail(ATgetArgument(p_42, 0));
          else
            e_67 = ATgetArgument(p_42, 0);
          if(((f_67 != NULL) && (f_67 != ATgetArgument(p_42, 1))))
            _fail(ATgetArgument(p_42, 1));
          else
            f_67 = ATgetArgument(p_42, 1);
          if(((g_67 != NULL) && (g_67 != ATgetArgument(p_42, 2))))
            _fail(ATgetArgument(p_42, 2));
          else
            g_67 = ATgetArgument(p_42, 2);
          if(((h_67 != NULL) && (h_67 != ATgetArgument(p_42, 3))))
            _fail(ATgetArgument(p_42, 3));
          else
            h_67 = ATgetArgument(p_42, 3);
        }
      else
        _fail(t);
      {
        ATerm q_42 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((l_67 != NULL) && (l_67 != t)))
    _fail(t);
  else
    l_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_87), not_null(h_67));
  t = conc_0_0(t);
  if(((i_67 != NULL) && (i_67 != t)))
    _fail(t);
  else
    i_67 = t;
  t = not_null(l_67);
  if(((k_67 != NULL) && (k_67 != t)))
    _fail(t);
  else
    k_67 = t;
  t = not_null(e_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((j_67 != NULL) && (j_67 != t)))
    _fail(t);
  else
    j_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(e_67), not_null(f_67), not_null(g_67), not_null(i_67)), not_null(j_67));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_68 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((a_68 != NULL) && (a_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(a_68);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm b_68 = NULL;
  if(((b_68 != NULL) && (b_68 != t)))
    _fail(t);
  else
    b_68 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_42 = ATgetArgument(t, 0);
      if(match_cons(r_42, sym_XtcConf_4))
        {
          ATerm s_42 = ATgetArgument(r_42, 0);
          ATerm t_42 = ATgetArgument(r_42, 1);
          ATerm u_42 = ATgetArgument(r_42, 2);
          ATerm v_42 = ATgetArgument(r_42, 3);
        }
      else
        _fail(t);
      if(((n_67 != NULL) && (n_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_67 != NULL) && (x_67 != t)))
    _fail(t);
  else
    x_67 = t;
  t = not_null(n_67);
  if(((z_67 != NULL) && (z_67 != t)))
    _fail(t);
  else
    z_67 = t;
  t = term_w_42;
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  t = not_null(z_67);
  t = xtc_fetch_meta_0_1(not_null(y_67), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((o_67 != NULL) && (o_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_67 = ATgetArgument(t, 0);
      {
        ATerm x_42 = ATgetArgument(t, 1);
        if(match_cons(x_42, sym_Some_1))
          {
            if(((p_67 != NULL) && (p_67 != ATgetArgument(x_42, 0))))
              _fail(ATgetArgument(x_42, 0));
            else
              p_67 = ATgetArgument(x_42, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(n_67);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm o_4 (ATerm t);
    static ATerm o_4 (ATerm t)
    {
      ATerm y_42 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((o_67 != NULL) && (o_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_67 = ATgetArgument(t, 0);
              {
                ATerm z_42 = ATgetArgument(t, 1);
                if(match_cons(z_42, sym_Some_1))
                  {
                    if(((p_67 != NULL) && (p_67 != ATgetArgument(z_42, 0))))
                      _fail(ATgetArgument(z_42, 0));
                    else
                      p_67 = ATgetArgument(z_42, 0);
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
          t = y_42;
        }
      return(t);
    }
    t = filter_1_0(o_4, t);
  }
  if(((q_67 != NULL) && (q_67 != t)))
    _fail(t);
  else
    q_67 = t;
  t = not_null(x_67);
  if(((u_67 != NULL) && (u_67 != t)))
    _fail(t);
  else
    u_67 = t;
  if(((w_67 != NULL) && (w_67 != t)))
    _fail(t);
  else
    w_67 = t;
  t = not_null(p_67);
  t = try_1_0(p_4, t);
  if(((v_67 != NULL) && (v_67 != t)))
    _fail(t);
  else
    v_67 = t;
  if(((t_67 != NULL) && (t_67 != t)))
    _fail(t);
  else
    t_67 = t;
  t = not_null(u_67);
  t = xtc_reconfigure_0_2(not_null(o_67), not_null(t_67), t);
  {
    static ATerm r_4 (ATerm t);
    static ATerm r_4 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(q_67), t);
      return(t);
    }
    t = _2_0(q_4, r_4, t);
  }
  if(((s_67 != NULL) && (s_67 != t)))
    _fail(t);
  else
    s_67 = t;
  t = term_a_43;
  if(((r_67 != NULL) && (r_67 != t)))
    _fail(t);
  else
    r_67 = t;
  t = not_null(s_67);
  t = dbg_0_1(not_null(r_67), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm b_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(d_43);
    }
  else
    {
      t = b_43;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,s_4 = NULL,b_12 = NULL;
  if(((l_68 != NULL) && (l_68 != t)))
    _fail(t);
  else
    l_68 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((d_68 != NULL) && (d_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_68 = ATgetArgument(t, 0);
      if(((e_68 != NULL) && (e_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_68 = ATgetArgument(t, 1);
      if(((f_68 != NULL) && (f_68 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        f_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((m_68 != NULL) && (m_68 != t)))
    _fail(t);
  else
    m_68 = t;
  t = SSLgetAnnotations(not_null(l_68));
  if(((c_68 != NULL) && (c_68 != t)))
    _fail(t);
  else
    c_68 = t;
  t = not_null(d_68);
  t = i_109(t);
  if(((g_68 != NULL) && (g_68 != t)))
    _fail(t);
  else
    g_68 = t;
  t = not_null(e_68);
  t = j_109(t);
  if(((h_68 != NULL) && (h_68 != t)))
    _fail(t);
  else
    h_68 = t;
  t = not_null(f_68);
  t = k_109(t);
  if(((i_68 != NULL) && (i_68 != t)))
    _fail(t);
  else
    i_68 = t;
  if(((k_68 != NULL) && (k_68 != t)))
    _fail(t);
  else
    k_68 = t;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(g_68), not_null(h_68), not_null(i_68));
  if(((s_4 != NULL) && (s_4 != t)))
    _fail(t);
  else
    s_4 = t;
  t = SSLsetAnnotations(not_null(s_4), not_null(c_68));
  if(((j_68 != NULL) && (j_68 != t)))
    _fail(t);
  else
    j_68 = t;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t)
{
  ATerm n_68 = NULL;
  if(((n_68 != NULL) && (n_68 != t)))
    _fail(t);
  else
    n_68 = t;
  t = not_null(f_81);
  t = is_string_0_0(t);
  t = not_null(n_68);
  {
    static ATerm t_4 (ATerm t);
    static ATerm t_4 (ATerm t)
    {
      ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
      if(((o_68 != NULL) && (o_68 != t)))
        _fail(t);
      else
        o_68 = t;
      if(((p_68 != NULL) && (p_68 != t)))
        _fail(t);
      else
        p_68 = t;
      t = not_null(o_68);
      if(((q_68 != NULL) && (q_68 != t)))
        _fail(t);
      else
        q_68 = t;
      t = SSL_explode_term(not_null(q_68));
      if(match_cons(t, sym__2))
        {
          if(((f_81 != NULL) && (f_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_81 = ATgetArgument(t, 0);
          {
            ATerm e_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(p_68);
      return(t);
    }
    t = collect_all_1_0(t_4, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  if(((t_68 != NULL) && (t_68 != t)))
    _fail(t);
  else
    t_68 = t;
  t = term_f_43;
  if(((s_68 != NULL) && (s_68 != t)))
    _fail(t);
  else
    s_68 = t;
  t = not_null(t_68);
  t = xtc_fetch_meta_0_1(not_null(s_68), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((r_68 != NULL) && (r_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(r_68);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_69 = NULL;
  if(((d_69 != NULL) && (d_69 != t)))
    _fail(t);
  else
    d_69 = t;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm e_69 = NULL;
  if(((e_69 != NULL) && (e_69 != t)))
    _fail(t);
  else
    e_69 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm u_4 (ATerm t);
    static ATerm u_4 (ATerm t)
    {
      static ATerm v_4 (ATerm t);
      static ATerm v_4 (ATerm t)
      {
        ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
        if(((y_68 != NULL) && (y_68 != t)))
          _fail(t);
        else
          y_68 = t;
        if(((c_69 != NULL) && (c_69 != t)))
          _fail(t);
        else
          c_69 = t;
        if(((z_68 != NULL) && (z_68 != t)))
          _fail(t);
        else
          z_68 = t;
        t = not_null(c_69);
        if(((b_69 != NULL) && (b_69 != t)))
          _fail(t);
        else
          b_69 = t;
        t = term_g_46;
        t = o_151(t);
        if(((a_69 != NULL) && (a_69 != t)))
          _fail(t);
        else
          a_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_68), not_null(a_69));
        t = eq_0_0(t);
        t = not_null(y_68);
        return(t);
      }
      t = XtcContract_3_0(v_4, w_4, x_4, t);
      return(t);
    }
    t = filter_1_0(u_4, t);
  }
  if(((x_68 != NULL) && (x_68 != t)))
    _fail(t);
  else
    x_68 = t;
  t = term_f_43;
  if(((w_68 != NULL) && (w_68 != t)))
    _fail(t);
  else
    w_68 = t;
  t = not_null(x_68);
  t = dbg_0_1(not_null(w_68), t);
  return(t);
}
ATerm warn_0_1 (ATerm w_78, ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL;
  if(((k_69 != NULL) && (k_69 != t)))
    _fail(t);
  else
    k_69 = t;
  t = term_h_46;
  if(((f_69 != NULL) && (f_69 != t)))
    _fail(t);
  else
    f_69 = t;
  t = not_null(k_69);
  if(((h_69 != NULL) && (h_69 != t)))
    _fail(t);
  else
    h_69 = t;
  if(((j_69 != NULL) && (j_69 != t)))
    _fail(t);
  else
    j_69 = t;
  if(((i_69 != NULL) && (i_69 != t)))
    _fail(t);
  else
    i_69 = t;
  if(((g_69 != NULL) && (g_69 != t)))
    _fail(t);
  else
    g_69 = t;
  t = not_null(h_69);
  t = log_0_3(not_null(f_69), not_null(w_78), not_null(g_69), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm i_46 = t;
  int j_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_69 = NULL;
      if(((l_69 != NULL) && (l_69 != t)))
        _fail(t);
      else
        l_69 = t;
      t = term_s_47;
      t = get_config_0_0(t);
      t = not_null(l_69);
      LocalPopChoice(j_46);
      {
        ATerm m_69 = NULL,n_69 = NULL;
        if(((n_69 != NULL) && (n_69 != t)))
          _fail(t);
        else
          n_69 = t;
        t = term_t_47;
        if(((m_69 != NULL) && (m_69 != t)))
          _fail(t);
        else
          m_69 = t;
        t = not_null(n_69);
        t = err_0_1(not_null(m_69), t);
        _fail(t);
      }
    }
  else
    {
      t = i_46;
      {
        ATerm o_69 = NULL,p_69 = NULL;
        if(((p_69 != NULL) && (p_69 != t)))
          _fail(t);
        else
          p_69 = t;
        t = term_u_47;
        if(((o_69 != NULL) && (o_69 != t)))
          _fail(t);
        else
          o_69 = t;
        t = not_null(p_69);
        t = warn_0_1(not_null(o_69), t);
      }
    }
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm q_69 = NULL;
  if(((q_69 != NULL) && (q_69 != t)))
    _fail(t);
  else
    q_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, not_null(q_69));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm w_69 = NULL;
  if(((w_69 != NULL) && (w_69 != t)))
    _fail(t);
  else
    w_69 = t;
  t = term_y_47;
  t = set_config_0_0(t);
  t = not_null(w_69);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  ATerm z_47 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_69 = NULL;
      if(((r_69 != NULL) && (r_69 != t)))
        _fail(t);
      else
        r_69 = t;
      t = term_x_47;
      t = get_config_0_0(t);
      t = not_null(r_69);
      LocalPopChoice(d_48);
      {
        ATerm s_69 = NULL;
        if(((s_69 != NULL) && (s_69 != t)))
          _fail(t);
        else
          s_69 = t;
        t = term_x_47;
        t = rm_config_0_0(t);
        t = not_null(s_69);
        t = restore_always_2_0(s_151, y_4, t);
      }
    }
  else
    {
      t = z_47;
      t = s_151(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm n_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
      if(((y_69 != NULL) && (y_69 != t)))
        _fail(t);
      else
        y_69 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((z_69 != NULL) && (z_69 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(z_69);
      if(((a_70 != NULL) && (a_70 != t)))
        _fail(t);
      else
        a_70 = t;
      LocalPopChoice(p_48);
    }
  else
    {
      t = n_48;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm a_1 (ATerm), ATerm t)
{
  static ATerm t_72 (ATerm n_70, ATerm s_70, ATerm t_70, ATerm v_70, ATerm t);
  static ATerm u_72 (ATerm m_71, ATerm n_71, ATerm t_71, ATerm u_71, ATerm v_71, ATerm t);
  static ATerm t_72 (ATerm n_70, ATerm s_70, ATerm t_70, ATerm v_70, ATerm t)
  {
    ATerm w_70 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL;
    t = not_null(n_70);
    if(((c_71 != NULL) && (c_71 != t)))
      _fail(t);
    else
      c_71 = t;
    t = not_null(s_70);
    if(((e_71 != NULL) && (e_71 != t)))
      _fail(t);
    else
      e_71 = t;
    t = not_null(t_70);
    if(((w_70 != NULL) && (w_70 != t)))
      _fail(t);
    else
      w_70 = t;
    t = not_null(v_70);
    t = Fst_0_0(t);
    t = a_1(t);
    if(((b_71 != NULL) && (b_71 != t)))
      _fail(t);
    else
      b_71 = t;
    t = not_null(w_70);
    t = some_or_empty_0_0(t);
    {
      ATerm v_48 = t;
      int w_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
          if(((f_71 != NULL) && (f_71 != t)))
            _fail(t);
          else
            f_71 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((g_71 != NULL) && (g_71 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(g_71);
          if(((h_71 != NULL) && (h_71 != t)))
            _fail(t);
          else
            h_71 = t;
          LocalPopChoice(w_48);
        }
      else
        {
          t = v_48;
          t = Nil_0_0(t);
        }
    }
    if(((d_71 != NULL) && (d_71 != t)))
      _fail(t);
    else
      d_71 = t;
    {
      ATerm x_48 = t;
      int z_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
          static ATerm z_4 (ATerm t);
          static ATerm z_4 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(e_71), t);
            return(t);
          }
          if(((i_71 != NULL) && (i_71 != t)))
            _fail(t);
          else
            i_71 = t;
          if(((k_71 != NULL) && (k_71 != t)))
            _fail(t);
          else
            k_71 = t;
          t = not_null(i_71);
          t = xtc_new_file_0_0(t);
          if(((j_71 != NULL) && (j_71 != t)))
            _fail(t);
          else
            j_71 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(b_71), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_71))), not_null(c_71), not_null(d_71));
          t = xtc_cc_disable_1_0(z_4, t);
          LocalPopChoice(z_48);
        }
      else
        {
          t = x_48;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm u_72 (ATerm m_71, ATerm n_71, ATerm t_71, ATerm u_71, ATerm v_71, ATerm t)
  {
    ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL;
    t = not_null(m_71);
    if(((x_71 != NULL) && (x_71 != t)))
      _fail(t);
    else
      x_71 = t;
    t = not_null(n_71);
    if(((y_71 != NULL) && (y_71 != t)))
      _fail(t);
    else
      y_71 = t;
    t = not_null(t_71);
    if(((z_71 != NULL) && (z_71 != t)))
      _fail(t);
    else
      z_71 = t;
    t = not_null(u_71);
    if(((w_71 != NULL) && (w_71 != t)))
      _fail(t);
    else
      w_71 = t;
    t = not_null(v_71);
    if(((a_72 != NULL) && (a_72 != t)))
      _fail(t);
    else
      a_72 = t;
    {
      ATerm b_49 = t;
      int c_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(w_71);
          t = xtc_fetch_contracts_1_0(a_1, t);
          LocalPopChoice(c_49);
          {
            static ATerm a_5 (ATerm t);
            static ATerm a_5 (ATerm t)
            {
              ATerm g_72 = NULL,h_72 = NULL;
              if(((h_72 != NULL) && (h_72 != t)))
                _fail(t);
              else
                h_72 = t;
              if(((g_72 != NULL) && (g_72 != t)))
                _fail(t);
              else
                g_72 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(x_71), not_null(y_71), not_null(z_71)), not_null(g_72));
              t = xtc_cc_1_0(a_1, t);
              return(t);
            }
            t = map_1_0(a_5, t);
          }
        }
      else
        {
          t = b_49;
          {
            ATerm i_72 = NULL;
            if(((i_72 != NULL) && (i_72 != t)))
              _fail(t);
            else
              i_72 = t;
          }
        }
    }
    t = not_null(a_72);
    return(t);
  }
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  if(((m_72 != NULL) && (m_72 != t)))
    _fail(t);
  else
    m_72 = t;
  if(match_cons(t, sym__2))
    {
      if(((n_72 != NULL) && (n_72 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_72 = ATgetArgument(t, 0);
      if(((s_72 != NULL) && (s_72 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_72);
  if(match_cons(t, sym__3))
    {
      o_72 = ATgetArgument(t, 0);
      p_72 = ATgetArgument(t, 1);
      q_72 = ATgetArgument(t, 2);
      t = not_null(s_72);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((j_72 != NULL) && (j_72 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_72 = ATgetArgument(t, 0);
          if(((k_72 != NULL) && (k_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_72 = ATgetArgument(t, 1);
          if(((l_72 != NULL) && (l_72 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            l_72 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_72(not_null(q_72), not_null(k_72), not_null(l_72), not_null(m_72), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((o_72 != NULL) && (o_72 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_72 = ATgetArgument(t, 0);
          if(((p_72 != NULL) && (p_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_72 = ATgetArgument(t, 1);
          if(((q_72 != NULL) && (q_72 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            q_72 = ATgetArgument(t, 2);
          if(((r_72 != NULL) && (r_72 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            r_72 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_72(not_null(o_72), not_null(p_72), not_null(q_72), not_null(s_72), not_null(m_72), t);
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
  if(((v_72 != NULL) && (v_72 != t)))
    _fail(t);
  else
    v_72 = t;
  t = term_x_47;
  t = get_config_0_0(t);
  if(((x_72 != NULL) && (x_72 != t)))
    _fail(t);
  else
    x_72 = t;
  t = term_d_49;
  if(((w_72 != NULL) && (w_72 != t)))
    _fail(t);
  else
    w_72 = t;
  t = not_null(x_72);
  t = notice_0_1(not_null(w_72), t);
  t = not_null(v_72);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t)
{
  ATerm y_72 = NULL;
  ATerm e_49 = t;
  int k_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_72 = NULL;
      if(((z_72 != NULL) && (z_72 != t)))
        _fail(t);
      else
        z_72 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(z_72);
      LocalPopChoice(k_49);
      {
        ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
        if(((e_73 != NULL) && (e_73 != t)))
          _fail(t);
        else
          e_73 = t;
        t = term_l_49;
        if(((d_73 != NULL) && (d_73 != t)))
          _fail(t);
        else
          d_73 = t;
        t = not_null(e_73);
        t = dbg_0_1(not_null(d_73), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((c_73 != NULL) && (c_73 != t)))
          _fail(t);
        else
          c_73 = t;
        t = p_151(t);
        if(((y_72 != NULL) && (y_72 != t)))
          _fail(t);
        else
          y_72 = t;
        t = not_null(c_73);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(y_72);
        if(((b_73 != NULL) && (b_73 != t)))
          _fail(t);
        else
          b_73 = t;
        t = term_o_49;
        if(((a_73 != NULL) && (a_73 != t)))
          _fail(t);
        else
          a_73 = t;
        t = not_null(b_73);
        t = dbg_0_1(not_null(a_73), t);
      }
    }
  else
    {
      t = e_49;
      t = p_151(t);
    }
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_73 != NULL) && (g_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_73 = ATgetArgument(t, 0);
      if(((f_73 != NULL) && (f_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_73 != NULL) && (i_73 != t)))
    _fail(t);
  else
    i_73 = t;
  if(((j_73 != NULL) && (j_73 != t)))
    _fail(t);
  else
    j_73 = t;
  t = not_null(g_73);
  {
    ATerm p_49 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_49;
      }
  }
  t = not_null(j_73);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm q_49 = ATgetArgument(t, 0);
      if(((h_73 != NULL) && (h_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_73), not_null(h_73));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL;
  t = term_r_49;
  t = table_getlist_0_0(t);
  {
    ATerm s_49 = t;
    int t_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(t_49);
      }
    else
      {
        t = s_49;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((l_73 != NULL) && (l_73 != t)))
    _fail(t);
  else
    l_73 = t;
  if(((k_73 != NULL) && (k_73 != t)))
    _fail(t);
  else
    k_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_49, not_null(k_73));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm s_73 = NULL;
  if(((s_73 != NULL) && (s_73 != t)))
    _fail(t);
  else
    s_73 = t;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm t_73 = NULL;
  if(((t_73 != NULL) && (t_73 != t)))
    _fail(t);
  else
    t_73 = t;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm u_73 = NULL;
  if(((u_73 != NULL) && (u_73 != t)))
    _fail(t);
  else
    u_73 = t;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_73 = NULL;
  if(((v_73 != NULL) && (v_73 != t)))
    _fail(t);
  else
    v_73 = t;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm w_73 = NULL;
  if(((w_73 != NULL) && (w_73 != t)))
    _fail(t);
  else
    w_73 = t;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm x_73 = NULL;
  if(((x_73 != NULL) && (x_73 != t)))
    _fail(t);
  else
    x_73 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_49 = t;
      if((PushChoice() == 0))
        {
          ATerm n_50 = t;
          int r_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(b_5, t);
              LocalPopChoice(r_50);
            }
          else
            {
              t = n_50;
              t = XtcQuery_2_0(c_5, d_5, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_49;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(z_0, t);
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm s_50 = t;
        int d_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(e_5, t);
            LocalPopChoice(d_51);
          }
        else
          {
            t = s_50;
            t = XtcQuery_2_0(f_5, g_5, t);
          }
      }
      {
        ATerm e_51 = t;
        int y_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(z_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(y_51);
          }
        else
          {
            t = e_51;
            {
              ATerm y_73 = NULL,z_73 = NULL;
              if(((y_73 != NULL) && (y_73 != t)))
                _fail(t);
              else
                y_73 = t;
              if(((z_73 != NULL) && (z_73 != t)))
                _fail(t);
              else
                z_73 = t;
              t = not_null(y_73);
              t = xtc_import_0_0(t);
              t = not_null(z_73);
              t = xtc_find_reg_1_0(z_0, t);
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
static ATerm h_5 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL;
  if(((b_74 != NULL) && (b_74 != t)))
    _fail(t);
  else
    b_74 = t;
  t = term_z_51;
  if(((a_74 != NULL) && (a_74 != t)))
    _fail(t);
  else
    a_74 = t;
  t = not_null(b_74);
  t = err_0_1(not_null(a_74), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, h_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
  if(((i_74 != NULL) && (i_74 != t)))
    _fail(t);
  else
    i_74 = t;
  t = term_a_52;
  if(((h_74 != NULL) && (h_74 != t)))
    _fail(t);
  else
    h_74 = t;
  t = not_null(i_74);
  t = dbg_0_1(not_null(h_74), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm b_52 = ATgetArgument(t, 0);
      ATerm c_52 = ATgetArgument(t, 1);
      if(match_cons(c_52, sym_Some_1))
        {
          if(((c_74 != NULL) && (c_74 != ATgetArgument(c_52, 0))))
            _fail(ATgetArgument(c_52, 0));
          else
            c_74 = ATgetArgument(c_52, 0);
        }
      else
        _fail(t);
      {
        ATerm c_53 = ATgetArgument(t, 2);
      }
      {
        ATerm d_53 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((g_74 != NULL) && (g_74 != t)))
    _fail(t);
  else
    g_74 = t;
  if(((d_74 != NULL) && (d_74 != t)))
    _fail(t);
  else
    d_74 = t;
  t = not_null(g_74);
  if(((f_74 != NULL) && (f_74 != t)))
    _fail(t);
  else
    f_74 = t;
  t = not_null(p_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((e_74 != NULL) && (e_74 != t)))
    _fail(t);
  else
    e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_74), not_null(e_74));
  t = xtc_cc_wrap_1_0(i_5, t);
  t = not_null(c_74);
  return(t);
}
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,j_5 = NULL,c_12 = NULL;
  if(((y_74 != NULL) && (y_74 != t)))
    _fail(t);
  else
    y_74 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((k_74 != NULL) && (k_74 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_74 != NULL) && (z_74 != t)))
    _fail(t);
  else
    z_74 = t;
  t = SSLgetAnnotations(not_null(y_74));
  if(((j_74 != NULL) && (j_74 != t)))
    _fail(t);
  else
    j_74 = t;
  t = not_null(k_74);
  t = n_107(t);
  if(((v_74 != NULL) && (v_74 != t)))
    _fail(t);
  else
    v_74 = t;
  if(((x_74 != NULL) && (x_74 != t)))
    _fail(t);
  else
    x_74 = t;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(v_74));
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = SSLsetAnnotations(not_null(j_5), not_null(j_74));
  if(((w_74 != NULL) && (w_74 != t)))
    _fail(t);
  else
    w_74 = t;
  return(t);
}
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(j_53);
    }
  else
    {
      t = i_53;
      t = Some_1_0(o_132, t);
    }
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL;
  if(((b_75 != NULL) && (b_75 != t)))
    _fail(t);
  else
    b_75 = t;
  if(match_cons(t, sym_URL_1))
    {
      c_75 = ATgetArgument(t, 0);
      t = not_null(b_75);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm d_75 = NULL,e_75 = NULL;
          t = not_null(b_75);
          if(((e_75 != NULL) && (e_75 != t)))
            _fail(t);
          else
            e_75 = t;
          t = term_t_12;
          t = xtc_new_file_0_0(t);
          if(((d_75 != NULL) && (d_75 != t)))
            _fail(t);
          else
            d_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_53, not_null(d_75));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_75));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((c_75 != NULL) && (c_75 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(b_75);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,k_5 = NULL,d_12 = NULL;
  if(((q_75 != NULL) && (q_75 != t)))
    _fail(t);
  else
    q_75 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((g_75 != NULL) && (g_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_75 = ATgetArgument(t, 0);
      if(((h_75 != NULL) && (h_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_75 = ATgetArgument(t, 1);
      if(((i_75 != NULL) && (i_75 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_75 = ATgetArgument(t, 2);
      if(((j_75 != NULL) && (j_75 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        j_75 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((r_75 != NULL) && (r_75 != t)))
    _fail(t);
  else
    r_75 = t;
  t = SSLgetAnnotations(not_null(q_75));
  if(((f_75 != NULL) && (f_75 != t)))
    _fail(t);
  else
    f_75 = t;
  t = not_null(g_75);
  t = h_111(t);
  if(((k_75 != NULL) && (k_75 != t)))
    _fail(t);
  else
    k_75 = t;
  t = not_null(h_75);
  t = i_111(t);
  if(((l_75 != NULL) && (l_75 != t)))
    _fail(t);
  else
    l_75 = t;
  t = not_null(i_75);
  t = j_111(t);
  if(((m_75 != NULL) && (m_75 != t)))
    _fail(t);
  else
    m_75 = t;
  t = not_null(j_75);
  t = k_111(t);
  if(((n_75 != NULL) && (n_75 != t)))
    _fail(t);
  else
    n_75 = t;
  if(((p_75 != NULL) && (p_75 != t)))
    _fail(t);
  else
    p_75 = t;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(k_75), not_null(l_75), not_null(m_75), not_null(n_75));
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  t = SSLsetAnnotations(not_null(k_5), not_null(f_75));
  if(((o_75 != NULL) && (o_75 != t)))
    _fail(t);
  else
    o_75 = t;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = option_1_0(o_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = option_1_0(q_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = FILE_1_0(p_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm y_75 = NULL;
  if(((y_75 != NULL) && (y_75 != t)))
    _fail(t);
  else
    y_75 = t;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = FILE_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm z_75 = NULL;
  if(((z_75 != NULL) && (z_75 != t)))
    _fail(t);
  else
    z_75 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm o_53 = t;
  int p_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
      t = XtcConf_4_0(l_5, m_5, n_5, is_list_0_0, t);
      if(((v_75 != NULL) && (v_75 != t)))
        _fail(t);
      else
        v_75 = t;
      if(((x_75 != NULL) && (x_75 != t)))
        _fail(t);
      else
        x_75 = t;
      t = x_0(t);
      if(((w_75 != NULL) && (w_75 != t)))
        _fail(t);
      else
        w_75 = t;
      if(((u_75 != NULL) && (u_75 != t)))
        _fail(t);
      else
        u_75 = t;
      t = not_null(v_75);
      t = xtc_dispatch_0_1(not_null(u_75), t);
      LocalPopChoice(p_53);
    }
  else
    {
      t = o_53;
      {
        ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
        t = is_list_0_0(t);
        if(((a_76 != NULL) && (a_76 != t)))
          _fail(t);
        else
          a_76 = t;
        t = x_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((c_76 != NULL) && (c_76 != t)))
          _fail(t);
        else
          c_76 = t;
        if(((b_76 != NULL) && (b_76 != t)))
          _fail(t);
        else
          b_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_76), not_null(a_76));
        t = call_0_0(t);
      }
    }
  return(t);
}
ATerm None_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_None_0)))
    _fail(t);
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,s_5 = NULL,e_12 = NULL;
  if(((i_76 != NULL) && (i_76 != t)))
    _fail(t);
  else
    i_76 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((e_76 != NULL) && (e_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((j_76 != NULL) && (j_76 != t)))
    _fail(t);
  else
    j_76 = t;
  t = SSLgetAnnotations(not_null(i_76));
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  t = not_null(e_76);
  t = m_109(t);
  if(((f_76 != NULL) && (f_76 != t)))
    _fail(t);
  else
    f_76 = t;
  if(((h_76 != NULL) && (h_76 != t)))
    _fail(t);
  else
    h_76 = t;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_76));
  if(((s_5 != NULL) && (s_5 != t)))
    _fail(t);
  else
    s_5 = t;
  t = SSLsetAnnotations(not_null(s_5), not_null(d_76));
  if(((g_76 != NULL) && (g_76 != t)))
    _fail(t);
  else
    g_76 = t;
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm k_76 = NULL;
  if(((k_76 != NULL) && (k_76 != t)))
    _fail(t);
  else
    k_76 = t;
  t = SSL_close(not_null(k_76));
  return(t);
}
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_76 != NULL) && (n_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_76 = ATgetArgument(t, 0);
      if(((l_76 != NULL) && (l_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_76 != NULL) && (q_76 != t)))
    _fail(t);
  else
    q_76 = t;
  t = w_111(t);
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_76), not_null(n_76), not_null(l_76));
  t = table_push_0_0(t);
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_76), term_m_54);
        t = table_get_0_0(t);
        {
          ATerm o_54 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_54;
            }
        }
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((o_76 != NULL) && (o_76 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        o_76 = ATgetFirst((ATermList) t);
      if(((p_76 != NULL) && (p_76 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        p_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_76), term_m_54, (ATerm) ATinsert(CheckATermList(not_null(p_76)), (ATerm) ATinsert(CheckATermList(not_null(o_76)), not_null(n_76))));
  t = table_put_0_0(t);
  t = not_null(q_76);
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm s_76 = NULL;
  ATerm q_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm x_76 (ATerm t_76, ATerm t);
      static ATerm x_76 (ATerm t_76, ATerm t)
      {
        ATerm u_76 = NULL,v_76 = NULL;
        t = not_null(t_76);
        if(((v_76 != NULL) && (v_76 != t)))
          _fail(t);
        else
          v_76 = t;
        t = not_null(t_76);
        if(((u_76 != NULL) && (u_76 != t)))
          _fail(t);
        else
          u_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_76), term_z_54);
        t = conc_strings_0_0(t);
        if(((s_76 != NULL) && (s_76 != t)))
          _fail(t);
        else
          s_76 = t;
        t = SSL_mkstemp(not_null(s_76));
        return(t);
      }
      ATerm w_76 = NULL;
      if(((w_76 != NULL) && (w_76 != t)))
        _fail(t);
      else
        w_76 = t;
      t = x_76(not_null(w_76), t);
      LocalPopChoice(y_54);
    }
  else
    {
      t = q_54;
      t = term_a_55;
      t = perror_0_0(t);
      _fail(t);
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm d_55 = t;
  int e_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_55;
      t = getenv_0_0(t);
      LocalPopChoice(e_55);
    }
  else
    {
      t = d_55;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL;
  if(((z_76 != NULL) && (z_76 != t)))
    _fail(t);
  else
    z_76 = t;
  t = temp_dir_0_0(t);
  if(((y_76 != NULL) && (y_76 != t)))
    _fail(t);
  else
    y_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_76), term_i_55);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_q_55;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_77 = ATgetArgument(t, 0);
      if(((a_77 != NULL) && (a_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_77 != NULL) && (c_77 != t)))
    _fail(t);
  else
    c_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_77), term_t_12);
  t = assert_1_0(t_5, t);
  t = not_null(a_77);
  t = close_0_0(t);
  t = not_null(b_77);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm j_77 = NULL;
  if(((j_77 != NULL) && (j_77 != t)))
    _fail(t);
  else
    j_77 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  if(((e_77 != NULL) && (e_77 != t)))
    _fail(t);
  else
    e_77 = t;
  if(((g_77 != NULL) && (g_77 != t)))
    _fail(t);
  else
    g_77 = t;
  t = xtc_new_file_0_0(t);
  if(((f_77 != NULL) && (f_77 != t)))
    _fail(t);
  else
    f_77 = t;
  {
    ATerm r_55 = t;
    int s_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_77 = NULL,i_77 = NULL;
        t = not_null(e_77);
        {
          ATerm t_55 = t;
          int u_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(u_5, t);
              LocalPopChoice(u_55);
            }
          else
            {
              t = t_55;
              t = stdin_0_0(t);
            }
        }
        if(((i_77 != NULL) && (i_77 != t)))
          _fail(t);
        else
          i_77 = t;
        t = l_153(t);
        if(((h_77 != NULL) && (h_77 != t)))
          _fail(t);
        else
          h_77 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(e_77)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_77))), term_p_18, not_null(h_77));
        LocalPopChoice(s_55);
      }
    else
      {
        t = r_55;
        {
          ATerm k_77 = NULL,l_77 = NULL;
          t = not_null(e_77);
          t = None_0_0(t);
          if(((l_77 != NULL) && (l_77 != t)))
            _fail(t);
          else
            l_77 = t;
          t = l_153(t);
          if(((k_77 != NULL) && (k_77 != t)))
            _fail(t);
          else
            k_77 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_p_18, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_77))), term_p_18, not_null(k_77));
        }
      }
  }
  t = xtc_command_1_0(k_153, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_77));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t)
{
  t = term_p_18;
  t = xtc_transform_file_2_0(e_153, f_153, t);
  return(t);
}
ATerm err_0_1 (ATerm v_78, ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
  if(((r_77 != NULL) && (r_77 != t)))
    _fail(t);
  else
    r_77 = t;
  t = term_h_34;
  if(((m_77 != NULL) && (m_77 != t)))
    _fail(t);
  else
    m_77 = t;
  t = not_null(r_77);
  if(((o_77 != NULL) && (o_77 != t)))
    _fail(t);
  else
    o_77 = t;
  if(((q_77 != NULL) && (q_77 != t)))
    _fail(t);
  else
    q_77 = t;
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  if(((n_77 != NULL) && (n_77 != t)))
    _fail(t);
  else
    n_77 = t;
  t = not_null(o_77);
  t = log_0_3(not_null(m_77), not_null(v_78), not_null(n_77), t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm s_77 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((s_77 != NULL) && (s_77 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        s_77 = ATgetFirst((ATermList) t);
      {
        ATerm v_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(s_77);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  static ATerm v_5 (ATerm t);
  static ATerm v_5 (ATerm t)
  {
    ATerm v_77 = NULL,w_77 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((v_77 != NULL) && (v_77 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_77 = ATgetArgument(t, 0);
        if(((w_77 != NULL) && (w_77 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          w_77 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(u_77), not_null(v_77), not_null(w_77));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((u_77 != NULL) && (u_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_77 = ATgetArgument(t, 0);
      if(((t_77 != NULL) && (t_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_77);
  t = map_1_0(v_5, t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm w_55 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_55;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_77 != NULL) && (z_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_77 = ATgetArgument(t, 0);
      if(((x_77 != NULL) && (x_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_78 != NULL) && (b_78 != t)))
    _fail(t);
  else
    b_78 = t;
  t = not_null(x_77);
  {
    ATerm x_55 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(w_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_55;
      }
  }
  t = not_null(x_77);
  t = filter_1_0(x_5, t);
  if(((a_78 != NULL) && (a_78 != t)))
    _fail(t);
  else
    a_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_77), (ATerm) ATinsert(ATempty, term_y_55));
  t = union_0_0(t);
  if(((y_77 != NULL) && (y_77 != t)))
    _fail(t);
  else
    y_77 = t;
  t = not_null(z_77);
  if(((d_78 != NULL) && (d_78 != t)))
    _fail(t);
  else
    d_78 = t;
  if(((f_78 != NULL) && (f_78 != t)))
    _fail(t);
  else
    f_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_55), not_null(a_78));
  t = conc_0_0(t);
  if(((e_78 != NULL) && (e_78 != t)))
    _fail(t);
  else
    e_78 = t;
  if(((c_78 != NULL) && (c_78 != t)))
    _fail(t);
  else
    c_78 = t;
  t = not_null(d_78);
  t = xtc_load_0_1(not_null(c_78), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_77), not_null(y_77));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_78 != NULL) && (h_78 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_78 = ATgetArgument(t, 0);
      if(((g_78 != NULL) && (g_78 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_78 != NULL) && (j_78 != t)))
    _fail(t);
  else
    j_78 = t;
  if(((k_78 != NULL) && (k_78 != t)))
    _fail(t);
  else
    k_78 = t;
  t = not_null(h_78);
  t = file_exists_0_0(t);
  t = not_null(k_78);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm a_56 = ATgetArgument(t, 0);
      if(((i_78 != NULL) && (i_78 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_78), not_null(i_78));
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL;
  t = term_r_49;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((m_78 != NULL) && (m_78 != t)))
    _fail(t);
  else
    m_78 = t;
  if(((l_78 != NULL) && (l_78 != t)))
    _fail(t);
  else
    l_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_49, not_null(l_78));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  if(((q_78 != NULL) && (q_78 != t)))
    _fail(t);
  else
    q_78 = t;
  if(((r_78 != NULL) && (r_78 != t)))
    _fail(t);
  else
    r_78 = t;
  t = not_null(q_78);
  if(((s_78 != NULL) && (s_78 != t)))
    _fail(t);
  else
    s_78 = t;
  t = SSL_explode_term(not_null(s_78));
  if(match_cons(t, sym__2))
    {
      ATerm b_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_56 = ATgetArgument(t, 1);
        if(((ATgetType(c_56) == AT_LIST) && !(ATisEmpty(c_56))))
          {
            if(((n_78 != NULL) && (n_78 != ATgetFirst((ATermList) c_56))))
              _fail(ATgetFirst((ATermList) c_56));
            else
              n_78 = ATgetFirst((ATermList) c_56);
            {
              ATerm d_56 = (ATerm) ATgetNext((ATermList) c_56);
              if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
                {
                  if(((p_78 != NULL) && (p_78 != ATgetFirst((ATermList) d_56))))
                    _fail(ATgetFirst((ATermList) d_56));
                  else
                    p_78 = ATgetFirst((ATermList) d_56);
                  if(((o_78 != NULL) && (o_78 != (ATerm) ATgetNext((ATermList) d_56))))
                    _fail((ATerm) ATgetNext((ATermList) d_56));
                  else
                    o_78 = (ATerm) ATgetNext((ATermList) d_56);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(p_78);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm u_78 = NULL,s_79 = NULL,t_79 = NULL,x_79 = NULL,g_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL;
  if(((t_79 != NULL) && (t_79 != t)))
    _fail(t);
  else
    t_79 = t;
  if(((g_80 != NULL) && (g_80 != t)))
    _fail(t);
  else
    g_80 = t;
  t = not_null(t_79);
  if(((j_80 != NULL) && (j_80 != t)))
    _fail(t);
  else
    j_80 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      k_80 = ATgetArgument(t, 0);
      t = not_null(k_80);
      if(((s_79 != NULL) && (s_79 != t)))
        _fail(t);
      else
        s_79 = t;
      t = not_null(j_80);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((k_80 != NULL) && (k_80 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_80 = ATgetArgument(t, 0);
          if(((l_80 != NULL) && (l_80 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(k_80);
      if(((s_79 != NULL) && (s_79 != t)))
        _fail(t);
      else
        s_79 = t;
      t = not_null(l_80);
      if(((u_78 != NULL) && (u_78 != t)))
        _fail(t);
      else
        u_78 = t;
      t = not_null(j_80);
    }
  {
    ATerm e_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL;
        t = not_null(t_79);
        if(((q_80 != NULL) && (q_80 != t)))
          _fail(t);
        else
          q_80 = t;
        t = term_n_56;
        if(((p_80 != NULL) && (p_80 != t)))
          _fail(t);
        else
          p_80 = t;
        t = not_null(q_80);
        t = xtc_query_one_2_1(v_150, w_150, not_null(p_80), t);
        if(((m_80 != NULL) && (m_80 != t)))
          _fail(t);
        else
          m_80 = t;
        t = not_null(t_79);
        if(((o_80 != NULL) && (o_80 != t)))
          _fail(t);
        else
          o_80 = t;
        t = term_o_56;
        if(((n_80 != NULL) && (n_80 != t)))
          _fail(t);
        else
          n_80 = t;
        t = not_null(o_80);
        t = dbg_0_1(not_null(n_80), t);
        t = not_null(m_80);
        LocalPopChoice(m_56);
      }
    else
      {
        t = e_56;
        {
          ATerm r_80 = NULL,s_80 = NULL;
          t = not_null(s_79);
          if(((s_80 != NULL) && (s_80 != t)))
            _fail(t);
          else
            s_80 = t;
          t = term_p_56;
          if(((r_80 != NULL) && (r_80 != t)))
            _fail(t);
          else
            r_80 = t;
          t = not_null(s_80);
          t = xtc_query_one_2_1(v_150, w_150, not_null(r_80), t);
          t = xtc_cache_put_0_1(not_null(t_79), t);
        }
      }
  }
  if(((x_79 != NULL) && (x_79 != t)))
    _fail(t);
  else
    x_79 = t;
  return(t);
}
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  if(((w_80 != NULL) && (w_80 != t)))
    _fail(t);
  else
    w_80 = t;
  if(((x_80 != NULL) && (x_80 != t)))
    _fail(t);
  else
    x_80 = t;
  t = not_null(w_80);
  if(((y_80 != NULL) && (y_80 != t)))
    _fail(t);
  else
    y_80 = t;
  t = SSL_explode_term(not_null(y_80));
  if(match_cons(t, sym__2))
    {
      ATerm q_56 = ATgetArgument(t, 0);
      if(((t_80 != NULL) && (t_80 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(x_80);
  if(((v_80 != NULL) && (v_80 != t)))
    _fail(t);
  else
    v_80 = t;
  t = not_null(t_80);
  t = foldr_3_0(b_135, c_135, d_135, t);
  if(((u_80 != NULL) && (u_80 != t)))
    _fail(t);
  else
    u_80 = t;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  static ATerm e_81 (ATerm t);
  static ATerm e_81 (ATerm t)
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL;
        if(((z_80 != NULL) && (z_80 != t)))
          _fail(t);
        else
          z_80 = t;
        if(((d_81 != NULL) && (d_81 != t)))
          _fail(t);
        else
          d_81 = t;
        t = not_null(z_80);
        t = d_129(t);
        if(((a_81 != NULL) && (a_81 != t)))
          _fail(t);
        else
          a_81 = t;
        t = not_null(d_81);
        if(((c_81 != NULL) && (c_81 != t)))
          _fail(t);
        else
          c_81 = t;
        t = crush_3_0(y_5, e_129, e_81, t);
        if(((b_81 != NULL) && (b_81 != t)))
          _fail(t);
        else
          b_81 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(b_81)), not_null(a_81));
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
        t = crush_3_0(z_5, e_129, e_81, t);
      }
    return(t);
  }
  t = e_81(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  t = collect_all_2_0(c_129, union_0_0, t);
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm w_0, ATerm t)
{
  static ATerm i_92 (ATerm m_81, ATerm t);
  static ATerm l_92 (ATerm o_91, ATerm t);
  static ATerm i_92 (ATerm m_81, ATerm t)
  {
    ATerm h_91 = NULL,i_91 = NULL;
    t = not_null(m_81);
    if(((h_91 != NULL) && (h_91 != t)))
      _fail(t);
    else
      h_91 = t;
    t = not_null(m_81);
    if(((i_91 != NULL) && (i_91 != t)))
      _fail(t);
    else
      i_91 = t;
    t = not_null(w_0);
    t = is_list_0_0(t);
    {
      ATerm t_56 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_56;
        }
    }
    {
      static ATerm a_6 (ATerm t);
      static ATerm a_6 (ATerm t)
      {
        ATerm k_91 = NULL,l_91 = NULL,n_91 = NULL;
        if(((l_91 != NULL) && (l_91 != t)))
          _fail(t);
        else
          l_91 = t;
        if(((n_91 != NULL) && (n_91 != t)))
          _fail(t);
        else
          n_91 = t;
        t = not_null(h_91);
        t = xtc_has_meta_0_1(not_null(l_91), t);
        t = not_null(l_91);
        return(t);
      }
      t = filter_1_0(a_6, t);
    }
    if(((w_0 != NULL) && (w_0 != t)))
      _fail(t);
    else
      w_0 = t;
    t = not_null(h_91);
    return(t);
  }
  static ATerm l_92 (ATerm o_91, ATerm t)
  {
    ATerm q_91 = NULL;
    t = not_null(o_91);
    if(((q_91 != NULL) && (q_91 != t)))
      _fail(t);
    else
      q_91 = t;
    t = not_null(o_91);
    {
      static ATerm b_6 (ATerm t);
      static ATerm b_6 (ATerm t)
      {
        if(((w_0 != NULL) && (w_0 != t)))
          _fail(t);
        else
          w_0 = t;
        return(t);
      }
      t = collect_all_1_0(b_6, t);
    }
    {
      ATerm u_56 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_56;
        }
    }
    t = not_null(q_91);
    return(t);
  }
  ATerm r_91 = NULL;
  if(((r_91 != NULL) && (r_91 != t)))
    _fail(t);
  else
    r_91 = t;
  {
    ATerm v_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_92 = NULL;
        t = not_null(r_91);
        if(((h_92 != NULL) && (h_92 != t)))
          _fail(t);
        else
          h_92 = t;
        t = not_null(w_0);
        t = Nil_0_0(t);
        t = not_null(h_92);
        LocalPopChoice(w_56);
      }
    else
      {
        t = v_56;
        {
          ATerm c_57 = t;
          int d_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_92(not_null(r_91), t);
              LocalPopChoice(d_57);
            }
          else
            {
              t = c_57;
              t = l_92(not_null(r_91), t);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t)
{
  ATerm m_92 = NULL,h_93 = NULL,i_93 = NULL,k_93 = NULL,m_93 = NULL;
  if(((m_92 != NULL) && (m_92 != t)))
    _fail(t);
  else
    m_92 = t;
  if(((m_93 != NULL) && (m_93 != t)))
    _fail(t);
  else
    m_93 = t;
  if(((k_93 != NULL) && (k_93 != t)))
    _fail(t);
  else
    k_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_56, not_null(g_81), (ATerm) ATinsert(ATempty, not_null(k_93)));
  t = table_union_0_0(t);
  t = not_null(g_81);
  if(((i_93 != NULL) && (i_93 != t)))
    _fail(t);
  else
    i_93 = t;
  t = term_e_57;
  if(((h_93 != NULL) && (h_93 != t)))
    _fail(t);
  else
    h_93 = t;
  t = not_null(i_93);
  t = dbg_0_1(not_null(h_93), t);
  t = not_null(m_92);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm p_93 = NULL,r_93 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_93 != NULL) && (p_93 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_93 = ATgetArgument(t, 0);
      if(((r_93 != NULL) && (r_93 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(r_93)), not_null(p_93));
  return(t);
}
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t)
{
  ATerm k_57 = t;
  int l_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = e_130(t);
      LocalPopChoice(l_57);
    }
  else
    {
      t = k_57;
      {
        ATerm v_93 = NULL,x_93 = NULL,a_94 = NULL,c_94 = NULL,e_94 = NULL,g_94 = NULL,s_94 = NULL,t_94 = NULL,w_94 = NULL,z_94 = NULL,a_95 = NULL;
        if(((v_93 != NULL) && (v_93 != t)))
          _fail(t);
        else
          v_93 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_93 != NULL) && (x_93 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_93 = ATgetFirst((ATermList) t);
            if(((a_94 != NULL) && (a_94 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(x_93);
        if(((c_94 != NULL) && (c_94 != t)))
          _fail(t);
        else
          c_94 = t;
        t = not_null(a_94);
        if(((e_94 != NULL) && (e_94 != t)))
          _fail(t);
        else
          e_94 = t;
        t = not_null(v_93);
        if(((s_94 != NULL) && (s_94 != t)))
          _fail(t);
        else
          s_94 = t;
        if(((a_95 != NULL) && (a_95 != t)))
          _fail(t);
        else
          a_95 = t;
        t = not_null(c_94);
        t = g_130(t);
        if(((t_94 != NULL) && (t_94 != t)))
          _fail(t);
        else
          t_94 = t;
        t = not_null(a_95);
        if(((z_94 != NULL) && (z_94 != t)))
          _fail(t);
        else
          z_94 = t;
        t = not_null(e_94);
        t = foldr_3_0(e_130, f_130, g_130, t);
        if(((w_94 != NULL) && (w_94 != t)))
          _fail(t);
        else
          w_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_94), not_null(w_94));
        t = f_130(t);
        if(((g_94 != NULL) && (g_94 != t)))
          _fail(t);
        else
          g_94 = t;
      }
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_57 = t;
  int n_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, f_6, t);
      LocalPopChoice(n_57);
      t = conc_0_0(t);
    }
  else
    {
      t = m_57;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm o_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(p_57);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = o_57;
      {
        ATerm e_95 = NULL;
        if(((e_95 != NULL) && (e_95 != t)))
          _fail(t);
        else
          e_95 = t;
      }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm d_95 = NULL;
  if(((d_95 != NULL) && (d_95 != t)))
    _fail(t);
  else
    d_95 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(c_6, d_6, e_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_95 = NULL;
  static ATerm g_6 (ATerm t);
  static ATerm g_6 (ATerm t)
  {
    ATerm g_95 = NULL,h_95 = NULL,l_95 = NULL;
    if(((g_95 != NULL) && (g_95 != t)))
      _fail(t);
    else
      g_95 = t;
    if(((l_95 != NULL) && (l_95 != t)))
      _fail(t);
    else
      l_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_95), not_null(g_95));
    t = table_get_0_0(t);
    if(((h_95 != NULL) && (h_95 != t)))
      _fail(t);
    else
      h_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_95), not_null(h_95));
    return(t);
  }
  if(((f_95 != NULL) && (f_95 != t)))
    _fail(t);
  else
    f_95 = t;
  t = table_keys_0_0(t);
  t = map_1_0(g_6, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t)
{
  t = not_null(u_81);
  t = table_getlist_0_0(t);
  {
    static ATerm h_6 (ATerm t);
    static ATerm h_6 (ATerm t)
    {
      ATerm m_95 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm q_57 = ATgetArgument(t, 0);
          if(((m_95 != NULL) && (m_95 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(m_95);
      t = b_151(t);
      return(t);
    }
    t = filter_1_0(h_6, t);
  }
  t = flatten_list_0_0(t);
  t = c_151(t);
  return(t);
}
ATerm dbg_0_1 (ATerm y_78, ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,j_96 = NULL;
  if(((j_96 != NULL) && (j_96 != t)))
    _fail(t);
  else
    j_96 = t;
  t = term_r_57;
  if(((b_96 != NULL) && (b_96 != t)))
    _fail(t);
  else
    b_96 = t;
  t = not_null(j_96);
  if(((d_96 != NULL) && (d_96 != t)))
    _fail(t);
  else
    d_96 = t;
  if(((f_96 != NULL) && (f_96 != t)))
    _fail(t);
  else
    f_96 = t;
  if(((e_96 != NULL) && (e_96 != t)))
    _fail(t);
  else
    e_96 = t;
  if(((c_96 != NULL) && (c_96 != t)))
    _fail(t);
  else
    c_96 = t;
  t = not_null(d_96);
  t = log_0_3(not_null(b_96), not_null(y_78), not_null(c_96), t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL;
  if(((l_96 != NULL) && (l_96 != t)))
    _fail(t);
  else
    l_96 = t;
  if(((k_96 != NULL) && (k_96 != t)))
    _fail(t);
  else
    k_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(k_96));
  t = table_get_0_0(t);
  t = z_150(t);
  t = a_151(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL;
  if(((m_96 != NULL) && (m_96 != t)))
    _fail(t);
  else
    m_96 = t;
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  {
    ATerm s_57 = t;
    int t_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
        t = not_null(m_96);
        if(((t_96 != NULL) && (t_96 != t)))
          _fail(t);
        else
          t_96 = t;
        t = term_n_56;
        if(((s_96 != NULL) && (s_96 != t)))
          _fail(t);
        else
          s_96 = t;
        t = not_null(t_96);
        t = xtc_query_one_2_1(x_150, y_150, not_null(s_96), t);
        if(((p_96 != NULL) && (p_96 != t)))
          _fail(t);
        else
          p_96 = t;
        t = not_null(m_96);
        if(((r_96 != NULL) && (r_96 != t)))
          _fail(t);
        else
          r_96 = t;
        t = term_o_56;
        if(((q_96 != NULL) && (q_96 != t)))
          _fail(t);
        else
          q_96 = t;
        t = not_null(r_96);
        t = dbg_0_1(not_null(q_96), t);
        t = not_null(p_96);
        LocalPopChoice(t_57);
      }
    else
      {
        t = s_57;
        {
          ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
          if(((u_96 != NULL) && (u_96 != t)))
            _fail(t);
          else
            u_96 = t;
          if(((w_96 != NULL) && (w_96 != t)))
            _fail(t);
          else
            w_96 = t;
          t = term_p_56;
          if(((v_96 != NULL) && (v_96 != t)))
            _fail(t);
          else
            v_96 = t;
          t = not_null(w_96);
          t = xtc_query_all_2_1(x_150, y_150, not_null(v_96), t);
          t = xtc_cache_put_0_1(not_null(m_96), t);
        }
      }
  }
  if(((n_96 != NULL) && (n_96 != t)))
    _fail(t);
  else
    n_96 = t;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm l_97 = NULL;
  if(((l_97 != NULL) && (l_97 != t)))
    _fail(t);
  else
    l_97 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL;
  if(((a_97 != NULL) && (a_97 != t)))
    _fail(t);
  else
    a_97 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      b_97 = ATgetArgument(t, 0);
      {
        ATerm u_57 = t;
        int v_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL;
            t = not_null(a_97);
            if(((d_97 != NULL) && (d_97 != t)))
              _fail(t);
            else
              d_97 = t;
            t = not_null(b_97);
            if(((c_97 != NULL) && (c_97 != t)))
              _fail(t);
            else
              c_97 = t;
            t = not_null(a_97);
            if(((g_97 != NULL) && (g_97 != t)))
              _fail(t);
            else
              g_97 = t;
            t = not_null(c_97);
            t = is_list_0_0(t);
            t = not_null(d_97);
            {
              static ATerm i_6 (ATerm t);
              static ATerm i_6 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(c_97), t);
                return(t);
              }
              t = xtc_query_all_2_0(i_6, u_0, t);
            }
            if(((f_97 != NULL) && (f_97 != t)))
              _fail(t);
            else
              f_97 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_97), not_null(f_97));
            LocalPopChoice(v_57);
          }
        else
          {
            t = u_57;
            {
              ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL;
              t = not_null(a_97);
              if(((i_97 != NULL) && (i_97 != t)))
                _fail(t);
              else
                i_97 = t;
              t = not_null(b_97);
              if(((h_97 != NULL) && (h_97 != t)))
                _fail(t);
              else
                h_97 = t;
              t = not_null(a_97);
              if(((k_97 != NULL) && (k_97 != t)))
                _fail(t);
              else
                k_97 = t;
              t = not_null(h_97);
              t = is_string_0_0(t);
              t = not_null(i_97);
              t = xtc_query_one_2_0(j_6, u_0, t);
              if(((j_97 != NULL) && (j_97 != t)))
                _fail(t);
              else
                j_97 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_97), not_null(j_97));
            }
          }
      }
    }
  else
    {
      ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((b_97 != NULL) && (b_97 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_97 = ATgetArgument(t, 0);
          if(((z_96 != NULL) && (z_96 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_96 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(a_97);
      if(((o_97 != NULL) && (o_97 != t)))
        _fail(t);
      else
        o_97 = t;
      t = not_null(b_97);
      if(((n_97 != NULL) && (n_97 != t)))
        _fail(t);
      else
        n_97 = t;
      t = not_null(z_96);
      if(((m_97 != NULL) && (m_97 != t)))
        _fail(t);
      else
        m_97 = t;
      t = not_null(a_97);
      if(((r_97 != NULL) && (r_97 != t)))
        _fail(t);
      else
        r_97 = t;
      t = not_null(n_97);
      t = is_string_0_0(t);
      t = not_null(m_97);
      t = is_list_0_0(t);
      t = not_null(o_97);
      {
        static ATerm k_6 (ATerm t);
        static ATerm k_6 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(m_97), t);
          return(t);
        }
        t = xtc_query_one_2_0(k_6, u_0, t);
      }
      if(((q_97 != NULL) && (q_97 != t)))
        _fail(t);
      else
        q_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_97), not_null(q_97));
    }
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_union_0_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((t_97 != NULL) && (t_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_97 = ATgetArgument(t, 0);
      if(((u_97 != NULL) && (u_97 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_97 = ATgetArgument(t, 1);
      if(((s_97 != NULL) && (s_97 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        s_97 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((v_97 != NULL) && (v_97 != t)))
    _fail(t);
  else
    v_97 = t;
  if(((x_97 != NULL) && (x_97 != t)))
    _fail(t);
  else
    x_97 = t;
  if(((z_97 != NULL) && (z_97 != t)))
    _fail(t);
  else
    z_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_97), not_null(u_97));
  {
    ATerm w_57 = t;
    int k_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(k_59);
      }
    else
      {
        t = w_57;
        t = (ATerm) ATempty;
      }
  }
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_97), not_null(y_97));
  t = union_0_0(t);
  if(((w_97 != NULL) && (w_97 != t)))
    _fail(t);
  else
    w_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_97), not_null(u_97), not_null(w_97));
  t = set_0_0(t);
  t = not_null(v_97);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_98 != NULL) && (b_98 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_98 = ATgetFirst((ATermList) t);
      if(((a_98 != NULL) && (a_98 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        a_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((c_98 != NULL) && (c_98 != t)))
    _fail(t);
  else
    c_98 = t;
  t = s_127(t);
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
      if(((d_98 != NULL) && (d_98 != t)))
        _fail(t);
      else
        d_98 = t;
      if(((f_98 != NULL) && (f_98 != t)))
        _fail(t);
      else
        f_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_98), not_null(d_98));
      t = r_127(t);
      if(((e_98 != NULL) && (e_98 != t)))
        _fail(t);
      else
        e_98 = t;
      return(t);
    }
    t = fetch_1_0(l_6, t);
  }
  t = not_null(a_98);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm l_98 = NULL;
  if(((l_98 != NULL) && (l_98 != t)))
    _fail(t);
  else
    l_98 = t;
  return(t);
}
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_98 != NULL) && (i_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_98 = ATgetArgument(t, 0);
      if(((h_98 != NULL) && (h_98 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_98 != NULL) && (k_98 != t)))
    _fail(t);
  else
    k_98 = t;
  t = not_null(i_98);
  {
    static ATerm m_98 (ATerm t);
    static ATerm m_98 (ATerm t)
    {
      ATerm l_59 = t;
      int m_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(h_98);
          LocalPopChoice(m_59);
        }
      else
        {
          t = l_59;
          {
            ATerm n_59 = t;
            int q_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm m_6 (ATerm t);
                static ATerm m_6 (ATerm t)
                {
                  t = not_null(h_98);
                  return(t);
                }
                t = HdMember_p__2_0(o_127, m_6, t);
                t = m_98(t);
                LocalPopChoice(q_59);
              }
            else
              {
                t = n_59;
                t = Cons_2_0(n_6, m_98, t);
              }
          }
        }
      return(t);
    }
    t = m_98(t);
  }
  if(((j_98 != NULL) && (j_98 != t)))
    _fail(t);
  else
    j_98 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm o_98 = NULL;
  if(((o_98 != NULL) && (o_98 != t)))
    _fail(t);
  else
    o_98 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t)
{
  static ATerm p_6 (ATerm t);
  static ATerm p_6 (ATerm t)
  {
    ATerm p_98 = NULL,q_98 = NULL;
    if(((q_98 != NULL) && (q_98 != t)))
      _fail(t);
    else
      q_98 = t;
    if(((p_98 != NULL) && (p_98 != t)))
      _fail(t);
    else
      p_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_98), not_null(b_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(o_6, p_6, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t)
{
  static ATerm q_6 (ATerm t);
  static ATerm q_6 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(a_80), t);
    return(t);
  }
  t = map_1_0(q_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL;
  if(((z_98 != NULL) && (z_98 != t)))
    _fail(t);
  else
    z_98 = t;
  t = Fst_0_0(t);
  if(((w_98 != NULL) && (w_98 != t)))
    _fail(t);
  else
    w_98 = t;
  t = not_null(z_98);
  if(((y_98 != NULL) && (y_98 != t)))
    _fail(t);
  else
    y_98 = t;
  t = Snd_0_0(t);
  if(((x_98 != NULL) && (x_98 != t)))
    _fail(t);
  else
    x_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_49, not_null(w_98), not_null(x_98));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm t_0, ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
  if(((s_98 != NULL) && (s_98 != t)))
    _fail(t);
  else
    s_98 = t;
  if(match_cons(t, sym_Reference_1))
    {
      t_98 = ATgetArgument(t, 0);
      {
        ATerm v_98 = NULL;
        t = not_null(t_98);
        if(((v_98 != NULL) && (v_98 != t)))
          _fail(t);
        else
          v_98 = t;
        t = xtc_add_meta_all_0_1(not_null(t_0), t);
        t = map_1_0(r_6, t);
      }
    }
  else
    {
      ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((t_98 != NULL) && (t_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_98 = ATgetArgument(t, 0);
          if(((u_98 != NULL) && (u_98 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_98 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(t_98);
      if(((a_99 != NULL) && (a_99 != t)))
        _fail(t);
      else
        a_99 = t;
      t = not_null(u_98);
      if(((b_99 != NULL) && (b_99 != t)))
        _fail(t);
      else
        b_99 = t;
      t = not_null(s_98);
      if(((d_99 != NULL) && (d_99 != t)))
        _fail(t);
      else
        d_99 = t;
      t = not_null(b_99);
      t = xtc_add_meta_all_0_1(not_null(t_0), t);
      if(((c_99 != NULL) && (c_99 != t)))
        _fail(t);
      else
        c_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_56, not_null(a_99), not_null(c_99));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t)
{
  static ATerm s_6 (ATerm t);
  static ATerm s_6 (ATerm t)
  {
    static ATerm t_6 (ATerm t);
    static ATerm t_6 (ATerm t)
    {
      t = xtc_register_0_1(not_null(g_79), t);
      return(t);
    }
    t = map_1_0(t_6, t);
    return(t);
  }
  t = Repository_1_0(s_6, t);
  return(t);
}
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,u_6 = NULL,f_12 = NULL;
  if(((j_99 != NULL) && (j_99 != t)))
    _fail(t);
  else
    j_99 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((f_99 != NULL) && (f_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_99 != NULL) && (k_99 != t)))
    _fail(t);
  else
    k_99 = t;
  t = SSLgetAnnotations(not_null(j_99));
  if(((e_99 != NULL) && (e_99 != t)))
    _fail(t);
  else
    e_99 = t;
  t = not_null(f_99);
  t = b_109(t);
  if(((g_99 != NULL) && (g_99 != t)))
    _fail(t);
  else
    g_99 = t;
  if(((i_99 != NULL) && (i_99 != t)))
    _fail(t);
  else
    i_99 = t;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(g_99));
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  t = SSLsetAnnotations(not_null(u_6), not_null(e_99));
  if(((h_99 != NULL) && (h_99 != t)))
    _fail(t);
  else
    h_99 = t;
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL;
  if(((m_99 != NULL) && (m_99 != t)))
    _fail(t);
  else
    m_99 = t;
  if(((l_99 != NULL) && (l_99 != t)))
    _fail(t);
  else
    l_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_s_59), not_null(l_99));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL;
  if(((o_99 != NULL) && (o_99 != t)))
    _fail(t);
  else
    o_99 = t;
  t = get_extension_0_0(t);
  if(((n_99 != NULL) && (n_99 != t)))
    _fail(t);
  else
    n_99 = t;
  {
    ATerm u_59 = t;
    int v_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_99 = NULL;
        if(((p_99 != NULL) && (p_99 != t)))
          _fail(t);
        else
          p_99 = t;
        t = not_null(n_99);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(p_99);
        LocalPopChoice(v_59);
        t = (ATerm) ATinsert(ATempty, term_m_60);
      }
    else
      {
        t = u_59;
        t = not_null(o_99);
        {
          ATerm u_60 = t;
          int v_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_99 = NULL;
              if(((q_99 != NULL) && (q_99 != t)))
                _fail(t);
              else
                q_99 = t;
              t = not_null(n_99);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(q_99);
              LocalPopChoice(v_60);
              t = (ATerm) ATinsert(ATempty, term_y_60);
            }
          else
            {
              t = u_60;
              t = not_null(o_99);
              {
                ATerm z_60 = t;
                int a_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_99 = NULL;
                    if(((r_99 != NULL) && (r_99 != t)))
                      _fail(t);
                    else
                      r_99 = t;
                    t = not_null(n_99);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(r_99);
                    LocalPopChoice(a_61);
                    t = (ATerm) ATinsert(ATempty, term_y_60);
                  }
                else
                  {
                    t = z_60;
                    t = not_null(o_99);
                    {
                      ATerm b_61 = t;
                      int c_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_99 = NULL;
                          if(((s_99 != NULL) && (s_99 != t)))
                            _fail(t);
                          else
                            s_99 = t;
                          t = not_null(n_99);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(s_99);
                          LocalPopChoice(c_61);
                          t = (ATerm) ATinsert(ATempty, term_f_61);
                        }
                      else
                        {
                          t = b_61;
                          t = not_null(o_99);
                          {
                            ATerm g_61 = t;
                            int h_61 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_99 = NULL;
                                if(((t_99 != NULL) && (t_99 != t)))
                                  _fail(t);
                                else
                                  t_99 = t;
                                t = not_null(n_99);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(t_99);
                                LocalPopChoice(h_61);
                                t = (ATerm) ATinsert(ATempty, term_m_65);
                              }
                            else
                              {
                                t = g_61;
                                t = not_null(o_99);
                                {
                                  ATerm n_65 = t;
                                  int o_65 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm u_99 = NULL;
                                      if(((u_99 != NULL) && (u_99 != t)))
                                        _fail(t);
                                      else
                                        u_99 = t;
                                      t = not_null(n_99);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(u_99);
                                      LocalPopChoice(o_65);
                                      t = (ATerm) ATinsert(ATempty, term_m_65);
                                    }
                                  else
                                    {
                                      t = n_65;
                                      t = not_null(o_99);
                                      {
                                        ATerm s_65 = t;
                                        int t_65 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm v_99 = NULL;
                                            if(((v_99 != NULL) && (v_99 != t)))
                                              _fail(t);
                                            else
                                              v_99 = t;
                                            t = not_null(n_99);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(v_99);
                                            LocalPopChoice(t_65);
                                            t = (ATerm) ATinsert(ATempty, term_w_65);
                                          }
                                        else
                                          {
                                            t = s_65;
                                            t = not_null(o_99);
                                            {
                                              ATerm x_65 = t;
                                              int c_66 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_99 = NULL;
                                                  if(((w_99 != NULL) && (w_99 != t)))
                                                    _fail(t);
                                                  else
                                                    w_99 = t;
                                                  t = not_null(n_99);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(w_99);
                                                  LocalPopChoice(c_66);
                                                  t = (ATerm) ATinsert(ATempty, term_k_66);
                                                }
                                              else
                                                {
                                                  t = x_65;
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
ATerm eq_0_0 (ATerm t)
{
  ATerm x_99 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_99 != NULL) && (x_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_99 = ATgetArgument(t, 0);
      if(((x_99 != NULL) && (x_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm a_100 = NULL;
  if(((a_100 != NULL) && (a_100 != t)))
    _fail(t);
  else
    a_100 = t;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm b_100 = NULL;
  if(((b_100 != NULL) && (b_100 != t)))
    _fail(t);
  else
    b_100 = t;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm v_6 (ATerm t);
    static ATerm v_6 (ATerm t)
    {
      ATerm m_67 = t;
      int u_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(w_6, v_6, t);
          LocalPopChoice(u_68);
        }
      else
        {
          t = m_67;
          {
            ATerm v_68 = t;
            int t_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(x_6, y_6, t);
                LocalPopChoice(t_69);
              }
            else
              {
                t = v_68;
                t = Cons_2_0(z_6, h_134, t);
                t = (ATerm) ATempty;
              }
          }
        }
      return(t);
    }
    t = try_1_0(v_6, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm e_100 = NULL;
  if(((e_100 != NULL) && (e_100 != t)))
    _fail(t);
  else
    e_100 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(a_7, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL;
  if(((i_100 != NULL) && (i_100 != t)))
    _fail(t);
  else
    i_100 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((f_100 != NULL) && (f_100 != t)))
    _fail(t);
  else
    f_100 = t;
  t = not_null(i_100);
  if(((h_100 != NULL) && (h_100 != t)))
    _fail(t);
  else
    h_100 = t;
  t = base_filename_0_0(t);
  if(((g_100 != NULL) && (g_100 != t)))
    _fail(t);
  else
    g_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_100), not_null(g_100));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm u_69 = t;
  int v_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_100 = NULL;
      if(((j_100 != NULL) && (j_100 != t)))
        _fail(t);
      else
        j_100 = t;
      t = has_no_extension_0_0(t);
      t = not_null(j_100);
      LocalPopChoice(v_69);
      t = (ATerm) ATinsert(ATempty, term_e_70);
    }
  else
    {
      t = u_69;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL;
  if(((n_100 != NULL) && (n_100 != t)))
    _fail(t);
  else
    n_100 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((k_100 != NULL) && (k_100 != t)))
    _fail(t);
  else
    k_100 = t;
  t = not_null(n_100);
  if(((m_100 != NULL) && (m_100 != t)))
    _fail(t);
  else
    m_100 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((l_100 != NULL) && (l_100 != t)))
    _fail(t);
  else
    l_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_100), not_null(l_100));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_100 != NULL) && (o_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_100 = ATgetArgument(t, 0);
      if(((p_100 != NULL) && (p_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_100 != NULL) && (r_100 != t)))
    _fail(t);
  else
    r_100 = t;
  if(((t_100 != NULL) && (t_100 != t)))
    _fail(t);
  else
    t_100 = t;
  t = not_null(p_100);
  t = xtc_default_xt_meta_0_0(t);
  if(((s_100 != NULL) && (s_100 != t)))
    _fail(t);
  else
    s_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_70, (ATerm) ATmakeAppl(sym_String_1, not_null(o_100)))), not_null(s_100));
  t = conc_0_0(t);
  if(((q_100 != NULL) && (q_100 != t)))
    _fail(t);
  else
    q_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_100), not_null(q_100));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL,b_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_70 = ATgetArgument(t, 0);
      if(match_cons(g_70, sym_Tool_1))
        {
          if(((w_100 != NULL) && (w_100 != ATgetArgument(g_70, 0))))
            _fail(ATgetArgument(g_70, 0));
          else
            w_100 = ATgetArgument(g_70, 0);
        }
      else
        _fail(t);
      if(((x_100 != NULL) && (x_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_101 != NULL) && (b_101 != t)))
    _fail(t);
  else
    b_101 = t;
  t = not_null(x_100);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((y_100 != NULL) && (y_100 != t)))
    _fail(t);
  else
    y_100 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(w_100), not_null(y_100));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL;
  if(((g_101 != NULL) && (g_101 != t)))
    _fail(t);
  else
    g_101 = t;
  if(((f_101 != NULL) && (f_101 != t)))
    _fail(t);
  else
    f_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_101), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_70 = ATgetArgument(t, 0);
      if(!(match_cons(h_70, sym_Import_0)))
        _fail(t);
      if(((c_101 != NULL) && (c_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_101 != NULL) && (e_101 != t)))
    _fail(t);
  else
    e_101 = t;
  t = not_null(c_101);
  t = map_1_0(b_7, t);
  if(((d_101 != NULL) && (d_101 != t)))
    _fail(t);
  else
    d_101 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(d_101));
  return(t);
}
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm i_70 = t;
  int j_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_115(t);
      LocalPopChoice(j_70);
    }
  else
    {
      t = i_70;
      t = p_115(t);
      _fail(t);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = filter_1_0(e_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL;
  t = term_t_12;
  if(((i_101 != NULL) && (i_101 != t)))
    _fail(t);
  else
    i_101 = t;
  t = term_k_70;
  if(((h_101 != NULL) && (h_101 != t)))
    _fail(t);
  else
    h_101 = t;
  t = not_null(i_101);
  t = err_0_1(not_null(h_101), t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm l_70 = t;
  int m_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(m_70);
    }
  else
    {
      t = l_70;
      t = XtcConvertTool_0_0(t);
    }
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(c_7, d_7, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL;
  if(((k_101 != NULL) && (k_101 != t)))
    _fail(t);
  else
    k_101 = t;
  t = xtc_convert_0_0(t);
  if(((j_101 != NULL) && (j_101 != t)))
    _fail(t);
  else
    j_101 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(j_101));
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_101 != NULL) && (l_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_101 = ATgetArgument(t, 0);
      {
        ATerm o_70 = ATgetArgument(t, 1);
        if(match_cons(o_70, sym_Stream_1))
          {
            if(((m_101 != NULL) && (m_101 != ATgetArgument(o_70, 0))))
              _fail(ATgetArgument(o_70, 0));
            else
              m_101 = ATgetArgument(o_70, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(l_101), not_null(m_101));
  if(((o_101 != NULL) && (o_101 != t)))
    _fail(t);
  else
    o_101 = t;
  if(((n_101 != NULL) && (n_101 != t)))
    _fail(t);
  else
    n_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_101));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL;
  if(((s_101 != NULL) && (s_101 != t)))
    _fail(t);
  else
    s_101 = t;
  if(((p_101 != NULL) && (p_101 != t)))
    _fail(t);
  else
    p_101 = t;
  t = not_null(s_101);
  if(((r_101 != NULL) && (r_101 != t)))
    _fail(t);
  else
    r_101 = t;
  t = term_t_12;
  t = log_stream_0_0(t);
  if(((q_101 != NULL) && (q_101 != t)))
    _fail(t);
  else
    q_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(q_101));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_70 = ATgetArgument(t, 0);
      if(match_cons(p_70, sym_Stream_1))
        {
          if(((t_101 != NULL) && (t_101 != ATgetArgument(p_70, 0))))
            _fail(ATgetArgument(p_70, 0));
          else
            t_101 = ATgetArgument(p_70, 0);
        }
      else
        _fail(t);
      if(((u_101 != NULL) && (u_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(t_101), not_null(u_101));
  if(((w_101 != NULL) && (w_101 != t)))
    _fail(t);
  else
    w_101 = t;
  if(((v_101 != NULL) && (v_101 != t)))
    _fail(t);
  else
    v_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_101));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm q_70 = t;
  int r_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_70;
      t = get_config_0_0(t);
      LocalPopChoice(r_70);
    }
  else
    {
      t = q_70;
      t = term_t_12;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_101 != NULL) && (x_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_101 = ATgetArgument(t, 0);
      if(((y_101 != NULL) && (y_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_70 = t;
    int y_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(x_101), not_null(y_101));
        LocalPopChoice(y_70);
      }
    else
      {
        t = x_70;
        t = SSL_subtr(not_null(x_101), not_null(y_101));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t)
{
  static ATerm z_101 (ATerm t);
  static ATerm z_101 (ATerm t)
  {
    ATerm z_70 = t;
    int a_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        LocalPopChoice(a_71);
      }
    else
      {
        t = z_70;
        t = m_116(t);
        t = z_101(t);
      }
    return(t);
  }
  t = z_101(t);
  return(t);
}
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t)
{
  t = o_116(t);
  t = while_not_2_0(p_116, q_116, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_102 != NULL) && (a_102 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_102 = ATgetArgument(t, 0);
      if(((b_102 != NULL) && (b_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_102), not_null(b_102), (ATerm) ATempty);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm c_102 = NULL,d_102 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_71 = ATgetArgument(t, 0);
      if(((ATgetType(l_71) != AT_INT) || (ATgetInt((ATermInt) l_71) != 0)))
        _fail(t);
      if(((c_102 != NULL) && (c_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_102 = ATgetArgument(t, 1);
      if(((d_102 != NULL) && (d_102 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        d_102 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(d_102);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((e_102 != NULL) && (e_102 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_102 = ATgetArgument(t, 0);
      if(((f_102 != NULL) && (f_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_102 = ATgetArgument(t, 1);
      if(((g_102 != NULL) && (g_102 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_102 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((j_102 != NULL) && (j_102 != t)))
    _fail(t);
  else
    j_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_102), term_j_13);
  t = geq_0_0(t);
  t = not_null(j_102);
  if(((i_102 != NULL) && (i_102 != t)))
    _fail(t);
  else
    i_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_102), term_j_13);
  t = subt_0_0(t);
  if(((h_102 != NULL) && (h_102 != t)))
    _fail(t);
  else
    h_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_102), not_null(f_102), (ATerm) ATinsert(CheckATermList(not_null(g_102)), not_null(f_102)));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(f_7, g_7, h_7, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  t = copy_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm strlen_0_0 (ATerm t)
{
  ATerm k_102 = NULL;
  if(((k_102 != NULL) && (k_102 != t)))
    _fail(t);
  else
    k_102 = t;
  t = SSL_strlen(not_null(k_102));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm m_102 = NULL;
  if(((m_102 != NULL) && (m_102 != t)))
    _fail(t);
  else
    m_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_o_71;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_p_71;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_q_71;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_r_71;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_s_71;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_b_72;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_c_72;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_d_72;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_e_72;
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
static ATerm i_7 (ATerm t)
{
  ATerm o_102 = NULL;
  if(((o_102 != NULL) && (o_102 != t)))
    _fail(t);
  else
    o_102 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm p_102 (ATerm t);
  static ATerm p_102 (ATerm t)
  {
    ATerm f_72 = t;
    int m_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_7, p_102, t);
        LocalPopChoice(m_73);
      }
    else
      {
        t = f_72;
        t = c_124(t);
      }
    return(t);
  }
  t = p_102(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm q_102 = NULL;
  t = explode_string_0_0(t);
  {
    static ATerm j_7 (ATerm t);
    static ATerm j_7 (ATerm t)
    {
      static ATerm k_7 (ATerm t);
      static ATerm k_7 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_73 = ATgetFirst((ATermList) t);
            if(((ATgetType(n_73) != AT_INT) || (ATgetInt((ATermInt) n_73) != 47)))
              _fail(t);
            if(((q_102 != NULL) && (q_102 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              q_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(k_7, t);
      t = not_null(q_102);
      return(t);
    }
    t = try_1_0(j_7, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm o_73 = t;
  int p_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(p_73);
    }
  else
    {
      t = o_73;
      t = term_q_73;
    }
  return(t);
}
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL;
    if(((r_102 != NULL) && (r_102 != t)))
      _fail(t);
    else
      r_102 = t;
    if(((v_102 != NULL) && (v_102 != t)))
      _fail(t);
    else
      v_102 = t;
    t = log_src_0_0(t);
    if(((s_102 != NULL) && (s_102 != t)))
      _fail(t);
    else
      s_102 = t;
    t = not_null(v_102);
    if(((u_102 != NULL) && (u_102 != t)))
      _fail(t);
    else
      u_102 = t;
    t = not_null(d_79);
    t = severity_string_0_0(t);
    if(((t_102 != NULL) && (t_102 != t)))
      _fail(t);
    else
      t_102 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_74), not_null(e_79)), term_m_74), not_null(s_102)), term_l_74), not_null(t_102)), term_r_73);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(r_102);
    return(t);
  }
  t = if_log_severity_1_1(l_7, not_null(d_79), t);
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t)
{
  ATerm o_74 = t;
  int p_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL;
      if(((x_102 != NULL) && (x_102 != t)))
        _fail(t);
      else
        x_102 = t;
      if(((z_102 != NULL) && (z_102 != t)))
        _fail(t);
      else
        z_102 = t;
      t = term_q_74;
      {
        ATerm r_74 = t;
        int s_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(s_74);
          }
        else
          {
            t = r_74;
            t = term_t_74;
          }
      }
      if(((y_102 != NULL) && (y_102 != t)))
        _fail(t);
      else
        y_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_102), not_null(z_78));
      t = geq_0_0(t);
      t = not_null(x_102);
      LocalPopChoice(p_74);
      t = o_150(t);
    }
  else
    {
      t = o_74;
      {
        ATerm a_103 = NULL;
        if(((a_103 != NULL) && (a_103 != t)))
          _fail(t);
        else
          a_103 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm c_103 = NULL;
  if(((c_103 != NULL) && (c_103 != t)))
    _fail(t);
  else
    c_103 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_q_16;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_k_15;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_a_14;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_w_13;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_j_13;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_t_74;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_u_74;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_a_75;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_s_75;
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
ATerm if_log_severity_1_1 (ATerm p_150 (ATerm), ATerm f_79, ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL;
  if(((e_103 != NULL) && (e_103 != t)))
    _fail(t);
  else
    e_103 = t;
  if(((g_103 != NULL) && (g_103 != t)))
    _fail(t);
  else
    g_103 = t;
  t = not_null(f_79);
  t = verbose_level_0_0(t);
  if(((f_103 != NULL) && (f_103 != t)))
    _fail(t);
  else
    f_103 = t;
  if(((d_103 != NULL) && (d_103 != t)))
    _fail(t);
  else
    d_103 = t;
  t = not_null(e_103);
  t = log_if_verbose_1_1(p_150, not_null(d_103), t);
  return(t);
}
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t)
{
  static ATerm m_7 (ATerm t);
  static ATerm m_7 (ATerm t)
  {
    ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL;
    t = log_0_2(not_null(a_79), not_null(b_79), t);
    if(((h_103 != NULL) && (h_103 != t)))
      _fail(t);
    else
      h_103 = t;
    if(((l_103 != NULL) && (l_103 != t)))
      _fail(t);
    else
      l_103 = t;
    if(((n_103 != NULL) && (n_103 != t)))
      _fail(t);
    else
      n_103 = t;
    t = not_null(a_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((m_103 != NULL) && (m_103 != t)))
      _fail(t);
    else
      m_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_103), term_a_14);
    t = add_0_0(t);
    if(((k_103 != NULL) && (k_103 != t)))
      _fail(t);
    else
      k_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_103), term_t_75);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((j_103 != NULL) && (j_103 != t)))
      _fail(t);
    else
      j_103 = t;
    t = log_stream_0_0(t);
    if(((i_103 != NULL) && (i_103 != t)))
      _fail(t);
    else
      i_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_103), not_null(c_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_n_74;
    t = log_puts_0_0(t);
    t = not_null(h_103);
    return(t);
  }
  t = if_log_severity_1_1(m_7, not_null(a_79), t);
  return(t);
}
ATerm notice_0_1 (ATerm x_78, ATerm t)
{
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL;
  if(((t_103 != NULL) && (t_103 != t)))
    _fail(t);
  else
    t_103 = t;
  t = term_r_76;
  if(((o_103 != NULL) && (o_103 != t)))
    _fail(t);
  else
    o_103 = t;
  t = not_null(t_103);
  if(((q_103 != NULL) && (q_103 != t)))
    _fail(t);
  else
    q_103 = t;
  if(((s_103 != NULL) && (s_103 != t)))
    _fail(t);
  else
    s_103 = t;
  if(((r_103 != NULL) && (r_103 != t)))
    _fail(t);
  else
    r_103 = t;
  if(((p_103 != NULL) && (p_103 != t)))
    _fail(t);
  else
    p_103 = t;
  t = not_null(q_103);
  t = log_0_3(not_null(o_103), not_null(x_78), not_null(p_103), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_77 = ATgetArgument(t, 0);
      if(match_cons(d_77, sym_Stream_1))
        {
          if(((u_103 != NULL) && (u_103 != ATgetArgument(d_77, 0))))
            _fail(ATgetArgument(d_77, 0));
          else
            u_103 = ATgetArgument(d_77, 0);
        }
      else
        _fail(t);
      if(((v_103 != NULL) && (v_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(u_103), not_null(v_103));
  if(((x_103 != NULL) && (x_103 != t)))
    _fail(t);
  else
    x_103 = t;
  if(((w_103 != NULL) && (w_103 != t)))
    _fail(t);
  else
    w_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_103));
  return(t);
}
static ATerm k_104 (ATerm b_104, ATerm c_104, ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL;
  t = not_null(b_104);
  if(((d_104 != NULL) && (d_104 != t)))
    _fail(t);
  else
    d_104 = t;
  t = SSL_fclose(not_null(d_104));
  return(t);
}
static ATerm l_104 (ATerm f_104, ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL;
  t = not_null(f_104);
  if(((h_104 != NULL) && (h_104 != t)))
    _fail(t);
  else
    h_104 = t;
  t = SSL_fclose(not_null(h_104));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL;
  if(((j_104 != NULL) && (j_104 != t)))
    _fail(t);
  else
    j_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_104 = ATgetArgument(t, 0);
      {
        ATerm t_78 = t;
        int h_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_104(not_null(i_104), not_null(j_104), t);
            LocalPopChoice(h_79);
          }
        else
          {
            t = t_78;
            t = l_104(not_null(j_104), t);
          }
      }
    }
  else
    {
      t = l_104(not_null(j_104), t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_104 != NULL) && (m_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_104 = ATgetArgument(t, 0);
      if(((n_104 != NULL) && (n_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(m_104), not_null(n_104));
  if(((p_104 != NULL) && (p_104 != t)))
    _fail(t);
  else
    p_104 = t;
  if(((o_104 != NULL) && (o_104 != t)))
    _fail(t);
  else
    o_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_104));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL;
  t = SSL_stdin_stream();
  if(((r_104 != NULL) && (r_104 != t)))
    _fail(t);
  else
    r_104 = t;
  if(((q_104 != NULL) && (q_104 != t)))
    _fail(t);
  else
    q_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_104));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL;
  t = SSL_stdout_stream();
  if(((t_104 != NULL) && (t_104 != t)))
    _fail(t);
  else
    t_104 = t;
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_104));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  t = SSL_stderr_stream();
  if(((v_104 != NULL) && (v_104 != t)))
    _fail(t);
  else
    v_104 = t;
  if(((u_104 != NULL) && (u_104 != t)))
    _fail(t);
  else
    u_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_104));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm x_104 = NULL;
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(x_104);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(x_104);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(x_104);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm a_105 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((a_105 != NULL) && (a_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(a_105);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm b_105 = NULL;
  if(((b_105 != NULL) && (b_105 != t)))
    _fail(t);
  else
    b_105 = t;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm c_105 = NULL;
  if(((c_105 != NULL) && (c_105 != t)))
    _fail(t);
  else
    c_105 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_79 = ATgetArgument(t, 0);
      ATerm j_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_79 = t;
    int l_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(l_79);
      }
    else
      {
        t = k_79;
        {
          ATerm m_79 = t;
          int n_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(n_7, o_7, t);
              t = fopen_0_0(t);
              LocalPopChoice(n_79);
            }
          else
            {
              t = m_79;
              t = _2_0(is_string_0_0, p_7, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_105 != NULL) && (i_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_105 = ATgetArgument(t, 0);
      if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_105);
  if(((h_105 != NULL) && (h_105 != t)))
    _fail(t);
  else
    h_105 = t;
  if(((g_105 != NULL) && (g_105 != t)))
    _fail(t);
  else
    g_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_105), term_o_79);
  t = open_stream_0_0(t);
  if(((f_105 != NULL) && (f_105 != t)))
    _fail(t);
  else
    f_105 = t;
  if(((e_105 != NULL) && (e_105 != t)))
    _fail(t);
  else
    e_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_105), not_null(d_105));
  t = x_122(t);
  t = fclose_0_0(t);
  t = not_null(d_105);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm j_105 = NULL;
  if(((j_105 != NULL) && (j_105 != t)))
    _fail(t);
  else
    j_105 = t;
  t = SSL_creat(not_null(j_105));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL;
  static ATerm q_7 (ATerm t);
  static ATerm q_7 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_105 != NULL) && (k_105 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_105 = ATgetFirst((ATermList) t);
        {
          ATerm p_79 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(p_79) != AT_LIST) || !(ATisEmpty(p_79))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(q_7, t);
  if(((m_105 != NULL) && (m_105 != t)))
    _fail(t);
  else
    m_105 = t;
  if(((l_105 != NULL) && (l_105 != t)))
    _fail(t);
  else
    l_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_105), not_null(k_105));
  return(t);
}
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  static ATerm n_105 (ATerm t);
  static ATerm n_105 (ATerm t)
  {
    ATerm q_79 = t;
    int u_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        t = n_105(t);
        LocalPopChoice(u_79);
      }
    else
      {
        t = q_79;
        t = v_115(t);
      }
    return(t);
  }
  t = n_105(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm p_105 = NULL;
  if(((p_105 != NULL) && (p_105 != t)))
    _fail(t);
  else
    p_105 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  t = repeat_2_0(x_115, r_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm s_105 = NULL;
  if(((s_105 != NULL) && (s_105 != t)))
    _fail(t);
  else
    s_105 = t;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm t_105 = NULL;
  if(((t_105 != NULL) && (t_105 != t)))
    _fail(t);
  else
    t_105 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  static ATerm u_105 (ATerm t);
  static ATerm u_105 (ATerm t)
  {
    ATerm w_79 = t;
    int d_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_7, Nil_0_0, t);
        t = f_124(t);
        LocalPopChoice(d_80);
      }
    else
      {
        t = w_79;
        t = Cons_2_0(t_7, u_105, t);
      }
    return(t);
  }
  t = u_105(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  t = at_last_1_0(Tl_0_0, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm z_133 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = z_133(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = try_1_0(v_7, t);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATinsert(ATempty, term_f_80);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(w_7, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_s_59);
        }
      else
        {
          t = repeat_1_0(z_7, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_f_80);
            }
          else
            {
              ATerm a_106 = NULL;
              if(((a_106 != NULL) && (a_106 != t)))
                _fail(t);
              else
                a_106 = t;
            }
        }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm x_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((x_105 != NULL) && (x_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_105 = ATgetArgument(t, 0);
      {
        ATerm h_80 = ATgetArgument(t, 1);
        if(((ATgetType(h_80) != AT_INT) || (ATgetInt((ATermInt) h_80) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(x_105);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = split_init_last_0_0(t);
  t = _2_0(x_7, y_7, t);
  t = Fst_0_0(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm y_105 = NULL;
  if(((y_105 != NULL) && (y_105 != t)))
    _fail(t);
  else
    y_105 = t;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm i_80 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_80;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm z_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((z_105 != NULL) && (z_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_105 = ATgetArgument(t, 0);
      {
        ATerm h_81 = ATgetArgument(t, 1);
        if(((ATgetType(h_81) != AT_INT) || (ATgetInt((ATermInt) h_81) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(z_105);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(u_7, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm b_106 = NULL;
  if(((b_106 != NULL) && (b_106 != t)))
    _fail(t);
  else
    b_106 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(b_106);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm i_81 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_81;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL;
  if(((d_106 != NULL) && (d_106 != t)))
    _fail(t);
  else
    d_106 = t;
  if(((c_106 != NULL) && (c_106 != t)))
    _fail(t);
  else
    c_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_106), (ATerm) ATinsert(ATempty, term_j_81));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t)
{
  ATerm k_81 = t;
  int l_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_106 = NULL;
      if(((e_106 != NULL) && (e_106 != t)))
        _fail(t);
      else
        e_106 = t;
      t = not_null(r_79);
      {
        ATerm n_81 = t;
        int o_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(o_81);
          }
        else
          {
            t = n_81;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(e_106);
      LocalPopChoice(l_81);
      {
        ATerm f_106 = NULL,g_106 = NULL;
        if(((g_106 != NULL) && (g_106 != t)))
          _fail(t);
        else
          g_106 = t;
        if(((f_106 != NULL) && (f_106 != t)))
          _fail(t);
        else
          f_106 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_79), not_null(f_106));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = k_81;
      {
        ATerm h_106 = NULL,i_106 = NULL;
        t = not_null(r_79);
        if(((i_106 != NULL) && (i_106 != t)))
          _fail(t);
        else
          i_106 = t;
        t = term_p_81;
        if(((h_106 != NULL) && (h_106 != t)))
          _fail(t);
        else
          h_106 = t;
        t = not_null(i_106);
        t = err_0_1(not_null(h_106), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm j_106 = NULL;
  if(((j_106 != NULL) && (j_106 != t)))
    _fail(t);
  else
    j_106 = t;
  {
    ATerm q_81 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_81;
      }
  }
  t = term_r_81;
  t = xtc_save_file_0_1(not_null(j_106), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm k_106 = NULL;
  if(((k_106 != NULL) && (k_106 != t)))
    _fail(t);
  else
    k_106 = t;
  {
    ATerm s_81 = t;
    int v_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_106 = NULL,m_106 = NULL;
        t = not_null(k_106);
        if(((m_106 != NULL) && (m_106 != t)))
          _fail(t);
        else
          m_106 = t;
        t = not_null(k_106);
        if(((l_106 != NULL) && (l_106 != t)))
          _fail(t);
        else
          l_106 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_106));
        t = read_from_0_0(t);
        LocalPopChoice(v_81);
      }
    else
      {
        t = s_81;
        {
          ATerm w_81 = t;
          int x_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL;
              t = not_null(k_106);
              if(((p_106 != NULL) && (p_106 != t)))
                _fail(t);
              else
                p_106 = t;
              t = not_null(k_106);
              t = xtc_create_new_0_0(t);
              t = not_null(p_106);
              if(((o_106 != NULL) && (o_106 != t)))
                _fail(t);
              else
                o_106 = t;
              if(((n_106 != NULL) && (n_106 != t)))
                _fail(t);
              else
                n_106 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_106));
              t = read_from_0_0(t);
              LocalPopChoice(x_81);
            }
          else
            {
              t = w_81;
              {
                ATerm q_106 = NULL,r_106 = NULL;
                t = not_null(k_106);
                if(((r_106 != NULL) && (r_106 != t)))
                  _fail(t);
                else
                  r_106 = t;
                t = term_y_81;
                if(((q_106 != NULL) && (q_106 != t)))
                  _fail(t);
                else
                  q_106 = t;
                t = not_null(r_106);
                t = err_0_1(not_null(q_106), t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm xtc_load_url_0_0 (ATerm t)
{
  ATerm s_106 = NULL;
  if(((s_106 != NULL) && (s_106 != t)))
    _fail(t);
  else
    s_106 = t;
  {
    ATerm z_81 = t;
    int a_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_106 = NULL,u_106 = NULL;
        t = not_null(s_106);
        if(((u_106 != NULL) && (u_106 != t)))
          _fail(t);
        else
          u_106 = t;
        t = not_null(s_106);
        if(((t_106 != NULL) && (t_106 != t)))
          _fail(t);
        else
          t_106 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(t_106));
        t = read_from_0_0(t);
        LocalPopChoice(a_82);
      }
    else
      {
        t = z_81;
        {
          ATerm v_106 = NULL,w_106 = NULL;
          t = not_null(s_106);
          if(((w_106 != NULL) && (w_106 != t)))
            _fail(t);
          else
            w_106 = t;
          t = term_b_82;
          if(((v_106 != NULL) && (v_106 != t)))
            _fail(t);
          else
            v_106 = t;
          t = not_null(w_106);
          t = err_0_1(not_null(v_106), t);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm b_107 = NULL;
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm g_107 = NULL;
  if(((g_107 != NULL) && (g_107 != t)))
    _fail(t);
  else
    g_107 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm v_79, ATerm t)
{
  ATerm z_106 = NULL;
  if(((z_106 != NULL) && (z_106 != t)))
    _fail(t);
  else
    z_106 = t;
  {
    ATerm c_82 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_107 = NULL;
        if(((a_107 != NULL) && (a_107 != t)))
          _fail(t);
        else
          a_107 = t;
        t = is_url_http_0_0(t);
        t = not_null(a_107);
        LocalPopChoice(d_82);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = c_82;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm e_82 = t;
    int f_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(a_8, t);
        LocalPopChoice(f_82);
      }
    else
      {
        t = e_82;
        {
          ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL;
          if(((c_107 != NULL) && (c_107 != t)))
            _fail(t);
          else
            c_107 = t;
          if(((d_107 != NULL) && (d_107 != t)))
            _fail(t);
          else
            d_107 = t;
          t = not_null(z_106);
          if(((f_107 != NULL) && (f_107 != t)))
            _fail(t);
          else
            f_107 = t;
          t = term_g_82;
          if(((e_107 != NULL) && (e_107 != t)))
            _fail(t);
          else
            e_107 = t;
          t = not_null(f_107);
          t = notice_0_1(not_null(e_107), t);
          t = not_null(d_107);
          t = xtc_convert_repository_0_0(t);
        }
      }
  }
  t = Repository_1_0(b_8, t);
  t = xtc_aterm2table_0_1(not_null(v_79), t);
  return(t);
}
ATerm hashtable_keys_0_0 (ATerm t)
{
  ATerm h_107 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((h_107 != NULL) && (h_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(h_107));
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm i_107 = NULL;
  if(((i_107 != NULL) && (i_107 != t)))
    _fail(t);
  else
    i_107 = t;
  t = lookup_table_0_1(not_null(i_107), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm j_107 = NULL;
  if(((j_107 != NULL) && (j_107 != t)))
    _fail(t);
  else
    j_107 = t;
  {
    ATerm h_82 = t;
    int i_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_56;
        t = table_keys_0_0(t);
        {
          ATerm j_82 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_82;
            }
        }
        LocalPopChoice(i_82);
      }
    else
      {
        t = h_82;
        t = not_null(y_79);
        t = xtc_load_0_1(not_null(z_79), t);
      }
  }
  t = not_null(j_107);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm k_107 = NULL;
  if(((k_107 != NULL) && (k_107 != t)))
    _fail(t);
  else
    k_107 = t;
  t = SSL_getenv(not_null(k_107));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_82 = t;
  int l_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_82;
      t = getenv_0_0(t);
      LocalPopChoice(l_82);
    }
  else
    {
      t = k_82;
      {
        ATerm n_82 = t;
        int o_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(o_82);
          }
        else
          {
            t = n_82;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL;
  if(((p_107 != NULL) && (p_107 != t)))
    _fail(t);
  else
    p_107 = t;
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  t = xtc_location_0_0(t);
  if(((q_107 != NULL) && (q_107 != t)))
    _fail(t);
  else
    q_107 = t;
  if(((l_107 != NULL) && (l_107 != t)))
    _fail(t);
  else
    l_107 = t;
  t = not_null(p_107);
  if(((o_107 != NULL) && (o_107 != t)))
    _fail(t);
  else
    o_107 = t;
  t = (ATerm) ATempty;
  if(((m_107 != NULL) && (m_107 != t)))
    _fail(t);
  else
    m_107 = t;
  t = not_null(o_107);
  t = xtc_init_0_2(not_null(l_107), not_null(m_107), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL,c_8 = NULL,g_12 = NULL;
  if(((z_107 != NULL) && (z_107 != t)))
    _fail(t);
  else
    z_107 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((t_107 != NULL) && (t_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_107 = ATgetArgument(t, 0);
      if(((u_107 != NULL) && (u_107 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_108 != NULL) && (a_108 != t)))
    _fail(t);
  else
    a_108 = t;
  t = SSLgetAnnotations(not_null(z_107));
  if(((s_107 != NULL) && (s_107 != t)))
    _fail(t);
  else
    s_107 = t;
  t = not_null(t_107);
  t = g_110(t);
  if(((v_107 != NULL) && (v_107 != t)))
    _fail(t);
  else
    v_107 = t;
  t = not_null(u_107);
  t = h_110(t);
  if(((w_107 != NULL) && (w_107 != t)))
    _fail(t);
  else
    w_107 = t;
  if(((y_107 != NULL) && (y_107 != t)))
    _fail(t);
  else
    y_107 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(v_107), not_null(w_107));
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = SSLsetAnnotations(not_null(c_8), not_null(s_107));
  if(((x_107 != NULL) && (x_107 != t)))
    _fail(t);
  else
    x_107 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,d_8 = NULL,h_12 = NULL;
  if(((g_108 != NULL) && (g_108 != t)))
    _fail(t);
  else
    g_108 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((c_108 != NULL) && (c_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_108 != NULL) && (h_108 != t)))
    _fail(t);
  else
    h_108 = t;
  t = SSLgetAnnotations(not_null(g_108));
  if(((b_108 != NULL) && (b_108 != t)))
    _fail(t);
  else
    b_108 = t;
  t = not_null(c_108);
  t = f_110(t);
  if(((d_108 != NULL) && (d_108 != t)))
    _fail(t);
  else
    d_108 = t;
  if(((f_108 != NULL) && (f_108 != t)))
    _fail(t);
  else
    f_108 = t;
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(d_108));
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  t = SSLsetAnnotations(not_null(d_8), not_null(b_108));
  if(((e_108 != NULL) && (e_108 != t)))
    _fail(t);
  else
    e_108 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm i_108 = NULL;
  if(((i_108 != NULL) && (i_108 != t)))
    _fail(t);
  else
    i_108 = t;
  t = SSL_is_string(not_null(i_108));
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL;
  if(((m_108 != NULL) && (m_108 != t)))
    _fail(t);
  else
    m_108 = t;
  if(match_cons(t, sym__2))
    {
      k_108 = ATgetArgument(t, 0);
      l_108 = ATgetArgument(t, 1);
      {
        ATerm p_82 = t;
        int q_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_108 = NULL,o_108 = NULL,p_108 = NULL;
            t = not_null(m_108);
            if(((n_108 != NULL) && (n_108 != t)))
              _fail(t);
            else
              n_108 = t;
            t = not_null(m_108);
            if(((p_108 != NULL) && (p_108 != t)))
              _fail(t);
            else
              p_108 = t;
            t = not_null(n_108);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(n_108));
            LocalPopChoice(q_82);
          }
        else
          {
            t = p_82;
            {
              ATerm r_82 = t;
              int s_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL;
                  t = not_null(k_108);
                  if(((r_108 != NULL) && (r_108 != t)))
                    _fail(t);
                  else
                    r_108 = t;
                  t = not_null(l_108);
                  if(((q_108 != NULL) && (q_108 != t)))
                    _fail(t);
                  else
                    q_108 = t;
                  t = not_null(m_108);
                  if(((t_108 != NULL) && (t_108 != t)))
                    _fail(t);
                  else
                    t_108 = t;
                  t = not_null(r_108);
                  t = is_string_0_0(t);
                  t = not_null(q_108);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(r_108), not_null(q_108));
                  LocalPopChoice(s_82);
                }
              else
                {
                  t = r_82;
                  {
                    ATerm t_82 = t;
                    int u_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
                        t = not_null(k_108);
                        if(((u_108 != NULL) && (u_108 != t)))
                          _fail(t);
                        else
                          u_108 = t;
                        t = not_null(l_108);
                        if(((v_108 != NULL) && (v_108 != t)))
                          _fail(t);
                        else
                          v_108 = t;
                        t = not_null(m_108);
                        if(((w_108 != NULL) && (w_108 != t)))
                          _fail(t);
                        else
                          w_108 = t;
                        t = not_null(u_108);
                        t = is_string_0_0(t);
                        t = not_null(v_108);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(u_108), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_f_70, (ATerm) ATmakeAppl(sym_String_1, not_null(v_108)))));
                        LocalPopChoice(u_82);
                      }
                    else
                      {
                        t = t_82;
                        {
                          ATerm x_108 = NULL,y_108 = NULL;
                          t = not_null(m_108);
                          if(((x_108 != NULL) && (x_108 != t)))
                            _fail(t);
                          else
                            x_108 = t;
                          t = not_null(m_108);
                          if(((y_108 != NULL) && (y_108 != t)))
                            _fail(t);
                          else
                            y_108 = t;
                          t = not_null(x_108);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(x_108));
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
      ATerm v_82 = t;
      int w_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_109 = NULL,d_109 = NULL,e_109 = NULL;
          t = not_null(m_108);
          if(((c_109 != NULL) && (c_109 != t)))
            _fail(t);
          else
            c_109 = t;
          t = not_null(m_108);
          if(((e_109 != NULL) && (e_109 != t)))
            _fail(t);
          else
            e_109 = t;
          t = not_null(c_109);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(c_109));
          LocalPopChoice(w_82);
        }
      else
        {
          t = v_82;
          {
            ATerm f_109 = NULL,g_109 = NULL;
            t = not_null(m_108);
            if(((f_109 != NULL) && (f_109 != t)))
              _fail(t);
            else
              f_109 = t;
            t = not_null(m_108);
            if(((g_109 != NULL) && (g_109 != t)))
              _fail(t);
            else
              g_109 = t;
            t = not_null(f_109);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(f_109));
          }
        }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm s_109 = NULL;
  if(((s_109 != NULL) && (s_109 != t)))
    _fail(t);
  else
    s_109 = t;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm t_109 = NULL;
  if(((t_109 != NULL) && (t_109 != t)))
    _fail(t);
  else
    t_109 = t;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm u_109 = NULL;
  if(((u_109 != NULL) && (u_109 != t)))
    _fail(t);
  else
    u_109 = t;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm v_109 = NULL;
  if(((v_109 != NULL) && (v_109 != t)))
    _fail(t);
  else
    v_109 = t;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm w_109 = NULL;
  if(((w_109 != NULL) && (w_109 != t)))
    _fail(t);
  else
    w_109 = t;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm x_109 = NULL;
  if(((x_109 != NULL) && (x_109 != t)))
    _fail(t);
  else
    x_109 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_82 = t;
  int y_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_82 = t;
      if((PushChoice() == 0))
        {
          ATerm a_83 = t;
          int b_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(e_8, t);
              LocalPopChoice(b_83);
            }
          else
            {
              t = a_83;
              t = XtcQuery_2_0(f_8, g_8, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_82;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(r_0, t);
      LocalPopChoice(y_82);
    }
  else
    {
      t = x_82;
      {
        ATerm c_83 = t;
        int d_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(h_8, t);
            LocalPopChoice(d_83);
          }
        else
          {
            t = c_83;
            t = XtcQuery_2_0(i_8, j_8, t);
          }
      }
      {
        ATerm e_83 = t;
        int f_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(r_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(f_83);
          }
        else
          {
            t = e_83;
            {
              ATerm y_109 = NULL,z_109 = NULL;
              if(((y_109 != NULL) && (y_109 != t)))
                _fail(t);
              else
                y_109 = t;
              if(((z_109 != NULL) && (z_109 != t)))
                _fail(t);
              else
                z_109 = t;
              t = not_null(y_109);
              t = xtc_import_local_0_0(t);
              t = not_null(z_109);
              t = xtc_find_reg_local_1_0(r_0, t);
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
ATerm filter_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm g_83 = t;
  int h_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(h_83);
    }
  else
    {
      t = g_83;
      {
        ATerm i_83 = t;
        int j_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_8 (ATerm t);
            static ATerm k_8 (ATerm t)
            {
              t = filter_1_0(g_131, t);
              return(t);
            }
            t = Cons_2_0(g_131, k_8, t);
            LocalPopChoice(j_83);
          }
        else
          {
            t = i_83;
            {
              ATerm b_110 = NULL,c_110 = NULL,d_110 = NULL,e_110 = NULL;
              if(((b_110 != NULL) && (b_110 != t)))
                _fail(t);
              else
                b_110 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((c_110 != NULL) && (c_110 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    c_110 = ATgetFirst((ATermList) t);
                  if(((d_110 != NULL) && (d_110 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    d_110 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(d_110);
              if(((e_110 != NULL) && (e_110 != t)))
                _fail(t);
              else
                e_110 = t;
              t = filter_1_0(g_131, t);
            }
          }
      }
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm k_83 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_83;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm i_110 = NULL;
  if(((i_110 != NULL) && (i_110 != t)))
    _fail(t);
  else
    i_110 = t;
  t = filter_1_0(l_8, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm l_83 = t;
  int m_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_110 = NULL;
      if(((k_110 != NULL) && (k_110 != t)))
        _fail(t);
      else
        k_110 = t;
      t = (ATerm) ATinsert(ATempty, term_l_18);
      {
        ATerm n_83 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_83;
          }
      }
      t = not_null(k_110);
      LocalPopChoice(m_83);
      {
        ATerm l_110 = NULL,m_110 = NULL;
        if(((m_110 != NULL) && (m_110 != t)))
          _fail(t);
        else
          m_110 = t;
        t = term_o_83;
        if(((l_110 != NULL) && (l_110 != t)))
          _fail(t);
        else
          l_110 = t;
        t = not_null(m_110);
        t = err_0_1(not_null(l_110), t);
        _fail(t);
      }
    }
  else
    {
      t = l_83;
      {
        ATerm n_110 = NULL;
        if(((n_110 != NULL) && (n_110 != t)))
          _fail(t);
        else
          n_110 = t;
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL;
  if(((p_110 != NULL) && (p_110 != t)))
    _fail(t);
  else
    p_110 = t;
  if(((o_110 != NULL) && (o_110 != t)))
    _fail(t);
  else
    o_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_n_18), term_m_18), not_null(o_110));
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(m_8, n_8, t);
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  if(((s_110 != NULL) && (s_110 != t)))
    _fail(t);
  else
    s_110 = t;
  if(((t_110 != NULL) && (t_110 != t)))
    _fail(t);
  else
    t_110 = t;
  t = not_null(s_110);
  if(((u_110 != NULL) && (u_110 != t)))
    _fail(t);
  else
    u_110 = t;
  t = SSL_explode_term(not_null(u_110));
  if(match_cons(t, sym__2))
    {
      ATerm p_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_83 = ATgetArgument(t, 1);
        if(((ATgetType(q_83) == AT_LIST) && !(ATisEmpty(q_83))))
          {
            if(((r_110 != NULL) && (r_110 != ATgetFirst((ATermList) q_83))))
              _fail(ATgetFirst((ATermList) q_83));
            else
              r_110 = ATgetFirst((ATermList) q_83);
            if(((q_110 != NULL) && (q_110 != (ATerm) ATgetNext((ATermList) q_83))))
              _fail((ATerm) ATgetNext((ATermList) q_83));
            else
              q_110 = (ATerm) ATgetNext((ATermList) q_83);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(r_110);
  return(t);
}
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,o_8 = NULL,i_12 = NULL;
  if(((c_111 != NULL) && (c_111 != t)))
    _fail(t);
  else
    c_111 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_110 != NULL) && (w_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_110 = ATgetArgument(t, 0);
      if(((x_110 != NULL) && (x_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_111 != NULL) && (d_111 != t)))
    _fail(t);
  else
    d_111 = t;
  t = SSLgetAnnotations(not_null(c_111));
  if(((v_110 != NULL) && (v_110 != t)))
    _fail(t);
  else
    v_110 = t;
  t = not_null(w_110);
  t = z_100(t);
  if(((y_110 != NULL) && (y_110 != t)))
    _fail(t);
  else
    y_110 = t;
  t = not_null(x_110);
  t = a_101(t);
  if(((z_110 != NULL) && (z_110 != t)))
    _fail(t);
  else
    z_110 = t;
  if(((b_111 != NULL) && (b_111 != t)))
    _fail(t);
  else
    b_111 = t;
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_110), not_null(z_110));
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSLsetAnnotations(not_null(o_8), not_null(v_110));
  if(((a_111 != NULL) && (a_111 != t)))
    _fail(t);
  else
    a_111 = t;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm b_112 = NULL;
  if(((b_112 != NULL) && (b_112 != t)))
    _fail(t);
  else
    b_112 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm c_112 (ATerm t);
  static ATerm c_112 (ATerm t)
  {
    ATerm r_83 = t;
    int s_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,u_111 = NULL,v_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL;
        if(((m_111 != NULL) && (m_111 != t)))
          _fail(t);
        else
          m_111 = t;
        if(match_cons(t, sym__2))
          {
            if(((n_111 != NULL) && (n_111 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              n_111 = ATgetArgument(t, 0);
            if(((q_111 != NULL) && (q_111 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              q_111 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(n_111);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_111 != NULL) && (o_111 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_111 = ATgetFirst((ATermList) t);
            if(((p_111 != NULL) && (p_111 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(q_111);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_111 != NULL) && (r_111 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_111 = ATgetFirst((ATermList) t);
            if(((u_111 != NULL) && (u_111 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              u_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(o_111);
        if(((x_111 != NULL) && (x_111 != t)))
          _fail(t);
        else
          x_111 = t;
        t = not_null(p_111);
        if(((v_111 != NULL) && (v_111 != t)))
          _fail(t);
        else
          v_111 = t;
        t = not_null(r_111);
        if(((x_111 != NULL) && (x_111 != t)))
          _fail(t);
        else
          x_111 = t;
        t = not_null(u_111);
        if(((y_111 != NULL) && (y_111 != t)))
          _fail(t);
        else
          y_111 = t;
        t = not_null(m_111);
        if(((a_112 != NULL) && (a_112 != t)))
          _fail(t);
        else
          a_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_111), not_null(y_111));
        t = c_112(t);
        if(((z_111 != NULL) && (z_111 != t)))
          _fail(t);
        else
          z_111 = t;
        LocalPopChoice(s_83);
      }
    else
      {
        t = r_83;
        t = _2_0(p_8, Nil_0_0, t);
      }
    return(t);
  }
  t = c_112(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t)
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL;
  if(((d_112 != NULL) && (d_112 != t)))
    _fail(t);
  else
    d_112 = t;
  if(((h_112 != NULL) && (h_112 != t)))
    _fail(t);
  else
    h_112 = t;
  t = explode_string_0_0(t);
  if(((e_112 != NULL) && (e_112 != t)))
    _fail(t);
  else
    e_112 = t;
  t = not_null(h_112);
  if(((g_112 != NULL) && (g_112 != t)))
    _fail(t);
  else
    g_112 = t;
  t = not_null(c_43);
  t = explode_string_0_0(t);
  if(((f_112 != NULL) && (f_112 != t)))
    _fail(t);
  else
    f_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_112), not_null(f_112));
  t = left_match_0_0(t);
  t = not_null(d_112);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm i_112 = NULL;
  if(((i_112 != NULL) && (i_112 != t)))
    _fail(t);
  else
    i_112 = t;
  {
    ATerm t_83 = t;
    int u_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_112 = NULL,k_112 = NULL;
        t = not_null(i_112);
        if(((k_112 != NULL) && (k_112 != t)))
          _fail(t);
        else
          k_112 = t;
        t = term_v_83;
        if(((j_112 != NULL) && (j_112 != t)))
          _fail(t);
        else
          j_112 = t;
        t = not_null(k_112);
        t = string_starts_with_0_1(not_null(j_112), t);
        LocalPopChoice(u_83);
      }
    else
      {
        t = t_83;
        {
          ATerm l_112 = NULL,m_112 = NULL;
          t = not_null(i_112);
          if(((m_112 != NULL) && (m_112 != t)))
            _fail(t);
          else
            m_112 = t;
          t = term_w_83;
          if(((l_112 != NULL) && (l_112 != t)))
            _fail(t);
          else
            l_112 = t;
          t = not_null(m_112);
          t = string_starts_with_0_1(not_null(l_112), t);
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL;
  if(((o_112 != NULL) && (o_112 != t)))
    _fail(t);
  else
    o_112 = t;
  if(match_cons(t, sym_URL_1))
    {
      p_112 = ATgetArgument(t, 0);
      {
        ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL;
        t = not_null(p_112);
        if(((s_112 != NULL) && (s_112 != t)))
          _fail(t);
        else
          s_112 = t;
        t = is_url_http_0_0(t);
        if(((r_112 != NULL) && (r_112 != t)))
          _fail(t);
        else
          r_112 = t;
        if(((q_112 != NULL) && (q_112 != t)))
          _fail(t);
        else
          q_112 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_y_83), not_null(q_112));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm t_112 = NULL,u_112 = NULL;
          t = not_null(o_112);
          if(((u_112 != NULL) && (u_112 != t)))
            _fail(t);
          else
            u_112 = t;
          t = term_k_53;
          t = ReadFromFile_0_0(t);
          if(((t_112 != NULL) && (t_112 != t)))
            _fail(t);
          else
            t_112 = t;
        }
      else
        {
          ATerm v_112 = NULL,w_112 = NULL,x_112 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((p_112 != NULL) && (p_112 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(p_112);
          if(((v_112 != NULL) && (v_112 != t)))
            _fail(t);
          else
            v_112 = t;
          t = not_null(o_112);
          if(((x_112 != NULL) && (x_112 != t)))
            _fail(t);
          else
            x_112 = t;
          t = not_null(v_112);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((w_112 != NULL) && (w_112 != t)))
            _fail(t);
          else
            w_112 = t;
        }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm u_113 (ATerm b_113, ATerm c_113, ATerm t);
  static ATerm v_113 (ATerm g_113, ATerm h_113, ATerm t);
  static ATerm u_113 (ATerm b_113, ATerm c_113, ATerm t)
  {
    ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
    t = not_null(b_113);
    if(((d_113 != NULL) && (d_113 != t)))
      _fail(t);
    else
      d_113 = t;
    t = not_null(c_113);
    if(((f_113 != NULL) && (f_113 != t)))
      _fail(t);
    else
      f_113 = t;
    t = p_0(t);
    if(((e_113 != NULL) && (e_113 != t)))
      _fail(t);
    else
      e_113 = t;
    {
      ATerm z_83 = t;
      int a_84 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          LocalPopChoice(a_84);
        }
      else
        {
          t = z_83;
          t = stderr_0_0(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_113), not_null(e_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_113));
    return(t);
  }
  static ATerm v_113 (ATerm g_113, ATerm h_113, ATerm t)
  {
    ATerm i_113 = NULL,j_113 = NULL,k_113 = NULL;
    t = not_null(g_113);
    if(((i_113 != NULL) && (i_113 != t)))
      _fail(t);
    else
      i_113 = t;
    t = not_null(h_113);
    if(((k_113 != NULL) && (k_113 != t)))
      _fail(t);
    else
      k_113 = t;
    t = p_0(t);
    if(((j_113 != NULL) && (j_113 != t)))
      _fail(t);
    else
      j_113 = t;
    {
      ATerm b_84 = t;
      if((PushChoice() == 0))
        {
          ATerm c_84 = t;
          int d_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(d_84);
            }
          else
            {
              t = c_84;
              {
                ATerm e_84 = t;
                int f_84 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    LocalPopChoice(f_84);
                  }
                else
                  {
                    t = e_84;
                    {
                      ATerm l_113 = NULL;
                      if(((l_113 != NULL) && (l_113 != t)))
                        _fail(t);
                      else
                        l_113 = t;
                      if(((i_113 != NULL) && (i_113 != t)))
                        _fail(t);
                      else
                        i_113 = t;
                      t = not_null(l_113);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_84;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_113), not_null(j_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_113));
    return(t);
  }
  ATerm m_113 = NULL,n_113 = NULL;
  if(((m_113 != NULL) && (m_113 != t)))
    _fail(t);
  else
    m_113 = t;
  if(match_cons(t, sym_URL_1))
    {
      n_113 = ATgetArgument(t, 0);
      {
        ATerm g_84 = t;
        int h_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_113 = NULL,p_113 = NULL;
            t = not_null(n_113);
            if(((o_113 != NULL) && (o_113 != t)))
              _fail(t);
            else
              o_113 = t;
            t = not_null(m_113);
            if(((p_113 != NULL) && (p_113 != t)))
              _fail(t);
            else
              p_113 = t;
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(o_113));
            t = read_from_0_0(t);
            t = rename_to_1_0(p_0, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(o_113));
            LocalPopChoice(h_84);
          }
        else
          {
            t = g_84;
            {
              ATerm q_113 = NULL,r_113 = NULL;
              t = not_null(n_113);
              if(((q_113 != NULL) && (q_113 != t)))
                _fail(t);
              else
                q_113 = t;
              t = not_null(m_113);
              if(((r_113 != NULL) && (r_113 != t)))
                _fail(t);
              else
                r_113 = t;
              t = p_0(t);
              if(((q_113 != NULL) && (q_113 != t)))
                _fail(t);
              else
                q_113 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(q_113));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((n_113 != NULL) && (n_113 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm i_84 = t;
        int j_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_113(not_null(n_113), not_null(m_113), t);
            LocalPopChoice(j_84);
          }
        else
          {
            t = i_84;
            {
              ATerm k_84 = t;
              int l_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_113(not_null(n_113), not_null(m_113), t);
                  LocalPopChoice(l_84);
                }
              else
                {
                  t = k_84;
                  {
                    ATerm s_113 = NULL,t_113 = NULL;
                    t = not_null(n_113);
                    if(((s_113 != NULL) && (s_113 != t)))
                      _fail(t);
                    else
                      s_113 = t;
                    t = not_null(m_113);
                    if(((t_113 != NULL) && (t_113 != t)))
                      _fail(t);
                    else
                      t_113 = t;
                    t = p_0(t);
                    if(((s_113 != NULL) && (s_113 != t)))
                      _fail(t);
                    else
                      s_113 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_113));
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm w_113 = NULL;
  if(((w_113 != NULL) && (w_113 != t)))
    _fail(t);
  else
    w_113 = t;
  t = SSL_concat_strings(not_null(w_113));
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm x_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_84 = ATgetFirst((ATermList) t);
      if(((x_113 != NULL) && (x_113 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        x_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(x_113);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm y_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((y_113 != NULL) && (y_113 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        y_113 = ATgetFirst((ATermList) t);
      {
        ATerm n_84 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(n_84) != AT_LIST) || !(ATisEmpty(n_84))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(y_113);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_84 = t;
  int p_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(p_84);
    }
  else
    {
      t = o_84;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm a_114 = NULL;
  if(((a_114 != NULL) && (a_114 != t)))
    _fail(t);
  else
    a_114 = t;
  t = SSL_implode_string(not_null(a_114));
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm c_114 = NULL;
  if(((c_114 != NULL) && (c_114 != t)))
    _fail(t);
  else
    c_114 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  static ATerm d_114 (ATerm t);
  static ATerm d_114 (ATerm t)
  {
    ATerm q_84 = t;
    int r_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_123(t);
        LocalPopChoice(r_84);
      }
    else
      {
        t = q_84;
        t = Cons_2_0(q_8, d_114, t);
      }
    return(t);
  }
  t = d_114(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm j_114 = NULL;
  if(((j_114 != NULL) && (j_114 != t)))
    _fail(t);
  else
    j_114 = t;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm k_114 = NULL;
  if(((k_114 != NULL) && (k_114 != t)))
    _fail(t);
  else
    k_114 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL;
  static ATerm r_8 (ATerm t);
  static ATerm r_8 (ATerm t)
  {
    t = Cons_2_0(q_123, s_8, t);
    {
      static ATerm u_8 (ATerm t);
      static ATerm u_8 (ATerm t)
      {
        if(((g_114 != NULL) && (g_114 != t)))
          _fail(t);
        else
          g_114 = t;
        return(t);
      }
      t = Cons_2_0(t_8, u_8, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_8, t);
  if(((i_114 != NULL) && (i_114 != t)))
    _fail(t);
  else
    i_114 = t;
  if(((h_114 != NULL) && (h_114 != t)))
    _fail(t);
  else
    h_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_114), not_null(g_114));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,y_114 = NULL,z_114 = NULL;
  ATerm s_84 = t;
  int t_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_133, t);
      LocalPopChoice(t_84);
    }
  else
    {
      t = s_84;
      {
        ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL;
        if(((p_114 != NULL) && (p_114 != t)))
          _fail(t);
        else
          p_114 = t;
        if(((r_114 != NULL) && (r_114 != t)))
          _fail(t);
        else
          r_114 = t;
        t = not_null(p_114);
        if(((q_114 != NULL) && (q_114 != t)))
          _fail(t);
        else
          q_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_114), (ATerm) ATempty);
      }
    }
  if(((s_114 != NULL) && (s_114 != t)))
    _fail(t);
  else
    s_114 = t;
  if(match_cons(t, sym__2))
    {
      if(((t_114 != NULL) && (t_114 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_114 = ATgetArgument(t, 0);
      if(((w_114 != NULL) && (w_114 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_114);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(w_114);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((y_114 != NULL) && (y_114 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                y_114 = ATgetFirst((ATermList) t);
              if(((z_114 != NULL) && (z_114 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                z_114 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(w_114);
          if(((a_115 != NULL) && (a_115 != t)))
            _fail(t);
          else
            a_115 = t;
          t = not_null(s_114);
          if(((c_115 != NULL) && (c_115 != t)))
            _fail(t);
          else
            c_115 = t;
          t = not_null(a_115);
          t = list_tokenize_1_0(d_133, t);
          if(((b_115 != NULL) && (b_115 != t)))
            _fail(t);
          else
            b_115 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_114 != NULL) && (u_114 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_114 = ATgetFirst((ATermList) t);
          if(((v_114 != NULL) && (v_114 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_114);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm d_115 = NULL;
          t = not_null(t_114);
          if(((d_115 != NULL) && (d_115 != t)))
            _fail(t);
          else
            d_115 = t;
          t = (ATerm) ATinsert(ATempty, not_null(d_115));
        }
      else
        {
          ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((y_114 != NULL) && (y_114 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                y_114 = ATgetFirst((ATermList) t);
              if(((z_114 != NULL) && (z_114 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                z_114 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(t_114);
          if(((e_115 != NULL) && (e_115 != t)))
            _fail(t);
          else
            e_115 = t;
          t = not_null(w_114);
          if(((f_115 != NULL) && (f_115 != t)))
            _fail(t);
          else
            f_115 = t;
          t = not_null(s_114);
          if(((h_115 != NULL) && (h_115 != t)))
            _fail(t);
          else
            h_115 = t;
          t = not_null(f_115);
          t = list_tokenize_1_0(d_133, t);
          if(((g_115 != NULL) && (g_115 != t)))
            _fail(t);
          else
            g_115 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(g_115)), not_null(e_115));
        }
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm i_115 = NULL;
  if(((i_115 != NULL) && (i_115 != t)))
    _fail(t);
  else
    i_115 = t;
  t = SSL_explode_string(not_null(i_115));
  return(t);
}
ATerm string_tokenize_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = list_tokenize_1_0(c_133, t);
  t = map_1_0(implode_string_0_0, t);
  return(t);
}
ATerm string_tokenize_0_1 (ATerm d_46, ATerm t)
{
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    ATerm j_115 = NULL;
    static ATerm w_8 (ATerm t);
    static ATerm w_8 (ATerm t)
    {
      if(((j_115 != NULL) && (j_115 != t)))
        _fail(t);
      else
        j_115 = t;
      return(t);
    }
    if(((j_115 != NULL) && (j_115 != t)))
      _fail(t);
    else
      j_115 = t;
    t = not_null(d_46);
    t = fetch_1_0(w_8, t);
    return(t);
  }
  t = string_tokenize_1_0(v_8, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm k_115 = NULL,l_115 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_115 != NULL) && (k_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_115 = ATgetArgument(t, 0);
      if(((l_115 != NULL) && (l_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_115);
  t = string_tokenize_0_1(not_null(k_115), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL;
  if(((n_115 != NULL) && (n_115 != t)))
    _fail(t);
  else
    n_115 = t;
  if(((m_115 != NULL) && (m_115 != t)))
    _fail(t);
  else
    m_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_f_80), not_null(m_115));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm s_115 = NULL;
  if(((s_115 != NULL) && (s_115 != t)))
    _fail(t);
  else
    s_115 = t;
  t = SSL_S_ISDIR(not_null(s_115));
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm t_115 = NULL;
  if(((t_115 != NULL) && (t_115 != t)))
    _fail(t);
  else
    t_115 = t;
  t = SSL_perror(not_null(t_115));
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_115 != NULL) && (y_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_115 = ATgetArgument(t, 0);
      if(((z_115 != NULL) && (z_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_strcat(not_null(y_115), not_null(z_115));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = strcat_0_0(t);
  return(t);
}
static ATerm i_116 (ATerm b_116, ATerm t)
{
  ATerm c_116 = NULL,d_116 = NULL;
  t = not_null(b_116);
  if(((c_116 != NULL) && (c_116 != t)))
    _fail(t);
  else
    c_116 = t;
  t = SSL_filemode(not_null(c_116));
  if(match_cons(t, sym__2))
    {
      if(((d_116 != NULL) && (d_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_116 = ATgetArgument(t, 0);
      {
        ATerm u_84 = ATgetArgument(t, 1);
        if(((ATgetType(u_84) != AT_INT) || (ATgetInt((ATermInt) u_84) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(d_116);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm e_116 = NULL;
  if(((e_116 != NULL) && (e_116 != t)))
    _fail(t);
  else
    e_116 = t;
  {
    ATerm v_84 = t;
    int w_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_116(not_null(e_116), t);
        LocalPopChoice(w_84);
      }
    else
      {
        t = v_84;
        {
          ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL;
          t = not_null(e_116);
          if(((h_116 != NULL) && (h_116 != t)))
            _fail(t);
          else
            h_116 = t;
          t = not_null(e_116);
          if(((g_116 != NULL) && (g_116 != t)))
            _fail(t);
          else
            g_116 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_84, not_null(g_116));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_116 != NULL) && (j_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_116 = ATgetArgument(t, 0);
      if(((k_116 != NULL) && (k_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(j_116), not_null(k_116));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL;
  if(((s_116 != NULL) && (s_116 != t)))
    _fail(t);
  else
    s_116 = t;
  if(((r_116 != NULL) && (r_116 != t)))
    _fail(t);
  else
    r_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_116), (ATerm) ATinsert(ATempty, term_y_84));
  t = access_0_0(t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm t_116 = NULL,u_116 = NULL,w_116 = NULL,x_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_116 != NULL) && (u_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_116 = ATgetArgument(t, 0);
      if(((t_116 != NULL) && (t_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  {
    ATerm z_84 = t;
    int a_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_116 = NULL;
        if(((y_116 != NULL) && (y_116 != t)))
          _fail(t);
        else
          y_116 = t;
        t = not_null(t_116);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(y_116);
        LocalPopChoice(a_85);
        {
          ATerm z_116 = NULL,a_117 = NULL;
          if(((a_117 != NULL) && (a_117 != t)))
            _fail(t);
          else
            a_117 = t;
          t = not_null(u_116);
          t = base_filename_0_0(t);
          if(((z_116 != NULL) && (z_116 != t)))
            _fail(t);
          else
            z_116 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_116)), term_b_85), not_null(t_116));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = z_84;
        t = not_null(t_116);
      }
  }
  if(((w_116 != NULL) && (w_116 != t)))
    _fail(t);
  else
    w_116 = t;
  t = SSL_copy(not_null(u_116), not_null(w_116));
  return(t);
}
static ATerm i_117 (ATerm d_117, ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL;
  t = not_null(d_117);
  if(((f_117 != NULL) && (f_117 != t)))
    _fail(t);
  else
    f_117 = t;
  t = term_n_34;
  {
    ATerm c_85 = t;
    int d_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(d_85);
      }
    else
      {
        t = c_85;
        t = term_u_12;
      }
  }
  if(((e_117 != NULL) && (e_117 != t)))
    _fail(t);
  else
    e_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_53, not_null(e_117));
  t = copy_file_0_0(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm e_85 = t;
  int f_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_34;
      t = get_config_0_0(t);
      LocalPopChoice(f_85);
    }
  else
    {
      t = e_85;
      t = term_u_12;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL;
  if(((g_117 != NULL) && (g_117 != t)))
    _fail(t);
  else
    g_117 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = i_117(not_null(g_117), t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((h_117 != NULL) && (h_117 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(g_117);
      t = copy_to_1_0(x_8, t);
    }
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL;
  if(((l_117 != NULL) && (l_117 != t)))
    _fail(t);
  else
    l_117 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_117 != NULL) && (j_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_117 = ATgetArgument(t, 0);
      if(((k_117 != NULL) && (k_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(j_117), t);
  t = hashtable_remove_0_1(not_null(k_117), t);
  t = not_null(l_117);
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_117 != NULL) && (n_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_117 = ATgetArgument(t, 0);
      if(((o_117 != NULL) && (o_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_117 != NULL) && (p_117 != t)))
    _fail(t);
  else
    p_117 = t;
  {
    ATerm g_85 = t;
    int h_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_117), not_null(o_117));
        t = table_get_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_85 = ATgetFirst((ATermList) t);
            if(((m_117 != NULL) && (m_117 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              m_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_85);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_117), not_null(o_117), not_null(m_117));
        t = table_put_0_0(t);
      }
    else
      {
        t = g_85;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_117), not_null(o_117));
        t = table_remove_0_0(t);
      }
  }
  t = not_null(p_117);
  return(t);
}
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL;
  if(((t_117 != NULL) && (t_117 != t)))
    _fail(t);
  else
    t_117 = t;
  t = t_111(t);
  if(((s_117 != NULL) && (s_117 != t)))
    _fail(t);
  else
    s_117 = t;
  {
    ATerm j_85 = t;
    int k_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_117), term_m_54);
        t = table_get_0_0(t);
        {
          ATerm l_85 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_85;
            }
        }
        LocalPopChoice(k_85);
      }
    else
      {
        t = j_85;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((r_117 != NULL) && (r_117 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        r_117 = ATgetFirst((ATermList) t);
      if(((q_117 != NULL) && (q_117 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(s_117), term_m_54, not_null(q_117));
  t = table_put_0_0(t);
  t = not_null(r_117);
  {
    static ATerm y_8 (ATerm t);
    static ATerm y_8 (ATerm t)
    {
      ATerm u_117 = NULL,v_117 = NULL,w_117 = NULL;
      if(((u_117 != NULL) && (u_117 != t)))
        _fail(t);
      else
        u_117 = t;
      if(((w_117 != NULL) && (w_117 != t)))
        _fail(t);
      else
        w_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_117), not_null(u_117));
      t = table_pop_rm_0_0(t);
      if(((v_117 != NULL) && (v_117 != t)))
        _fail(t);
      else
        v_117 = t;
      return(t);
    }
    t = map_1_0(y_8, t);
  }
  t = not_null(t_117);
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm x_117 = NULL;
  if(((x_117 != NULL) && (x_117 != t)))
    _fail(t);
  else
    x_117 = t;
  t = SSL_remove(not_null(x_117));
  return(t);
}
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm m_85 = t;
  int n_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_115(t);
      t = r_115(t);
      LocalPopChoice(n_85);
    }
  else
    {
      t = m_85;
      t = r_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL;
  if(((z_117 != NULL) && (z_117 != t)))
    _fail(t);
  else
    z_117 = t;
  t = s_111(t);
  if(((y_117 != NULL) && (y_117 != t)))
    _fail(t);
  else
    y_117 = t;
  if(((b_118 != NULL) && (b_118 != t)))
    _fail(t);
  else
    b_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_117), term_m_54);
  {
    ATerm o_85 = t;
    int q_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(q_85);
      }
    else
      {
        t = o_85;
        t = (ATerm) ATempty;
      }
  }
  if(((a_118 != NULL) && (a_118 != t)))
    _fail(t);
  else
    a_118 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(y_117), term_m_54, (ATerm) ATinsert(CheckATermList(not_null(a_118)), (ATerm) ATempty));
  t = table_put_0_0(t);
  t = not_null(z_117);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_q_55;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_q_55;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  ATerm c_118 = NULL,d_118 = NULL;
  static ATerm a_9 (ATerm t);
  static ATerm a_9 (ATerm t)
  {
    ATerm e_118 = NULL;
    if(((e_118 != NULL) && (e_118 != t)))
      _fail(t);
    else
      e_118 = t;
    {
      ATerm r_85 = t;
      int s_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_85;
          t = table_get_0_0(t);
          LocalPopChoice(s_85);
        }
      else
        {
          t = r_85;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_118 != NULL) && (d_118 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_118 = ATgetFirst((ATermList) t);
        if(((c_118 != NULL) && (c_118 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          c_118 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = not_null(d_118);
    t = map_1_0(b_9, t);
    t = not_null(e_118);
    t = end_scope_1_0(c_9, t);
    return(t);
  }
  t = begin_scope_1_0(z_8, t);
  t = restore_always_2_0(t_151, a_9, t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t)
{
  static ATerm d_9 (ATerm t);
  static ATerm d_9 (ATerm t)
  {
    ATerm u_85 = t;
    int v_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_118 = NULL,g_118 = NULL,h_118 = NULL;
        if(((f_118 != NULL) && (f_118 != t)))
          _fail(t);
        else
          f_118 = t;
        if(((h_118 != NULL) && (h_118 != t)))
          _fail(t);
        else
          h_118 = t;
        t = term_t_21;
        t = get_config_0_0(t);
        if(((g_118 != NULL) && (g_118 != t)))
          _fail(t);
        else
          g_118 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_118));
        LocalPopChoice(v_85);
      }
    else
      {
        t = u_85;
        t = term_k_53;
      }
    t = v_152(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm j_118 = NULL;
  if(((j_118 != NULL) && (j_118 != t)))
    _fail(t);
  else
    j_118 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(j_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(j_118);
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL;
  if(((k_118 != NULL) && (k_118 != t)))
    _fail(t);
  else
    k_118 = t;
  if(((m_118 != NULL) && (m_118 != t)))
    _fail(t);
  else
    m_118 = t;
  t = string_to_int_0_0(t);
  if(((l_118 != NULL) && (l_118 != t)))
    _fail(t);
  else
    l_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_85, not_null(l_118));
  t = set_config_0_0(t);
  t = not_null(k_118);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_x_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_9, f_9, g_9, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm n_118 = NULL;
  if(((n_118 != NULL) && (n_118 != t)))
    _fail(t);
  else
    n_118 = t;
  t = SSL_string_to_int(not_null(n_118));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm p_118 = NULL;
  if(((p_118 != NULL) && (p_118 != t)))
    _fail(t);
  else
    p_118 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(p_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(p_118);
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm q_118 = NULL;
  if(((q_118 != NULL) && (q_118 != t)))
    _fail(t);
  else
    q_118 = t;
  t = term_y_85;
  t = set_config_0_0(t);
  t = term_z_85;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_a_86;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL;
  if(((t_118 != NULL) && (t_118 != t)))
    _fail(t);
  else
    t_118 = t;
  if(((v_118 != NULL) && (v_118 != t)))
    _fail(t);
  else
    v_118 = t;
  t = string_to_int_0_0(t);
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_74, not_null(u_118));
  t = set_config_0_0(t);
  t = not_null(t_118);
  if(((s_118 != NULL) && (s_118 != t)))
    _fail(t);
  else
    s_118 = t;
  if(((r_118 != NULL) && (r_118 != t)))
    _fail(t);
  else
    r_118 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_118));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_b_86;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm w_118 = NULL;
  if(((w_118 != NULL) && (w_118 != t)))
    _fail(t);
  else
    w_118 = t;
  t = term_c_86;
  t = set_config_0_0(t);
  t = term_d_86;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_e_86;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_86 = t;
  int g_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_9, i_9, j_9, t);
      LocalPopChoice(g_86);
    }
  else
    {
      t = f_86;
      {
        ATerm h_86 = t;
        int i_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_9, l_9, m_9, t);
            LocalPopChoice(i_86);
          }
        else
          {
            t = h_86;
            t = Option_3_0(n_9, o_9, p_9, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm j_86 = t;
  int k_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      LocalPopChoice(k_86);
    }
  else
    {
      t = j_86;
      t = keep_option_0_0(t);
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm y_118 = NULL;
  if(((y_118 != NULL) && (y_118 != t)))
    _fail(t);
  else
    y_118 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(y_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(y_118);
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm z_118 = NULL,a_119 = NULL,b_119 = NULL,c_119 = NULL,d_119 = NULL;
  if(((b_119 != NULL) && (b_119 != t)))
    _fail(t);
  else
    b_119 = t;
  if(((d_119 != NULL) && (d_119 != t)))
    _fail(t);
  else
    d_119 = t;
  if(((c_119 != NULL) && (c_119 != t)))
    _fail(t);
  else
    c_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_34, not_null(c_119));
  t = set_config_0_0(t);
  t = not_null(b_119);
  if(((a_119 != NULL) && (a_119 != t)))
    _fail(t);
  else
    a_119 = t;
  if(((z_118 != NULL) && (z_118 != t)))
    _fail(t);
  else
    z_118 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_118));
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_9, r_9, s_9, t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm e_119 = NULL;
  if(((e_119 != NULL) && (e_119 != t)))
    _fail(t);
  else
    e_119 = t;
  t = term_n_86;
  t = set_config_0_0(t);
  t = term_o_86;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_p_86;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm q_86 = t;
  int r_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(r_86);
    }
  else
    {
      t = q_86;
      t = Option_3_0(t_9, u_9, v_9, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL;
  if(((h_119 != NULL) && (h_119 != t)))
    _fail(t);
  else
    h_119 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(h_119);
      t = register_usage_1_0(o_0, t);
    }
  else
    {
      ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL,r_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_119 != NULL) && (i_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_119 = ATgetFirst((ATermList) t);
          if(((j_119 != NULL) && (j_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_119);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_119 != NULL) && (k_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_119 = ATgetFirst((ATermList) t);
          if(((l_119 != NULL) && (l_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(i_119);
      if(((o_119 != NULL) && (o_119 != t)))
        _fail(t);
      else
        o_119 = t;
      t = not_null(k_119);
      if(((m_119 != NULL) && (m_119 != t)))
        _fail(t);
      else
        m_119 = t;
      t = not_null(l_119);
      if(((n_119 != NULL) && (n_119 != t)))
        _fail(t);
      else
        n_119 = t;
      t = not_null(h_119);
      if(((r_119 != NULL) && (r_119 != t)))
        _fail(t);
      else
        r_119 = t;
      t = not_null(o_119);
      t = k_0(t);
      t = not_null(r_119);
      if(((q_119 != NULL) && (q_119 != t)))
        _fail(t);
      else
        q_119 = t;
      t = not_null(m_119);
      t = m_0(t);
      if(((p_119 != NULL) && (p_119 != t)))
        _fail(t);
      else
        p_119 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_119)), not_null(p_119));
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm t_119 = NULL;
  if(((t_119 != NULL) && (t_119 != t)))
    _fail(t);
  else
    t_119 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(t_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(t_119);
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL;
  if(((w_119 != NULL) && (w_119 != t)))
    _fail(t);
  else
    w_119 = t;
  if(((y_119 != NULL) && (y_119 != t)))
    _fail(t);
  else
    y_119 = t;
  if(((x_119 != NULL) && (x_119 != t)))
    _fail(t);
  else
    x_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, not_null(x_119));
  t = set_config_0_0(t);
  t = not_null(w_119);
  if(((v_119 != NULL) && (v_119 != t)))
    _fail(t);
  else
    v_119 = t;
  if(((u_119 != NULL) && (u_119 != t)))
    _fail(t);
  else
    u_119 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_119));
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_s_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, y_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm t_86 = t;
  int u_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_86);
    }
  else
    {
      t = t_86;
      {
        ATerm v_86 = t;
        int w_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            LocalPopChoice(w_86);
          }
        else
          {
            t = v_86;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm z_119 = NULL;
  if(((z_119 != NULL) && (z_119 != t)))
    _fail(t);
  else
    z_119 = t;
  t = term_x_86;
  t = set_config_0_0(t);
  t = term_y_47;
  t = set_config_0_0(t);
  t = not_null(z_119);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_y_86;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(z_9, a_10, b_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm a_120 = NULL;
  if(((a_120 != NULL) && (a_120 != t)))
    _fail(t);
  else
    a_120 = t;
  t = term_y_47;
  t = set_config_0_0(t);
  t = not_null(a_120);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_z_86;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(c_10, d_10, e_10, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm a_87 = t;
  int b_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(b_87);
    }
  else
    {
      t = a_87;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
ATerm long_description_1_0 (ATerm k_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm short_description_1_0 (ATerm j_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  static ATerm b_120 (ATerm t);
  static ATerm b_120 (ATerm t)
  {
    ATerm c_87 = t;
    int d_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(d_87);
      }
    else
      {
        t = c_87;
        t = Cons_2_0(f_123, b_120, t);
      }
    return(t);
  }
  t = b_120(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL;
  if(((f_120 != NULL) && (f_120 != t)))
    _fail(t);
  else
    f_120 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_120 = ATgetFirst((ATermList) t);
      e_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL;
        t = not_null(d_120);
        if(((g_120 != NULL) && (g_120 != t)))
          _fail(t);
        else
          g_120 = t;
        t = not_null(e_120);
        if(((h_120 != NULL) && (h_120 != t)))
          _fail(t);
        else
          h_120 = t;
        t = not_null(f_120);
        if(((j_120 != NULL) && (j_120 != t)))
          _fail(t);
        else
          j_120 = t;
        t = not_null(h_120);
        if(((l_120 != NULL) && (l_120 != t)))
          _fail(t);
        else
          l_120 = t;
        if(((p_120 != NULL) && (p_120 != t)))
          _fail(t);
        else
          p_120 = t;
        t = h_0(t);
        if(((m_120 != NULL) && (m_120 != t)))
          _fail(t);
        else
          m_120 = t;
        t = not_null(p_120);
        if(((o_120 != NULL) && (o_120 != t)))
          _fail(t);
        else
          o_120 = t;
        t = not_null(g_120);
        t = f_0(t);
        if(((n_120 != NULL) && (n_120 != t)))
          _fail(t);
        else
          n_120 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(m_120)), not_null(n_120));
        if(((k_120 != NULL) && (k_120 != t)))
          _fail(t);
        else
          k_120 = t;
        t = not_null(l_120);
        {
          static ATerm f_10 (ATerm t);
          static ATerm f_10 (ATerm t)
          {
            t = not_null(k_120);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_10, t);
        }
        if(((i_120 != NULL) && (i_120 != t)))
          _fail(t);
        else
          i_120 = t;
      }
    }
  else
    {
      ATerm q_120 = NULL,r_120 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(f_120);
      if(((r_120 != NULL) && (r_120 != t)))
        _fail(t);
      else
        r_120 = t;
      t = term_t_12;
      t = h_0(t);
      if(((q_120 != NULL) && (q_120 != t)))
        _fail(t);
      else
        q_120 = t;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm t_120 = NULL;
  if(((t_120 != NULL) && (t_120 != t)))
    _fail(t);
  else
    t_120 = t;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(g_10, h_10, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm v_120 = NULL,w_120 = NULL;
  if(((w_120 != NULL) && (w_120 != t)))
    _fail(t);
  else
    w_120 = t;
  if(((v_120 != NULL) && (v_120 != t)))
    _fail(t);
  else
    v_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_120)), term_g_87);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t)
{
  ATerm u_120 = NULL;
  static ATerm m_10 (ATerm t);
  static ATerm m_10 (ATerm t)
  {
    ATerm x_120 = NULL,y_120 = NULL;
    if(((y_120 != NULL) && (y_120 != t)))
      _fail(t);
    else
      y_120 = t;
    t = m_145(t);
    if(((x_120 != NULL) && (x_120 != t)))
      _fail(t);
    else
      x_120 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(x_120)), term_n_74);
    t = echo_0_0(t);
    return(t);
  }
  ATerm h_87 = t;
  int i_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_87;
      t = get_config_0_0(t);
      if(((u_120 != NULL) && (u_120 != t)))
        _fail(t);
      else
        u_120 = t;
      LocalPopChoice(i_87);
    }
  else
    {
      t = h_87;
      {
        static ATerm i_10 (ATerm t);
        static ATerm i_10 (ATerm t)
        {
          static ATerm j_10 (ATerm t);
          static ATerm j_10 (ATerm t)
          {
            if(((u_120 != NULL) && (u_120 != t)))
              _fail(t);
            else
              u_120 = t;
            return(t);
          }
          t = Program_1_0(j_10, t);
          return(t);
        }
        t = option_defined_1_0(i_10, t);
      }
    }
  {
    static ATerm k_10 (ATerm t);
    static ATerm k_10 (ATerm t)
    {
      t = l_145(t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(k_10, t);
  }
  t = term_k_87;
  t = echo_0_0(t);
  t = term_n_87;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(l_10, t);
  t = try_1_0(m_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm z_120 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL,n_10 = NULL,j_12 = NULL;
  if(((f_121 != NULL) && (f_121 != t)))
    _fail(t);
  else
    f_121 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((b_121 != NULL) && (b_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((g_121 != NULL) && (g_121 != t)))
    _fail(t);
  else
    g_121 = t;
  t = SSLgetAnnotations(not_null(f_121));
  if(((z_120 != NULL) && (z_120 != t)))
    _fail(t);
  else
    z_120 = t;
  t = not_null(b_121);
  t = z_108(t);
  if(((c_121 != NULL) && (c_121 != t)))
    _fail(t);
  else
    c_121 = t;
  if(((e_121 != NULL) && (e_121 != t)))
    _fail(t);
  else
    e_121 = t;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_121));
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = SSLsetAnnotations(not_null(n_10), not_null(z_120));
  if(((d_121 != NULL) && (d_121 != t)))
    _fail(t);
  else
    d_121 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_121 = NULL,i_121 = NULL;
  static ATerm q_10 (ATerm t);
  static ATerm r_10 (ATerm t);
  static ATerm q_10 (ATerm t)
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      t = not_null(h_121);
      return(t);
    }
    t = short_description_1_0(s_10, t);
    return(t);
  }
  static ATerm r_10 (ATerm t)
  {
    static ATerm t_10 (ATerm t);
    static ATerm t_10 (ATerm t)
    {
      t = not_null(h_121);
      return(t);
    }
    t = long_description_1_0(t_10, t);
    return(t);
  }
  if(((i_121 != NULL) && (i_121 != t)))
    _fail(t);
  else
    i_121 = t;
  {
    ATerm o_87 = t;
    int p_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_87;
        t = get_config_0_0(t);
        if(((h_121 != NULL) && (h_121 != t)))
          _fail(t);
        else
          h_121 = t;
        LocalPopChoice(p_87);
      }
    else
      {
        t = o_87;
        {
          static ATerm o_10 (ATerm t);
          static ATerm o_10 (ATerm t)
          {
            static ATerm p_10 (ATerm t);
            static ATerm p_10 (ATerm t)
            {
              if(((h_121 != NULL) && (h_121 != t)))
                _fail(t);
              else
                h_121 = t;
              return(t);
            }
            t = Program_1_0(p_10, t);
            return(t);
          }
          t = option_defined_1_0(o_10, t);
        }
      }
  }
  t = not_null(i_121);
  t = default_system_usage_2_0(q_10, r_10, t);
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm q_87 = t;
  int r_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(r_87);
    }
  else
    {
      t = q_87;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL;
  if(((k_121 != NULL) && (k_121 != t)))
    _fail(t);
  else
    k_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(k_121);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((l_121 != NULL) && (l_121 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            l_121 = ATgetFirst((ATermList) t);
          if(((m_121 != NULL) && (m_121 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(k_121);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
  if(((n_121 != NULL) && (n_121 != t)))
    _fail(t);
  else
    n_121 = t;
  if(((p_121 != NULL) && (p_121 != t)))
    _fail(t);
  else
    p_121 = t;
  {
    ATerm s_87 = t;
    int t_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(t_87);
      }
    else
      {
        t = s_87;
        {
          ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL;
          if(((q_121 != NULL) && (q_121 != t)))
            _fail(t);
          else
            q_121 = t;
          if(((s_121 != NULL) && (s_121 != t)))
            _fail(t);
          else
            s_121 = t;
          t = not_null(q_121);
          if(((r_121 != NULL) && (r_121 != t)))
            _fail(t);
          else
            r_121 = t;
          t = (ATerm) ATinsert(ATempty, not_null(r_121));
        }
      }
  }
  if(((o_121 != NULL) && (o_121 != t)))
    _fail(t);
  else
    o_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(o_121));
  t = printnl_0_0(t);
  t = not_null(n_121);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_87;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm u_87 = t;
  int v_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(v_87);
    }
  else
    {
      t = u_87;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_121 = NULL,u_121 = NULL;
  t = report_run_time_0_0(t);
  if(((u_121 != NULL) && (u_121 != t)))
    _fail(t);
  else
    u_121 = t;
  t = term_t_12;
  t = whoami_0_0(t);
  if(((t_121 != NULL) && (t_121 != t)))
    _fail(t);
  else
    t_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, term_w_87), not_null(t_121)));
  t = printnl_0_0(t);
  t = term_j_13;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_87;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm v_121 = NULL;
  if(((v_121 != NULL) && (v_121 != t)))
    _fail(t);
  else
    v_121 = t;
  t = SSL_TicksToSeconds(not_null(v_121));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm w_121 = NULL,x_121 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_121 != NULL) && (w_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_121 = ATgetArgument(t, 0);
      if(((x_121 != NULL) && (x_121 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_87 = t;
    int z_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(w_121), not_null(x_121));
        LocalPopChoice(z_87);
      }
    else
      {
        t = y_87;
        t = SSL_addr(not_null(w_121), not_null(x_121));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  ATerm a_88 = t;
  int b_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = c_130(t);
      LocalPopChoice(b_88);
    }
  else
    {
      t = a_88;
      {
        ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL;
        if(((z_121 != NULL) && (z_121 != t)))
          _fail(t);
        else
          z_121 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((a_122 != NULL) && (a_122 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              a_122 = ATgetFirst((ATermList) t);
            if(((b_122 != NULL) && (b_122 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              b_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(a_122);
        if(((c_122 != NULL) && (c_122 != t)))
          _fail(t);
        else
          c_122 = t;
        t = not_null(b_122);
        if(((d_122 != NULL) && (d_122 != t)))
          _fail(t);
        else
          d_122 = t;
        t = not_null(z_121);
        if(((f_122 != NULL) && (f_122 != t)))
          _fail(t);
        else
          f_122 = t;
        if(((h_122 != NULL) && (h_122 != t)))
          _fail(t);
        else
          h_122 = t;
        t = not_null(d_122);
        t = foldr_2_0(c_130, d_130, t);
        if(((g_122 != NULL) && (g_122 != t)))
          _fail(t);
        else
          g_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_122), not_null(g_122));
        t = d_130(t);
        if(((e_122 != NULL) && (e_122 != t)))
          _fail(t);
        else
          e_122 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL;
  if(((l_122 != NULL) && (l_122 != t)))
    _fail(t);
  else
    l_122 = t;
  if(((m_122 != NULL) && (m_122 != t)))
    _fail(t);
  else
    m_122 = t;
  t = not_null(l_122);
  if(((n_122 != NULL) && (n_122 != t)))
    _fail(t);
  else
    n_122 = t;
  t = SSL_explode_term(not_null(n_122));
  if(match_cons(t, sym__2))
    {
      ATerm c_88 = ATgetArgument(t, 0);
      if(((i_122 != NULL) && (i_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_122);
  if(((k_122 != NULL) && (k_122 != t)))
    _fail(t);
  else
    k_122 = t;
  t = not_null(i_122);
  t = foldr_2_0(z_134, a_135, t);
  if(((j_122 != NULL) && (j_122 != t)))
    _fail(t);
  else
    j_122 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_t_74;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(u_10, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_122 != NULL) && (o_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_122 = ATgetArgument(t, 0);
      if(((p_122 != NULL) && (p_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_122 != NULL) && (q_122 != t)))
    _fail(t);
  else
    q_122 = t;
  {
    ATerm d_88 = t;
    int e_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(o_122), not_null(p_122));
        LocalPopChoice(e_88);
      }
    else
      {
        t = d_88;
        t = SSL_gtr(not_null(o_122), not_null(p_122));
      }
  }
  t = not_null(q_122);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_122 = NULL;
  ATerm f_88 = t;
  int g_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_122 = NULL,u_122 = NULL,v_122 = NULL;
      if(((t_122 != NULL) && (t_122 != t)))
        _fail(t);
      else
        t_122 = t;
      if(match_cons(t, sym__2))
        {
          if(((u_122 != NULL) && (u_122 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_122 = ATgetArgument(t, 0);
          if(((v_122 != NULL) && (v_122 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(u_122);
      if(((s_122 != NULL) && (s_122 != t)))
        _fail(t);
      else
        s_122 = t;
      t = not_null(v_122);
      if(((s_122 != NULL) && (s_122 != t)))
        _fail(t);
      else
        s_122 = t;
      t = not_null(t_122);
      LocalPopChoice(g_88);
    }
  else
    {
      t = f_88;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  static ATerm v_10 (ATerm t);
  static ATerm v_10 (ATerm t)
  {
    ATerm w_122 = NULL,y_122 = NULL,z_122 = NULL;
    if(((w_122 != NULL) && (w_122 != t)))
      _fail(t);
    else
      w_122 = t;
    if(((z_122 != NULL) && (z_122 != t)))
      _fail(t);
    else
      z_122 = t;
    t = term_q_74;
    t = get_config_0_0(t);
    if(((y_122 != NULL) && (y_122 != t)))
      _fail(t);
    else
      y_122 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_122), term_j_13);
    t = geq_0_0(t);
    t = not_null(w_122);
    t = i_140(t);
    return(t);
  }
  t = try_1_0(v_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm a_123 = NULL,b_123 = NULL,c_123 = NULL,e_123 = NULL;
  if(((e_123 != NULL) && (e_123 != t)))
    _fail(t);
  else
    e_123 = t;
  t = run_time_0_0(t);
  if(((a_123 != NULL) && (a_123 != t)))
    _fail(t);
  else
    a_123 = t;
  t = not_null(e_123);
  if(((c_123 != NULL) && (c_123 != t)))
    _fail(t);
  else
    c_123 = t;
  t = term_t_12;
  t = whoami_0_0(t);
  if(((b_123 != NULL) && (b_123 != t)))
    _fail(t);
  else
    b_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_88), not_null(a_123)), term_m_13), not_null(b_123)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_t_74;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL;
  if(((h_123 != NULL) && (h_123 != t)))
    _fail(t);
  else
    h_123 = t;
  if(((i_123 != NULL) && (i_123 != t)))
    _fail(t);
  else
    i_123 = t;
  t = term_i_88;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_88, term_j_88, not_null(h_123));
  t = table_put_0_0(t);
  t = not_null(i_123);
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t)
{
  ATerm j_123 = NULL,k_123 = NULL,l_123 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((j_123 != NULL) && (j_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(j_123), not_null(t_59));
  if(((l_123 != NULL) && (l_123 != t)))
    _fail(t);
  else
    l_123 = t;
  if(((k_123 != NULL) && (k_123 != t)))
    _fail(t);
  else
    k_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(k_123));
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm m_123 = NULL,r_123 = NULL,s_123 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((m_123 != NULL) && (m_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(m_123));
  if(((s_123 != NULL) && (s_123 != t)))
    _fail(t);
  else
    s_123 = t;
  if(((r_123 != NULL) && (r_123 != t)))
    _fail(t);
  else
    r_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(r_123));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_123 = NULL,w_123 = NULL,x_123 = NULL;
  if(((t_123 != NULL) && (t_123 != t)))
    _fail(t);
  else
    t_123 = t;
  if(((w_123 != NULL) && (w_123 != t)))
    _fail(t);
  else
    w_123 = t;
  t = table_hashtable_0_0(t);
  if(((x_123 != NULL) && (x_123 != t)))
    _fail(t);
  else
    x_123 = t;
  t = lookup_table_0_1(not_null(t_123), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(x_123);
  t = hashtable_remove_0_1(not_null(t_123), t);
  t = not_null(w_123);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm a_124 = NULL;
  if(((a_124 != NULL) && (a_124 != t)))
    _fail(t);
  else
    a_124 = t;
  t = SSL_exit(not_null(a_124));
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm b_124 = NULL,e_124 = NULL,h_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_124 != NULL) && (b_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_124 = ATgetArgument(t, 0);
      if(((e_124 != NULL) && (e_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_124 != NULL) && (h_124 != t)))
    _fail(t);
  else
    h_124 = t;
  t = SSL_printnl(not_null(b_124), not_null(e_124));
  t = not_null(h_124);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL,x_10 = NULL,k_12 = NULL;
  if(((n_124 != NULL) && (n_124 != t)))
    _fail(t);
  else
    n_124 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((j_124 != NULL) && (j_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((o_124 != NULL) && (o_124 != t)))
    _fail(t);
  else
    o_124 = t;
  t = SSLgetAnnotations(not_null(n_124));
  if(((i_124 != NULL) && (i_124 != t)))
    _fail(t);
  else
    i_124 = t;
  t = not_null(j_124);
  t = a_109(t);
  if(((k_124 != NULL) && (k_124 != t)))
    _fail(t);
  else
    k_124 = t;
  if(((m_124 != NULL) && (m_124 != t)))
    _fail(t);
  else
    m_124 = t;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_124));
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  t = SSLsetAnnotations(not_null(x_10), not_null(i_124));
  if(((l_124 != NULL) && (l_124 != t)))
    _fail(t);
  else
    l_124 = t;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm r_124 = NULL;
  if(((r_124 != NULL) && (r_124 != t)))
    _fail(t);
  else
    r_124 = t;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm s_124 = NULL;
  if(((s_124 != NULL) && (s_124 != t)))
    _fail(t);
  else
    s_124 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  static ATerm t_124 (ATerm t);
  static ATerm t_124 (ATerm t)
  {
    ATerm k_88 = t;
    int l_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_123, y_10, t);
        LocalPopChoice(l_88);
      }
    else
      {
        t = k_88;
        t = Cons_2_0(z_10, t_124, t);
      }
    return(t);
  }
  t = t_124(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  t = fetch_1_0(c_144, t);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_124 = NULL,v_124 = NULL;
  if(((v_124 != NULL) && (v_124 != t)))
    _fail(t);
  else
    v_124 = t;
  if(((u_124 != NULL) && (u_124 != t)))
    _fail(t);
  else
    u_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, not_null(u_124));
  t = table_get_0_0(t);
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm m_88 = t;
  int n_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_114(t);
      LocalPopChoice(n_88);
    }
  else
    {
      t = m_88;
      {
        ATerm x_124 = NULL,y_124 = NULL;
        if(((x_124 != NULL) && (x_124 != t)))
          _fail(t);
        else
          x_124 = t;
        if(((y_124 != NULL) && (y_124 != t)))
          _fail(t);
        else
          y_124 = t;
      }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_p_88;
  t = set_config_0_0(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_q_88;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm z_124 = NULL;
  if(((z_124 != NULL) && (z_124 != t)))
    _fail(t);
  else
    z_124 = t;
  t = term_p_88;
  t = set_config_0_0(t);
  t = term_s_88;
  t = set_config_0_0(t);
  t = term_t_88;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_u_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_88 = t;
  int w_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_11, b_11, c_11, t);
      LocalPopChoice(w_88);
    }
  else
    {
      t = v_88;
      t = Option_3_0(d_11, e_11, f_11, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_125 != NULL) && (a_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_125 = ATgetArgument(t, 0);
      if(((b_125 != NULL) && (b_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(a_125), t);
  t = hashtable_get_0_1(not_null(b_125), t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL,f_125 = NULL,g_125 = NULL,n_125 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((d_125 != NULL) && (d_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_125 = ATgetArgument(t, 0);
      if(((e_125 != NULL) && (e_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_125 = ATgetArgument(t, 1);
      if(((c_125 != NULL) && (c_125 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_125 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((f_125 != NULL) && (f_125 != t)))
    _fail(t);
  else
    f_125 = t;
  if(((n_125 != NULL) && (n_125 != t)))
    _fail(t);
  else
    n_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_125), not_null(e_125));
  {
    ATerm x_88 = t;
    int y_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(y_88);
      }
    else
      {
        t = x_88;
        t = (ATerm) ATempty;
      }
  }
  if(((g_125 != NULL) && (g_125 != t)))
    _fail(t);
  else
    g_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(d_125), not_null(e_125), (ATerm) ATinsert(CheckATermList(not_null(g_125)), not_null(c_125)));
  t = table_put_0_0(t);
  t = not_null(f_125);
  return(t);
}
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t)
{
  ATerm o_125 = NULL,p_125 = NULL;
  if(((p_125 != NULL) && (p_125 != t)))
    _fail(t);
  else
    p_125 = t;
  t = term_t_12;
  t = i_145(t);
  if(((o_125 != NULL) && (o_125 != t)))
    _fail(t);
  else
    o_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_87, term_m_87, not_null(o_125));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_125 = NULL,s_125 = NULL,t_125 = NULL;
  if(((r_125 != NULL) && (r_125 != t)))
    _fail(t);
  else
    r_125 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(r_125);
      t = register_usage_1_0(e_0, t);
    }
  else
    {
      ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL,x_125 = NULL,y_125 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_125 != NULL) && (s_125 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_125 = ATgetFirst((ATermList) t);
          if(((t_125 != NULL) && (t_125 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(s_125);
      if(((v_125 != NULL) && (v_125 != t)))
        _fail(t);
      else
        v_125 = t;
      t = not_null(t_125);
      if(((u_125 != NULL) && (u_125 != t)))
        _fail(t);
      else
        u_125 = t;
      t = not_null(r_125);
      if(((y_125 != NULL) && (y_125 != t)))
        _fail(t);
      else
        y_125 = t;
      t = not_null(v_125);
      t = b_0(t);
      t = not_null(y_125);
      if(((x_125 != NULL) && (x_125 != t)))
        _fail(t);
      else
        x_125 = t;
      t = term_t_12;
      t = c_0(t);
      if(((w_125 != NULL) && (w_125 != t)))
        _fail(t);
      else
        w_125 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(u_125)), not_null(w_125));
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm a_126 = NULL;
  if(((a_126 != NULL) && (a_126 != t)))
    _fail(t);
  else
    a_126 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(a_126);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(a_126);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(a_126);
        }
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_a_89;
  t = set_config_0_0(t);
  t = term_b_89;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_c_89;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(g_11, h_11, i_11, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm b_126 = NULL,c_126 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_126 != NULL) && (b_126 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_126 = ATgetFirst((ATermList) t);
      if(((c_126 != NULL) && (c_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(c_126)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_126)));
  return(t);
}
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL,k_126 = NULL,l_126 = NULL,j_11 = NULL,l_12 = NULL;
  if(((k_126 != NULL) && (k_126 != t)))
    _fail(t);
  else
    k_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_126 != NULL) && (e_126 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_126 = ATgetFirst((ATermList) t);
      if(((f_126 != NULL) && (f_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((l_126 != NULL) && (l_126 != t)))
    _fail(t);
  else
    l_126 = t;
  t = SSLgetAnnotations(not_null(k_126));
  if(((d_126 != NULL) && (d_126 != t)))
    _fail(t);
  else
    d_126 = t;
  t = not_null(e_126);
  t = u_100(t);
  if(((g_126 != NULL) && (g_126 != t)))
    _fail(t);
  else
    g_126 = t;
  t = not_null(f_126);
  t = v_100(t);
  if(((h_126 != NULL) && (h_126 != t)))
    _fail(t);
  else
    h_126 = t;
  if(((j_126 != NULL) && (j_126 != t)))
    _fail(t);
  else
    j_126 = t;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(h_126)), not_null(g_126));
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = SSLsetAnnotations(not_null(j_11), not_null(d_126));
  if(((i_126 != NULL) && (i_126 != t)))
    _fail(t);
  else
    i_126 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm m_126 = NULL,n_126 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_126 != NULL) && (m_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_126 = ATgetArgument(t, 0);
      if(((n_126 != NULL) && (n_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_47, not_null(m_126), not_null(n_126));
  t = table_put_0_0(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL;
  if(((s_126 != NULL) && (s_126 != t)))
    _fail(t);
  else
    s_126 = t;
  if(((u_126 != NULL) && (u_126 != t)))
    _fail(t);
  else
    u_126 = t;
  if(((t_126 != NULL) && (t_126 != t)))
    _fail(t);
  else
    t_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_87, not_null(t_126));
  t = set_config_0_0(t);
  t = not_null(s_126);
  if(((r_126 != NULL) && (r_126 != t)))
    _fail(t);
  else
    r_126 = t;
  if(((q_126 != NULL) && (q_126 != t)))
    _fail(t);
  else
    q_126 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_126));
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm v_126 = NULL;
  if(((v_126 != NULL) && (v_126 != t)))
    _fail(t);
  else
    v_126 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t)
{
  ATerm p_126 = NULL;
  static ATerm m_11 (ATerm t);
  static ATerm m_11 (ATerm t)
  {
    ATerm d_89 = t;
    int e_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_89 = t;
        int g_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(g_89);
          }
        else
          {
            t = f_89;
            t = g_145(t);
            t = Cons_2_0(n_11, m_11, t);
          }
        LocalPopChoice(e_89);
      }
    else
      {
        t = d_89;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((p_126 != NULL) && (p_126 != t)))
    _fail(t);
  else
    p_126 = t;
  {
    static ATerm k_11 (ATerm t);
    static ATerm k_11 (ATerm t)
    {
      t = term_h_89;
      t = g_145(t);
      return(t);
    }
    t = try_1_0(k_11, t);
  }
  t = not_null(p_126);
  t = Cons_2_0(l_11, m_11, t);
  return(t);
}
ATerm hashtable_put_0_2 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((x_126 != NULL) && (x_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(x_126), not_null(o_59), not_null(p_59));
  if(((z_126 != NULL) && (z_126 != t)))
    _fail(t);
  else
    z_126 = t;
  if(((y_126 != NULL) && (y_126 != t)))
    _fail(t);
  else
    y_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(y_126));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm r_59, ATerm t)
{
  ATerm a_127 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((a_127 != NULL) && (a_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(a_127), not_null(r_59));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL;
  t = SSL_hashtable_create(not_null(w_59), not_null(x_59));
  if(((c_127 != NULL) && (c_127 != t)))
    _fail(t);
  else
    c_127 = t;
  if(((b_127 != NULL) && (b_127 != t)))
    _fail(t);
  else
    b_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(b_127));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm d_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL;
  if(((g_127 != NULL) && (g_127 != t)))
    _fail(t);
  else
    g_127 = t;
  t = term_i_89;
  if(((d_127 != NULL) && (d_127 != t)))
    _fail(t);
  else
    d_127 = t;
  t = not_null(g_127);
  if(((f_127 != NULL) && (f_127 != t)))
    _fail(t);
  else
    f_127 = t;
  t = term_j_89;
  if(((e_127 != NULL) && (e_127 != t)))
    _fail(t);
  else
    e_127 = t;
  t = not_null(f_127);
  t = new_hashtable_0_2(not_null(d_127), not_null(e_127), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_127 = NULL,i_127 = NULL,l_127 = NULL,m_127 = NULL;
  if(((h_127 != NULL) && (h_127 != t)))
    _fail(t);
  else
    h_127 = t;
  if(((m_127 != NULL) && (m_127 != t)))
    _fail(t);
  else
    m_127 = t;
  t = new_hashtable_0_0(t);
  if(((i_127 != NULL) && (i_127 != t)))
    _fail(t);
  else
    i_127 = t;
  t = not_null(m_127);
  if(((l_127 != NULL) && (l_127 != t)))
    _fail(t);
  else
    l_127 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(h_127), not_null(i_127), t);
  t = not_null(l_127);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_127 = NULL,q_127 = NULL;
  t = SSL_table_hashtable();
  if(((q_127 != NULL) && (q_127 != t)))
    _fail(t);
  else
    q_127 = t;
  if(((n_127 != NULL) && (n_127 != t)))
    _fail(t);
  else
    n_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(n_127));
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm k_89 = t;
    int l_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(l_56), t);
        LocalPopChoice(l_89);
      }
    else
      {
        t = k_89;
        {
          ATerm t_127 = NULL,u_127 = NULL;
          if(((t_127 != NULL) && (t_127 != t)))
            _fail(t);
          else
            t_127 = t;
          if(((u_127 != NULL) && (u_127 != t)))
            _fail(t);
          else
            u_127 = t;
          t = not_null(l_56);
          t = table_create_0_0(t);
          t = not_null(u_127);
          t = hashtable_get_0_1(not_null(l_56), t);
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL;
  if(((y_127 != NULL) && (y_127 != t)))
    _fail(t);
  else
    y_127 = t;
  if(match_cons(t, sym__3))
    {
      if(((v_127 != NULL) && (v_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_127 = ATgetArgument(t, 0);
      if(((w_127 != NULL) && (w_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_127 = ATgetArgument(t, 1);
      if(((x_127 != NULL) && (x_127 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        x_127 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(v_127), t);
  t = hashtable_put_0_2(not_null(w_127), not_null(x_127), t);
  t = not_null(y_127);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  ATerm a_128 = NULL,b_128 = NULL,c_128 = NULL;
  if(((c_128 != NULL) && (c_128 != t)))
    _fail(t);
  else
    c_128 = t;
  t = term_m_89;
  t = table_put_0_0(t);
  t = not_null(c_128);
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      ATerm n_89 = t;
      int o_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_145(t);
          LocalPopChoice(o_89);
        }
      else
        {
          t = n_89;
          {
            ATerm p_89 = t;
            int q_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(q_89);
              }
            else
              {
                t = p_89;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_11, t);
  }
  {
    static ATerm p_11 (ATerm t);
    static ATerm p_11 (ATerm t)
    {
      ATerm r_89 = t;
      int s_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm h_128 (ATerm d_128, ATerm t);
          static ATerm h_128 (ATerm d_128, ATerm t)
          {
            ATerm e_128 = NULL;
            t = not_null(d_128);
            if(((e_128 != NULL) && (e_128 != t)))
              _fail(t);
            else
              e_128 = t;
            t = not_null(d_128);
            {
              ATerm t_89 = t;
              int u_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_88;
                  t = get_config_0_0(t);
                  LocalPopChoice(u_89);
                }
              else
                {
                  t = t_89;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(e_128);
            t = e_145(t);
            t = term_t_74;
            t = exit_0_0(t);
            return(t);
          }
          ATerm f_128 = NULL;
          if(((f_128 != NULL) && (f_128 != t)))
            _fail(t);
          else
            f_128 = t;
          {
            ATerm v_89 = t;
            int w_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_128(not_null(f_128), t);
                LocalPopChoice(w_89);
              }
            else
              {
                t = v_89;
                {
                  ATerm g_128 = NULL;
                  t = not_null(f_128);
                  if(((g_128 != NULL) && (g_128 != t)))
                    _fail(t);
                  else
                    g_128 = t;
                  t = term_o_88;
                  t = get_config_0_0(t);
                  t = not_null(g_128);
                  t = f_145(t);
                  t = term_t_74;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(s_89);
        }
      else
        {
          t = r_89;
          {
            static ATerm q_11 (ATerm t);
            static ATerm q_11 (ATerm t)
            {
              static ATerm r_11 (ATerm t);
              static ATerm r_11 (ATerm t)
              {
                if(((a_128 != NULL) && (a_128 != t)))
                  _fail(t);
                else
                  a_128 = t;
                return(t);
              }
              t = Undefined_1_0(r_11, t);
              return(t);
            }
            t = option_defined_1_0(q_11, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_128)), term_x_89));
          t = printnl_0_0(t);
          t = e_145(t);
          t = term_j_13;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(p_11, t);
  }
  if(((b_128 != NULL) && (b_128 != t)))
    _fail(t);
  else
    b_128 = t;
  t = term_l_87;
  t = table_destroy_0_0(t);
  t = not_null(b_128);
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  t = parse_options_3_0(g_143, h_143, i_143, t);
  t = store_options_0_0(t);
  t = j_143(t);
  {
    ATerm y_89 = t;
    int z_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(z_89);
      }
    else
      {
        t = y_89;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t)
{
  t = option_wrap_5_0(c_143, d_143, system_about_0_0, e_143, f_143, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm j_128 = NULL;
  if(((j_128 != NULL) && (j_128 != t)))
    _fail(t);
  else
    j_128 = t;
  return(t);
}
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t)
{
  t = option_wrap_4_0(a_143, system_usage_0_0, s_11, b_143, t);
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t)
{
  static ATerm t_11 (ATerm t);
  static ATerm t_11 (ATerm t)
  {
    ATerm a_90 = t;
    int b_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_152(t);
        LocalPopChoice(b_90);
      }
    else
      {
        t = a_90;
        t = xtc_contract_options_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(t_11, g_152, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm o_152 (ATerm), ATerm p_152 (ATerm), ATerm t)
{
  static ATerm u_11 (ATerm t);
  static ATerm v_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    ATerm c_90 = t;
    int d_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_152(t);
        LocalPopChoice(d_90);
      }
    else
      {
        t = c_90;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm v_11 (ATerm t)
  {
    t = xtc_io_1_0(p_152, t);
    return(t);
  }
  t = xtc_wrap_2_0(u_11, v_11, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm m_152 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, m_152, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = xtc_transform_2_0(x_11, y_11, t);
  t = xtc_transform_1_0(z_11, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_e_90;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_86);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_f_90;
  return(t);
}
ATerm main_inherit_test_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(w_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_inherit_test_0_0(t);
  return(t);
}
