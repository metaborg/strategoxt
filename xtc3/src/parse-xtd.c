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
static ATerm term_d_91;
static ATerm term_c_91;
static ATerm term_b_91;
static ATerm term_a_91;
static ATerm term_z_90;
static ATerm term_q_90;
static ATerm term_f_90;
static ATerm term_c_90;
static ATerm term_b_90;
static ATerm term_a_90;
static ATerm term_v_89;
static ATerm term_u_89;
static ATerm term_t_89;
static ATerm term_s_89;
static ATerm term_n_89;
static ATerm term_m_89;
static ATerm term_l_89;
static ATerm term_k_89;
static ATerm term_j_89;
static ATerm term_i_89;
static ATerm term_h_89;
static ATerm term_c_89;
static ATerm term_b_89;
static ATerm term_a_89;
static ATerm term_q_88;
static ATerm term_h_88;
static ATerm term_g_88;
static ATerm term_f_88;
static ATerm term_e_88;
static ATerm term_d_88;
static ATerm term_a_88;
static ATerm term_u_87;
static ATerm term_t_87;
static ATerm term_s_87;
static ATerm term_p_87;
static ATerm term_o_87;
static ATerm term_n_87;
static ATerm term_m_87;
static ATerm term_l_87;
static ATerm term_k_87;
static ATerm term_d_87;
static ATerm term_a_87;
static ATerm term_z_86;
static ATerm term_y_86;
static ATerm term_x_86;
static ATerm term_w_86;
static ATerm term_p_86;
static ATerm term_o_86;
static ATerm term_n_86;
static ATerm term_m_86;
static ATerm term_l_86;
static ATerm term_k_86;
static ATerm term_j_86;
static ATerm term_i_86;
static ATerm term_h_86;
static ATerm term_g_86;
static ATerm term_f_86;
static ATerm term_z_85;
static ATerm term_w_85;
static ATerm term_w_84;
static ATerm term_q_84;
static ATerm term_l_84;
static ATerm term_k_84;
static ATerm term_d_84;
static ATerm term_a_84;
static ATerm term_z_83;
static ATerm term_y_83;
static ATerm term_j_83;
static ATerm term_i_83;
static ATerm term_x_82;
static ATerm term_w_82;
static ATerm term_t_82;
static ATerm term_s_82;
static ATerm term_k_82;
static ATerm term_h_82;
static ATerm term_n_81;
static ATerm term_l_81;
static ATerm term_k_81;
static ATerm term_j_81;
static ATerm term_i_80;
static ATerm term_h_80;
static ATerm term_f_80;
static ATerm term_u_79;
static ATerm term_o_79;
static ATerm term_n_79;
static ATerm term_m_79;
static ATerm term_l_79;
static ATerm term_k_79;
static ATerm term_u_75;
static ATerm term_t_75;
static ATerm term_s_75;
static ATerm term_r_75;
static ATerm term_q_75;
static ATerm term_p_75;
static ATerm term_o_75;
static ATerm term_n_75;
static ATerm term_m_75;
static ATerm term_x_74;
static ATerm term_q_74;
static ATerm term_n_74;
static ATerm term_m_74;
static ATerm term_c_74;
static ATerm term_e_72;
static ATerm term_d_72;
static ATerm term_c_72;
static ATerm term_z_71;
static ATerm term_y_71;
static ATerm term_x_71;
static ATerm term_u_71;
static ATerm term_s_71;
static ATerm term_r_71;
static ATerm term_q_71;
static ATerm term_p_71;
static ATerm term_x_70;
static ATerm term_p_70;
static ATerm term_t_69;
static ATerm term_z_66;
static ATerm term_y_57;
static ATerm term_x_57;
static ATerm term_k_57;
static ATerm term_j_57;
static ATerm term_i_57;
static ATerm term_h_57;
static ATerm term_g_57;
static ATerm term_f_57;
static ATerm term_e_57;
static ATerm term_d_57;
static ATerm term_b_57;
static ATerm term_a_57;
static ATerm term_w_56;
static ATerm term_v_56;
static ATerm term_u_56;
static ATerm term_t_56;
static ATerm term_s_56;
static ATerm term_r_56;
static ATerm term_q_56;
static ATerm term_p_56;
static ATerm term_o_56;
static ATerm term_n_56;
static ATerm term_m_56;
static ATerm term_e_56;
static ATerm term_d_56;
static ATerm term_a_55;
static ATerm term_i_53;
static ATerm term_d_53;
static ATerm term_a_52;
static ATerm term_r_50;
static ATerm term_f_50;
static ATerm term_e_49;
static ATerm term_d_49;
static ATerm term_c_49;
static ATerm term_b_49;
static ATerm term_z_48;
static ATerm term_l_41;
static ATerm term_h_41;
static ATerm term_z_40;
static ATerm term_b_40;
static ATerm term_j_38;
static ATerm term_r_37;
static ATerm term_g_37;
static ATerm term_f_37;
static ATerm term_v_36;
static ATerm term_s_36;
static ATerm term_h_35;
static ATerm term_d_35;
static ATerm term_c_35;
static ATerm term_w_34;
static ATerm term_t_34;
static ATerm term_s_34;
static ATerm term_k_34;
static ATerm term_j_34;
static ATerm term_i_34;
static ATerm term_h_34;
static ATerm term_g_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_a_34;
static ATerm term_z_33;
static ATerm term_w_33;
static ATerm term_v_33;
static ATerm term_u_33;
static ATerm term_t_33;
static ATerm term_s_33;
static ATerm term_r_33;
static ATerm term_q_33;
static ATerm term_p_33;
static ATerm term_o_33;
static ATerm term_m_33;
static ATerm term_i_32;
static ATerm term_m_31;
static ATerm term_l_31;
static ATerm term_i_31;
static ATerm term_h_31;
static ATerm term_b_30;
static ATerm term_x_29;
static ATerm term_v_28;
static ATerm term_u_28;
static ATerm term_d_28;
static ATerm term_c_28;
static ATerm term_i_27;
static ATerm term_h_27;
static ATerm term_r_26;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_y_23;
static ATerm term_x_23;
static ATerm term_w_23;
static ATerm term_f_23;
static ATerm term_e_23;
static ATerm term_d_23;
static ATerm term_u_22;
static ATerm term_o_22;
static ATerm term_n_22;
static ATerm term_m_22;
static ATerm term_l_22;
static ATerm term_k_22;
static ATerm term_j_22;
static ATerm term_i_22;
static ATerm term_h_22;
static ATerm term_g_22;
static ATerm term_f_22;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_c_22;
static ATerm term_b_22;
static ATerm term_a_22;
static ATerm term_z_21;
static ATerm term_y_21;
static ATerm term_x_21;
static ATerm term_w_21;
static ATerm term_v_21;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_s_21;
static ATerm term_r_21;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_o_21;
static ATerm term_n_21;
static ATerm term_m_21;
static ATerm term_l_21;
static ATerm term_k_21;
static ATerm term_j_21;
static ATerm term_i_21;
static ATerm term_h_21;
static ATerm term_g_21;
static ATerm term_f_21;
static ATerm term_e_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_u_20;
static ATerm term_t_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_q_20;
static ATerm term_p_20;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_k_20;
static ATerm term_j_20;
static ATerm term_i_20;
static ATerm term_h_20;
static ATerm term_g_20;
static ATerm term_f_20;
static ATerm term_e_20;
static ATerm term_d_20;
static ATerm term_y_19;
static ATerm term_x_19;
static ATerm term_w_19;
static ATerm term_v_19;
static ATerm term_u_19;
static ATerm term_q_19;
static ATerm term_p_19;
static ATerm term_o_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_x_18;
static ATerm term_v_18;
static ATerm term_q_18;
static ATerm term_l_18;
static ATerm term_f_18;
static ATerm term_d_18;
static ATerm term_a_18;
static ATerm term_x_17;
static ATerm term_w_17;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_t_17;
static ATerm term_s_17;
static ATerm term_r_17;
static ATerm term_k_17;
static ATerm term_j_17;
static ATerm term_i_17;
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_y_16;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_t_16;
static ATerm term_s_16;
static ATerm term_r_16;
static ATerm term_m_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_h_16;
static ATerm term_g_16;
static ATerm term_f_16;
static ATerm term_e_16;
static ATerm term_b_16;
static ATerm term_p_15;
static ATerm term_i_15;
static ATerm term_h_15;
static ATerm term_g_15;
static ATerm term_y_14;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_q_14;
static ATerm term_n_14;
static ATerm term_j_14;
static ATerm term_b_14;
static ATerm term_y_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_x_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-transform", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_n_14, term_j_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_String_1, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_16, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_String_1, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_16, term_l_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_String_1, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_16, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_String_1, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_16, term_x_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_String_1, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_16, term_e_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_String_1, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_e_16, term_j_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Template_2, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_s_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_u_19, term_e_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_h_20, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_l_20, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_p_20, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_20, term_x_20, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_f_21, term_g_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_21, term_j_21, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_21, term_n_21, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_22, term_d_22, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_22, term_h_22, term_i_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_22, term_l_22, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_22, term_u_22, term_d_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_23, term_w_23, term_x_23);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_24, term_v_24, term_r_26);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_27, term_c_28, term_d_28);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_28, term_x_29, term_b_30);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_31, term_l_31, term_m_31);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_33, term_o_33, term_p_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_33, term_s_33, term_t_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_33, term_w_33, term_z_33);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_34, term_d_34, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_34, term_j_34, term_k_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_34, term_w_34, term_c_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_String_1, term_t_14);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Some_1, term_z_48);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_File_1, term_b_49);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Input_1, term_c_49);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Some_1, term_d_49);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_f_50);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym_Type_1, term_e_56);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym_Some_1, term_m_56);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym_Default_1, term_o_56);
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_Some_1, term_p_56);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_r_56);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_t_56);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_d_19);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(sym_Some_1, term_a_57);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym_String_1, term_y_13);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym_Some_1, term_d_57);
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym_File_1, term_e_57);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym_Output_1, term_f_57);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym_Some_1, term_g_57);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(sym_Streams_3, term_e_49, term_h_57, term_u_17);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(sym_Exec_1, term_i_57);
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_j_57);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(sym__2, term_q_71, term_r_71);
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(sym__2, term_d_72, term_c_13);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_w_82));
  term_w_82 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(sym__2, term_j_38, term_z_83);
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Broken XTC dependencies: ", 0, ATtrue));
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--preload", 0, ATtrue));
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--dependencies", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(ATmakeSymbol("All XTC registrations available", 0, ATtrue));
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(sym__2, term_u_79, term_f_80);
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_80);
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(sym__2, term_f_37, term_c_13);
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(sym__2, term_x_86, term_c_13);
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_87));
  term_d_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(sym__2, term_z_85, (ATerm) ATempty);
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload", 0, ATtrue));
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(sym__2, term_l_87, term_c_13);
  ATprotect(&(term_n_87));
  term_n_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload     Toggle XTC preloading (default: on)", 0, ATtrue));
  ATprotect(&(term_o_87));
  term_o_87 = (ATerm) ATmakeAppl(sym__2, term_f_86, term_c_13);
  ATprotect(&(term_p_87));
  term_p_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--dependencies   Check XTC dependencies and exit", 0, ATtrue));
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeAppl(sym__2, term_x_71, term_c_13);
  ATprotect(&(term_t_87));
  term_t_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(sym__2, term_f_88, term_g_88);
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_89));
  term_c_89 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_89));
  term_i_89 = (ATerm) ATmakeAppl(sym__2, term_h_89, term_c_13);
  ATprotect(&(term_j_89));
  term_j_89 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(sym__2, term_k_89, term_c_13);
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_89));
  term_s_89 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_89));
  term_t_89 = (ATerm) ATmakeAppl(sym__2, term_s_89, term_c_13);
  ATprotect(&(term_u_89));
  term_u_89 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_89));
  term_v_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_90));
  term_a_90 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_90));
  term_c_90 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_90));
  term_f_90 = (ATerm) ATmakeAppl(sym__3, term_f_88, term_g_88, (ATerm) ATempty);
  ATprotect(&(term_q_90));
  term_q_90 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_90));
  term_z_90 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_a_91));
  term_a_91 = (ATerm) ATmakeAppl(ATmakeSymbol("Xtd.tbl", 0, ATtrue));
  ATprotect(&(term_b_91));
  term_b_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_c_91));
  term_c_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_transform_1_0 (ATerm a_153 (ATerm), ATerm t);
ATerm xtc_find_file_0_0 (ATerm t);
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
ATerm copy_to_1_0 (ATerm l_3 (ATerm), ATerm t);
static ATerm b_25 (ATerm w_24, ATerm t);
static ATerm g_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm table_pop_rm_0_0 (ATerm t);
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t);
ATerm remove_file_0_0 (ATerm t);
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm v_122 (ATerm), ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm k_3, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t);
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t);
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm xtc_search_1_0 (ATerm j_3 (ATerm), ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_register_0_1 (ATerm i_3, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t);
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm notice_0_1 (ATerm x_78, ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t);
ATerm init_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm z_133 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm err_0_1 (ATerm v_78, ATerm t);
static ATerm h_36 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm i_36 (ATerm c_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
static ATerm g_38 (ATerm s_37, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
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
static ATerm s_2 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm exec_http_0_1 (ATerm x_87, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm h_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm g_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm k_45 (ATerm q_44, ATerm r_44, ATerm t);
static ATerm l_45 (ATerm b_45, ATerm c_45, ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm v_46 (ATerm s_45, ATerm t_45, ATerm t);
static ATerm w_46 (ATerm k_46, ATerm l_46, ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm v_49 (ATerm b_48, ATerm c_48, ATerm e_48, ATerm t);
static ATerm w_49 (ATerm s_48, ATerm t_48, ATerm u_48, ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm u_51 (ATerm g_50, ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm l_50, ATerm m_50, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t);
static ATerm b_64 (ATerm q_58, ATerm r_58, ATerm s_58, ATerm t_58, ATerm u_58, ATerm t);
static ATerm c_64 (ATerm g_59, ATerm h_59, ATerm i_59, ATerm j_59, ATerm k_59, ATerm t);
static ATerm d_64 (ATerm e_60, ATerm f_60, ATerm g_60, ATerm h_60, ATerm i_60, ATerm t);
static ATerm e_64 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm x_60, ATerm y_60, ATerm t);
static ATerm f_64 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm k_61, ATerm l_61, ATerm t);
static ATerm g_64 (ATerm x_61, ATerm y_61, ATerm z_61, ATerm a_62, ATerm b_62, ATerm t);
static ATerm h_64 (ATerm l_62, ATerm m_62, ATerm n_62, ATerm o_62, ATerm p_62, ATerm t);
static ATerm i_64 (ATerm b_63, ATerm c_63, ATerm d_63, ATerm e_63, ATerm f_63, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm f_3, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm e_3, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm c_3, ATerm d_3, ATerm t);
static ATerm c_5 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm d_1 (ATerm), ATerm i_1 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t);
static ATerm k_5 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm w_0, ATerm x_0, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm g_80 (ATerm x_75, ATerm y_75, ATerm z_75, ATerm t);
static ATerm j_80 (ATerm m_76, ATerm n_76, ATerm t);
static ATerm k_80 (ATerm z_76, ATerm t);
static ATerm l_80 (ATerm e_77, ATerm t);
static ATerm m_80 (ATerm j_77, ATerm k_77, ATerm l_77, ATerm t);
static ATerm n_80 (ATerm r_77, ATerm s_77, ATerm t_77, ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t);
ATerm warn_0_1 (ATerm w_78, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t);
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t);
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm if_log_severity_1_1 (ATerm p_150 (ATerm), ATerm f_79, ATerm t);
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t);
ATerm dbg_0_1 (ATerm y_78, ATerm t);
static ATerm h_7 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t);
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t);
ATerm string_tokenize_1_0 (ATerm c_133 (ATerm), ATerm t);
ATerm string_tokenize_0_1 (ATerm d_46, ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
static ATerm l_107 (ATerm e_107, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm xtc_command_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm close_0_0 (ATerm t);
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t);
ATerm is_url_http_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
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
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_131 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
ATerm xtc_missing_dependencies_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm xtc_preload_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm general_options_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm aterm_output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm xtc_dependency_options_0_0 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm k_145 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm j_145 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm t_10 (ATerm t);
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
static ATerm c_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t);
static ATerm e_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm try_1_0 (ATerm x_114 (ATerm), ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
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
static ATerm a_12 (ATerm t);
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t);
ATerm xtc_wrap_2_1 (ATerm h_152 (ATerm), ATerm i_152 (ATerm), ATerm d_96, ATerm t);
ATerm xtc_io_wrap_2_1 (ATerm t_152 (ATerm), ATerm u_152 (ATerm), ATerm f_96, ATerm t);
ATerm xtc_io_wrap_1_1 (ATerm n_152 (ATerm), ATerm e_96, ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm main_parse_xtd_0_0 (ATerm t);
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
ATerm xtc_find_file_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(((q_22 != NULL) && (q_22 != t)))
    _fail(t);
  else
    q_22 = t;
  t = xtc_find_0_0(t);
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_22));
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  if(((t_22 != NULL) && (t_22 != t)))
    _fail(t);
  else
    t_22 = t;
  t = xtc_new_file_0_0(t);
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(s_22));
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_22));
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
  ATerm x_22 = NULL;
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm b_153 (ATerm), ATerm c_153 (ATerm), ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_22 = NULL,w_22 = NULL;
      if(((w_22 != NULL) && (w_22 != t)))
        _fail(t);
      else
        w_22 = t;
      t = term_x_12;
      if(((v_22 != NULL) && (v_22 != t)))
        _fail(t);
      else
        v_22 = t;
      t = not_null(w_22);
      t = dbg_0_1(not_null(v_22), t);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(d_0, t);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = stdin_0_0(t);
          }
      }
      LocalPopChoice(w_12);
      t = xtc_transform_file_2_0(b_153, c_153, t);
    }
  else
    {
      t = v_12;
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
  ATerm y_22 = NULL,z_22 = NULL;
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  t = get_errno_0_0(t);
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = (ATerm) ATmakeAppl(sym_ErrorNumber_1, not_null(y_22));
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_23 != NULL) && (b_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_23 = ATgetArgument(t, 0);
      if(((a_23 != NULL) && (a_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_rename(not_null(b_23), not_null(a_23));
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm c_23 = NULL;
          t = get_last_error_0_0(t);
          if(match_cons(t, sym_ErrorNumber_1))
            {
              if(((c_23 != NULL) && (c_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_c_13;
          t = EXDEV_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), not_null(a_23));
          t = copy_file_0_0(t);
          t = not_null(b_23);
          t = remove_file_0_0(t);
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm m_3 (ATerm), ATerm t)
{
  static ATerm u_23 (ATerm g_23, ATerm h_23, ATerm t);
  static ATerm v_23 (ATerm k_23, ATerm l_23, ATerm t);
  static ATerm u_23 (ATerm g_23, ATerm h_23, ATerm t)
  {
    ATerm i_23 = NULL,j_23 = NULL;
    t = not_null(g_23);
    if(((i_23 != NULL) && (i_23 != t)))
      _fail(t);
    else
      i_23 = t;
    t = not_null(h_23);
    if(((j_23 != NULL) && (j_23 != t)))
      _fail(t);
    else
      j_23 = t;
    t = m_3(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), term_d_13);
    t = copy_file_0_0(t);
    t = not_null(i_23);
    t = remove_file_0_0(t);
    t = term_d_13;
    return(t);
  }
  static ATerm v_23 (ATerm k_23, ATerm l_23, ATerm t)
  {
    ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
    t = not_null(k_23);
    if(((m_23 != NULL) && (m_23 != t)))
      _fail(t);
    else
      m_23 = t;
    t = not_null(l_23);
    if(((o_23 != NULL) && (o_23 != t)))
      _fail(t);
    else
      o_23 = t;
    t = m_3(t);
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    {
      ATerm e_13 = t;
      if((PushChoice() == 0))
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              {
                ATerm p_23 = NULL;
                if(((p_23 != NULL) && (p_23 != t)))
                  _fail(t);
                else
                  p_23 = t;
                if(((m_23 != NULL) && (m_23 != t)))
                  _fail(t);
                else
                  m_23 = t;
                t = not_null(p_23);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_13;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(n_23));
    t = rename_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_23));
    return(t);
  }
  ATerm q_23 = NULL,r_23 = NULL;
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_23(not_null(r_23), not_null(q_23), t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_23(not_null(r_23), not_null(q_23), t);
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              {
                ATerm s_23 = NULL,t_23 = NULL;
                t = not_null(r_23);
                if(((s_23 != NULL) && (s_23 != t)))
                  _fail(t);
                else
                  s_23 = t;
                t = not_null(q_23);
                if(((t_23 != NULL) && (t_23 != t)))
                  _fail(t);
                else
                  t_23 = t;
                t = m_3(t);
                if(((s_23 != NULL) && (s_23 != t)))
                  _fail(t);
                else
                  s_23 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_23));
              }
            }
        }
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm l_3 (ATerm), ATerm t)
{
  static ATerm s_24 (ATerm z_23, ATerm a_24, ATerm t);
  static ATerm t_24 (ATerm e_24, ATerm f_24, ATerm t);
  static ATerm s_24 (ATerm z_23, ATerm a_24, ATerm t)
  {
    ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
    t = not_null(z_23);
    if(((b_24 != NULL) && (b_24 != t)))
      _fail(t);
    else
      b_24 = t;
    t = not_null(a_24);
    if(((d_24 != NULL) && (d_24 != t)))
      _fail(t);
    else
      d_24 = t;
    t = l_3(t);
    if(((c_24 != NULL) && (c_24 != t)))
      _fail(t);
    else
      c_24 = t;
    {
      ATerm l_13 = t;
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          LocalPopChoice(m_13);
        }
      else
        {
          t = l_13;
          t = stderr_0_0(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), not_null(c_24));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_24));
    return(t);
  }
  static ATerm t_24 (ATerm e_24, ATerm f_24, ATerm t)
  {
    ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
    t = not_null(e_24);
    if(((g_24 != NULL) && (g_24 != t)))
      _fail(t);
    else
      g_24 = t;
    t = not_null(f_24);
    if(((i_24 != NULL) && (i_24 != t)))
      _fail(t);
    else
      i_24 = t;
    t = l_3(t);
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    {
      ATerm n_13 = t;
      if((PushChoice() == 0))
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = q_13;
                    {
                      ATerm j_24 = NULL;
                      if(((j_24 != NULL) && (j_24 != t)))
                        _fail(t);
                      else
                        j_24 = t;
                      if(((g_24 != NULL) && (g_24 != t)))
                        _fail(t);
                      else
                        g_24 = t;
                      t = not_null(j_24);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_13;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), not_null(h_24));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_24));
    return(t);
  }
  ATerm k_24 = NULL,l_24 = NULL;
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  if(match_cons(t, sym_URL_1))
    {
      l_24 = ATgetArgument(t, 0);
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = NULL,n_24 = NULL;
            t = not_null(l_24);
            if(((m_24 != NULL) && (m_24 != t)))
              _fail(t);
            else
              m_24 = t;
            t = not_null(k_24);
            if(((n_24 != NULL) && (n_24 != t)))
              _fail(t);
            else
              n_24 = t;
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(m_24));
            t = read_from_0_0(t);
            t = rename_to_1_0(l_3, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(m_24));
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm o_24 = NULL,p_24 = NULL;
              t = not_null(l_24);
              if(((o_24 != NULL) && (o_24 != t)))
                _fail(t);
              else
                o_24 = t;
              t = not_null(k_24);
              if(((p_24 != NULL) && (p_24 != t)))
                _fail(t);
              else
                p_24 = t;
              t = l_3(t);
              if(((o_24 != NULL) && (o_24 != t)))
                _fail(t);
              else
                o_24 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(o_24));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((l_24 != NULL) && (l_24 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_24(not_null(l_24), not_null(k_24), t);
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
                  t = t_24(not_null(l_24), not_null(k_24), t);
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  {
                    ATerm q_24 = NULL,r_24 = NULL;
                    t = not_null(l_24);
                    if(((q_24 != NULL) && (q_24 != t)))
                      _fail(t);
                    else
                      q_24 = t;
                    t = not_null(k_24);
                    if(((r_24 != NULL) && (r_24 != t)))
                      _fail(t);
                    else
                      r_24 = t;
                    t = l_3(t);
                    if(((q_24 != NULL) && (q_24 != t)))
                      _fail(t);
                    else
                      q_24 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_24));
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_25 (ATerm w_24, ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  t = not_null(w_24);
  if(((y_24 != NULL) && (y_24 != t)))
    _fail(t);
  else
    y_24 = t;
  t = term_y_13;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = term_d_13;
      }
  }
  if(((x_24 != NULL) && (x_24 != t)))
    _fail(t);
  else
    x_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, not_null(x_24));
  t = copy_file_0_0(t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_13;
      t = get_config_0_0(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = term_d_13;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  if(((z_24 != NULL) && (z_24 != t)))
    _fail(t);
  else
    z_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = b_25(not_null(z_24), t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((a_25 != NULL) && (a_25 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(z_24);
      t = copy_to_1_0(g_0, t);
    }
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_25 != NULL) && (d_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_25 = ATgetArgument(t, 0);
      if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), not_null(e_25));
        t = table_get_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_14 = ATgetFirst((ATermList) t);
            if(((c_25 != NULL) && (c_25 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              c_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_14);
        t = (ATerm) ATmakeAppl(sym__3, not_null(d_25), not_null(e_25), not_null(c_25));
        t = table_put_0_0(t);
      }
    else
      {
        t = e_14;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), not_null(e_25));
        t = table_remove_0_0(t);
      }
  }
  t = not_null(f_25);
  return(t);
}
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  t = t_111(t);
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), term_j_14);
        t = table_get_0_0(t);
        {
          ATerm k_14 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_14;
            }
        }
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((h_25 != NULL) && (h_25 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        h_25 = ATgetFirst((ATermList) t);
      if(((g_25 != NULL) && (g_25 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(i_25), term_j_14, not_null(g_25));
  t = table_put_0_0(t);
  t = not_null(h_25);
  {
    static ATerm i_0 (ATerm t);
    static ATerm i_0 (ATerm t)
    {
      ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
      if(((k_25 != NULL) && (k_25 != t)))
        _fail(t);
      else
        k_25 = t;
      if(((m_25 != NULL) && (m_25 != t)))
        _fail(t);
      else
        m_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), not_null(k_25));
      t = table_pop_rm_0_0(t);
      if(((l_25 != NULL) && (l_25 != t)))
        _fail(t);
      else
        l_25 = t;
      return(t);
    }
    t = map_1_0(i_0, t);
  }
  t = not_null(j_25);
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm n_25 = NULL;
  if(((n_25 != NULL) && (n_25 != t)))
    _fail(t);
  else
    n_25 = t;
  t = SSL_remove(not_null(n_25));
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  t = s_111(t);
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), term_j_14);
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATempty;
      }
  }
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(o_25), term_j_14, (ATerm) ATinsert(CheckATermList(not_null(q_25)), (ATerm) ATempty));
  t = table_put_0_0(t);
  t = not_null(p_25);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  static ATerm l_0 (ATerm t);
  static ATerm l_0 (ATerm t)
  {
    ATerm u_25 = NULL;
    if(((u_25 != NULL) && (u_25 != t)))
      _fail(t);
    else
      u_25 = t;
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_14;
          t = table_get_0_0(t);
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_25 != NULL) && (t_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_25 = ATgetFirst((ATermList) t);
        if(((s_25 != NULL) && (s_25 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          s_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = not_null(t_25);
    t = map_1_0(n_0, t);
    t = not_null(u_25);
    t = end_scope_1_0(q_0, t);
    return(t);
  }
  t = begin_scope_1_0(j_0, t);
  t = restore_always_2_0(t_151, l_0, t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t)
{
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
        if(((v_25 != NULL) && (v_25 != t)))
          _fail(t);
        else
          v_25 = t;
        if(((x_25 != NULL) && (x_25 != t)))
          _fail(t);
        else
          x_25 = t;
        t = term_t_14;
        t = get_config_0_0(t);
        if(((w_25 != NULL) && (w_25 != t)))
          _fail(t);
        else
          w_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_25));
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = term_b_14;
      }
    t = v_152(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  if(((y_25 != NULL) && (y_25 != t)))
    _fail(t);
  else
    y_25 = t;
  if(((c_26 != NULL) && (c_26 != t)))
    _fail(t);
  else
    c_26 = t;
  t = v_122(t);
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  t = not_null(c_26);
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_26)), not_null(z_25)));
  t = printnl_0_0(t);
  t = not_null(y_25);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm d_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((d_26 != NULL) && (d_26 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        d_26 = ATgetFirst((ATermList) t);
      {
        ATerm v_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(d_26);
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_26 != NULL) && (f_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_26 = ATgetArgument(t, 0);
      if(((e_26 != NULL) && (e_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  t = not_null(f_26);
  {
    ATerm w_14 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_14;
      }
  }
  t = not_null(i_26);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      if(((g_26 != NULL) && (g_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), not_null(g_26));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  t = term_y_14;
  t = table_getlist_0_0(t);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(j_26));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(((o_26 != NULL) && (o_26 != t)))
    _fail(t);
  else
    o_26 = t;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = not_null(o_26);
  if(((q_26 != NULL) && (q_26 != t)))
    _fail(t);
  else
    q_26 = t;
  t = SSL_explode_term(not_null(q_26));
  if(match_cons(t, sym__2))
    {
      ATerm b_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_15 = ATgetArgument(t, 1);
        if(((ATgetType(c_15) == AT_LIST) && !(ATisEmpty(c_15))))
          {
            if(((l_26 != NULL) && (l_26 != ATgetFirst((ATermList) c_15))))
              _fail(ATgetFirst((ATermList) c_15));
            else
              l_26 = ATgetFirst((ATermList) c_15);
            {
              ATerm d_15 = (ATerm) ATgetNext((ATermList) c_15);
              if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
                {
                  if(((n_26 != NULL) && (n_26 != ATgetFirst((ATermList) d_15))))
                    _fail(ATgetFirst((ATermList) d_15));
                  else
                    n_26 = ATgetFirst((ATermList) d_15);
                  if(((m_26 != NULL) && (m_26 != (ATerm) ATgetNext((ATermList) d_15))))
                    _fail((ATerm) ATgetNext((ATermList) d_15));
                  else
                    m_26 = (ATerm) ATgetNext((ATermList) d_15);
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
  t = not_null(n_26);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  t = not_null(u_26);
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      y_26 = ATgetArgument(t, 0);
      t = not_null(y_26);
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = not_null(x_26);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_26 = ATgetArgument(t, 0);
          if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(y_26);
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = not_null(z_26);
      if(((s_26 != NULL) && (s_26 != t)))
        _fail(t);
      else
        s_26 = t;
      t = not_null(x_26);
    }
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
        t = not_null(u_26);
        if(((e_27 != NULL) && (e_27 != t)))
          _fail(t);
        else
          e_27 = t;
        t = term_g_15;
        if(((d_27 != NULL) && (d_27 != t)))
          _fail(t);
        else
          d_27 = t;
        t = not_null(e_27);
        t = xtc_query_one_2_1(v_150, w_150, not_null(d_27), t);
        if(((a_27 != NULL) && (a_27 != t)))
          _fail(t);
        else
          a_27 = t;
        t = not_null(u_26);
        if(((c_27 != NULL) && (c_27 != t)))
          _fail(t);
        else
          c_27 = t;
        t = term_h_15;
        if(((b_27 != NULL) && (b_27 != t)))
          _fail(t);
        else
          b_27 = t;
        t = not_null(c_27);
        t = dbg_0_1(not_null(b_27), t);
        t = not_null(a_27);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm f_27 = NULL,g_27 = NULL;
          t = not_null(t_26);
          if(((g_27 != NULL) && (g_27 != t)))
            _fail(t);
          else
            g_27 = t;
          t = term_i_15;
          if(((f_27 != NULL) && (f_27 != t)))
            _fail(t);
          else
            f_27 = t;
          t = not_null(g_27);
          t = xtc_query_one_2_1(v_150, w_150, not_null(f_27), t);
          t = xtc_cache_put_0_1(not_null(u_26), t);
        }
      }
  }
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm k_3, ATerm t)
{
  static ATerm t_27 (ATerm j_27, ATerm t);
  static ATerm u_27 (ATerm p_27, ATerm t);
  static ATerm t_27 (ATerm j_27, ATerm t)
  {
    ATerm k_27 = NULL,l_27 = NULL;
    t = not_null(j_27);
    if(((k_27 != NULL) && (k_27 != t)))
      _fail(t);
    else
      k_27 = t;
    t = not_null(j_27);
    if(((l_27 != NULL) && (l_27 != t)))
      _fail(t);
    else
      l_27 = t;
    t = not_null(k_3);
    t = is_list_0_0(t);
    {
      ATerm j_15 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_15;
        }
    }
    {
      static ATerm v_0 (ATerm t);
      static ATerm v_0 (ATerm t)
      {
        ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
        if(((n_27 != NULL) && (n_27 != t)))
          _fail(t);
        else
          n_27 = t;
        if(((o_27 != NULL) && (o_27 != t)))
          _fail(t);
        else
          o_27 = t;
        t = not_null(k_27);
        t = xtc_has_meta_0_1(not_null(n_27), t);
        t = not_null(n_27);
        return(t);
      }
      t = filter_1_0(v_0, t);
    }
    if(((k_3 != NULL) && (k_3 != t)))
      _fail(t);
    else
      k_3 = t;
    t = not_null(k_27);
    return(t);
  }
  static ATerm u_27 (ATerm p_27, ATerm t)
  {
    ATerm q_27 = NULL;
    t = not_null(p_27);
    if(((q_27 != NULL) && (q_27 != t)))
      _fail(t);
    else
      q_27 = t;
    t = not_null(p_27);
    {
      static ATerm y_0 (ATerm t);
      static ATerm y_0 (ATerm t)
      {
        if(((k_3 != NULL) && (k_3 != t)))
          _fail(t);
        else
          k_3 = t;
        return(t);
      }
      t = collect_all_1_0(y_0, t);
    }
    {
      ATerm k_15 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_15;
        }
    }
    t = not_null(q_27);
    return(t);
  }
  ATerm r_27 = NULL;
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL;
        t = not_null(r_27);
        if(((s_27 != NULL) && (s_27 != t)))
          _fail(t);
        else
          s_27 = t;
        t = not_null(k_3);
        t = Nil_0_0(t);
        t = not_null(s_27);
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_27(not_null(r_27), t);
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              t = u_27(not_null(r_27), t);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  if(((v_27 != NULL) && (v_27 != t)))
    _fail(t);
  else
    v_27 = t;
  if(((z_27 != NULL) && (z_27 != t)))
    _fail(t);
  else
    z_27 = t;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_15, not_null(g_81), (ATerm) ATinsert(ATempty, not_null(y_27)));
  t = table_union_0_0(t);
  t = not_null(g_81);
  if(((x_27 != NULL) && (x_27 != t)))
    _fail(t);
  else
    x_27 = t;
  t = term_p_15;
  if(((w_27 != NULL) && (w_27 != t)))
    _fail(t);
  else
    w_27 = t;
  t = not_null(x_27);
  t = dbg_0_1(not_null(w_27), t);
  t = not_null(v_27);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_28 != NULL) && (a_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_28 = ATgetArgument(t, 0);
      if(((b_28 != NULL) && (b_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(b_28)), not_null(a_28));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, c_1, t);
      LocalPopChoice(r_15);
      t = conc_0_0(t);
    }
  else
    {
      t = q_15;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(t_15);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = s_15;
      {
        ATerm f_28 = NULL;
        if(((f_28 != NULL) && (f_28 != t)))
          _fail(t);
        else
          f_28 = t;
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm e_28 = NULL;
  if(((e_28 != NULL) && (e_28 != t)))
    _fail(t);
  else
    e_28 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(z_0, a_1, b_1, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t)
{
  t = not_null(u_81);
  t = table_getlist_0_0(t);
  {
    static ATerm e_1 (ATerm t);
    static ATerm e_1 (ATerm t)
    {
      ATerm g_28 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm u_15 = ATgetArgument(t, 0);
          if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(g_28);
      t = b_151(t);
      return(t);
    }
    t = filter_1_0(e_1, t);
  }
  t = flatten_list_0_0(t);
  t = c_151(t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  if(((i_28 != NULL) && (i_28 != t)))
    _fail(t);
  else
    i_28 = t;
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(h_28));
  t = table_get_0_0(t);
  t = z_150(t);
  t = a_151(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  if(((j_28 != NULL) && (j_28 != t)))
    _fail(t);
  else
    j_28 = t;
  if(((l_28 != NULL) && (l_28 != t)))
    _fail(t);
  else
    l_28 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
        t = not_null(j_28);
        if(((q_28 != NULL) && (q_28 != t)))
          _fail(t);
        else
          q_28 = t;
        t = term_g_15;
        if(((p_28 != NULL) && (p_28 != t)))
          _fail(t);
        else
          p_28 = t;
        t = not_null(q_28);
        t = xtc_query_one_2_1(x_150, y_150, not_null(p_28), t);
        if(((m_28 != NULL) && (m_28 != t)))
          _fail(t);
        else
          m_28 = t;
        t = not_null(j_28);
        if(((o_28 != NULL) && (o_28 != t)))
          _fail(t);
        else
          o_28 = t;
        t = term_h_15;
        if(((n_28 != NULL) && (n_28 != t)))
          _fail(t);
        else
          n_28 = t;
        t = not_null(o_28);
        t = dbg_0_1(not_null(n_28), t);
        t = not_null(m_28);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
          if(((r_28 != NULL) && (r_28 != t)))
            _fail(t);
          else
            r_28 = t;
          if(((t_28 != NULL) && (t_28 != t)))
            _fail(t);
          else
            t_28 = t;
          t = term_i_15;
          if(((s_28 != NULL) && (s_28 != t)))
            _fail(t);
          else
            s_28 = t;
          t = not_null(t_28);
          t = xtc_query_all_2_1(x_150, y_150, not_null(s_28), t);
          t = xtc_cache_put_0_1(not_null(j_28), t);
        }
      }
  }
  if(((k_28 != NULL) && (k_28 != t)))
    _fail(t);
  else
    k_28 = t;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm i_29 = NULL;
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm j_3 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  if(((x_28 != NULL) && (x_28 != t)))
    _fail(t);
  else
    x_28 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      y_28 = ATgetArgument(t, 0);
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
            t = not_null(x_28);
            if(((a_29 != NULL) && (a_29 != t)))
              _fail(t);
            else
              a_29 = t;
            t = not_null(y_28);
            if(((z_28 != NULL) && (z_28 != t)))
              _fail(t);
            else
              z_28 = t;
            t = not_null(x_28);
            if(((d_29 != NULL) && (d_29 != t)))
              _fail(t);
            else
              d_29 = t;
            t = not_null(z_28);
            t = is_list_0_0(t);
            t = not_null(a_29);
            {
              static ATerm f_1 (ATerm t);
              static ATerm f_1 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(z_28), t);
                return(t);
              }
              t = xtc_query_all_2_0(f_1, j_3, t);
            }
            if(((c_29 != NULL) && (c_29 != t)))
              _fail(t);
            else
              c_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(c_29));
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
              t = not_null(x_28);
              if(((f_29 != NULL) && (f_29 != t)))
                _fail(t);
              else
                f_29 = t;
              t = not_null(y_28);
              if(((e_29 != NULL) && (e_29 != t)))
                _fail(t);
              else
                e_29 = t;
              t = not_null(x_28);
              if(((h_29 != NULL) && (h_29 != t)))
                _fail(t);
              else
                h_29 = t;
              t = not_null(e_29);
              t = is_string_0_0(t);
              t = not_null(f_29);
              t = xtc_query_one_2_0(g_1, j_3, t);
              if(((g_29 != NULL) && (g_29 != t)))
                _fail(t);
              else
                g_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_29), not_null(g_29));
            }
          }
      }
    }
  else
    {
      ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((y_28 != NULL) && (y_28 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_28 = ATgetArgument(t, 0);
          if(((w_28 != NULL) && (w_28 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_28);
      if(((l_29 != NULL) && (l_29 != t)))
        _fail(t);
      else
        l_29 = t;
      t = not_null(y_28);
      if(((k_29 != NULL) && (k_29 != t)))
        _fail(t);
      else
        k_29 = t;
      t = not_null(w_28);
      if(((j_29 != NULL) && (j_29 != t)))
        _fail(t);
      else
        j_29 = t;
      t = not_null(x_28);
      if(((o_29 != NULL) && (o_29 != t)))
        _fail(t);
      else
        o_29 = t;
      t = not_null(k_29);
      t = is_string_0_0(t);
      t = not_null(j_29);
      t = is_list_0_0(t);
      t = not_null(l_29);
      {
        static ATerm h_1 (ATerm t);
        static ATerm h_1 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(j_29), t);
          return(t);
        }
        t = xtc_query_one_2_0(h_1, j_3, t);
      }
      if(((n_29 != NULL) && (n_29 != t)))
        _fail(t);
      else
        n_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(n_29));
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
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((q_29 != NULL) && (q_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_29 = ATgetArgument(t, 0);
      if(((r_29 != NULL) && (r_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_29 = ATgetArgument(t, 1);
      if(((p_29 != NULL) && (p_29 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((s_29 != NULL) && (s_29 != t)))
    _fail(t);
  else
    s_29 = t;
  if(((u_29 != NULL) && (u_29 != t)))
    _fail(t);
  else
    u_29 = t;
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_29), not_null(r_29));
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        t = (ATerm) ATempty;
      }
  }
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_29), not_null(v_29));
  t = union_0_0(t);
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(q_29), not_null(r_29), not_null(t_29));
  t = set_0_0(t);
  t = not_null(s_29);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm y_29 = NULL;
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t)
{
  static ATerm k_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL;
    if(((a_30 != NULL) && (a_30 != t)))
      _fail(t);
    else
      a_30 = t;
    if(((z_29 != NULL) && (z_29 != t)))
      _fail(t);
    else
      z_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), not_null(b_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(j_1, k_1, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(a_80), t);
    return(t);
  }
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  if(((j_30 != NULL) && (j_30 != t)))
    _fail(t);
  else
    j_30 = t;
  t = Fst_0_0(t);
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = not_null(j_30);
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  t = Snd_0_0(t);
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_14, not_null(g_30), not_null(h_30));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm i_3, ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  if(((c_30 != NULL) && (c_30 != t)))
    _fail(t);
  else
    c_30 = t;
  if(match_cons(t, sym_Reference_1))
    {
      d_30 = ATgetArgument(t, 0);
      {
        ATerm f_30 = NULL;
        t = not_null(d_30);
        if(((f_30 != NULL) && (f_30 != t)))
          _fail(t);
        else
          f_30 = t;
        t = xtc_add_meta_all_0_1(not_null(i_3), t);
        t = map_1_0(m_1, t);
      }
    }
  else
    {
      ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((d_30 != NULL) && (d_30 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_30 = ATgetArgument(t, 0);
          if(((e_30 != NULL) && (e_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(d_30);
      if(((k_30 != NULL) && (k_30 != t)))
        _fail(t);
      else
        k_30 = t;
      t = not_null(e_30);
      if(((l_30 != NULL) && (l_30 != t)))
        _fail(t);
      else
        l_30 = t;
      t = not_null(c_30);
      if(((n_30 != NULL) && (n_30 != t)))
        _fail(t);
      else
        n_30 = t;
      t = not_null(l_30);
      t = xtc_add_meta_all_0_1(not_null(i_3), t);
      if(((m_30 != NULL) && (m_30 != t)))
        _fail(t);
      else
        m_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_15, not_null(k_30), not_null(m_30));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t)
{
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    static ATerm o_1 (ATerm t);
    static ATerm o_1 (ATerm t)
    {
      t = xtc_register_0_1(not_null(g_79), t);
      return(t);
    }
    t = map_1_0(o_1, t);
    return(t);
  }
  t = Repository_1_0(n_1, t);
  return(t);
}
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,p_1 = NULL,j_12 = NULL;
  if(((t_30 != NULL) && (t_30 != t)))
    _fail(t);
  else
    t_30 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((p_30 != NULL) && (p_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  t = SSLgetAnnotations(not_null(t_30));
  if(((o_30 != NULL) && (o_30 != t)))
    _fail(t);
  else
    o_30 = t;
  t = not_null(p_30);
  t = b_109(t);
  if(((q_30 != NULL) && (q_30 != t)))
    _fail(t);
  else
    q_30 = t;
  if(((s_30 != NULL) && (s_30 != t)))
    _fail(t);
  else
    s_30 = t;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(q_30));
  if(((p_1 != NULL) && (p_1 != t)))
    _fail(t);
  else
    p_1 = t;
  t = SSLsetAnnotations(not_null(p_1), not_null(o_30));
  if(((r_30 != NULL) && (r_30 != t)))
    _fail(t);
  else
    r_30 = t;
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(((w_30 != NULL) && (w_30 != t)))
    _fail(t);
  else
    w_30 = t;
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_b_16), not_null(v_30));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  t = get_extension_0_0(t);
  if(((x_30 != NULL) && (x_30 != t)))
    _fail(t);
  else
    x_30 = t;
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_30 = NULL;
        if(((z_30 != NULL) && (z_30 != t)))
          _fail(t);
        else
          z_30 = t;
        t = not_null(x_30);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(z_30);
        LocalPopChoice(d_16);
        t = (ATerm) ATinsert(ATempty, term_h_16);
      }
    else
      {
        t = c_16;
        t = not_null(y_30);
        {
          ATerm i_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_31 = NULL;
              if(((a_31 != NULL) && (a_31 != t)))
                _fail(t);
              else
                a_31 = t;
              t = not_null(x_30);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(a_31);
              LocalPopChoice(j_16);
              t = (ATerm) ATinsert(ATempty, term_m_16);
            }
          else
            {
              t = i_16;
              t = not_null(y_30);
              {
                ATerm n_16 = t;
                int o_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_31 = NULL;
                    if(((b_31 != NULL) && (b_31 != t)))
                      _fail(t);
                    else
                      b_31 = t;
                    t = not_null(x_30);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(b_31);
                    LocalPopChoice(o_16);
                    t = (ATerm) ATinsert(ATempty, term_m_16);
                  }
                else
                  {
                    t = n_16;
                    t = not_null(y_30);
                    {
                      ATerm p_16 = t;
                      int q_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_31 = NULL;
                          if(((c_31 != NULL) && (c_31 != t)))
                            _fail(t);
                          else
                            c_31 = t;
                          t = not_null(x_30);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(c_31);
                          LocalPopChoice(q_16);
                          t = (ATerm) ATinsert(ATempty, term_t_16);
                        }
                      else
                        {
                          t = p_16;
                          t = not_null(y_30);
                          {
                            ATerm u_16 = t;
                            int v_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_31 = NULL;
                                if(((d_31 != NULL) && (d_31 != t)))
                                  _fail(t);
                                else
                                  d_31 = t;
                                t = not_null(x_30);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(d_31);
                                LocalPopChoice(v_16);
                                t = (ATerm) ATinsert(ATempty, term_y_16);
                              }
                            else
                              {
                                t = u_16;
                                t = not_null(y_30);
                                {
                                  ATerm z_16 = t;
                                  int a_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm e_31 = NULL;
                                      if(((e_31 != NULL) && (e_31 != t)))
                                        _fail(t);
                                      else
                                        e_31 = t;
                                      t = not_null(x_30);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(e_31);
                                      LocalPopChoice(a_17);
                                      t = (ATerm) ATinsert(ATempty, term_y_16);
                                    }
                                  else
                                    {
                                      t = z_16;
                                      t = not_null(y_30);
                                      {
                                        ATerm b_17 = t;
                                        int c_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_31 = NULL;
                                            if(((f_31 != NULL) && (f_31 != t)))
                                              _fail(t);
                                            else
                                              f_31 = t;
                                            t = not_null(x_30);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(f_31);
                                            LocalPopChoice(c_17);
                                            t = (ATerm) ATinsert(ATempty, term_f_17);
                                          }
                                        else
                                          {
                                            t = b_17;
                                            t = not_null(y_30);
                                            {
                                              ATerm g_17 = t;
                                              int h_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_31 = NULL;
                                                  if(((g_31 != NULL) && (g_31 != t)))
                                                    _fail(t);
                                                  else
                                                    g_31 = t;
                                                  t = not_null(x_30);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(g_31);
                                                  LocalPopChoice(h_17);
                                                  t = (ATerm) ATinsert(ATempty, term_k_17);
                                                }
                                              else
                                                {
                                                  t = g_17;
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
static ATerm r_1 (ATerm t)
{
  ATerm j_31 = NULL;
  if(((j_31 != NULL) && (j_31 != t)))
    _fail(t);
  else
    j_31 = t;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm k_31 = NULL;
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm q_1 (ATerm t);
    static ATerm q_1 (ATerm t)
    {
      ATerm l_17 = t;
      int m_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(r_1, q_1, t);
          LocalPopChoice(m_17);
        }
      else
        {
          t = l_17;
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(s_1, t_1, t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = Cons_2_0(u_1, h_134, t);
                t = (ATerm) ATempty;
              }
          }
        }
      return(t);
    }
    t = try_1_0(q_1, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_31 = NULL;
  if(((n_31 != NULL) && (n_31 != t)))
    _fail(t);
  else
    n_31 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(v_1, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((o_31 != NULL) && (o_31 != t)))
    _fail(t);
  else
    o_31 = t;
  t = not_null(r_31);
  if(((q_31 != NULL) && (q_31 != t)))
    _fail(t);
  else
    q_31 = t;
  t = base_filename_0_0(t);
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), not_null(p_31));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_31 = NULL;
      if(((s_31 != NULL) && (s_31 != t)))
        _fail(t);
      else
        s_31 = t;
      t = has_no_extension_0_0(t);
      t = not_null(s_31);
      LocalPopChoice(q_17);
      t = (ATerm) ATinsert(ATempty, term_w_17);
    }
  else
    {
      t = p_17;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = not_null(w_31);
  if(((v_31 != NULL) && (v_31 != t)))
    _fail(t);
  else
    v_31 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(u_31));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_31 != NULL) && (x_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_31 = ATgetArgument(t, 0);
      if(((y_31 != NULL) && (y_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_32 != NULL) && (a_32 != t)))
    _fail(t);
  else
    a_32 = t;
  if(((c_32 != NULL) && (c_32 != t)))
    _fail(t);
  else
    c_32 = t;
  t = not_null(y_31);
  t = xtc_default_xt_meta_0_0(t);
  if(((b_32 != NULL) && (b_32 != t)))
    _fail(t);
  else
    b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_x_17, (ATerm) ATmakeAppl(sym_String_1, not_null(x_31)))), not_null(b_32));
  t = conc_0_0(t);
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_31), not_null(z_31));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      if(match_cons(y_17, sym_Tool_1))
        {
          if(((d_32 != NULL) && (d_32 != ATgetArgument(y_17, 0))))
            _fail(ATgetArgument(y_17, 0));
          else
            d_32 = ATgetArgument(y_17, 0);
        }
      else
        _fail(t);
      if(((e_32 != NULL) && (e_32 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_32 != NULL) && (g_32 != t)))
    _fail(t);
  else
    g_32 = t;
  t = not_null(e_32);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(d_32), not_null(f_32));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  if(((l_32 != NULL) && (l_32 != t)))
    _fail(t);
  else
    l_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_32), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm h_32 = NULL,j_32 = NULL,k_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      if(!(match_cons(z_17, sym_Import_0)))
        _fail(t);
      if(((h_32 != NULL) && (h_32 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_32 != NULL) && (k_32 != t)))
    _fail(t);
  else
    k_32 = t;
  t = not_null(h_32);
  t = map_1_0(w_1, t);
  if(((j_32 != NULL) && (j_32 != t)))
    _fail(t);
  else
    j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(j_32));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = filter_1_0(z_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  t = term_c_13;
  if(((o_32 != NULL) && (o_32 != t)))
    _fail(t);
  else
    o_32 = t;
  t = term_a_18;
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  t = not_null(o_32);
  t = err_0_1(not_null(n_32), t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      t = XtcConvertTool_0_0(t);
    }
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(x_1, y_1, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL;
  if(((q_32 != NULL) && (q_32 != t)))
    _fail(t);
  else
    q_32 = t;
  t = xtc_convert_0_0(t);
  if(((p_32 != NULL) && (p_32 != t)))
    _fail(t);
  else
    p_32 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(p_32));
  return(t);
}
ATerm notice_0_1 (ATerm x_78, ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  t = term_d_18;
  if(((r_32 != NULL) && (r_32 != t)))
    _fail(t);
  else
    r_32 = t;
  t = not_null(w_32);
  if(((t_32 != NULL) && (t_32 != t)))
    _fail(t);
  else
    t_32 = t;
  if(((v_32 != NULL) && (v_32 != t)))
    _fail(t);
  else
    v_32 = t;
  if(((u_32 != NULL) && (u_32 != t)))
    _fail(t);
  else
    u_32 = t;
  if(((s_32 != NULL) && (s_32 != t)))
    _fail(t);
  else
    s_32 = t;
  t = not_null(t_32);
  t = log_0_3(not_null(r_32), not_null(x_78), not_null(s_32), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if(match_cons(e_18, sym_Stream_1))
        {
          if(((x_32 != NULL) && (x_32 != ATgetArgument(e_18, 0))))
            _fail(ATgetArgument(e_18, 0));
          else
            x_32 = ATgetArgument(e_18, 0);
        }
      else
        _fail(t);
      if(((y_32 != NULL) && (y_32 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(x_32), not_null(y_32));
  if(((a_33 != NULL) && (a_33 != t)))
    _fail(t);
  else
    a_33 = t;
  if(((z_32 != NULL) && (z_32 != t)))
    _fail(t);
  else
    z_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_32));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_33 != NULL) && (g_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_33 = ATgetArgument(t, 0);
      if(((b_33 != NULL) && (b_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_33);
  if(((f_33 != NULL) && (f_33 != t)))
    _fail(t);
  else
    f_33 = t;
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), term_f_18);
  t = open_stream_0_0(t);
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_33), not_null(b_33));
  t = x_122(t);
  t = fclose_0_0(t);
  t = not_null(b_33);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm h_33 = NULL;
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  t = SSL_creat(not_null(h_33));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  static ATerm a_2 (ATerm t);
  static ATerm a_2 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_33 != NULL) && (i_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_33 = ATgetFirst((ATermList) t);
        {
          ATerm g_18 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(g_18) != AT_LIST) || !(ATisEmpty(g_18))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(a_2, t);
  if(((k_33 != NULL) && (k_33 != t)))
    _fail(t);
  else
    k_33 = t;
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), not_null(i_33));
  return(t);
}
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  static ATerm l_33 (ATerm t);
  static ATerm l_33 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        t = l_33(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = v_115(t);
      }
    return(t);
  }
  t = l_33(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm n_33 = NULL;
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  t = repeat_2_0(x_115, b_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm x_33 = NULL;
  if(((x_33 != NULL) && (x_33 != t)))
    _fail(t);
  else
    x_33 = t;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm y_33 = NULL;
  if(((y_33 != NULL) && (y_33 != t)))
    _fail(t);
  else
    y_33 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  static ATerm b_34 (ATerm t);
  static ATerm b_34 (ATerm t)
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_2, Nil_0_0, t);
        t = f_124(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = Cons_2_0(d_2, b_34, t);
      }
    return(t);
  }
  t = b_34(t);
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
static ATerm e_2 (ATerm t)
{
  t = try_1_0(f_2, t);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATinsert(ATempty, term_l_18);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(g_2, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_b_16);
        }
      else
        {
          t = repeat_1_0(j_2, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_l_18);
            }
          else
            {
              ATerm m_34 = NULL;
              if(((m_34 != NULL) && (m_34 != t)))
                _fail(t);
              else
                m_34 = t;
            }
        }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_34 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((e_34 != NULL) && (e_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_34 = ATgetArgument(t, 0);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(((ATgetType(m_18) != AT_INT) || (ATgetInt((ATermInt) m_18) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(e_34);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = split_init_last_0_0(t);
  t = _2_0(h_2, i_2, t);
  t = Fst_0_0(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm f_34 = NULL;
  if(((f_34 != NULL) && (f_34 != t)))
    _fail(t);
  else
    f_34 = t;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm n_18 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_18;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm l_34 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_34 = ATgetArgument(t, 0);
      {
        ATerm o_18 = ATgetArgument(t, 1);
        if(((ATgetType(o_18) != AT_INT) || (ATgetInt((ATermInt) o_18) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(l_34);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(e_2, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm n_34 = NULL;
  if(((n_34 != NULL) && (n_34 != t)))
    _fail(t);
  else
    n_34 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(n_34);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm p_18 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_18;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  if(((p_34 != NULL) && (p_34 != t)))
    _fail(t);
  else
    p_34 = t;
  if(((o_34 != NULL) && (o_34 != t)))
    _fail(t);
  else
    o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_34), (ATerm) ATinsert(ATempty, term_q_18));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_34 = NULL;
      if(((q_34 != NULL) && (q_34 != t)))
        _fail(t);
      else
        q_34 = t;
      t = not_null(r_79);
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(q_34);
      LocalPopChoice(s_18);
      {
        ATerm r_34 = NULL,u_34 = NULL;
        if(((u_34 != NULL) && (u_34 != t)))
          _fail(t);
        else
          u_34 = t;
        if(((r_34 != NULL) && (r_34 != t)))
          _fail(t);
        else
          r_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_79), not_null(r_34));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = r_18;
      {
        ATerm v_34 = NULL,x_34 = NULL;
        t = not_null(r_79);
        if(((x_34 != NULL) && (x_34 != t)))
          _fail(t);
        else
          x_34 = t;
        t = term_v_18;
        if(((v_34 != NULL) && (v_34 != t)))
          _fail(t);
        else
          v_34 = t;
        t = not_null(x_34);
        t = err_0_1(not_null(v_34), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm y_34 = NULL;
  if(((y_34 != NULL) && (y_34 != t)))
    _fail(t);
  else
    y_34 = t;
  {
    ATerm w_18 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_18;
      }
  }
  t = term_x_18;
  t = xtc_save_file_0_1(not_null(y_34), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm z_34 = NULL;
  if(((z_34 != NULL) && (z_34 != t)))
    _fail(t);
  else
    z_34 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_35 = NULL,b_35 = NULL;
        t = not_null(z_34);
        if(((b_35 != NULL) && (b_35 != t)))
          _fail(t);
        else
          b_35 = t;
        t = not_null(z_34);
        if(((a_35 != NULL) && (a_35 != t)))
          _fail(t);
        else
          a_35 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_35));
        t = read_from_0_0(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_35 = NULL,j_35 = NULL,m_35 = NULL;
              t = not_null(z_34);
              if(((m_35 != NULL) && (m_35 != t)))
                _fail(t);
              else
                m_35 = t;
              t = not_null(z_34);
              t = xtc_create_new_0_0(t);
              t = not_null(m_35);
              if(((j_35 != NULL) && (j_35 != t)))
                _fail(t);
              else
                j_35 = t;
              if(((i_35 != NULL) && (i_35 != t)))
                _fail(t);
              else
                i_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_35));
              t = read_from_0_0(t);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                ATerm n_35 = NULL,o_35 = NULL;
                t = not_null(z_34);
                if(((o_35 != NULL) && (o_35 != t)))
                  _fail(t);
                else
                  o_35 = t;
                t = term_c_19;
                if(((n_35 != NULL) && (n_35 != t)))
                  _fail(t);
                else
                  n_35 = t;
                t = not_null(o_35);
                t = err_0_1(not_null(n_35), t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm err_0_1 (ATerm v_78, ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  t = term_d_19;
  if(((p_35 != NULL) && (p_35 != t)))
    _fail(t);
  else
    p_35 = t;
  t = not_null(u_35);
  if(((r_35 != NULL) && (r_35 != t)))
    _fail(t);
  else
    r_35 = t;
  if(((t_35 != NULL) && (t_35 != t)))
    _fail(t);
  else
    t_35 = t;
  if(((s_35 != NULL) && (s_35 != t)))
    _fail(t);
  else
    s_35 = t;
  if(((q_35 != NULL) && (q_35 != t)))
    _fail(t);
  else
    q_35 = t;
  t = not_null(r_35);
  t = log_0_3(not_null(p_35), not_null(v_78), not_null(q_35), t);
  return(t);
}
static ATerm h_36 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  t = not_null(y_35);
  if(((a_36 != NULL) && (a_36 != t)))
    _fail(t);
  else
    a_36 = t;
  t = SSL_fclose(not_null(a_36));
  return(t);
}
static ATerm i_36 (ATerm c_36, ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  t = not_null(c_36);
  if(((e_36 != NULL) && (e_36 != t)))
    _fail(t);
  else
    e_36 = t;
  t = SSL_fclose(not_null(e_36));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  if(((g_36 != NULL) && (g_36 != t)))
    _fail(t);
  else
    g_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_36 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_36(not_null(f_36), not_null(g_36), t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = i_36(not_null(g_36), t);
          }
      }
    }
  else
    {
      t = i_36(not_null(g_36), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm j_36 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(j_36));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_36 != NULL) && (k_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_36 = ATgetArgument(t, 0);
      if(((l_36 != NULL) && (l_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(k_36), not_null(l_36));
  if(((n_36 != NULL) && (n_36 != t)))
    _fail(t);
  else
    n_36 = t;
  if(((m_36 != NULL) && (m_36 != t)))
    _fail(t);
  else
    m_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_36));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  t = SSL_stdin_stream();
  if(((p_36 != NULL) && (p_36 != t)))
    _fail(t);
  else
    p_36 = t;
  if(((o_36 != NULL) && (o_36 != t)))
    _fail(t);
  else
    o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_36));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  t = SSL_stdout_stream();
  if(((r_36 != NULL) && (r_36 != t)))
    _fail(t);
  else
    r_36 = t;
  if(((q_36 != NULL) && (q_36 != t)))
    _fail(t);
  else
    q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_36));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm t_36 = NULL;
  if(((t_36 != NULL) && (t_36 != t)))
    _fail(t);
  else
    t_36 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(t_36);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(t_36);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(t_36);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm w_36 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((w_36 != NULL) && (w_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(w_36);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm x_36 = NULL;
  if(((x_36 != NULL) && (x_36 != t)))
    _fail(t);
  else
    x_36 = t;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm y_36 = NULL;
  if(((y_36 != NULL) && (y_36 != t)))
    _fail(t);
  else
    y_36 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      ATerm h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(k_2, l_2, t);
              t = fopen_0_0(t);
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              t = _2_0(is_string_0_0, m_2, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  if(((b_37 != NULL) && (b_37 != t)))
    _fail(t);
  else
    b_37 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL,d_37 = NULL;
        t = not_null(b_37);
        if(((d_37 != NULL) && (d_37 != t)))
          _fail(t);
        else
          d_37 = t;
        t = not_null(b_37);
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_37), term_o_19);
        t = open_stream_0_0(t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm e_37 = NULL,j_37 = NULL;
          t = not_null(b_37);
          if(((j_37 != NULL) && (j_37 != t)))
            _fail(t);
          else
            j_37 = t;
          t = not_null(b_37);
          if(((e_37 != NULL) && (e_37 != t)))
            _fail(t);
          else
            e_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_19, not_null(e_37));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((a_37 != NULL) && (a_37 != t)))
    _fail(t);
  else
    a_37 = t;
  t = read_from_stream_0_0(t);
  if(((z_36 != NULL) && (z_36 != t)))
    _fail(t);
  else
    z_36 = t;
  t = not_null(a_37);
  t = fclose_0_0(t);
  t = not_null(z_36);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_37 != NULL) && (k_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_37 = ATgetArgument(t, 0);
      if(((l_37 != NULL) && (l_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(k_37), not_null(l_37));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  if(((n_37 != NULL) && (n_37 != t)))
    _fail(t);
  else
    n_37 = t;
  if(((m_37 != NULL) && (m_37 != t)))
    _fail(t);
  else
    m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), (ATerm) ATinsert(ATempty, term_q_19));
  t = access_0_0(t);
  return(t);
}
static ATerm g_38 (ATerm s_37, ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  t = not_null(s_37);
  if(((w_37 != NULL) && (w_37 != t)))
    _fail(t);
  else
    w_37 = t;
  t = not_null(s_37);
  if(((x_37 != NULL) && (x_37 != t)))
    _fail(t);
  else
    x_37 = t;
  t = not_null(w_37);
  if(((y_37 != NULL) && (y_37 != t)))
    _fail(t);
  else
    y_37 = t;
  t = SSL_explode_term(not_null(y_37));
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((t_37 != NULL) && (t_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(x_37);
  if(((v_37 != NULL) && (v_37 != t)))
    _fail(t);
  else
    v_37 = t;
  t = not_null(t_37);
  t = concat_0_0(t);
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  if(((b_38 != NULL) && (b_38 != t)))
    _fail(t);
  else
    b_38 = t;
  if(match_cons(t, sym__2))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
            t = not_null(z_37);
            if(((c_38 != NULL) && (c_38 != t)))
              _fail(t);
            else
              c_38 = t;
            t = not_null(a_38);
            if(((d_38 != NULL) && (d_38 != t)))
              _fail(t);
            else
              d_38 = t;
            t = not_null(b_38);
            if(((f_38 != NULL) && (f_38 != t)))
              _fail(t);
            else
              f_38 = t;
            t = not_null(c_38);
            {
              static ATerm n_2 (ATerm t);
              static ATerm n_2 (ATerm t)
              {
                t = not_null(d_38);
                return(t);
              }
              t = at_end_1_0(n_2, t);
            }
            if(((e_38 != NULL) && (e_38 != t)))
              _fail(t);
            else
              e_38 = t;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = g_38(not_null(b_38), t);
          }
      }
    }
  else
    {
      t = g_38(not_null(b_38), t);
    }
  return(t);
}
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  static ATerm o_2 (ATerm t);
  static ATerm o_2 (ATerm t)
  {
    t = r_141(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_38), not_null(i_38));
    t = execvp_0_0(t);
    t = term_u_19;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((h_38 != NULL) && (h_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_38 = ATgetArgument(t, 0);
      if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(o_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm k_38 = NULL;
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(p_2, t);
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
  ATerm l_38 = NULL,m_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_38 != NULL) && (l_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_38 = ATgetArgument(t, 0);
      if(((m_38 != NULL) && (m_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(l_38), not_null(m_38));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_38 != NULL) && (n_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_38 = ATgetArgument(t, 0);
      if(((o_38 != NULL) && (o_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(n_38), not_null(o_38));
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
  ATerm p_38 = NULL;
  if(((p_38 != NULL) && (p_38 != t)))
    _fail(t);
  else
    p_38 = t;
  t = SSL_int_to_string(not_null(p_38));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_38 = ATgetArgument(t, 0);
      {
        ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
        t = not_null(s_38);
        if(((v_38 != NULL) && (v_38 != t)))
          _fail(t);
        else
          v_38 = t;
        t = not_null(r_38);
        if(((x_38 != NULL) && (x_38 != t)))
          _fail(t);
        else
          x_38 = t;
        if(((z_38 != NULL) && (z_38 != t)))
          _fail(t);
        else
          z_38 = t;
        t = not_null(v_38);
        t = int_to_string_0_0(t);
        if(((y_38 != NULL) && (y_38 != t)))
          _fail(t);
        else
          y_38 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_19), not_null(y_38)), term_v_19);
        t = concat_strings_0_0(t);
        if(((w_38 != NULL) && (w_38 != t)))
          _fail(t);
        else
          w_38 = t;
      }
    }
  else
    {
      ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((s_38 != NULL) && (s_38 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_38 = ATgetArgument(t, 0);
          if(((t_38 != NULL) && (t_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_38 = ATgetArgument(t, 1);
          if(((u_38 != NULL) && (u_38 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            u_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(s_38);
      if(((a_39 != NULL) && (a_39 != t)))
        _fail(t);
      else
        a_39 = t;
      t = not_null(t_38);
      if(((b_39 != NULL) && (b_39 != t)))
        _fail(t);
      else
        b_39 = t;
      t = not_null(u_38);
      if(((c_39 != NULL) && (c_39 != t)))
        _fail(t);
      else
        c_39 = t;
      t = not_null(r_38);
      if(((e_39 != NULL) && (e_39 != t)))
        _fail(t);
      else
        e_39 = t;
      if(((g_39 != NULL) && (g_39 != t)))
        _fail(t);
      else
        g_39 = t;
      t = not_null(b_39);
      t = int_to_string_0_0(t);
      if(((f_39 != NULL) && (f_39 != t)))
        _fail(t);
      else
        f_39 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_39)), term_y_19), not_null(f_39)), term_x_19), not_null(a_39));
      t = concat_strings_0_0(t);
      if(((d_39 != NULL) && (d_39 != t)))
        _fail(t);
      else
        d_39 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm h_39 = NULL;
  static ATerm q_2 (ATerm t);
  static ATerm q_2 (ATerm t)
  {
    t = p_123(t);
    if(((h_39 != NULL) && (h_39 != t)))
      _fail(t);
    else
      h_39 = t;
    return(t);
  }
  t = fetch_1_0(q_2, t);
  t = not_null(h_39);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_39 = NULL;
  if(((i_39 != NULL) && (i_39 != t)))
    _fail(t);
  else
    i_39 = t;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_2 (ATerm t);
        static ATerm r_2 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm b_20 = ATgetArgument(t, 0);
              if(((i_39 != NULL) && (i_39 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                i_39 = ATgetArgument(t, 1);
              {
                ATerm c_20 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), term_s_34), term_h_34), term_a_34), term_u_33), term_q_33), term_i_32), term_h_31), term_u_28), term_h_27), term_y_23), term_e_23), term_n_22), term_j_22), term_f_22), term_b_22), term_x_21), term_t_21), term_p_21), term_l_21), term_h_21), term_d_21), term_z_20), term_v_20), term_r_20), term_n_20), term_j_20), term_f_20);
        t = fetch_elem_1_0(r_2, t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(i_39));
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if(((m_39 != NULL) && (m_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_39 = ATgetArgument(t, 1);
      {
        ATerm f_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(m_39);
  {
    ATerm g_35 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_35;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((l_39 != NULL) && (l_39 != t)))
    _fail(t);
  else
    l_39 = t;
  if(((k_39 != NULL) && (k_39 != t)))
    _fail(t);
  else
    k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_39)), term_h_35));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_39 = NULL;
  if(((j_39 != NULL) && (j_39 != t)))
    _fail(t);
  else
    j_39 = t;
  t = try_1_0(s_2, t);
  t = not_null(j_39);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm n_39 = NULL;
  if(((n_39 != NULL) && (n_39 != t)))
    _fail(t);
  else
    n_39 = t;
  t = SSL_waitpid(not_null(n_39));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  if(((q_39 != NULL) && (q_39 != t)))
    _fail(t);
  else
    q_39 = t;
  t = fork_0_0(t);
  if(((p_39 != NULL) && (p_39 != t)))
    _fail(t);
  else
    p_39 = t;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_39 = NULL;
        if(((r_39 != NULL) && (r_39 != t)))
          _fail(t);
        else
          r_39 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(q_39);
        t = t_141(t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), not_null(q_39));
        t = u_141(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm s_39 = NULL;
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    ATerm t_39 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((t_39 != NULL) && (t_39 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_39 = ATgetArgument(t, 0);
        if(((s_39 != NULL) && (s_39 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_39 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(t_39);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm v_35 = ATgetArgument(t, 0);
        if(((ATgetType(v_35) != AT_INT) || (ATgetInt((ATermInt) v_35) != 0)))
          _fail(t);
        {
          ATerm w_35 = ATgetArgument(t, 1);
        }
        {
          ATerm x_35 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(s_39);
    return(t);
  }
  t = fork_2_0(v_141, t_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  if(((l_40 != NULL) && (l_40 != t)))
    _fail(t);
  else
    l_40 = t;
  if(((i_40 != NULL) && (i_40 != t)))
    _fail(t);
  else
    i_40 = t;
  t = not_null(l_40);
  if(((k_40 != NULL) && (k_40 != t)))
    _fail(t);
  else
    k_40 = t;
  t = STDIN__FILENO_0_0(t);
  if(((j_40 != NULL) && (j_40 != t)))
    _fail(t);
  else
    j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_40), not_null(j_40));
  t = dup2_0_0(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  if(((p_40 != NULL) && (p_40 != t)))
    _fail(t);
  else
    p_40 = t;
  if(((m_40 != NULL) && (m_40 != t)))
    _fail(t);
  else
    m_40 = t;
  t = not_null(p_40);
  if(((o_40 != NULL) && (o_40 != t)))
    _fail(t);
  else
    o_40 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((n_40 != NULL) && (n_40 != t)))
    _fail(t);
  else
    n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_40), not_null(n_40));
  t = dup2_0_0(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
  if(((t_40 != NULL) && (t_40 != t)))
    _fail(t);
  else
    t_40 = t;
  if(((q_40 != NULL) && (q_40 != t)))
    _fail(t);
  else
    q_40 = t;
  t = not_null(t_40);
  if(((s_40 != NULL) && (s_40 != t)))
    _fail(t);
  else
    s_40 = t;
  t = STDERR__FILENO_0_0(t);
  if(((r_40 != NULL) && (r_40 != t)))
    _fail(t);
  else
    r_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_40), not_null(r_40));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  if(((h_40 != NULL) && (h_40 != t)))
    _fail(t);
  else
    h_40 = t;
  t = term_s_36;
  if(((g_40 != NULL) && (g_40 != t)))
    _fail(t);
  else
    g_40 = t;
  t = not_null(h_40);
  t = dbg_0_1(not_null(g_40), t);
  if(match_cons(t, sym__3))
    {
      if(((e_40 != NULL) && (e_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_40 = ATgetArgument(t, 0);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(match_cons(u_36, sym__3))
          {
            if(((y_39 != NULL) && (y_39 != ATgetArgument(u_36, 0))))
              _fail(ATgetArgument(u_36, 0));
            else
              y_39 = ATgetArgument(u_36, 0);
            if(((z_39 != NULL) && (z_39 != ATgetArgument(u_36, 1))))
              _fail(ATgetArgument(u_36, 1));
            else
              z_39 = ATgetArgument(u_36, 1);
            if(((d_40 != NULL) && (d_40 != ATgetArgument(u_36, 2))))
              _fail(ATgetArgument(u_36, 2));
            else
              d_40 = ATgetArgument(u_36, 2);
          }
        else
          _fail(t);
      }
      if(((f_40 != NULL) && (f_40 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        f_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm u_2 (ATerm t);
    static ATerm u_2 (ATerm t)
    {
      t = not_null(y_39);
      t = option_1_0(v_2, t);
      t = not_null(z_39);
      t = option_1_0(w_2, t);
      t = not_null(d_40);
      t = option_1_0(x_2, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_40), not_null(f_40));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(u_2, t);
  }
  t = term_c_13;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm exec_http_0_1 (ATerm x_87, ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((d_41 != NULL) && (d_41 != t)))
    _fail(t);
  else
    d_41 = t;
  if(((c_41 != NULL) && (c_41 != t)))
    _fail(t);
  else
    c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_g_37), term_f_37), not_null(c_41));
  t = conc_0_0(t);
  if(((b_41 != NULL) && (b_41 != t)))
    _fail(t);
  else
    b_41 = t;
  t = not_null(x_87);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((u_40 != NULL) && (u_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_40 = ATgetArgument(t, 0);
      if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_40 = ATgetArgument(t, 1);
      if(((w_40 != NULL) && (w_40 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_40 = ATgetArgument(t, 2);
      {
        ATerm h_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_u_17, not_null(v_40), not_null(w_40), not_null(b_41));
  t = xtc_command_1_0(y_2, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  if(((n_41 != NULL) && (n_41 != t)))
    _fail(t);
  else
    n_41 = t;
  if(match_cons(t, sym__3))
    {
      if(((o_41 != NULL) && (o_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_41 = ATgetArgument(t, 0);
      if(((q_41 != NULL) && (q_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_41 = ATgetArgument(t, 1);
      if(((r_41 != NULL) && (r_41 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(o_41);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm s_41 = NULL,t_41 = NULL;
      t = not_null(q_41);
      if(((t_41 != NULL) && (t_41 != t)))
        _fail(t);
      else
        t_41 = t;
      t = not_null(r_41);
      if(((s_41 != NULL) && (s_41 != t)))
        _fail(t);
      else
        s_41 = t;
      t = exec_http_0_1(not_null(t_41), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          p_41 = ATgetArgument(t, 0);
          {
            ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
            t = not_null(p_41);
            if(((u_41 != NULL) && (u_41 != t)))
              _fail(t);
            else
              u_41 = t;
            t = not_null(q_41);
            if(((w_41 != NULL) && (w_41 != t)))
              _fail(t);
            else
              w_41 = t;
            t = not_null(r_41);
            if(((v_41 != NULL) && (v_41 != t)))
              _fail(t);
            else
              v_41 = t;
            t = exec_http_0_1(not_null(w_41), t);
          }
        }
      else
        {
          ATerm x_41 = NULL,y_41 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((p_41 != NULL) && (p_41 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_41 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(p_41);
          if(((x_41 != NULL) && (x_41 != t)))
            _fail(t);
          else
            x_41 = t;
          t = not_null(r_41);
          if(((y_41 != NULL) && (y_41 != t)))
            _fail(t);
          else
            y_41 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm z_41 = NULL;
  if(((z_41 != NULL) && (z_41 != t)))
    _fail(t);
  else
    z_41 = t;
  t = SSL_open(not_null(z_41));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm h_3, ATerm t)
{
  static ATerm w_42 (ATerm e_42, ATerm f_42, ATerm t);
  static ATerm x_42 (ATerm k_42, ATerm t);
  static ATerm w_42 (ATerm e_42, ATerm f_42, ATerm t)
  {
    ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
    t = not_null(e_42);
    if(((g_42 != NULL) && (g_42 != t)))
      _fail(t);
    else
      g_42 = t;
    t = not_null(f_42);
    if(((i_42 != NULL) && (i_42 != t)))
      _fail(t);
    else
      i_42 = t;
    t = not_null(h_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm i_37 = ATgetArgument(t, 0);
        if(match_cons(i_37, sym_FILE_1))
          {
            if(((j_42 != NULL) && (j_42 != ATgetArgument(i_37, 0))))
              _fail(ATgetArgument(i_37, 0));
            else
              j_42 = ATgetArgument(i_37, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(j_42);
    t = open_0_0(t);
    if(((h_42 != NULL) && (h_42 != t)))
      _fail(t);
    else
      h_42 = t;
    return(t);
  }
  static ATerm x_42 (ATerm k_42, ATerm t)
  {
    ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
    t = not_null(k_42);
    if(((m_42 != NULL) && (m_42 != t)))
      _fail(t);
    else
      m_42 = t;
    t = not_null(h_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm o_37 = ATgetArgument(t, 0);
        if(match_cons(o_37, sym_FILE_1))
          {
            if(((n_42 != NULL) && (n_42 != ATgetArgument(o_37, 0))))
              _fail(ATgetArgument(o_37, 0));
            else
              n_42 = ATgetArgument(o_37, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(n_42);
    t = open_0_0(t);
    if(((l_42 != NULL) && (l_42 != t)))
      _fail(t);
    else
      l_42 = t;
    return(t);
  }
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  if(((u_42 != NULL) && (u_42 != t)))
    _fail(t);
  else
    u_42 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((v_42 != NULL) && (v_42 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(v_42);
  if(match_cons(t, sym_Some_1))
    {
      t_42 = ATgetArgument(t, 0);
      t = w_42(not_null(t_42), not_null(u_42), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = x_42(not_null(u_42), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm g_3, ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  if(((z_42 != NULL) && (z_42 != t)))
    _fail(t);
  else
    z_42 = t;
  if(match_cons(t, sym_Error_1))
    {
      a_43 = ATgetArgument(t, 0);
      {
        ATerm b_43 = NULL,g_43 = NULL,h_43 = NULL;
        t = not_null(a_43);
        if(((b_43 != NULL) && (b_43 != t)))
          _fail(t);
        else
          b_43 = t;
        t = not_null(z_42);
        if(((h_43 != NULL) && (h_43 != t)))
          _fail(t);
        else
          h_43 = t;
        t = not_null(b_43);
        t = xtc_streamdef_to_fd_0_1(not_null(g_3), t);
        if(((g_43 != NULL) && (g_43 != t)))
          _fail(t);
        else
          g_43 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          a_43 = ATgetArgument(t, 0);
          {
            ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
            t = not_null(a_43);
            if(((i_43 != NULL) && (i_43 != t)))
              _fail(t);
            else
              i_43 = t;
            t = not_null(z_42);
            if(((k_43 != NULL) && (k_43 != t)))
              _fail(t);
            else
              k_43 = t;
            t = not_null(i_43);
            t = xtc_streamdef_to_fd_0_1(not_null(g_3), t);
            if(((j_43 != NULL) && (j_43 != t)))
              _fail(t);
            else
              j_43 = t;
          }
        }
      else
        {
          ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((a_43 != NULL) && (a_43 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(a_43);
          if(((l_43 != NULL) && (l_43 != t)))
            _fail(t);
          else
            l_43 = t;
          t = not_null(z_42);
          if(((n_43 != NULL) && (n_43 != t)))
            _fail(t);
          else
            n_43 = t;
          t = not_null(l_43);
          t = xtc_streamdef_to_fd_0_1(not_null(g_3), t);
          if(((m_43 != NULL) && (m_43 != t)))
            _fail(t);
          else
            m_43 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm p_43 = NULL,q_43 = NULL;
        if(((p_43 != NULL) && (p_43 != t)))
          _fail(t);
        else
          p_43 = t;
        if(match_cons(t, sym_URL_1))
          {
            q_43 = ATgetArgument(t, 0);
            {
              ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
              t = not_null(q_43);
              if(((r_43 != NULL) && (r_43 != t)))
                _fail(t);
              else
                r_43 = t;
              t = not_null(p_43);
              if(((t_43 != NULL) && (t_43 != t)))
                _fail(t);
              else
                t_43 = t;
              t = not_null(r_43);
              t = xtc_arg_to_string_0_0(t);
              if(((s_43 != NULL) && (s_43 != t)))
                _fail(t);
              else
                s_43 = t;
            }
          }
        else
          {
            ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((q_43 != NULL) && (q_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(q_43);
            if(((u_43 != NULL) && (u_43 != t)))
              _fail(t);
            else
              u_43 = t;
            t = not_null(p_43);
            if(((w_43 != NULL) && (w_43 != t)))
              _fail(t);
            else
              w_43 = t;
            t = not_null(u_43);
            t = xtc_arg_to_string_0_0(t);
            if(((v_43 != NULL) && (v_43 != t)))
              _fail(t);
            else
              v_43 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  if(((z_43 != NULL) && (z_43 != t)))
    _fail(t);
  else
    z_43 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      a_44 = ATgetArgument(t, 0);
      y_43 = ATgetArgument(t, 1);
      {
        ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
        t = not_null(a_44);
        if(((b_44 != NULL) && (b_44 != t)))
          _fail(t);
        else
          b_44 = t;
        t = not_null(y_43);
        if(((c_44 != NULL) && (c_44 != t)))
          _fail(t);
        else
          c_44 = t;
        t = not_null(z_43);
        if(((g_44 != NULL) && (g_44 != t)))
          _fail(t);
        else
          g_44 = t;
        t = not_null(b_44);
        t = xtc_argterm_to_exec_0_0(t);
        if(((d_44 != NULL) && (d_44 != t)))
          _fail(t);
        else
          d_44 = t;
        t = not_null(g_44);
        if(((f_44 != NULL) && (f_44 != t)))
          _fail(t);
        else
          f_44 = t;
        t = not_null(c_44);
        t = xtc_argterm_to_exec_0_0(t);
        if(((e_44 != NULL) && (e_44 != t)))
          _fail(t);
        else
          e_44 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_44)), not_null(d_44));
      }
    }
  else
    {
      ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((a_44 != NULL) && (a_44 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_44);
      if(((h_44 != NULL) && (h_44 != t)))
        _fail(t);
      else
        h_44 = t;
      t = not_null(z_43);
      if(((j_44 != NULL) && (j_44 != t)))
        _fail(t);
      else
        j_44 = t;
      t = not_null(h_44);
      t = xtc_argterm_to_exec_0_0(t);
      if(((i_44 != NULL) && (i_44 != t)))
        _fail(t);
      else
        i_44 = t;
      t = (ATerm) ATinsert(ATempty, not_null(i_44));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm k_45 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  t = not_null(q_44);
  if(((s_44 != NULL) && (s_44 != t)))
    _fail(t);
  else
    s_44 = t;
  t = not_null(r_44);
  if(((w_44 != NULL) && (w_44 != t)))
    _fail(t);
  else
    w_44 = t;
  t = not_null(s_44);
  t = xtc_argterm_to_http_0_0(t);
  if(((x_44 != NULL) && (x_44 != t)))
    _fail(t);
  else
    x_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_44 = ATgetArgument(t, 0);
      {
        ATerm z_44 = NULL;
        t = not_null(y_44);
        if(((z_44 != NULL) && (z_44 != t)))
          _fail(t);
        else
          z_44 = t;
      }
    }
  else
    {
      ATerm a_45 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((y_44 != NULL) && (y_44 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(y_44);
      if(((a_45 != NULL) && (a_45 != t)))
        _fail(t);
      else
        a_45 = t;
    }
  if(((t_44 != NULL) && (t_44 != t)))
    _fail(t);
  else
    t_44 = t;
  t = not_null(w_44);
  if(((v_44 != NULL) && (v_44 != t)))
    _fail(t);
  else
    v_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_44)), term_r_37);
  t = concat_strings_0_0(t);
  if(((u_44 != NULL) && (u_44 != t)))
    _fail(t);
  else
    u_44 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_j_38, not_null(u_44)));
  return(t);
}
static ATerm l_45 (ATerm b_45, ATerm c_45, ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  t = not_null(b_45);
  if(((d_45 != NULL) && (d_45 != t)))
    _fail(t);
  else
    d_45 = t;
  t = not_null(c_45);
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  t = not_null(d_45);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm q_38 = t;
    if((PushChoice() == 0))
      {
        ATerm o_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(z_2, t);
            LocalPopChoice(u_39);
          }
        else
          {
            t = o_39;
            t = URL_1_0(a_3, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_38;
      }
  }
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_j_38, not_null(e_45)));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_45 = NULL;
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm h_45 = NULL;
  if(((h_45 != NULL) && (h_45 != t)))
    _fail(t);
  else
    h_45 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  if(((i_45 != NULL) && (i_45 != t)))
    _fail(t);
  else
    i_45 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((j_45 != NULL) && (j_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_45(not_null(j_45), not_null(i_45), t);
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = l_45(not_null(j_45), not_null(i_45), t);
      }
  }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm x_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(a_40);
    }
  else
    {
      t = x_39;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(b_3, t);
  return(t);
}
static ATerm v_46 (ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  t = not_null(s_45);
  if(((u_45 != NULL) && (u_45 != t)))
    _fail(t);
  else
    u_45 = t;
  t = not_null(t_45);
  if(((y_45 != NULL) && (y_45 != t)))
    _fail(t);
  else
    y_45 = t;
  t = not_null(u_45);
  t = xtc_argterm_to_http_0_0(t);
  if(((z_45 != NULL) && (z_45 != t)))
    _fail(t);
  else
    z_45 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_46 = ATgetArgument(t, 0);
      {
        ATerm b_46 = NULL;
        t = not_null(a_46);
        if(((b_46 != NULL) && (b_46 != t)))
          _fail(t);
        else
          b_46 = t;
      }
    }
  else
    {
      ATerm c_46 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((a_46 != NULL) && (a_46 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_46);
      if(((c_46 != NULL) && (c_46 != t)))
        _fail(t);
      else
        c_46 = t;
    }
  if(((v_45 != NULL) && (v_45 != t)))
    _fail(t);
  else
    v_45 = t;
  t = not_null(y_45);
  if(((x_45 != NULL) && (x_45 != t)))
    _fail(t);
  else
    x_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), term_b_40);
  t = concat_strings_0_0(t);
  if(((w_45 != NULL) && (w_45 != t)))
    _fail(t);
  else
    w_45 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_j_38, not_null(w_45)));
  return(t);
}
static ATerm w_46 (ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
  t = not_null(k_46);
  if(((m_46 != NULL) && (m_46 != t)))
    _fail(t);
  else
    m_46 = t;
  t = not_null(l_46);
  if(((q_46 != NULL) && (q_46 != t)))
    _fail(t);
  else
    q_46 = t;
  t = not_null(m_46);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm c_40 = t;
    if((PushChoice() == 0))
      {
        ATerm x_40 = t;
        int y_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(n_3, t);
            LocalPopChoice(y_40);
          }
        else
          {
            t = x_40;
            t = URL_1_0(o_3, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_40;
      }
  }
  if(((n_46 != NULL) && (n_46 != t)))
    _fail(t);
  else
    n_46 = t;
  t = not_null(q_46);
  if(((p_46 != NULL) && (p_46 != t)))
    _fail(t);
  else
    p_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_46)), term_z_40);
  t = concat_strings_0_0(t);
  if(((o_46 != NULL) && (o_46 != t)))
    _fail(t);
  else
    o_46 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_j_38, not_null(o_46)));
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm r_46 = NULL;
  if(((r_46 != NULL) && (r_46 != t)))
    _fail(t);
  else
    r_46 = t;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm s_46 = NULL;
  if(((s_46 != NULL) && (s_46 != t)))
    _fail(t);
  else
    s_46 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL;
  if(((t_46 != NULL) && (t_46 != t)))
    _fail(t);
  else
    t_46 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((u_46 != NULL) && (u_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_46(not_null(u_46), not_null(t_46), t);
        LocalPopChoice(e_41);
      }
    else
      {
        t = a_41;
        t = w_46(not_null(u_46), not_null(t_46), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,p_3 = NULL,k_12 = NULL;
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((y_46 != NULL) && (y_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = SSLgetAnnotations(not_null(c_47));
  if(((x_46 != NULL) && (x_46 != t)))
    _fail(t);
  else
    x_46 = t;
  t = not_null(y_46);
  t = n_109(t);
  if(((z_46 != NULL) && (z_46 != t)))
    _fail(t);
  else
    z_46 = t;
  if(((b_47 != NULL) && (b_47 != t)))
    _fail(t);
  else
    b_47 = t;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(z_46));
  if(((p_3 != NULL) && (p_3 != t)))
    _fail(t);
  else
    p_3 = t;
  t = SSLsetAnnotations(not_null(p_3), not_null(x_46));
  if(((a_47 != NULL) && (a_47 != t)))
    _fail(t);
  else
    a_47 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm e_47 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((e_47 != NULL) && (e_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(e_47);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(g_41);
    }
  else
    {
      t = f_41;
      {
        ATerm g_47 = NULL,h_47 = NULL;
        if(((g_47 != NULL) && (g_47 != t)))
          _fail(t);
        else
          g_47 = t;
        if(match_cons(t, sym_URL_1))
          {
            h_47 = ATgetArgument(t, 0);
            {
              ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
              t = not_null(h_47);
              if(((i_47 != NULL) && (i_47 != t)))
                _fail(t);
              else
                i_47 = t;
              t = not_null(g_47);
              if(((k_47 != NULL) && (k_47 != t)))
                _fail(t);
              else
                k_47 = t;
              t = not_null(i_47);
              t = xtc_arg_to_string_0_0(t);
              if(((j_47 != NULL) && (j_47 != t)))
                _fail(t);
              else
                j_47 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(j_47));
            }
          }
        else
          {
            ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(h_47);
            if(((l_47 != NULL) && (l_47 != t)))
              _fail(t);
            else
              l_47 = t;
            t = not_null(g_47);
            if(((n_47 != NULL) && (n_47 != t)))
              _fail(t);
            else
              n_47 = t;
            t = not_null(l_47);
            t = xtc_arg_to_string_0_0(t);
            if(((m_47 != NULL) && (m_47 != t)))
              _fail(t);
            else
              m_47 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_47));
          }
      }
    }
  return(t);
}
static ATerm v_49 (ATerm b_48, ATerm c_48, ATerm e_48, ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,o_48 = NULL;
  t = not_null(b_48);
  if(((f_48 != NULL) && (f_48 != t)))
    _fail(t);
  else
    f_48 = t;
  t = not_null(c_48);
  if(((h_48 != NULL) && (h_48 != t)))
    _fail(t);
  else
    h_48 = t;
  t = not_null(e_48);
  if(((l_48 != NULL) && (l_48 != t)))
    _fail(t);
  else
    l_48 = t;
  t = not_null(f_48);
  t = xtc_argterm_to_http_0_0(t);
  if(((g_48 != NULL) && (g_48 != t)))
    _fail(t);
  else
    g_48 = t;
  t = not_null(h_48);
  t = xtc_argterm_to_http_0_0(t);
  if(((m_48 != NULL) && (m_48 != t)))
    _fail(t);
  else
    m_48 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_48 = ATgetArgument(t, 0);
      {
        ATerm q_48 = NULL;
        t = not_null(o_48);
        if(((q_48 != NULL) && (q_48 != t)))
          _fail(t);
        else
          q_48 = t;
      }
    }
  else
    {
      ATerm r_48 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((o_48 != NULL) && (o_48 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_48);
      if(((r_48 != NULL) && (r_48 != t)))
        _fail(t);
      else
        r_48 = t;
    }
  if(((i_48 != NULL) && (i_48 != t)))
    _fail(t);
  else
    i_48 = t;
  t = not_null(l_48);
  if(((k_48 != NULL) && (k_48 != t)))
    _fail(t);
  else
    k_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_48)), term_h_41), not_null(g_48));
  t = concat_strings_0_0(t);
  if(((j_48 != NULL) && (j_48 != t)))
    _fail(t);
  else
    j_48 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_j_38, not_null(j_48)));
  return(t);
}
static ATerm w_49 (ATerm s_48, ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm y_48 = NULL,a_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  t = not_null(s_48);
  if(((y_48 != NULL) && (y_48 != t)))
    _fail(t);
  else
    y_48 = t;
  t = not_null(t_48);
  if(((f_49 != NULL) && (f_49 != t)))
    _fail(t);
  else
    f_49 = t;
  t = not_null(u_48);
  if(((j_49 != NULL) && (j_49 != t)))
    _fail(t);
  else
    j_49 = t;
  t = not_null(y_48);
  t = xtc_argterm_to_http_0_0(t);
  if(((a_49 != NULL) && (a_49 != t)))
    _fail(t);
  else
    a_49 = t;
  t = not_null(f_49);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm i_41 = t;
    if((PushChoice() == 0))
      {
        ATerm j_41 = t;
        int k_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(q_3, t);
            LocalPopChoice(k_41);
          }
        else
          {
            t = j_41;
            t = URL_1_0(r_3, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_41;
      }
  }
  if(((g_49 != NULL) && (g_49 != t)))
    _fail(t);
  else
    g_49 = t;
  t = not_null(j_49);
  if(((i_49 != NULL) && (i_49 != t)))
    _fail(t);
  else
    i_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_49)), term_l_41), not_null(a_49));
  t = concat_strings_0_0(t);
  if(((h_49 != NULL) && (h_49 != t)))
    _fail(t);
  else
    h_49 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_j_38, not_null(h_49)));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_49 = NULL;
  if(((m_49 != NULL) && (m_49 != t)))
    _fail(t);
  else
    m_49 = t;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_49 = NULL;
  if(((n_49 != NULL) && (n_49 != t)))
    _fail(t);
  else
    n_49 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm o_49 = NULL,t_49 = NULL,u_49 = NULL;
  if(((o_49 != NULL) && (o_49 != t)))
    _fail(t);
  else
    o_49 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((t_49 != NULL) && (t_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_49 = ATgetArgument(t, 0);
      if(((u_49 != NULL) && (u_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_49(not_null(t_49), not_null(u_49), not_null(o_49), t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = m_41;
        t = w_49(not_null(t_49), not_null(u_49), not_null(o_49), t);
      }
  }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(s_3, t);
  return(t);
}
static ATerm u_51 (ATerm g_50, ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  t = not_null(g_50);
  if(((w_50 != NULL) && (w_50 != t)))
    _fail(t);
  else
    w_50 = t;
  t = not_null(h_50);
  if(((q_50 != NULL) && (q_50 != t)))
    _fail(t);
  else
    q_50 = t;
  t = not_null(i_50);
  if(((u_50 != NULL) && (u_50 != t)))
    _fail(t);
  else
    u_50 = t;
  t = not_null(j_50);
  if(((x_50 != NULL) && (x_50 != t)))
    _fail(t);
  else
    x_50 = t;
  t = not_null(k_50);
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  t = not_null(l_50);
  if(((n_50 != NULL) && (n_50 != t)))
    _fail(t);
  else
    n_50 = t;
  t = not_null(m_50);
  if(((z_50 != NULL) && (z_50 != t)))
    _fail(t);
  else
    z_50 = t;
  t = not_null(o_50);
  t = xtc_args_to_exec_0_0(t);
  if(((p_50 != NULL) && (p_50 != t)))
    _fail(t);
  else
    p_50 = t;
  t = not_null(w_50);
  {
    ATerm d_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_3 (ATerm t);
        static ATerm t_3 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(q_50), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(t_3, t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = d_42;
        t = term_u_17;
      }
  }
  if(((t_50 != NULL) && (t_50 != t)))
    _fail(t);
  else
    t_50 = t;
  t = not_null(w_50);
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_3 (ATerm t);
        static ATerm u_3 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(u_50), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(u_3, t);
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        t = term_u_17;
      }
  }
  if(((v_50 != NULL) && (v_50 != t)))
    _fail(t);
  else
    v_50 = t;
  t = not_null(w_50);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_3 (ATerm t);
        static ATerm v_3 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(x_50), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(v_3, t);
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        t = term_u_17;
      }
  }
  if(((y_50 != NULL) && (y_50 != t)))
    _fail(t);
  else
    y_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(n_50), (ATerm)ATmakeAppl(sym__3, not_null(t_50), not_null(v_50), not_null(y_50)), not_null(p_50));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  if(((a_51 != NULL) && (a_51 != t)))
    _fail(t);
  else
    a_51 = t;
  if(match_cons(t, sym__3))
    {
      if(((b_51 != NULL) && (b_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_51 = ATgetArgument(t, 0);
      if(((d_51 != NULL) && (d_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_51 = ATgetArgument(t, 1);
      if(((i_51 != NULL) && (i_51 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(b_51);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
      t = not_null(d_51);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((e_51 != NULL) && (e_51 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_51 = ATgetArgument(t, 0);
          if(((f_51 != NULL) && (f_51 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_51 = ATgetArgument(t, 1);
          if(((g_51 != NULL) && (g_51 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            g_51 = ATgetArgument(t, 2);
          if(((h_51 != NULL) && (h_51 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            h_51 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(i_51);
      if(match_cons(t, sym__2))
        {
          if(((j_51 != NULL) && (j_51 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_51 = ATgetArgument(t, 0);
          if(((k_51 != NULL) && (k_51 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(h_51);
      if(((m_51 != NULL) && (m_51 != t)))
        _fail(t);
      else
        m_51 = t;
      t = not_null(j_51);
      if(((l_51 != NULL) && (l_51 != t)))
        _fail(t);
      else
        l_51 = t;
      t = not_null(a_51);
      if(((o_51 != NULL) && (o_51 != t)))
        _fail(t);
      else
        o_51 = t;
      t = not_null(m_51);
      t = xtc_args_to_xtservice_0_0(t);
      if(((n_51 != NULL) && (n_51 != t)))
        _fail(t);
      else
        n_51 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_51)), not_null(l_51));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          c_51 = ATgetArgument(t, 0);
          {
            ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
            t = not_null(d_51);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((e_51 != NULL) && (e_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_51 = ATgetArgument(t, 0);
                if(((f_51 != NULL) && (f_51 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  f_51 = ATgetArgument(t, 1);
                if(((g_51 != NULL) && (g_51 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  g_51 = ATgetArgument(t, 2);
                if(((h_51 != NULL) && (h_51 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  h_51 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(i_51);
            if(match_cons(t, sym__2))
              {
                if(((j_51 != NULL) && (j_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_51 = ATgetArgument(t, 0);
                if(((k_51 != NULL) && (k_51 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_51 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(c_51);
            if(((p_51 != NULL) && (p_51 != t)))
              _fail(t);
            else
              p_51 = t;
            t = not_null(h_51);
            if(((r_51 != NULL) && (r_51 != t)))
              _fail(t);
            else
              r_51 = t;
            t = not_null(j_51);
            if(((q_51 != NULL) && (q_51 != t)))
              _fail(t);
            else
              q_51 = t;
            t = not_null(a_51);
            if(((t_51 != NULL) && (t_51 != t)))
              _fail(t);
            else
              t_51 = t;
            t = not_null(r_51);
            t = xtc_args_to_http_0_0(t);
            if(((s_51 != NULL) && (s_51 != t)))
              _fail(t);
            else
              s_51 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(s_51)), not_null(q_51));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((c_51 != NULL) && (c_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(d_51);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((e_51 != NULL) && (e_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_51 = ATgetArgument(t, 0);
              if(((f_51 != NULL) && (f_51 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                f_51 = ATgetArgument(t, 1);
              if(((g_51 != NULL) && (g_51 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                g_51 = ATgetArgument(t, 2);
              if(((h_51 != NULL) && (h_51 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                h_51 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(i_51);
          if(match_cons(t, sym__2))
            {
              if(((j_51 != NULL) && (j_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_51 = ATgetArgument(t, 0);
              if(((k_51 != NULL) && (k_51 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_51(not_null(c_51), not_null(e_51), not_null(f_51), not_null(g_51), not_null(h_51), not_null(j_51), not_null(a_51), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm y_42 = ATgetArgument(t, 0);
      if(!(match_cons(y_42, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(s_91);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL;
  static ATerm w_3 (ATerm t);
  static ATerm w_3 (ATerm t)
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(v_51), t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        {
          ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
          if(((x_51 != NULL) && (x_51 != t)))
            _fail(t);
          else
            x_51 = t;
          if(((z_51 != NULL) && (z_51 != t)))
            _fail(t);
          else
            z_51 = t;
          t = not_null(x_51);
          if(((y_51 != NULL) && (y_51 != t)))
            _fail(t);
          else
            y_51 = t;
          t = (ATerm) ATinsert(ATempty, not_null(y_51));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((w_51 != NULL) && (w_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_51 = ATgetArgument(t, 0);
      if(((v_51 != NULL) && (v_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_51);
  t = mapconcat_1_0(w_3, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_52 != NULL) && (c_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_52 = ATgetArgument(t, 0);
      if(((b_52 != NULL) && (b_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_52 != NULL) && (f_52 != t)))
    _fail(t);
  else
    f_52 = t;
  t = Fst_0_0(t);
  {
    static ATerm x_3 (ATerm t);
    static ATerm x_3 (ATerm t)
    {
      ATerm g_52 = NULL;
      ATerm f_43 = t;
      int o_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_52 (ATerm h_52, ATerm t);
          static ATerm o_52 (ATerm h_52, ATerm t)
          {
            ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
            t = not_null(h_52);
            if(((g_52 != NULL) && (g_52 != t)))
              _fail(t);
            else
              g_52 = t;
            t = not_null(h_52);
            if(((j_52 != NULL) && (j_52 != t)))
              _fail(t);
            else
              j_52 = t;
            if(((k_52 != NULL) && (k_52 != t)))
              _fail(t);
            else
              k_52 = t;
            t = not_null(b_52);
            {
              static ATerm y_3 (ATerm t);
              static ATerm y_3 (ATerm t)
              {
                ATerm l_52 = NULL,m_52 = NULL;
                if(((m_52 != NULL) && (m_52 != t)))
                  _fail(t);
                else
                  m_52 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(m_52));
                if(((g_52 != NULL) && (g_52 != t)))
                  _fail(t);
                else
                  g_52 = t;
                return(t);
              }
              t = SRTS_one(y_3, t);
            }
            t = not_null(k_52);
            if(((i_52 != NULL) && (i_52 != t)))
              _fail(t);
            else
              i_52 = t;
            t = (ATerm) ATinsert(ATempty, not_null(i_52));
            return(t);
          }
          ATerm n_52 = NULL;
          if(((n_52 != NULL) && (n_52 != t)))
            _fail(t);
          else
            n_52 = t;
          t = o_52(not_null(n_52), t);
          LocalPopChoice(o_43);
        }
      else
        {
          t = f_43;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(x_3, t);
  }
  if(((d_52 != NULL) && (d_52 != t)))
    _fail(t);
  else
    d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_52), not_null(d_52));
  t = diff_0_0(t);
  if(((e_52 != NULL) && (e_52 != t)))
    _fail(t);
  else
    e_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_52), not_null(e_52));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((p_52 != NULL) && (p_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_52 = ATgetArgument(t, 0);
      if(((s_52 != NULL) && (s_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_52 = ATgetArgument(t, 1);
      if(((r_52 != NULL) && (r_52 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((v_52 != NULL) && (v_52 != t)))
    _fail(t);
  else
    v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_52), not_null(s_52));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((w_52 != NULL) && (w_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_52 = ATgetArgument(t, 0);
      if(((q_52 != NULL) && (q_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_52);
  {
    ATerm x_43 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_52 = NULL;
        if(((x_52 != NULL) && (x_52 != t)))
          _fail(t);
        else
          x_52 = t;
        {
          ATerm l_44 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_44;
            }
        }
        t = not_null(x_52);
        LocalPopChoice(k_44);
        t = h_151(t);
      }
    else
      {
        t = x_43;
        {
          ATerm m_44 = t;
          int n_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_52 = NULL;
              if(((y_52 != NULL) && (y_52 != t)))
                _fail(t);
              else
                y_52 = t;
              t = not_null(r_52);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm o_44 = ATgetArgument(t, 0);
                  if(!(match_cons(o_44, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(y_52);
              LocalPopChoice(n_44);
              t = not_null(s_52);
              t = Hd_0_0(t);
              if(((t_52 != NULL) && (t_52 != t)))
                _fail(t);
              else
                t_52 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(t_52)));
            }
          else
            {
              t = m_44;
              t = i_151(t);
            }
        }
      }
  }
  if(((u_52 != NULL) && (u_52 != t)))
    _fail(t);
  else
    u_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_52), not_null(q_52));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm g_53 = NULL;
  if(((g_53 != NULL) && (g_53 != t)))
    _fail(t);
  else
    g_53 = t;
  return(t);
}
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,e_53 = NULL,f_53 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_53 != NULL) && (b_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_53 = ATgetArgument(t, 0);
      if(((a_53 != NULL) && (a_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_53 != NULL) && (f_53 != t)))
    _fail(t);
  else
    f_53 = t;
  t = not_null(b_53);
  {
    static ATerm h_53 (ATerm t);
    static ATerm h_53 (ATerm t)
    {
      ATerm p_44 = t;
      int m_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(m_45);
        }
      else
        {
          t = p_44;
          {
            ATerm n_45 = t;
            int o_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm z_3 (ATerm t);
                static ATerm z_3 (ATerm t)
                {
                  t = not_null(a_53);
                  return(t);
                }
                t = HdMember_p__2_0(j_127, z_3, t);
                t = h_53(t);
                LocalPopChoice(o_45);
              }
            else
              {
                t = n_45;
                t = Cons_2_0(a_4, h_53, t);
              }
          }
        }
      return(t);
    }
    t = h_53(t);
  }
  if(((e_53 != NULL) && (e_53 != t)))
    _fail(t);
  else
    e_53 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_53 != NULL) && (l_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_53 = ATgetArgument(t, 0);
      {
        ATerm p_45 = ATgetArgument(t, 1);
        if(((ATgetType(p_45) == AT_LIST) && !(ATisEmpty(p_45))))
          {
            if(((k_53 != NULL) && (k_53 != ATgetFirst((ATermList) p_45))))
              _fail(ATgetFirst((ATermList) p_45));
            else
              k_53 = ATgetFirst((ATermList) p_45);
            if(((m_53 != NULL) && (m_53 != (ATerm) ATgetNext((ATermList) p_45))))
              _fail((ATerm) ATgetNext((ATermList) p_45));
            else
              m_53 = (ATerm) ATgetNext((ATermList) p_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_53)), not_null(k_53)), not_null(m_53));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm n_53 = NULL,q_53 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_53 != NULL) && (n_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_53 = ATgetArgument(t, 0);
      if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(q_53)), not_null(n_53));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_45 = ATgetArgument(t, 0);
      if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
        {
          if(((r_53 != NULL) && (r_53 != ATgetFirst((ATermList) q_45))))
            _fail(ATgetFirst((ATermList) q_45));
          else
            r_53 = ATgetFirst((ATermList) q_45);
          if(((t_53 != NULL) && (t_53 != (ATerm) ATgetNext((ATermList) q_45))))
            _fail((ATerm) ATgetNext((ATermList) q_45));
          else
            t_53 = (ATerm) ATgetNext((ATermList) q_45);
        }
      else
        _fail(t);
      {
        ATerm r_45 = ATgetArgument(t, 1);
        if(((ATgetType(r_45) == AT_LIST) && !(ATisEmpty(r_45))))
          {
            if(((s_53 != NULL) && (s_53 != ATgetFirst((ATermList) r_45))))
              _fail(ATgetFirst((ATermList) r_45));
            else
              s_53 = ATgetFirst((ATermList) r_45);
            if(((u_53 != NULL) && (u_53 != (ATerm) ATgetNext((ATermList) r_45))))
              _fail((ATerm) ATgetNext((ATermList) r_45));
            else
              u_53 = (ATerm) ATgetNext((ATermList) r_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_53), not_null(s_53)), (ATerm) ATmakeAppl(sym__2, not_null(t_53), not_null(u_53)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_46 = ATgetArgument(t, 0);
      if(((ATgetType(e_46) != AT_LIST) || !(ATisEmpty(e_46))))
        _fail(t);
      {
        ATerm f_46 = ATgetArgument(t, 1);
        if(((ATgetType(f_46) != AT_LIST) || !(ATisEmpty(f_46))))
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
  static ATerm v_53 (ATerm t);
  static ATerm v_53 (ATerm t)
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_125(t);
        LocalPopChoice(h_46);
      }
    else
      {
        t = g_46;
        t = i_125(t);
        t = _2_0(k_125, v_53, t);
        t = j_125(t);
      }
    return(t);
  }
  t = v_53(t);
  return(t);
}
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, m_125, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm n_54 = NULL;
  if(((n_54 != NULL) && (n_54 != t)))
    _fail(t);
  else
    n_54 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_46 = ATgetFirst((ATermList) t);
      if(match_cons(i_46, sym__2))
        {
          if(((f_54 != NULL) && (f_54 != ATgetArgument(i_46, 0))))
            _fail(ATgetArgument(i_46, 0));
          else
            f_54 = ATgetArgument(i_46, 0);
          if(((k_54 != NULL) && (k_54 != ATgetArgument(i_46, 1))))
            _fail(ATgetArgument(i_46, 1));
          else
            k_54 = ATgetArgument(i_46, 1);
        }
      else
        _fail(t);
      if(((a_54 != NULL) && (a_54 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        a_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((l_54 != NULL) && (l_54 != t)))
    _fail(t);
  else
    l_54 = t;
  t = not_null(k_54);
  if(((m_54 != NULL) && (m_54 != t)))
    _fail(t);
  else
    m_54 = t;
  t = SSL_explode_term(not_null(m_54));
  if(match_cons(t, sym__2))
    {
      if(((x_53 != NULL) && (x_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_53 = ATgetArgument(t, 0);
      if(((z_53 != NULL) && (z_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_54);
  if(((g_54 != NULL) && (g_54 != t)))
    _fail(t);
  else
    g_54 = t;
  t = not_null(f_54);
  if(((h_54 != NULL) && (h_54 != t)))
    _fail(t);
  else
    h_54 = t;
  t = SSL_explode_term(not_null(h_54));
  if(match_cons(t, sym__2))
    {
      if(((x_53 != NULL) && (x_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_53 = ATgetArgument(t, 0);
      if(((y_53 != NULL) && (y_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_54);
  if(((c_54 != NULL) && (c_54 != t)))
    _fail(t);
  else
    c_54 = t;
  if(((e_54 != NULL) && (e_54 != t)))
    _fail(t);
  else
    e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_53), not_null(z_53));
  t = zip_1_0(b_4, t);
  if(((d_54 != NULL) && (d_54 != t)))
    _fail(t);
  else
    d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_54), not_null(a_54));
  t = conc_0_0(t);
  if(((b_54 != NULL) && (b_54 != t)))
    _fail(t);
  else
    b_54 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_46 = ATgetFirst((ATermList) t);
      if(match_cons(j_46, sym__2))
        {
          if(((p_54 != NULL) && (p_54 != ATgetArgument(j_46, 0))))
            _fail(ATgetArgument(j_46, 0));
          else
            p_54 = ATgetArgument(j_46, 0);
          if(((p_54 != NULL) && (p_54 != ATgetArgument(j_46, 1))))
            _fail(ATgetArgument(j_46, 1));
          else
            p_54 = ATgetArgument(j_46, 1);
        }
      else
        _fail(t);
      if(((q_54 != NULL) && (q_54 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(q_54);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_54 = NULL;
  if(((t_54 != NULL) && (t_54 != t)))
    _fail(t);
  else
    t_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_54));
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = _2_0(f_4, Nil_0_0, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm f_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(g_4, h_4, t);
      LocalPopChoice(o_47);
    }
  else
    {
      t = f_47;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm u_54 = NULL;
  if(((u_54 != NULL) && (u_54 != t)))
    _fail(t);
  else
    u_54 = t;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm v_54 = NULL;
  if(((v_54 != NULL) && (v_54 != t)))
    _fail(t);
  else
    v_54 = t;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(q_47);
    }
  else
    {
      t = p_47;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_55 != NULL) && (c_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_55 = ATgetArgument(t, 0);
      if(((b_55 != NULL) && (b_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_55 != NULL) && (i_55 != t)))
    _fail(t);
  else
    i_55 = t;
  t = Fst_0_0(t);
  {
    static ATerm i_4 (ATerm t);
    static ATerm i_4 (ATerm t)
    {
      ATerm j_55 = NULL,k_55 = NULL;
      ATerm t_47 = t;
      int u_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_55 (ATerm l_55, ATerm m_55, ATerm n_55, ATerm t);
          static ATerm x_55 (ATerm l_55, ATerm m_55, ATerm n_55, ATerm t)
          {
            ATerm o_55 = NULL,p_55 = NULL,t_55 = NULL;
            t = not_null(l_55);
            if(((j_55 != NULL) && (j_55 != t)))
              _fail(t);
            else
              j_55 = t;
            t = not_null(m_55);
            if(((k_55 != NULL) && (k_55 != t)))
              _fail(t);
            else
              k_55 = t;
            t = not_null(n_55);
            if(((p_55 != NULL) && (p_55 != t)))
              _fail(t);
            else
              p_55 = t;
            if(((t_55 != NULL) && (t_55 != t)))
              _fail(t);
            else
              t_55 = t;
            t = not_null(b_55);
            {
              static ATerm j_4 (ATerm t);
              static ATerm j_4 (ATerm t)
              {
                if(((j_55 != NULL) && (j_55 != t)))
                  _fail(t);
                else
                  j_55 = t;
                return(t);
              }
              t = SRTS_one(j_4, t);
            }
            t = not_null(t_55);
            if(((o_55 != NULL) && (o_55 != t)))
              _fail(t);
            else
              o_55 = t;
            t = (ATerm) ATinsert(ATempty, not_null(o_55));
            return(t);
          }
          ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
          if(((u_55 != NULL) && (u_55 != t)))
            _fail(t);
          else
            u_55 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((v_55 != NULL) && (v_55 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_55 = ATgetArgument(t, 0);
              if(((w_55 != NULL) && (w_55 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                w_55 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_55(not_null(v_55), not_null(w_55), not_null(u_55), t);
          LocalPopChoice(u_47);
        }
      else
        {
          t = t_47;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(i_4, t);
  }
  if(((g_55 != NULL) && (g_55 != t)))
    _fail(t);
  else
    g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_55), not_null(g_55));
  t = diff_0_0(t);
  if(((h_55 != NULL) && (h_55 != t)))
    _fail(t);
  else
    h_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_55), not_null(h_55));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t)
{
  ATerm y_55 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,x_56 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((f_56 != NULL) && (f_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_56 = ATgetArgument(t, 0);
      if(((g_56 != NULL) && (g_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_56 = ATgetArgument(t, 1);
      if(((i_56 != NULL) && (i_56 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_56 = ATgetArgument(t, 2);
      if(((y_55 != NULL) && (y_55 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        y_55 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((k_56 != NULL) && (k_56 != t)))
    _fail(t);
  else
    k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_56), not_null(g_56));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((x_56 != NULL) && (x_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_56 = ATgetArgument(t, 0);
      if(((h_56 != NULL) && (h_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(x_56);
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_56 = NULL;
        if(((y_56 != NULL) && (y_56 != t)))
          _fail(t);
        else
          y_56 = t;
        {
          ATerm x_47 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_47;
            }
        }
        t = not_null(y_56);
        LocalPopChoice(w_47);
        t = j_151(t);
      }
    else
      {
        t = v_47;
        {
          ATerm y_47 = t;
          int z_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_56 = NULL;
              if(((z_56 != NULL) && (z_56 != t)))
                _fail(t);
              else
                z_56 = t;
              t = not_null(i_56);
              {
                ATerm a_48 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_48;
                  }
              }
              t = not_null(z_56);
              LocalPopChoice(z_47);
              t = k_151(t);
            }
          else
            {
              t = y_47;
              t = l_151(t);
            }
        }
      }
  }
  if(((j_56 != NULL) && (j_56 != t)))
    _fail(t);
  else
    j_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_56), not_null(h_56));
  return(t);
}
static ATerm b_64 (ATerm q_58, ATerm r_58, ATerm s_58, ATerm t_58, ATerm u_58, ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  t = not_null(q_58);
  if(((x_58 != NULL) && (x_58 != t)))
    _fail(t);
  else
    x_58 = t;
  t = not_null(r_58);
  if(((y_58 != NULL) && (y_58 != t)))
    _fail(t);
  else
    y_58 = t;
  t = not_null(s_58);
  if(((w_58 != NULL) && (w_58 != t)))
    _fail(t);
  else
    w_58 = t;
  t = not_null(t_58);
  if(((v_58 != NULL) && (v_58 != t)))
    _fail(t);
  else
    v_58 = t;
  t = not_null(u_58);
  if(((c_59 != NULL) && (c_59 != t)))
    _fail(t);
  else
    c_59 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(v_58), not_null(x_58), not_null(y_58), not_null(w_58));
  {
    static ATerm l_4 (ATerm t);
    static ATerm l_4 (ATerm t)
    {
      static ATerm n_4 (ATerm t);
      static ATerm n_4 (ATerm t)
      {
        ATerm e_59 = NULL,f_59 = NULL;
        if(((f_59 != NULL) && (f_59 != t)))
          _fail(t);
        else
          f_59 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(z_58), not_null(f_59));
        return(t);
      }
      t = not_null(x_58);
      t = Hd_0_0(t);
      if(((z_58 != NULL) && (z_58 != t)))
        _fail(t);
      else
        z_58 = t;
      t = not_null(y_58);
      t = map_1_0(n_4, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(k_4, l_4, m_4, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((a_59 != NULL) && (a_59 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_59 = ATgetArgument(t, 0);
      if(((b_59 != NULL) && (b_59 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_59), not_null(b_59));
  return(t);
}
static ATerm c_64 (ATerm g_59, ATerm h_59, ATerm i_59, ATerm j_59, ATerm k_59, ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  t = not_null(g_59);
  if(((n_59 != NULL) && (n_59 != t)))
    _fail(t);
  else
    n_59 = t;
  t = not_null(h_59);
  if(((z_59 != NULL) && (z_59 != t)))
    _fail(t);
  else
    z_59 = t;
  t = not_null(i_59);
  if(((l_59 != NULL) && (l_59 != t)))
    _fail(t);
  else
    l_59 = t;
  t = not_null(j_59);
  if(((m_59 != NULL) && (m_59 != t)))
    _fail(t);
  else
    m_59 = t;
  t = not_null(k_59);
  if(((c_60 != NULL) && (c_60 != t)))
    _fail(t);
  else
    c_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_59), not_null(n_59), not_null(z_59));
  t = xtc_toption_to_args_2_0(o_4, p_4, t);
  if(match_cons(t, sym__2))
    {
      if(((a_60 != NULL) && (a_60 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_60 = ATgetArgument(t, 0);
      if(((b_60 != NULL) && (b_60 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(b_60));
  return(t);
}
static ATerm d_64 (ATerm e_60, ATerm f_60, ATerm g_60, ATerm h_60, ATerm i_60, ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
  t = not_null(e_60);
  if(((l_60 != NULL) && (l_60 != t)))
    _fail(t);
  else
    l_60 = t;
  t = not_null(f_60);
  if(((m_60 != NULL) && (m_60 != t)))
    _fail(t);
  else
    m_60 = t;
  t = not_null(g_60);
  if(((k_60 != NULL) && (k_60 != t)))
    _fail(t);
  else
    k_60 = t;
  t = not_null(h_60);
  if(((j_60 != NULL) && (j_60 != t)))
    _fail(t);
  else
    j_60 = t;
  t = not_null(i_60);
  if(((q_60 != NULL) && (q_60 != t)))
    _fail(t);
  else
    q_60 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(j_60), not_null(l_60), not_null(m_60), not_null(k_60));
  {
    static ATerm r_4 (ATerm t);
    static ATerm r_4 (ATerm t)
    {
      static ATerm s_4 (ATerm t);
      static ATerm s_4 (ATerm t)
      {
        ATerm s_60 = NULL,t_60 = NULL;
        if(((t_60 != NULL) && (t_60 != t)))
          _fail(t);
        else
          t_60 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(n_60), not_null(t_60));
        return(t);
      }
      t = not_null(l_60);
      t = Hd_0_0(t);
      if(((n_60 != NULL) && (n_60 != t)))
        _fail(t);
      else
        n_60 = t;
      t = not_null(m_60);
      t = map_1_0(s_4, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(q_4, r_4, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((o_60 != NULL) && (o_60 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_60 = ATgetArgument(t, 0);
      if(((p_60 != NULL) && (p_60 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_60), not_null(p_60));
  return(t);
}
static ATerm e_64 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  t = not_null(u_60);
  if(((b_61 != NULL) && (b_61 != t)))
    _fail(t);
  else
    b_61 = t;
  t = not_null(v_60);
  if(((c_61 != NULL) && (c_61 != t)))
    _fail(t);
  else
    c_61 = t;
  t = not_null(w_60);
  if(((z_60 != NULL) && (z_60 != t)))
    _fail(t);
  else
    z_60 = t;
  t = not_null(x_60);
  if(((a_61 != NULL) && (a_61 != t)))
    _fail(t);
  else
    a_61 = t;
  t = not_null(y_60);
  if(((f_61 != NULL) && (f_61 != t)))
    _fail(t);
  else
    f_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_61), not_null(b_61), not_null(c_61));
  t = xtc_toption_to_args_2_0(t_4, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((d_61 != NULL) && (d_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_61 = ATgetArgument(t, 0);
      if(((e_61 != NULL) && (e_61 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_61), not_null(e_61));
  return(t);
}
static ATerm f_64 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  t = not_null(h_61);
  if(((o_61 != NULL) && (o_61 != t)))
    _fail(t);
  else
    o_61 = t;
  t = not_null(i_61);
  if(((p_61 != NULL) && (p_61 != t)))
    _fail(t);
  else
    p_61 = t;
  t = not_null(j_61);
  if(((n_61 != NULL) && (n_61 != t)))
    _fail(t);
  else
    n_61 = t;
  t = not_null(k_61);
  if(((m_61 != NULL) && (m_61 != t)))
    _fail(t);
  else
    m_61 = t;
  t = not_null(l_61);
  if(((u_61 != NULL) && (u_61 != t)))
    _fail(t);
  else
    u_61 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(m_61), not_null(o_61), not_null(p_61), not_null(n_61));
  {
    static ATerm v_4 (ATerm t);
    static ATerm v_4 (ATerm t)
    {
      t = not_null(o_61);
      t = Hd_0_0(t);
      if(((q_61 != NULL) && (q_61 != t)))
        _fail(t);
      else
        q_61 = t;
      t = not_null(p_61);
      t = Hd_0_0(t);
      if(((r_61 != NULL) && (r_61 != t)))
        _fail(t);
      else
        r_61 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(q_61), not_null(r_61)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(u_4, v_4, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((s_61 != NULL) && (s_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_61 = ATgetArgument(t, 0);
      if(((t_61 != NULL) && (t_61 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_61), not_null(t_61));
  return(t);
}
static ATerm g_64 (ATerm x_61, ATerm y_61, ATerm z_61, ATerm a_62, ATerm b_62, ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
  t = not_null(x_61);
  if(((e_62 != NULL) && (e_62 != t)))
    _fail(t);
  else
    e_62 = t;
  t = not_null(y_61);
  if(((f_62 != NULL) && (f_62 != t)))
    _fail(t);
  else
    f_62 = t;
  t = not_null(z_61);
  if(((c_62 != NULL) && (c_62 != t)))
    _fail(t);
  else
    c_62 = t;
  t = not_null(a_62);
  if(((d_62 != NULL) && (d_62 != t)))
    _fail(t);
  else
    d_62 = t;
  t = not_null(b_62);
  if(((i_62 != NULL) && (i_62 != t)))
    _fail(t);
  else
    i_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(d_62), not_null(e_62), not_null(f_62));
  t = xtc_toption_to_args_2_0(w_4, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_62 = ATgetArgument(t, 0);
      if(((h_62 != NULL) && (h_62 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_62), not_null(h_62));
  return(t);
}
static ATerm h_64 (ATerm l_62, ATerm m_62, ATerm n_62, ATerm o_62, ATerm p_62, ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  t = not_null(l_62);
  if(((s_62 != NULL) && (s_62 != t)))
    _fail(t);
  else
    s_62 = t;
  t = not_null(m_62);
  if(((t_62 != NULL) && (t_62 != t)))
    _fail(t);
  else
    t_62 = t;
  t = not_null(n_62);
  if(((r_62 != NULL) && (r_62 != t)))
    _fail(t);
  else
    r_62 = t;
  t = not_null(o_62);
  if(((q_62 != NULL) && (q_62 != t)))
    _fail(t);
  else
    q_62 = t;
  t = not_null(p_62);
  if(((y_62 != NULL) && (y_62 != t)))
    _fail(t);
  else
    y_62 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(q_62), not_null(s_62), not_null(t_62), not_null(r_62));
  {
    static ATerm y_4 (ATerm t);
    static ATerm y_4 (ATerm t)
    {
      t = not_null(s_62);
      t = Hd_0_0(t);
      if(((u_62 != NULL) && (u_62 != t)))
        _fail(t);
      else
        u_62 = t;
      t = not_null(t_62);
      t = Hd_0_0(t);
      if(((v_62 != NULL) && (v_62 != t)))
        _fail(t);
      else
        v_62 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(u_62), not_null(v_62)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(x_4, y_4, z_4, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((w_62 != NULL) && (w_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_62 = ATgetArgument(t, 0);
      if(((x_62 != NULL) && (x_62 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_62), not_null(x_62));
  return(t);
}
static ATerm i_64 (ATerm b_63, ATerm c_63, ATerm d_63, ATerm e_63, ATerm f_63, ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
  t = not_null(b_63);
  if(((i_63 != NULL) && (i_63 != t)))
    _fail(t);
  else
    i_63 = t;
  t = not_null(c_63);
  if(((j_63 != NULL) && (j_63 != t)))
    _fail(t);
  else
    j_63 = t;
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
  if(((n_63 != NULL) && (n_63 != t)))
    _fail(t);
  else
    n_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_63), not_null(i_63), not_null(j_63));
  t = xtc_toption_to_args_2_0(a_5, b_5, t);
  if(match_cons(t, sym__2))
    {
      if(((l_63 != NULL) && (l_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_63 = ATgetArgument(t, 0);
      if(((m_63 != NULL) && (m_63 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_63), not_null(m_63));
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm d_59 = NULL;
  if(((d_59 != NULL) && (d_59 != t)))
    _fail(t);
  else
    d_59 = t;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_60 = NULL;
  if(((d_60 != NULL) && (d_60 != t)))
    _fail(t);
  else
    d_60 = t;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm r_60 = NULL;
  if(((r_60 != NULL) && (r_60 != t)))
    _fail(t);
  else
    r_60 = t;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_61 = NULL;
  if(((g_61 != NULL) && (g_61 != t)))
    _fail(t);
  else
    g_61 = t;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL;
  if(((w_61 != NULL) && (w_61 != t)))
    _fail(t);
  else
    w_61 = t;
  t = Hd_0_0(t);
  if(((v_61 != NULL) && (v_61 != t)))
    _fail(t);
  else
    v_61 = t;
  t = (ATerm) ATinsert(ATempty, not_null(v_61));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  if(((k_62 != NULL) && (k_62 != t)))
    _fail(t);
  else
    k_62 = t;
  t = Hd_0_0(t);
  if(((j_62 != NULL) && (j_62 != t)))
    _fail(t);
  else
    j_62 = t;
  t = (ATerm) ATinsert(ATempty, not_null(j_62));
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  if(((a_63 != NULL) && (a_63 != t)))
    _fail(t);
  else
    a_63 = t;
  t = Hd_0_0(t);
  if(((z_62 != NULL) && (z_62 != t)))
    _fail(t);
  else
    z_62 = t;
  t = (ATerm) ATinsert(ATempty, not_null(z_62));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL;
  if(((p_63 != NULL) && (p_63 != t)))
    _fail(t);
  else
    p_63 = t;
  t = Hd_0_0(t);
  if(((o_63 != NULL) && (o_63 != t)))
    _fail(t);
  else
    o_63 = t;
  t = (ATerm) ATinsert(ATempty, not_null(o_63));
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  if(((s_63 != NULL) && (s_63 != t)))
    _fail(t);
  else
    s_63 = t;
  if(match_cons(t, sym__2))
    {
      if(((t_63 != NULL) && (t_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_63 = ATgetArgument(t, 0);
      if(((a_64 != NULL) && (a_64 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_63);
  if(match_cons(t, sym_TVarStar_4))
    {
      u_63 = ATgetArgument(t, 0);
      v_63 = ATgetArgument(t, 1);
      w_63 = ATgetArgument(t, 2);
      y_63 = ATgetArgument(t, 3);
      t = not_null(u_63);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(w_63);
          if(match_cons(t, sym_Some_1))
            {
              if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(x_63);
          if(match_cons(t, sym_Default_1))
            {
              if(((q_63 != NULL) && (q_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(q_63);
          if(match_cons(t, sym_Values_1))
            {
              if(((r_63 != NULL) && (r_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(y_63);
          if(match_cons(t, sym_Some_1))
            {
              if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_64(not_null(v_63), not_null(r_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(w_63);
          if(match_cons(t, sym_Some_1))
            {
              if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(y_63);
          if(match_cons(t, sym_Some_1))
            {
              if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_64(not_null(v_63), not_null(x_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          u_63 = ATgetArgument(t, 0);
          v_63 = ATgetArgument(t, 1);
          w_63 = ATgetArgument(t, 2);
          y_63 = ATgetArgument(t, 3);
          t = not_null(u_63);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(w_63);
              if(match_cons(t, sym_Some_1))
                {
                  if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(x_63);
              if(match_cons(t, sym_Default_1))
                {
                  if(((q_63 != NULL) && (q_63 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(q_63);
              if(match_cons(t, sym_Values_1))
                {
                  if(((r_63 != NULL) && (r_63 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(y_63);
              if(match_cons(t, sym_Some_1))
                {
                  if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    z_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_64(not_null(v_63), not_null(r_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(w_63);
              if(match_cons(t, sym_Some_1))
                {
                  if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(y_63);
              if(match_cons(t, sym_Some_1))
                {
                  if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    z_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_64(not_null(v_63), not_null(x_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              u_63 = ATgetArgument(t, 0);
              v_63 = ATgetArgument(t, 1);
              w_63 = ATgetArgument(t, 2);
              y_63 = ATgetArgument(t, 3);
              t = not_null(u_63);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(w_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(x_63);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((q_63 != NULL) && (q_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(q_63);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((r_63 != NULL) && (r_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(y_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_64(not_null(v_63), not_null(r_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(w_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(y_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_64(not_null(v_63), not_null(x_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((u_63 != NULL) && (u_63 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_63 = ATgetArgument(t, 0);
                  if(((v_63 != NULL) && (v_63 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    v_63 = ATgetArgument(t, 1);
                  if(((w_63 != NULL) && (w_63 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    w_63 = ATgetArgument(t, 2);
                  if(((y_63 != NULL) && (y_63 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    y_63 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(u_63);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(w_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(x_63);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((q_63 != NULL) && (q_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(q_63);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((r_63 != NULL) && (r_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(y_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = h_64(not_null(v_63), not_null(r_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(w_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((x_63 != NULL) && (x_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(y_63);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_63 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_64(not_null(v_63), not_null(x_63), not_null(z_63), not_null(a_64), not_null(s_63), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm f_3, ATerm t)
{
  static ATerm c_65 (ATerm o_64, ATerm p_64, ATerm t);
  static ATerm d_65 (ATerm u_64, ATerm t);
  static ATerm c_65 (ATerm o_64, ATerm p_64, ATerm t)
  {
    ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
    t = not_null(o_64);
    if(((q_64 != NULL) && (q_64 != t)))
      _fail(t);
    else
      q_64 = t;
    t = not_null(p_64);
    if(((s_64 != NULL) && (s_64 != t)))
      _fail(t);
    else
      s_64 = t;
    t = not_null(f_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((t_64 != NULL) && (t_64 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_64 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(t_64);
    if(((r_64 != NULL) && (r_64 != t)))
      _fail(t);
    else
      r_64 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(q_64), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(r_64)))));
    return(t);
  }
  static ATerm d_65 (ATerm u_64, ATerm t)
  {
    ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
    t = not_null(u_64);
    if(((w_64 != NULL) && (w_64 != t)))
      _fail(t);
    else
      w_64 = t;
    t = not_null(f_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((x_64 != NULL) && (x_64 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_64 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(x_64);
    if(((v_64 != NULL) && (v_64 != t)))
      _fail(t);
    else
      v_64 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(v_64)))));
    return(t);
  }
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  if(((z_64 != NULL) && (z_64 != t)))
    _fail(t);
  else
    z_64 = t;
  if(match_cons(t, sym_File_1))
    {
      a_65 = ATgetArgument(t, 0);
      t = not_null(a_65);
      if(match_cons(t, sym_Some_1))
        {
          y_64 = ATgetArgument(t, 0);
          t = c_65(not_null(y_64), not_null(z_64), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = d_65(not_null(z_64), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((a_65 != NULL) && (a_65 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_65);
      if(match_cons(t, sym_Some_1))
        {
          y_64 = ATgetArgument(t, 0);
          {
            ATerm b_65 = NULL;
            t = not_null(y_64);
            if(((b_65 != NULL) && (b_65 != t)))
              _fail(t);
            else
              b_65 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(b_65)));
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
ATerm xtc_stream_to_arg_0_1 (ATerm e_3, ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL;
  if(((f_65 != NULL) && (f_65 != t)))
    _fail(t);
  else
    f_65 = t;
  if(match_cons(t, sym_Error_1))
    {
      g_65 = ATgetArgument(t, 0);
      {
        ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
        t = not_null(g_65);
        if(((h_65 != NULL) && (h_65 != t)))
          _fail(t);
        else
          h_65 = t;
        t = not_null(f_65);
        if(((j_65 != NULL) && (j_65 != t)))
          _fail(t);
        else
          j_65 = t;
        t = not_null(h_65);
        t = xtc_streamdef_to_arg_0_1(not_null(e_3), t);
        if(((i_65 != NULL) && (i_65 != t)))
          _fail(t);
        else
          i_65 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          g_65 = ATgetArgument(t, 0);
          {
            ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
            t = not_null(g_65);
            if(((k_65 != NULL) && (k_65 != t)))
              _fail(t);
            else
              k_65 = t;
            t = not_null(f_65);
            if(((m_65 != NULL) && (m_65 != t)))
              _fail(t);
            else
              m_65 = t;
            t = not_null(k_65);
            t = xtc_streamdef_to_arg_0_1(not_null(e_3), t);
            if(((l_65 != NULL) && (l_65 != t)))
              _fail(t);
            else
              l_65 = t;
          }
        }
      else
        {
          ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((g_65 != NULL) && (g_65 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(g_65);
          if(((n_65 != NULL) && (n_65 != t)))
            _fail(t);
          else
            n_65 = t;
          t = not_null(f_65);
          if(((p_65 != NULL) && (p_65 != t)))
            _fail(t);
          else
            p_65 = t;
          t = not_null(n_65);
          t = xtc_streamdef_to_arg_0_1(not_null(e_3), t);
          if(((o_65 != NULL) && (o_65 != t)))
            _fail(t);
          else
            o_65 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm q_65 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm d_48 = ATgetArgument(t, 0);
      if(match_cons(d_48, sym_Some_1))
        {
          if(((q_65 != NULL) && (q_65 != ATgetArgument(d_48, 0))))
            _fail(ATgetArgument(d_48, 0));
          else
            q_65 = ATgetArgument(d_48, 0);
        }
      else
        _fail(t);
      {
        ATerm n_48 = ATgetArgument(t, 1);
      }
      {
        ATerm p_48 = ATgetArgument(t, 2);
      }
      {
        ATerm v_48 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(q_65);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm r_65 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((r_65 != NULL) && (r_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_65 = ATgetArgument(t, 0);
      {
        ATerm w_48 = ATgetArgument(t, 1);
      }
      {
        ATerm x_48 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(r_65);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  if(((z_65 != NULL) && (z_65 != t)))
    _fail(t);
  else
    z_65 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((a_66 != NULL) && (a_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(a_66);
  if(match_cons(t, sym_HTTP_1))
    {
      b_66 = ATgetArgument(t, 0);
      {
        ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
        t = not_null(b_66);
        if(((e_66 != NULL) && (e_66 != t)))
          _fail(t);
        else
          e_66 = t;
        t = not_null(z_65);
        if(((g_66 != NULL) && (g_66 != t)))
          _fail(t);
        else
          g_66 = t;
        t = not_null(e_66);
        t = xtc_stream_input_0_0(t);
        if(((f_66 != NULL) && (f_66 != t)))
          _fail(t);
        else
          f_66 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_e_49;
        }
      else
        {
          ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((b_66 != NULL) && (b_66 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(b_66);
          if(((i_66 != NULL) && (i_66 != t)))
            _fail(t);
          else
            i_66 = t;
          t = not_null(z_65);
          if(((k_66 != NULL) && (k_66 != t)))
            _fail(t);
          else
            k_66 = t;
          t = not_null(i_66);
          t = xtc_stream_input_0_0(t);
          if(((j_66 != NULL) && (j_66 != t)))
            _fail(t);
          else
            j_66 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm l_66 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm k_49 = ATgetArgument(t, 0);
      ATerm l_49 = ATgetArgument(t, 1);
      if(match_cons(l_49, sym_Some_1))
        {
          if(((l_66 != NULL) && (l_66 != ATgetArgument(l_49, 0))))
            _fail(ATgetArgument(l_49, 0));
          else
            l_66 = ATgetArgument(l_49, 0);
        }
      else
        _fail(t);
      {
        ATerm p_49 = ATgetArgument(t, 2);
      }
      {
        ATerm q_49 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(l_66);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm m_66 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm r_49 = ATgetArgument(t, 0);
      if(((m_66 != NULL) && (m_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_66 = ATgetArgument(t, 1);
      {
        ATerm s_49 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(m_66);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm x_49 = ATgetArgument(t, 0);
      if(match_cons(x_49, sym_Exec_1))
        {
          if(((n_66 != NULL) && (n_66 != ATgetArgument(x_49, 0))))
            _fail(ATgetArgument(x_49, 0));
          else
            n_66 = ATgetArgument(x_49, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((p_66 != NULL) && (p_66 != t)))
    _fail(t);
  else
    p_66 = t;
  t = not_null(n_66);
  t = xtc_stream_output_0_0(t);
  if(((o_66 != NULL) && (o_66 != t)))
    _fail(t);
  else
    o_66 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm q_66 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm y_49 = ATgetArgument(t, 0);
      ATerm z_49 = ATgetArgument(t, 1);
      ATerm a_50 = ATgetArgument(t, 2);
      if(match_cons(a_50, sym_Some_1))
        {
          if(((q_66 != NULL) && (q_66 != ATgetArgument(a_50, 0))))
            _fail(ATgetArgument(a_50, 0));
          else
            q_66 = ATgetArgument(a_50, 0);
        }
      else
        _fail(t);
      {
        ATerm b_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(q_66);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm r_66 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm c_50 = ATgetArgument(t, 0);
      ATerm d_50 = ATgetArgument(t, 1);
      if(((r_66 != NULL) && (r_66 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_66 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(r_66);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm e_50 = ATgetArgument(t, 0);
      if(match_cons(e_50, sym_Exec_1))
        {
          if(((s_66 != NULL) && (s_66 != ATgetArgument(e_50, 0))))
            _fail(ATgetArgument(e_50, 0));
          else
            s_66 = ATgetArgument(e_50, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((u_66 != NULL) && (u_66 != t)))
    _fail(t);
  else
    u_66 = t;
  t = not_null(s_66);
  t = xtc_stream_error_0_0(t);
  if(((t_66 != NULL) && (t_66 != t)))
    _fail(t);
  else
    t_66 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm c_3, ATerm d_3, ATerm t)
{
  static ATerm a_68 (ATerm a_67, ATerm t);
  static ATerm b_68 (ATerm i_67, ATerm t);
  static ATerm c_68 (ATerm q_67, ATerm t);
  static ATerm a_68 (ATerm a_67, ATerm t)
  {
    ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
    t = not_null(a_67);
    if(((c_67 != NULL) && (c_67 != t)))
      _fail(t);
    else
      c_67 = t;
    t = not_null(c_3);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((d_67 != NULL) && (d_67 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_67 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(d_67);
    if(((f_67 != NULL) && (f_67 != t)))
      _fail(t);
    else
      f_67 = t;
    if(((h_67 != NULL) && (h_67 != t)))
      _fail(t);
    else
      h_67 = t;
    t = not_null(d_3);
    t = xtc_conf_error_0_0(t);
    if(((g_67 != NULL) && (g_67 != t)))
      _fail(t);
    else
      g_67 = t;
    if(((e_67 != NULL) && (e_67 != t)))
      _fail(t);
    else
      e_67 = t;
    t = not_null(f_67);
    t = xtc_stream_to_arg_0_1(not_null(e_67), t);
    if(((b_67 != NULL) && (b_67 != t)))
      _fail(t);
    else
      b_67 = t;
    return(t);
  }
  static ATerm b_68 (ATerm i_67, ATerm t)
  {
    ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL;
    t = not_null(i_67);
    if(((k_67 != NULL) && (k_67 != t)))
      _fail(t);
    else
      k_67 = t;
    t = not_null(c_3);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((l_67 != NULL) && (l_67 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_67 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(l_67);
    if(((n_67 != NULL) && (n_67 != t)))
      _fail(t);
    else
      n_67 = t;
    if(((p_67 != NULL) && (p_67 != t)))
      _fail(t);
    else
      p_67 = t;
    t = not_null(d_3);
    t = xtc_conf_output_0_0(t);
    if(((o_67 != NULL) && (o_67 != t)))
      _fail(t);
    else
      o_67 = t;
    if(((m_67 != NULL) && (m_67 != t)))
      _fail(t);
    else
      m_67 = t;
    t = not_null(n_67);
    t = xtc_stream_to_arg_0_1(not_null(m_67), t);
    if(((j_67 != NULL) && (j_67 != t)))
      _fail(t);
    else
      j_67 = t;
    return(t);
  }
  static ATerm c_68 (ATerm q_67, ATerm t)
  {
    ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL;
    t = not_null(q_67);
    if(((s_67 != NULL) && (s_67 != t)))
      _fail(t);
    else
      s_67 = t;
    t = not_null(c_3);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((t_67 != NULL) && (t_67 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_67 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(t_67);
    if(((v_67 != NULL) && (v_67 != t)))
      _fail(t);
    else
      v_67 = t;
    if(((x_67 != NULL) && (x_67 != t)))
      _fail(t);
    else
      x_67 = t;
    t = not_null(d_3);
    t = xtc_conf_input_0_0(t);
    if(((w_67 != NULL) && (w_67 != t)))
      _fail(t);
    else
      w_67 = t;
    if(((u_67 != NULL) && (u_67 != t)))
      _fail(t);
    else
      u_67 = t;
    t = not_null(v_67);
    t = xtc_stream_to_arg_0_1(not_null(u_67), t);
    if(((r_67 != NULL) && (r_67 != t)))
      _fail(t);
    else
      r_67 = t;
    return(t);
  }
  ATerm y_67 = NULL,z_67 = NULL;
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((z_67 != NULL) && (z_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(z_67);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_r_50);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = a_68(not_null(y_67), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = b_68(not_null(y_67), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = c_68(not_null(y_67), t);
            }
        }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm q_68 = NULL;
  if(((q_68 != NULL) && (q_68 != t)))
    _fail(t);
  else
    q_68 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_50 = ATgetArgument(t, 0);
      if(match_cons(s_50, sym_TOr_2))
        {
          if(((e_68 != NULL) && (e_68 != ATgetArgument(s_50, 0))))
            _fail(ATgetArgument(s_50, 0));
          else
            e_68 = ATgetArgument(s_50, 0);
          if(((f_68 != NULL) && (f_68 != ATgetArgument(s_50, 1))))
            _fail(ATgetArgument(s_50, 1));
          else
            f_68 = ATgetArgument(s_50, 1);
        }
      else
        _fail(t);
      if(((g_68 != NULL) && (g_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_68 != NULL) && (j_68 != t)))
    _fail(t);
  else
    j_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_68), not_null(f_68));
  if(((l_68 != NULL) && (l_68 != t)))
    _fail(t);
  else
    l_68 = t;
  t = term_a_52;
  if(((k_68 != NULL) && (k_68 != t)))
    _fail(t);
  else
    k_68 = t;
  t = not_null(l_68);
  t = dbg_0_1(not_null(k_68), t);
  {
    ATerm z_52 = t;
    int c_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_68 = NULL,n_68 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_68), not_null(g_68));
        t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
        if(((n_68 != NULL) && (n_68 != t)))
          _fail(t);
        else
          n_68 = t;
        t = term_d_53;
        if(((m_68 != NULL) && (m_68 != t)))
          _fail(t);
        else
          m_68 = t;
        t = not_null(n_68);
        t = dbg_0_1(not_null(m_68), t);
        LocalPopChoice(c_53);
      }
    else
      {
        t = z_52;
        {
          ATerm o_68 = NULL,p_68 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), not_null(g_68));
          t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
          if(((p_68 != NULL) && (p_68 != t)))
            _fail(t);
          else
            p_68 = t;
          t = term_i_53;
          if(((o_68 != NULL) && (o_68 != t)))
            _fail(t);
          else
            o_68 = t;
          t = not_null(p_68);
          t = dbg_0_1(not_null(o_68), t);
        }
      }
  }
  t = _2_0(concat_0_0, c_5, t);
  if(match_cons(t, sym__2))
    {
      if(((h_68 != NULL) && (h_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_68 = ATgetArgument(t, 0);
      if(((i_68 != NULL) && (i_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_68), not_null(i_68));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm r_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_53 = ATgetArgument(t, 0);
      if(((ATgetType(j_53) != AT_LIST) || !(ATisEmpty(j_53))))
        _fail(t);
      if(((r_68 != NULL) && (r_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_68));
  return(t);
}
ATerm Cons_T_2_0 (ATerm d_1 (ATerm), ATerm i_1 (ATerm), ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_53 = ATgetArgument(t, 0);
      if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
        {
          if(((v_68 != NULL) && (v_68 != ATgetFirst((ATermList) o_53))))
            _fail(ATgetFirst((ATermList) o_53));
          else
            v_68 = ATgetFirst((ATermList) o_53);
          if(((w_68 != NULL) && (w_68 != (ATerm) ATgetNext((ATermList) o_53))))
            _fail((ATerm) ATgetNext((ATermList) o_53));
          else
            w_68 = (ATerm) ATgetNext((ATermList) o_53);
        }
      else
        _fail(t);
      if(((s_68 != NULL) && (s_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((z_68 != NULL) && (z_68 != t)))
    _fail(t);
  else
    z_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_68), not_null(s_68));
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      if(((x_68 != NULL) && (x_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_68 = ATgetArgument(t, 0);
      if(((t_68 != NULL) && (t_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_68), not_null(t_68));
  t = i_1(t);
  if(match_cons(t, sym__2))
    {
      if(((y_68 != NULL) && (y_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_68 = ATgetArgument(t, 0);
      if(((u_68 != NULL) && (u_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_68)), not_null(x_68)), not_null(u_68));
  return(t);
}
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  static ATerm a_69 (ATerm t);
  static ATerm a_69 (ATerm t)
  {
    ATerm p_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(t_130, a_69, t);
        LocalPopChoice(w_53);
      }
    else
      {
        t = p_53;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = a_69(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm c_69 = NULL;
  if(((c_69 != NULL) && (c_69 != t)))
    _fail(t);
  else
    c_69 = t;
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t)
{
  static ATerm d_5 (ATerm t);
  static ATerm d_5 (ATerm t)
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(x_91), not_null(y_91), t);
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        {
          ATerm o_54 = t;
          int r_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm e_5 (ATerm t);
              static ATerm e_5 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(x_91), not_null(y_91), t);
                return(t);
              }
              t = _2_0(e_5, f_5, t);
              LocalPopChoice(r_54);
            }
          else
            {
              t = o_54;
              {
                ATerm s_54 = t;
                int w_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(w_54);
                  }
                else
                  {
                    t = s_54;
                    t = n_151(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(d_5, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm d_69 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm x_54 = ATgetArgument(t, 0);
      ATerm y_54 = ATgetArgument(t, 1);
      ATerm z_54 = ATgetArgument(t, 2);
      if(((d_69 != NULL) && (d_69 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        d_69 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(d_69);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  if(((k_69 != NULL) && (k_69 != t)))
    _fail(t);
  else
    k_69 = t;
  t = Snd_0_0(t);
  if(((j_69 != NULL) && (j_69 != t)))
    _fail(t);
  else
    j_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_69));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm l_69 = NULL;
  if(((l_69 != NULL) && (l_69 != t)))
    _fail(t);
  else
    l_69 = t;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
  if(((n_69 != NULL) && (n_69 != t)))
    _fail(t);
  else
    n_69 = t;
  t = Snd_0_0(t);
  if(((p_69 != NULL) && (p_69 != t)))
    _fail(t);
  else
    p_69 = t;
  t = term_a_55;
  if(((o_69 != NULL) && (o_69 != t)))
    _fail(t);
  else
    o_69 = t;
  t = not_null(p_69);
  t = err_0_1(not_null(o_69), t);
  t = not_null(n_69);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_55 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm e_55 = ATgetArgument(t, 0);
          if(!(match_cons(e_55, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_55;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  if(((i_69 != NULL) && (i_69 != t)))
    _fail(t);
  else
    i_69 = t;
  if(((f_69 != NULL) && (f_69 != t)))
    _fail(t);
  else
    f_69 = t;
  t = not_null(i_69);
  if(((h_69 != NULL) && (h_69 != t)))
    _fail(t);
  else
    h_69 = t;
  t = not_null(w_91);
  t = xtc_conf_args_0_0(t);
  if(((g_69 != NULL) && (g_69 != t)))
    _fail(t);
  else
    g_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), not_null(g_69));
  t = xtc_targ_thread_map_1_2(g_5, not_null(v_91), not_null(w_91), t);
  t = _2_0(concat_0_0, h_5, t);
  {
    ATerm f_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_69 = NULL;
        if(((m_69 != NULL) && (m_69 != t)))
          _fail(t);
        else
          m_69 = t;
        t = Snd_0_0(t);
        {
          ATerm r_55 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_55;
            }
        }
        t = not_null(m_69);
        LocalPopChoice(q_55);
        t = restore_2_0(m_151, i_5, t);
      }
    else
      {
        t = f_55;
        t = Fst_0_0(t);
        t = filter_1_0(j_5, t);
      }
  }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm s_55 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm z_55 = ATgetArgument(t, 0);
          if(!(match_cons(z_55, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_55;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,w_69 = NULL;
  if(((r_69 != NULL) && (r_69 != t)))
    _fail(t);
  else
    r_69 = t;
  if(((w_69 != NULL) && (w_69 != t)))
    _fail(t);
  else
    w_69 = t;
  t = filter_1_0(k_5, t);
  if(((s_69 != NULL) && (s_69 != t)))
    _fail(t);
  else
    s_69 = t;
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_69 = NULL;
        if(((x_69 != NULL) && (x_69 != t)))
          _fail(t);
        else
          x_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_69), not_null(s_69));
        {
          ATerm c_56 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_56;
            }
        }
        t = not_null(x_69);
        LocalPopChoice(b_56);
        {
          ATerm y_69 = NULL,z_69 = NULL;
          if(((z_69 != NULL) && (z_69 != t)))
            _fail(t);
          else
            z_69 = t;
          t = term_d_56;
          if(((y_69 != NULL) && (y_69 != t)))
            _fail(t);
          else
            y_69 = t;
          t = not_null(z_69);
          t = err_0_1(not_null(y_69), t);
        }
      }
    else
      {
        t = a_56;
        {
          ATerm a_70 = NULL;
          if(((a_70 != NULL) && (a_70 != t)))
            _fail(t);
          else
            a_70 = t;
        }
      }
  }
  t = not_null(s_69);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm w_0, ATerm x_0, ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,s_70 = NULL,t_70 = NULL,v_70 = NULL;
  if(((m_70 != NULL) && (m_70 != t)))
    _fail(t);
  else
    m_70 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((n_70 != NULL) && (n_70 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_70 = ATgetArgument(t, 0);
      if(((s_70 != NULL) && (s_70 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_70);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm w_70 = NULL,b_71 = NULL,c_71 = NULL;
      t = not_null(s_70);
      if(match_cons(t, sym_Some_1))
        {
          if(((t_70 != NULL) && (t_70 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(t_70);
      if(match_cons(t, sym_Layout_1))
        {
          if(((v_70 != NULL) && (v_70 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(v_70);
      if(((w_70 != NULL) && (w_70 != t)))
        _fail(t);
      else
        w_70 = t;
      t = not_null(m_70);
      if(((c_71 != NULL) && (c_71 != t)))
        _fail(t);
      else
        c_71 = t;
      t = not_null(w_70);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(w_0), not_null(x_0), t);
      if(((b_71 != NULL) && (b_71 != t)))
        _fail(t);
      else
        b_71 = t;
    }
  else
    {
      ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(s_70);
      if(match_cons(t, sym_Some_1))
        {
          if(((t_70 != NULL) && (t_70 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(t_70);
      if(match_cons(t, sym_Layout_1))
        {
          if(((v_70 != NULL) && (v_70 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(v_70);
      if(((d_71 != NULL) && (d_71 != t)))
        _fail(t);
      else
        d_71 = t;
      t = not_null(m_70);
      if(((f_71 != NULL) && (f_71 != t)))
        _fail(t);
      else
        f_71 = t;
      t = not_null(d_71);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(w_0), not_null(x_0), t);
      if(((e_71 != NULL) && (e_71 != t)))
        _fail(t);
      else
        e_71 = t;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm m_71 = NULL;
  if(((m_71 != NULL) && (m_71 != t)))
    _fail(t);
  else
    m_71 = t;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm n_71 = NULL;
  if(((n_71 != NULL) && (n_71 != t)))
    _fail(t);
  else
    n_71 = t;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_71 = NULL;
  if(((t_71 != NULL) && (t_71 != t)))
    _fail(t);
  else
    t_71 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL;
  static ATerm o_5 (ATerm t);
  static ATerm o_5 (ATerm t)
  {
    t = not_null(j_71);
    t = xtc_template_to_args_0_2(not_null(k_71), not_null(p_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((k_71 != NULL) && (k_71 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_71 = ATgetArgument(t, 0);
      if(((j_71 != NULL) && (j_71 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_92);
  t = XtcConf_4_0(l_5, m_5, n_5, o_5, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  if(((o_72 != NULL) && (o_72 != t)))
    _fail(t);
  else
    o_72 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      p_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
      r_72 = ATgetArgument(t, 2);
      s_72 = ATgetArgument(t, 3);
      t = not_null(r_72);
      if(match_cons(t, sym_Some_1))
        {
          m_72 = ATgetArgument(t, 0);
          {
            ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL;
            t = not_null(s_72);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(p_72);
            if(((t_72 != NULL) && (t_72 != t)))
              _fail(t);
            else
              t_72 = t;
            t = not_null(q_72);
            if(((u_72 != NULL) && (u_72 != t)))
              _fail(t);
            else
              u_72 = t;
            t = not_null(m_72);
            if(((v_72 != NULL) && (v_72 != t)))
              _fail(t);
            else
              v_72 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(t_72), not_null(u_72), (ATerm)ATmakeAppl(sym_Some_1, not_null(v_72)), term_n_56);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(s_72);
          if(match_cons(t, sym_Some_1))
            {
              n_72 = ATgetArgument(t, 0);
              {
                ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL;
                t = not_null(p_72);
                if(((w_72 != NULL) && (w_72 != t)))
                  _fail(t);
                else
                  w_72 = t;
                t = not_null(q_72);
                if(((x_72 != NULL) && (x_72 != t)))
                  _fail(t);
                else
                  x_72 = t;
                t = not_null(n_72);
                if(((y_72 != NULL) && (y_72 != t)))
                  _fail(t);
                else
                  y_72 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(w_72), not_null(x_72), term_q_56, (ATerm) ATmakeAppl(sym_Some_1, not_null(y_72)));
              }
            }
          else
            {
              ATerm z_72 = NULL,a_73 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(p_72);
              if(((z_72 != NULL) && (z_72 != t)))
                _fail(t);
              else
                z_72 = t;
              t = not_null(q_72);
              if(((a_73 != NULL) && (a_73 != t)))
                _fail(t);
              else
                a_73 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(z_72), not_null(a_73), term_q_56, term_n_56);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          p_72 = ATgetArgument(t, 0);
          q_72 = ATgetArgument(t, 1);
          r_72 = ATgetArgument(t, 2);
          s_72 = ATgetArgument(t, 3);
          t = not_null(r_72);
          if(match_cons(t, sym_Some_1))
            {
              m_72 = ATgetArgument(t, 0);
              {
                ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
                t = not_null(s_72);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(p_72);
                if(((b_73 != NULL) && (b_73 != t)))
                  _fail(t);
                else
                  b_73 = t;
                t = not_null(q_72);
                if(((c_73 != NULL) && (c_73 != t)))
                  _fail(t);
                else
                  c_73 = t;
                t = not_null(m_72);
                if(((d_73 != NULL) && (d_73 != t)))
                  _fail(t);
                else
                  d_73 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(b_73), not_null(c_73), (ATerm)ATmakeAppl(sym_Some_1, not_null(d_73)), term_n_56);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(s_72);
              if(match_cons(t, sym_Some_1))
                {
                  n_72 = ATgetArgument(t, 0);
                  {
                    ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
                    t = not_null(p_72);
                    if(((e_73 != NULL) && (e_73 != t)))
                      _fail(t);
                    else
                      e_73 = t;
                    t = not_null(q_72);
                    if(((f_73 != NULL) && (f_73 != t)))
                      _fail(t);
                    else
                      f_73 = t;
                    t = not_null(n_72);
                    if(((g_73 != NULL) && (g_73 != t)))
                      _fail(t);
                    else
                      g_73 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(e_73), not_null(f_73), term_q_56, (ATerm) ATmakeAppl(sym_Some_1, not_null(g_73)));
                  }
                }
              else
                {
                  ATerm h_73 = NULL,i_73 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(p_72);
                  if(((h_73 != NULL) && (h_73 != t)))
                    _fail(t);
                  else
                    h_73 = t;
                  t = not_null(q_72);
                  if(((i_73 != NULL) && (i_73 != t)))
                    _fail(t);
                  else
                    i_73 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(h_73), not_null(i_73), term_q_56, term_n_56);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              p_72 = ATgetArgument(t, 0);
              q_72 = ATgetArgument(t, 1);
              r_72 = ATgetArgument(t, 2);
              s_72 = ATgetArgument(t, 3);
              t = not_null(r_72);
              if(match_cons(t, sym_Some_1))
                {
                  m_72 = ATgetArgument(t, 0);
                  {
                    ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
                    t = not_null(s_72);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(p_72);
                    if(((j_73 != NULL) && (j_73 != t)))
                      _fail(t);
                    else
                      j_73 = t;
                    t = not_null(q_72);
                    if(((k_73 != NULL) && (k_73 != t)))
                      _fail(t);
                    else
                      k_73 = t;
                    t = not_null(m_72);
                    if(((l_73 != NULL) && (l_73 != t)))
                      _fail(t);
                    else
                      l_73 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(j_73), not_null(k_73), (ATerm)ATmakeAppl(sym_Some_1, not_null(l_73)), term_n_56);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(s_72);
                  if(match_cons(t, sym_Some_1))
                    {
                      n_72 = ATgetArgument(t, 0);
                      {
                        ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
                        t = not_null(p_72);
                        if(((m_73 != NULL) && (m_73 != t)))
                          _fail(t);
                        else
                          m_73 = t;
                        t = not_null(q_72);
                        if(((n_73 != NULL) && (n_73 != t)))
                          _fail(t);
                        else
                          n_73 = t;
                        t = not_null(n_72);
                        if(((o_73 != NULL) && (o_73 != t)))
                          _fail(t);
                        else
                          o_73 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(m_73), not_null(n_73), term_q_56, (ATerm) ATmakeAppl(sym_Some_1, not_null(o_73)));
                      }
                    }
                  else
                    {
                      ATerm p_73 = NULL,q_73 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(p_72);
                      if(((p_73 != NULL) && (p_73 != t)))
                        _fail(t);
                      else
                        p_73 = t;
                      t = not_null(q_72);
                      if(((q_73 != NULL) && (q_73 != t)))
                        _fail(t);
                      else
                        q_73 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(p_73), not_null(q_73), term_q_56, term_n_56);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((p_72 != NULL) && (p_72 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_72 = ATgetArgument(t, 0);
                  if(((q_72 != NULL) && (q_72 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    q_72 = ATgetArgument(t, 1);
                  if(((r_72 != NULL) && (r_72 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    r_72 = ATgetArgument(t, 2);
                  if(((s_72 != NULL) && (s_72 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    s_72 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(r_72);
              if(match_cons(t, sym_Some_1))
                {
                  m_72 = ATgetArgument(t, 0);
                  {
                    ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
                    t = not_null(s_72);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(p_72);
                    if(((r_73 != NULL) && (r_73 != t)))
                      _fail(t);
                    else
                      r_73 = t;
                    t = not_null(q_72);
                    if(((s_73 != NULL) && (s_73 != t)))
                      _fail(t);
                    else
                      s_73 = t;
                    t = not_null(m_72);
                    if(((t_73 != NULL) && (t_73 != t)))
                      _fail(t);
                    else
                      t_73 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(r_73), not_null(s_73), (ATerm)ATmakeAppl(sym_Some_1, not_null(t_73)), term_n_56);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(s_72);
                  if(match_cons(t, sym_Some_1))
                    {
                      n_72 = ATgetArgument(t, 0);
                      {
                        ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
                        t = not_null(p_72);
                        if(((u_73 != NULL) && (u_73 != t)))
                          _fail(t);
                        else
                          u_73 = t;
                        t = not_null(q_72);
                        if(((v_73 != NULL) && (v_73 != t)))
                          _fail(t);
                        else
                          v_73 = t;
                        t = not_null(n_72);
                        if(((w_73 != NULL) && (w_73 != t)))
                          _fail(t);
                        else
                          w_73 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(u_73), not_null(v_73), term_q_56, (ATerm) ATmakeAppl(sym_Some_1, not_null(w_73)));
                      }
                    }
                  else
                    {
                      ATerm x_73 = NULL,y_73 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(p_72);
                      if(((x_73 != NULL) && (x_73 != t)))
                        _fail(t);
                      else
                        x_73 = t;
                      t = not_null(q_72);
                      if(((y_73 != NULL) && (y_73 != t)))
                        _fail(t);
                      else
                        y_73 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(x_73), not_null(y_73), term_q_56, term_n_56);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
  if(((g_74 != NULL) && (g_74 != t)))
    _fail(t);
  else
    g_74 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((h_74 != NULL) && (h_74 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_74 = ATgetArgument(t, 0);
      if(((i_74 != NULL) && (i_74 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_74);
  if(match_cons(t, sym_Some_1))
    {
      e_74 = ATgetArgument(t, 0);
      {
        ATerm j_74 = NULL,k_74 = NULL,v_74 = NULL;
        t = not_null(h_74);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(e_74);
        if(match_cons(t, sym_Layout_1))
          {
            if(((f_74 != NULL) && (f_74 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              f_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(f_74);
        if(((j_74 != NULL) && (j_74 != t)))
          _fail(t);
        else
          j_74 = t;
        t = not_null(g_74);
        if(((v_74 != NULL) && (v_74 != t)))
          _fail(t);
        else
          v_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_50), term_v_56), term_u_56), term_s_56), not_null(j_74));
        t = union_0_0(t);
        if(((k_74 != NULL) && (k_74 != t)))
          _fail(t);
        else
          k_74 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_w_56, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(k_74))));
      }
    }
  else
    {
      ATerm w_74 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(h_74);
      if(((w_74 != NULL) && (w_74 != t)))
        _fail(t);
      else
        w_74 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(w_74), term_b_57);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm c_57 = ATgetArgument(t, 0);
      if(!(match_cons(c_57, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_k_57;
  return(t);
}
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm p_5 (ATerm t);
  static ATerm p_5 (ATerm t)
  {
    t = bottomup_1_0(v_116, t);
    return(t);
  }
  t = SRTS_all(p_5, t);
  t = v_116(t);
  return(t);
}
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t);
  static ATerm q_5 (ATerm t)
  {
    static ATerm r_5 (ATerm t);
    static ATerm r_5 (ATerm t)
    {
      t = a_121(t);
      t = innermost_1_0(a_121, t);
      return(t);
    }
    t = try_1_0(r_5, t);
    return(t);
  }
  t = bottomup_1_0(q_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_57 = t;
  int m_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(m_57);
    }
  else
    {
      t = l_57;
      {
        ATerm n_57 = t;
        int o_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(o_57);
          }
        else
          {
            t = n_57;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(s_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm y_74 = NULL;
  if(((y_74 != NULL) && (y_74 != t)))
    _fail(t);
  else
    y_74 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  static ATerm z_74 (ATerm t);
  static ATerm z_74 (ATerm t)
  {
    ATerm p_57 = t;
    int q_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_5, z_74, t);
        LocalPopChoice(q_57);
      }
    else
      {
        t = p_57;
        t = Nil_0_0(t);
        t = u_123(t);
      }
    return(t);
  }
  t = z_74(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_57 = t;
  int s_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(s_57);
    }
  else
    {
      t = r_57;
      {
        ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
        if(((b_75 != NULL) && (b_75 != t)))
          _fail(t);
        else
          b_75 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_75 != NULL) && (c_75 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_75 = ATgetFirst((ATermList) t);
            if(((d_75 != NULL) && (d_75 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              d_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_75);
        if(((e_75 != NULL) && (e_75 != t)))
          _fail(t);
        else
          e_75 = t;
        t = not_null(d_75);
        if(((f_75 != NULL) && (f_75 != t)))
          _fail(t);
        else
          f_75 = t;
        t = not_null(b_75);
        if(((h_75 != NULL) && (h_75 != t)))
          _fail(t);
        else
          h_75 = t;
        t = not_null(e_75);
        {
          static ATerm u_5 (ATerm t);
          static ATerm u_5 (ATerm t)
          {
            t = not_null(f_75);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_5, t);
        }
        if(((g_75 != NULL) && (g_75 != t)))
          _fail(t);
        else
          g_75 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm g_80 (ATerm x_75, ATerm y_75, ATerm z_75, ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  t = not_null(x_75);
  if(((a_76 != NULL) && (a_76 != t)))
    _fail(t);
  else
    a_76 = t;
  t = not_null(y_75);
  if(((b_76 != NULL) && (b_76 != t)))
    _fail(t);
  else
    b_76 = t;
  t = not_null(z_75);
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  t = not_null(a_76);
  t = is_string_0_0(t);
  t = not_null(b_76);
  {
    ATerm t_57 = t;
    int u_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(v_5, t);
        LocalPopChoice(u_57);
      }
    else
      {
        t = t_57;
        t = XtcQuery_2_0(w_5, x_5, t);
      }
  }
  {
    ATerm v_57 = t;
    int w_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_76 = NULL;
        if(((h_76 != NULL) && (h_76 != t)))
          _fail(t);
        else
          h_76 = t;
        t = xtc_find_0_0(t);
        if(((c_76 != NULL) && (c_76 != t)))
          _fail(t);
        else
          c_76 = t;
        t = not_null(h_76);
        LocalPopChoice(w_57);
        {
          ATerm i_76 = NULL,j_76 = NULL;
          if(((j_76 != NULL) && (j_76 != t)))
            _fail(t);
          else
            j_76 = t;
          t = term_x_57;
          if(((i_76 != NULL) && (i_76 != t)))
            _fail(t);
          else
            i_76 = t;
          t = not_null(j_76);
          t = dbg_0_1(not_null(i_76), t);
        }
      }
    else
      {
        t = v_57;
        {
          ATerm k_76 = NULL,l_76 = NULL;
          if(((l_76 != NULL) && (l_76 != t)))
            _fail(t);
          else
            l_76 = t;
          t = term_y_57;
          if(((k_76 != NULL) && (k_76 != t)))
            _fail(t);
          else
            k_76 = t;
          t = not_null(l_76);
          t = err_0_1(not_null(k_76), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(a_76)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(c_76)))));
  return(t);
}
static ATerm j_80 (ATerm m_76, ATerm n_76, ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  t = not_null(m_76);
  if(((o_76 != NULL) && (o_76 != t)))
    _fail(t);
  else
    o_76 = t;
  t = not_null(n_76);
  if(((q_76 != NULL) && (q_76 != t)))
    _fail(t);
  else
    q_76 = t;
  t = not_null(o_76);
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(y_5, t);
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = XtcQuery_2_0(z_5, a_6, t);
      }
  }
  {
    ATerm b_58 = t;
    int c_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_76 = NULL;
        if(((u_76 != NULL) && (u_76 != t)))
          _fail(t);
        else
          u_76 = t;
        t = xtc_find_0_0(t);
        if(((p_76 != NULL) && (p_76 != t)))
          _fail(t);
        else
          p_76 = t;
        t = not_null(u_76);
        LocalPopChoice(c_58);
        {
          ATerm v_76 = NULL,w_76 = NULL;
          if(((w_76 != NULL) && (w_76 != t)))
            _fail(t);
          else
            w_76 = t;
          t = term_x_57;
          if(((v_76 != NULL) && (v_76 != t)))
            _fail(t);
          else
            v_76 = t;
          t = not_null(w_76);
          t = dbg_0_1(not_null(v_76), t);
        }
      }
    else
      {
        t = b_58;
        {
          ATerm x_76 = NULL,y_76 = NULL;
          if(((y_76 != NULL) && (y_76 != t)))
            _fail(t);
          else
            y_76 = t;
          t = term_y_57;
          if(((x_76 != NULL) && (x_76 != t)))
            _fail(t);
          else
            x_76 = t;
          t = not_null(y_76);
          t = err_0_1(not_null(x_76), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(p_76)))));
  return(t);
}
static ATerm k_80 (ATerm z_76, ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
  t = not_null(z_76);
  if(((a_77 != NULL) && (a_77 != t)))
    _fail(t);
  else
    a_77 = t;
  t = not_null(z_76);
  if(((c_77 != NULL) && (c_77 != t)))
    _fail(t);
  else
    c_77 = t;
  t = not_null(a_77);
  if(match_cons(t, sym_URL_1))
    {
      if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_77);
  if(((b_77 != NULL) && (b_77 != t)))
    _fail(t);
  else
    b_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(b_77)))));
  return(t);
}
static ATerm l_80 (ATerm e_77, ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL;
  t = not_null(e_77);
  if(((f_77 != NULL) && (f_77 != t)))
    _fail(t);
  else
    f_77 = t;
  t = not_null(e_77);
  if(((h_77 != NULL) && (h_77 != t)))
    _fail(t);
  else
    h_77 = t;
  t = not_null(f_77);
  if(match_cons(t, sym_FILE_1))
    {
      if(((i_77 != NULL) && (i_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(i_77);
  if(((g_77 != NULL) && (g_77 != t)))
    _fail(t);
  else
    g_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(g_77)))));
  return(t);
}
static ATerm m_80 (ATerm j_77, ATerm k_77, ATerm l_77, ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL;
  t = not_null(j_77);
  if(((m_77 != NULL) && (m_77 != t)))
    _fail(t);
  else
    m_77 = t;
  t = not_null(k_77);
  if(((n_77 != NULL) && (n_77 != t)))
    _fail(t);
  else
    n_77 = t;
  t = not_null(l_77);
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  t = not_null(m_77);
  t = is_string_0_0(t);
  t = not_null(n_77);
  if(match_cons(t, sym_URL_1))
    {
      if(((q_77 != NULL) && (q_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(q_77);
  if(((o_77 != NULL) && (o_77 != t)))
    _fail(t);
  else
    o_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(m_77)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(o_77)))));
  return(t);
}
static ATerm n_80 (ATerm r_77, ATerm s_77, ATerm t_77, ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  t = not_null(r_77);
  if(((u_77 != NULL) && (u_77 != t)))
    _fail(t);
  else
    u_77 = t;
  t = not_null(s_77);
  if(((v_77 != NULL) && (v_77 != t)))
    _fail(t);
  else
    v_77 = t;
  t = not_null(t_77);
  if(((x_77 != NULL) && (x_77 != t)))
    _fail(t);
  else
    x_77 = t;
  t = not_null(u_77);
  t = is_string_0_0(t);
  t = not_null(v_77);
  if(match_cons(t, sym_FILE_1))
    {
      if(((y_77 != NULL) && (y_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(y_77);
  if(((w_77 != NULL) && (w_77 != t)))
    _fail(t);
  else
    w_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(u_77)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(w_77)))));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm e_76 = NULL;
  if(((e_76 != NULL) && (e_76 != t)))
    _fail(t);
  else
    e_76 = t;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm f_76 = NULL;
  if(((f_76 != NULL) && (f_76 != t)))
    _fail(t);
  else
    f_76 = t;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm g_76 = NULL;
  if(((g_76 != NULL) && (g_76 != t)))
    _fail(t);
  else
    g_76 = t;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm r_76 = NULL;
  if(((r_76 != NULL) && (r_76 != t)))
    _fail(t);
  else
    r_76 = t;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm s_76 = NULL;
  if(((s_76 != NULL) && (s_76 != t)))
    _fail(t);
  else
    s_76 = t;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_76 = NULL;
  if(((t_76 != NULL) && (t_76 != t)))
    _fail(t);
  else
    t_76 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL;
  if(((a_78 != NULL) && (a_78 != t)))
    _fail(t);
  else
    a_78 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      b_78 = ATgetArgument(t, 0);
      c_78 = ATgetArgument(t, 1);
      t = not_null(b_78);
      if(match_cons(t, sym_String_1))
        {
          z_77 = ATgetArgument(t, 0);
          {
            ATerm d_58 = t;
            int e_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_80(not_null(z_77), not_null(c_78), not_null(a_78), t);
                LocalPopChoice(e_58);
              }
            else
              {
                t = d_58;
                {
                  ATerm f_58 = t;
                  int g_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_80(not_null(a_78), t);
                      LocalPopChoice(g_58);
                    }
                  else
                    {
                      t = f_58;
                      {
                        ATerm h_58 = t;
                        int i_58 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = l_80(not_null(a_78), t);
                            LocalPopChoice(i_58);
                          }
                        else
                          {
                            t = h_58;
                            {
                              ATerm d_78 = NULL,e_78 = NULL;
                              t = not_null(a_78);
                              if(((d_78 != NULL) && (d_78 != t)))
                                _fail(t);
                              else
                                d_78 = t;
                              t = not_null(a_78);
                              if(((e_78 != NULL) && (e_78 != t)))
                                _fail(t);
                              else
                                e_78 = t;
                              t = not_null(d_78);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(d_78))));
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
          ATerm j_58 = t;
          int k_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_80(not_null(a_78), t);
              LocalPopChoice(k_58);
            }
          else
            {
              t = j_58;
              {
                ATerm l_58 = t;
                int m_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_80(not_null(a_78), t);
                    LocalPopChoice(m_58);
                  }
                else
                  {
                    t = l_58;
                    {
                      ATerm f_78 = NULL,g_78 = NULL;
                      t = not_null(a_78);
                      if(((f_78 != NULL) && (f_78 != t)))
                        _fail(t);
                      else
                        f_78 = t;
                      t = not_null(a_78);
                      if(((g_78 != NULL) && (g_78 != t)))
                        _fail(t);
                      else
                        g_78 = t;
                      t = not_null(f_78);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(f_78))));
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
          b_78 = ATgetArgument(t, 0);
          {
            ATerm n_58 = t;
            int o_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_80(not_null(b_78), not_null(a_78), t);
                LocalPopChoice(o_58);
              }
            else
              {
                t = n_58;
                {
                  ATerm p_58 = t;
                  int q_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_80(not_null(a_78), t);
                      LocalPopChoice(q_59);
                    }
                  else
                    {
                      t = p_58;
                      {
                        ATerm s_59 = t;
                        int u_59 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = l_80(not_null(a_78), t);
                            LocalPopChoice(u_59);
                          }
                        else
                          {
                            t = s_59;
                            {
                              ATerm h_78 = NULL,i_78 = NULL;
                              t = not_null(a_78);
                              if(((h_78 != NULL) && (h_78 != t)))
                                _fail(t);
                              else
                                h_78 = t;
                              t = not_null(a_78);
                              if(((i_78 != NULL) && (i_78 != t)))
                                _fail(t);
                              else
                                i_78 = t;
                              t = not_null(h_78);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(h_78))));
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
              b_78 = ATgetArgument(t, 0);
              c_78 = ATgetArgument(t, 1);
              {
                ATerm v_59 = t;
                int y_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_80(not_null(a_78), t);
                    LocalPopChoice(y_59);
                  }
                else
                  {
                    t = v_59;
                    {
                      ATerm k_63 = t;
                      int j_64 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_80(not_null(a_78), t);
                          LocalPopChoice(j_64);
                        }
                      else
                        {
                          t = k_63;
                          {
                            ATerm k_64 = t;
                            int l_64 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_78 = NULL,k_78 = NULL;
                                t = not_null(a_78);
                                if(((j_78 != NULL) && (j_78 != t)))
                                  _fail(t);
                                else
                                  j_78 = t;
                                t = not_null(a_78);
                                if(((k_78 != NULL) && (k_78 != t)))
                                  _fail(t);
                                else
                                  k_78 = t;
                                t = not_null(j_78);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(j_78))));
                                LocalPopChoice(l_64);
                              }
                            else
                              {
                                t = k_64;
                                {
                                  ATerm m_64 = t;
                                  int n_64 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = m_80(not_null(b_78), not_null(c_78), not_null(a_78), t);
                                      LocalPopChoice(n_64);
                                    }
                                  else
                                    {
                                      t = m_64;
                                      {
                                        ATerm e_65 = t;
                                        int s_65 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_80(not_null(b_78), not_null(c_78), not_null(a_78), t);
                                            LocalPopChoice(s_65);
                                          }
                                        else
                                          {
                                            t = e_65;
                                            {
                                              ATerm t_65 = t;
                                              int u_65 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
                                                  t = not_null(b_78);
                                                  if(((l_78 != NULL) && (l_78 != t)))
                                                    _fail(t);
                                                  else
                                                    l_78 = t;
                                                  t = not_null(c_78);
                                                  if(((m_78 != NULL) && (m_78 != t)))
                                                    _fail(t);
                                                  else
                                                    m_78 = t;
                                                  t = not_null(a_78);
                                                  if(((n_78 != NULL) && (n_78 != t)))
                                                    _fail(t);
                                                  else
                                                    n_78 = t;
                                                  t = not_null(l_78);
                                                  t = is_string_0_0(t);
                                                  t = not_null(m_78);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(l_78)), (ATerm) ATmakeAppl(sym_String_1, not_null(m_78))));
                                                  LocalPopChoice(u_65);
                                                }
                                              else
                                                {
                                                  t = t_65;
                                                  {
                                                    ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
                                                    t = not_null(b_78);
                                                    if(((p_78 != NULL) && (p_78 != t)))
                                                      _fail(t);
                                                    else
                                                      p_78 = t;
                                                    t = not_null(c_78);
                                                    if(((o_78 != NULL) && (o_78 != t)))
                                                      _fail(t);
                                                    else
                                                      o_78 = t;
                                                    t = not_null(a_78);
                                                    if(((r_78 != NULL) && (r_78 != t)))
                                                      _fail(t);
                                                    else
                                                      r_78 = t;
                                                    t = not_null(p_78);
                                                    t = is_string_0_0(t);
                                                    t = not_null(o_78);
                                                    {
                                                      static ATerm b_6 (ATerm t);
                                                      static ATerm b_6 (ATerm t)
                                                      {
                                                        ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL,s_79 = NULL;
                                                        if(((t_78 != NULL) && (t_78 != t)))
                                                          _fail(t);
                                                        else
                                                          t_78 = t;
                                                        if(((s_79 != NULL) && (s_79 != t)))
                                                          _fail(t);
                                                        else
                                                          s_79 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_78), not_null(t_78));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((u_78 != NULL) && (u_78 != t)))
                                                          _fail(t);
                                                        else
                                                          u_78 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(b_6, t);
                                                    }
                                                    if(((q_78 != NULL) && (q_78 != t)))
                                                      _fail(t);
                                                    else
                                                      q_78 = t;
                                                  }
                                                }
                                            }
                                          }
                                      }
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
              ATerm v_65 = t;
              int w_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_80(not_null(a_78), t);
                  LocalPopChoice(w_65);
                }
              else
                {
                  t = v_65;
                  {
                    ATerm x_65 = t;
                    int y_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_80(not_null(a_78), t);
                        LocalPopChoice(y_65);
                      }
                    else
                      {
                        t = x_65;
                        {
                          ATerm t_79 = NULL,x_79 = NULL;
                          t = not_null(a_78);
                          if(((t_79 != NULL) && (t_79 != t)))
                            _fail(t);
                          else
                            t_79 = t;
                          t = not_null(a_78);
                          if(((x_79 != NULL) && (x_79 != t)))
                            _fail(t);
                          else
                            x_79 = t;
                          t = not_null(t_79);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(t_79))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_66 = t;
  int d_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(d_66);
    }
  else
    {
      t = c_66;
      {
        ATerm h_81 = NULL,i_81 = NULL,m_81 = NULL;
        if(((h_81 != NULL) && (h_81 != t)))
          _fail(t);
        else
          h_81 = t;
        if(((m_81 != NULL) && (m_81 != t)))
          _fail(t);
        else
          m_81 = t;
        t = not_null(h_81);
        if(((i_81 != NULL) && (i_81 != t)))
          _fail(t);
        else
          i_81 = t;
        t = (ATerm) ATinsert(ATempty, not_null(i_81));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL;
  static ATerm h_91 (ATerm t);
  static ATerm h_91 (ATerm t)
  {
    ATerm h_66 = t;
    int v_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_80 != NULL) && (o_80 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_80 = ATgetFirst((ATermList) t);
            {
              ATerm w_66 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(w_66) == AT_LIST) && !(ATisEmpty(w_66))))
                {
                  if(((p_80 != NULL) && (p_80 != ATgetFirst((ATermList) w_66))))
                    _fail(ATgetFirst((ATermList) w_66));
                  else
                    p_80 = ATgetFirst((ATermList) w_66);
                  if(((q_80 != NULL) && (q_80 != (ATerm) ATgetNext((ATermList) w_66))))
                    _fail((ATerm) ATgetNext((ATermList) w_66));
                  else
                    q_80 = (ATerm) ATgetNext((ATermList) w_66);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_66);
        {
          ATerm x_66 = t;
          int y_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_80 = NULL;
              if(((r_80 != NULL) && (r_80 != t)))
                _fail(t);
              else
                r_80 = t;
              t = not_null(o_80);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(r_80);
              LocalPopChoice(y_66);
              {
                ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
                if(((v_80 != NULL) && (v_80 != t)))
                  _fail(t);
                else
                  v_80 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_80), not_null(p_80));
                if(((x_80 != NULL) && (x_80 != t)))
                  _fail(t);
                else
                  x_80 = t;
                t = term_z_66;
                if(((w_80 != NULL) && (w_80 != t)))
                  _fail(t);
                else
                  w_80 = t;
                t = not_null(x_80);
                t = dbg_0_1(not_null(w_80), t);
                t = xtc_desugar_arg_0_0(t);
                if(((s_80 != NULL) && (s_80 != t)))
                  _fail(t);
                else
                  s_80 = t;
                t = not_null(v_80);
                if(((u_80 != NULL) && (u_80 != t)))
                  _fail(t);
                else
                  u_80 = t;
                t = not_null(q_80);
                t = h_91(t);
                if(((t_80 != NULL) && (t_80 != t)))
                  _fail(t);
                else
                  t_80 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(t_80)), not_null(s_80));
              }
            }
          else
            {
              t = x_66;
              {
                ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
                if(((b_81 != NULL) && (b_81 != t)))
                  _fail(t);
                else
                  b_81 = t;
                t = not_null(o_80);
                {
                  ATerm d_68 = t;
                  int b_69 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(b_69);
                    }
                  else
                    {
                      t = d_68;
                      {
                        ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
                        if(((c_81 != NULL) && (c_81 != t)))
                          _fail(t);
                        else
                          c_81 = t;
                        if(((e_81 != NULL) && (e_81 != t)))
                          _fail(t);
                        else
                          e_81 = t;
                        t = not_null(c_81);
                        if(((d_81 != NULL) && (d_81 != t)))
                          _fail(t);
                        else
                          d_81 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(d_81));
                      }
                    }
                }
                if(((y_80 != NULL) && (y_80 != t)))
                  _fail(t);
                else
                  y_80 = t;
                t = not_null(b_81);
                if(((a_81 != NULL) && (a_81 != t)))
                  _fail(t);
                else
                  a_81 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(p_80)), not_null(q_80));
                t = conc_0_0(t);
                t = h_91(t);
                if(((z_80 != NULL) && (z_80 != t)))
                  _fail(t);
                else
                  z_80 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(z_80)), not_null(y_80));
              }
            }
        }
      }
    else
      {
        t = h_66;
        {
          ATerm e_69 = t;
          int q_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(c_6, h_91, t);
              LocalPopChoice(q_69);
            }
          else
            {
              t = e_69;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = h_91(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm n_91 = NULL;
  if(((n_91 != NULL) && (n_91 != t)))
    _fail(t);
  else
    n_91 = t;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm o_91 = NULL;
  if(((o_91 != NULL) && (o_91 != t)))
    _fail(t);
  else
    o_91 = t;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm q_91 = NULL;
  if(((q_91 != NULL) && (q_91 != t)))
    _fail(t);
  else
    q_91 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(d_6, e_6, f_6, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm p_93 = NULL;
  if(((p_93 != NULL) && (p_93 != t)))
    _fail(t);
  else
    p_93 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,l_92 = NULL,m_92 = NULL,h_93 = NULL,i_93 = NULL,k_93 = NULL,m_93 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, g_6, t);
  if(match_cons(t, sym__2))
    {
      if(((h_92 != NULL) && (h_92 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_92 = ATgetArgument(t, 0);
      if(((i_92 != NULL) && (i_92 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((m_93 != NULL) && (m_93 != t)))
    _fail(t);
  else
    m_93 = t;
  t = term_t_69;
  if(((k_93 != NULL) && (k_93 != t)))
    _fail(t);
  else
    k_93 = t;
  t = not_null(m_93);
  t = xtc_fetch_meta_0_1(not_null(k_93), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm u_69 = ATgetArgument(t, 0);
      if(match_cons(u_69, sym_XtcDesc_1))
        {
          if(((l_92 != NULL) && (l_92 != ATgetArgument(u_69, 0))))
            _fail(ATgetArgument(u_69, 0));
          else
            l_92 = ATgetArgument(u_69, 0);
        }
      else
        _fail(t);
      {
        ATerm v_69 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(h_92), t);
  if(((m_92 != NULL) && (m_92 != t)))
    _fail(t);
  else
    m_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_92), not_null(m_92), not_null(i_92));
  t = xtc_prepare_0_0(t);
  if(((i_93 != NULL) && (i_93 != t)))
    _fail(t);
  else
    i_93 = t;
  if(((h_93 != NULL) && (h_93 != t)))
    _fail(t);
  else
    h_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_92), not_null(m_92), not_null(h_93));
  return(t);
}
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, q_130, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t)
{
  static ATerm h_6 (ATerm t);
  static ATerm h_6 (ATerm t)
  {
    ATerm t_93 = NULL;
    ATerm b_70 = t;
    int c_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_95 (ATerm v_93, ATerm t);
        static ATerm c_95 (ATerm v_93, ATerm t)
        {
          ATerm x_93 = NULL,a_94 = NULL,c_94 = NULL,e_94 = NULL,s_94 = NULL,t_94 = NULL;
          t = not_null(v_93);
          if(((e_94 != NULL) && (e_94 != t)))
            _fail(t);
          else
            e_94 = t;
          t = not_null(v_93);
          if(((s_94 != NULL) && (s_94 != t)))
            _fail(t);
          else
            s_94 = t;
          t = not_null(e_94);
          if(((t_94 != NULL) && (t_94 != t)))
            _fail(t);
          else
            t_94 = t;
          t = SSL_explode_term(not_null(t_94));
          if(match_cons(t, sym__2))
            {
              if(((t_93 != NULL) && (t_93 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_93 = ATgetArgument(t, 0);
              {
                ATerm d_70 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(s_94);
          if(((c_94 != NULL) && (c_94 != t)))
            _fail(t);
          else
            c_94 = t;
          t = not_null(e_80);
          {
            ATerm e_70 = t;
            if((PushChoice() == 0))
              {
                static ATerm i_6 (ATerm t);
                static ATerm i_6 (ATerm t)
                {
                  ATerm w_94 = NULL,z_94 = NULL,a_95 = NULL;
                  if(((w_94 != NULL) && (w_94 != t)))
                    _fail(t);
                  else
                    w_94 = t;
                  if(((z_94 != NULL) && (z_94 != t)))
                    _fail(t);
                  else
                    z_94 = t;
                  t = not_null(w_94);
                  if(((a_95 != NULL) && (a_95 != t)))
                    _fail(t);
                  else
                    a_95 = t;
                  t = SSL_explode_term(not_null(a_95));
                  if(match_cons(t, sym__2))
                    {
                      if(((t_93 != NULL) && (t_93 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_93 = ATgetArgument(t, 0);
                      {
                        ATerm f_70 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(z_94);
                  return(t);
                }
                t = SRTS_one(i_6, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_70;
              }
          }
          t = not_null(c_94);
          if(((a_94 != NULL) && (a_94 != t)))
            _fail(t);
          else
            a_94 = t;
          if(((x_93 != NULL) && (x_93 != t)))
            _fail(t);
          else
            x_93 = t;
          t = (ATerm) ATinsert(ATempty, not_null(x_93));
          return(t);
        }
        ATerm b_95 = NULL;
        if(((b_95 != NULL) && (b_95 != t)))
          _fail(t);
        else
          b_95 = t;
        t = c_95(not_null(b_95), t);
        LocalPopChoice(c_70);
      }
    else
      {
        t = b_70;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(h_6, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,l_95 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_95 != NULL) && (d_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_95 = ATgetArgument(t, 0);
      if(((l_95 != NULL) && (l_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_95);
  t = xtc_filter_meta_0_1(not_null(c_80), t);
  if(((f_95 != NULL) && (f_95 != t)))
    _fail(t);
  else
    f_95 = t;
  if(((h_95 != NULL) && (h_95 != t)))
    _fail(t);
  else
    h_95 = t;
  if(((g_95 != NULL) && (g_95 != t)))
    _fail(t);
  else
    g_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_95), not_null(c_80));
  t = union_0_0(t);
  if(((e_95 != NULL) && (e_95 != t)))
    _fail(t);
  else
    e_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_95), not_null(e_95));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t)
{
  ATerm m_95 = NULL,c_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_70 = ATgetArgument(t, 0);
      if(match_cons(g_70, sym_XtcConf_4))
        {
          if(((m_95 != NULL) && (m_95 != ATgetArgument(g_70, 0))))
            _fail(ATgetArgument(g_70, 0));
          else
            m_95 = ATgetArgument(g_70, 0);
          if(((c_96 != NULL) && (c_96 != ATgetArgument(g_70, 1))))
            _fail(ATgetArgument(g_70, 1));
          else
            c_96 = ATgetArgument(g_70, 1);
          if(((j_96 != NULL) && (j_96 != ATgetArgument(g_70, 2))))
            _fail(ATgetArgument(g_70, 2));
          else
            j_96 = ATgetArgument(g_70, 2);
          if(((k_96 != NULL) && (k_96 != ATgetArgument(g_70, 3))))
            _fail(ATgetArgument(g_70, 3));
          else
            k_96 = ATgetArgument(g_70, 3);
        }
      else
        _fail(t);
      {
        ATerm h_70 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_87), not_null(k_96));
  t = conc_0_0(t);
  if(((l_96 != NULL) && (l_96 != t)))
    _fail(t);
  else
    l_96 = t;
  t = not_null(o_96);
  if(((n_96 != NULL) && (n_96 != t)))
    _fail(t);
  else
    n_96 = t;
  t = not_null(e_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((m_96 != NULL) && (m_96 != t)))
    _fail(t);
  else
    m_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(m_95), not_null(c_96), not_null(j_96), not_null(l_96)), not_null(m_96));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_97 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((d_97 != NULL) && (d_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_97);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm e_97 = NULL;
  if(((e_97 != NULL) && (e_97 != t)))
    _fail(t);
  else
    e_97 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_70 = ATgetArgument(t, 0);
      if(match_cons(i_70, sym_XtcConf_4))
        {
          ATerm j_70 = ATgetArgument(i_70, 0);
          ATerm k_70 = ATgetArgument(i_70, 1);
          ATerm l_70 = ATgetArgument(i_70, 2);
          ATerm o_70 = ATgetArgument(i_70, 3);
        }
      else
        _fail(t);
      if(((q_96 != NULL) && (q_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_97 != NULL) && (a_97 != t)))
    _fail(t);
  else
    a_97 = t;
  t = not_null(q_96);
  if(((c_97 != NULL) && (c_97 != t)))
    _fail(t);
  else
    c_97 = t;
  t = term_p_70;
  if(((b_97 != NULL) && (b_97 != t)))
    _fail(t);
  else
    b_97 = t;
  t = not_null(c_97);
  t = xtc_fetch_meta_0_1(not_null(b_97), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((r_96 != NULL) && (r_96 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_96 = ATgetArgument(t, 0);
      {
        ATerm q_70 = ATgetArgument(t, 1);
        if(match_cons(q_70, sym_Some_1))
          {
            if(((s_96 != NULL) && (s_96 != ATgetArgument(q_70, 0))))
              _fail(ATgetArgument(q_70, 0));
            else
              s_96 = ATgetArgument(q_70, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(q_96);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm j_6 (ATerm t);
    static ATerm j_6 (ATerm t)
    {
      ATerm r_70 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((r_96 != NULL) && (r_96 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_96 = ATgetArgument(t, 0);
              {
                ATerm u_70 = ATgetArgument(t, 1);
                if(match_cons(u_70, sym_Some_1))
                  {
                    if(((s_96 != NULL) && (s_96 != ATgetArgument(u_70, 0))))
                      _fail(ATgetArgument(u_70, 0));
                    else
                      s_96 = ATgetArgument(u_70, 0);
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
          t = r_70;
        }
      return(t);
    }
    t = filter_1_0(j_6, t);
  }
  if(((t_96 != NULL) && (t_96 != t)))
    _fail(t);
  else
    t_96 = t;
  t = not_null(a_97);
  if(((x_96 != NULL) && (x_96 != t)))
    _fail(t);
  else
    x_96 = t;
  if(((z_96 != NULL) && (z_96 != t)))
    _fail(t);
  else
    z_96 = t;
  t = not_null(s_96);
  t = try_1_0(k_6, t);
  if(((y_96 != NULL) && (y_96 != t)))
    _fail(t);
  else
    y_96 = t;
  if(((w_96 != NULL) && (w_96 != t)))
    _fail(t);
  else
    w_96 = t;
  t = not_null(x_96);
  t = xtc_reconfigure_0_2(not_null(r_96), not_null(w_96), t);
  {
    static ATerm m_6 (ATerm t);
    static ATerm m_6 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(t_96), t);
      return(t);
    }
    t = _2_0(l_6, m_6, t);
  }
  if(((v_96 != NULL) && (v_96 != t)))
    _fail(t);
  else
    v_96 = t;
  t = term_x_70;
  if(((u_96 != NULL) && (u_96 != t)))
    _fail(t);
  else
    u_96 = t;
  t = not_null(v_96);
  t = dbg_0_1(not_null(u_96), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm y_70 = t;
  int z_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(z_70);
    }
  else
    {
      t = y_70;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,n_6 = NULL,l_12 = NULL;
  if(((o_97 != NULL) && (o_97 != t)))
    _fail(t);
  else
    o_97 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((g_97 != NULL) && (g_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_97 = ATgetArgument(t, 0);
      if(((h_97 != NULL) && (h_97 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_97 = ATgetArgument(t, 1);
      if(((i_97 != NULL) && (i_97 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_97 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((p_97 != NULL) && (p_97 != t)))
    _fail(t);
  else
    p_97 = t;
  t = SSLgetAnnotations(not_null(o_97));
  if(((f_97 != NULL) && (f_97 != t)))
    _fail(t);
  else
    f_97 = t;
  t = not_null(g_97);
  t = i_109(t);
  if(((j_97 != NULL) && (j_97 != t)))
    _fail(t);
  else
    j_97 = t;
  t = not_null(h_97);
  t = j_109(t);
  if(((k_97 != NULL) && (k_97 != t)))
    _fail(t);
  else
    k_97 = t;
  t = not_null(i_97);
  t = k_109(t);
  if(((l_97 != NULL) && (l_97 != t)))
    _fail(t);
  else
    l_97 = t;
  if(((n_97 != NULL) && (n_97 != t)))
    _fail(t);
  else
    n_97 = t;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(j_97), not_null(k_97), not_null(l_97));
  if(((n_6 != NULL) && (n_6 != t)))
    _fail(t);
  else
    n_6 = t;
  t = SSLsetAnnotations(not_null(n_6), not_null(f_97));
  if(((m_97 != NULL) && (m_97 != t)))
    _fail(t);
  else
    m_97 = t;
  return(t);
}
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t)
{
  ATerm a_71 = t;
  int g_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = e_130(t);
      LocalPopChoice(g_71);
    }
  else
    {
      t = a_71;
      {
        ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL;
        if(((r_97 != NULL) && (r_97 != t)))
          _fail(t);
        else
          r_97 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_97 != NULL) && (s_97 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_97 = ATgetFirst((ATermList) t);
            if(((t_97 != NULL) && (t_97 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              t_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(s_97);
        if(((u_97 != NULL) && (u_97 != t)))
          _fail(t);
        else
          u_97 = t;
        t = not_null(t_97);
        if(((v_97 != NULL) && (v_97 != t)))
          _fail(t);
        else
          v_97 = t;
        t = not_null(r_97);
        if(((x_97 != NULL) && (x_97 != t)))
          _fail(t);
        else
          x_97 = t;
        if(((b_98 != NULL) && (b_98 != t)))
          _fail(t);
        else
          b_98 = t;
        t = not_null(u_97);
        t = g_130(t);
        if(((y_97 != NULL) && (y_97 != t)))
          _fail(t);
        else
          y_97 = t;
        t = not_null(b_98);
        if(((a_98 != NULL) && (a_98 != t)))
          _fail(t);
        else
          a_98 = t;
        t = not_null(v_97);
        t = foldr_3_0(e_130, f_130, g_130, t);
        if(((z_97 != NULL) && (z_97 != t)))
          _fail(t);
        else
          z_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_97), not_null(z_97));
        t = f_130(t);
        if(((w_97 != NULL) && (w_97 != t)))
          _fail(t);
        else
          w_97 = t;
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL;
  if(((f_98 != NULL) && (f_98 != t)))
    _fail(t);
  else
    f_98 = t;
  if(((g_98 != NULL) && (g_98 != t)))
    _fail(t);
  else
    g_98 = t;
  t = not_null(f_98);
  if(((h_98 != NULL) && (h_98 != t)))
    _fail(t);
  else
    h_98 = t;
  t = SSL_explode_term(not_null(h_98));
  if(match_cons(t, sym__2))
    {
      ATerm h_71 = ATgetArgument(t, 0);
      if(((c_98 != NULL) && (c_98 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_98);
  if(((e_98 != NULL) && (e_98 != t)))
    _fail(t);
  else
    e_98 = t;
  t = not_null(c_98);
  t = foldr_3_0(b_135, c_135, d_135, t);
  if(((d_98 != NULL) && (d_98 != t)))
    _fail(t);
  else
    d_98 = t;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  static ATerm n_98 (ATerm t);
  static ATerm n_98 (ATerm t)
  {
    ATerm i_71 = t;
    int l_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL;
        if(((i_98 != NULL) && (i_98 != t)))
          _fail(t);
        else
          i_98 = t;
        if(((m_98 != NULL) && (m_98 != t)))
          _fail(t);
        else
          m_98 = t;
        t = not_null(i_98);
        t = d_129(t);
        if(((j_98 != NULL) && (j_98 != t)))
          _fail(t);
        else
          j_98 = t;
        t = not_null(m_98);
        if(((l_98 != NULL) && (l_98 != t)))
          _fail(t);
        else
          l_98 = t;
        t = crush_3_0(o_6, e_129, n_98, t);
        if(((k_98 != NULL) && (k_98 != t)))
          _fail(t);
        else
          k_98 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(k_98)), not_null(j_98));
        LocalPopChoice(l_71);
      }
    else
      {
        t = i_71;
        t = crush_3_0(p_6, e_129, n_98, t);
      }
    return(t);
  }
  t = n_98(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  t = collect_all_2_0(c_129, union_0_0, t);
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t)
{
  ATerm o_98 = NULL;
  if(((o_98 != NULL) && (o_98 != t)))
    _fail(t);
  else
    o_98 = t;
  t = not_null(f_81);
  t = is_string_0_0(t);
  t = not_null(o_98);
  {
    static ATerm q_6 (ATerm t);
    static ATerm q_6 (ATerm t)
    {
      ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
      if(((p_98 != NULL) && (p_98 != t)))
        _fail(t);
      else
        p_98 = t;
      if(((q_98 != NULL) && (q_98 != t)))
        _fail(t);
      else
        q_98 = t;
      t = not_null(p_98);
      if(((r_98 != NULL) && (r_98 != t)))
        _fail(t);
      else
        r_98 = t;
      t = SSL_explode_term(not_null(r_98));
      if(match_cons(t, sym__2))
        {
          if(((f_81 != NULL) && (f_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_81 = ATgetArgument(t, 0);
          {
            ATerm o_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(q_98);
      return(t);
    }
    t = collect_all_1_0(q_6, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
  if(((u_98 != NULL) && (u_98 != t)))
    _fail(t);
  else
    u_98 = t;
  t = term_p_71;
  if(((t_98 != NULL) && (t_98 != t)))
    _fail(t);
  else
    t_98 = t;
  t = not_null(u_98);
  t = xtc_fetch_meta_0_1(not_null(t_98), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((s_98 != NULL) && (s_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(s_98);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm e_99 = NULL;
  if(((e_99 != NULL) && (e_99 != t)))
    _fail(t);
  else
    e_99 = t;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm f_99 = NULL;
  if(((f_99 != NULL) && (f_99 != t)))
    _fail(t);
  else
    f_99 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      static ATerm s_6 (ATerm t);
      static ATerm s_6 (ATerm t)
      {
        ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL;
        if(((z_98 != NULL) && (z_98 != t)))
          _fail(t);
        else
          z_98 = t;
        if(((d_99 != NULL) && (d_99 != t)))
          _fail(t);
        else
          d_99 = t;
        if(((a_99 != NULL) && (a_99 != t)))
          _fail(t);
        else
          a_99 = t;
        t = not_null(d_99);
        if(((c_99 != NULL) && (c_99 != t)))
          _fail(t);
        else
          c_99 = t;
        t = term_s_71;
        t = o_151(t);
        if(((b_99 != NULL) && (b_99 != t)))
          _fail(t);
        else
          b_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_99), not_null(b_99));
        t = eq_0_0(t);
        t = not_null(z_98);
        return(t);
      }
      t = XtcContract_3_0(s_6, t_6, u_6, t);
      return(t);
    }
    t = filter_1_0(r_6, t);
  }
  if(((y_98 != NULL) && (y_98 != t)))
    _fail(t);
  else
    y_98 = t;
  t = term_p_71;
  if(((x_98 != NULL) && (x_98 != t)))
    _fail(t);
  else
    x_98 = t;
  t = not_null(y_98);
  t = dbg_0_1(not_null(x_98), t);
  return(t);
}
ATerm warn_0_1 (ATerm w_78, ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
  if(((l_99 != NULL) && (l_99 != t)))
    _fail(t);
  else
    l_99 = t;
  t = term_u_71;
  if(((g_99 != NULL) && (g_99 != t)))
    _fail(t);
  else
    g_99 = t;
  t = not_null(l_99);
  if(((i_99 != NULL) && (i_99 != t)))
    _fail(t);
  else
    i_99 = t;
  if(((k_99 != NULL) && (k_99 != t)))
    _fail(t);
  else
    k_99 = t;
  if(((j_99 != NULL) && (j_99 != t)))
    _fail(t);
  else
    j_99 = t;
  if(((h_99 != NULL) && (h_99 != t)))
    _fail(t);
  else
    h_99 = t;
  t = not_null(i_99);
  t = log_0_3(not_null(g_99), not_null(w_78), not_null(h_99), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm v_71 = t;
  int w_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_99 = NULL;
      if(((m_99 != NULL) && (m_99 != t)))
        _fail(t);
      else
        m_99 = t;
      t = term_x_71;
      t = get_config_0_0(t);
      t = not_null(m_99);
      LocalPopChoice(w_71);
      {
        ATerm n_99 = NULL,o_99 = NULL;
        if(((o_99 != NULL) && (o_99 != t)))
          _fail(t);
        else
          o_99 = t;
        t = term_y_71;
        if(((n_99 != NULL) && (n_99 != t)))
          _fail(t);
        else
          n_99 = t;
        t = not_null(o_99);
        t = err_0_1(not_null(n_99), t);
        _fail(t);
      }
    }
  else
    {
      t = v_71;
      {
        ATerm p_99 = NULL,q_99 = NULL;
        if(((q_99 != NULL) && (q_99 != t)))
          _fail(t);
        else
          q_99 = t;
        t = term_z_71;
        if(((p_99 != NULL) && (p_99 != t)))
          _fail(t);
        else
          p_99 = t;
        t = not_null(q_99);
        t = warn_0_1(not_null(p_99), t);
      }
    }
  return(t);
}
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm a_72 = t;
  int b_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_115(t);
      t = r_115(t);
      LocalPopChoice(b_72);
    }
  else
    {
      t = a_72;
      t = r_115(t);
      _fail(t);
    }
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL;
  if(((t_99 != NULL) && (t_99 != t)))
    _fail(t);
  else
    t_99 = t;
  if(match_cons(t, sym__2))
    {
      if(((r_99 != NULL) && (r_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_99 = ATgetArgument(t, 0);
      if(((s_99 != NULL) && (s_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(r_99), t);
  t = hashtable_remove_0_1(not_null(s_99), t);
  t = not_null(t_99);
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm u_99 = NULL;
  if(((u_99 != NULL) && (u_99 != t)))
    _fail(t);
  else
    u_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_72, not_null(u_99));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm x_99 = NULL;
  if(((x_99 != NULL) && (x_99 != t)))
    _fail(t);
  else
    x_99 = t;
  t = term_e_72;
  t = set_config_0_0(t);
  t = not_null(x_99);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  ATerm f_72 = t;
  int g_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_99 = NULL;
      if(((v_99 != NULL) && (v_99 != t)))
        _fail(t);
      else
        v_99 = t;
      t = term_d_72;
      t = get_config_0_0(t);
      t = not_null(v_99);
      LocalPopChoice(g_72);
      {
        ATerm w_99 = NULL;
        if(((w_99 != NULL) && (w_99 != t)))
          _fail(t);
        else
          w_99 = t;
        t = term_d_72;
        t = rm_config_0_0(t);
        t = not_null(w_99);
        t = restore_always_2_0(s_151, v_6, t);
      }
    }
  else
    {
      t = f_72;
      t = s_151(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm h_72 = t;
  int i_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL;
      if(((z_99 != NULL) && (z_99 != t)))
        _fail(t);
      else
        z_99 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((a_100 != NULL) && (a_100 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_100);
      if(((b_100 != NULL) && (b_100 != t)))
        _fail(t);
      else
        b_100 = t;
      LocalPopChoice(i_72);
    }
  else
    {
      t = h_72;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  static ATerm z_101 (ATerm j_100, ATerm k_100, ATerm l_100, ATerm m_100, ATerm t);
  static ATerm a_102 (ATerm c_101, ATerm d_101, ATerm e_101, ATerm f_101, ATerm g_101, ATerm t);
  static ATerm z_101 (ATerm j_100, ATerm k_100, ATerm l_100, ATerm m_100, ATerm t)
  {
    ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL;
    t = not_null(j_100);
    if(((p_100 != NULL) && (p_100 != t)))
      _fail(t);
    else
      p_100 = t;
    t = not_null(k_100);
    if(((r_100 != NULL) && (r_100 != t)))
      _fail(t);
    else
      r_100 = t;
    t = not_null(l_100);
    if(((n_100 != NULL) && (n_100 != t)))
      _fail(t);
    else
      n_100 = t;
    t = not_null(m_100);
    t = Fst_0_0(t);
    t = u_0(t);
    if(((o_100 != NULL) && (o_100 != t)))
      _fail(t);
    else
      o_100 = t;
    t = not_null(n_100);
    t = some_or_empty_0_0(t);
    {
      ATerm j_72 = t;
      int k_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_100 = NULL,t_100 = NULL,w_100 = NULL;
          if(((s_100 != NULL) && (s_100 != t)))
            _fail(t);
          else
            s_100 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((t_100 != NULL) && (t_100 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(t_100);
          if(((w_100 != NULL) && (w_100 != t)))
            _fail(t);
          else
            w_100 = t;
          LocalPopChoice(k_72);
        }
      else
        {
          t = j_72;
          t = Nil_0_0(t);
        }
    }
    if(((q_100 != NULL) && (q_100 != t)))
      _fail(t);
    else
      q_100 = t;
    {
      ATerm l_72 = t;
      int z_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_100 = NULL,y_100 = NULL,b_101 = NULL;
          static ATerm w_6 (ATerm t);
          static ATerm w_6 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(r_100), t);
            return(t);
          }
          if(((x_100 != NULL) && (x_100 != t)))
            _fail(t);
          else
            x_100 = t;
          if(((b_101 != NULL) && (b_101 != t)))
            _fail(t);
          else
            b_101 = t;
          t = not_null(x_100);
          t = xtc_new_file_0_0(t);
          if(((y_100 != NULL) && (y_100 != t)))
            _fail(t);
          else
            y_100 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(o_100), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_100))), not_null(p_100), not_null(q_100));
          t = xtc_cc_disable_1_0(w_6, t);
          LocalPopChoice(z_73);
        }
      else
        {
          t = l_72;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm a_102 (ATerm c_101, ATerm d_101, ATerm e_101, ATerm f_101, ATerm g_101, ATerm t)
  {
    ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL;
    t = not_null(c_101);
    if(((i_101 != NULL) && (i_101 != t)))
      _fail(t);
    else
      i_101 = t;
    t = not_null(d_101);
    if(((j_101 != NULL) && (j_101 != t)))
      _fail(t);
    else
      j_101 = t;
    t = not_null(e_101);
    if(((k_101 != NULL) && (k_101 != t)))
      _fail(t);
    else
      k_101 = t;
    t = not_null(f_101);
    if(((h_101 != NULL) && (h_101 != t)))
      _fail(t);
    else
      h_101 = t;
    t = not_null(g_101);
    if(((l_101 != NULL) && (l_101 != t)))
      _fail(t);
    else
      l_101 = t;
    {
      ATerm a_74 = t;
      int b_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(h_101);
          t = xtc_fetch_contracts_1_0(u_0, t);
          LocalPopChoice(b_74);
          {
            static ATerm x_6 (ATerm t);
            static ATerm x_6 (ATerm t)
            {
              ATerm m_101 = NULL,n_101 = NULL;
              if(((n_101 != NULL) && (n_101 != t)))
                _fail(t);
              else
                n_101 = t;
              if(((m_101 != NULL) && (m_101 != t)))
                _fail(t);
              else
                m_101 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(i_101), not_null(j_101), not_null(k_101)), not_null(m_101));
              t = xtc_cc_1_0(u_0, t);
              return(t);
            }
            t = map_1_0(x_6, t);
          }
        }
      else
        {
          t = a_74;
          {
            ATerm o_101 = NULL;
            if(((o_101 != NULL) && (o_101 != t)))
              _fail(t);
            else
              o_101 = t;
          }
        }
    }
    t = not_null(l_101);
    return(t);
  }
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL;
  if(((s_101 != NULL) && (s_101 != t)))
    _fail(t);
  else
    s_101 = t;
  if(match_cons(t, sym__2))
    {
      if(((t_101 != NULL) && (t_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_101 = ATgetArgument(t, 0);
      if(((y_101 != NULL) && (y_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_101);
  if(match_cons(t, sym__3))
    {
      u_101 = ATgetArgument(t, 0);
      v_101 = ATgetArgument(t, 1);
      w_101 = ATgetArgument(t, 2);
      t = not_null(y_101);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((p_101 != NULL) && (p_101 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_101 = ATgetArgument(t, 0);
          if(((q_101 != NULL) && (q_101 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_101 = ATgetArgument(t, 1);
          if(((r_101 != NULL) && (r_101 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            r_101 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_101(not_null(w_101), not_null(q_101), not_null(r_101), not_null(s_101), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((u_101 != NULL) && (u_101 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_101 = ATgetArgument(t, 0);
          if(((v_101 != NULL) && (v_101 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_101 = ATgetArgument(t, 1);
          if(((w_101 != NULL) && (w_101 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            w_101 = ATgetArgument(t, 2);
          if(((x_101 != NULL) && (x_101 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            x_101 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_102(not_null(u_101), not_null(v_101), not_null(w_101), not_null(y_101), not_null(s_101), t);
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL;
  if(((b_102 != NULL) && (b_102 != t)))
    _fail(t);
  else
    b_102 = t;
  t = term_d_72;
  t = get_config_0_0(t);
  if(((d_102 != NULL) && (d_102 != t)))
    _fail(t);
  else
    d_102 = t;
  t = term_c_74;
  if(((c_102 != NULL) && (c_102 != t)))
    _fail(t);
  else
    c_102 = t;
  t = not_null(d_102);
  t = notice_0_1(not_null(c_102), t);
  t = not_null(b_102);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t)
{
  ATerm e_102 = NULL;
  ATerm d_74 = t;
  int l_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_102 = NULL;
      if(((f_102 != NULL) && (f_102 != t)))
        _fail(t);
      else
        f_102 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(f_102);
      LocalPopChoice(l_74);
      {
        ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL;
        if(((k_102 != NULL) && (k_102 != t)))
          _fail(t);
        else
          k_102 = t;
        t = term_m_74;
        if(((j_102 != NULL) && (j_102 != t)))
          _fail(t);
        else
          j_102 = t;
        t = not_null(k_102);
        t = dbg_0_1(not_null(j_102), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((i_102 != NULL) && (i_102 != t)))
          _fail(t);
        else
          i_102 = t;
        t = p_151(t);
        if(((e_102 != NULL) && (e_102 != t)))
          _fail(t);
        else
          e_102 = t;
        t = not_null(i_102);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(e_102);
        if(((h_102 != NULL) && (h_102 != t)))
          _fail(t);
        else
          h_102 = t;
        t = term_n_74;
        if(((g_102 != NULL) && (g_102 != t)))
          _fail(t);
        else
          g_102 = t;
        t = not_null(h_102);
        t = dbg_0_1(not_null(g_102), t);
      }
    }
  else
    {
      t = d_74;
      t = p_151(t);
    }
  return(t);
}
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm o_74 = t;
  int p_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_115(t);
      LocalPopChoice(p_74);
    }
  else
    {
      t = o_74;
      t = p_115(t);
      _fail(t);
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL;
  if(((m_102 != NULL) && (m_102 != t)))
    _fail(t);
  else
    m_102 = t;
  t = term_q_74;
  if(((l_102 != NULL) && (l_102 != t)))
    _fail(t);
  else
    l_102 = t;
  t = not_null(m_102);
  t = err_0_1(not_null(l_102), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, y_6, t);
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_102 != NULL) && (n_102 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_102 = ATgetArgument(t, 0);
      {
        ATerm r_74 = ATgetArgument(t, 1);
        if(match_cons(r_74, sym_Stream_1))
          {
            if(((o_102 != NULL) && (o_102 != ATgetArgument(r_74, 0))))
              _fail(ATgetArgument(r_74, 0));
            else
              o_102 = ATgetArgument(r_74, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(n_102), not_null(o_102));
  if(((q_102 != NULL) && (q_102 != t)))
    _fail(t);
  else
    q_102 = t;
  if(((p_102 != NULL) && (p_102 != t)))
    _fail(t);
  else
    p_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_102));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  if(((u_102 != NULL) && (u_102 != t)))
    _fail(t);
  else
    u_102 = t;
  if(((r_102 != NULL) && (r_102 != t)))
    _fail(t);
  else
    r_102 = t;
  t = not_null(u_102);
  if(((t_102 != NULL) && (t_102 != t)))
    _fail(t);
  else
    t_102 = t;
  t = term_c_13;
  t = log_stream_0_0(t);
  if(((s_102 != NULL) && (s_102 != t)))
    _fail(t);
  else
    s_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_102), not_null(s_102));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_74 = ATgetArgument(t, 0);
      if(match_cons(s_74, sym_Stream_1))
        {
          if(((v_102 != NULL) && (v_102 != ATgetArgument(s_74, 0))))
            _fail(ATgetArgument(s_74, 0));
          else
            v_102 = ATgetArgument(s_74, 0);
        }
      else
        _fail(t);
      if(((w_102 != NULL) && (w_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(v_102), not_null(w_102));
  if(((y_102 != NULL) && (y_102 != t)))
    _fail(t);
  else
    y_102 = t;
  if(((x_102 != NULL) && (x_102 != t)))
    _fail(t);
  else
    x_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_102));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL;
  t = SSL_stderr_stream();
  if(((a_103 != NULL) && (a_103 != t)))
    _fail(t);
  else
    a_103 = t;
  if(((z_102 != NULL) && (z_102 != t)))
    _fail(t);
  else
    z_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_102));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm t_74 = t;
  int u_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_74;
      t = get_config_0_0(t);
      LocalPopChoice(u_74);
    }
  else
    {
      t = t_74;
      t = term_c_13;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_103 != NULL) && (b_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_103 = ATgetArgument(t, 0);
      if(((c_103 != NULL) && (c_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_75 = t;
    int i_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(b_103), not_null(c_103));
        LocalPopChoice(i_75);
      }
    else
      {
        t = a_75;
        t = SSL_subtr(not_null(b_103), not_null(c_103));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t)
{
  static ATerm d_103 (ATerm t);
  static ATerm d_103 (ATerm t)
  {
    ATerm j_75 = t;
    int k_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        LocalPopChoice(k_75);
      }
    else
      {
        t = j_75;
        t = m_116(t);
        t = d_103(t);
      }
    return(t);
  }
  t = d_103(t);
  return(t);
}
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t)
{
  t = o_116(t);
  t = while_not_2_0(p_116, q_116, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_103 != NULL) && (e_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_103 = ATgetArgument(t, 0);
      if(((f_103 != NULL) && (f_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(e_103), not_null(f_103), (ATerm) ATempty);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_75 = ATgetArgument(t, 0);
      if(((ATgetType(l_75) != AT_INT) || (ATgetInt((ATermInt) l_75) != 0)))
        _fail(t);
      if(((g_103 != NULL) && (g_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_103 = ATgetArgument(t, 1);
      if(((h_103 != NULL) && (h_103 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        h_103 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(h_103);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((i_103 != NULL) && (i_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_103 = ATgetArgument(t, 0);
      if(((j_103 != NULL) && (j_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_103 = ATgetArgument(t, 1);
      if(((k_103 != NULL) && (k_103 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_103 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((n_103 != NULL) && (n_103 != t)))
    _fail(t);
  else
    n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_103), term_u_19);
  t = geq_0_0(t);
  t = not_null(n_103);
  if(((m_103 != NULL) && (m_103 != t)))
    _fail(t);
  else
    m_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_103), term_u_19);
  t = subt_0_0(t);
  if(((l_103 != NULL) && (l_103 != t)))
    _fail(t);
  else
    l_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_103), not_null(j_103), (ATerm) ATinsert(CheckATermList(not_null(k_103)), not_null(j_103)));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(z_6, a_7, b_7, t);
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
  ATerm o_103 = NULL;
  if(((o_103 != NULL) && (o_103 != t)))
    _fail(t);
  else
    o_103 = t;
  t = SSL_strlen(not_null(o_103));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm q_103 = NULL;
  if(((q_103 != NULL) && (q_103 != t)))
    _fail(t);
  else
    q_103 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_m_75;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_n_75;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_o_75;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_p_75;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_q_75;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_r_75;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_s_75;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_t_75;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_u_75;
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
static ATerm c_7 (ATerm t)
{
  ATerm s_103 = NULL;
  if(((s_103 != NULL) && (s_103 != t)))
    _fail(t);
  else
    s_103 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm t_103 (ATerm t);
  static ATerm t_103 (ATerm t)
  {
    ATerm v_75 = t;
    int w_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_7, t_103, t);
        LocalPopChoice(w_75);
      }
    else
      {
        t = v_75;
        t = c_124(t);
      }
    return(t);
  }
  t = t_103(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm u_103 = NULL;
  t = explode_string_0_0(t);
  {
    static ATerm d_7 (ATerm t);
    static ATerm d_7 (ATerm t)
    {
      static ATerm e_7 (ATerm t);
      static ATerm e_7 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_79 = ATgetFirst((ATermList) t);
            if(((ATgetType(h_79) != AT_INT) || (ATgetInt((ATermInt) h_79) != 47)))
              _fail(t);
            if(((u_103 != NULL) && (u_103 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              u_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(e_7, t);
      t = not_null(u_103);
      return(t);
    }
    t = try_1_0(d_7, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm i_79 = t;
  int j_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(j_79);
    }
  else
    {
      t = i_79;
      t = term_k_79;
    }
  return(t);
}
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t)
{
  static ATerm f_7 (ATerm t);
  static ATerm f_7 (ATerm t)
  {
    ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL;
    if(((v_103 != NULL) && (v_103 != t)))
      _fail(t);
    else
      v_103 = t;
    if(((z_103 != NULL) && (z_103 != t)))
      _fail(t);
    else
      z_103 = t;
    t = log_src_0_0(t);
    if(((w_103 != NULL) && (w_103 != t)))
      _fail(t);
    else
      w_103 = t;
    t = not_null(z_103);
    if(((y_103 != NULL) && (y_103 != t)))
      _fail(t);
    else
      y_103 = t;
    t = not_null(d_79);
    t = severity_string_0_0(t);
    if(((x_103 != NULL) && (x_103 != t)))
      _fail(t);
    else
      x_103 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_79), not_null(e_79)), term_n_79), not_null(w_103)), term_m_79), not_null(x_103)), term_l_79);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(v_103);
    return(t);
  }
  t = if_log_severity_1_1(f_7, not_null(d_79), t);
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t)
{
  ATerm p_79 = t;
  int q_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL;
      if(((b_104 != NULL) && (b_104 != t)))
        _fail(t);
      else
        b_104 = t;
      if(((d_104 != NULL) && (d_104 != t)))
        _fail(t);
      else
        d_104 = t;
      t = term_u_79;
      {
        ATerm w_79 = t;
        int d_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(d_80);
          }
        else
          {
            t = w_79;
            t = term_f_80;
          }
      }
      if(((c_104 != NULL) && (c_104 != t)))
        _fail(t);
      else
        c_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_104), not_null(z_78));
      t = geq_0_0(t);
      t = not_null(b_104);
      LocalPopChoice(q_79);
      t = o_150(t);
    }
  else
    {
      t = p_79;
      {
        ATerm e_104 = NULL;
        if(((e_104 != NULL) && (e_104 != t)))
          _fail(t);
        else
          e_104 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm g_104 = NULL;
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_c_28;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_v_21;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_l_20;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_h_20;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_u_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_f_80;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_h_80;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_i_80;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_j_81;
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
  ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL;
  if(((i_104 != NULL) && (i_104 != t)))
    _fail(t);
  else
    i_104 = t;
  if(((k_104 != NULL) && (k_104 != t)))
    _fail(t);
  else
    k_104 = t;
  t = not_null(f_79);
  t = verbose_level_0_0(t);
  if(((j_104 != NULL) && (j_104 != t)))
    _fail(t);
  else
    j_104 = t;
  if(((h_104 != NULL) && (h_104 != t)))
    _fail(t);
  else
    h_104 = t;
  t = not_null(i_104);
  t = log_if_verbose_1_1(p_150, not_null(h_104), t);
  return(t);
}
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t)
{
  static ATerm g_7 (ATerm t);
  static ATerm g_7 (ATerm t)
  {
    ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL;
    t = log_0_2(not_null(a_79), not_null(b_79), t);
    if(((l_104 != NULL) && (l_104 != t)))
      _fail(t);
    else
      l_104 = t;
    if(((p_104 != NULL) && (p_104 != t)))
      _fail(t);
    else
      p_104 = t;
    if(((r_104 != NULL) && (r_104 != t)))
      _fail(t);
    else
      r_104 = t;
    t = not_null(a_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((q_104 != NULL) && (q_104 != t)))
      _fail(t);
    else
      q_104 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_104), term_l_20);
    t = add_0_0(t);
    if(((o_104 != NULL) && (o_104 != t)))
      _fail(t);
    else
      o_104 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_104), term_k_81);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((n_104 != NULL) && (n_104 != t)))
      _fail(t);
    else
      n_104 = t;
    t = log_stream_0_0(t);
    if(((m_104 != NULL) && (m_104 != t)))
      _fail(t);
    else
      m_104 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_104), not_null(c_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_o_79;
    t = log_puts_0_0(t);
    t = not_null(l_104);
    return(t);
  }
  t = if_log_severity_1_1(g_7, not_null(a_79), t);
  return(t);
}
ATerm dbg_0_1 (ATerm y_78, ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL;
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  t = term_l_81;
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  t = not_null(x_104);
  if(((u_104 != NULL) && (u_104 != t)))
    _fail(t);
  else
    u_104 = t;
  if(((w_104 != NULL) && (w_104 != t)))
    _fail(t);
  else
    w_104 = t;
  if(((v_104 != NULL) && (v_104 != t)))
    _fail(t);
  else
    v_104 = t;
  if(((t_104 != NULL) && (t_104 != t)))
    _fail(t);
  else
    t_104 = t;
  t = not_null(u_104);
  t = log_0_3(not_null(s_104), not_null(y_78), not_null(t_104), t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL;
  if(((e_105 != NULL) && (e_105 != t)))
    _fail(t);
  else
    e_105 = t;
  t = term_n_81;
  if(((d_105 != NULL) && (d_105 != t)))
    _fail(t);
  else
    d_105 = t;
  t = not_null(e_105);
  t = dbg_0_1(not_null(d_105), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm o_81 = ATgetArgument(t, 0);
      ATerm p_81 = ATgetArgument(t, 1);
      if(match_cons(p_81, sym_Some_1))
        {
          if(((y_104 != NULL) && (y_104 != ATgetArgument(p_81, 0))))
            _fail(ATgetArgument(p_81, 0));
          else
            y_104 = ATgetArgument(p_81, 0);
        }
      else
        _fail(t);
      {
        ATerm q_81 = ATgetArgument(t, 2);
      }
      {
        ATerm r_81 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((c_105 != NULL) && (c_105 != t)))
    _fail(t);
  else
    c_105 = t;
  if(((z_104 != NULL) && (z_104 != t)))
    _fail(t);
  else
    z_104 = t;
  t = not_null(c_105);
  if(((b_105 != NULL) && (b_105 != t)))
    _fail(t);
  else
    b_105 = t;
  t = not_null(p_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((a_105 != NULL) && (a_105 != t)))
    _fail(t);
  else
    a_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(a_105));
  t = xtc_cc_wrap_1_0(h_7, t);
  t = not_null(y_104);
  return(t);
}
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,i_7 = NULL,m_12 = NULL;
  if(((k_105 != NULL) && (k_105 != t)))
    _fail(t);
  else
    k_105 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((g_105 != NULL) && (g_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((l_105 != NULL) && (l_105 != t)))
    _fail(t);
  else
    l_105 = t;
  t = SSLgetAnnotations(not_null(k_105));
  if(((f_105 != NULL) && (f_105 != t)))
    _fail(t);
  else
    f_105 = t;
  t = not_null(g_105);
  t = n_107(t);
  if(((h_105 != NULL) && (h_105 != t)))
    _fail(t);
  else
    h_105 = t;
  if(((j_105 != NULL) && (j_105 != t)))
    _fail(t);
  else
    j_105 = t;
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(h_105));
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  t = SSLsetAnnotations(not_null(i_7), not_null(f_105));
  if(((i_105 != NULL) && (i_105 != t)))
    _fail(t);
  else
    i_105 = t;
  return(t);
}
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm s_81 = t;
  int v_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(v_81);
    }
  else
    {
      t = s_81;
      t = Some_1_0(o_132, t);
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm m_105 = NULL;
  if(((m_105 != NULL) && (m_105 != t)))
    _fail(t);
  else
    m_105 = t;
  t = SSL_concat_strings(not_null(m_105));
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm n_105 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_81 = ATgetFirst((ATermList) t);
      if(((n_105 != NULL) && (n_105 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        n_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(n_105);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm o_105 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((o_105 != NULL) && (o_105 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        o_105 = ATgetFirst((ATermList) t);
      {
        ATerm x_81 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(x_81) != AT_LIST) || !(ATisEmpty(x_81))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(o_105);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_81 = t;
  int z_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(z_81);
    }
  else
    {
      t = y_81;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm q_105 = NULL;
  if(((q_105 != NULL) && (q_105 != t)))
    _fail(t);
  else
    q_105 = t;
  t = SSL_implode_string(not_null(q_105));
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm s_105 = NULL;
  if(((s_105 != NULL) && (s_105 != t)))
    _fail(t);
  else
    s_105 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  static ATerm t_105 (ATerm t);
  static ATerm t_105 (ATerm t)
  {
    ATerm a_82 = t;
    int b_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_123(t);
        LocalPopChoice(b_82);
      }
    else
      {
        t = a_82;
        t = Cons_2_0(j_7, t_105, t);
      }
    return(t);
  }
  t = t_105(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm z_105 = NULL;
  if(((z_105 != NULL) && (z_105 != t)))
    _fail(t);
  else
    z_105 = t;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm a_106 = NULL;
  if(((a_106 != NULL) && (a_106 != t)))
    _fail(t);
  else
    a_106 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL,y_105 = NULL;
  static ATerm k_7 (ATerm t);
  static ATerm k_7 (ATerm t)
  {
    t = Cons_2_0(q_123, l_7, t);
    {
      static ATerm n_7 (ATerm t);
      static ATerm n_7 (ATerm t)
      {
        if(((w_105 != NULL) && (w_105 != t)))
          _fail(t);
        else
          w_105 = t;
        return(t);
      }
      t = Cons_2_0(m_7, n_7, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(k_7, t);
  if(((y_105 != NULL) && (y_105 != t)))
    _fail(t);
  else
    y_105 = t;
  if(((x_105 != NULL) && (x_105 != t)))
    _fail(t);
  else
    x_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_105), not_null(w_105));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL;
  ATerm c_82 = t;
  int d_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_133, t);
      LocalPopChoice(d_82);
    }
  else
    {
      t = c_82;
      {
        ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
        if(((f_106 != NULL) && (f_106 != t)))
          _fail(t);
        else
          f_106 = t;
        if(((h_106 != NULL) && (h_106 != t)))
          _fail(t);
        else
          h_106 = t;
        t = not_null(f_106);
        if(((g_106 != NULL) && (g_106 != t)))
          _fail(t);
        else
          g_106 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_106), (ATerm) ATempty);
      }
    }
  if(((i_106 != NULL) && (i_106 != t)))
    _fail(t);
  else
    i_106 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_106 != NULL) && (j_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_106 = ATgetArgument(t, 0);
      if(((m_106 != NULL) && (m_106 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_106);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(m_106);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm p_106 = NULL,q_106 = NULL,r_106 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((n_106 != NULL) && (n_106 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                n_106 = ATgetFirst((ATermList) t);
              if(((o_106 != NULL) && (o_106 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                o_106 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(m_106);
          if(((p_106 != NULL) && (p_106 != t)))
            _fail(t);
          else
            p_106 = t;
          t = not_null(i_106);
          if(((r_106 != NULL) && (r_106 != t)))
            _fail(t);
          else
            r_106 = t;
          t = not_null(p_106);
          t = list_tokenize_1_0(d_133, t);
          if(((q_106 != NULL) && (q_106 != t)))
            _fail(t);
          else
            q_106 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_106 != NULL) && (k_106 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_106 = ATgetFirst((ATermList) t);
          if(((l_106 != NULL) && (l_106 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(m_106);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm s_106 = NULL;
          t = not_null(j_106);
          if(((s_106 != NULL) && (s_106 != t)))
            _fail(t);
          else
            s_106 = t;
          t = (ATerm) ATinsert(ATempty, not_null(s_106));
        }
      else
        {
          ATerm t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((n_106 != NULL) && (n_106 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                n_106 = ATgetFirst((ATermList) t);
              if(((o_106 != NULL) && (o_106 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                o_106 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(j_106);
          if(((t_106 != NULL) && (t_106 != t)))
            _fail(t);
          else
            t_106 = t;
          t = not_null(m_106);
          if(((u_106 != NULL) && (u_106 != t)))
            _fail(t);
          else
            u_106 = t;
          t = not_null(i_106);
          if(((w_106 != NULL) && (w_106 != t)))
            _fail(t);
          else
            w_106 = t;
          t = not_null(u_106);
          t = list_tokenize_1_0(d_133, t);
          if(((v_106 != NULL) && (v_106 != t)))
            _fail(t);
          else
            v_106 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(v_106)), not_null(t_106));
        }
    }
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
  static ATerm o_7 (ATerm t);
  static ATerm o_7 (ATerm t)
  {
    ATerm x_106 = NULL;
    static ATerm p_7 (ATerm t);
    static ATerm p_7 (ATerm t)
    {
      if(((x_106 != NULL) && (x_106 != t)))
        _fail(t);
      else
        x_106 = t;
      return(t);
    }
    if(((x_106 != NULL) && (x_106 != t)))
      _fail(t);
    else
      x_106 = t;
    t = not_null(d_46);
    t = fetch_1_0(p_7, t);
    return(t);
  }
  t = string_tokenize_1_0(o_7, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm y_106 = NULL,z_106 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_106 != NULL) && (y_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_106 = ATgetArgument(t, 0);
      if(((z_106 != NULL) && (z_106 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_106);
  t = string_tokenize_0_1(not_null(y_106), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL;
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  if(((a_107 != NULL) && (a_107 != t)))
    _fail(t);
  else
    a_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_l_18), not_null(a_107));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm c_107 = NULL;
  if(((c_107 != NULL) && (c_107 != t)))
    _fail(t);
  else
    c_107 = t;
  t = SSL_S_ISDIR(not_null(c_107));
  return(t);
}
static ATerm l_107 (ATerm e_107, ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL;
  t = not_null(e_107);
  if(((f_107 != NULL) && (f_107 != t)))
    _fail(t);
  else
    f_107 = t;
  t = SSL_filemode(not_null(f_107));
  if(match_cons(t, sym__2))
    {
      if(((g_107 != NULL) && (g_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_107 = ATgetArgument(t, 0);
      {
        ATerm e_82 = ATgetArgument(t, 1);
        if(((ATgetType(e_82) != AT_INT) || (ATgetInt((ATermInt) e_82) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(g_107);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm h_107 = NULL;
  if(((h_107 != NULL) && (h_107 != t)))
    _fail(t);
  else
    h_107 = t;
  {
    ATerm f_82 = t;
    int g_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_107(not_null(h_107), t);
        LocalPopChoice(g_82);
      }
    else
      {
        t = f_82;
        {
          ATerm i_107 = NULL,j_107 = NULL,k_107 = NULL;
          t = not_null(h_107);
          if(((k_107 != NULL) && (k_107 != t)))
            _fail(t);
          else
            k_107 = t;
          t = not_null(h_107);
          if(((j_107 != NULL) && (j_107 != t)))
            _fail(t);
          else
            j_107 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_82, not_null(j_107));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm m_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_107 != NULL) && (o_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_107 = ATgetArgument(t, 0);
      if(((m_107 != NULL) && (m_107 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_107 != NULL) && (q_107 != t)))
    _fail(t);
  else
    q_107 = t;
  {
    ATerm i_82 = t;
    int j_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_107 = NULL;
        if(((r_107 != NULL) && (r_107 != t)))
          _fail(t);
        else
          r_107 = t;
        t = not_null(m_107);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(r_107);
        LocalPopChoice(j_82);
        {
          ATerm s_107 = NULL,t_107 = NULL;
          if(((t_107 != NULL) && (t_107 != t)))
            _fail(t);
          else
            t_107 = t;
          t = not_null(o_107);
          t = base_filename_0_0(t);
          if(((s_107 != NULL) && (s_107 != t)))
            _fail(t);
          else
            s_107 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_107)), term_k_82), not_null(m_107));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = i_82;
        t = not_null(m_107);
      }
  }
  if(((p_107 != NULL) && (p_107 != t)))
    _fail(t);
  else
    p_107 = t;
  t = SSL_copy(not_null(o_107), not_null(p_107));
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL;
  if(((v_107 != NULL) && (v_107 != t)))
    _fail(t);
  else
    v_107 = t;
  if(match_cons(t, sym_URL_1))
    {
      w_107 = ATgetArgument(t, 0);
      t = not_null(v_107);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm x_107 = NULL,y_107 = NULL;
          t = not_null(v_107);
          if(((y_107 != NULL) && (y_107 != t)))
            _fail(t);
          else
            y_107 = t;
          t = term_c_13;
          t = xtc_new_file_0_0(t);
          if(((x_107 != NULL) && (x_107 != t)))
            _fail(t);
          else
            x_107 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_14, not_null(x_107));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_107));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((w_107 != NULL) && (w_107 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_107 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(v_107);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL,q_7 = NULL,n_12 = NULL;
  if(((k_108 != NULL) && (k_108 != t)))
    _fail(t);
  else
    k_108 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((a_108 != NULL) && (a_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_108 = ATgetArgument(t, 0);
      if(((b_108 != NULL) && (b_108 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_108 = ATgetArgument(t, 1);
      if(((c_108 != NULL) && (c_108 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_108 = ATgetArgument(t, 2);
      if(((d_108 != NULL) && (d_108 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        d_108 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((l_108 != NULL) && (l_108 != t)))
    _fail(t);
  else
    l_108 = t;
  t = SSLgetAnnotations(not_null(k_108));
  if(((z_107 != NULL) && (z_107 != t)))
    _fail(t);
  else
    z_107 = t;
  t = not_null(a_108);
  t = h_111(t);
  if(((e_108 != NULL) && (e_108 != t)))
    _fail(t);
  else
    e_108 = t;
  t = not_null(b_108);
  t = i_111(t);
  if(((f_108 != NULL) && (f_108 != t)))
    _fail(t);
  else
    f_108 = t;
  t = not_null(c_108);
  t = j_111(t);
  if(((g_108 != NULL) && (g_108 != t)))
    _fail(t);
  else
    g_108 = t;
  t = not_null(d_108);
  t = k_111(t);
  if(((h_108 != NULL) && (h_108 != t)))
    _fail(t);
  else
    h_108 = t;
  if(((j_108 != NULL) && (j_108 != t)))
    _fail(t);
  else
    j_108 = t;
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(e_108), not_null(f_108), not_null(g_108), not_null(h_108));
  if(((q_7 != NULL) && (q_7 != t)))
    _fail(t);
  else
    q_7 = t;
  t = SSLsetAnnotations(not_null(q_7), not_null(z_107));
  if(((i_108 != NULL) && (i_108 != t)))
    _fail(t);
  else
    i_108 = t;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = option_1_0(u_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = option_1_0(w_7, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = FILE_1_0(v_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm s_108 = NULL;
  if(((s_108 != NULL) && (s_108 != t)))
    _fail(t);
  else
    s_108 = t;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = FILE_1_0(x_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm t_108 = NULL;
  if(((t_108 != NULL) && (t_108 != t)))
    _fail(t);
  else
    t_108 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm l_82 = t;
  int m_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL,r_108 = NULL;
      t = XtcConf_4_0(r_7, s_7, t_7, is_list_0_0, t);
      if(((p_108 != NULL) && (p_108 != t)))
        _fail(t);
      else
        p_108 = t;
      if(((r_108 != NULL) && (r_108 != t)))
        _fail(t);
      else
        r_108 = t;
      t = t_0(t);
      if(((q_108 != NULL) && (q_108 != t)))
        _fail(t);
      else
        q_108 = t;
      if(((o_108 != NULL) && (o_108 != t)))
        _fail(t);
      else
        o_108 = t;
      t = not_null(p_108);
      t = xtc_dispatch_0_1(not_null(o_108), t);
      LocalPopChoice(m_82);
    }
  else
    {
      t = l_82;
      {
        ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
        t = is_list_0_0(t);
        if(((u_108 != NULL) && (u_108 != t)))
          _fail(t);
        else
          u_108 = t;
        t = t_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((w_108 != NULL) && (w_108 != t)))
          _fail(t);
        else
          w_108 = t;
        if(((v_108 != NULL) && (v_108 != t)))
          _fail(t);
        else
          v_108 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_108), not_null(u_108));
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
  ATerm x_108 = NULL,y_108 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL,y_7 = NULL,o_12 = NULL;
  if(((f_109 != NULL) && (f_109 != t)))
    _fail(t);
  else
    f_109 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((y_108 != NULL) && (y_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((g_109 != NULL) && (g_109 != t)))
    _fail(t);
  else
    g_109 = t;
  t = SSLgetAnnotations(not_null(f_109));
  if(((x_108 != NULL) && (x_108 != t)))
    _fail(t);
  else
    x_108 = t;
  t = not_null(y_108);
  t = m_109(t);
  if(((c_109 != NULL) && (c_109 != t)))
    _fail(t);
  else
    c_109 = t;
  if(((e_109 != NULL) && (e_109 != t)))
    _fail(t);
  else
    e_109 = t;
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_109));
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  t = SSLsetAnnotations(not_null(y_7), not_null(x_108));
  if(((d_109 != NULL) && (d_109 != t)))
    _fail(t);
  else
    d_109 = t;
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm h_109 = NULL;
  if(((h_109 != NULL) && (h_109 != t)))
    _fail(t);
  else
    h_109 = t;
  t = SSL_close(not_null(h_109));
  return(t);
}
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm l_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_109 != NULL) && (p_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_109 = ATgetArgument(t, 0);
      if(((l_109 != NULL) && (l_109 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_109 != NULL) && (s_109 != t)))
    _fail(t);
  else
    s_109 = t;
  t = w_111(t);
  if(((o_109 != NULL) && (o_109 != t)))
    _fail(t);
  else
    o_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(o_109), not_null(p_109), not_null(l_109));
  t = table_push_0_0(t);
  {
    ATerm n_82 = t;
    int o_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_109), term_j_14);
        t = table_get_0_0(t);
        {
          ATerm p_82 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_82;
            }
        }
        LocalPopChoice(o_82);
      }
    else
      {
        t = n_82;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_109 != NULL) && (q_109 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_109 = ATgetFirst((ATermList) t);
      if(((r_109 != NULL) && (r_109 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        r_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(o_109), term_j_14, (ATerm) ATinsert(CheckATermList(not_null(r_109)), (ATerm) ATinsert(CheckATermList(not_null(q_109)), not_null(p_109))));
  t = table_put_0_0(t);
  t = not_null(s_109);
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm t_109 = NULL;
  if(((t_109 != NULL) && (t_109 != t)))
    _fail(t);
  else
    t_109 = t;
  t = SSL_perror(not_null(t_109));
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_109 = NULL;
  ATerm q_82 = t;
  int r_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm a_110 (ATerm w_109, ATerm t);
      static ATerm a_110 (ATerm w_109, ATerm t)
      {
        ATerm x_109 = NULL,y_109 = NULL;
        t = not_null(w_109);
        if(((y_109 != NULL) && (y_109 != t)))
          _fail(t);
        else
          y_109 = t;
        t = not_null(w_109);
        if(((x_109 != NULL) && (x_109 != t)))
          _fail(t);
        else
          x_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_109), term_s_82);
        t = conc_strings_0_0(t);
        if(((v_109 != NULL) && (v_109 != t)))
          _fail(t);
        else
          v_109 = t;
        t = SSL_mkstemp(not_null(v_109));
        return(t);
      }
      ATerm z_109 = NULL;
      if(((z_109 != NULL) && (z_109 != t)))
        _fail(t);
      else
        z_109 = t;
      t = a_110(not_null(z_109), t);
      LocalPopChoice(r_82);
    }
  else
    {
      t = q_82;
      t = term_t_82;
      t = perror_0_0(t);
      _fail(t);
    }
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_110 != NULL) && (b_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_110 = ATgetArgument(t, 0);
      if(((c_110 != NULL) && (c_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_strcat(not_null(b_110), not_null(c_110));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = strcat_0_0(t);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm u_82 = t;
  int v_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_82;
      t = getenv_0_0(t);
      LocalPopChoice(v_82);
    }
  else
    {
      t = u_82;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm d_110 = NULL,e_110 = NULL;
  if(((e_110 != NULL) && (e_110 != t)))
    _fail(t);
  else
    e_110 = t;
  t = temp_dir_0_0(t);
  if(((d_110 != NULL) && (d_110 != t)))
    _fail(t);
  else
    d_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_110), term_x_82);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_110 = NULL,j_110 = NULL,k_110 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((j_110 != NULL) && (j_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_110 = ATgetArgument(t, 0);
      if(((i_110 != NULL) && (i_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_110 != NULL) && (k_110 != t)))
    _fail(t);
  else
    k_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_110), term_c_13);
  t = assert_1_0(z_7, t);
  t = not_null(i_110);
  t = close_0_0(t);
  t = not_null(j_110);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm r_110 = NULL;
  if(((r_110 != NULL) && (r_110 != t)))
    _fail(t);
  else
    r_110 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL,o_110 = NULL;
  if(((m_110 != NULL) && (m_110 != t)))
    _fail(t);
  else
    m_110 = t;
  if(((o_110 != NULL) && (o_110 != t)))
    _fail(t);
  else
    o_110 = t;
  t = xtc_new_file_0_0(t);
  if(((n_110 != NULL) && (n_110 != t)))
    _fail(t);
  else
    n_110 = t;
  {
    ATerm y_82 = t;
    int z_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_110 = NULL,q_110 = NULL;
        t = not_null(m_110);
        {
          ATerm a_83 = t;
          int b_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(a_8, t);
              LocalPopChoice(b_83);
            }
          else
            {
              t = a_83;
              t = stdin_0_0(t);
            }
        }
        if(((q_110 != NULL) && (q_110 != t)))
          _fail(t);
        else
          q_110 = t;
        t = l_153(t);
        if(((p_110 != NULL) && (p_110 != t)))
          _fail(t);
        else
          p_110 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(m_110)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_110))), term_u_17, not_null(p_110));
        LocalPopChoice(z_82);
      }
    else
      {
        t = y_82;
        {
          ATerm s_110 = NULL,t_110 = NULL;
          t = not_null(m_110);
          t = None_0_0(t);
          if(((t_110 != NULL) && (t_110 != t)))
            _fail(t);
          else
            t_110 = t;
          t = l_153(t);
          if(((s_110 != NULL) && (s_110 != t)))
            _fail(t);
          else
            s_110 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_u_17, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_110))), term_u_17, not_null(s_110));
        }
      }
  }
  t = xtc_command_1_0(k_153, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_110));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t)
{
  t = term_u_17;
  t = xtc_transform_file_2_0(e_153, f_153, t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm u_110 = NULL,v_110 = NULL;
  static ATerm b_8 (ATerm t);
  static ATerm b_8 (ATerm t)
  {
    ATerm w_110 = NULL,x_110 = NULL;
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
    t = (ATerm) ATmakeAppl(sym__3, not_null(v_110), not_null(w_110), not_null(x_110));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((v_110 != NULL) && (v_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_110 = ATgetArgument(t, 0);
      if(((u_110 != NULL) && (u_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_110);
  t = map_1_0(b_8, t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm y_110 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_110 != NULL) && (y_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_110 = ATgetArgument(t, 0);
      if(((y_110 != NULL) && (y_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_111 != NULL) && (a_111 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_111 = ATgetFirst((ATermList) t);
      if(((z_110 != NULL) && (z_110 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        z_110 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((b_111 != NULL) && (b_111 != t)))
    _fail(t);
  else
    b_111 = t;
  t = s_127(t);
  {
    static ATerm c_8 (ATerm t);
    static ATerm c_8 (ATerm t)
    {
      ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL;
      if(((c_111 != NULL) && (c_111 != t)))
        _fail(t);
      else
        c_111 = t;
      if(((e_111 != NULL) && (e_111 != t)))
        _fail(t);
      else
        e_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_111), not_null(c_111));
      t = r_127(t);
      if(((d_111 != NULL) && (d_111 != t)))
        _fail(t);
      else
        d_111 = t;
      return(t);
    }
    t = fetch_1_0(c_8, t);
  }
  t = not_null(z_110);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm o_111 = NULL;
  if(((o_111 != NULL) && (o_111 != t)))
    _fail(t);
  else
    o_111 = t;
  return(t);
}
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm g_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_111 != NULL) && (l_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_111 = ATgetArgument(t, 0);
      if(((g_111 != NULL) && (g_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_111 != NULL) && (n_111 != t)))
    _fail(t);
  else
    n_111 = t;
  t = not_null(l_111);
  {
    static ATerm p_111 (ATerm t);
    static ATerm p_111 (ATerm t)
    {
      ATerm c_83 = t;
      int d_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(g_111);
          LocalPopChoice(d_83);
        }
      else
        {
          t = c_83;
          {
            ATerm e_83 = t;
            int f_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm d_8 (ATerm t);
                static ATerm d_8 (ATerm t)
                {
                  t = not_null(g_111);
                  return(t);
                }
                t = HdMember_p__2_0(o_127, d_8, t);
                t = p_111(t);
                LocalPopChoice(f_83);
              }
            else
              {
                t = e_83;
                t = Cons_2_0(e_8, p_111, t);
              }
          }
        }
      return(t);
    }
    t = p_111(t);
  }
  if(((m_111 != NULL) && (m_111 != t)))
    _fail(t);
  else
    m_111 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm g_83 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_83;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm q_111 = NULL,r_111 = NULL,u_111 = NULL,v_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_111 != NULL) && (u_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_111 = ATgetArgument(t, 0);
      if(((q_111 != NULL) && (q_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_111 != NULL) && (x_111 != t)))
    _fail(t);
  else
    x_111 = t;
  t = not_null(q_111);
  {
    ATerm h_83 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(f_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_83;
      }
  }
  t = not_null(q_111);
  t = filter_1_0(g_8, t);
  if(((v_111 != NULL) && (v_111 != t)))
    _fail(t);
  else
    v_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_111), (ATerm) ATinsert(ATempty, term_i_83));
  t = union_0_0(t);
  if(((r_111 != NULL) && (r_111 != t)))
    _fail(t);
  else
    r_111 = t;
  t = not_null(u_111);
  if(((z_111 != NULL) && (z_111 != t)))
    _fail(t);
  else
    z_111 = t;
  if(((b_112 != NULL) && (b_112 != t)))
    _fail(t);
  else
    b_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_83), not_null(v_111));
  t = conc_0_0(t);
  if(((a_112 != NULL) && (a_112 != t)))
    _fail(t);
  else
    a_112 = t;
  if(((y_111 != NULL) && (y_111 != t)))
    _fail(t);
  else
    y_111 = t;
  t = not_null(z_111);
  t = xtc_load_0_1(not_null(y_111), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_111), not_null(r_111));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_112 != NULL) && (d_112 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_112 = ATgetArgument(t, 0);
      if(((c_112 != NULL) && (c_112 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_112 != NULL) && (f_112 != t)))
    _fail(t);
  else
    f_112 = t;
  if(((g_112 != NULL) && (g_112 != t)))
    _fail(t);
  else
    g_112 = t;
  t = not_null(d_112);
  t = file_exists_0_0(t);
  t = not_null(g_112);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm k_83 = ATgetArgument(t, 0);
      if(((e_112 != NULL) && (e_112 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_112), not_null(e_112));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_112 = NULL;
  static ATerm h_8 (ATerm t);
  static ATerm h_8 (ATerm t)
  {
    ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL;
    if(((i_112 != NULL) && (i_112 != t)))
      _fail(t);
    else
      i_112 = t;
    if(((k_112 != NULL) && (k_112 != t)))
      _fail(t);
    else
      k_112 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_112), not_null(i_112));
    t = table_get_0_0(t);
    if(((j_112 != NULL) && (j_112 != t)))
      _fail(t);
    else
      j_112 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_112), not_null(j_112));
    return(t);
  }
  if(((h_112 != NULL) && (h_112 != t)))
    _fail(t);
  else
    h_112 = t;
  t = table_keys_0_0(t);
  t = map_1_0(h_8, t);
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm l_112 = NULL,m_112 = NULL;
  t = term_y_14;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((m_112 != NULL) && (m_112 != t)))
    _fail(t);
  else
    m_112 = t;
  if(((l_112 != NULL) && (l_112 != t)))
    _fail(t);
  else
    l_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(l_112));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm t_112 = NULL;
  if(((t_112 != NULL) && (t_112 != t)))
    _fail(t);
  else
    t_112 = t;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm u_112 = NULL;
  if(((u_112 != NULL) && (u_112 != t)))
    _fail(t);
  else
    u_112 = t;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm v_112 = NULL;
  if(((v_112 != NULL) && (v_112 != t)))
    _fail(t);
  else
    v_112 = t;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm w_112 = NULL;
  if(((w_112 != NULL) && (w_112 != t)))
    _fail(t);
  else
    w_112 = t;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm x_112 = NULL;
  if(((x_112 != NULL) && (x_112 != t)))
    _fail(t);
  else
    x_112 = t;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm y_112 = NULL;
  if(((y_112 != NULL) && (y_112 != t)))
    _fail(t);
  else
    y_112 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_83 = t;
  int m_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_83 = t;
      if((PushChoice() == 0))
        {
          ATerm o_83 = t;
          int p_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(i_8, t);
              LocalPopChoice(p_83);
            }
          else
            {
              t = o_83;
              t = XtcQuery_2_0(j_8, k_8, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_83;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(r_0, t);
      LocalPopChoice(m_83);
    }
  else
    {
      t = l_83;
      {
        ATerm q_83 = t;
        int r_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(l_8, t);
            LocalPopChoice(r_83);
          }
        else
          {
            t = q_83;
            t = XtcQuery_2_0(m_8, n_8, t);
          }
      }
      {
        ATerm s_83 = t;
        int t_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(r_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(t_83);
          }
        else
          {
            t = s_83;
            {
              ATerm z_112 = NULL,a_113 = NULL;
              if(((z_112 != NULL) && (z_112 != t)))
                _fail(t);
              else
                z_112 = t;
              if(((a_113 != NULL) && (a_113 != t)))
                _fail(t);
              else
                a_113 = t;
              t = not_null(z_112);
              t = xtc_import_local_0_0(t);
              t = not_null(a_113);
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
static ATerm o_8 (ATerm t)
{
  ATerm u_83 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_83;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm b_113 = NULL;
  if(((b_113 != NULL) && (b_113 != t)))
    _fail(t);
  else
    b_113 = t;
  t = filter_1_0(o_8, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm v_83 = t;
  int w_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_113 = NULL;
      if(((d_113 != NULL) && (d_113 != t)))
        _fail(t);
      else
        d_113 = t;
      t = (ATerm) ATinsert(ATempty, term_v_36);
      {
        ATerm x_83 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_83;
          }
      }
      t = not_null(d_113);
      LocalPopChoice(w_83);
      {
        ATerm e_113 = NULL,f_113 = NULL;
        if(((f_113 != NULL) && (f_113 != t)))
          _fail(t);
        else
          f_113 = t;
        t = term_y_83;
        if(((e_113 != NULL) && (e_113 != t)))
          _fail(t);
        else
          e_113 = t;
        t = not_null(f_113);
        t = err_0_1(not_null(e_113), t);
        _fail(t);
      }
    }
  else
    {
      t = v_83;
      {
        ATerm g_113 = NULL;
        if(((g_113 != NULL) && (g_113 != t)))
          _fail(t);
        else
          g_113 = t;
      }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL;
  if(((i_113 != NULL) && (i_113 != t)))
    _fail(t);
  else
    i_113 = t;
  if(((h_113 != NULL) && (h_113 != t)))
    _fail(t);
  else
    h_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_g_37), term_f_37), not_null(h_113));
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(p_8, q_8, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL;
  if(((k_113 != NULL) && (k_113 != t)))
    _fail(t);
  else
    k_113 = t;
  if(match_cons(t, sym_URL_1))
    {
      l_113 = ATgetArgument(t, 0);
      {
        ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL;
        t = not_null(l_113);
        if(((o_113 != NULL) && (o_113 != t)))
          _fail(t);
        else
          o_113 = t;
        t = is_url_http_0_0(t);
        if(((n_113 != NULL) && (n_113 != t)))
          _fail(t);
        else
          n_113 = t;
        if(((m_113 != NULL) && (m_113 != t)))
          _fail(t);
        else
          m_113 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_a_84), not_null(m_113));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm p_113 = NULL,q_113 = NULL;
          t = not_null(k_113);
          if(((q_113 != NULL) && (q_113 != t)))
            _fail(t);
          else
            q_113 = t;
          t = term_b_14;
          t = ReadFromFile_0_0(t);
          if(((p_113 != NULL) && (p_113 != t)))
            _fail(t);
          else
            p_113 = t;
        }
      else
        {
          ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((l_113 != NULL) && (l_113 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_113 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(l_113);
          if(((r_113 != NULL) && (r_113 != t)))
            _fail(t);
          else
            r_113 = t;
          t = not_null(k_113);
          if(((t_113 != NULL) && (t_113 != t)))
            _fail(t);
          else
            t_113 = t;
          t = not_null(r_113);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((s_113 != NULL) && (s_113 != t)))
            _fail(t);
          else
            s_113 = t;
        }
    }
  return(t);
}
ATerm xtc_load_url_0_0 (ATerm t)
{
  ATerm u_113 = NULL;
  if(((u_113 != NULL) && (u_113 != t)))
    _fail(t);
  else
    u_113 = t;
  {
    ATerm b_84 = t;
    int c_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_113 = NULL,w_113 = NULL;
        t = not_null(u_113);
        if(((w_113 != NULL) && (w_113 != t)))
          _fail(t);
        else
          w_113 = t;
        t = not_null(u_113);
        if(((v_113 != NULL) && (v_113 != t)))
          _fail(t);
        else
          v_113 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(v_113));
        t = read_from_0_0(t);
        LocalPopChoice(c_84);
      }
    else
      {
        t = b_84;
        {
          ATerm x_113 = NULL,y_113 = NULL;
          t = not_null(u_113);
          if(((y_113 != NULL) && (y_113 != t)))
            _fail(t);
          else
            y_113 = t;
          t = term_d_84;
          if(((x_113 != NULL) && (x_113 != t)))
            _fail(t);
          else
            x_113 = t;
          t = not_null(y_113);
          t = err_0_1(not_null(x_113), t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm z_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL,d_114 = NULL;
  if(((b_114 != NULL) && (b_114 != t)))
    _fail(t);
  else
    b_114 = t;
  if(((c_114 != NULL) && (c_114 != t)))
    _fail(t);
  else
    c_114 = t;
  t = not_null(b_114);
  if(((d_114 != NULL) && (d_114 != t)))
    _fail(t);
  else
    d_114 = t;
  t = SSL_explode_term(not_null(d_114));
  if(match_cons(t, sym__2))
    {
      ATerm e_84 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_84) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_84 = ATgetArgument(t, 1);
        if(((ATgetType(f_84) == AT_LIST) && !(ATisEmpty(f_84))))
          {
            if(((a_114 != NULL) && (a_114 != ATgetFirst((ATermList) f_84))))
              _fail(ATgetFirst((ATermList) f_84));
            else
              a_114 = ATgetFirst((ATermList) f_84);
            if(((z_113 != NULL) && (z_113 != (ATerm) ATgetNext((ATermList) f_84))))
              _fail((ATerm) ATgetNext((ATermList) f_84));
            else
              z_113 = (ATerm) ATgetNext((ATermList) f_84);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(a_114);
  return(t);
}
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL,r_8 = NULL,p_12 = NULL;
  if(((l_114 != NULL) && (l_114 != t)))
    _fail(t);
  else
    l_114 = t;
  if(match_cons(t, sym__2))
    {
      if(((f_114 != NULL) && (f_114 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_114 = ATgetArgument(t, 0);
      if(((g_114 != NULL) && (g_114 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_114 != NULL) && (m_114 != t)))
    _fail(t);
  else
    m_114 = t;
  t = SSLgetAnnotations(not_null(l_114));
  if(((e_114 != NULL) && (e_114 != t)))
    _fail(t);
  else
    e_114 = t;
  t = not_null(f_114);
  t = z_100(t);
  if(((h_114 != NULL) && (h_114 != t)))
    _fail(t);
  else
    h_114 = t;
  t = not_null(g_114);
  t = a_101(t);
  if(((i_114 != NULL) && (i_114 != t)))
    _fail(t);
  else
    i_114 = t;
  if(((k_114 != NULL) && (k_114 != t)))
    _fail(t);
  else
    k_114 = t;
  if(((p_12 != NULL) && (p_12 != t)))
    _fail(t);
  else
    p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_114), not_null(i_114));
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  t = SSLsetAnnotations(not_null(r_8), not_null(e_114));
  if(((j_114 != NULL) && (j_114 != t)))
    _fail(t);
  else
    j_114 = t;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm e_115 = NULL;
  if(((e_115 != NULL) && (e_115 != t)))
    _fail(t);
  else
    e_115 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm f_115 (ATerm t);
  static ATerm f_115 (ATerm t)
  {
    ATerm g_84 = t;
    int h_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL;
        if(((r_114 != NULL) && (r_114 != t)))
          _fail(t);
        else
          r_114 = t;
        if(match_cons(t, sym__2))
          {
            if(((s_114 != NULL) && (s_114 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              s_114 = ATgetArgument(t, 0);
            if(((v_114 != NULL) && (v_114 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_114 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(s_114);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_114 != NULL) && (t_114 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_114 = ATgetFirst((ATermList) t);
            if(((u_114 != NULL) && (u_114 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              u_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(v_114);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_114 != NULL) && (w_114 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_114 = ATgetFirst((ATermList) t);
            if(((y_114 != NULL) && (y_114 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              y_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(t_114);
        if(((a_115 != NULL) && (a_115 != t)))
          _fail(t);
        else
          a_115 = t;
        t = not_null(u_114);
        if(((z_114 != NULL) && (z_114 != t)))
          _fail(t);
        else
          z_114 = t;
        t = not_null(w_114);
        if(((a_115 != NULL) && (a_115 != t)))
          _fail(t);
        else
          a_115 = t;
        t = not_null(y_114);
        if(((b_115 != NULL) && (b_115 != t)))
          _fail(t);
        else
          b_115 = t;
        t = not_null(r_114);
        if(((d_115 != NULL) && (d_115 != t)))
          _fail(t);
        else
          d_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_114), not_null(b_115));
        t = f_115(t);
        if(((c_115 != NULL) && (c_115 != t)))
          _fail(t);
        else
          c_115 = t;
        LocalPopChoice(h_84);
      }
    else
      {
        t = g_84;
        t = _2_0(s_8, Nil_0_0, t);
      }
    return(t);
  }
  t = f_115(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm g_115 = NULL;
  if(((g_115 != NULL) && (g_115 != t)))
    _fail(t);
  else
    g_115 = t;
  t = SSL_explode_string(not_null(g_115));
  return(t);
}
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL;
  if(((h_115 != NULL) && (h_115 != t)))
    _fail(t);
  else
    h_115 = t;
  if(((l_115 != NULL) && (l_115 != t)))
    _fail(t);
  else
    l_115 = t;
  t = explode_string_0_0(t);
  if(((i_115 != NULL) && (i_115 != t)))
    _fail(t);
  else
    i_115 = t;
  t = not_null(l_115);
  if(((k_115 != NULL) && (k_115 != t)))
    _fail(t);
  else
    k_115 = t;
  t = not_null(c_43);
  t = explode_string_0_0(t);
  if(((j_115 != NULL) && (j_115 != t)))
    _fail(t);
  else
    j_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_115), not_null(j_115));
  t = left_match_0_0(t);
  t = not_null(h_115);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm m_115 = NULL;
  if(((m_115 != NULL) && (m_115 != t)))
    _fail(t);
  else
    m_115 = t;
  {
    ATerm i_84 = t;
    int j_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_115 = NULL,s_115 = NULL;
        t = not_null(m_115);
        if(((s_115 != NULL) && (s_115 != t)))
          _fail(t);
        else
          s_115 = t;
        t = term_k_84;
        if(((n_115 != NULL) && (n_115 != t)))
          _fail(t);
        else
          n_115 = t;
        t = not_null(s_115);
        t = string_starts_with_0_1(not_null(n_115), t);
        LocalPopChoice(j_84);
      }
    else
      {
        t = i_84;
        {
          ATerm t_115 = NULL,y_115 = NULL;
          t = not_null(m_115);
          if(((y_115 != NULL) && (y_115 != t)))
            _fail(t);
          else
            y_115 = t;
          t = term_l_84;
          if(((t_115 != NULL) && (t_115 != t)))
            _fail(t);
          else
            t_115 = t;
          t = not_null(y_115);
          t = string_starts_with_0_1(not_null(t_115), t);
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm d_116 = NULL;
  if(((d_116 != NULL) && (d_116 != t)))
    _fail(t);
  else
    d_116 = t;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm i_116 = NULL;
  if(((i_116 != NULL) && (i_116 != t)))
    _fail(t);
  else
    i_116 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm v_79, ATerm t)
{
  ATerm b_116 = NULL;
  if(((b_116 != NULL) && (b_116 != t)))
    _fail(t);
  else
    b_116 = t;
  {
    ATerm m_84 = t;
    int n_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_116 = NULL;
        if(((c_116 != NULL) && (c_116 != t)))
          _fail(t);
        else
          c_116 = t;
        t = is_url_http_0_0(t);
        t = not_null(c_116);
        LocalPopChoice(n_84);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = m_84;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm o_84 = t;
    int p_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(t_8, t);
        LocalPopChoice(p_84);
      }
    else
      {
        t = o_84;
        {
          ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL;
          if(((e_116 != NULL) && (e_116 != t)))
            _fail(t);
          else
            e_116 = t;
          if(((f_116 != NULL) && (f_116 != t)))
            _fail(t);
          else
            f_116 = t;
          t = not_null(b_116);
          if(((h_116 != NULL) && (h_116 != t)))
            _fail(t);
          else
            h_116 = t;
          t = term_q_84;
          if(((g_116 != NULL) && (g_116 != t)))
            _fail(t);
          else
            g_116 = t;
          t = not_null(h_116);
          t = notice_0_1(not_null(g_116), t);
          t = not_null(f_116);
          t = xtc_convert_repository_0_0(t);
        }
      }
  }
  t = Repository_1_0(u_8, t);
  t = xtc_aterm2table_0_1(not_null(v_79), t);
  return(t);
}
ATerm hashtable_keys_0_0 (ATerm t)
{
  ATerm j_116 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((j_116 != NULL) && (j_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(j_116));
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm k_116 = NULL;
  if(((k_116 != NULL) && (k_116 != t)))
    _fail(t);
  else
    k_116 = t;
  t = lookup_table_0_1(not_null(k_116), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm r_116 = NULL;
  if(((r_116 != NULL) && (r_116 != t)))
    _fail(t);
  else
    r_116 = t;
  {
    ATerm r_84 = t;
    int s_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_15;
        t = table_keys_0_0(t);
        {
          ATerm t_84 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_84;
            }
        }
        LocalPopChoice(s_84);
      }
    else
      {
        t = r_84;
        t = not_null(y_79);
        t = xtc_load_0_1(not_null(z_79), t);
      }
  }
  t = not_null(r_116);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm s_116 = NULL;
  if(((s_116 != NULL) && (s_116 != t)))
    _fail(t);
  else
    s_116 = t;
  t = SSL_getenv(not_null(s_116));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_84 = t;
  int v_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_84;
      t = getenv_0_0(t);
      LocalPopChoice(v_84);
    }
  else
    {
      t = u_84;
      {
        ATerm x_84 = t;
        int y_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(y_84);
          }
        else
          {
            t = x_84;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm t_116 = NULL,u_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL;
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  if(((z_116 != NULL) && (z_116 != t)))
    _fail(t);
  else
    z_116 = t;
  t = xtc_location_0_0(t);
  if(((y_116 != NULL) && (y_116 != t)))
    _fail(t);
  else
    y_116 = t;
  if(((t_116 != NULL) && (t_116 != t)))
    _fail(t);
  else
    t_116 = t;
  t = not_null(x_116);
  if(((w_116 != NULL) && (w_116 != t)))
    _fail(t);
  else
    w_116 = t;
  t = (ATerm) ATempty;
  if(((u_116 != NULL) && (u_116 != t)))
    _fail(t);
  else
    u_116 = t;
  t = not_null(w_116);
  t = xtc_init_0_2(not_null(t_116), not_null(u_116), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL,i_117 = NULL,v_8 = NULL,q_12 = NULL;
  if(((h_117 != NULL) && (h_117 != t)))
    _fail(t);
  else
    h_117 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((b_117 != NULL) && (b_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_117 = ATgetArgument(t, 0);
      if(((c_117 != NULL) && (c_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_117 != NULL) && (i_117 != t)))
    _fail(t);
  else
    i_117 = t;
  t = SSLgetAnnotations(not_null(h_117));
  if(((a_117 != NULL) && (a_117 != t)))
    _fail(t);
  else
    a_117 = t;
  t = not_null(b_117);
  t = g_110(t);
  if(((d_117 != NULL) && (d_117 != t)))
    _fail(t);
  else
    d_117 = t;
  t = not_null(c_117);
  t = h_110(t);
  if(((e_117 != NULL) && (e_117 != t)))
    _fail(t);
  else
    e_117 = t;
  if(((g_117 != NULL) && (g_117 != t)))
    _fail(t);
  else
    g_117 = t;
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(d_117), not_null(e_117));
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  t = SSLsetAnnotations(not_null(v_8), not_null(a_117));
  if(((f_117 != NULL) && (f_117 != t)))
    _fail(t);
  else
    f_117 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL,w_8 = NULL,r_12 = NULL;
  if(((o_117 != NULL) && (o_117 != t)))
    _fail(t);
  else
    o_117 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((k_117 != NULL) && (k_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((p_117 != NULL) && (p_117 != t)))
    _fail(t);
  else
    p_117 = t;
  t = SSLgetAnnotations(not_null(o_117));
  if(((j_117 != NULL) && (j_117 != t)))
    _fail(t);
  else
    j_117 = t;
  t = not_null(k_117);
  t = f_110(t);
  if(((l_117 != NULL) && (l_117 != t)))
    _fail(t);
  else
    l_117 = t;
  if(((n_117 != NULL) && (n_117 != t)))
    _fail(t);
  else
    n_117 = t;
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(l_117));
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  t = SSLsetAnnotations(not_null(w_8), not_null(j_117));
  if(((m_117 != NULL) && (m_117 != t)))
    _fail(t);
  else
    m_117 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm q_117 = NULL;
  if(((q_117 != NULL) && (q_117 != t)))
    _fail(t);
  else
    q_117 = t;
  t = SSL_is_string(not_null(q_117));
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL;
  if(((u_117 != NULL) && (u_117 != t)))
    _fail(t);
  else
    u_117 = t;
  if(match_cons(t, sym__2))
    {
      s_117 = ATgetArgument(t, 0);
      t_117 = ATgetArgument(t, 1);
      {
        ATerm z_84 = t;
        int a_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL;
            t = not_null(u_117);
            if(((v_117 != NULL) && (v_117 != t)))
              _fail(t);
            else
              v_117 = t;
            t = not_null(u_117);
            if(((x_117 != NULL) && (x_117 != t)))
              _fail(t);
            else
              x_117 = t;
            t = not_null(v_117);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(v_117));
            LocalPopChoice(a_85);
          }
        else
          {
            t = z_84;
            {
              ATerm b_85 = t;
              int c_85 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL;
                  t = not_null(s_117);
                  if(((z_117 != NULL) && (z_117 != t)))
                    _fail(t);
                  else
                    z_117 = t;
                  t = not_null(t_117);
                  if(((y_117 != NULL) && (y_117 != t)))
                    _fail(t);
                  else
                    y_117 = t;
                  t = not_null(u_117);
                  if(((b_118 != NULL) && (b_118 != t)))
                    _fail(t);
                  else
                    b_118 = t;
                  t = not_null(z_117);
                  t = is_string_0_0(t);
                  t = not_null(y_117);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(z_117), not_null(y_117));
                  LocalPopChoice(c_85);
                }
              else
                {
                  t = b_85;
                  {
                    ATerm d_85 = t;
                    int e_85 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL;
                        t = not_null(s_117);
                        if(((c_118 != NULL) && (c_118 != t)))
                          _fail(t);
                        else
                          c_118 = t;
                        t = not_null(t_117);
                        if(((d_118 != NULL) && (d_118 != t)))
                          _fail(t);
                        else
                          d_118 = t;
                        t = not_null(u_117);
                        if(((e_118 != NULL) && (e_118 != t)))
                          _fail(t);
                        else
                          e_118 = t;
                        t = not_null(c_118);
                        t = is_string_0_0(t);
                        t = not_null(d_118);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(c_118), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_x_17, (ATerm) ATmakeAppl(sym_String_1, not_null(d_118)))));
                        LocalPopChoice(e_85);
                      }
                    else
                      {
                        t = d_85;
                        {
                          ATerm f_118 = NULL,g_118 = NULL;
                          t = not_null(u_117);
                          if(((f_118 != NULL) && (f_118 != t)))
                            _fail(t);
                          else
                            f_118 = t;
                          t = not_null(u_117);
                          if(((g_118 != NULL) && (g_118 != t)))
                            _fail(t);
                          else
                            g_118 = t;
                          t = not_null(f_118);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(f_118));
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
      ATerm f_85 = t;
      int g_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL;
          t = not_null(u_117);
          if(((h_118 != NULL) && (h_118 != t)))
            _fail(t);
          else
            h_118 = t;
          t = not_null(u_117);
          if(((j_118 != NULL) && (j_118 != t)))
            _fail(t);
          else
            j_118 = t;
          t = not_null(h_118);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(h_118));
          LocalPopChoice(g_85);
        }
      else
        {
          t = f_85;
          {
            ATerm k_118 = NULL,l_118 = NULL;
            t = not_null(u_117);
            if(((k_118 != NULL) && (k_118 != t)))
              _fail(t);
            else
              k_118 = t;
            t = not_null(u_117);
            if(((l_118 != NULL) && (l_118 != t)))
              _fail(t);
            else
              l_118 = t;
            t = not_null(k_118);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(k_118));
          }
        }
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm s_118 = NULL;
  if(((s_118 != NULL) && (s_118 != t)))
    _fail(t);
  else
    s_118 = t;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm t_118 = NULL;
  if(((t_118 != NULL) && (t_118 != t)))
    _fail(t);
  else
    t_118 = t;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm u_118 = NULL;
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm v_118 = NULL;
  if(((v_118 != NULL) && (v_118 != t)))
    _fail(t);
  else
    v_118 = t;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm w_118 = NULL;
  if(((w_118 != NULL) && (w_118 != t)))
    _fail(t);
  else
    w_118 = t;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm x_118 = NULL;
  if(((x_118 != NULL) && (x_118 != t)))
    _fail(t);
  else
    x_118 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_85 = t;
  int i_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_85 = t;
      if((PushChoice() == 0))
        {
          ATerm k_85 = t;
          int l_85 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(x_8, t);
              LocalPopChoice(l_85);
            }
          else
            {
              t = k_85;
              t = XtcQuery_2_0(y_8, z_8, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_85;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(p_0, t);
      LocalPopChoice(i_85);
    }
  else
    {
      t = h_85;
      {
        ATerm m_85 = t;
        int n_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(a_9, t);
            LocalPopChoice(n_85);
          }
        else
          {
            t = m_85;
            t = XtcQuery_2_0(b_9, c_9, t);
          }
      }
      {
        ATerm o_85 = t;
        int q_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(p_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(q_85);
          }
        else
          {
            t = o_85;
            {
              ATerm y_118 = NULL,z_118 = NULL;
              if(((y_118 != NULL) && (y_118 != t)))
                _fail(t);
              else
                y_118 = t;
              if(((z_118 != NULL) && (z_118 != t)))
                _fail(t);
              else
                z_118 = t;
              t = not_null(y_118);
              t = xtc_import_0_0(t);
              t = not_null(z_118);
              t = xtc_find_reg_1_0(p_0, t);
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
ATerm filter_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm r_85 = t;
  int s_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(s_85);
    }
  else
    {
      t = r_85;
      {
        ATerm t_85 = t;
        int u_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_9 (ATerm t);
            static ATerm d_9 (ATerm t)
            {
              t = filter_1_0(g_131, t);
              return(t);
            }
            t = Cons_2_0(g_131, d_9, t);
            LocalPopChoice(u_85);
          }
        else
          {
            t = t_85;
            {
              ATerm b_119 = NULL,c_119 = NULL,d_119 = NULL,e_119 = NULL;
              if(((b_119 != NULL) && (b_119 != t)))
                _fail(t);
              else
                b_119 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((c_119 != NULL) && (c_119 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    c_119 = ATgetFirst((ATermList) t);
                  if(((d_119 != NULL) && (d_119 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    d_119 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(d_119);
              if(((e_119 != NULL) && (e_119 != t)))
                _fail(t);
              else
                e_119 = t;
              t = filter_1_0(g_131, t);
            }
          }
      }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm v_85 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_85;
    }
  return(t);
}
ATerm xtc_missing_dependencies_0_0 (ATerm t)
{
  ATerm f_119 = NULL;
  if(((f_119 != NULL) && (f_119 != t)))
    _fail(t);
  else
    f_119 = t;
  t = filter_1_0(e_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_w_85;
  return(t);
}
ATerm xtc_preload_0_0 (ATerm t)
{
  ATerm i_119 = NULL;
  ATerm x_85 = t;
  int y_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_119 = NULL;
      if(((j_119 != NULL) && (j_119 != t)))
        _fail(t);
      else
        j_119 = t;
      t = term_z_85;
      t = get_config_0_0(t);
      {
        ATerm a_86 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_86;
          }
      }
      if(((i_119 != NULL) && (i_119 != t)))
        _fail(t);
      else
        i_119 = t;
      t = not_null(j_119);
      LocalPopChoice(y_85);
      t = not_null(i_119);
      t = xtc_missing_dependencies_0_0(t);
      {
        ATerm b_86 = t;
        int c_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_119 = NULL;
            if(((k_119 != NULL) && (k_119 != t)))
              _fail(t);
            else
              k_119 = t;
            t = Nil_0_0(t);
            t = not_null(k_119);
            LocalPopChoice(c_86);
            {
              ATerm d_86 = t;
              int e_86 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_119 = NULL;
                  if(((l_119 != NULL) && (l_119 != t)))
                    _fail(t);
                  else
                    l_119 = t;
                  t = term_f_86;
                  t = get_config_0_0(t);
                  t = not_null(l_119);
                  LocalPopChoice(e_86);
                  t = term_g_86;
                  t = echo_0_0(t);
                  t = term_f_80;
                  t = exit_0_0(t);
                }
              else
                {
                  t = d_86;
                  {
                    ATerm m_119 = NULL;
                    if(((m_119 != NULL) && (m_119 != t)))
                      _fail(t);
                    else
                      m_119 = t;
                  }
                }
            }
          }
        else
          {
            t = b_86;
            t = debug_1_0(f_9, t);
            t = term_u_19;
            t = exit_0_0(t);
          }
      }
    }
  else
    {
      t = x_85;
      {
        ATerm n_119 = NULL;
        if(((n_119 != NULL) && (n_119 != t)))
          _fail(t);
        else
          n_119 = t;
      }
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm o_119 = NULL,p_119 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_119 != NULL) && (o_119 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_119 = ATgetArgument(t, 0);
      if(((p_119 != NULL) && (p_119 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_72, not_null(o_119), not_null(p_119));
  t = table_put_0_0(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm r_119 = NULL;
  if(((r_119 != NULL) && (r_119 != t)))
    _fail(t);
  else
    r_119 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(r_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(r_119);
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
  if(((s_119 != NULL) && (s_119 != t)))
    _fail(t);
  else
    s_119 = t;
  if(((u_119 != NULL) && (u_119 != t)))
    _fail(t);
  else
    u_119 = t;
  t = string_to_int_0_0(t);
  if(((t_119 != NULL) && (t_119 != t)))
    _fail(t);
  else
    t_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_86, not_null(t_119));
  t = set_config_0_0(t);
  t = not_null(s_119);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_i_86;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_9, h_9, i_9, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm v_119 = NULL;
  if(((v_119 != NULL) && (v_119 != t)))
    _fail(t);
  else
    v_119 = t;
  t = SSL_string_to_int(not_null(v_119));
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm x_119 = NULL;
  if(((x_119 != NULL) && (x_119 != t)))
    _fail(t);
  else
    x_119 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(x_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(x_119);
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm y_119 = NULL;
  if(((y_119 != NULL) && (y_119 != t)))
    _fail(t);
  else
    y_119 = t;
  t = term_j_86;
  t = set_config_0_0(t);
  t = term_k_86;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_l_86;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL;
  if(((b_120 != NULL) && (b_120 != t)))
    _fail(t);
  else
    b_120 = t;
  if(((d_120 != NULL) && (d_120 != t)))
    _fail(t);
  else
    d_120 = t;
  t = string_to_int_0_0(t);
  if(((c_120 != NULL) && (c_120 != t)))
    _fail(t);
  else
    c_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_79, not_null(c_120));
  t = set_config_0_0(t);
  t = not_null(b_120);
  if(((a_120 != NULL) && (a_120 != t)))
    _fail(t);
  else
    a_120 = t;
  if(((z_119 != NULL) && (z_119 != t)))
    _fail(t);
  else
    z_119 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_119));
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_m_86;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm e_120 = NULL;
  if(((e_120 != NULL) && (e_120 != t)))
    _fail(t);
  else
    e_120 = t;
  t = term_n_86;
  t = set_config_0_0(t);
  t = term_o_86;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_p_86;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_86 = t;
  int r_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_9, k_9, l_9, t);
      LocalPopChoice(r_86);
    }
  else
    {
      t = q_86;
      {
        ATerm s_86 = t;
        int t_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_9, n_9, o_9, t);
            LocalPopChoice(t_86);
          }
        else
          {
            t = s_86;
            t = Option_3_0(p_9, q_9, r_9, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm u_86 = t;
  int v_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      LocalPopChoice(v_86);
    }
  else
    {
      t = u_86;
      t = keep_option_0_0(t);
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm g_120 = NULL;
  if(((g_120 != NULL) && (g_120 != t)))
    _fail(t);
  else
    g_120 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(g_120);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(g_120);
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL;
  if(((j_120 != NULL) && (j_120 != t)))
    _fail(t);
  else
    j_120 = t;
  if(((l_120 != NULL) && (l_120 != t)))
    _fail(t);
  else
    l_120 = t;
  if(((k_120 != NULL) && (k_120 != t)))
    _fail(t);
  else
    k_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, not_null(k_120));
  t = set_config_0_0(t);
  t = not_null(j_120);
  if(((i_120 != NULL) && (i_120 != t)))
    _fail(t);
  else
    i_120 = t;
  if(((h_120 != NULL) && (h_120 != t)))
    _fail(t);
  else
    h_120 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_120));
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_w_86;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_9, t_9, u_9, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm m_120 = NULL;
  if(((m_120 != NULL) && (m_120 != t)))
    _fail(t);
  else
    m_120 = t;
  t = term_y_86;
  t = set_config_0_0(t);
  t = term_z_86;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_a_87;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm b_87 = t;
  int c_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(c_87);
    }
  else
    {
      t = b_87;
      t = Option_3_0(v_9, w_9, x_9, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL;
  if(((p_120 != NULL) && (p_120 != t)))
    _fail(t);
  else
    p_120 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(p_120);
      t = register_usage_1_0(o_0, t);
    }
  else
    {
      ATerm u_120 = NULL,v_120 = NULL,w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_120 != NULL) && (q_120 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_120 = ATgetFirst((ATermList) t);
          if(((r_120 != NULL) && (r_120 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_120);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_120 != NULL) && (s_120 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_120 = ATgetFirst((ATermList) t);
          if(((t_120 != NULL) && (t_120 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_120);
      if(((w_120 != NULL) && (w_120 != t)))
        _fail(t);
      else
        w_120 = t;
      t = not_null(s_120);
      if(((u_120 != NULL) && (u_120 != t)))
        _fail(t);
      else
        u_120 = t;
      t = not_null(t_120);
      if(((v_120 != NULL) && (v_120 != t)))
        _fail(t);
      else
        v_120 = t;
      t = not_null(p_120);
      if(((z_120 != NULL) && (z_120 != t)))
        _fail(t);
      else
        z_120 = t;
      t = not_null(w_120);
      t = k_0(t);
      t = not_null(z_120);
      if(((y_120 != NULL) && (y_120 != t)))
        _fail(t);
      else
        y_120 = t;
      t = not_null(u_120);
      t = m_0(t);
      if(((x_120 != NULL) && (x_120 != t)))
        _fail(t);
      else
        x_120 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_120)), not_null(x_120));
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm c_121 = NULL;
  if(((c_121 != NULL) && (c_121 != t)))
    _fail(t);
  else
    c_121 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(c_121);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(c_121);
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL,h_121 = NULL;
  if(((f_121 != NULL) && (f_121 != t)))
    _fail(t);
  else
    f_121 = t;
  if(((h_121 != NULL) && (h_121 != t)))
    _fail(t);
  else
    h_121 = t;
  if(((g_121 != NULL) && (g_121 != t)))
    _fail(t);
  else
    g_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, not_null(g_121));
  t = set_config_0_0(t);
  t = not_null(f_121);
  if(((e_121 != NULL) && (e_121 != t)))
    _fail(t);
  else
    e_121 = t;
  if(((d_121 != NULL) && (d_121 != t)))
    _fail(t);
  else
    d_121 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_121));
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_d_87;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_9, z_9, a_10, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm g_87 = t;
  int h_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_87);
    }
  else
    {
      t = g_87;
      {
        ATerm i_87 = t;
        int j_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            LocalPopChoice(j_87);
          }
        else
          {
            t = i_87;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-preload", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm i_121 = NULL;
  if(((i_121 != NULL) && (i_121 != t)))
    _fail(t);
  else
    i_121 = t;
  t = term_k_87;
  t = set_config_0_0(t);
  t = term_m_87;
  t = set_config_0_0(t);
  t = not_null(i_121);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_n_87;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dependencies", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm j_121 = NULL;
  if(((j_121 != NULL) && (j_121 != t)))
    _fail(t);
  else
    j_121 = t;
  t = term_o_87;
  t = set_config_0_0(t);
  t = not_null(j_121);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_p_87;
  return(t);
}
ATerm xtc_dependency_options_0_0 (ATerm t)
{
  ATerm q_87 = t;
  int r_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_10, c_10, d_10, t);
      LocalPopChoice(r_87);
    }
  else
    {
      t = q_87;
      t = Option_3_0(e_10, f_10, g_10, t);
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm k_121 = NULL;
  if(((k_121 != NULL) && (k_121 != t)))
    _fail(t);
  else
    k_121 = t;
  t = term_s_87;
  t = set_config_0_0(t);
  t = term_e_72;
  t = set_config_0_0(t);
  t = not_null(k_121);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_t_87;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(h_10, i_10, j_10, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm l_121 = NULL;
  if(((l_121 != NULL) && (l_121 != t)))
    _fail(t);
  else
    l_121 = t;
  t = term_e_72;
  t = set_config_0_0(t);
  t = not_null(l_121);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_u_87;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(k_10, l_10, m_10, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm v_87 = t;
  int w_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(w_87);
    }
  else
    {
      t = v_87;
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
  static ATerm m_121 (ATerm t);
  static ATerm m_121 (ATerm t)
  {
    ATerm y_87 = t;
    int z_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(z_87);
      }
    else
      {
        t = y_87;
        t = Cons_2_0(f_123, m_121, t);
      }
    return(t);
  }
  t = m_121(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL,q_121 = NULL;
  if(((q_121 != NULL) && (q_121 != t)))
    _fail(t);
  else
    q_121 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_121 = ATgetFirst((ATermList) t);
      p_121 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL,a_122 = NULL;
        t = not_null(o_121);
        if(((r_121 != NULL) && (r_121 != t)))
          _fail(t);
        else
          r_121 = t;
        t = not_null(p_121);
        if(((s_121 != NULL) && (s_121 != t)))
          _fail(t);
        else
          s_121 = t;
        t = not_null(q_121);
        if(((u_121 != NULL) && (u_121 != t)))
          _fail(t);
        else
          u_121 = t;
        t = not_null(s_121);
        if(((w_121 != NULL) && (w_121 != t)))
          _fail(t);
        else
          w_121 = t;
        if(((a_122 != NULL) && (a_122 != t)))
          _fail(t);
        else
          a_122 = t;
        t = h_0(t);
        if(((x_121 != NULL) && (x_121 != t)))
          _fail(t);
        else
          x_121 = t;
        t = not_null(a_122);
        if(((z_121 != NULL) && (z_121 != t)))
          _fail(t);
        else
          z_121 = t;
        t = not_null(r_121);
        t = f_0(t);
        if(((y_121 != NULL) && (y_121 != t)))
          _fail(t);
        else
          y_121 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(x_121)), not_null(y_121));
        if(((v_121 != NULL) && (v_121 != t)))
          _fail(t);
        else
          v_121 = t;
        t = not_null(w_121);
        {
          static ATerm n_10 (ATerm t);
          static ATerm n_10 (ATerm t)
          {
            t = not_null(v_121);
            return(t);
          }
          t = reverse_acc_2_0(f_0, n_10, t);
        }
        if(((t_121 != NULL) && (t_121 != t)))
          _fail(t);
        else
          t_121 = t;
      }
    }
  else
    {
      ATerm b_122 = NULL,c_122 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(q_121);
      if(((c_122 != NULL) && (c_122 != t)))
        _fail(t);
      else
        c_122 = t;
      t = term_c_13;
      t = h_0(t);
      if(((b_122 != NULL) && (b_122 != t)))
        _fail(t);
      else
        b_122 = t;
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm e_122 = NULL;
  if(((e_122 != NULL) && (e_122 != t)))
    _fail(t);
  else
    e_122 = t;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(o_10, p_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm g_122 = NULL,h_122 = NULL;
  if(((h_122 != NULL) && (h_122 != t)))
    _fail(t);
  else
    h_122 = t;
  if(((g_122 != NULL) && (g_122 != t)))
    _fail(t);
  else
    g_122 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_122)), term_a_88);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t)
{
  ATerm f_122 = NULL;
  static ATerm u_10 (ATerm t);
  static ATerm u_10 (ATerm t)
  {
    ATerm i_122 = NULL,j_122 = NULL;
    if(((j_122 != NULL) && (j_122 != t)))
      _fail(t);
    else
      j_122 = t;
    t = m_145(t);
    if(((i_122 != NULL) && (i_122 != t)))
      _fail(t);
    else
      i_122 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(i_122)), term_o_79);
    t = echo_0_0(t);
    return(t);
  }
  ATerm b_88 = t;
  int c_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_88;
      t = get_config_0_0(t);
      if(((f_122 != NULL) && (f_122 != t)))
        _fail(t);
      else
        f_122 = t;
      LocalPopChoice(c_88);
    }
  else
    {
      t = b_88;
      {
        static ATerm q_10 (ATerm t);
        static ATerm q_10 (ATerm t)
        {
          static ATerm r_10 (ATerm t);
          static ATerm r_10 (ATerm t)
          {
            if(((f_122 != NULL) && (f_122 != t)))
              _fail(t);
            else
              f_122 = t;
            return(t);
          }
          t = Program_1_0(r_10, t);
          return(t);
        }
        t = option_defined_1_0(q_10, t);
      }
    }
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      t = l_145(t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(s_10, t);
  }
  t = term_e_88;
  t = echo_0_0(t);
  t = term_h_88;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(t_10, t);
  t = try_1_0(u_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,v_10 = NULL,s_12 = NULL;
  if(((p_122 != NULL) && (p_122 != t)))
    _fail(t);
  else
    p_122 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((l_122 != NULL) && (l_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((q_122 != NULL) && (q_122 != t)))
    _fail(t);
  else
    q_122 = t;
  t = SSLgetAnnotations(not_null(p_122));
  if(((k_122 != NULL) && (k_122 != t)))
    _fail(t);
  else
    k_122 = t;
  t = not_null(l_122);
  t = z_108(t);
  if(((m_122 != NULL) && (m_122 != t)))
    _fail(t);
  else
    m_122 = t;
  if(((o_122 != NULL) && (o_122 != t)))
    _fail(t);
  else
    o_122 = t;
  if(((s_12 != NULL) && (s_12 != t)))
    _fail(t);
  else
    s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_122));
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = SSLsetAnnotations(not_null(v_10), not_null(k_122));
  if(((n_122 != NULL) && (n_122 != t)))
    _fail(t);
  else
    n_122 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_122 = NULL,s_122 = NULL;
  static ATerm y_10 (ATerm t);
  static ATerm z_10 (ATerm t);
  static ATerm y_10 (ATerm t)
  {
    static ATerm a_11 (ATerm t);
    static ATerm a_11 (ATerm t)
    {
      t = not_null(r_122);
      return(t);
    }
    t = short_description_1_0(a_11, t);
    return(t);
  }
  static ATerm z_10 (ATerm t)
  {
    static ATerm b_11 (ATerm t);
    static ATerm b_11 (ATerm t)
    {
      t = not_null(r_122);
      return(t);
    }
    t = long_description_1_0(b_11, t);
    return(t);
  }
  if(((s_122 != NULL) && (s_122 != t)))
    _fail(t);
  else
    s_122 = t;
  {
    ATerm i_88 = t;
    int j_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_88;
        t = get_config_0_0(t);
        if(((r_122 != NULL) && (r_122 != t)))
          _fail(t);
        else
          r_122 = t;
        LocalPopChoice(j_88);
      }
    else
      {
        t = i_88;
        {
          static ATerm w_10 (ATerm t);
          static ATerm w_10 (ATerm t)
          {
            static ATerm x_10 (ATerm t);
            static ATerm x_10 (ATerm t)
            {
              if(((r_122 != NULL) && (r_122 != t)))
                _fail(t);
              else
                r_122 = t;
              return(t);
            }
            t = Program_1_0(x_10, t);
            return(t);
          }
          t = option_defined_1_0(w_10, t);
        }
      }
  }
  t = not_null(s_122);
  t = default_system_usage_2_0(y_10, z_10, t);
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm k_88 = t;
  int l_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(l_88);
    }
  else
    {
      t = k_88;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm u_122 = NULL,w_122 = NULL,y_122 = NULL;
  if(((u_122 != NULL) && (u_122 != t)))
    _fail(t);
  else
    u_122 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(u_122);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_122 != NULL) && (w_122 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_122 = ATgetFirst((ATermList) t);
          if(((y_122 != NULL) && (y_122 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(u_122);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL;
  if(((z_122 != NULL) && (z_122 != t)))
    _fail(t);
  else
    z_122 = t;
  if(((b_123 != NULL) && (b_123 != t)))
    _fail(t);
  else
    b_123 = t;
  {
    ATerm m_88 = t;
    int n_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(n_88);
      }
    else
      {
        t = m_88;
        {
          ATerm c_123 = NULL,e_123 = NULL,h_123 = NULL;
          if(((c_123 != NULL) && (c_123 != t)))
            _fail(t);
          else
            c_123 = t;
          if(((h_123 != NULL) && (h_123 != t)))
            _fail(t);
          else
            h_123 = t;
          t = not_null(c_123);
          if(((e_123 != NULL) && (e_123 != t)))
            _fail(t);
          else
            e_123 = t;
          t = (ATerm) ATinsert(ATempty, not_null(e_123));
        }
      }
  }
  if(((a_123 != NULL) && (a_123 != t)))
    _fail(t);
  else
    a_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, not_null(a_123));
  t = printnl_0_0(t);
  t = not_null(z_122);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_88;
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
  ATerm o_88 = t;
  int p_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(p_88);
    }
  else
    {
      t = o_88;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL;
  t = report_run_time_0_0(t);
  if(((j_123 != NULL) && (j_123 != t)))
    _fail(t);
  else
    j_123 = t;
  t = term_c_13;
  t = whoami_0_0(t);
  if(((i_123 != NULL) && (i_123 != t)))
    _fail(t);
  else
    i_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, term_q_88), not_null(i_123)));
  t = printnl_0_0(t);
  t = term_u_19;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_88;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm k_123 = NULL;
  if(((k_123 != NULL) && (k_123 != t)))
    _fail(t);
  else
    k_123 = t;
  t = SSL_TicksToSeconds(not_null(k_123));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm l_123 = NULL,m_123 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_123 != NULL) && (l_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_123 = ATgetArgument(t, 0);
      if(((m_123 != NULL) && (m_123 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_88 = t;
    int s_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(l_123), not_null(m_123));
        LocalPopChoice(s_88);
      }
    else
      {
        t = r_88;
        t = SSL_addr(not_null(l_123), not_null(m_123));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  ATerm t_88 = t;
  int u_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = c_130(t);
      LocalPopChoice(u_88);
    }
  else
    {
      t = t_88;
      {
        ATerm s_123 = NULL,t_123 = NULL,w_123 = NULL,x_123 = NULL,a_124 = NULL,b_124 = NULL,e_124 = NULL,h_124 = NULL,i_124 = NULL;
        if(((s_123 != NULL) && (s_123 != t)))
          _fail(t);
        else
          s_123 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_123 != NULL) && (t_123 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_123 = ATgetFirst((ATermList) t);
            if(((w_123 != NULL) && (w_123 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              w_123 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(t_123);
        if(((x_123 != NULL) && (x_123 != t)))
          _fail(t);
        else
          x_123 = t;
        t = not_null(w_123);
        if(((a_124 != NULL) && (a_124 != t)))
          _fail(t);
        else
          a_124 = t;
        t = not_null(s_123);
        if(((e_124 != NULL) && (e_124 != t)))
          _fail(t);
        else
          e_124 = t;
        if(((i_124 != NULL) && (i_124 != t)))
          _fail(t);
        else
          i_124 = t;
        t = not_null(a_124);
        t = foldr_2_0(c_130, d_130, t);
        if(((h_124 != NULL) && (h_124 != t)))
          _fail(t);
        else
          h_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_123), not_null(h_124));
        t = d_130(t);
        if(((b_124 != NULL) && (b_124 != t)))
          _fail(t);
        else
          b_124 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  if(((m_124 != NULL) && (m_124 != t)))
    _fail(t);
  else
    m_124 = t;
  if(((n_124 != NULL) && (n_124 != t)))
    _fail(t);
  else
    n_124 = t;
  t = not_null(m_124);
  if(((o_124 != NULL) && (o_124 != t)))
    _fail(t);
  else
    o_124 = t;
  t = SSL_explode_term(not_null(o_124));
  if(match_cons(t, sym__2))
    {
      ATerm v_88 = ATgetArgument(t, 0);
      if(((j_124 != NULL) && (j_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_124);
  if(((l_124 != NULL) && (l_124 != t)))
    _fail(t);
  else
    l_124 = t;
  t = not_null(j_124);
  t = foldr_2_0(z_134, a_135, t);
  if(((k_124 != NULL) && (k_124 != t)))
    _fail(t);
  else
    k_124 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_f_80;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(c_11, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm p_124 = NULL,q_124 = NULL,r_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_124 != NULL) && (p_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_124 = ATgetArgument(t, 0);
      if(((q_124 != NULL) && (q_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_124 != NULL) && (r_124 != t)))
    _fail(t);
  else
    r_124 = t;
  {
    ATerm w_88 = t;
    int x_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(p_124), not_null(q_124));
        LocalPopChoice(x_88);
      }
    else
      {
        t = w_88;
        t = SSL_gtr(not_null(p_124), not_null(q_124));
      }
  }
  t = not_null(r_124);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_124 = NULL;
  ATerm y_88 = t;
  int z_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_124 = NULL,v_124 = NULL,w_124 = NULL;
      if(((u_124 != NULL) && (u_124 != t)))
        _fail(t);
      else
        u_124 = t;
      if(match_cons(t, sym__2))
        {
          if(((v_124 != NULL) && (v_124 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_124 = ATgetArgument(t, 0);
          if(((w_124 != NULL) && (w_124 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_124 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(v_124);
      if(((t_124 != NULL) && (t_124 != t)))
        _fail(t);
      else
        t_124 = t;
      t = not_null(w_124);
      if(((t_124 != NULL) && (t_124 != t)))
        _fail(t);
      else
        t_124 = t;
      t = not_null(u_124);
      LocalPopChoice(z_88);
    }
  else
    {
      t = y_88;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  static ATerm d_11 (ATerm t);
  static ATerm d_11 (ATerm t)
  {
    ATerm x_124 = NULL,y_124 = NULL,z_124 = NULL;
    if(((x_124 != NULL) && (x_124 != t)))
      _fail(t);
    else
      x_124 = t;
    if(((z_124 != NULL) && (z_124 != t)))
      _fail(t);
    else
      z_124 = t;
    t = term_u_79;
    t = get_config_0_0(t);
    if(((y_124 != NULL) && (y_124 != t)))
      _fail(t);
    else
      y_124 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_124), term_u_19);
    t = geq_0_0(t);
    t = not_null(x_124);
    t = i_140(t);
    return(t);
  }
  t = try_1_0(d_11, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL;
  if(((d_125 != NULL) && (d_125 != t)))
    _fail(t);
  else
    d_125 = t;
  t = run_time_0_0(t);
  if(((a_125 != NULL) && (a_125 != t)))
    _fail(t);
  else
    a_125 = t;
  t = not_null(d_125);
  if(((c_125 != NULL) && (c_125 != t)))
    _fail(t);
  else
    c_125 = t;
  t = term_c_13;
  t = whoami_0_0(t);
  if(((b_125 != NULL) && (b_125 != t)))
    _fail(t);
  else
    b_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_89), not_null(a_125)), term_x_19), not_null(b_125)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_f_80;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm e_125 = NULL,f_125 = NULL;
  if(((e_125 != NULL) && (e_125 != t)))
    _fail(t);
  else
    e_125 = t;
  if(((f_125 != NULL) && (f_125 != t)))
    _fail(t);
  else
    f_125 = t;
  t = term_b_89;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_89, term_c_89, not_null(e_125));
  t = table_put_0_0(t);
  t = not_null(f_125);
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t)
{
  ATerm g_125 = NULL,n_125 = NULL,o_125 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((g_125 != NULL) && (g_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(g_125), not_null(t_59));
  if(((o_125 != NULL) && (o_125 != t)))
    _fail(t);
  else
    o_125 = t;
  if(((n_125 != NULL) && (n_125 != t)))
    _fail(t);
  else
    n_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(n_125));
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((p_125 != NULL) && (p_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(p_125));
  if(((r_125 != NULL) && (r_125 != t)))
    _fail(t);
  else
    r_125 = t;
  if(((q_125 != NULL) && (q_125 != t)))
    _fail(t);
  else
    q_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(q_125));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_125 = NULL,t_125 = NULL,u_125 = NULL;
  if(((s_125 != NULL) && (s_125 != t)))
    _fail(t);
  else
    s_125 = t;
  if(((t_125 != NULL) && (t_125 != t)))
    _fail(t);
  else
    t_125 = t;
  t = table_hashtable_0_0(t);
  if(((u_125 != NULL) && (u_125 != t)))
    _fail(t);
  else
    u_125 = t;
  t = lookup_table_0_1(not_null(s_125), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(u_125);
  t = hashtable_remove_0_1(not_null(s_125), t);
  t = not_null(t_125);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm v_125 = NULL;
  if(((v_125 != NULL) && (v_125 != t)))
    _fail(t);
  else
    v_125 = t;
  t = SSL_exit(not_null(v_125));
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_125 != NULL) && (w_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_125 = ATgetArgument(t, 0);
      if(((x_125 != NULL) && (x_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_125 != NULL) && (y_125 != t)))
    _fail(t);
  else
    y_125 = t;
  t = SSL_printnl(not_null(w_125), not_null(x_125));
  t = not_null(y_125);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm z_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL,f_11 = NULL,t_12 = NULL;
  if(((e_126 != NULL) && (e_126 != t)))
    _fail(t);
  else
    e_126 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((a_126 != NULL) && (a_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_126 != NULL) && (f_126 != t)))
    _fail(t);
  else
    f_126 = t;
  t = SSLgetAnnotations(not_null(e_126));
  if(((z_125 != NULL) && (z_125 != t)))
    _fail(t);
  else
    z_125 = t;
  t = not_null(a_126);
  t = a_109(t);
  if(((b_126 != NULL) && (b_126 != t)))
    _fail(t);
  else
    b_126 = t;
  if(((d_126 != NULL) && (d_126 != t)))
    _fail(t);
  else
    d_126 = t;
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_126));
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = SSLsetAnnotations(not_null(f_11), not_null(z_125));
  if(((c_126 != NULL) && (c_126 != t)))
    _fail(t);
  else
    c_126 = t;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm i_126 = NULL;
  if(((i_126 != NULL) && (i_126 != t)))
    _fail(t);
  else
    i_126 = t;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm j_126 = NULL;
  if(((j_126 != NULL) && (j_126 != t)))
    _fail(t);
  else
    j_126 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  static ATerm k_126 (ATerm t);
  static ATerm k_126 (ATerm t)
  {
    ATerm d_89 = t;
    int e_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_123, g_11, t);
        LocalPopChoice(e_89);
      }
    else
      {
        t = d_89;
        t = Cons_2_0(h_11, k_126, t);
      }
    return(t);
  }
  t = k_126(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  t = fetch_1_0(c_144, t);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_126 = NULL,m_126 = NULL;
  if(((m_126 != NULL) && (m_126 != t)))
    _fail(t);
  else
    m_126 = t;
  if(((l_126 != NULL) && (l_126 != t)))
    _fail(t);
  else
    l_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_72, not_null(l_126));
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
  ATerm f_89 = t;
  int g_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_114(t);
      LocalPopChoice(g_89);
    }
  else
    {
      t = f_89;
      {
        ATerm o_126 = NULL,p_126 = NULL;
        if(((o_126 != NULL) && (o_126 != t)))
          _fail(t);
        else
          o_126 = t;
        if(((p_126 != NULL) && (p_126 != t)))
          _fail(t);
        else
          p_126 = t;
      }
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_i_89;
  t = set_config_0_0(t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_j_89;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm q_126 = NULL;
  if(((q_126 != NULL) && (q_126 != t)))
    _fail(t);
  else
    q_126 = t;
  t = term_i_89;
  t = set_config_0_0(t);
  t = term_l_89;
  t = set_config_0_0(t);
  t = term_m_89;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_n_89;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_89 = t;
  int p_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_11, j_11, k_11, t);
      LocalPopChoice(p_89);
    }
  else
    {
      t = o_89;
      t = Option_3_0(l_11, m_11, n_11, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm r_126 = NULL,s_126 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_126 != NULL) && (r_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_126 = ATgetArgument(t, 0);
      if(((s_126 != NULL) && (s_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(r_126), t);
  t = hashtable_get_0_1(not_null(s_126), t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((u_126 != NULL) && (u_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_126 = ATgetArgument(t, 0);
      if(((v_126 != NULL) && (v_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_126 = ATgetArgument(t, 1);
      if(((t_126 != NULL) && (t_126 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_126 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  if(((y_126 != NULL) && (y_126 != t)))
    _fail(t);
  else
    y_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_126), not_null(v_126));
  {
    ATerm q_89 = t;
    int r_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(r_89);
      }
    else
      {
        t = q_89;
        t = (ATerm) ATempty;
      }
  }
  if(((x_126 != NULL) && (x_126 != t)))
    _fail(t);
  else
    x_126 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(u_126), not_null(v_126), (ATerm) ATinsert(CheckATermList(not_null(x_126)), not_null(t_126)));
  t = table_put_0_0(t);
  t = not_null(w_126);
  return(t);
}
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t)
{
  ATerm z_126 = NULL,a_127 = NULL;
  if(((a_127 != NULL) && (a_127 != t)))
    _fail(t);
  else
    a_127 = t;
  t = term_c_13;
  t = i_145(t);
  if(((z_126 != NULL) && (z_126 != t)))
    _fail(t);
  else
    z_126 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_88, term_g_88, not_null(z_126));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL;
  if(((c_127 != NULL) && (c_127 != t)))
    _fail(t);
  else
    c_127 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(c_127);
      t = register_usage_1_0(e_0, t);
    }
  else
    {
      ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL,l_127 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_127 != NULL) && (d_127 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_127 = ATgetFirst((ATermList) t);
          if(((e_127 != NULL) && (e_127 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_127 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(d_127);
      if(((g_127 != NULL) && (g_127 != t)))
        _fail(t);
      else
        g_127 = t;
      t = not_null(e_127);
      if(((f_127 != NULL) && (f_127 != t)))
        _fail(t);
      else
        f_127 = t;
      t = not_null(c_127);
      if(((l_127 != NULL) && (l_127 != t)))
        _fail(t);
      else
        l_127 = t;
      t = not_null(g_127);
      t = b_0(t);
      t = not_null(l_127);
      if(((i_127 != NULL) && (i_127 != t)))
        _fail(t);
      else
        i_127 = t;
      t = term_c_13;
      t = c_0(t);
      if(((h_127 != NULL) && (h_127 != t)))
        _fail(t);
      else
        h_127 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(f_127)), not_null(h_127));
    }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm n_127 = NULL;
  if(((n_127 != NULL) && (n_127 != t)))
    _fail(t);
  else
    n_127 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(n_127);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(n_127);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(n_127);
        }
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_t_89;
  t = set_config_0_0(t);
  t = term_u_89;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_v_89;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(o_11, p_11, q_11, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm q_127 = NULL,t_127 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_127 != NULL) && (q_127 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_127 = ATgetFirst((ATermList) t);
      if(((t_127 != NULL) && (t_127 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        t_127 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(t_127)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_127)));
  return(t);
}
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL,r_11 = NULL,u_12 = NULL;
  if(((b_128 != NULL) && (b_128 != t)))
    _fail(t);
  else
    b_128 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((v_127 != NULL) && (v_127 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        v_127 = ATgetFirst((ATermList) t);
      if(((w_127 != NULL) && (w_127 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        w_127 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((c_128 != NULL) && (c_128 != t)))
    _fail(t);
  else
    c_128 = t;
  t = SSLgetAnnotations(not_null(b_128));
  if(((u_127 != NULL) && (u_127 != t)))
    _fail(t);
  else
    u_127 = t;
  t = not_null(v_127);
  t = u_100(t);
  if(((x_127 != NULL) && (x_127 != t)))
    _fail(t);
  else
    x_127 = t;
  t = not_null(w_127);
  t = v_100(t);
  if(((y_127 != NULL) && (y_127 != t)))
    _fail(t);
  else
    y_127 = t;
  if(((a_128 != NULL) && (a_128 != t)))
    _fail(t);
  else
    a_128 = t;
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(y_127)), not_null(x_127));
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  t = SSLsetAnnotations(not_null(r_11), not_null(u_127));
  if(((z_127 != NULL) && (z_127 != t)))
    _fail(t);
  else
    z_127 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL,j_128 = NULL;
  if(((h_128 != NULL) && (h_128 != t)))
    _fail(t);
  else
    h_128 = t;
  if(((j_128 != NULL) && (j_128 != t)))
    _fail(t);
  else
    j_128 = t;
  if(((i_128 != NULL) && (i_128 != t)))
    _fail(t);
  else
    i_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_88, not_null(i_128));
  t = set_config_0_0(t);
  t = not_null(h_128);
  if(((g_128 != NULL) && (g_128 != t)))
    _fail(t);
  else
    g_128 = t;
  if(((f_128 != NULL) && (f_128 != t)))
    _fail(t);
  else
    f_128 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_128));
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm k_128 = NULL;
  if(((k_128 != NULL) && (k_128 != t)))
    _fail(t);
  else
    k_128 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t)
{
  ATerm e_128 = NULL;
  static ATerm u_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    ATerm w_89 = t;
    int x_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_89 = t;
        int z_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(z_89);
          }
        else
          {
            t = y_89;
            t = g_145(t);
            t = Cons_2_0(v_11, u_11, t);
          }
        LocalPopChoice(x_89);
      }
    else
      {
        t = w_89;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((e_128 != NULL) && (e_128 != t)))
    _fail(t);
  else
    e_128 = t;
  {
    static ATerm s_11 (ATerm t);
    static ATerm s_11 (ATerm t)
    {
      t = term_a_90;
      t = g_145(t);
      return(t);
    }
    t = try_1_0(s_11, t);
  }
  t = not_null(e_128);
  t = Cons_2_0(t_11, u_11, t);
  return(t);
}
ATerm hashtable_put_0_2 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((m_128 != NULL) && (m_128 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(m_128), not_null(o_59), not_null(p_59));
  if(((o_128 != NULL) && (o_128 != t)))
    _fail(t);
  else
    o_128 = t;
  if(((n_128 != NULL) && (n_128 != t)))
    _fail(t);
  else
    n_128 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(n_128));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm r_59, ATerm t)
{
  ATerm p_128 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((p_128 != NULL) && (p_128 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(p_128), not_null(r_59));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm q_128 = NULL,r_128 = NULL;
  t = SSL_hashtable_create(not_null(w_59), not_null(x_59));
  if(((r_128 != NULL) && (r_128 != t)))
    _fail(t);
  else
    r_128 = t;
  if(((q_128 != NULL) && (q_128 != t)))
    _fail(t);
  else
    q_128 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(q_128));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL;
  if(((v_128 != NULL) && (v_128 != t)))
    _fail(t);
  else
    v_128 = t;
  t = term_b_90;
  if(((s_128 != NULL) && (s_128 != t)))
    _fail(t);
  else
    s_128 = t;
  t = not_null(v_128);
  if(((u_128 != NULL) && (u_128 != t)))
    _fail(t);
  else
    u_128 = t;
  t = term_c_90;
  if(((t_128 != NULL) && (t_128 != t)))
    _fail(t);
  else
    t_128 = t;
  t = not_null(u_128);
  t = new_hashtable_0_2(not_null(s_128), not_null(t_128), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL;
  if(((w_128 != NULL) && (w_128 != t)))
    _fail(t);
  else
    w_128 = t;
  if(((z_128 != NULL) && (z_128 != t)))
    _fail(t);
  else
    z_128 = t;
  t = new_hashtable_0_0(t);
  if(((x_128 != NULL) && (x_128 != t)))
    _fail(t);
  else
    x_128 = t;
  t = not_null(z_128);
  if(((y_128 != NULL) && (y_128 != t)))
    _fail(t);
  else
    y_128 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(w_128), not_null(x_128), t);
  t = not_null(y_128);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL;
  t = SSL_table_hashtable();
  if(((b_129 != NULL) && (b_129 != t)))
    _fail(t);
  else
    b_129 = t;
  if(((a_129 != NULL) && (a_129 != t)))
    _fail(t);
  else
    a_129 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(a_129));
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm d_90 = t;
    int e_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(l_56), t);
        LocalPopChoice(e_90);
      }
    else
      {
        t = d_90;
        {
          ATerm g_129 = NULL,h_129 = NULL;
          if(((g_129 != NULL) && (g_129 != t)))
            _fail(t);
          else
            g_129 = t;
          if(((h_129 != NULL) && (h_129 != t)))
            _fail(t);
          else
            h_129 = t;
          t = not_null(l_56);
          t = table_create_0_0(t);
          t = not_null(h_129);
          t = hashtable_get_0_1(not_null(l_56), t);
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL;
  if(((l_129 != NULL) && (l_129 != t)))
    _fail(t);
  else
    l_129 = t;
  if(match_cons(t, sym__3))
    {
      if(((i_129 != NULL) && (i_129 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_129 = ATgetArgument(t, 0);
      if(((j_129 != NULL) && (j_129 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_129 = ATgetArgument(t, 1);
      if(((k_129 != NULL) && (k_129 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_129 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(i_129), t);
  t = hashtable_put_0_2(not_null(j_129), not_null(k_129), t);
  t = not_null(l_129);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  ATerm n_129 = NULL,o_129 = NULL,p_129 = NULL;
  if(((p_129 != NULL) && (p_129 != t)))
    _fail(t);
  else
    p_129 = t;
  t = term_f_90;
  t = table_put_0_0(t);
  t = not_null(p_129);
  {
    static ATerm w_11 (ATerm t);
    static ATerm w_11 (ATerm t)
    {
      ATerm g_90 = t;
      int h_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_145(t);
          LocalPopChoice(h_90);
        }
      else
        {
          t = g_90;
          {
            ATerm i_90 = t;
            int j_90 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(j_90);
              }
            else
              {
                t = i_90;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_11, t);
  }
  {
    static ATerm x_11 (ATerm t);
    static ATerm x_11 (ATerm t)
    {
      ATerm k_90 = t;
      int l_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm u_129 (ATerm q_129, ATerm t);
          static ATerm u_129 (ATerm q_129, ATerm t)
          {
            ATerm r_129 = NULL;
            t = not_null(q_129);
            if(((r_129 != NULL) && (r_129 != t)))
              _fail(t);
            else
              r_129 = t;
            t = not_null(q_129);
            {
              ATerm m_90 = t;
              int n_90 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_89;
                  t = get_config_0_0(t);
                  LocalPopChoice(n_90);
                }
              else
                {
                  t = m_90;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(r_129);
            t = e_145(t);
            t = term_f_80;
            t = exit_0_0(t);
            return(t);
          }
          ATerm s_129 = NULL;
          if(((s_129 != NULL) && (s_129 != t)))
            _fail(t);
          else
            s_129 = t;
          {
            ATerm o_90 = t;
            int p_90 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_129(not_null(s_129), t);
                LocalPopChoice(p_90);
              }
            else
              {
                t = o_90;
                {
                  ATerm t_129 = NULL;
                  t = not_null(s_129);
                  if(((t_129 != NULL) && (t_129 != t)))
                    _fail(t);
                  else
                    t_129 = t;
                  t = term_h_89;
                  t = get_config_0_0(t);
                  t = not_null(t_129);
                  t = f_145(t);
                  t = term_f_80;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(l_90);
        }
      else
        {
          t = k_90;
          {
            static ATerm y_11 (ATerm t);
            static ATerm y_11 (ATerm t)
            {
              static ATerm z_11 (ATerm t);
              static ATerm z_11 (ATerm t)
              {
                if(((n_129 != NULL) && (n_129 != t)))
                  _fail(t);
                else
                  n_129 = t;
                return(t);
              }
              t = Undefined_1_0(z_11, t);
              return(t);
            }
            t = option_defined_1_0(y_11, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_129)), term_q_90));
          t = printnl_0_0(t);
          t = e_145(t);
          t = term_u_19;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(x_11, t);
  }
  if(((o_129 != NULL) && (o_129 != t)))
    _fail(t);
  else
    o_129 = t;
  t = term_f_88;
  t = table_destroy_0_0(t);
  t = not_null(o_129);
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  t = parse_options_3_0(g_143, h_143, i_143, t);
  t = store_options_0_0(t);
  t = j_143(t);
  {
    ATerm r_90 = t;
    int s_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(s_90);
      }
    else
      {
        t = r_90;
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
static ATerm a_12 (ATerm t)
{
  ATerm w_129 = NULL;
  if(((w_129 != NULL) && (w_129 != t)))
    _fail(t);
  else
    w_129 = t;
  return(t);
}
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t)
{
  t = option_wrap_4_0(a_143, system_usage_0_0, a_12, b_143, t);
  return(t);
}
ATerm xtc_wrap_2_1 (ATerm h_152 (ATerm), ATerm i_152 (ATerm), ATerm d_96, ATerm t)
{
  static ATerm b_12 (ATerm t);
  static ATerm c_12 (ATerm t);
  static ATerm b_12 (ATerm t)
  {
    ATerm t_90 = t;
    int u_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_152(t);
        LocalPopChoice(u_90);
      }
    else
      {
        t = t_90;
        {
          ATerm v_90 = t;
          int w_90 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_contract_options_0_0(t);
              LocalPopChoice(w_90);
            }
          else
            {
              t = v_90;
              t = xtc_dependency_options_0_0(t);
            }
        }
      }
    return(t);
  }
  static ATerm c_12 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_85, not_null(d_96));
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = i_152(t);
    return(t);
  }
  t = option_wrap_2_0(b_12, c_12, t);
  return(t);
}
ATerm xtc_io_wrap_2_1 (ATerm t_152 (ATerm), ATerm u_152 (ATerm), ATerm f_96, ATerm t)
{
  static ATerm d_12 (ATerm t);
  static ATerm e_12 (ATerm t);
  static ATerm d_12 (ATerm t)
  {
    ATerm x_90 = t;
    int y_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_152(t);
        LocalPopChoice(y_90);
      }
    else
      {
        t = x_90;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm e_12 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_85, not_null(f_96));
    t = set_config_0_0(t);
    t = xtc_preload_0_0(t);
    t = xtc_io_1_0(u_152, t);
    return(t);
  }
  t = xtc_wrap_2_1(d_12, e_12, not_null(f_96), t);
  return(t);
}
ATerm xtc_io_wrap_1_1 (ATerm n_152 (ATerm), ATerm e_96, ATerm t)
{
  t = xtc_io_wrap_2_1(_fail, n_152, not_null(e_96), t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = xtc_transform_2_0(g_12, h_12, t);
  t = xtc_transform_1_0(i_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_z_90;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm z_129 = NULL,a_130 = NULL;
  if(((a_130 != NULL) && (a_130 != t)))
    _fail(t);
  else
    a_130 = t;
  t = term_a_91;
  t = xtc_find_file_0_0(t);
  if(((z_129 != NULL) && (z_129 != t)))
    _fail(t);
  else
    z_129 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_c_91, not_null(z_129))), term_b_91);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_d_91;
  return(t);
}
ATerm main_parse_xtd_0_0 (ATerm t)
{
  ATerm x_129 = NULL,y_129 = NULL;
  if(((y_129 != NULL) && (y_129 != t)))
    _fail(t);
  else
    y_129 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_91), term_d_91), term_z_90);
  if(((x_129 != NULL) && (x_129 != t)))
    _fail(t);
  else
    x_129 = t;
  t = not_null(y_129);
  t = xtc_io_wrap_1_1(f_12, not_null(x_129), t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_parse_xtd_0_0(t);
  return(t);
}
