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
static ATerm term_b_90;
static ATerm term_u_89;
static ATerm term_j_89;
static ATerm term_g_89;
static ATerm term_f_89;
static ATerm term_e_89;
static ATerm term_z_88;
static ATerm term_y_88;
static ATerm term_x_88;
static ATerm term_w_88;
static ATerm term_r_88;
static ATerm term_q_88;
static ATerm term_p_88;
static ATerm term_o_88;
static ATerm term_n_88;
static ATerm term_m_88;
static ATerm term_l_88;
static ATerm term_g_88;
static ATerm term_f_88;
static ATerm term_e_88;
static ATerm term_t_87;
static ATerm term_k_87;
static ATerm term_j_87;
static ATerm term_i_87;
static ATerm term_h_87;
static ATerm term_e_87;
static ATerm term_b_87;
static ATerm term_w_86;
static ATerm term_v_86;
static ATerm term_u_86;
static ATerm term_p_86;
static ATerm term_m_86;
static ATerm term_l_86;
static ATerm term_k_86;
static ATerm term_j_86;
static ATerm term_i_86;
static ATerm term_b_86;
static ATerm term_a_86;
static ATerm term_z_85;
static ATerm term_y_85;
static ATerm term_x_85;
static ATerm term_w_85;
static ATerm term_v_85;
static ATerm term_u_85;
static ATerm term_t_85;
static ATerm term_p_85;
static ATerm term_y_84;
static ATerm term_v_84;
static ATerm term_u_84;
static ATerm term_o_83;
static ATerm term_l_83;
static ATerm term_k_83;
static ATerm term_j_83;
static ATerm term_i_83;
static ATerm term_b_83;
static ATerm term_z_81;
static ATerm term_r_81;
static ATerm term_l_81;
static ATerm term_v_80;
static ATerm term_x_79;
static ATerm term_r_79;
static ATerm term_m_79;
static ATerm term_j_78;
static ATerm term_u_74;
static ATerm term_z_73;
static ATerm term_y_73;
static ATerm term_x_73;
static ATerm term_w_73;
static ATerm term_v_73;
static ATerm term_g_72;
static ATerm term_t_71;
static ATerm term_s_71;
static ATerm term_r_71;
static ATerm term_q_71;
static ATerm term_p_71;
static ATerm term_a_71;
static ATerm term_z_70;
static ATerm term_y_70;
static ATerm term_x_70;
static ATerm term_w_70;
static ATerm term_v_70;
static ATerm term_u_70;
static ATerm term_t_70;
static ATerm term_s_70;
static ATerm term_k_70;
static ATerm term_e_69;
static ATerm term_i_66;
static ATerm term_e_66;
static ATerm term_d_66;
static ATerm term_c_66;
static ATerm term_b_66;
static ATerm term_a_66;
static ATerm term_r_61;
static ATerm term_q_61;
static ATerm term_p_61;
static ATerm term_m_61;
static ATerm term_l_61;
static ATerm term_k_61;
static ATerm term_f_61;
static ATerm term_e_61;
static ATerm term_d_61;
static ATerm term_i_60;
static ATerm term_h_60;
static ATerm term_g_60;
static ATerm term_v_59;
static ATerm term_t_59;
static ATerm term_r_59;
static ATerm term_d_58;
static ATerm term_c_58;
static ATerm term_b_58;
static ATerm term_a_58;
static ATerm term_x_57;
static ATerm term_w_56;
static ATerm term_o_56;
static ATerm term_b_56;
static ATerm term_a_56;
static ATerm term_u_55;
static ATerm term_c_55;
static ATerm term_b_55;
static ATerm term_k_53;
static ATerm term_i_52;
static ATerm term_h_52;
static ATerm term_s_49;
static ATerm term_m_49;
static ATerm term_l_49;
static ATerm term_d_49;
static ATerm term_y_47;
static ATerm term_w_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_j_46;
static ATerm term_i_46;
static ATerm term_h_46;
static ATerm term_g_46;
static ATerm term_f_46;
static ATerm term_l_43;
static ATerm term_h_43;
static ATerm term_r_42;
static ATerm term_m_42;
static ATerm term_q_39;
static ATerm term_y_38;
static ATerm term_g_35;
static ATerm term_f_35;
static ATerm term_e_35;
static ATerm term_d_35;
static ATerm term_b_35;
static ATerm term_a_35;
static ATerm term_z_34;
static ATerm term_y_34;
static ATerm term_x_34;
static ATerm term_v_34;
static ATerm term_u_34;
static ATerm term_t_34;
static ATerm term_s_34;
static ATerm term_r_34;
static ATerm term_q_34;
static ATerm term_l_34;
static ATerm term_k_34;
static ATerm term_j_34;
static ATerm term_i_34;
static ATerm term_h_34;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_x_33;
static ATerm term_w_33;
static ATerm term_v_33;
static ATerm term_j_32;
static ATerm term_g_29;
static ATerm term_x_28;
static ATerm term_u_27;
static ATerm term_s_27;
static ATerm term_e_27;
static ATerm term_g_22;
static ATerm term_f_22;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_c_22;
static ATerm term_b_22;
static ATerm term_y_19;
static ATerm term_u_19;
static ATerm term_p_19;
static ATerm term_l_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_x_18;
static ATerm term_v_18;
static ATerm term_u_18;
static ATerm term_t_18;
static ATerm term_r_18;
static ATerm term_l_18;
static ATerm term_k_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_e_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_b_18;
static ATerm term_a_18;
static ATerm term_z_17;
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
static ATerm term_v_13;
static ATerm term_u_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_r_13;
static ATerm term_q_13;
static ATerm term_n_13;
static ATerm term_m_13;
static ATerm term_l_13;
static ATerm term_k_13;
static ATerm term_h_13;
static ATerm term_g_13;
static ATerm term_c_13;
static ATerm term_x_12;
static ATerm term_u_12;
static ATerm term_r_12;
static ATerm term_q_12;
static ATerm term_p_12;
static ATerm term_o_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-transform", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_u_12, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_String_1, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Some_1, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_File_1, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Input_1, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Some_1, term_f_22);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_e_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Type_1, term_w_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Some_1, term_x_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Default_1, term_b_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Some_1, term_h_34);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_j_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_l_34);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_r_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Some_1, term_u_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_String_1, term_x_34);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Some_1, term_y_34);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_File_1, term_z_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Output_1, term_a_35);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Some_1, term_b_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Streams_3, term_g_22, term_d_35, term_x_18);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Exec_1, term_e_35);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_f_35);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym__2, term_g_46, term_h_46);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_n_13);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(sym_String_1, term_b_58);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_58, term_c_58);
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym_String_1, term_r_59);
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_58, term_t_59);
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym_String_1, term_g_60);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_58, term_h_60);
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym_String_1, term_d_61);
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_58, term_e_61);
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(sym_String_1, term_k_61);
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_58, term_l_61);
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(sym_String_1, term_p_61);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_58, term_q_61);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_a_66);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym_Template_2, term_c_66, term_x_18);
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_b_66, term_d_66);
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_z_81));
  term_z_81 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_k_83);
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_c_13);
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_g_72);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_72);
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(sym__2, term_u_18, term_n_13);
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(sym__2, term_j_86, term_n_13);
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_n_13);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_87));
  term_h_87 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_87));
  term_i_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_87));
  term_j_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(sym__2, term_i_87, term_j_87);
  ATprotect(&(term_t_87));
  term_t_87 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(sym__2, term_l_88, term_n_13);
  ATprotect(&(term_n_88));
  term_n_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(sym__2, term_o_88, term_n_13);
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_88));
  term_w_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(sym__2, term_w_88, term_n_13);
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_89));
  term_j_89 = (ATerm) ATmakeAppl(sym__3, term_i_87, term_j_87, (ATerm) ATempty);
  ATprotect(&(term_u_89));
  term_u_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(ATmakeSymbol("test2", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm d_23 (ATerm p_22, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_0 (ATerm t);
ATerm xtc_pass_options_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm i_153 (ATerm), ATerm j_153 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm c_153 (ATerm), ATerm d_153 (ATerm), ATerm t);
ATerm close_0_0 (ATerm t);
ATerm assert_1_0 (ATerm x_111 (ATerm), ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm call_1_0 (ATerm s_141 (ATerm), ATerm t);
static ATerm l_0 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm xtc_fetch_loc_0_0 (ATerm t);
ATerm xtc_find_loc_1_0 (ATerm q_153 (ATerm), ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm execvp_0_0 (ATerm t);
ATerm dup2_0_0 (ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm q_123 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm w_141 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm exec_http_0_1 (ATerm y_87, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm m_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm l_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm t_30 (ATerm z_29, ATerm a_30, ATerm t);
static ATerm u_30 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm x_31 (ATerm b_31, ATerm c_31, ATerm t);
static ATerm y_31 (ATerm m_31, ATerm n_31, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm o_34 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t);
static ATerm p_34 (ATerm l_33, ATerm m_33, ATerm n_33, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm w_36 (ATerm c_35, ATerm j_35, ATerm k_35, ATerm n_35, ATerm o_35, ATerm p_35, ATerm q_35, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm t_91, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm i_151 (ATerm), ATerm j_151 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
ATerm diff_1_0 (ATerm k_127 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm n_125 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm m_151 (ATerm), ATerm t);
static ATerm p_49 (ATerm p_43, ATerm q_43, ATerm r_43, ATerm s_43, ATerm t_43, ATerm t);
static ATerm u_49 (ATerm f_44, ATerm g_44, ATerm h_44, ATerm i_44, ATerm j_44, ATerm t);
static ATerm v_49 (ATerm s_44, ATerm t_44, ATerm u_44, ATerm v_44, ATerm w_44, ATerm t);
static ATerm w_49 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm l_45, ATerm m_45, ATerm t);
static ATerm x_49 (ATerm v_45, ATerm w_45, ATerm x_45, ATerm y_45, ATerm z_45, ATerm t);
static ATerm y_49 (ATerm s_46, ATerm t_46, ATerm u_46, ATerm v_46, ATerm w_46, ATerm t);
static ATerm z_49 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm j_47, ATerm k_47, ATerm t);
static ATerm a_50 (ATerm d_48, ATerm f_48, ATerm g_48, ATerm h_48, ATerm i_48, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm k_3, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm j_3, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm h_3, ATerm i_3, ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm a_92, ATerm b_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm l_1 (ATerm), ATerm o_1 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm u_130 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm o_151 (ATerm), ATerm y_91, ATerm z_91, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm n_151 (ATerm), ATerm w_91, ATerm x_91, ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm d_1, ATerm f_1, ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm q_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm w_116 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm b_121 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm at_end_1_0 (ATerm v_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm u_64 (ATerm s_61, ATerm t_61, ATerm u_61, ATerm t);
static ATerm v_64 (ATerm h_62, ATerm i_62, ATerm t);
static ATerm w_64 (ATerm u_62, ATerm t);
static ATerm x_64 (ATerm z_62, ATerm t);
static ATerm y_64 (ATerm e_63, ATerm f_63, ATerm g_63, ATerm t);
static ATerm z_64 (ATerm n_63, ATerm o_63, ATerm p_63, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm r_130 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm f_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm d_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm f_87, ATerm g_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm g_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm p_151 (ATerm), ATerm t);
ATerm warn_0_1 (ATerm x_78, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm t_151 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm c_1 (ATerm), ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm q_151 (ATerm), ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm a_1 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm q_85, ATerm t);
ATerm Some_1_0 (ATerm o_107 (ATerm), ATerm t);
ATerm option_1_0 (ATerm p_132 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_0 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm n_109 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm l_153 (ATerm), ATerm m_153 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm f_153 (ATerm), ATerm g_153 (ATerm), ATerm t);
ATerm err_0_1 (ATerm w_78, ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm collect_all_2_0 (ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm d_129 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm x_0, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm h_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm c_151 (ATerm), ATerm d_151 (ATerm), ATerm v_81, ATerm t);
ATerm dbg_0_1 (ATerm z_78, ATerm t);
ATerm xtc_query_one_2_1 (ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm u_81, ATerm t);
ATerm xtc_query_all_2_0 (ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm xtc_search_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm HdMember_p__2_0 (ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
ATerm union_1_0 (ATerm p_127 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm c_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm b_80, ATerm t);
static ATerm r_6 (ATerm t);
ATerm xtc_register_0_1 (ATerm u_0, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm h_79, ATerm t);
ATerm Repository_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm basename_1_0 (ATerm i_134 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
ATerm restore_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t);
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
ATerm while_not_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm d_124 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_0_2 (ATerm e_79, ATerm f_79, ATerm t);
ATerm log_if_verbose_1_1 (ATerm p_150 (ATerm), ATerm a_79, ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm if_log_severity_1_1 (ATerm q_150 (ATerm), ATerm g_79, ATerm t);
ATerm log_0_3 (ATerm b_79, ATerm c_79, ATerm d_79, ATerm t);
ATerm notice_0_1 (ATerm y_78, ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
static ATerm a_104 (ATerm r_103, ATerm s_103, ATerm t);
static ATerm b_104 (ATerm v_103, ATerm t);
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
ATerm WriteToFile_1_0 (ATerm y_122 (ATerm), ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
ATerm repeat_1_0 (ATerm y_115 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm at_last_1_0 (ATerm g_124 (ATerm), ATerm t);
ATerm init_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm a_134 (ATerm), ATerm t);
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
ATerm xtc_save_file_0_1 (ATerm s_79, ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm xtc_load_0_1 (ATerm w_79, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm xtc_init_0_2 (ATerm z_79, ATerm a_80, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm getenv_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_init_0_0 (ATerm t);
ATerm XtcQuery_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t);
ATerm XtcQuery_1_0 (ATerm g_110 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm xtc_desugar_query_0_0 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_131 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm _2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm d_43, ATerm t);
ATerm is_url_http_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm stderr_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
ATerm get_last_error_0_0 (ATerm t);
ATerm rename_file_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm at_suffix_1_0 (ATerm z_123 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm split_fetch_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm e_133 (ATerm), ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t);
ATerm string_tokenize_0_1 (ATerm e_46, ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
static ATerm d_117 (ATerm v_116, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
static ATerm w_117 (ATerm r_117, ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_pop_rm_0_0 (ATerm t);
ATerm end_scope_1_0 (ATerm u_111 (ATerm), ATerm t);
ATerm remove_file_0_0 (ATerm t);
ATerm restore_always_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_111 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm u_151 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm w_152 (ATerm), ATerm t);
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
ATerm long_description_1_0 (ATerm l_145 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm k_145 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm default_system_usage_2_0 (ATerm m_145 (ATerm), ATerm n_145 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm a_109 (ATerm), ATerm t);
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
ATerm foldr_2_0 (ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm t);
ATerm crush_2_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_140 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm hashtable_remove_0_1 (ATerm u_59, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm Undefined_1_0 (ATerm b_109 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm fetch_1_0 (ATerm o_123 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm d_144 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_114 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm register_usage_1_0 (ATerm j_145 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm parse_options_p__1_0 (ATerm h_145 (ATerm), ATerm t);
ATerm hashtable_put_0_2 (ATerm p_59, ATerm q_59, ATerm t);
ATerm hashtable_get_0_1 (ATerm s_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_59, ATerm y_59, ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm m_56, ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm parse_options_3_0 (ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm g_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
ATerm option_wrap_2_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm t);
ATerm xtc_wrap_2_0 (ATerm g_152 (ATerm), ATerm h_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm p_152 (ATerm), ATerm q_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm n_152 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm main_test1_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm d_23 (ATerm p_22, ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t = not_null(p_22);
  if(((t_22 != NULL) && (t_22 != t)))
    _fail(t);
  else
    t_22 = t;
  t = not_null(p_22);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = not_null(t_22);
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = SSL_explode_term(not_null(v_22));
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((q_22 != NULL) && (q_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_22);
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = not_null(q_22);
  t = concat_0_0(t);
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
            t = not_null(w_22);
            if(((z_22 != NULL) && (z_22 != t)))
              _fail(t);
            else
              z_22 = t;
            t = not_null(x_22);
            if(((a_23 != NULL) && (a_23 != t)))
              _fail(t);
            else
              a_23 = t;
            t = not_null(y_22);
            if(((c_23 != NULL) && (c_23 != t)))
              _fail(t);
            else
              c_23 = t;
            t = not_null(z_22);
            {
              static ATerm a_0 (ATerm t);
              static ATerm a_0 (ATerm t)
              {
                t = not_null(a_23);
                return(t);
              }
              t = at_end_1_0(a_0, t);
            }
            if(((b_23 != NULL) && (b_23 != t)))
              _fail(t);
            else
              b_23 = t;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = d_23(not_null(y_22), t);
          }
      }
    }
  else
    {
      t = d_23(not_null(y_22), t);
    }
  return(t);
}
static ATerm d_0 (ATerm t)
{
  ATerm e_23 = NULL;
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  t = get_config_0_0(t);
  t = not_null(e_23);
  return(t);
}
ATerm xtc_pass_options_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_12), term_p_12), term_o_12);
  t = filter_1_0(d_0, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  if(((g_23 != NULL) && (g_23 != t)))
    _fail(t);
  else
    g_23 = t;
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  t = term_r_12;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = term_u_12;
      }
  }
  if(((h_23 != NULL) && (h_23 != t)))
    _fail(t);
  else
    h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), term_u_12);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((f_23 != NULL) && (f_23 != t)))
    _fail(t);
  else
    f_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_23)), term_r_12);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm i_153 (ATerm), ATerm j_153 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(i_153, j_153, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  ATerm m_23 = NULL;
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm c_153 (ATerm), ATerm d_153 (ATerm), ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_23 = NULL,l_23 = NULL;
      if(((l_23 != NULL) && (l_23 != t)))
        _fail(t);
      else
        l_23 = t;
      t = term_x_12;
      if(((k_23 != NULL) && (k_23 != t)))
        _fail(t);
      else
        k_23 = t;
      t = not_null(l_23);
      t = dbg_0_1(not_null(k_23), t);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(g_0, t);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = stdin_0_0(t);
          }
      }
      LocalPopChoice(w_12);
      t = xtc_transform_file_2_0(c_153, d_153, t);
    }
  else
    {
      t = v_12;
      t = xtc_transform_term_2_0(c_153, d_153, t);
    }
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm n_23 = NULL;
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  t = SSL_close(not_null(n_23));
  return(t);
}
ATerm assert_1_0 (ATerm x_111 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_23 != NULL) && (q_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_23 = ATgetArgument(t, 0);
      if(((o_23 != NULL) && (o_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = x_111(t);
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_23), not_null(q_23), not_null(o_23));
  t = table_push_0_0(t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_23), term_c_13);
        t = table_get_0_0(t);
        {
          ATerm d_13 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_13;
            }
        }
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((r_23 != NULL) && (r_23 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        r_23 = ATgetFirst((ATermList) t);
      if(((s_23 != NULL) && (s_23 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        s_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_23), term_c_13, (ATerm) ATinsert(CheckATermList(not_null(s_23)), (ATerm) ATinsert(CheckATermList(not_null(r_23)), not_null(q_23))));
  t = table_put_0_0(t);
  t = not_null(t_23);
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm a_24 (ATerm w_23, ATerm t);
      static ATerm a_24 (ATerm w_23, ATerm t)
      {
        ATerm x_23 = NULL,y_23 = NULL;
        t = not_null(w_23);
        if(((y_23 != NULL) && (y_23 != t)))
          _fail(t);
        else
          y_23 = t;
        t = not_null(w_23);
        if(((x_23 != NULL) && (x_23 != t)))
          _fail(t);
        else
          x_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), term_g_13);
        t = conc_strings_0_0(t);
        if(((v_23 != NULL) && (v_23 != t)))
          _fail(t);
        else
          v_23 = t;
        t = SSL_mkstemp(not_null(v_23));
        return(t);
      }
      ATerm z_23 = NULL;
      if(((z_23 != NULL) && (z_23 != t)))
        _fail(t);
      else
        z_23 = t;
      t = a_24(not_null(z_23), t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = term_h_13;
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
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_13;
      t = getenv_0_0(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = temp_dir_0_0(t);
  if(((b_24 != NULL) && (b_24 != t)))
    _fail(t);
  else
    b_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), term_l_13);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((e_24 != NULL) && (e_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_24 = ATgetArgument(t, 0);
      if(((d_24 != NULL) && (d_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_24 != NULL) && (f_24 != t)))
    _fail(t);
  else
    f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_24), term_n_13);
  t = assert_1_0(i_0, t);
  t = not_null(d_24);
  t = close_0_0(t);
  t = not_null(e_24);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  t = xtc_new_file_0_0(t);
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), not_null(h_24));
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_24));
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm j_24 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(j_24));
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL,o_24 = NULL;
        t = not_null(m_24);
        if(((o_24 != NULL) && (o_24 != t)))
          _fail(t);
        else
          o_24 = t;
        t = not_null(m_24);
        if(((n_24 != NULL) && (n_24 != t)))
          _fail(t);
        else
          n_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_q_13);
        t = open_stream_0_0(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm p_24 = NULL,q_24 = NULL;
          t = not_null(m_24);
          if(((q_24 != NULL) && (q_24 != t)))
            _fail(t);
          else
            q_24 = t;
          t = not_null(m_24);
          if(((p_24 != NULL) && (p_24 != t)))
            _fail(t);
          else
            p_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_13, not_null(p_24));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  t = read_from_stream_0_0(t);
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = not_null(l_24);
  t = fclose_0_0(t);
  t = not_null(k_24);
  return(t);
}
ATerm call_1_0 (ATerm s_141 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  static ATerm j_0 (ATerm t);
  static ATerm j_0 (ATerm t)
  {
    t = s_141(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_24), not_null(s_24));
    t = execvp_0_0(t);
    t = term_u_12;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((r_24 != NULL) && (r_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_24 = ATgetArgument(t, 0);
      if(((s_24 != NULL) && (s_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(j_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm u_24 = NULL;
  if(((u_24 != NULL) && (u_24 != t)))
    _fail(t);
  else
    u_24 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(l_0, t);
  return(t);
}
ATerm xtc_fetch_loc_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_find_loc_1_0 (ATerm q_153 (ATerm), ATerm t)
{
  t = xtc_find_reg_1_0(q_153, t);
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
  ATerm v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_24 != NULL) && (v_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_24 = ATgetArgument(t, 0);
      if(((w_24 != NULL) && (w_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(v_24), not_null(w_24));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_24 != NULL) && (x_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_24 = ATgetArgument(t, 0);
      if(((y_24 != NULL) && (y_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(x_24), not_null(y_24));
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
  ATerm z_24 = NULL;
  if(((z_24 != NULL) && (z_24 != t)))
    _fail(t);
  else
    z_24 = t;
  t = SSL_int_to_string(not_null(z_24));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(((b_25 != NULL) && (b_25 != t)))
    _fail(t);
  else
    b_25 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_25 = ATgetArgument(t, 0);
      {
        ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
        t = not_null(c_25);
        if(((f_25 != NULL) && (f_25 != t)))
          _fail(t);
        else
          f_25 = t;
        t = not_null(b_25);
        if(((h_25 != NULL) && (h_25 != t)))
          _fail(t);
        else
          h_25 = t;
        if(((j_25 != NULL) && (j_25 != t)))
          _fail(t);
        else
          j_25 = t;
        t = not_null(f_25);
        t = int_to_string_0_0(t);
        if(((i_25 != NULL) && (i_25 != t)))
          _fail(t);
        else
          i_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_13), not_null(i_25)), term_s_13);
        t = concat_strings_0_0(t);
        if(((g_25 != NULL) && (g_25 != t)))
          _fail(t);
        else
          g_25 = t;
      }
    }
  else
    {
      ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((c_25 != NULL) && (c_25 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_25 = ATgetArgument(t, 0);
          if(((d_25 != NULL) && (d_25 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_25 = ATgetArgument(t, 1);
          if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            e_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(c_25);
      if(((k_25 != NULL) && (k_25 != t)))
        _fail(t);
      else
        k_25 = t;
      t = not_null(d_25);
      if(((l_25 != NULL) && (l_25 != t)))
        _fail(t);
      else
        l_25 = t;
      t = not_null(e_25);
      if(((m_25 != NULL) && (m_25 != t)))
        _fail(t);
      else
        m_25 = t;
      t = not_null(b_25);
      if(((o_25 != NULL) && (o_25 != t)))
        _fail(t);
      else
        o_25 = t;
      if(((q_25 != NULL) && (q_25 != t)))
        _fail(t);
      else
        q_25 = t;
      t = not_null(l_25);
      t = int_to_string_0_0(t);
      if(((p_25 != NULL) && (p_25 != t)))
        _fail(t);
      else
        p_25 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_25)), term_v_13), not_null(p_25)), term_u_13), not_null(k_25));
      t = concat_strings_0_0(t);
      if(((n_25 != NULL) && (n_25 != t)))
        _fail(t);
      else
        n_25 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm r_25 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    t = q_123(t);
    if(((r_25 != NULL) && (r_25 != t)))
      _fail(t);
    else
      r_25 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(r_25);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_25 = NULL;
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t);
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_13 = ATgetArgument(t, 0);
              if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_25 = ATgetArgument(t, 1);
              {
                ATerm z_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), term_c_18), term_y_17), term_u_17), term_q_17), term_m_17), term_i_17), term_e_17), term_a_17), term_w_16), term_s_16), term_o_16), term_k_16), term_g_16), term_c_16), term_y_15), term_u_15), term_q_15), term_m_15), term_i_15), term_e_15), term_a_15), term_w_14), term_s_14), term_o_14), term_k_14), term_g_14), term_c_14);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(s_25));
      }
  }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if(((w_25 != NULL) && (w_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_25 = ATgetArgument(t, 1);
      {
        ATerm i_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(w_25);
  {
    ATerm j_18 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_18;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_25)), term_l_18));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_25 = NULL;
  if(((t_25 != NULL) && (t_25 != t)))
    _fail(t);
  else
    t_25 = t;
  t = try_1_0(s_0, t);
  t = not_null(t_25);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm x_25 = NULL;
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  t = SSL_waitpid(not_null(x_25));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = fork_0_0(t);
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        if(((b_26 != NULL) && (b_26 != t)))
          _fail(t);
        else
          b_26 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(a_26);
        t = u_141(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(a_26));
        t = v_141(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm c_26 = NULL;
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    ATerm d_26 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((d_26 != NULL) && (d_26 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_26 = ATgetArgument(t, 0);
        if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(d_26);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm o_18 = ATgetArgument(t, 0);
        if(((ATgetType(o_18) != AT_INT) || (ATgetInt((ATermInt) o_18) != 0)))
          _fail(t);
        {
          ATerm p_18 = ATgetArgument(t, 1);
        }
        {
          ATerm q_18 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(c_26);
    return(t);
  }
  t = fork_2_0(w_141, v_0, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(((o_26 != NULL) && (o_26 != t)))
    _fail(t);
  else
    o_26 = t;
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  t = not_null(o_26);
  if(((n_26 != NULL) && (n_26 != t)))
    _fail(t);
  else
    n_26 = t;
  t = STDIN__FILENO_0_0(t);
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), not_null(m_26));
  t = dup2_0_0(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = not_null(s_26);
  if(((r_26 != NULL) && (r_26 != t)))
    _fail(t);
  else
    r_26 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((q_26 != NULL) && (q_26 != t)))
    _fail(t);
  else
    q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(q_26));
  t = dup2_0_0(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  t = not_null(w_26);
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  t = STDERR__FILENO_0_0(t);
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), not_null(u_26));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  t = term_r_18;
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  t = not_null(k_26);
  t = dbg_0_1(not_null(j_26), t);
  if(match_cons(t, sym__3))
    {
      if(((h_26 != NULL) && (h_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_26 = ATgetArgument(t, 0);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(match_cons(s_18, sym__3))
          {
            if(((e_26 != NULL) && (e_26 != ATgetArgument(s_18, 0))))
              _fail(ATgetArgument(s_18, 0));
            else
              e_26 = ATgetArgument(s_18, 0);
            if(((f_26 != NULL) && (f_26 != ATgetArgument(s_18, 1))))
              _fail(ATgetArgument(s_18, 1));
            else
              f_26 = ATgetArgument(s_18, 1);
            if(((g_26 != NULL) && (g_26 != ATgetArgument(s_18, 2))))
              _fail(ATgetArgument(s_18, 2));
            else
              g_26 = ATgetArgument(s_18, 2);
          }
        else
          _fail(t);
      }
      if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm y_0 (ATerm t);
    static ATerm y_0 (ATerm t)
    {
      t = not_null(e_26);
      t = option_1_0(b_1, t);
      t = not_null(f_26);
      t = option_1_0(e_1, t);
      t = not_null(g_26);
      t = option_1_0(g_1, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_26), not_null(i_26));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(y_0, t);
  }
  t = term_n_13;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm exec_http_0_1 (ATerm y_87, ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((c_27 != NULL) && (c_27 != t)))
    _fail(t);
  else
    c_27 = t;
  if(((b_27 != NULL) && (b_27 != t)))
    _fail(t);
  else
    b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_v_18), term_u_18), not_null(b_27));
  t = conc_0_0(t);
  if(((a_27 != NULL) && (a_27 != t)))
    _fail(t);
  else
    a_27 = t;
  t = not_null(y_87);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_26 = ATgetArgument(t, 0);
      if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_26 = ATgetArgument(t, 1);
      if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_26 = ATgetArgument(t, 2);
      {
        ATerm w_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_x_18, not_null(y_26), not_null(z_26), not_null(a_27));
  t = xtc_command_1_0(h_1, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(((f_27 != NULL) && (f_27 != t)))
    _fail(t);
  else
    f_27 = t;
  if(match_cons(t, sym__3))
    {
      if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_27 = ATgetArgument(t, 0);
      if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_27 = ATgetArgument(t, 1);
      if(((j_27 != NULL) && (j_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(g_27);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm k_27 = NULL,l_27 = NULL;
      t = not_null(i_27);
      if(((l_27 != NULL) && (l_27 != t)))
        _fail(t);
      else
        l_27 = t;
      t = not_null(j_27);
      if(((k_27 != NULL) && (k_27 != t)))
        _fail(t);
      else
        k_27 = t;
      t = exec_http_0_1(not_null(l_27), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          h_27 = ATgetArgument(t, 0);
          {
            ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
            t = not_null(h_27);
            if(((m_27 != NULL) && (m_27 != t)))
              _fail(t);
            else
              m_27 = t;
            t = not_null(i_27);
            if(((o_27 != NULL) && (o_27 != t)))
              _fail(t);
            else
              o_27 = t;
            t = not_null(j_27);
            if(((n_27 != NULL) && (n_27 != t)))
              _fail(t);
            else
              n_27 = t;
            t = exec_http_0_1(not_null(o_27), t);
          }
        }
      else
        {
          ATerm p_27 = NULL,q_27 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((h_27 != NULL) && (h_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(h_27);
          if(((p_27 != NULL) && (p_27 != t)))
            _fail(t);
          else
            p_27 = t;
          t = not_null(j_27);
          if(((q_27 != NULL) && (q_27 != t)))
            _fail(t);
          else
            q_27 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  t = SSL_open(not_null(r_27));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm m_3, ATerm t)
{
  static ATerm j_28 (ATerm w_27, ATerm x_27, ATerm t);
  static ATerm k_28 (ATerm c_28, ATerm t);
  static ATerm j_28 (ATerm w_27, ATerm x_27, ATerm t)
  {
    ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
    t = not_null(w_27);
    if(((y_27 != NULL) && (y_27 != t)))
      _fail(t);
    else
      y_27 = t;
    t = not_null(x_27);
    if(((a_28 != NULL) && (a_28 != t)))
      _fail(t);
    else
      a_28 = t;
    t = not_null(m_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm y_18 = ATgetArgument(t, 0);
        if(match_cons(y_18, sym_FILE_1))
          {
            if(((b_28 != NULL) && (b_28 != ATgetArgument(y_18, 0))))
              _fail(ATgetArgument(y_18, 0));
            else
              b_28 = ATgetArgument(y_18, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(b_28);
    t = open_0_0(t);
    if(((z_27 != NULL) && (z_27 != t)))
      _fail(t);
    else
      z_27 = t;
    return(t);
  }
  static ATerm k_28 (ATerm c_28, ATerm t)
  {
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
    t = not_null(c_28);
    if(((e_28 != NULL) && (e_28 != t)))
      _fail(t);
    else
      e_28 = t;
    t = not_null(m_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm z_18 = ATgetArgument(t, 0);
        if(match_cons(z_18, sym_FILE_1))
          {
            if(((f_28 != NULL) && (f_28 != ATgetArgument(z_18, 0))))
              _fail(ATgetArgument(z_18, 0));
            else
              f_28 = ATgetArgument(z_18, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(f_28);
    t = open_0_0(t);
    if(((d_28 != NULL) && (d_28 != t)))
      _fail(t);
    else
      d_28 = t;
    return(t);
  }
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(i_28);
  if(match_cons(t, sym_Some_1))
    {
      g_28 = ATgetArgument(t, 0);
      t = j_28(not_null(g_28), not_null(h_28), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = k_28(not_null(h_28), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm l_3, ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  if(((m_28 != NULL) && (m_28 != t)))
    _fail(t);
  else
    m_28 = t;
  if(match_cons(t, sym_Error_1))
    {
      n_28 = ATgetArgument(t, 0);
      {
        ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
        t = not_null(n_28);
        if(((o_28 != NULL) && (o_28 != t)))
          _fail(t);
        else
          o_28 = t;
        t = not_null(m_28);
        if(((q_28 != NULL) && (q_28 != t)))
          _fail(t);
        else
          q_28 = t;
        t = not_null(o_28);
        t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
        if(((p_28 != NULL) && (p_28 != t)))
          _fail(t);
        else
          p_28 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          n_28 = ATgetArgument(t, 0);
          {
            ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
            t = not_null(n_28);
            if(((r_28 != NULL) && (r_28 != t)))
              _fail(t);
            else
              r_28 = t;
            t = not_null(m_28);
            if(((t_28 != NULL) && (t_28 != t)))
              _fail(t);
            else
              t_28 = t;
            t = not_null(r_28);
            t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
            if(((s_28 != NULL) && (s_28 != t)))
              _fail(t);
            else
              s_28 = t;
          }
        }
      else
        {
          ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((n_28 != NULL) && (n_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(n_28);
          if(((u_28 != NULL) && (u_28 != t)))
            _fail(t);
          else
            u_28 = t;
          t = not_null(m_28);
          if(((w_28 != NULL) && (w_28 != t)))
            _fail(t);
          else
            w_28 = t;
          t = not_null(u_28);
          t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
          if(((v_28 != NULL) && (v_28 != t)))
            _fail(t);
          else
            v_28 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm y_28 = NULL,z_28 = NULL;
        if(((y_28 != NULL) && (y_28 != t)))
          _fail(t);
        else
          y_28 = t;
        if(match_cons(t, sym_URL_1))
          {
            z_28 = ATgetArgument(t, 0);
            {
              ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
              t = not_null(z_28);
              if(((a_29 != NULL) && (a_29 != t)))
                _fail(t);
              else
                a_29 = t;
              t = not_null(y_28);
              if(((c_29 != NULL) && (c_29 != t)))
                _fail(t);
              else
                c_29 = t;
              t = not_null(a_29);
              t = xtc_arg_to_string_0_0(t);
              if(((b_29 != NULL) && (b_29 != t)))
                _fail(t);
              else
                b_29 = t;
            }
          }
        else
          {
            ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((z_28 != NULL) && (z_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(z_28);
            if(((d_29 != NULL) && (d_29 != t)))
              _fail(t);
            else
              d_29 = t;
            t = not_null(y_28);
            if(((f_29 != NULL) && (f_29 != t)))
              _fail(t);
            else
              f_29 = t;
            t = not_null(d_29);
            t = xtc_arg_to_string_0_0(t);
            if(((e_29 != NULL) && (e_29 != t)))
              _fail(t);
            else
              e_29 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      j_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
      {
        ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
        t = not_null(j_29);
        if(((k_29 != NULL) && (k_29 != t)))
          _fail(t);
        else
          k_29 = t;
        t = not_null(h_29);
        if(((l_29 != NULL) && (l_29 != t)))
          _fail(t);
        else
          l_29 = t;
        t = not_null(i_29);
        if(((p_29 != NULL) && (p_29 != t)))
          _fail(t);
        else
          p_29 = t;
        t = not_null(k_29);
        t = xtc_argterm_to_exec_0_0(t);
        if(((m_29 != NULL) && (m_29 != t)))
          _fail(t);
        else
          m_29 = t;
        t = not_null(p_29);
        if(((o_29 != NULL) && (o_29 != t)))
          _fail(t);
        else
          o_29 = t;
        t = not_null(l_29);
        t = xtc_argterm_to_exec_0_0(t);
        if(((n_29 != NULL) && (n_29 != t)))
          _fail(t);
        else
          n_29 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_29)), not_null(m_29));
      }
    }
  else
    {
      ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((j_29 != NULL) && (j_29 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(j_29);
      if(((q_29 != NULL) && (q_29 != t)))
        _fail(t);
      else
        q_29 = t;
      t = not_null(i_29);
      if(((s_29 != NULL) && (s_29 != t)))
        _fail(t);
      else
        s_29 = t;
      t = not_null(q_29);
      t = xtc_argterm_to_exec_0_0(t);
      if(((r_29 != NULL) && (r_29 != t)))
        _fail(t);
      else
        r_29 = t;
      t = (ATerm) ATinsert(ATempty, not_null(r_29));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm t_30 (ATerm z_29, ATerm a_30, ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  t = not_null(z_29);
  if(((b_30 != NULL) && (b_30 != t)))
    _fail(t);
  else
    b_30 = t;
  t = not_null(a_30);
  if(((f_30 != NULL) && (f_30 != t)))
    _fail(t);
  else
    f_30 = t;
  t = not_null(b_30);
  t = xtc_argterm_to_http_0_0(t);
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_30 = ATgetArgument(t, 0);
      {
        ATerm i_30 = NULL;
        t = not_null(h_30);
        if(((i_30 != NULL) && (i_30 != t)))
          _fail(t);
        else
          i_30 = t;
      }
    }
  else
    {
      ATerm j_30 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((h_30 != NULL) && (h_30 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(h_30);
      if(((j_30 != NULL) && (j_30 != t)))
        _fail(t);
      else
        j_30 = t;
    }
  if(((c_30 != NULL) && (c_30 != t)))
    _fail(t);
  else
    c_30 = t;
  t = not_null(f_30);
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_30)), term_c_19);
  t = concat_strings_0_0(t);
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(d_30)));
  return(t);
}
static ATerm u_30 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  t = not_null(k_30);
  if(((m_30 != NULL) && (m_30 != t)))
    _fail(t);
  else
    m_30 = t;
  t = not_null(l_30);
  if(((o_30 != NULL) && (o_30 != t)))
    _fail(t);
  else
    o_30 = t;
  t = not_null(m_30);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm e_19 = t;
    if((PushChoice() == 0))
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(i_1, t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = URL_1_0(j_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_19;
      }
  }
  if(((n_30 != NULL) && (n_30 != t)))
    _fail(t);
  else
    n_30 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(n_30)));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm p_30 = NULL;
  if(((p_30 != NULL) && (p_30 != t)))
    _fail(t);
  else
    p_30 = t;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm q_30 = NULL;
  if(((q_30 != NULL) && (q_30 != t)))
    _fail(t);
  else
    q_30 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(((r_30 != NULL) && (r_30 != t)))
    _fail(t);
  else
    r_30 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((s_30 != NULL) && (s_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_30(not_null(s_30), not_null(r_30), t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = u_30(not_null(s_30), not_null(r_30), t);
      }
  }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(k_1, t);
  return(t);
}
static ATerm x_31 (ATerm b_31, ATerm c_31, ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  t = not_null(b_31);
  if(((d_31 != NULL) && (d_31 != t)))
    _fail(t);
  else
    d_31 = t;
  t = not_null(c_31);
  if(((h_31 != NULL) && (h_31 != t)))
    _fail(t);
  else
    h_31 = t;
  t = not_null(d_31);
  t = xtc_argterm_to_http_0_0(t);
  if(((i_31 != NULL) && (i_31 != t)))
    _fail(t);
  else
    i_31 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_31 = ATgetArgument(t, 0);
      {
        ATerm k_31 = NULL;
        t = not_null(j_31);
        if(((k_31 != NULL) && (k_31 != t)))
          _fail(t);
        else
          k_31 = t;
      }
    }
  else
    {
      ATerm l_31 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((j_31 != NULL) && (j_31 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(j_31);
      if(((l_31 != NULL) && (l_31 != t)))
        _fail(t);
      else
        l_31 = t;
    }
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  t = not_null(h_31);
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_31)), term_l_19);
  t = concat_strings_0_0(t);
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(f_31)));
  return(t);
}
static ATerm y_31 (ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  t = not_null(m_31);
  if(((o_31 != NULL) && (o_31 != t)))
    _fail(t);
  else
    o_31 = t;
  t = not_null(n_31);
  if(((s_31 != NULL) && (s_31 != t)))
    _fail(t);
  else
    s_31 = t;
  t = not_null(o_31);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm m_19 = t;
    if((PushChoice() == 0))
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(m_1, t);
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = URL_1_0(n_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_19;
      }
  }
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  t = not_null(s_31);
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_31)), term_p_19);
  t = concat_strings_0_0(t);
  if(((q_31 != NULL) && (q_31 != t)))
    _fail(t);
  else
    q_31 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(q_31)));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm t_31 = NULL;
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm u_31 = NULL;
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  if(((v_31 != NULL) && (v_31 != t)))
    _fail(t);
  else
    v_31 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((w_31 != NULL) && (w_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_31(not_null(w_31), not_null(v_31), t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = y_31(not_null(w_31), not_null(v_31), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,p_1 = NULL,z_11 = NULL;
  if(((e_32 != NULL) && (e_32 != t)))
    _fail(t);
  else
    e_32 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((a_32 != NULL) && (a_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = SSLgetAnnotations(not_null(e_32));
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = not_null(a_32);
  t = o_109(t);
  if(((b_32 != NULL) && (b_32 != t)))
    _fail(t);
  else
    b_32 = t;
  if(((d_32 != NULL) && (d_32 != t)))
    _fail(t);
  else
    d_32 = t;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(b_32));
  if(((p_1 != NULL) && (p_1 != t)))
    _fail(t);
  else
    p_1 = t;
  t = SSLsetAnnotations(not_null(p_1), not_null(z_31));
  if(((c_32 != NULL) && (c_32 != t)))
    _fail(t);
  else
    c_32 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm g_32 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((g_32 != NULL) && (g_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(g_32);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm i_32 = NULL,k_32 = NULL;
        if(((i_32 != NULL) && (i_32 != t)))
          _fail(t);
        else
          i_32 = t;
        if(match_cons(t, sym_URL_1))
          {
            k_32 = ATgetArgument(t, 0);
            {
              ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
              t = not_null(k_32);
              if(((l_32 != NULL) && (l_32 != t)))
                _fail(t);
              else
                l_32 = t;
              t = not_null(i_32);
              if(((n_32 != NULL) && (n_32 != t)))
                _fail(t);
              else
                n_32 = t;
              t = not_null(l_32);
              t = xtc_arg_to_string_0_0(t);
              if(((m_32 != NULL) && (m_32 != t)))
                _fail(t);
              else
                m_32 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(m_32));
            }
          }
        else
          {
            ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((k_32 != NULL) && (k_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(k_32);
            if(((o_32 != NULL) && (o_32 != t)))
              _fail(t);
            else
              o_32 = t;
            t = not_null(i_32);
            if(((q_32 != NULL) && (q_32 != t)))
              _fail(t);
            else
              q_32 = t;
            t = not_null(o_32);
            t = xtc_arg_to_string_0_0(t);
            if(((p_32 != NULL) && (p_32 != t)))
              _fail(t);
            else
              p_32 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_32));
          }
      }
    }
  return(t);
}
static ATerm o_34 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  t = not_null(x_32);
  if(((a_33 != NULL) && (a_33 != t)))
    _fail(t);
  else
    a_33 = t;
  t = not_null(y_32);
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  t = not_null(z_32);
  if(((g_33 != NULL) && (g_33 != t)))
    _fail(t);
  else
    g_33 = t;
  t = not_null(a_33);
  t = xtc_argterm_to_http_0_0(t);
  if(((b_33 != NULL) && (b_33 != t)))
    _fail(t);
  else
    b_33 = t;
  t = not_null(c_33);
  t = xtc_argterm_to_http_0_0(t);
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_33 = ATgetArgument(t, 0);
      {
        ATerm j_33 = NULL;
        t = not_null(i_33);
        if(((j_33 != NULL) && (j_33 != t)))
          _fail(t);
        else
          j_33 = t;
      }
    }
  else
    {
      ATerm k_33 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((i_33 != NULL) && (i_33 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(i_33);
      if(((k_33 != NULL) && (k_33 != t)))
        _fail(t);
      else
        k_33 = t;
    }
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = not_null(g_33);
  if(((f_33 != NULL) && (f_33 != t)))
    _fail(t);
  else
    f_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_33)), term_u_19), not_null(b_33));
  t = concat_strings_0_0(t);
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(e_33)));
  return(t);
}
static ATerm p_34 (ATerm l_33, ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm o_33 = NULL,t_33 = NULL,u_33 = NULL,y_33 = NULL,z_33 = NULL,c_34 = NULL,d_34 = NULL;
  t = not_null(l_33);
  if(((o_33 != NULL) && (o_33 != t)))
    _fail(t);
  else
    o_33 = t;
  t = not_null(m_33);
  if(((u_33 != NULL) && (u_33 != t)))
    _fail(t);
  else
    u_33 = t;
  t = not_null(n_33);
  if(((d_34 != NULL) && (d_34 != t)))
    _fail(t);
  else
    d_34 = t;
  t = not_null(o_33);
  t = xtc_argterm_to_http_0_0(t);
  if(((t_33 != NULL) && (t_33 != t)))
    _fail(t);
  else
    t_33 = t;
  t = not_null(u_33);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm v_19 = t;
    if((PushChoice() == 0))
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(q_1, t);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = URL_1_0(r_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_19;
      }
  }
  if(((y_33 != NULL) && (y_33 != t)))
    _fail(t);
  else
    y_33 = t;
  t = not_null(d_34);
  if(((c_34 != NULL) && (c_34 != t)))
    _fail(t);
  else
    c_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_33)), term_y_19), not_null(t_33));
  t = concat_strings_0_0(t);
  if(((z_33 != NULL) && (z_33 != t)))
    _fail(t);
  else
    z_33 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(z_33)));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm e_34 = NULL;
  if(((e_34 != NULL) && (e_34 != t)))
    _fail(t);
  else
    e_34 = t;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm f_34 = NULL;
  if(((f_34 != NULL) && (f_34 != t)))
    _fail(t);
  else
    f_34 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm g_34 = NULL,m_34 = NULL,n_34 = NULL;
  if(((g_34 != NULL) && (g_34 != t)))
    _fail(t);
  else
    g_34 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((m_34 != NULL) && (m_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_34 = ATgetArgument(t, 0);
      if(((n_34 != NULL) && (n_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_34(not_null(m_34), not_null(n_34), not_null(g_34), t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = p_34(not_null(m_34), not_null(n_34), not_null(g_34), t);
      }
  }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(s_1, t);
  return(t);
}
static ATerm w_36 (ATerm c_35, ATerm j_35, ATerm k_35, ATerm n_35, ATerm o_35, ATerm p_35, ATerm q_35, ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  t = not_null(c_35);
  if(((y_35 != NULL) && (y_35 != t)))
    _fail(t);
  else
    y_35 = t;
  t = not_null(j_35);
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  t = not_null(k_35);
  if(((w_35 != NULL) && (w_35 != t)))
    _fail(t);
  else
    w_35 = t;
  t = not_null(n_35);
  if(((z_35 != NULL) && (z_35 != t)))
    _fail(t);
  else
    z_35 = t;
  t = not_null(o_35);
  if(((s_35 != NULL) && (s_35 != t)))
    _fail(t);
  else
    s_35 = t;
  t = not_null(p_35);
  if(((r_35 != NULL) && (r_35 != t)))
    _fail(t);
  else
    r_35 = t;
  t = not_null(q_35);
  if(((b_36 != NULL) && (b_36 != t)))
    _fail(t);
  else
    b_36 = t;
  t = not_null(s_35);
  t = xtc_args_to_exec_0_0(t);
  if(((t_35 != NULL) && (t_35 != t)))
    _fail(t);
  else
    t_35 = t;
  t = not_null(y_35);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(u_35), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(t_1, t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = term_x_18;
      }
  }
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = not_null(y_35);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_1 (ATerm t);
        static ATerm u_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(w_35), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(u_1, t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = term_x_18;
      }
  }
  if(((x_35 != NULL) && (x_35 != t)))
    _fail(t);
  else
    x_35 = t;
  t = not_null(y_35);
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_1 (ATerm t);
        static ATerm v_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(z_35), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(v_1, t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = term_x_18;
      }
  }
  if(((a_36 != NULL) && (a_36 != t)))
    _fail(t);
  else
    a_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(r_35), (ATerm)ATmakeAppl(sym__3, not_null(v_35), not_null(x_35), not_null(a_36)), not_null(t_35));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  if(match_cons(t, sym__3))
    {
      if(((d_36 != NULL) && (d_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_36 = ATgetArgument(t, 0);
      if(((f_36 != NULL) && (f_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_36 = ATgetArgument(t, 1);
      if(((k_36 != NULL) && (k_36 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(d_36);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
      t = not_null(f_36);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((g_36 != NULL) && (g_36 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_36 = ATgetArgument(t, 0);
          if(((h_36 != NULL) && (h_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_36 = ATgetArgument(t, 1);
          if(((i_36 != NULL) && (i_36 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            i_36 = ATgetArgument(t, 2);
          if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            j_36 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(k_36);
      if(match_cons(t, sym__2))
        {
          if(((l_36 != NULL) && (l_36 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_36 = ATgetArgument(t, 0);
          if(((m_36 != NULL) && (m_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(j_36);
      if(((o_36 != NULL) && (o_36 != t)))
        _fail(t);
      else
        o_36 = t;
      t = not_null(l_36);
      if(((n_36 != NULL) && (n_36 != t)))
        _fail(t);
      else
        n_36 = t;
      t = not_null(c_36);
      if(((q_36 != NULL) && (q_36 != t)))
        _fail(t);
      else
        q_36 = t;
      t = not_null(o_36);
      t = xtc_args_to_xtservice_0_0(t);
      if(((p_36 != NULL) && (p_36 != t)))
        _fail(t);
      else
        p_36 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(p_36)), not_null(n_36));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          e_36 = ATgetArgument(t, 0);
          {
            ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
            t = not_null(f_36);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((g_36 != NULL) && (g_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_36 = ATgetArgument(t, 0);
                if(((h_36 != NULL) && (h_36 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_36 = ATgetArgument(t, 1);
                if(((i_36 != NULL) && (i_36 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  i_36 = ATgetArgument(t, 2);
                if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  j_36 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(k_36);
            if(match_cons(t, sym__2))
              {
                if(((l_36 != NULL) && (l_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_36 = ATgetArgument(t, 0);
                if(((m_36 != NULL) && (m_36 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_36 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(e_36);
            if(((r_36 != NULL) && (r_36 != t)))
              _fail(t);
            else
              r_36 = t;
            t = not_null(j_36);
            if(((t_36 != NULL) && (t_36 != t)))
              _fail(t);
            else
              t_36 = t;
            t = not_null(l_36);
            if(((s_36 != NULL) && (s_36 != t)))
              _fail(t);
            else
              s_36 = t;
            t = not_null(c_36);
            if(((v_36 != NULL) && (v_36 != t)))
              _fail(t);
            else
              v_36 = t;
            t = not_null(t_36);
            t = xtc_args_to_http_0_0(t);
            if(((u_36 != NULL) && (u_36 != t)))
              _fail(t);
            else
              u_36 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(u_36)), not_null(s_36));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((e_36 != NULL) && (e_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_36);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((g_36 != NULL) && (g_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_36 = ATgetArgument(t, 0);
              if(((h_36 != NULL) && (h_36 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_36 = ATgetArgument(t, 1);
              if(((i_36 != NULL) && (i_36 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                i_36 = ATgetArgument(t, 2);
              if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                j_36 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(k_36);
          if(match_cons(t, sym__2))
            {
              if(((l_36 != NULL) && (l_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_36 = ATgetArgument(t, 0);
              if(((m_36 != NULL) && (m_36 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_36(not_null(e_36), not_null(g_36), not_null(h_36), not_null(i_36), not_null(j_36), not_null(l_36), not_null(c_36), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm t_91, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm j_20 = ATgetArgument(t, 0);
      if(!(match_cons(j_20, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(t_91);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  static ATerm w_1 (ATerm t);
  static ATerm w_1 (ATerm t)
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(x_36), t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        {
          ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
          if(((z_36 != NULL) && (z_36 != t)))
            _fail(t);
          else
            z_36 = t;
          if(((b_37 != NULL) && (b_37 != t)))
            _fail(t);
          else
            b_37 = t;
          t = not_null(z_36);
          if(((a_37 != NULL) && (a_37 != t)))
            _fail(t);
          else
            a_37 = t;
          t = (ATerm) ATinsert(ATempty, not_null(a_37));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((y_36 != NULL) && (y_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_36 = ATgetArgument(t, 0);
      if(((x_36 != NULL) && (x_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_36);
  t = mapconcat_1_0(w_1, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,k_37 = NULL,l_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_37 != NULL) && (e_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_37 = ATgetArgument(t, 0);
      if(((d_37 != NULL) && (d_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_37 != NULL) && (l_37 != t)))
    _fail(t);
  else
    l_37 = t;
  t = Fst_0_0(t);
  {
    static ATerm x_1 (ATerm t);
    static ATerm x_1 (ATerm t)
    {
      ATerm m_37 = NULL;
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_37 (ATerm n_37, ATerm t);
          static ATerm w_37 (ATerm n_37, ATerm t)
          {
            ATerm o_37 = NULL,p_37 = NULL,s_37 = NULL;
            t = not_null(n_37);
            if(((m_37 != NULL) && (m_37 != t)))
              _fail(t);
            else
              m_37 = t;
            t = not_null(n_37);
            if(((p_37 != NULL) && (p_37 != t)))
              _fail(t);
            else
              p_37 = t;
            if(((s_37 != NULL) && (s_37 != t)))
              _fail(t);
            else
              s_37 = t;
            t = not_null(d_37);
            {
              static ATerm y_1 (ATerm t);
              static ATerm y_1 (ATerm t)
              {
                ATerm t_37 = NULL,u_37 = NULL;
                if(((u_37 != NULL) && (u_37 != t)))
                  _fail(t);
                else
                  u_37 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(u_37));
                if(((m_37 != NULL) && (m_37 != t)))
                  _fail(t);
                else
                  m_37 = t;
                return(t);
              }
              t = SRTS_one(y_1, t);
            }
            t = not_null(s_37);
            if(((o_37 != NULL) && (o_37 != t)))
              _fail(t);
            else
              o_37 = t;
            t = (ATerm) ATinsert(ATempty, not_null(o_37));
            return(t);
          }
          ATerm v_37 = NULL;
          if(((v_37 != NULL) && (v_37 != t)))
            _fail(t);
          else
            v_37 = t;
          t = w_37(not_null(v_37), t);
          LocalPopChoice(n_20);
        }
      else
        {
          t = m_20;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(x_1, t);
  }
  if(((f_37 != NULL) && (f_37 != t)))
    _fail(t);
  else
    f_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_37), not_null(f_37));
  t = diff_0_0(t);
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_37), not_null(k_37));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm i_151 (ATerm), ATerm j_151 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((x_37 != NULL) && (x_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_37 = ATgetArgument(t, 0);
      if(((a_38 != NULL) && (a_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_38 = ATgetArgument(t, 1);
      if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_37), not_null(a_38));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_38 = ATgetArgument(t, 0);
      if(((y_37 != NULL) && (y_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(e_38);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_38 = NULL;
        if(((f_38 != NULL) && (f_38 != t)))
          _fail(t);
        else
          f_38 = t;
        {
          ATerm q_20 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_20;
            }
        }
        t = not_null(f_38);
        LocalPopChoice(p_20);
        t = i_151(t);
      }
    else
      {
        t = o_20;
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_38 = NULL;
              if(((g_38 != NULL) && (g_38 != t)))
                _fail(t);
              else
                g_38 = t;
              t = not_null(z_37);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm t_20 = ATgetArgument(t, 0);
                  if(!(match_cons(t_20, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(g_38);
              LocalPopChoice(s_20);
              t = not_null(a_38);
              t = Hd_0_0(t);
              if(((b_38 != NULL) && (b_38 != t)))
                _fail(t);
              else
                b_38 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(b_38)));
            }
          else
            {
              t = r_20;
              t = j_151(t);
            }
        }
      }
  }
  if(((c_38 != NULL) && (c_38 != t)))
    _fail(t);
  else
    c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(y_37));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm m_38 = NULL;
  if(((m_38 != NULL) && (m_38 != t)))
    _fail(t);
  else
    m_38 = t;
  return(t);
}
ATerm diff_1_0 (ATerm k_127 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_38 != NULL) && (j_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_38 = ATgetArgument(t, 0);
      if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_38 != NULL) && (l_38 != t)))
    _fail(t);
  else
    l_38 = t;
  t = not_null(j_38);
  {
    static ATerm n_38 (ATerm t);
    static ATerm n_38 (ATerm t)
    {
      ATerm u_20 = t;
      int v_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(v_20);
        }
      else
        {
          t = u_20;
          {
            ATerm w_20 = t;
            int x_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm z_1 (ATerm t);
                static ATerm z_1 (ATerm t)
                {
                  t = not_null(i_38);
                  return(t);
                }
                t = HdMember_p__2_0(k_127, z_1, t);
                t = n_38(t);
                LocalPopChoice(x_20);
              }
            else
              {
                t = w_20;
                t = Cons_2_0(a_2, n_38, t);
              }
          }
        }
      return(t);
    }
    t = n_38(t);
  }
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_38 != NULL) && (p_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_38 = ATgetArgument(t, 0);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
          {
            if(((o_38 != NULL) && (o_38 != ATgetFirst((ATermList) y_20))))
              _fail(ATgetFirst((ATermList) y_20));
            else
              o_38 = ATgetFirst((ATermList) y_20);
            if(((q_38 != NULL) && (q_38 != (ATerm) ATgetNext((ATermList) y_20))))
              _fail((ATerm) ATgetNext((ATermList) y_20));
            else
              q_38 = (ATerm) ATgetNext((ATermList) y_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_38)), not_null(o_38)), not_null(q_38));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_38 != NULL) && (r_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_38 = ATgetArgument(t, 0);
      if(((s_38 != NULL) && (s_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(s_38)), not_null(r_38));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
        {
          if(((t_38 != NULL) && (t_38 != ATgetFirst((ATermList) z_20))))
            _fail(ATgetFirst((ATermList) z_20));
          else
            t_38 = ATgetFirst((ATermList) z_20);
          if(((v_38 != NULL) && (v_38 != (ATerm) ATgetNext((ATermList) z_20))))
            _fail((ATerm) ATgetNext((ATermList) z_20));
          else
            v_38 = (ATerm) ATgetNext((ATermList) z_20);
        }
      else
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            if(((u_38 != NULL) && (u_38 != ATgetFirst((ATermList) a_21))))
              _fail(ATgetFirst((ATermList) a_21));
            else
              u_38 = ATgetFirst((ATermList) a_21);
            if(((w_38 != NULL) && (w_38 != (ATerm) ATgetNext((ATermList) a_21))))
              _fail((ATerm) ATgetNext((ATermList) a_21));
            else
              w_38 = (ATerm) ATgetNext((ATermList) a_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_38), not_null(u_38)), (ATerm) ATmakeAppl(sym__2, not_null(v_38), not_null(w_38)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if(((ATgetType(b_21) != AT_LIST) || !(ATisEmpty(b_21))))
        _fail(t);
      {
        ATerm c_21 = ATgetArgument(t, 1);
        if(((ATgetType(c_21) != AT_LIST) || !(ATisEmpty(c_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm genzip_4_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t)
{
  static ATerm x_38 (ATerm t);
  static ATerm x_38 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_125(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = j_125(t);
        t = _2_0(l_125, x_38, t);
        t = k_125(t);
      }
    return(t);
  }
  t = x_38(t);
  return(t);
}
ATerm zip_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, n_125, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm n_39 = NULL;
  if(((n_39 != NULL) && (n_39 != t)))
    _fail(t);
  else
    n_39 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_21 = ATgetFirst((ATermList) t);
      if(match_cons(f_21, sym__2))
        {
          if(((h_39 != NULL) && (h_39 != ATgetArgument(f_21, 0))))
            _fail(ATgetArgument(f_21, 0));
          else
            h_39 = ATgetArgument(f_21, 0);
          if(((k_39 != NULL) && (k_39 != ATgetArgument(f_21, 1))))
            _fail(ATgetArgument(f_21, 1));
          else
            k_39 = ATgetArgument(f_21, 1);
        }
      else
        _fail(t);
      if(((c_39 != NULL) && (c_39 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((l_39 != NULL) && (l_39 != t)))
    _fail(t);
  else
    l_39 = t;
  t = not_null(k_39);
  if(((m_39 != NULL) && (m_39 != t)))
    _fail(t);
  else
    m_39 = t;
  t = SSL_explode_term(not_null(m_39));
  if(match_cons(t, sym__2))
    {
      if(((z_38 != NULL) && (z_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_38 = ATgetArgument(t, 0);
      if(((b_39 != NULL) && (b_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_39);
  if(((i_39 != NULL) && (i_39 != t)))
    _fail(t);
  else
    i_39 = t;
  t = not_null(h_39);
  if(((j_39 != NULL) && (j_39 != t)))
    _fail(t);
  else
    j_39 = t;
  t = SSL_explode_term(not_null(j_39));
  if(match_cons(t, sym__2))
    {
      if(((z_38 != NULL) && (z_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_38 = ATgetArgument(t, 0);
      if(((a_39 != NULL) && (a_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_39);
  if(((e_39 != NULL) && (e_39 != t)))
    _fail(t);
  else
    e_39 = t;
  if(((g_39 != NULL) && (g_39 != t)))
    _fail(t);
  else
    g_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_39), not_null(b_39));
  t = zip_1_0(b_2, t);
  if(((f_39 != NULL) && (f_39 != t)))
    _fail(t);
  else
    f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_39), not_null(c_39));
  t = conc_0_0(t);
  if(((d_39 != NULL) && (d_39 != t)))
    _fail(t);
  else
    d_39 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_21 = ATgetFirst((ATermList) t);
      if(match_cons(g_21, sym__2))
        {
          if(((o_39 != NULL) && (o_39 != ATgetArgument(g_21, 0))))
            _fail(ATgetArgument(g_21, 0));
          else
            o_39 = ATgetArgument(g_21, 0);
          if(((o_39 != NULL) && (o_39 != ATgetArgument(g_21, 1))))
            _fail(ATgetArgument(g_21, 1));
          else
            o_39 = ATgetArgument(g_21, 1);
        }
      else
        _fail(t);
      if(((p_39 != NULL) && (p_39 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        p_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(p_39);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm s_39 = NULL;
  if(((s_39 != NULL) && (s_39 != t)))
    _fail(t);
  else
    s_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_39));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = _2_0(f_2, Nil_0_0, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(g_2, h_2, t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm t_39 = NULL;
  if(((t_39 != NULL) && (t_39 != t)))
    _fail(t);
  else
    t_39 = t;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm u_39 = NULL;
  if(((u_39 != NULL) && (u_39 != t)))
    _fail(t);
  else
    u_39 = t;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_2, d_2, e_2, t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_40 != NULL) && (f_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_40 = ATgetArgument(t, 0);
      if(((e_40 != NULL) && (e_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_40 != NULL) && (i_40 != t)))
    _fail(t);
  else
    i_40 = t;
  t = Fst_0_0(t);
  {
    static ATerm i_2 (ATerm t);
    static ATerm i_2 (ATerm t)
    {
      ATerm j_40 = NULL,k_40 = NULL;
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm u_40 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm t);
          static ATerm u_40 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm t)
          {
            ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
            t = not_null(l_40);
            if(((j_40 != NULL) && (j_40 != t)))
              _fail(t);
            else
              j_40 = t;
            t = not_null(m_40);
            if(((k_40 != NULL) && (k_40 != t)))
              _fail(t);
            else
              k_40 = t;
            t = not_null(n_40);
            if(((p_40 != NULL) && (p_40 != t)))
              _fail(t);
            else
              p_40 = t;
            if(((q_40 != NULL) && (q_40 != t)))
              _fail(t);
            else
              q_40 = t;
            t = not_null(e_40);
            {
              static ATerm j_2 (ATerm t);
              static ATerm j_2 (ATerm t)
              {
                if(((j_40 != NULL) && (j_40 != t)))
                  _fail(t);
                else
                  j_40 = t;
                return(t);
              }
              t = SRTS_one(j_2, t);
            }
            t = not_null(q_40);
            if(((o_40 != NULL) && (o_40 != t)))
              _fail(t);
            else
              o_40 = t;
            t = (ATerm) ATinsert(ATempty, not_null(o_40));
            return(t);
          }
          ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
          if(((r_40 != NULL) && (r_40 != t)))
            _fail(t);
          else
            r_40 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((s_40 != NULL) && (s_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_40 = ATgetArgument(t, 0);
              if(((t_40 != NULL) && (t_40 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                t_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_40(not_null(s_40), not_null(t_40), not_null(r_40), t);
          LocalPopChoice(o_21);
        }
      else
        {
          t = n_21;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(i_2, t);
  }
  if(((g_40 != NULL) && (g_40 != t)))
    _fail(t);
  else
    g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_40), not_null(g_40));
  t = diff_0_0(t);
  if(((h_40 != NULL) && (h_40 != t)))
    _fail(t);
  else
    h_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_40), not_null(h_40));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm m_151 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,n_41 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((w_40 != NULL) && (w_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_40 = ATgetArgument(t, 0);
      if(((x_40 != NULL) && (x_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_40 = ATgetArgument(t, 1);
      if(((d_41 != NULL) && (d_41 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        d_41 = ATgetArgument(t, 2);
      if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        v_40 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((f_41 != NULL) && (f_41 != t)))
    _fail(t);
  else
    f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_40), not_null(x_40));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((n_41 != NULL) && (n_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_41 = ATgetArgument(t, 0);
      if(((c_41 != NULL) && (c_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_41);
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_41 = NULL;
        if(((o_41 != NULL) && (o_41 != t)))
          _fail(t);
        else
          o_41 = t;
        {
          ATerm r_21 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_21;
            }
        }
        t = not_null(o_41);
        LocalPopChoice(q_21);
        t = k_151(t);
      }
    else
      {
        t = p_21;
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_41 = NULL;
              if(((p_41 != NULL) && (p_41 != t)))
                _fail(t);
              else
                p_41 = t;
              t = not_null(d_41);
              {
                ATerm u_21 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_21;
                  }
              }
              t = not_null(p_41);
              LocalPopChoice(t_21);
              t = l_151(t);
            }
          else
            {
              t = s_21;
              t = m_151(t);
            }
        }
      }
  }
  if(((e_41 != NULL) && (e_41 != t)))
    _fail(t);
  else
    e_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_41), not_null(c_41));
  return(t);
}
static ATerm p_49 (ATerm p_43, ATerm q_43, ATerm r_43, ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  t = not_null(p_43);
  if(((w_43 != NULL) && (w_43 != t)))
    _fail(t);
  else
    w_43 = t;
  t = not_null(q_43);
  if(((x_43 != NULL) && (x_43 != t)))
    _fail(t);
  else
    x_43 = t;
  t = not_null(r_43);
  if(((v_43 != NULL) && (v_43 != t)))
    _fail(t);
  else
    v_43 = t;
  t = not_null(s_43);
  if(((u_43 != NULL) && (u_43 != t)))
    _fail(t);
  else
    u_43 = t;
  t = not_null(t_43);
  if(((b_44 != NULL) && (b_44 != t)))
    _fail(t);
  else
    b_44 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(u_43), not_null(w_43), not_null(x_43), not_null(v_43));
  {
    static ATerm l_2 (ATerm t);
    static ATerm l_2 (ATerm t)
    {
      static ATerm n_2 (ATerm t);
      static ATerm n_2 (ATerm t)
      {
        ATerm d_44 = NULL,e_44 = NULL;
        if(((e_44 != NULL) && (e_44 != t)))
          _fail(t);
        else
          e_44 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(y_43), not_null(e_44));
        return(t);
      }
      t = not_null(w_43);
      t = Hd_0_0(t);
      if(((y_43 != NULL) && (y_43 != t)))
        _fail(t);
      else
        y_43 = t;
      t = not_null(x_43);
      t = map_1_0(n_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(k_2, l_2, m_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((z_43 != NULL) && (z_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_43 = ATgetArgument(t, 0);
      if(((a_44 != NULL) && (a_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), not_null(a_44));
  return(t);
}
static ATerm u_49 (ATerm f_44, ATerm g_44, ATerm h_44, ATerm i_44, ATerm j_44, ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  t = not_null(f_44);
  if(((m_44 != NULL) && (m_44 != t)))
    _fail(t);
  else
    m_44 = t;
  t = not_null(g_44);
  if(((n_44 != NULL) && (n_44 != t)))
    _fail(t);
  else
    n_44 = t;
  t = not_null(h_44);
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  t = not_null(i_44);
  if(((l_44 != NULL) && (l_44 != t)))
    _fail(t);
  else
    l_44 = t;
  t = not_null(j_44);
  if(((q_44 != NULL) && (q_44 != t)))
    _fail(t);
  else
    q_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_44), not_null(m_44), not_null(n_44));
  t = xtc_toption_to_args_2_0(o_2, p_2, t);
  if(match_cons(t, sym__2))
    {
      if(((o_44 != NULL) && (o_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_44 = ATgetArgument(t, 0);
      if(((p_44 != NULL) && (p_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_44), not_null(p_44));
  return(t);
}
static ATerm v_49 (ATerm s_44, ATerm t_44, ATerm u_44, ATerm v_44, ATerm w_44, ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  t = not_null(s_44);
  if(((z_44 != NULL) && (z_44 != t)))
    _fail(t);
  else
    z_44 = t;
  t = not_null(t_44);
  if(((a_45 != NULL) && (a_45 != t)))
    _fail(t);
  else
    a_45 = t;
  t = not_null(u_44);
  if(((y_44 != NULL) && (y_44 != t)))
    _fail(t);
  else
    y_44 = t;
  t = not_null(v_44);
  if(((x_44 != NULL) && (x_44 != t)))
    _fail(t);
  else
    x_44 = t;
  t = not_null(w_44);
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(x_44), not_null(z_44), not_null(a_45), not_null(y_44));
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      static ATerm s_2 (ATerm t);
      static ATerm s_2 (ATerm t)
      {
        ATerm g_45 = NULL,h_45 = NULL;
        if(((h_45 != NULL) && (h_45 != t)))
          _fail(t);
        else
          h_45 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(b_45), not_null(h_45));
        return(t);
      }
      t = not_null(z_44);
      t = Hd_0_0(t);
      if(((b_45 != NULL) && (b_45 != t)))
        _fail(t);
      else
        b_45 = t;
      t = not_null(a_45);
      t = map_1_0(s_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(q_2, r_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((c_45 != NULL) && (c_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_45 = ATgetArgument(t, 0);
      if(((d_45 != NULL) && (d_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_45), not_null(d_45));
  return(t);
}
static ATerm w_49 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm l_45, ATerm m_45, ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  t = not_null(i_45);
  if(((p_45 != NULL) && (p_45 != t)))
    _fail(t);
  else
    p_45 = t;
  t = not_null(j_45);
  if(((q_45 != NULL) && (q_45 != t)))
    _fail(t);
  else
    q_45 = t;
  t = not_null(k_45);
  if(((n_45 != NULL) && (n_45 != t)))
    _fail(t);
  else
    n_45 = t;
  t = not_null(l_45);
  if(((o_45 != NULL) && (o_45 != t)))
    _fail(t);
  else
    o_45 = t;
  t = not_null(m_45);
  if(((t_45 != NULL) && (t_45 != t)))
    _fail(t);
  else
    t_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(o_45), not_null(p_45), not_null(q_45));
  t = xtc_toption_to_args_2_0(t_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((r_45 != NULL) && (r_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_45 = ATgetArgument(t, 0);
      if(((s_45 != NULL) && (s_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), not_null(s_45));
  return(t);
}
static ATerm x_49 (ATerm v_45, ATerm w_45, ATerm x_45, ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  t = not_null(v_45);
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = not_null(w_45);
  if(((d_46 != NULL) && (d_46 != t)))
    _fail(t);
  else
    d_46 = t;
  t = not_null(x_45);
  if(((b_46 != NULL) && (b_46 != t)))
    _fail(t);
  else
    b_46 = t;
  t = not_null(y_45);
  if(((a_46 != NULL) && (a_46 != t)))
    _fail(t);
  else
    a_46 = t;
  t = not_null(z_45);
  if(((p_46 != NULL) && (p_46 != t)))
    _fail(t);
  else
    p_46 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(a_46), not_null(c_46), not_null(d_46), not_null(b_46));
  {
    static ATerm v_2 (ATerm t);
    static ATerm v_2 (ATerm t)
    {
      t = not_null(c_46);
      t = Hd_0_0(t);
      if(((l_46 != NULL) && (l_46 != t)))
        _fail(t);
      else
        l_46 = t;
      t = not_null(d_46);
      t = Hd_0_0(t);
      if(((m_46 != NULL) && (m_46 != t)))
        _fail(t);
      else
        m_46 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(l_46), not_null(m_46)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(u_2, v_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((n_46 != NULL) && (n_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_46 = ATgetArgument(t, 0);
      if(((o_46 != NULL) && (o_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_46), not_null(o_46));
  return(t);
}
static ATerm y_49 (ATerm s_46, ATerm t_46, ATerm u_46, ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  t = not_null(s_46);
  if(((z_46 != NULL) && (z_46 != t)))
    _fail(t);
  else
    z_46 = t;
  t = not_null(t_46);
  if(((a_47 != NULL) && (a_47 != t)))
    _fail(t);
  else
    a_47 = t;
  t = not_null(u_46);
  if(((x_46 != NULL) && (x_46 != t)))
    _fail(t);
  else
    x_46 = t;
  t = not_null(v_46);
  if(((y_46 != NULL) && (y_46 != t)))
    _fail(t);
  else
    y_46 = t;
  t = not_null(w_46);
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(y_46), not_null(z_46), not_null(a_47));
  t = xtc_toption_to_args_2_0(w_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((b_47 != NULL) && (b_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_47 = ATgetArgument(t, 0);
      if(((c_47 != NULL) && (c_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_47), not_null(c_47));
  return(t);
}
static ATerm z_49 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,x_47 = NULL;
  t = not_null(g_47);
  if(((n_47 != NULL) && (n_47 != t)))
    _fail(t);
  else
    n_47 = t;
  t = not_null(h_47);
  if(((o_47 != NULL) && (o_47 != t)))
    _fail(t);
  else
    o_47 = t;
  t = not_null(i_47);
  if(((m_47 != NULL) && (m_47 != t)))
    _fail(t);
  else
    m_47 = t;
  t = not_null(j_47);
  if(((l_47 != NULL) && (l_47 != t)))
    _fail(t);
  else
    l_47 = t;
  t = not_null(k_47);
  if(((x_47 != NULL) && (x_47 != t)))
    _fail(t);
  else
    x_47 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(l_47), not_null(n_47), not_null(o_47), not_null(m_47));
  {
    static ATerm y_2 (ATerm t);
    static ATerm y_2 (ATerm t)
    {
      t = not_null(n_47);
      t = Hd_0_0(t);
      if(((p_47 != NULL) && (p_47 != t)))
        _fail(t);
      else
        p_47 = t;
      t = not_null(o_47);
      t = Hd_0_0(t);
      if(((q_47 != NULL) && (q_47 != t)))
        _fail(t);
      else
        q_47 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(p_47), not_null(q_47)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(x_2, y_2, z_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((r_47 != NULL) && (r_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_47 = ATgetArgument(t, 0);
      if(((s_47 != NULL) && (s_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_47), not_null(s_47));
  return(t);
}
static ATerm a_50 (ATerm d_48, ATerm f_48, ATerm g_48, ATerm h_48, ATerm i_48, ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,p_48 = NULL,r_48 = NULL;
  t = not_null(d_48);
  if(((l_48 != NULL) && (l_48 != t)))
    _fail(t);
  else
    l_48 = t;
  t = not_null(f_48);
  if(((m_48 != NULL) && (m_48 != t)))
    _fail(t);
  else
    m_48 = t;
  t = not_null(g_48);
  if(((j_48 != NULL) && (j_48 != t)))
    _fail(t);
  else
    j_48 = t;
  t = not_null(h_48);
  if(((k_48 != NULL) && (k_48 != t)))
    _fail(t);
  else
    k_48 = t;
  t = not_null(i_48);
  if(((r_48 != NULL) && (r_48 != t)))
    _fail(t);
  else
    r_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(k_48), not_null(l_48), not_null(m_48));
  t = xtc_toption_to_args_2_0(a_3, b_3, t);
  if(match_cons(t, sym__2))
    {
      if(((n_48 != NULL) && (n_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_48 = ATgetArgument(t, 0);
      if(((p_48 != NULL) && (p_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_48), not_null(p_48));
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm c_44 = NULL;
  if(((c_44 != NULL) && (c_44 != t)))
    _fail(t);
  else
    c_44 = t;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm r_44 = NULL;
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm f_45 = NULL;
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm u_45 = NULL;
  if(((u_45 != NULL) && (u_45 != t)))
    _fail(t);
  else
    u_45 = t;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  if(((r_46 != NULL) && (r_46 != t)))
    _fail(t);
  else
    r_46 = t;
  t = Hd_0_0(t);
  if(((q_46 != NULL) && (q_46 != t)))
    _fail(t);
  else
    q_46 = t;
  t = (ATerm) ATinsert(ATempty, not_null(q_46));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  if(((f_47 != NULL) && (f_47 != t)))
    _fail(t);
  else
    f_47 = t;
  t = Hd_0_0(t);
  if(((e_47 != NULL) && (e_47 != t)))
    _fail(t);
  else
    e_47 = t;
  t = (ATerm) ATinsert(ATempty, not_null(e_47));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  if(((c_48 != NULL) && (c_48 != t)))
    _fail(t);
  else
    c_48 = t;
  t = Hd_0_0(t);
  if(((b_48 != NULL) && (b_48 != t)))
    _fail(t);
  else
    b_48 = t;
  t = (ATerm) ATinsert(ATempty, not_null(b_48));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  if(((t_48 != NULL) && (t_48 != t)))
    _fail(t);
  else
    t_48 = t;
  t = Hd_0_0(t);
  if(((s_48 != NULL) && (s_48 != t)))
    _fail(t);
  else
    s_48 = t;
  t = (ATerm) ATinsert(ATempty, not_null(s_48));
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,z_48 = NULL,b_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,n_49 = NULL,o_49 = NULL;
  if(((z_48 != NULL) && (z_48 != t)))
    _fail(t);
  else
    z_48 = t;
  if(match_cons(t, sym__2))
    {
      if(((b_49 != NULL) && (b_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_49 = ATgetArgument(t, 0);
      if(((o_49 != NULL) && (o_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_49);
  if(match_cons(t, sym_TVarStar_4))
    {
      g_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
      i_49 = ATgetArgument(t, 2);
      k_49 = ATgetArgument(t, 3);
      t = not_null(g_49);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(i_49);
          if(match_cons(t, sym_Some_1))
            {
              if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(j_49);
          if(match_cons(t, sym_Default_1))
            {
              if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(u_48);
          if(match_cons(t, sym_Values_1))
            {
              if(((v_48 != NULL) && (v_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(k_49);
          if(match_cons(t, sym_Some_1))
            {
              if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_49(not_null(h_49), not_null(v_48), not_null(n_49), not_null(o_49), not_null(z_48), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(i_49);
          if(match_cons(t, sym_Some_1))
            {
              if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(k_49);
          if(match_cons(t, sym_Some_1))
            {
              if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_49(not_null(h_49), not_null(j_49), not_null(n_49), not_null(o_49), not_null(z_48), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          g_49 = ATgetArgument(t, 0);
          h_49 = ATgetArgument(t, 1);
          i_49 = ATgetArgument(t, 2);
          k_49 = ATgetArgument(t, 3);
          t = not_null(g_49);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(i_49);
              if(match_cons(t, sym_Some_1))
                {
                  if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(j_49);
              if(match_cons(t, sym_Default_1))
                {
                  if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(u_48);
              if(match_cons(t, sym_Values_1))
                {
                  if(((v_48 != NULL) && (v_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(k_49);
              if(match_cons(t, sym_Some_1))
                {
                  if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_49(not_null(h_49), not_null(v_48), not_null(n_49), not_null(o_49), not_null(z_48), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(i_49);
              if(match_cons(t, sym_Some_1))
                {
                  if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(k_49);
              if(match_cons(t, sym_Some_1))
                {
                  if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_49(not_null(h_49), not_null(j_49), not_null(n_49), not_null(o_49), not_null(z_48), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              g_49 = ATgetArgument(t, 0);
              h_49 = ATgetArgument(t, 1);
              i_49 = ATgetArgument(t, 2);
              k_49 = ATgetArgument(t, 3);
              t = not_null(g_49);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(i_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(j_49);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(u_48);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((v_48 != NULL) && (v_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(k_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_49(not_null(h_49), not_null(v_48), not_null(n_49), not_null(o_49), not_null(z_48), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(i_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(k_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_49(not_null(h_49), not_null(j_49), not_null(n_49), not_null(o_49), not_null(z_48), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((g_49 != NULL) && (g_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_49 = ATgetArgument(t, 0);
                  if(((h_49 != NULL) && (h_49 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    h_49 = ATgetArgument(t, 1);
                  if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    i_49 = ATgetArgument(t, 2);
                  if(((k_49 != NULL) && (k_49 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    k_49 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(g_49);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(i_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(j_49);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(u_48);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((v_48 != NULL) && (v_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(k_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_49(not_null(h_49), not_null(v_48), not_null(n_49), not_null(o_49), not_null(z_48), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(i_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(k_49);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_50(not_null(h_49), not_null(j_49), not_null(n_49), not_null(o_49), not_null(z_48), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm k_3, ATerm t)
{
  static ATerm w_50 (ATerm g_50, ATerm h_50, ATerm t);
  static ATerm x_50 (ATerm m_50, ATerm t);
  static ATerm w_50 (ATerm g_50, ATerm h_50, ATerm t)
  {
    ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
    t = not_null(g_50);
    if(((i_50 != NULL) && (i_50 != t)))
      _fail(t);
    else
      i_50 = t;
    t = not_null(h_50);
    if(((k_50 != NULL) && (k_50 != t)))
      _fail(t);
    else
      k_50 = t;
    t = not_null(k_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_50 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(l_50);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(i_50), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(j_50)))));
    return(t);
  }
  static ATerm x_50 (ATerm m_50, ATerm t)
  {
    ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
    t = not_null(m_50);
    if(((o_50 != NULL) && (o_50 != t)))
      _fail(t);
    else
      o_50 = t;
    t = not_null(k_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          p_50 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(p_50);
    if(((n_50 != NULL) && (n_50 != t)))
      _fail(t);
    else
      n_50 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(n_50)))));
    return(t);
  }
  ATerm q_50 = NULL,r_50 = NULL,u_50 = NULL;
  if(((r_50 != NULL) && (r_50 != t)))
    _fail(t);
  else
    r_50 = t;
  if(match_cons(t, sym_File_1))
    {
      u_50 = ATgetArgument(t, 0);
      t = not_null(u_50);
      if(match_cons(t, sym_Some_1))
        {
          q_50 = ATgetArgument(t, 0);
          t = w_50(not_null(q_50), not_null(r_50), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = x_50(not_null(r_50), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((u_50 != NULL) && (u_50 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(u_50);
      if(match_cons(t, sym_Some_1))
        {
          q_50 = ATgetArgument(t, 0);
          {
            ATerm v_50 = NULL;
            t = not_null(q_50);
            if(((v_50 != NULL) && (v_50 != t)))
              _fail(t);
            else
              v_50 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(v_50)));
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
ATerm xtc_stream_to_arg_0_1 (ATerm j_3, ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  if(((z_50 != NULL) && (z_50 != t)))
    _fail(t);
  else
    z_50 = t;
  if(match_cons(t, sym_Error_1))
    {
      a_51 = ATgetArgument(t, 0);
      {
        ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
        t = not_null(a_51);
        if(((b_51 != NULL) && (b_51 != t)))
          _fail(t);
        else
          b_51 = t;
        t = not_null(z_50);
        if(((d_51 != NULL) && (d_51 != t)))
          _fail(t);
        else
          d_51 = t;
        t = not_null(b_51);
        t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
        if(((c_51 != NULL) && (c_51 != t)))
          _fail(t);
        else
          c_51 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          a_51 = ATgetArgument(t, 0);
          {
            ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
            t = not_null(a_51);
            if(((e_51 != NULL) && (e_51 != t)))
              _fail(t);
            else
              e_51 = t;
            t = not_null(z_50);
            if(((g_51 != NULL) && (g_51 != t)))
              _fail(t);
            else
              g_51 = t;
            t = not_null(e_51);
            t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
            if(((f_51 != NULL) && (f_51 != t)))
              _fail(t);
            else
              f_51 = t;
          }
        }
      else
        {
          ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(a_51);
          if(((h_51 != NULL) && (h_51 != t)))
            _fail(t);
          else
            h_51 = t;
          t = not_null(z_50);
          if(((j_51 != NULL) && (j_51 != t)))
            _fail(t);
          else
            j_51 = t;
          t = not_null(h_51);
          t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
          if(((i_51 != NULL) && (i_51 != t)))
            _fail(t);
          else
            i_51 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm k_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      if(match_cons(v_21, sym_Some_1))
        {
          if(((k_51 != NULL) && (k_51 != ATgetArgument(v_21, 0))))
            _fail(ATgetArgument(v_21, 0));
          else
            k_51 = ATgetArgument(v_21, 0);
        }
      else
        _fail(t);
      {
        ATerm w_21 = ATgetArgument(t, 1);
      }
      {
        ATerm x_21 = ATgetArgument(t, 2);
      }
      {
        ATerm y_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(k_51);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm l_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((l_51 != NULL) && (l_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_51 = ATgetArgument(t, 0);
      {
        ATerm z_21 = ATgetArgument(t, 1);
      }
      {
        ATerm a_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(l_51);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  if(((o_51 != NULL) && (o_51 != t)))
    _fail(t);
  else
    o_51 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((p_51 != NULL) && (p_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(p_51);
  if(match_cons(t, sym_HTTP_1))
    {
      q_51 = ATgetArgument(t, 0);
      {
        ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
        t = not_null(q_51);
        if(((r_51 != NULL) && (r_51 != t)))
          _fail(t);
        else
          r_51 = t;
        t = not_null(o_51);
        if(((t_51 != NULL) && (t_51 != t)))
          _fail(t);
        else
          t_51 = t;
        t = not_null(r_51);
        t = xtc_stream_input_0_0(t);
        if(((s_51 != NULL) && (s_51 != t)))
          _fail(t);
        else
          s_51 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_g_22;
        }
      else
        {
          ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((q_51 != NULL) && (q_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(q_51);
          if(((u_51 != NULL) && (u_51 != t)))
            _fail(t);
          else
            u_51 = t;
          t = not_null(o_51);
          if(((w_51 != NULL) && (w_51 != t)))
            _fail(t);
          else
            w_51 = t;
          t = not_null(u_51);
          t = xtc_stream_input_0_0(t);
          if(((v_51 != NULL) && (v_51 != t)))
            _fail(t);
          else
            v_51 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm x_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      ATerm i_22 = ATgetArgument(t, 1);
      if(match_cons(i_22, sym_Some_1))
        {
          if(((x_51 != NULL) && (x_51 != ATgetArgument(i_22, 0))))
            _fail(ATgetArgument(i_22, 0));
          else
            x_51 = ATgetArgument(i_22, 0);
        }
      else
        _fail(t);
      {
        ATerm j_22 = ATgetArgument(t, 2);
      }
      {
        ATerm k_22 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(x_51);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm y_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(((y_51 != NULL) && (y_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_51 = ATgetArgument(t, 1);
      {
        ATerm m_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(y_51);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(match_cons(n_22, sym_Exec_1))
        {
          if(((z_51 != NULL) && (z_51 != ATgetArgument(n_22, 0))))
            _fail(ATgetArgument(n_22, 0));
          else
            z_51 = ATgetArgument(n_22, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((b_52 != NULL) && (b_52 != t)))
    _fail(t);
  else
    b_52 = t;
  t = not_null(z_51);
  t = xtc_stream_output_0_0(t);
  if(((a_52 != NULL) && (a_52 != t)))
    _fail(t);
  else
    a_52 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm c_52 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      ATerm j_23 = ATgetArgument(t, 1);
      ATerm u_23 = ATgetArgument(t, 2);
      if(match_cons(u_23, sym_Some_1))
        {
          if(((c_52 != NULL) && (c_52 != ATgetArgument(u_23, 0))))
            _fail(ATgetArgument(u_23, 0));
          else
            c_52 = ATgetArgument(u_23, 0);
        }
      else
        _fail(t);
      {
        ATerm t_24 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(c_52);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm d_52 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      ATerm y_25 = ATgetArgument(t, 1);
      if(((d_52 != NULL) && (d_52 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        d_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(d_52);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym_Exec_1))
        {
          if(((e_52 != NULL) && (e_52 != ATgetArgument(d_27, 0))))
            _fail(ATgetArgument(d_27, 0));
          else
            e_52 = ATgetArgument(d_27, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((g_52 != NULL) && (g_52 != t)))
    _fail(t);
  else
    g_52 = t;
  t = not_null(e_52);
  t = xtc_stream_error_0_0(t);
  if(((f_52 != NULL) && (f_52 != t)))
    _fail(t);
  else
    f_52 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm h_3, ATerm i_3, ATerm t)
{
  static ATerm s_53 (ATerm m_52, ATerm t);
  static ATerm t_53 (ATerm u_52, ATerm t);
  static ATerm u_53 (ATerm c_53, ATerm t);
  static ATerm s_53 (ATerm m_52, ATerm t)
  {
    ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
    t = not_null(m_52);
    if(((o_52 != NULL) && (o_52 != t)))
      _fail(t);
    else
      o_52 = t;
    t = not_null(h_3);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((p_52 != NULL) && (p_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          p_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(p_52);
    if(((r_52 != NULL) && (r_52 != t)))
      _fail(t);
    else
      r_52 = t;
    if(((t_52 != NULL) && (t_52 != t)))
      _fail(t);
    else
      t_52 = t;
    t = not_null(i_3);
    t = xtc_conf_error_0_0(t);
    if(((s_52 != NULL) && (s_52 != t)))
      _fail(t);
    else
      s_52 = t;
    if(((q_52 != NULL) && (q_52 != t)))
      _fail(t);
    else
      q_52 = t;
    t = not_null(r_52);
    t = xtc_stream_to_arg_0_1(not_null(q_52), t);
    if(((n_52 != NULL) && (n_52 != t)))
      _fail(t);
    else
      n_52 = t;
    return(t);
  }
  static ATerm t_53 (ATerm u_52, ATerm t)
  {
    ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
    t = not_null(u_52);
    if(((w_52 != NULL) && (w_52 != t)))
      _fail(t);
    else
      w_52 = t;
    t = not_null(h_3);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((x_52 != NULL) && (x_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(x_52);
    if(((z_52 != NULL) && (z_52 != t)))
      _fail(t);
    else
      z_52 = t;
    if(((b_53 != NULL) && (b_53 != t)))
      _fail(t);
    else
      b_53 = t;
    t = not_null(i_3);
    t = xtc_conf_output_0_0(t);
    if(((a_53 != NULL) && (a_53 != t)))
      _fail(t);
    else
      a_53 = t;
    if(((y_52 != NULL) && (y_52 != t)))
      _fail(t);
    else
      y_52 = t;
    t = not_null(z_52);
    t = xtc_stream_to_arg_0_1(not_null(y_52), t);
    if(((v_52 != NULL) && (v_52 != t)))
      _fail(t);
    else
      v_52 = t;
    return(t);
  }
  static ATerm u_53 (ATerm c_53, ATerm t)
  {
    ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
    t = not_null(c_53);
    if(((g_53 != NULL) && (g_53 != t)))
      _fail(t);
    else
      g_53 = t;
    t = not_null(h_3);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((h_53 != NULL) && (h_53 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_53 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(h_53);
    if(((l_53 != NULL) && (l_53 != t)))
      _fail(t);
    else
      l_53 = t;
    if(((n_53 != NULL) && (n_53 != t)))
      _fail(t);
    else
      n_53 = t;
    t = not_null(i_3);
    t = xtc_conf_input_0_0(t);
    if(((m_53 != NULL) && (m_53 != t)))
      _fail(t);
    else
      m_53 = t;
    if(((i_53 != NULL) && (i_53 != t)))
      _fail(t);
    else
      i_53 = t;
    t = not_null(l_53);
    t = xtc_stream_to_arg_0_1(not_null(i_53), t);
    if(((f_53 != NULL) && (f_53 != t)))
      _fail(t);
    else
      f_53 = t;
    return(t);
  }
  ATerm o_53 = NULL,r_53 = NULL;
  if(((o_53 != NULL) && (o_53 != t)))
    _fail(t);
  else
    o_53 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(r_53);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_s_27);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = s_53(not_null(o_53), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = t_53(not_null(o_53), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = u_53(not_null(o_53), t);
            }
        }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm i_54 = NULL;
  if(((i_54 != NULL) && (i_54 != t)))
    _fail(t);
  else
    i_54 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm a_92, ATerm b_92, ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(match_cons(t_27, sym_TOr_2))
        {
          if(((w_53 != NULL) && (w_53 != ATgetArgument(t_27, 0))))
            _fail(ATgetArgument(t_27, 0));
          else
            w_53 = ATgetArgument(t_27, 0);
          if(((x_53 != NULL) && (x_53 != ATgetArgument(t_27, 1))))
            _fail(ATgetArgument(t_27, 1));
          else
            x_53 = ATgetArgument(t_27, 1);
        }
      else
        _fail(t);
      if(((y_53 != NULL) && (y_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_54 != NULL) && (b_54 != t)))
    _fail(t);
  else
    b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), not_null(x_53));
  if(((d_54 != NULL) && (d_54 != t)))
    _fail(t);
  else
    d_54 = t;
  t = term_u_27;
  if(((c_54 != NULL) && (c_54 != t)))
    _fail(t);
  else
    c_54 = t;
  t = not_null(d_54);
  t = dbg_0_1(not_null(c_54), t);
  {
    ATerm v_27 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_54 = NULL,f_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), not_null(y_53));
        t = xtc_targ_thread_map_1_2(_fail, not_null(a_92), not_null(b_92), t);
        if(((f_54 != NULL) && (f_54 != t)))
          _fail(t);
        else
          f_54 = t;
        t = term_x_28;
        if(((e_54 != NULL) && (e_54 != t)))
          _fail(t);
        else
          e_54 = t;
        t = not_null(f_54);
        t = dbg_0_1(not_null(e_54), t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = v_27;
        {
          ATerm g_54 = NULL,h_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_53), not_null(y_53));
          t = xtc_targ_thread_map_1_2(_fail, not_null(a_92), not_null(b_92), t);
          if(((h_54 != NULL) && (h_54 != t)))
            _fail(t);
          else
            h_54 = t;
          t = term_g_29;
          if(((g_54 != NULL) && (g_54 != t)))
            _fail(t);
          else
            g_54 = t;
          t = not_null(h_54);
          t = dbg_0_1(not_null(g_54), t);
        }
      }
  }
  t = _2_0(concat_0_0, c_3, t);
  if(match_cons(t, sym__2))
    {
      if(((z_53 != NULL) && (z_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_53 = ATgetArgument(t, 0);
      if(((a_54 != NULL) && (a_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_53), not_null(a_54));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm l_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if(((ATgetType(t_29) != AT_LIST) || !(ATisEmpty(t_29))))
        _fail(t);
      if(((l_54 != NULL) && (l_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_54));
  return(t);
}
ATerm Cons_T_2_0 (ATerm l_1 (ATerm), ATerm o_1 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
        {
          if(((q_54 != NULL) && (q_54 != ATgetFirst((ATermList) u_29))))
            _fail(ATgetFirst((ATermList) u_29));
          else
            q_54 = ATgetFirst((ATermList) u_29);
          if(((r_54 != NULL) && (r_54 != (ATerm) ATgetNext((ATermList) u_29))))
            _fail((ATerm) ATgetNext((ATermList) u_29));
          else
            r_54 = (ATerm) ATgetNext((ATermList) u_29);
        }
      else
        _fail(t);
      if(((m_54 != NULL) && (m_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_54 != NULL) && (u_54 != t)))
    _fail(t);
  else
    u_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_54), not_null(m_54));
  t = l_1(t);
  if(match_cons(t, sym__2))
    {
      if(((s_54 != NULL) && (s_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_54 = ATgetArgument(t, 0);
      if(((n_54 != NULL) && (n_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_54), not_null(n_54));
  t = o_1(t);
  if(match_cons(t, sym__2))
    {
      if(((t_54 != NULL) && (t_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_54 = ATgetArgument(t, 0);
      if(((o_54 != NULL) && (o_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_54)), not_null(s_54)), not_null(o_54));
  return(t);
}
ATerm thread_map_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  static ATerm v_54 (ATerm t);
  static ATerm v_54 (ATerm t)
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(u_130, v_54, t);
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = v_54(t);
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
ATerm xtc_targ_thread_map_1_2 (ATerm o_151 (ATerm), ATerm y_91, ATerm z_91, ATerm t)
{
  static ATerm d_3 (ATerm t);
  static ATerm d_3 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(y_91), not_null(z_91), t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        {
          ATerm v_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm e_3 (ATerm t);
              static ATerm e_3 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(y_91), not_null(z_91), t);
                return(t);
              }
              t = _2_0(e_3, f_3, t);
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
              {
                ATerm x_30 = t;
                int y_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(y_30);
                  }
                else
                  {
                    t = x_30;
                    t = o_151(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(d_3, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm y_54 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      ATerm a_31 = ATgetArgument(t, 1);
      ATerm h_32 = ATgetArgument(t, 2);
      if(((y_54 != NULL) && (y_54 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        y_54 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(y_54);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL;
  if(((l_55 != NULL) && (l_55 != t)))
    _fail(t);
  else
    l_55 = t;
  t = Snd_0_0(t);
  if(((k_55 != NULL) && (k_55 != t)))
    _fail(t);
  else
    k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_55));
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm m_55 = NULL;
  if(((m_55 != NULL) && (m_55 != t)))
    _fail(t);
  else
    m_55 = t;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
  if(((o_55 != NULL) && (o_55 != t)))
    _fail(t);
  else
    o_55 = t;
  t = Snd_0_0(t);
  if(((q_55 != NULL) && (q_55 != t)))
    _fail(t);
  else
    q_55 = t;
  t = term_j_32;
  if(((p_55 != NULL) && (p_55 != t)))
    _fail(t);
  else
    p_55 = t;
  t = not_null(q_55);
  t = err_0_1(not_null(p_55), t);
  t = not_null(o_55);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm r_32 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm s_32 = ATgetArgument(t, 0);
          if(!(match_cons(s_32, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_32;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm n_151 (ATerm), ATerm w_91, ATerm x_91, ATerm t)
{
  ATerm d_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
  if(((j_55 != NULL) && (j_55 != t)))
    _fail(t);
  else
    j_55 = t;
  if(((d_55 != NULL) && (d_55 != t)))
    _fail(t);
  else
    d_55 = t;
  t = not_null(j_55);
  if(((i_55 != NULL) && (i_55 != t)))
    _fail(t);
  else
    i_55 = t;
  t = not_null(x_91);
  t = xtc_conf_args_0_0(t);
  if(((h_55 != NULL) && (h_55 != t)))
    _fail(t);
  else
    h_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_55), not_null(h_55));
  t = xtc_targ_thread_map_1_2(g_3, not_null(w_91), not_null(x_91), t);
  t = _2_0(concat_0_0, n_3, t);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_55 = NULL;
        if(((n_55 != NULL) && (n_55 != t)))
          _fail(t);
        else
          n_55 = t;
        t = Snd_0_0(t);
        {
          ATerm v_32 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_32;
            }
        }
        t = not_null(n_55);
        LocalPopChoice(u_32);
        t = restore_2_0(n_151, o_3, t);
      }
    else
      {
        t = t_32;
        t = Fst_0_0(t);
        t = filter_1_0(p_3, t);
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm w_32 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm p_33 = ATgetArgument(t, 0);
          if(!(match_cons(p_33, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_32;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  if(((v_55 != NULL) && (v_55 != t)))
    _fail(t);
  else
    v_55 = t;
  if(((x_55 != NULL) && (x_55 != t)))
    _fail(t);
  else
    x_55 = t;
  t = filter_1_0(q_3, t);
  if(((w_55 != NULL) && (w_55 != t)))
    _fail(t);
  else
    w_55 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_55 = NULL;
        if(((y_55 != NULL) && (y_55 != t)))
          _fail(t);
        else
          y_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), not_null(w_55));
        {
          ATerm s_33 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_33;
            }
        }
        t = not_null(y_55);
        LocalPopChoice(r_33);
        {
          ATerm z_55 = NULL,g_56 = NULL;
          if(((g_56 != NULL) && (g_56 != t)))
            _fail(t);
          else
            g_56 = t;
          t = term_v_33;
          if(((z_55 != NULL) && (z_55 != t)))
            _fail(t);
          else
            z_55 = t;
          t = not_null(g_56);
          t = err_0_1(not_null(z_55), t);
        }
      }
    else
      {
        t = q_33;
        {
          ATerm h_56 = NULL;
          if(((h_56 != NULL) && (h_56 != t)))
            _fail(t);
          else
            h_56 = t;
        }
      }
  }
  t = not_null(w_55);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm d_1, ATerm f_1, ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL;
  if(((a_57 != NULL) && (a_57 != t)))
    _fail(t);
  else
    a_57 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((b_57 != NULL) && (b_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_57 = ATgetArgument(t, 0);
      if(((c_57 != NULL) && (c_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_57);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
      t = not_null(c_57);
      if(match_cons(t, sym_Some_1))
        {
          if(((d_57 != NULL) && (d_57 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(d_57);
      if(match_cons(t, sym_Layout_1))
        {
          if(((e_57 != NULL) && (e_57 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(e_57);
      if(((f_57 != NULL) && (f_57 != t)))
        _fail(t);
      else
        f_57 = t;
      t = not_null(a_57);
      if(((h_57 != NULL) && (h_57 != t)))
        _fail(t);
      else
        h_57 = t;
      t = not_null(f_57);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(d_1), not_null(f_1), t);
      if(((g_57 != NULL) && (g_57 != t)))
        _fail(t);
      else
        g_57 = t;
    }
  else
    {
      ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(c_57);
      if(match_cons(t, sym_Some_1))
        {
          if(((d_57 != NULL) && (d_57 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(d_57);
      if(match_cons(t, sym_Layout_1))
        {
          if(((e_57 != NULL) && (e_57 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(e_57);
      if(((i_57 != NULL) && (i_57 != t)))
        _fail(t);
      else
        i_57 = t;
      t = not_null(a_57);
      if(((k_57 != NULL) && (k_57 != t)))
        _fail(t);
      else
        k_57 = t;
      t = not_null(i_57);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(d_1), not_null(f_1), t);
      if(((j_57 != NULL) && (j_57 != t)))
        _fail(t);
      else
        j_57 = t;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_57 = NULL;
  if(((q_57 != NULL) && (q_57 != t)))
    _fail(t);
  else
    q_57 = t;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm r_57 = NULL;
  if(((r_57 != NULL) && (r_57 != t)))
    _fail(t);
  else
    r_57 = t;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm s_57 = NULL;
  if(((s_57 != NULL) && (s_57 != t)))
    _fail(t);
  else
    s_57 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm q_92, ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  static ATerm u_3 (ATerm t);
  static ATerm u_3 (ATerm t)
  {
    t = not_null(o_57);
    t = xtc_template_to_args_0_2(not_null(p_57), not_null(q_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((p_57 != NULL) && (p_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_57 = ATgetArgument(t, 0);
      if(((o_57 != NULL) && (o_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_92);
  t = XtcConf_4_0(r_3, s_3, t_3, u_3, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  if(((i_58 != NULL) && (i_58 != t)))
    _fail(t);
  else
    i_58 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      j_58 = ATgetArgument(t, 0);
      k_58 = ATgetArgument(t, 1);
      l_58 = ATgetArgument(t, 2);
      m_58 = ATgetArgument(t, 3);
      t = not_null(l_58);
      if(match_cons(t, sym_Some_1))
        {
          g_58 = ATgetArgument(t, 0);
          {
            ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
            t = not_null(m_58);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(j_58);
            if(((n_58 != NULL) && (n_58 != t)))
              _fail(t);
            else
              n_58 = t;
            t = not_null(k_58);
            if(((o_58 != NULL) && (o_58 != t)))
              _fail(t);
            else
              o_58 = t;
            t = not_null(g_58);
            if(((p_58 != NULL) && (p_58 != t)))
              _fail(t);
            else
              p_58 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(n_58), not_null(o_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(p_58)), term_a_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(m_58);
          if(match_cons(t, sym_Some_1))
            {
              h_58 = ATgetArgument(t, 0);
              {
                ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
                t = not_null(j_58);
                if(((q_58 != NULL) && (q_58 != t)))
                  _fail(t);
                else
                  q_58 = t;
                t = not_null(k_58);
                if(((r_58 != NULL) && (r_58 != t)))
                  _fail(t);
                else
                  r_58 = t;
                t = not_null(h_58);
                if(((s_58 != NULL) && (s_58 != t)))
                  _fail(t);
                else
                  s_58 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(q_58), not_null(r_58), term_i_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(s_58)));
              }
            }
          else
            {
              ATerm t_58 = NULL,u_58 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(j_58);
              if(((t_58 != NULL) && (t_58 != t)))
                _fail(t);
              else
                t_58 = t;
              t = not_null(k_58);
              if(((u_58 != NULL) && (u_58 != t)))
                _fail(t);
              else
                u_58 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(t_58), not_null(u_58), term_i_34, term_a_34);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          j_58 = ATgetArgument(t, 0);
          k_58 = ATgetArgument(t, 1);
          l_58 = ATgetArgument(t, 2);
          m_58 = ATgetArgument(t, 3);
          t = not_null(l_58);
          if(match_cons(t, sym_Some_1))
            {
              g_58 = ATgetArgument(t, 0);
              {
                ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
                t = not_null(m_58);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(j_58);
                if(((v_58 != NULL) && (v_58 != t)))
                  _fail(t);
                else
                  v_58 = t;
                t = not_null(k_58);
                if(((w_58 != NULL) && (w_58 != t)))
                  _fail(t);
                else
                  w_58 = t;
                t = not_null(g_58);
                if(((x_58 != NULL) && (x_58 != t)))
                  _fail(t);
                else
                  x_58 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(v_58), not_null(w_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(x_58)), term_a_34);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(m_58);
              if(match_cons(t, sym_Some_1))
                {
                  h_58 = ATgetArgument(t, 0);
                  {
                    ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
                    t = not_null(j_58);
                    if(((y_58 != NULL) && (y_58 != t)))
                      _fail(t);
                    else
                      y_58 = t;
                    t = not_null(k_58);
                    if(((z_58 != NULL) && (z_58 != t)))
                      _fail(t);
                    else
                      z_58 = t;
                    t = not_null(h_58);
                    if(((a_59 != NULL) && (a_59 != t)))
                      _fail(t);
                    else
                      a_59 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(y_58), not_null(z_58), term_i_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(a_59)));
                  }
                }
              else
                {
                  ATerm b_59 = NULL,c_59 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(j_58);
                  if(((b_59 != NULL) && (b_59 != t)))
                    _fail(t);
                  else
                    b_59 = t;
                  t = not_null(k_58);
                  if(((c_59 != NULL) && (c_59 != t)))
                    _fail(t);
                  else
                    c_59 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(b_59), not_null(c_59), term_i_34, term_a_34);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              j_58 = ATgetArgument(t, 0);
              k_58 = ATgetArgument(t, 1);
              l_58 = ATgetArgument(t, 2);
              m_58 = ATgetArgument(t, 3);
              t = not_null(l_58);
              if(match_cons(t, sym_Some_1))
                {
                  g_58 = ATgetArgument(t, 0);
                  {
                    ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
                    t = not_null(m_58);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(j_58);
                    if(((d_59 != NULL) && (d_59 != t)))
                      _fail(t);
                    else
                      d_59 = t;
                    t = not_null(k_58);
                    if(((e_59 != NULL) && (e_59 != t)))
                      _fail(t);
                    else
                      e_59 = t;
                    t = not_null(g_58);
                    if(((f_59 != NULL) && (f_59 != t)))
                      _fail(t);
                    else
                      f_59 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(d_59), not_null(e_59), (ATerm)ATmakeAppl(sym_Some_1, not_null(f_59)), term_a_34);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(m_58);
                  if(match_cons(t, sym_Some_1))
                    {
                      h_58 = ATgetArgument(t, 0);
                      {
                        ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
                        t = not_null(j_58);
                        if(((g_59 != NULL) && (g_59 != t)))
                          _fail(t);
                        else
                          g_59 = t;
                        t = not_null(k_58);
                        if(((h_59 != NULL) && (h_59 != t)))
                          _fail(t);
                        else
                          h_59 = t;
                        t = not_null(h_58);
                        if(((i_59 != NULL) && (i_59 != t)))
                          _fail(t);
                        else
                          i_59 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(g_59), not_null(h_59), term_i_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(i_59)));
                      }
                    }
                  else
                    {
                      ATerm j_59 = NULL,k_59 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(j_58);
                      if(((j_59 != NULL) && (j_59 != t)))
                        _fail(t);
                      else
                        j_59 = t;
                      t = not_null(k_58);
                      if(((k_59 != NULL) && (k_59 != t)))
                        _fail(t);
                      else
                        k_59 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(j_59), not_null(k_59), term_i_34, term_a_34);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((j_58 != NULL) && (j_58 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_58 = ATgetArgument(t, 0);
                  if(((k_58 != NULL) && (k_58 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_58 = ATgetArgument(t, 1);
                  if(((l_58 != NULL) && (l_58 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    l_58 = ATgetArgument(t, 2);
                  if(((m_58 != NULL) && (m_58 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    m_58 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(l_58);
              if(match_cons(t, sym_Some_1))
                {
                  g_58 = ATgetArgument(t, 0);
                  {
                    ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
                    t = not_null(m_58);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(j_58);
                    if(((l_59 != NULL) && (l_59 != t)))
                      _fail(t);
                    else
                      l_59 = t;
                    t = not_null(k_58);
                    if(((m_59 != NULL) && (m_59 != t)))
                      _fail(t);
                    else
                      m_59 = t;
                    t = not_null(g_58);
                    if(((n_59 != NULL) && (n_59 != t)))
                      _fail(t);
                    else
                      n_59 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(l_59), not_null(m_59), (ATerm)ATmakeAppl(sym_Some_1, not_null(n_59)), term_a_34);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(m_58);
                  if(match_cons(t, sym_Some_1))
                    {
                      h_58 = ATgetArgument(t, 0);
                      {
                        ATerm o_59 = NULL,a_60 = NULL,b_60 = NULL;
                        t = not_null(j_58);
                        if(((o_59 != NULL) && (o_59 != t)))
                          _fail(t);
                        else
                          o_59 = t;
                        t = not_null(k_58);
                        if(((a_60 != NULL) && (a_60 != t)))
                          _fail(t);
                        else
                          a_60 = t;
                        t = not_null(h_58);
                        if(((b_60 != NULL) && (b_60 != t)))
                          _fail(t);
                        else
                          b_60 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(o_59), not_null(a_60), term_i_34, (ATerm) ATmakeAppl(sym_Some_1, not_null(b_60)));
                      }
                    }
                  else
                    {
                      ATerm c_60 = NULL,d_60 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(j_58);
                      if(((c_60 != NULL) && (c_60 != t)))
                        _fail(t);
                      else
                        c_60 = t;
                      t = not_null(k_58);
                      if(((d_60 != NULL) && (d_60 != t)))
                        _fail(t);
                      else
                        d_60 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(c_60), not_null(d_60), term_i_34, term_a_34);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  if(((l_60 != NULL) && (l_60 != t)))
    _fail(t);
  else
    l_60 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((m_60 != NULL) && (m_60 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_60 = ATgetArgument(t, 0);
      if(((n_60 != NULL) && (n_60 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_60);
  if(match_cons(t, sym_Some_1))
    {
      j_60 = ATgetArgument(t, 0);
      {
        ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
        t = not_null(m_60);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(j_60);
        if(match_cons(t, sym_Layout_1))
          {
            if(((k_60 != NULL) && (k_60 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              k_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(k_60);
        if(((o_60 != NULL) && (o_60 != t)))
          _fail(t);
        else
          o_60 = t;
        t = not_null(l_60);
        if(((q_60 != NULL) && (q_60 != t)))
          _fail(t);
        else
          q_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_27), term_s_34), term_q_34), term_k_34), not_null(o_60));
        t = union_0_0(t);
        if(((p_60 != NULL) && (p_60 != t)))
          _fail(t);
        else
          p_60 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_t_34, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(p_60))));
      }
    }
  else
    {
      ATerm r_60 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(m_60);
      if(((r_60 != NULL) && (r_60 != t)))
        _fail(t);
      else
        r_60 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(r_60), term_v_34);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if(!(match_cons(w_34, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_g_35;
  return(t);
}
ATerm bottomup_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  static ATerm v_3 (ATerm t);
  static ATerm v_3 (ATerm t)
  {
    t = bottomup_1_0(w_116, t);
    return(t);
  }
  t = SRTS_all(v_3, t);
  t = w_116(t);
  return(t);
}
ATerm innermost_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  static ATerm w_3 (ATerm t);
  static ATerm w_3 (ATerm t)
  {
    static ATerm x_3 (ATerm t);
    static ATerm x_3 (ATerm t)
    {
      t = b_121(t);
      t = innermost_1_0(b_121, t);
      return(t);
    }
    t = try_1_0(x_3, t);
    return(t);
  }
  t = bottomup_1_0(w_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        ATerm l_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(m_35);
          }
        else
          {
            t = l_35;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(y_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm t_60 = NULL;
  if(((t_60 != NULL) && (t_60 != t)))
    _fail(t);
  else
    t_60 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm v_123 (ATerm), ATerm t)
{
  static ATerm u_60 (ATerm t);
  static ATerm u_60 (ATerm t)
  {
    ATerm c_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_3, u_60, t);
        LocalPopChoice(g_37);
      }
    else
      {
        t = c_37;
        t = Nil_0_0(t);
        t = v_123(t);
      }
    return(t);
  }
  t = u_60(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
        if(((w_60 != NULL) && (w_60 != t)))
          _fail(t);
        else
          w_60 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_60 != NULL) && (x_60 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_60 = ATgetFirst((ATermList) t);
            if(((y_60 != NULL) && (y_60 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              y_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(x_60);
        if(((z_60 != NULL) && (z_60 != t)))
          _fail(t);
        else
          z_60 = t;
        t = not_null(y_60);
        if(((a_61 != NULL) && (a_61 != t)))
          _fail(t);
        else
          a_61 = t;
        t = not_null(w_60);
        if(((c_61 != NULL) && (c_61 != t)))
          _fail(t);
        else
          c_61 = t;
        t = not_null(z_60);
        {
          static ATerm a_4 (ATerm t);
          static ATerm a_4 (ATerm t)
          {
            t = not_null(a_61);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_4, t);
        }
        if(((b_61 != NULL) && (b_61 != t)))
          _fail(t);
        else
          b_61 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm u_64 (ATerm s_61, ATerm t_61, ATerm u_61, ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
  t = not_null(s_61);
  if(((v_61 != NULL) && (v_61 != t)))
    _fail(t);
  else
    v_61 = t;
  t = not_null(t_61);
  if(((w_61 != NULL) && (w_61 != t)))
    _fail(t);
  else
    w_61 = t;
  t = not_null(u_61);
  if(((y_61 != NULL) && (y_61 != t)))
    _fail(t);
  else
    y_61 = t;
  t = not_null(v_61);
  t = is_string_0_0(t);
  t = not_null(w_61);
  {
    ATerm j_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(b_4, t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = j_37;
        t = XtcQuery_2_0(c_4, d_4, t);
      }
  }
  {
    ATerm r_37 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_62 = NULL;
        if(((c_62 != NULL) && (c_62 != t)))
          _fail(t);
        else
          c_62 = t;
        t = xtc_find_0_0(t);
        if(((x_61 != NULL) && (x_61 != t)))
          _fail(t);
        else
          x_61 = t;
        t = not_null(c_62);
        LocalPopChoice(h_38);
        {
          ATerm d_62 = NULL,e_62 = NULL;
          if(((e_62 != NULL) && (e_62 != t)))
            _fail(t);
          else
            e_62 = t;
          t = term_y_38;
          if(((d_62 != NULL) && (d_62 != t)))
            _fail(t);
          else
            d_62 = t;
          t = not_null(e_62);
          t = dbg_0_1(not_null(d_62), t);
        }
      }
    else
      {
        t = r_37;
        {
          ATerm f_62 = NULL,g_62 = NULL;
          if(((g_62 != NULL) && (g_62 != t)))
            _fail(t);
          else
            g_62 = t;
          t = term_q_39;
          if(((f_62 != NULL) && (f_62 != t)))
            _fail(t);
          else
            f_62 = t;
          t = not_null(g_62);
          t = err_0_1(not_null(f_62), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(v_61)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(x_61)))));
  return(t);
}
static ATerm v_64 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL;
  t = not_null(h_62);
  if(((j_62 != NULL) && (j_62 != t)))
    _fail(t);
  else
    j_62 = t;
  t = not_null(i_62);
  if(((l_62 != NULL) && (l_62 != t)))
    _fail(t);
  else
    l_62 = t;
  t = not_null(j_62);
  {
    ATerm r_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(e_4, t);
        LocalPopChoice(v_39);
      }
    else
      {
        t = r_39;
        t = XtcQuery_2_0(f_4, g_4, t);
      }
  }
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_62 = NULL;
        if(((p_62 != NULL) && (p_62 != t)))
          _fail(t);
        else
          p_62 = t;
        t = xtc_find_0_0(t);
        if(((k_62 != NULL) && (k_62 != t)))
          _fail(t);
        else
          k_62 = t;
        t = not_null(p_62);
        LocalPopChoice(x_39);
        {
          ATerm q_62 = NULL,r_62 = NULL;
          if(((r_62 != NULL) && (r_62 != t)))
            _fail(t);
          else
            r_62 = t;
          t = term_y_38;
          if(((q_62 != NULL) && (q_62 != t)))
            _fail(t);
          else
            q_62 = t;
          t = not_null(r_62);
          t = dbg_0_1(not_null(q_62), t);
        }
      }
    else
      {
        t = w_39;
        {
          ATerm s_62 = NULL,t_62 = NULL;
          if(((t_62 != NULL) && (t_62 != t)))
            _fail(t);
          else
            t_62 = t;
          t = term_q_39;
          if(((s_62 != NULL) && (s_62 != t)))
            _fail(t);
          else
            s_62 = t;
          t = not_null(t_62);
          t = err_0_1(not_null(s_62), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(k_62)))));
  return(t);
}
static ATerm w_64 (ATerm u_62, ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  t = not_null(u_62);
  if(((v_62 != NULL) && (v_62 != t)))
    _fail(t);
  else
    v_62 = t;
  t = not_null(u_62);
  if(((x_62 != NULL) && (x_62 != t)))
    _fail(t);
  else
    x_62 = t;
  t = not_null(v_62);
  if(match_cons(t, sym_URL_1))
    {
      if(((y_62 != NULL) && (y_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(y_62);
  if(((w_62 != NULL) && (w_62 != t)))
    _fail(t);
  else
    w_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(w_62)))));
  return(t);
}
static ATerm x_64 (ATerm z_62, ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
  t = not_null(z_62);
  if(((a_63 != NULL) && (a_63 != t)))
    _fail(t);
  else
    a_63 = t;
  t = not_null(z_62);
  if(((c_63 != NULL) && (c_63 != t)))
    _fail(t);
  else
    c_63 = t;
  t = not_null(a_63);
  if(match_cons(t, sym_FILE_1))
    {
      if(((d_63 != NULL) && (d_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_63);
  if(((b_63 != NULL) && (b_63 != t)))
    _fail(t);
  else
    b_63 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(b_63)))));
  return(t);
}
static ATerm y_64 (ATerm e_63, ATerm f_63, ATerm g_63, ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,m_63 = NULL;
  t = not_null(e_63);
  if(((h_63 != NULL) && (h_63 != t)))
    _fail(t);
  else
    h_63 = t;
  t = not_null(f_63);
  if(((i_63 != NULL) && (i_63 != t)))
    _fail(t);
  else
    i_63 = t;
  t = not_null(g_63);
  if(((k_63 != NULL) && (k_63 != t)))
    _fail(t);
  else
    k_63 = t;
  t = not_null(h_63);
  t = is_string_0_0(t);
  t = not_null(i_63);
  if(match_cons(t, sym_URL_1))
    {
      if(((m_63 != NULL) && (m_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(m_63);
  if(((j_63 != NULL) && (j_63 != t)))
    _fail(t);
  else
    j_63 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(h_63)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(j_63)))));
  return(t);
}
static ATerm z_64 (ATerm n_63, ATerm o_63, ATerm p_63, ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
  t = not_null(n_63);
  if(((q_63 != NULL) && (q_63 != t)))
    _fail(t);
  else
    q_63 = t;
  t = not_null(o_63);
  if(((r_63 != NULL) && (r_63 != t)))
    _fail(t);
  else
    r_63 = t;
  t = not_null(p_63);
  if(((t_63 != NULL) && (t_63 != t)))
    _fail(t);
  else
    t_63 = t;
  t = not_null(q_63);
  t = is_string_0_0(t);
  t = not_null(r_63);
  if(match_cons(t, sym_FILE_1))
    {
      if(((u_63 != NULL) && (u_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(u_63);
  if(((s_63 != NULL) && (s_63 != t)))
    _fail(t);
  else
    s_63 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(q_63)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_63)))));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_61 = NULL;
  if(((z_61 != NULL) && (z_61 != t)))
    _fail(t);
  else
    z_61 = t;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm a_62 = NULL;
  if(((a_62 != NULL) && (a_62 != t)))
    _fail(t);
  else
    a_62 = t;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm b_62 = NULL;
  if(((b_62 != NULL) && (b_62 != t)))
    _fail(t);
  else
    b_62 = t;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm m_62 = NULL;
  if(((m_62 != NULL) && (m_62 != t)))
    _fail(t);
  else
    m_62 = t;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm n_62 = NULL;
  if(((n_62 != NULL) && (n_62 != t)))
    _fail(t);
  else
    n_62 = t;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_62 = NULL;
  if(((o_62 != NULL) && (o_62 != t)))
    _fail(t);
  else
    o_62 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  if(((w_63 != NULL) && (w_63 != t)))
    _fail(t);
  else
    w_63 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      x_63 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
      t = not_null(x_63);
      if(match_cons(t, sym_String_1))
        {
          v_63 = ATgetArgument(t, 0);
          {
            ATerm y_39 = t;
            int z_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_64(not_null(v_63), not_null(y_63), not_null(w_63), t);
                LocalPopChoice(z_39);
              }
            else
              {
                t = y_39;
                {
                  ATerm a_40 = t;
                  int b_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_64(not_null(w_63), t);
                      LocalPopChoice(b_40);
                    }
                  else
                    {
                      t = a_40;
                      {
                        ATerm c_40 = t;
                        int d_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_64(not_null(w_63), t);
                            LocalPopChoice(d_40);
                          }
                        else
                          {
                            t = c_40;
                            {
                              ATerm z_63 = NULL,a_64 = NULL;
                              t = not_null(w_63);
                              if(((z_63 != NULL) && (z_63 != t)))
                                _fail(t);
                              else
                                z_63 = t;
                              t = not_null(w_63);
                              if(((a_64 != NULL) && (a_64 != t)))
                                _fail(t);
                              else
                                a_64 = t;
                              t = not_null(z_63);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(z_63))));
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
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_64(not_null(w_63), t);
              LocalPopChoice(z_40);
            }
          else
            {
              t = y_40;
              {
                ATerm a_41 = t;
                int b_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_64(not_null(w_63), t);
                    LocalPopChoice(b_41);
                  }
                else
                  {
                    t = a_41;
                    {
                      ATerm b_64 = NULL,c_64 = NULL;
                      t = not_null(w_63);
                      if(((b_64 != NULL) && (b_64 != t)))
                        _fail(t);
                      else
                        b_64 = t;
                      t = not_null(w_63);
                      if(((c_64 != NULL) && (c_64 != t)))
                        _fail(t);
                      else
                        c_64 = t;
                      t = not_null(b_64);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(b_64))));
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
          x_63 = ATgetArgument(t, 0);
          {
            ATerm g_41 = t;
            int h_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_64(not_null(x_63), not_null(w_63), t);
                LocalPopChoice(h_41);
              }
            else
              {
                t = g_41;
                {
                  ATerm i_41 = t;
                  int j_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_64(not_null(w_63), t);
                      LocalPopChoice(j_41);
                    }
                  else
                    {
                      t = i_41;
                      {
                        ATerm k_41 = t;
                        int l_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_64(not_null(w_63), t);
                            LocalPopChoice(l_41);
                          }
                        else
                          {
                            t = k_41;
                            {
                              ATerm d_64 = NULL,e_64 = NULL;
                              t = not_null(w_63);
                              if(((d_64 != NULL) && (d_64 != t)))
                                _fail(t);
                              else
                                d_64 = t;
                              t = not_null(w_63);
                              if(((e_64 != NULL) && (e_64 != t)))
                                _fail(t);
                              else
                                e_64 = t;
                              t = not_null(d_64);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(d_64))));
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
              x_63 = ATgetArgument(t, 0);
              y_63 = ATgetArgument(t, 1);
              {
                ATerm m_41 = t;
                int q_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_64(not_null(w_63), t);
                    LocalPopChoice(q_41);
                  }
                else
                  {
                    t = m_41;
                    {
                      ATerm r_41 = t;
                      int s_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_64(not_null(w_63), t);
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
                                ATerm f_64 = NULL,g_64 = NULL;
                                t = not_null(w_63);
                                if(((f_64 != NULL) && (f_64 != t)))
                                  _fail(t);
                                else
                                  f_64 = t;
                                t = not_null(w_63);
                                if(((g_64 != NULL) && (g_64 != t)))
                                  _fail(t);
                                else
                                  g_64 = t;
                                t = not_null(f_64);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(f_64))));
                                LocalPopChoice(u_41);
                              }
                            else
                              {
                                t = t_41;
                                {
                                  ATerm v_41 = t;
                                  int w_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_64(not_null(x_63), not_null(y_63), not_null(w_63), t);
                                      LocalPopChoice(w_41);
                                    }
                                  else
                                    {
                                      t = v_41;
                                      {
                                        ATerm x_41 = t;
                                        int y_41 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_64(not_null(x_63), not_null(y_63), not_null(w_63), t);
                                            LocalPopChoice(y_41);
                                          }
                                        else
                                          {
                                            t = x_41;
                                            {
                                              ATerm z_41 = t;
                                              int a_42 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
                                                  t = not_null(x_63);
                                                  if(((h_64 != NULL) && (h_64 != t)))
                                                    _fail(t);
                                                  else
                                                    h_64 = t;
                                                  t = not_null(y_63);
                                                  if(((i_64 != NULL) && (i_64 != t)))
                                                    _fail(t);
                                                  else
                                                    i_64 = t;
                                                  t = not_null(w_63);
                                                  if(((j_64 != NULL) && (j_64 != t)))
                                                    _fail(t);
                                                  else
                                                    j_64 = t;
                                                  t = not_null(h_64);
                                                  t = is_string_0_0(t);
                                                  t = not_null(i_64);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(h_64)), (ATerm) ATmakeAppl(sym_String_1, not_null(i_64))));
                                                  LocalPopChoice(a_42);
                                                }
                                              else
                                                {
                                                  t = z_41;
                                                  {
                                                    ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
                                                    t = not_null(x_63);
                                                    if(((l_64 != NULL) && (l_64 != t)))
                                                      _fail(t);
                                                    else
                                                      l_64 = t;
                                                    t = not_null(y_63);
                                                    if(((k_64 != NULL) && (k_64 != t)))
                                                      _fail(t);
                                                    else
                                                      k_64 = t;
                                                    t = not_null(w_63);
                                                    if(((n_64 != NULL) && (n_64 != t)))
                                                      _fail(t);
                                                    else
                                                      n_64 = t;
                                                    t = not_null(l_64);
                                                    t = is_string_0_0(t);
                                                    t = not_null(k_64);
                                                    {
                                                      static ATerm h_4 (ATerm t);
                                                      static ATerm h_4 (ATerm t)
                                                      {
                                                        ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
                                                        if(((p_64 != NULL) && (p_64 != t)))
                                                          _fail(t);
                                                        else
                                                          p_64 = t;
                                                        if(((r_64 != NULL) && (r_64 != t)))
                                                          _fail(t);
                                                        else
                                                          r_64 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_64), not_null(p_64));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((q_64 != NULL) && (q_64 != t)))
                                                          _fail(t);
                                                        else
                                                          q_64 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(h_4, t);
                                                    }
                                                    if(((m_64 != NULL) && (m_64 != t)))
                                                      _fail(t);
                                                    else
                                                      m_64 = t;
                                                  }
                                                }
                                            }
                                          }
                                      }
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
              ATerm b_42 = t;
              int c_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_64(not_null(w_63), t);
                  LocalPopChoice(c_42);
                }
              else
                {
                  t = b_42;
                  {
                    ATerm d_42 = t;
                    int e_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = x_64(not_null(w_63), t);
                        LocalPopChoice(e_42);
                      }
                    else
                      {
                        t = d_42;
                        {
                          ATerm s_64 = NULL,t_64 = NULL;
                          t = not_null(w_63);
                          if(((s_64 != NULL) && (s_64 != t)))
                            _fail(t);
                          else
                            s_64 = t;
                          t = not_null(w_63);
                          if(((t_64 != NULL) && (t_64 != t)))
                            _fail(t);
                          else
                            t_64 = t;
                          t = not_null(s_64);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_64))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(g_42);
    }
  else
    {
      t = f_42;
      {
        ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
        if(((r_65 != NULL) && (r_65 != t)))
          _fail(t);
        else
          r_65 = t;
        if(((t_65 != NULL) && (t_65 != t)))
          _fail(t);
        else
          t_65 = t;
        t = not_null(r_65);
        if(((s_65 != NULL) && (s_65 != t)))
          _fail(t);
        else
          s_65 = t;
        t = (ATerm) ATinsert(ATempty, not_null(s_65));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
  static ATerm z_65 (ATerm t);
  static ATerm z_65 (ATerm t)
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((a_65 != NULL) && (a_65 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              a_65 = ATgetFirst((ATermList) t);
            {
              ATerm j_42 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(j_42) == AT_LIST) && !(ATisEmpty(j_42))))
                {
                  if(((b_65 != NULL) && (b_65 != ATgetFirst((ATermList) j_42))))
                    _fail(ATgetFirst((ATermList) j_42));
                  else
                    b_65 = ATgetFirst((ATermList) j_42);
                  if(((c_65 != NULL) && (c_65 != (ATerm) ATgetNext((ATermList) j_42))))
                    _fail((ATerm) ATgetNext((ATermList) j_42));
                  else
                    c_65 = (ATerm) ATgetNext((ATermList) j_42);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_42);
        {
          ATerm k_42 = t;
          int l_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_65 = NULL;
              if(((d_65 != NULL) && (d_65 != t)))
                _fail(t);
              else
                d_65 = t;
              t = not_null(a_65);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(d_65);
              LocalPopChoice(l_42);
              {
                ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
                if(((h_65 != NULL) && (h_65 != t)))
                  _fail(t);
                else
                  h_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_65), not_null(b_65));
                if(((j_65 != NULL) && (j_65 != t)))
                  _fail(t);
                else
                  j_65 = t;
                t = term_m_42;
                if(((i_65 != NULL) && (i_65 != t)))
                  _fail(t);
                else
                  i_65 = t;
                t = not_null(j_65);
                t = dbg_0_1(not_null(i_65), t);
                t = xtc_desugar_arg_0_0(t);
                if(((e_65 != NULL) && (e_65 != t)))
                  _fail(t);
                else
                  e_65 = t;
                t = not_null(h_65);
                if(((g_65 != NULL) && (g_65 != t)))
                  _fail(t);
                else
                  g_65 = t;
                t = not_null(c_65);
                t = z_65(t);
                if(((f_65 != NULL) && (f_65 != t)))
                  _fail(t);
                else
                  f_65 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(f_65)), not_null(e_65));
              }
            }
          else
            {
              t = k_42;
              {
                ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL;
                if(((n_65 != NULL) && (n_65 != t)))
                  _fail(t);
                else
                  n_65 = t;
                t = not_null(a_65);
                {
                  ATerm n_42 = t;
                  int o_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(o_42);
                    }
                  else
                    {
                      t = n_42;
                      {
                        ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
                        if(((o_65 != NULL) && (o_65 != t)))
                          _fail(t);
                        else
                          o_65 = t;
                        if(((q_65 != NULL) && (q_65 != t)))
                          _fail(t);
                        else
                          q_65 = t;
                        t = not_null(o_65);
                        if(((p_65 != NULL) && (p_65 != t)))
                          _fail(t);
                        else
                          p_65 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(p_65));
                      }
                    }
                }
                if(((k_65 != NULL) && (k_65 != t)))
                  _fail(t);
                else
                  k_65 = t;
                t = not_null(n_65);
                if(((m_65 != NULL) && (m_65 != t)))
                  _fail(t);
                else
                  m_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(b_65)), not_null(c_65));
                t = conc_0_0(t);
                t = z_65(t);
                if(((l_65 != NULL) && (l_65 != t)))
                  _fail(t);
                else
                  l_65 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(l_65)), not_null(k_65));
              }
            }
        }
      }
    else
      {
        t = h_42;
        {
          ATerm p_42 = t;
          int q_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(i_4, z_65, t);
              LocalPopChoice(q_42);
            }
          else
            {
              t = p_42;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = z_65(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm f_66 = NULL;
  if(((f_66 != NULL) && (f_66 != t)))
    _fail(t);
  else
    f_66 = t;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm g_66 = NULL;
  if(((g_66 != NULL) && (g_66 != t)))
    _fail(t);
  else
    g_66 = t;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm h_66 = NULL;
  if(((h_66 != NULL) && (h_66 != t)))
    _fail(t);
  else
    h_66 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(j_4, k_4, l_4, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm s_66 = NULL;
  if(((s_66 != NULL) && (s_66 != t)))
    _fail(t);
  else
    s_66 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, m_4, t);
  if(match_cons(t, sym__2))
    {
      if(((k_66 != NULL) && (k_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_66 = ATgetArgument(t, 0);
      if(((l_66 != NULL) && (l_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((r_66 != NULL) && (r_66 != t)))
    _fail(t);
  else
    r_66 = t;
  t = term_r_42;
  if(((q_66 != NULL) && (q_66 != t)))
    _fail(t);
  else
    q_66 = t;
  t = not_null(r_66);
  t = xtc_fetch_meta_0_1(not_null(q_66), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm s_42 = ATgetArgument(t, 0);
      if(match_cons(s_42, sym_XtcDesc_1))
        {
          if(((m_66 != NULL) && (m_66 != ATgetArgument(s_42, 0))))
            _fail(ATgetArgument(s_42, 0));
          else
            m_66 = ATgetArgument(s_42, 0);
        }
      else
        _fail(t);
      {
        ATerm t_42 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(k_66), t);
  if(((n_66 != NULL) && (n_66 != t)))
    _fail(t);
  else
    n_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_66), not_null(n_66), not_null(l_66));
  t = xtc_prepare_0_0(t);
  if(((p_66 != NULL) && (p_66 != t)))
    _fail(t);
  else
    p_66 = t;
  if(((o_66 != NULL) && (o_66 != t)))
    _fail(t);
  else
    o_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_66), not_null(n_66), not_null(o_66));
  return(t);
}
ATerm mapconcat_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, r_130, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm f_80, ATerm t)
{
  static ATerm n_4 (ATerm t);
  static ATerm n_4 (ATerm t)
  {
    ATerm u_66 = NULL;
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_67 (ATerm v_66, ATerm t);
        static ATerm g_67 (ATerm v_66, ATerm t)
        {
          ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL;
          t = not_null(v_66);
          if(((z_66 != NULL) && (z_66 != t)))
            _fail(t);
          else
            z_66 = t;
          t = not_null(v_66);
          if(((a_67 != NULL) && (a_67 != t)))
            _fail(t);
          else
            a_67 = t;
          t = not_null(z_66);
          if(((b_67 != NULL) && (b_67 != t)))
            _fail(t);
          else
            b_67 = t;
          t = SSL_explode_term(not_null(b_67));
          if(match_cons(t, sym__2))
            {
              if(((u_66 != NULL) && (u_66 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_66 = ATgetArgument(t, 0);
              {
                ATerm w_42 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(a_67);
          if(((y_66 != NULL) && (y_66 != t)))
            _fail(t);
          else
            y_66 = t;
          t = not_null(f_80);
          {
            ATerm x_42 = t;
            if((PushChoice() == 0))
              {
                static ATerm o_4 (ATerm t);
                static ATerm o_4 (ATerm t)
                {
                  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
                  if(((c_67 != NULL) && (c_67 != t)))
                    _fail(t);
                  else
                    c_67 = t;
                  if(((d_67 != NULL) && (d_67 != t)))
                    _fail(t);
                  else
                    d_67 = t;
                  t = not_null(c_67);
                  if(((e_67 != NULL) && (e_67 != t)))
                    _fail(t);
                  else
                    e_67 = t;
                  t = SSL_explode_term(not_null(e_67));
                  if(match_cons(t, sym__2))
                    {
                      if(((u_66 != NULL) && (u_66 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_66 = ATgetArgument(t, 0);
                      {
                        ATerm y_42 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(d_67);
                  return(t);
                }
                t = SRTS_one(o_4, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_42;
              }
          }
          t = not_null(y_66);
          if(((x_66 != NULL) && (x_66 != t)))
            _fail(t);
          else
            x_66 = t;
          if(((w_66 != NULL) && (w_66 != t)))
            _fail(t);
          else
            w_66 = t;
          t = (ATerm) ATinsert(ATempty, not_null(w_66));
          return(t);
        }
        ATerm f_67 = NULL;
        if(((f_67 != NULL) && (f_67 != t)))
          _fail(t);
        else
          f_67 = t;
        t = g_67(not_null(f_67), t);
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(n_4, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm d_80, ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_67 != NULL) && (h_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_67 = ATgetArgument(t, 0);
      if(((m_67 != NULL) && (m_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_67);
  t = xtc_filter_meta_0_1(not_null(d_80), t);
  if(((j_67 != NULL) && (j_67 != t)))
    _fail(t);
  else
    j_67 = t;
  if(((l_67 != NULL) && (l_67 != t)))
    _fail(t);
  else
    l_67 = t;
  if(((k_67 != NULL) && (k_67 != t)))
    _fail(t);
  else
    k_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_67), not_null(d_80));
  t = union_0_0(t);
  if(((i_67 != NULL) && (i_67 != t)))
    _fail(t);
  else
    i_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_67), not_null(i_67));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm f_87, ATerm g_87, ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_42 = ATgetArgument(t, 0);
      if(match_cons(z_42, sym_XtcConf_4))
        {
          if(((n_67 != NULL) && (n_67 != ATgetArgument(z_42, 0))))
            _fail(ATgetArgument(z_42, 0));
          else
            n_67 = ATgetArgument(z_42, 0);
          if(((o_67 != NULL) && (o_67 != ATgetArgument(z_42, 1))))
            _fail(ATgetArgument(z_42, 1));
          else
            o_67 = ATgetArgument(z_42, 1);
          if(((p_67 != NULL) && (p_67 != ATgetArgument(z_42, 2))))
            _fail(ATgetArgument(z_42, 2));
          else
            p_67 = ATgetArgument(z_42, 2);
          if(((q_67 != NULL) && (q_67 != ATgetArgument(z_42, 3))))
            _fail(ATgetArgument(z_42, 3));
          else
            q_67 = ATgetArgument(z_42, 3);
        }
      else
        _fail(t);
      {
        ATerm a_43 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((u_67 != NULL) && (u_67 != t)))
    _fail(t);
  else
    u_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_87), not_null(q_67));
  t = conc_0_0(t);
  if(((r_67 != NULL) && (r_67 != t)))
    _fail(t);
  else
    r_67 = t;
  t = not_null(u_67);
  if(((t_67 != NULL) && (t_67 != t)))
    _fail(t);
  else
    t_67 = t;
  t = not_null(f_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((s_67 != NULL) && (s_67 != t)))
    _fail(t);
  else
    s_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(n_67), not_null(o_67), not_null(p_67), not_null(r_67)), not_null(s_67));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm j_68 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((j_68 != NULL) && (j_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(j_68);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm k_68 = NULL;
  if(((k_68 != NULL) && (k_68 != t)))
    _fail(t);
  else
    k_68 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym_XtcConf_4))
        {
          ATerm c_43 = ATgetArgument(b_43, 0);
          ATerm e_43 = ATgetArgument(b_43, 1);
          ATerm f_43 = ATgetArgument(b_43, 2);
          ATerm g_43 = ATgetArgument(b_43, 3);
        }
      else
        _fail(t);
      if(((w_67 != NULL) && (w_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_68 != NULL) && (g_68 != t)))
    _fail(t);
  else
    g_68 = t;
  t = not_null(w_67);
  if(((i_68 != NULL) && (i_68 != t)))
    _fail(t);
  else
    i_68 = t;
  t = term_h_43;
  if(((h_68 != NULL) && (h_68 != t)))
    _fail(t);
  else
    h_68 = t;
  t = not_null(i_68);
  t = xtc_fetch_meta_0_1(not_null(h_68), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((x_67 != NULL) && (x_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_67 = ATgetArgument(t, 0);
      {
        ATerm i_43 = ATgetArgument(t, 1);
        if(match_cons(i_43, sym_Some_1))
          {
            if(((y_67 != NULL) && (y_67 != ATgetArgument(i_43, 0))))
              _fail(ATgetArgument(i_43, 0));
            else
              y_67 = ATgetArgument(i_43, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(w_67);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm p_4 (ATerm t);
    static ATerm p_4 (ATerm t)
    {
      ATerm j_43 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((x_67 != NULL) && (x_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_67 = ATgetArgument(t, 0);
              {
                ATerm k_43 = ATgetArgument(t, 1);
                if(match_cons(k_43, sym_Some_1))
                  {
                    if(((y_67 != NULL) && (y_67 != ATgetArgument(k_43, 0))))
                      _fail(ATgetArgument(k_43, 0));
                    else
                      y_67 = ATgetArgument(k_43, 0);
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
          t = j_43;
        }
      return(t);
    }
    t = filter_1_0(p_4, t);
  }
  if(((z_67 != NULL) && (z_67 != t)))
    _fail(t);
  else
    z_67 = t;
  t = not_null(g_68);
  if(((d_68 != NULL) && (d_68 != t)))
    _fail(t);
  else
    d_68 = t;
  if(((f_68 != NULL) && (f_68 != t)))
    _fail(t);
  else
    f_68 = t;
  t = not_null(y_67);
  t = try_1_0(q_4, t);
  if(((e_68 != NULL) && (e_68 != t)))
    _fail(t);
  else
    e_68 = t;
  if(((c_68 != NULL) && (c_68 != t)))
    _fail(t);
  else
    c_68 = t;
  t = not_null(d_68);
  t = xtc_reconfigure_0_2(not_null(x_67), not_null(c_68), t);
  {
    static ATerm s_4 (ATerm t);
    static ATerm s_4 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(z_67), t);
      return(t);
    }
    t = _2_0(r_4, s_4, t);
  }
  if(((b_68 != NULL) && (b_68 != t)))
    _fail(t);
  else
    b_68 = t;
  t = term_l_43;
  if(((a_68 != NULL) && (a_68 != t)))
    _fail(t);
  else
    a_68 = t;
  t = not_null(b_68);
  t = dbg_0_1(not_null(a_68), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,t_4 = NULL,a_12 = NULL;
  if(((u_68 != NULL) && (u_68 != t)))
    _fail(t);
  else
    u_68 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((m_68 != NULL) && (m_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_68 = ATgetArgument(t, 0);
      if(((n_68 != NULL) && (n_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_68 = ATgetArgument(t, 1);
      if(((o_68 != NULL) && (o_68 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((v_68 != NULL) && (v_68 != t)))
    _fail(t);
  else
    v_68 = t;
  t = SSLgetAnnotations(not_null(u_68));
  if(((l_68 != NULL) && (l_68 != t)))
    _fail(t);
  else
    l_68 = t;
  t = not_null(m_68);
  t = j_109(t);
  if(((p_68 != NULL) && (p_68 != t)))
    _fail(t);
  else
    p_68 = t;
  t = not_null(n_68);
  t = k_109(t);
  if(((q_68 != NULL) && (q_68 != t)))
    _fail(t);
  else
    q_68 = t;
  t = not_null(o_68);
  t = l_109(t);
  if(((r_68 != NULL) && (r_68 != t)))
    _fail(t);
  else
    r_68 = t;
  if(((t_68 != NULL) && (t_68 != t)))
    _fail(t);
  else
    t_68 = t;
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(p_68), not_null(q_68), not_null(r_68));
  if(((t_4 != NULL) && (t_4 != t)))
    _fail(t);
  else
    t_4 = t;
  t = SSLsetAnnotations(not_null(t_4), not_null(l_68));
  if(((s_68 != NULL) && (s_68 != t)))
    _fail(t);
  else
    s_68 = t;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm g_81, ATerm t)
{
  ATerm w_68 = NULL;
  if(((w_68 != NULL) && (w_68 != t)))
    _fail(t);
  else
    w_68 = t;
  t = not_null(g_81);
  t = is_string_0_0(t);
  t = not_null(w_68);
  {
    static ATerm u_4 (ATerm t);
    static ATerm u_4 (ATerm t)
    {
      ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
      if(((x_68 != NULL) && (x_68 != t)))
        _fail(t);
      else
        x_68 = t;
      if(((y_68 != NULL) && (y_68 != t)))
        _fail(t);
      else
        y_68 = t;
      t = not_null(x_68);
      if(((z_68 != NULL) && (z_68 != t)))
        _fail(t);
      else
        z_68 = t;
      t = SSL_explode_term(not_null(z_68));
      if(match_cons(t, sym__2))
        {
          if(((g_81 != NULL) && (g_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_81 = ATgetArgument(t, 0);
          {
            ATerm o_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(y_68);
      return(t);
    }
    t = collect_all_1_0(u_4, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  if(((c_69 != NULL) && (c_69 != t)))
    _fail(t);
  else
    c_69 = t;
  t = term_f_46;
  if(((b_69 != NULL) && (b_69 != t)))
    _fail(t);
  else
    b_69 = t;
  t = not_null(c_69);
  t = xtc_fetch_meta_0_1(not_null(b_69), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((a_69 != NULL) && (a_69 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(a_69);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm m_69 = NULL;
  if(((m_69 != NULL) && (m_69 != t)))
    _fail(t);
  else
    m_69 = t;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm n_69 = NULL;
  if(((n_69 != NULL) && (n_69 != t)))
    _fail(t);
  else
    n_69 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm p_151 (ATerm), ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm v_4 (ATerm t);
    static ATerm v_4 (ATerm t)
    {
      static ATerm w_4 (ATerm t);
      static ATerm w_4 (ATerm t)
      {
        ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
        if(((h_69 != NULL) && (h_69 != t)))
          _fail(t);
        else
          h_69 = t;
        if(((l_69 != NULL) && (l_69 != t)))
          _fail(t);
        else
          l_69 = t;
        if(((i_69 != NULL) && (i_69 != t)))
          _fail(t);
        else
          i_69 = t;
        t = not_null(l_69);
        if(((k_69 != NULL) && (k_69 != t)))
          _fail(t);
        else
          k_69 = t;
        t = term_i_46;
        t = p_151(t);
        if(((j_69 != NULL) && (j_69 != t)))
          _fail(t);
        else
          j_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_69), not_null(j_69));
        t = eq_0_0(t);
        t = not_null(h_69);
        return(t);
      }
      t = XtcContract_3_0(w_4, x_4, y_4, t);
      return(t);
    }
    t = filter_1_0(v_4, t);
  }
  if(((g_69 != NULL) && (g_69 != t)))
    _fail(t);
  else
    g_69 = t;
  t = term_f_46;
  if(((f_69 != NULL) && (f_69 != t)))
    _fail(t);
  else
    f_69 = t;
  t = not_null(g_69);
  t = dbg_0_1(not_null(f_69), t);
  return(t);
}
ATerm warn_0_1 (ATerm x_78, ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  if(((t_69 != NULL) && (t_69 != t)))
    _fail(t);
  else
    t_69 = t;
  t = term_j_46;
  if(((o_69 != NULL) && (o_69 != t)))
    _fail(t);
  else
    o_69 = t;
  t = not_null(t_69);
  if(((q_69 != NULL) && (q_69 != t)))
    _fail(t);
  else
    q_69 = t;
  if(((s_69 != NULL) && (s_69 != t)))
    _fail(t);
  else
    s_69 = t;
  if(((r_69 != NULL) && (r_69 != t)))
    _fail(t);
  else
    r_69 = t;
  if(((p_69 != NULL) && (p_69 != t)))
    _fail(t);
  else
    p_69 = t;
  t = not_null(q_69);
  t = log_0_3(not_null(o_69), not_null(x_78), not_null(p_69), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm k_46 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_69 = NULL;
      if(((x_69 != NULL) && (x_69 != t)))
        _fail(t);
      else
        x_69 = t;
      t = term_q_12;
      t = get_config_0_0(t);
      t = not_null(x_69);
      LocalPopChoice(t_47);
      {
        ATerm y_69 = NULL,z_69 = NULL;
        if(((z_69 != NULL) && (z_69 != t)))
          _fail(t);
        else
          z_69 = t;
        t = term_u_47;
        if(((y_69 != NULL) && (y_69 != t)))
          _fail(t);
        else
          y_69 = t;
        t = not_null(z_69);
        t = err_0_1(not_null(y_69), t);
        _fail(t);
      }
    }
  else
    {
      t = k_46;
      {
        ATerm a_70 = NULL,b_70 = NULL;
        if(((b_70 != NULL) && (b_70 != t)))
          _fail(t);
        else
          b_70 = t;
        t = term_v_47;
        if(((a_70 != NULL) && (a_70 != t)))
          _fail(t);
        else
          a_70 = t;
        t = not_null(b_70);
        t = warn_0_1(not_null(a_70), t);
      }
    }
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm c_70 = NULL;
  if(((c_70 != NULL) && (c_70 != t)))
    _fail(t);
  else
    c_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_47, not_null(c_70));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm f_70 = NULL;
  if(((f_70 != NULL) && (f_70 != t)))
    _fail(t);
  else
    f_70 = t;
  t = term_y_47;
  t = set_config_0_0(t);
  t = not_null(f_70);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_70 = NULL;
      if(((d_70 != NULL) && (d_70 != t)))
        _fail(t);
      else
        d_70 = t;
      t = term_p_12;
      t = get_config_0_0(t);
      t = not_null(d_70);
      LocalPopChoice(a_48);
      {
        ATerm e_70 = NULL;
        if(((e_70 != NULL) && (e_70 != t)))
          _fail(t);
        else
          e_70 = t;
        t = term_p_12;
        t = rm_config_0_0(t);
        t = not_null(e_70);
        t = restore_always_2_0(t_151, z_4, t);
      }
    }
  else
    {
      t = z_47;
      t = t_151(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm e_48 = t;
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_70 = NULL,n_70 = NULL,o_70 = NULL;
      if(((j_70 != NULL) && (j_70 != t)))
        _fail(t);
      else
        j_70 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((n_70 != NULL) && (n_70 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_70);
      if(((o_70 != NULL) && (o_70 != t)))
        _fail(t);
      else
        o_70 = t;
      LocalPopChoice(o_48);
    }
  else
    {
      t = e_48;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm c_1 (ATerm), ATerm t)
{
  static ATerm c_73 (ATerm f_71, ATerm g_71, ATerm h_71, ATerm i_71, ATerm t);
  static ATerm d_73 (ATerm a_72, ATerm b_72, ATerm h_72, ATerm i_72, ATerm j_72, ATerm t);
  static ATerm c_73 (ATerm f_71, ATerm g_71, ATerm h_71, ATerm i_71, ATerm t)
  {
    ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,n_71 = NULL,o_71 = NULL;
    t = not_null(f_71);
    if(((l_71 != NULL) && (l_71 != t)))
      _fail(t);
    else
      l_71 = t;
    t = not_null(g_71);
    if(((o_71 != NULL) && (o_71 != t)))
      _fail(t);
    else
      o_71 = t;
    t = not_null(h_71);
    if(((j_71 != NULL) && (j_71 != t)))
      _fail(t);
    else
      j_71 = t;
    t = not_null(i_71);
    t = Fst_0_0(t);
    t = c_1(t);
    if(((k_71 != NULL) && (k_71 != t)))
      _fail(t);
    else
      k_71 = t;
    t = not_null(j_71);
    t = some_or_empty_0_0(t);
    {
      ATerm q_48 = t;
      int w_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
          if(((u_71 != NULL) && (u_71 != t)))
            _fail(t);
          else
            u_71 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((v_71 != NULL) && (v_71 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(v_71);
          if(((w_71 != NULL) && (w_71 != t)))
            _fail(t);
          else
            w_71 = t;
          LocalPopChoice(w_48);
        }
      else
        {
          t = q_48;
          t = Nil_0_0(t);
        }
    }
    if(((n_71 != NULL) && (n_71 != t)))
      _fail(t);
    else
      n_71 = t;
    {
      ATerm x_48 = t;
      int y_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
          static ATerm a_5 (ATerm t);
          static ATerm a_5 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(o_71), t);
            return(t);
          }
          if(((x_71 != NULL) && (x_71 != t)))
            _fail(t);
          else
            x_71 = t;
          if(((z_71 != NULL) && (z_71 != t)))
            _fail(t);
          else
            z_71 = t;
          t = not_null(x_71);
          t = xtc_new_file_0_0(t);
          if(((y_71 != NULL) && (y_71 != t)))
            _fail(t);
          else
            y_71 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(k_71), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_71))), not_null(l_71), not_null(n_71));
          t = xtc_cc_disable_1_0(a_5, t);
          LocalPopChoice(y_48);
        }
      else
        {
          t = x_48;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm d_73 (ATerm a_72, ATerm b_72, ATerm h_72, ATerm i_72, ATerm j_72, ATerm t)
  {
    ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
    t = not_null(a_72);
    if(((l_72 != NULL) && (l_72 != t)))
      _fail(t);
    else
      l_72 = t;
    t = not_null(b_72);
    if(((m_72 != NULL) && (m_72 != t)))
      _fail(t);
    else
      m_72 = t;
    t = not_null(h_72);
    if(((n_72 != NULL) && (n_72 != t)))
      _fail(t);
    else
      n_72 = t;
    t = not_null(i_72);
    if(((k_72 != NULL) && (k_72 != t)))
      _fail(t);
    else
      k_72 = t;
    t = not_null(j_72);
    if(((o_72 != NULL) && (o_72 != t)))
      _fail(t);
    else
      o_72 = t;
    {
      ATerm a_49 = t;
      int c_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(k_72);
          t = xtc_fetch_contracts_1_0(c_1, t);
          LocalPopChoice(c_49);
          {
            static ATerm b_5 (ATerm t);
            static ATerm b_5 (ATerm t)
            {
              ATerm p_72 = NULL,q_72 = NULL;
              if(((q_72 != NULL) && (q_72 != t)))
                _fail(t);
              else
                q_72 = t;
              if(((p_72 != NULL) && (p_72 != t)))
                _fail(t);
              else
                p_72 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(l_72), not_null(m_72), not_null(n_72)), not_null(p_72));
              t = xtc_cc_1_0(c_1, t);
              return(t);
            }
            t = map_1_0(b_5, t);
          }
        }
      else
        {
          t = a_49;
          {
            ATerm r_72 = NULL;
            if(((r_72 != NULL) && (r_72 != t)))
              _fail(t);
            else
              r_72 = t;
          }
        }
    }
    t = not_null(o_72);
    return(t);
  }
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  if(((v_72 != NULL) && (v_72 != t)))
    _fail(t);
  else
    v_72 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_72 != NULL) && (w_72 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_72 = ATgetArgument(t, 0);
      if(((b_73 != NULL) && (b_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_72);
  if(match_cons(t, sym__3))
    {
      x_72 = ATgetArgument(t, 0);
      y_72 = ATgetArgument(t, 1);
      z_72 = ATgetArgument(t, 2);
      t = not_null(b_73);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((s_72 != NULL) && (s_72 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_72 = ATgetArgument(t, 0);
          if(((t_72 != NULL) && (t_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_72 = ATgetArgument(t, 1);
          if(((u_72 != NULL) && (u_72 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            u_72 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_73(not_null(z_72), not_null(t_72), not_null(u_72), not_null(v_72), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((x_72 != NULL) && (x_72 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_72 = ATgetArgument(t, 0);
          if(((y_72 != NULL) && (y_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_72 = ATgetArgument(t, 1);
          if(((z_72 != NULL) && (z_72 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            z_72 = ATgetArgument(t, 2);
          if(((a_73 != NULL) && (a_73 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            a_73 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_73(not_null(x_72), not_null(y_72), not_null(z_72), not_null(b_73), not_null(v_72), t);
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  if(((e_73 != NULL) && (e_73 != t)))
    _fail(t);
  else
    e_73 = t;
  t = term_p_12;
  t = get_config_0_0(t);
  if(((g_73 != NULL) && (g_73 != t)))
    _fail(t);
  else
    g_73 = t;
  t = term_d_49;
  if(((f_73 != NULL) && (f_73 != t)))
    _fail(t);
  else
    f_73 = t;
  t = not_null(g_73);
  t = notice_0_1(not_null(f_73), t);
  t = not_null(e_73);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm q_151 (ATerm), ATerm t)
{
  ATerm h_73 = NULL;
  ATerm e_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_73 = NULL;
      if(((i_73 != NULL) && (i_73 != t)))
        _fail(t);
      else
        i_73 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(i_73);
      LocalPopChoice(f_49);
      {
        ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
        if(((n_73 != NULL) && (n_73 != t)))
          _fail(t);
        else
          n_73 = t;
        t = term_l_49;
        if(((m_73 != NULL) && (m_73 != t)))
          _fail(t);
        else
          m_73 = t;
        t = not_null(n_73);
        t = dbg_0_1(not_null(m_73), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((l_73 != NULL) && (l_73 != t)))
          _fail(t);
        else
          l_73 = t;
        t = q_151(t);
        if(((h_73 != NULL) && (h_73 != t)))
          _fail(t);
        else
          h_73 = t;
        t = not_null(l_73);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(h_73);
        if(((k_73 != NULL) && (k_73 != t)))
          _fail(t);
        else
          k_73 = t;
        t = term_m_49;
        if(((j_73 != NULL) && (j_73 != t)))
          _fail(t);
        else
          j_73 = t;
        t = not_null(k_73);
        t = dbg_0_1(not_null(j_73), t);
      }
    }
  else
    {
      t = e_49;
      t = q_151(t);
    }
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_73 != NULL) && (p_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_73 = ATgetArgument(t, 0);
      if(((o_73 != NULL) && (o_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_73 != NULL) && (r_73 != t)))
    _fail(t);
  else
    r_73 = t;
  if(((s_73 != NULL) && (s_73 != t)))
    _fail(t);
  else
    s_73 = t;
  t = not_null(p_73);
  {
    ATerm q_49 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_49;
      }
  }
  t = not_null(s_73);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm r_49 = ATgetArgument(t, 0);
      if(((q_73 != NULL) && (q_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_73), not_null(q_73));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL;
  t = term_s_49;
  t = table_getlist_0_0(t);
  {
    ATerm t_49 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(b_50);
      }
    else
      {
        t = t_49;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((u_73 != NULL) && (u_73 != t)))
    _fail(t);
  else
    u_73 = t;
  if(((t_73 != NULL) && (t_73 != t)))
    _fail(t);
  else
    t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_49, not_null(t_73));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm b_74 = NULL;
  if(((b_74 != NULL) && (b_74 != t)))
    _fail(t);
  else
    b_74 = t;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm c_74 = NULL;
  if(((c_74 != NULL) && (c_74 != t)))
    _fail(t);
  else
    c_74 = t;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm d_74 = NULL;
  if(((d_74 != NULL) && (d_74 != t)))
    _fail(t);
  else
    d_74 = t;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_74 = NULL;
  if(((e_74 != NULL) && (e_74 != t)))
    _fail(t);
  else
    e_74 = t;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm f_74 = NULL;
  if(((f_74 != NULL) && (f_74 != t)))
    _fail(t);
  else
    f_74 = t;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm g_74 = NULL;
  if(((g_74 != NULL) && (g_74 != t)))
    _fail(t);
  else
    g_74 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm a_1 (ATerm), ATerm t)
{
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_50 = t;
      if((PushChoice() == 0))
        {
          ATerm f_50 = t;
          int s_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(c_5, t);
              LocalPopChoice(s_50);
            }
          else
            {
              t = f_50;
              t = XtcQuery_2_0(d_5, e_5, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_50;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(a_1, t);
      LocalPopChoice(d_50);
    }
  else
    {
      t = c_50;
      {
        ATerm t_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(f_5, t);
            LocalPopChoice(y_50);
          }
        else
          {
            t = t_50;
            t = XtcQuery_2_0(g_5, h_5, t);
          }
      }
      {
        ATerm m_51 = t;
        int n_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(a_1, t);
            t = Snd_0_0(t);
            LocalPopChoice(n_51);
          }
        else
          {
            t = m_51;
            {
              ATerm h_74 = NULL,i_74 = NULL;
              if(((h_74 != NULL) && (h_74 != t)))
                _fail(t);
              else
                h_74 = t;
              if(((i_74 != NULL) && (i_74 != t)))
                _fail(t);
              else
                i_74 = t;
              t = not_null(h_74);
              t = xtc_import_0_0(t);
              t = not_null(i_74);
              t = xtc_find_reg_1_0(a_1, t);
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
static ATerm i_5 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL;
  if(((k_74 != NULL) && (k_74 != t)))
    _fail(t);
  else
    k_74 = t;
  t = term_h_52;
  if(((j_74 != NULL) && (j_74 != t)))
    _fail(t);
  else
    j_74 = t;
  t = not_null(k_74);
  t = err_0_1(not_null(j_74), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, i_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm q_85, ATerm t)
{
  ATerm l_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  if(((b_75 != NULL) && (b_75 != t)))
    _fail(t);
  else
    b_75 = t;
  t = term_i_52;
  if(((a_75 != NULL) && (a_75 != t)))
    _fail(t);
  else
    a_75 = t;
  t = not_null(b_75);
  t = dbg_0_1(not_null(a_75), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm j_52 = ATgetArgument(t, 0);
      ATerm k_52 = ATgetArgument(t, 1);
      if(match_cons(k_52, sym_Some_1))
        {
          if(((l_74 != NULL) && (l_74 != ATgetArgument(k_52, 0))))
            _fail(ATgetArgument(k_52, 0));
          else
            l_74 = ATgetArgument(k_52, 0);
        }
      else
        _fail(t);
      {
        ATerm l_52 = ATgetArgument(t, 2);
      }
      {
        ATerm d_53 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((z_74 != NULL) && (z_74 != t)))
    _fail(t);
  else
    z_74 = t;
  if(((w_74 != NULL) && (w_74 != t)))
    _fail(t);
  else
    w_74 = t;
  t = not_null(z_74);
  if(((y_74 != NULL) && (y_74 != t)))
    _fail(t);
  else
    y_74 = t;
  t = not_null(q_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((x_74 != NULL) && (x_74 != t)))
    _fail(t);
  else
    x_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), not_null(x_74));
  t = xtc_cc_wrap_1_0(j_5, t);
  t = not_null(l_74);
  return(t);
}
ATerm Some_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,k_5 = NULL,b_12 = NULL;
  if(((h_75 != NULL) && (h_75 != t)))
    _fail(t);
  else
    h_75 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((d_75 != NULL) && (d_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_75 != NULL) && (i_75 != t)))
    _fail(t);
  else
    i_75 = t;
  t = SSLgetAnnotations(not_null(h_75));
  if(((c_75 != NULL) && (c_75 != t)))
    _fail(t);
  else
    c_75 = t;
  t = not_null(d_75);
  t = o_107(t);
  if(((e_75 != NULL) && (e_75 != t)))
    _fail(t);
  else
    e_75 = t;
  if(((g_75 != NULL) && (g_75 != t)))
    _fail(t);
  else
    g_75 = t;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(e_75));
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  t = SSLsetAnnotations(not_null(k_5), not_null(c_75));
  if(((f_75 != NULL) && (f_75 != t)))
    _fail(t);
  else
    f_75 = t;
  return(t);
}
ATerm option_1_0 (ATerm p_132 (ATerm), ATerm t)
{
  ATerm e_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(j_53);
    }
  else
    {
      t = e_53;
      t = Some_1_0(p_132, t);
    }
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL;
  if(((k_75 != NULL) && (k_75 != t)))
    _fail(t);
  else
    k_75 = t;
  if(match_cons(t, sym_URL_1))
    {
      l_75 = ATgetArgument(t, 0);
      t = not_null(k_75);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm m_75 = NULL,n_75 = NULL;
          t = not_null(k_75);
          if(((n_75 != NULL) && (n_75 != t)))
            _fail(t);
          else
            n_75 = t;
          t = term_n_13;
          t = xtc_new_file_0_0(t);
          if(((m_75 != NULL) && (m_75 != t)))
            _fail(t);
          else
            m_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_53, not_null(m_75));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_75));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((l_75 != NULL) && (l_75 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(k_75);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,l_5 = NULL,c_12 = NULL;
  if(((z_75 != NULL) && (z_75 != t)))
    _fail(t);
  else
    z_75 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((p_75 != NULL) && (p_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_75 = ATgetArgument(t, 0);
      if(((q_75 != NULL) && (q_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_75 = ATgetArgument(t, 1);
      if(((r_75 != NULL) && (r_75 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_75 = ATgetArgument(t, 2);
      if(((s_75 != NULL) && (s_75 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        s_75 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((a_76 != NULL) && (a_76 != t)))
    _fail(t);
  else
    a_76 = t;
  t = SSLgetAnnotations(not_null(z_75));
  if(((o_75 != NULL) && (o_75 != t)))
    _fail(t);
  else
    o_75 = t;
  t = not_null(p_75);
  t = i_111(t);
  if(((t_75 != NULL) && (t_75 != t)))
    _fail(t);
  else
    t_75 = t;
  t = not_null(q_75);
  t = j_111(t);
  if(((u_75 != NULL) && (u_75 != t)))
    _fail(t);
  else
    u_75 = t;
  t = not_null(r_75);
  t = k_111(t);
  if(((v_75 != NULL) && (v_75 != t)))
    _fail(t);
  else
    v_75 = t;
  t = not_null(s_75);
  t = l_111(t);
  if(((w_75 != NULL) && (w_75 != t)))
    _fail(t);
  else
    w_75 = t;
  if(((y_75 != NULL) && (y_75 != t)))
    _fail(t);
  else
    y_75 = t;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(t_75), not_null(u_75), not_null(v_75), not_null(w_75));
  if(((l_5 != NULL) && (l_5 != t)))
    _fail(t);
  else
    l_5 = t;
  t = SSLsetAnnotations(not_null(l_5), not_null(o_75));
  if(((x_75 != NULL) && (x_75 != t)))
    _fail(t);
  else
    x_75 = t;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = option_1_0(p_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = option_1_0(r_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = FILE_1_0(q_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm h_76 = NULL;
  if(((h_76 != NULL) && (h_76 != t)))
    _fail(t);
  else
    h_76 = t;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = FILE_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_76 = NULL;
  if(((i_76 != NULL) && (i_76 != t)))
    _fail(t);
  else
    i_76 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm p_53 = t;
  int q_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
      t = XtcConf_4_0(m_5, n_5, o_5, is_list_0_0, t);
      if(((e_76 != NULL) && (e_76 != t)))
        _fail(t);
      else
        e_76 = t;
      if(((g_76 != NULL) && (g_76 != t)))
        _fail(t);
      else
        g_76 = t;
      t = z_0(t);
      if(((f_76 != NULL) && (f_76 != t)))
        _fail(t);
      else
        f_76 = t;
      if(((d_76 != NULL) && (d_76 != t)))
        _fail(t);
      else
        d_76 = t;
      t = not_null(e_76);
      t = xtc_dispatch_0_1(not_null(d_76), t);
      LocalPopChoice(q_53);
    }
  else
    {
      t = p_53;
      {
        ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
        t = is_list_0_0(t);
        if(((j_76 != NULL) && (j_76 != t)))
          _fail(t);
        else
          j_76 = t;
        t = z_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((l_76 != NULL) && (l_76 != t)))
          _fail(t);
        else
          l_76 = t;
        if(((k_76 != NULL) && (k_76 != t)))
          _fail(t);
        else
          k_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_76), not_null(j_76));
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
ATerm FILE_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_5 = NULL,d_12 = NULL;
  if(((r_76 != NULL) && (r_76 != t)))
    _fail(t);
  else
    r_76 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((n_76 != NULL) && (n_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((s_76 != NULL) && (s_76 != t)))
    _fail(t);
  else
    s_76 = t;
  t = SSLgetAnnotations(not_null(r_76));
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  t = not_null(n_76);
  t = n_109(t);
  if(((o_76 != NULL) && (o_76 != t)))
    _fail(t);
  else
    o_76 = t;
  if(((q_76 != NULL) && (q_76 != t)))
    _fail(t);
  else
    q_76 = t;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_76));
  if(((t_5 != NULL) && (t_5 != t)))
    _fail(t);
  else
    t_5 = t;
  t = SSLsetAnnotations(not_null(t_5), not_null(m_76));
  if(((p_76 != NULL) && (p_76 != t)))
    _fail(t);
  else
    p_76 = t;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm z_76 = NULL;
  if(((z_76 != NULL) && (z_76 != t)))
    _fail(t);
  else
    z_76 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_153 (ATerm), ATerm m_153 (ATerm), ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL;
  if(((u_76 != NULL) && (u_76 != t)))
    _fail(t);
  else
    u_76 = t;
  if(((w_76 != NULL) && (w_76 != t)))
    _fail(t);
  else
    w_76 = t;
  t = xtc_new_file_0_0(t);
  if(((v_76 != NULL) && (v_76 != t)))
    _fail(t);
  else
    v_76 = t;
  {
    ATerm v_53 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_76 = NULL,y_76 = NULL;
        t = not_null(u_76);
        {
          ATerm k_54 = t;
          int p_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(u_5, t);
              LocalPopChoice(p_54);
            }
          else
            {
              t = k_54;
              t = stdin_0_0(t);
            }
        }
        if(((y_76 != NULL) && (y_76 != t)))
          _fail(t);
        else
          y_76 = t;
        t = m_153(t);
        if(((x_76 != NULL) && (x_76 != t)))
          _fail(t);
        else
          x_76 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(u_76)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_76))), term_x_18, not_null(x_76));
        LocalPopChoice(j_54);
      }
    else
      {
        t = v_53;
        {
          ATerm a_77 = NULL,b_77 = NULL;
          t = not_null(u_76);
          t = None_0_0(t);
          if(((b_77 != NULL) && (b_77 != t)))
            _fail(t);
          else
            b_77 = t;
          t = m_153(t);
          if(((a_77 != NULL) && (a_77 != t)))
            _fail(t);
          else
            a_77 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_x_18, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_76))), term_x_18, not_null(a_77));
        }
      }
  }
  t = xtc_command_1_0(l_153, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_76));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm f_153 (ATerm), ATerm g_153 (ATerm), ATerm t)
{
  t = term_x_18;
  t = xtc_transform_file_2_0(f_153, g_153, t);
  return(t);
}
ATerm err_0_1 (ATerm w_78, ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
  if(((h_77 != NULL) && (h_77 != t)))
    _fail(t);
  else
    h_77 = t;
  t = term_r_34;
  if(((c_77 != NULL) && (c_77 != t)))
    _fail(t);
  else
    c_77 = t;
  t = not_null(h_77);
  if(((e_77 != NULL) && (e_77 != t)))
    _fail(t);
  else
    e_77 = t;
  if(((g_77 != NULL) && (g_77 != t)))
    _fail(t);
  else
    g_77 = t;
  if(((f_77 != NULL) && (f_77 != t)))
    _fail(t);
  else
    f_77 = t;
  if(((d_77 != NULL) && (d_77 != t)))
    _fail(t);
  else
    d_77 = t;
  t = not_null(e_77);
  t = log_0_3(not_null(c_77), not_null(w_78), not_null(d_77), t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm i_77 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((i_77 != NULL) && (i_77 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        i_77 = ATgetFirst((ATermList) t);
      {
        ATerm w_54 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(i_77);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL;
  static ATerm v_5 (ATerm t);
  static ATerm v_5 (ATerm t)
  {
    ATerm l_77 = NULL,m_77 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((l_77 != NULL) && (l_77 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_77 = ATgetArgument(t, 0);
        if(((m_77 != NULL) && (m_77 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          m_77 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(k_77), not_null(l_77), not_null(m_77));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((k_77 != NULL) && (k_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_77 = ATgetArgument(t, 0);
      if(((j_77 != NULL) && (j_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_77);
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
  ATerm z_54 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_54;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_77 != NULL) && (p_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_77 = ATgetArgument(t, 0);
      if(((n_77 != NULL) && (n_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_77 != NULL) && (r_77 != t)))
    _fail(t);
  else
    r_77 = t;
  t = not_null(n_77);
  {
    ATerm a_55 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(w_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_55;
      }
  }
  t = not_null(n_77);
  t = filter_1_0(x_5, t);
  if(((q_77 != NULL) && (q_77 != t)))
    _fail(t);
  else
    q_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_77), (ATerm) ATinsert(ATempty, term_b_55));
  t = union_0_0(t);
  if(((o_77 != NULL) && (o_77 != t)))
    _fail(t);
  else
    o_77 = t;
  t = not_null(p_77);
  if(((t_77 != NULL) && (t_77 != t)))
    _fail(t);
  else
    t_77 = t;
  if(((v_77 != NULL) && (v_77 != t)))
    _fail(t);
  else
    v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_c_55), not_null(q_77));
  t = conc_0_0(t);
  if(((u_77 != NULL) && (u_77 != t)))
    _fail(t);
  else
    u_77 = t;
  if(((s_77 != NULL) && (s_77 != t)))
    _fail(t);
  else
    s_77 = t;
  t = not_null(t_77);
  t = xtc_load_0_1(not_null(s_77), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_77), not_null(o_77));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_77 != NULL) && (x_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_77 = ATgetArgument(t, 0);
      if(((w_77 != NULL) && (w_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((z_77 != NULL) && (z_77 != t)))
    _fail(t);
  else
    z_77 = t;
  if(((a_78 != NULL) && (a_78 != t)))
    _fail(t);
  else
    a_78 = t;
  t = not_null(x_77);
  t = file_exists_0_0(t);
  t = not_null(a_78);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm e_55 = ATgetArgument(t, 0);
      if(((y_77 != NULL) && (y_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_77), not_null(y_77));
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL;
  t = term_s_49;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((c_78 != NULL) && (c_78 != t)))
    _fail(t);
  else
    c_78 = t;
  if(((b_78 != NULL) && (b_78 != t)))
    _fail(t);
  else
    b_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_49, not_null(b_78));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL;
  if(((g_78 != NULL) && (g_78 != t)))
    _fail(t);
  else
    g_78 = t;
  if(((h_78 != NULL) && (h_78 != t)))
    _fail(t);
  else
    h_78 = t;
  t = not_null(g_78);
  if(((i_78 != NULL) && (i_78 != t)))
    _fail(t);
  else
    i_78 = t;
  t = SSL_explode_term(not_null(i_78));
  if(match_cons(t, sym__2))
    {
      ATerm f_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_55) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_55 = ATgetArgument(t, 1);
        if(((ATgetType(g_55) == AT_LIST) && !(ATisEmpty(g_55))))
          {
            if(((d_78 != NULL) && (d_78 != ATgetFirst((ATermList) g_55))))
              _fail(ATgetFirst((ATermList) g_55));
            else
              d_78 = ATgetFirst((ATermList) g_55);
            {
              ATerm r_55 = (ATerm) ATgetNext((ATermList) g_55);
              if(((ATgetType(r_55) == AT_LIST) && !(ATisEmpty(r_55))))
                {
                  if(((f_78 != NULL) && (f_78 != ATgetFirst((ATermList) r_55))))
                    _fail(ATgetFirst((ATermList) r_55));
                  else
                    f_78 = ATgetFirst((ATermList) r_55);
                  if(((e_78 != NULL) && (e_78 != (ATerm) ATgetNext((ATermList) r_55))))
                    _fail((ATerm) ATgetNext((ATermList) r_55));
                  else
                    e_78 = (ATerm) ATgetNext((ATermList) r_55);
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
  t = not_null(f_78);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
  if(((m_78 != NULL) && (m_78 != t)))
    _fail(t);
  else
    m_78 = t;
  if(((o_78 != NULL) && (o_78 != t)))
    _fail(t);
  else
    o_78 = t;
  t = not_null(m_78);
  if(((p_78 != NULL) && (p_78 != t)))
    _fail(t);
  else
    p_78 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      q_78 = ATgetArgument(t, 0);
      t = not_null(q_78);
      if(((l_78 != NULL) && (l_78 != t)))
        _fail(t);
      else
        l_78 = t;
      t = not_null(p_78);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((q_78 != NULL) && (q_78 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_78 = ATgetArgument(t, 0);
          if(((r_78 != NULL) && (r_78 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(q_78);
      if(((l_78 != NULL) && (l_78 != t)))
        _fail(t);
      else
        l_78 = t;
      t = not_null(r_78);
      if(((k_78 != NULL) && (k_78 != t)))
        _fail(t);
      else
        k_78 = t;
      t = not_null(p_78);
    }
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,t_79 = NULL;
        t = not_null(m_78);
        if(((t_79 != NULL) && (t_79 != t)))
          _fail(t);
        else
          t_79 = t;
        t = term_u_55;
        if(((v_78 != NULL) && (v_78 != t)))
          _fail(t);
        else
          v_78 = t;
        t = not_null(t_79);
        t = xtc_query_one_2_1(w_150, x_150, not_null(v_78), t);
        if(((s_78 != NULL) && (s_78 != t)))
          _fail(t);
        else
          s_78 = t;
        t = not_null(m_78);
        if(((u_78 != NULL) && (u_78 != t)))
          _fail(t);
        else
          u_78 = t;
        t = term_a_56;
        if(((t_78 != NULL) && (t_78 != t)))
          _fail(t);
        else
          t_78 = t;
        t = not_null(u_78);
        t = dbg_0_1(not_null(t_78), t);
        t = not_null(s_78);
        LocalPopChoice(t_55);
      }
    else
      {
        t = s_55;
        {
          ATerm u_79 = NULL,y_79 = NULL;
          t = not_null(l_78);
          if(((y_79 != NULL) && (y_79 != t)))
            _fail(t);
          else
            y_79 = t;
          t = term_b_56;
          if(((u_79 != NULL) && (u_79 != t)))
            _fail(t);
          else
            u_79 = t;
          t = not_null(y_79);
          t = xtc_query_one_2_1(w_150, x_150, not_null(u_79), t);
          t = xtc_cache_put_0_1(not_null(m_78), t);
        }
      }
  }
  if(((n_78 != NULL) && (n_78 != t)))
    _fail(t);
  else
    n_78 = t;
  return(t);
}
ATerm crush_3_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t)
{
  ATerm h_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
  if(((m_80 != NULL) && (m_80 != t)))
    _fail(t);
  else
    m_80 = t;
  if(((n_80 != NULL) && (n_80 != t)))
    _fail(t);
  else
    n_80 = t;
  t = not_null(m_80);
  if(((o_80 != NULL) && (o_80 != t)))
    _fail(t);
  else
    o_80 = t;
  t = SSL_explode_term(not_null(o_80));
  if(match_cons(t, sym__2))
    {
      ATerm c_56 = ATgetArgument(t, 0);
      if(((h_80 != NULL) && (h_80 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_80);
  if(((l_80 != NULL) && (l_80 != t)))
    _fail(t);
  else
    l_80 = t;
  t = not_null(h_80);
  t = foldr_3_0(c_135, d_135, e_135, t);
  if(((k_80 != NULL) && (k_80 != t)))
    _fail(t);
  else
    k_80 = t;
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
ATerm collect_all_2_0 (ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm t)
{
  static ATerm u_80 (ATerm t);
  static ATerm u_80 (ATerm t)
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
        if(((p_80 != NULL) && (p_80 != t)))
          _fail(t);
        else
          p_80 = t;
        if(((t_80 != NULL) && (t_80 != t)))
          _fail(t);
        else
          t_80 = t;
        t = not_null(p_80);
        t = e_129(t);
        if(((q_80 != NULL) && (q_80 != t)))
          _fail(t);
        else
          q_80 = t;
        t = not_null(t_80);
        if(((s_80 != NULL) && (s_80 != t)))
          _fail(t);
        else
          s_80 = t;
        t = crush_3_0(y_5, f_129, u_80, t);
        if(((r_80 != NULL) && (r_80 != t)))
          _fail(t);
        else
          r_80 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(r_80)), not_null(q_80));
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        t = crush_3_0(z_5, f_129, u_80, t);
      }
    return(t);
  }
  t = u_80(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm d_129 (ATerm), ATerm t)
{
  t = collect_all_2_0(d_129, union_0_0, t);
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm x_0, ATerm t)
{
  static ATerm j_81 (ATerm x_80, ATerm t);
  static ATerm n_81 (ATerm d_81, ATerm t);
  static ATerm j_81 (ATerm x_80, ATerm t)
  {
    ATerm y_80 = NULL,z_80 = NULL;
    t = not_null(x_80);
    if(((y_80 != NULL) && (y_80 != t)))
      _fail(t);
    else
      y_80 = t;
    t = not_null(x_80);
    if(((z_80 != NULL) && (z_80 != t)))
      _fail(t);
    else
      z_80 = t;
    t = not_null(x_0);
    t = is_list_0_0(t);
    {
      ATerm f_56 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_56;
        }
    }
    {
      static ATerm a_6 (ATerm t);
      static ATerm a_6 (ATerm t)
      {
        ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
        if(((b_81 != NULL) && (b_81 != t)))
          _fail(t);
        else
          b_81 = t;
        if(((c_81 != NULL) && (c_81 != t)))
          _fail(t);
        else
          c_81 = t;
        t = not_null(y_80);
        t = xtc_has_meta_0_1(not_null(b_81), t);
        t = not_null(b_81);
        return(t);
      }
      t = filter_1_0(a_6, t);
    }
    if(((x_0 != NULL) && (x_0 != t)))
      _fail(t);
    else
      x_0 = t;
    t = not_null(y_80);
    return(t);
  }
  static ATerm n_81 (ATerm d_81, ATerm t)
  {
    ATerm e_81 = NULL;
    t = not_null(d_81);
    if(((e_81 != NULL) && (e_81 != t)))
      _fail(t);
    else
      e_81 = t;
    t = not_null(d_81);
    {
      static ATerm b_6 (ATerm t);
      static ATerm b_6 (ATerm t)
      {
        if(((x_0 != NULL) && (x_0 != t)))
          _fail(t);
        else
          x_0 = t;
        return(t);
      }
      t = collect_all_1_0(b_6, t);
    }
    {
      ATerm i_56 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_56;
        }
    }
    t = not_null(e_81);
    return(t);
  }
  ATerm f_81 = NULL;
  if(((f_81 != NULL) && (f_81 != t)))
    _fail(t);
  else
    f_81 = t;
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_81 = NULL;
        t = not_null(f_81);
        if(((i_81 != NULL) && (i_81 != t)))
          _fail(t);
        else
          i_81 = t;
        t = not_null(x_0);
        t = Nil_0_0(t);
        t = not_null(i_81);
        LocalPopChoice(k_56);
      }
    else
      {
        t = j_56;
        {
          ATerm l_56 = t;
          int n_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_81(not_null(f_81), t);
              LocalPopChoice(n_56);
            }
          else
            {
              t = l_56;
              t = n_81(not_null(f_81), t);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm h_81, ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,l_91 = NULL,m_91 = NULL,o_91 = NULL;
  if(((i_91 != NULL) && (i_91 != t)))
    _fail(t);
  else
    i_91 = t;
  if(((o_91 != NULL) && (o_91 != t)))
    _fail(t);
  else
    o_91 = t;
  if(((m_91 != NULL) && (m_91 != t)))
    _fail(t);
  else
    m_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_55, not_null(h_81), (ATerm) ATinsert(ATempty, not_null(m_91)));
  t = table_union_0_0(t);
  t = not_null(h_81);
  if(((l_91 != NULL) && (l_91 != t)))
    _fail(t);
  else
    l_91 = t;
  t = term_o_56;
  if(((j_91 != NULL) && (j_91 != t)))
    _fail(t);
  else
    j_91 = t;
  t = not_null(l_91);
  t = dbg_0_1(not_null(j_91), t);
  t = not_null(i_91);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm p_91 = NULL,r_91 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_91 != NULL) && (p_91 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_91 = ATgetArgument(t, 0);
      if(((r_91 != NULL) && (r_91 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(r_91)), not_null(p_91));
  return(t);
}
ATerm foldr_3_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm t)
{
  ATerm p_56 = t;
  int q_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = f_130(t);
      LocalPopChoice(q_56);
    }
  else
    {
      t = p_56;
      {
        ATerm i_92 = NULL,j_92 = NULL,m_92 = NULL,n_92 = NULL,i_93 = NULL,j_93 = NULL,l_93 = NULL,n_93 = NULL,q_93 = NULL,s_93 = NULL,u_93 = NULL;
        if(((i_92 != NULL) && (i_92 != t)))
          _fail(t);
        else
          i_92 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((j_92 != NULL) && (j_92 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              j_92 = ATgetFirst((ATermList) t);
            if(((m_92 != NULL) && (m_92 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              m_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(j_92);
        if(((n_92 != NULL) && (n_92 != t)))
          _fail(t);
        else
          n_92 = t;
        t = not_null(m_92);
        if(((i_93 != NULL) && (i_93 != t)))
          _fail(t);
        else
          i_93 = t;
        t = not_null(i_92);
        if(((l_93 != NULL) && (l_93 != t)))
          _fail(t);
        else
          l_93 = t;
        if(((u_93 != NULL) && (u_93 != t)))
          _fail(t);
        else
          u_93 = t;
        t = not_null(n_92);
        t = h_130(t);
        if(((n_93 != NULL) && (n_93 != t)))
          _fail(t);
        else
          n_93 = t;
        t = not_null(u_93);
        if(((s_93 != NULL) && (s_93 != t)))
          _fail(t);
        else
          s_93 = t;
        t = not_null(i_93);
        t = foldr_3_0(f_130, g_130, h_130, t);
        if(((q_93 != NULL) && (q_93 != t)))
          _fail(t);
        else
          q_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_93), not_null(q_93));
        t = g_130(t);
        if(((j_93 != NULL) && (j_93 != t)))
          _fail(t);
        else
          j_93 = t;
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
  ATerm r_56 = t;
  int s_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, f_6, t);
      LocalPopChoice(s_56);
      t = conc_0_0(t);
    }
  else
    {
      t = r_56;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(u_56);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = t_56;
      {
        ATerm d_94 = NULL;
        if(((d_94 != NULL) && (d_94 != t)))
          _fail(t);
        else
          d_94 = t;
      }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm b_94 = NULL;
  if(((b_94 != NULL) && (b_94 != t)))
    _fail(t);
  else
    b_94 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(c_6, d_6, e_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_94 = NULL;
  static ATerm g_6 (ATerm t);
  static ATerm g_6 (ATerm t)
  {
    ATerm h_94 = NULL,t_94 = NULL,u_94 = NULL;
    if(((h_94 != NULL) && (h_94 != t)))
      _fail(t);
    else
      h_94 = t;
    if(((u_94 != NULL) && (u_94 != t)))
      _fail(t);
    else
      u_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_94), not_null(h_94));
    t = table_get_0_0(t);
    if(((t_94 != NULL) && (t_94 != t)))
      _fail(t);
    else
      t_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_94), not_null(t_94));
    return(t);
  }
  if(((f_94 != NULL) && (f_94 != t)))
    _fail(t);
  else
    f_94 = t;
  t = table_keys_0_0(t);
  t = map_1_0(g_6, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm c_151 (ATerm), ATerm d_151 (ATerm), ATerm v_81, ATerm t)
{
  t = not_null(v_81);
  t = table_getlist_0_0(t);
  {
    static ATerm h_6 (ATerm t);
    static ATerm h_6 (ATerm t)
    {
      ATerm x_94 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm v_56 = ATgetArgument(t, 0);
          if(((x_94 != NULL) && (x_94 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_94 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_94);
      t = c_151(t);
      return(t);
    }
    t = filter_1_0(h_6, t);
  }
  t = flatten_list_0_0(t);
  t = d_151(t);
  return(t);
}
ATerm dbg_0_1 (ATerm z_78, ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL;
  if(((f_95 != NULL) && (f_95 != t)))
    _fail(t);
  else
    f_95 = t;
  t = term_w_56;
  if(((a_95 != NULL) && (a_95 != t)))
    _fail(t);
  else
    a_95 = t;
  t = not_null(f_95);
  if(((c_95 != NULL) && (c_95 != t)))
    _fail(t);
  else
    c_95 = t;
  if(((e_95 != NULL) && (e_95 != t)))
    _fail(t);
  else
    e_95 = t;
  if(((d_95 != NULL) && (d_95 != t)))
    _fail(t);
  else
    d_95 = t;
  if(((b_95 != NULL) && (b_95 != t)))
    _fail(t);
  else
    b_95 = t;
  t = not_null(c_95);
  t = log_0_3(not_null(a_95), not_null(z_78), not_null(b_95), t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm u_81, ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL;
  if(((h_95 != NULL) && (h_95 != t)))
    _fail(t);
  else
    h_95 = t;
  if(((g_95 != NULL) && (g_95 != t)))
    _fail(t);
  else
    g_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_81), not_null(g_95));
  t = table_get_0_0(t);
  t = a_151(t);
  t = b_151(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t)
{
  ATerm i_95 = NULL,m_95 = NULL,n_95 = NULL;
  if(((i_95 != NULL) && (i_95 != t)))
    _fail(t);
  else
    i_95 = t;
  if(((n_95 != NULL) && (n_95 != t)))
    _fail(t);
  else
    n_95 = t;
  {
    ATerm x_56 = t;
    int y_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL;
        t = not_null(i_95);
        if(((g_96 != NULL) && (g_96 != t)))
          _fail(t);
        else
          g_96 = t;
        t = term_u_55;
        if(((f_96 != NULL) && (f_96 != t)))
          _fail(t);
        else
          f_96 = t;
        t = not_null(g_96);
        t = xtc_query_one_2_1(y_150, z_150, not_null(f_96), t);
        if(((c_96 != NULL) && (c_96 != t)))
          _fail(t);
        else
          c_96 = t;
        t = not_null(i_95);
        if(((e_96 != NULL) && (e_96 != t)))
          _fail(t);
        else
          e_96 = t;
        t = term_a_56;
        if(((d_96 != NULL) && (d_96 != t)))
          _fail(t);
        else
          d_96 = t;
        t = not_null(e_96);
        t = dbg_0_1(not_null(d_96), t);
        t = not_null(c_96);
        LocalPopChoice(y_56);
      }
    else
      {
        t = x_56;
        {
          ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL;
          if(((k_96 != NULL) && (k_96 != t)))
            _fail(t);
          else
            k_96 = t;
          if(((m_96 != NULL) && (m_96 != t)))
            _fail(t);
          else
            m_96 = t;
          t = term_b_56;
          if(((l_96 != NULL) && (l_96 != t)))
            _fail(t);
          else
            l_96 = t;
          t = not_null(m_96);
          t = xtc_query_all_2_1(y_150, z_150, not_null(l_96), t);
          t = xtc_cache_put_0_1(not_null(i_95), t);
        }
      }
  }
  if(((m_95 != NULL) && (m_95 != t)))
    _fail(t);
  else
    m_95 = t;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm b_97 = NULL;
  if(((b_97 != NULL) && (b_97 != t)))
    _fail(t);
  else
    b_97 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
  if(((q_96 != NULL) && (q_96 != t)))
    _fail(t);
  else
    q_96 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      r_96 = ATgetArgument(t, 0);
      {
        ATerm z_56 = t;
        int l_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL;
            t = not_null(q_96);
            if(((t_96 != NULL) && (t_96 != t)))
              _fail(t);
            else
              t_96 = t;
            t = not_null(r_96);
            if(((s_96 != NULL) && (s_96 != t)))
              _fail(t);
            else
              s_96 = t;
            t = not_null(q_96);
            if(((w_96 != NULL) && (w_96 != t)))
              _fail(t);
            else
              w_96 = t;
            t = not_null(s_96);
            t = is_list_0_0(t);
            t = not_null(t_96);
            {
              static ATerm i_6 (ATerm t);
              static ATerm i_6 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(s_96), t);
                return(t);
              }
              t = xtc_query_all_2_0(i_6, w_0, t);
            }
            if(((v_96 != NULL) && (v_96 != t)))
              _fail(t);
            else
              v_96 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(v_96));
            LocalPopChoice(l_57);
          }
        else
          {
            t = z_56;
            {
              ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL;
              t = not_null(q_96);
              if(((y_96 != NULL) && (y_96 != t)))
                _fail(t);
              else
                y_96 = t;
              t = not_null(r_96);
              if(((x_96 != NULL) && (x_96 != t)))
                _fail(t);
              else
                x_96 = t;
              t = not_null(q_96);
              if(((a_97 != NULL) && (a_97 != t)))
                _fail(t);
              else
                a_97 = t;
              t = not_null(x_96);
              t = is_string_0_0(t);
              t = not_null(y_96);
              t = xtc_query_one_2_0(j_6, w_0, t);
              if(((z_96 != NULL) && (z_96 != t)))
                _fail(t);
              else
                z_96 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_96), not_null(z_96));
            }
          }
      }
    }
  else
    {
      ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((r_96 != NULL) && (r_96 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            r_96 = ATgetArgument(t, 0);
          if(((p_96 != NULL) && (p_96 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_96 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(q_96);
      if(((e_97 != NULL) && (e_97 != t)))
        _fail(t);
      else
        e_97 = t;
      t = not_null(r_96);
      if(((d_97 != NULL) && (d_97 != t)))
        _fail(t);
      else
        d_97 = t;
      t = not_null(p_96);
      if(((c_97 != NULL) && (c_97 != t)))
        _fail(t);
      else
        c_97 = t;
      t = not_null(q_96);
      if(((h_97 != NULL) && (h_97 != t)))
        _fail(t);
      else
        h_97 = t;
      t = not_null(d_97);
      t = is_string_0_0(t);
      t = not_null(c_97);
      t = is_list_0_0(t);
      t = not_null(e_97);
      {
        static ATerm k_6 (ATerm t);
        static ATerm k_6 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(c_97), t);
          return(t);
        }
        t = xtc_query_one_2_0(k_6, w_0, t);
      }
      if(((g_97 != NULL) && (g_97 != t)))
        _fail(t);
      else
        g_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_97), not_null(g_97));
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
  ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((j_97 != NULL) && (j_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_97 = ATgetArgument(t, 0);
      if(((k_97 != NULL) && (k_97 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_97 = ATgetArgument(t, 1);
      if(((i_97 != NULL) && (i_97 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_97 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((l_97 != NULL) && (l_97 != t)))
    _fail(t);
  else
    l_97 = t;
  if(((n_97 != NULL) && (n_97 != t)))
    _fail(t);
  else
    n_97 = t;
  if(((p_97 != NULL) && (p_97 != t)))
    _fail(t);
  else
    p_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_97), not_null(k_97));
  {
    ATerm m_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(n_57);
      }
    else
      {
        t = m_57;
        t = (ATerm) ATempty;
      }
  }
  if(((o_97 != NULL) && (o_97 != t)))
    _fail(t);
  else
    o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_97), not_null(o_97));
  t = union_0_0(t);
  if(((m_97 != NULL) && (m_97 != t)))
    _fail(t);
  else
    m_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(j_97), not_null(k_97), not_null(m_97));
  t = set_0_0(t);
  t = not_null(l_97);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((r_97 != NULL) && (r_97 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        r_97 = ATgetFirst((ATermList) t);
      if(((q_97 != NULL) && (q_97 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((s_97 != NULL) && (s_97 != t)))
    _fail(t);
  else
    s_97 = t;
  t = t_127(t);
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
      if(((t_97 != NULL) && (t_97 != t)))
        _fail(t);
      else
        t_97 = t;
      if(((v_97 != NULL) && (v_97 != t)))
        _fail(t);
      else
        v_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_97), not_null(t_97));
      t = s_127(t);
      if(((u_97 != NULL) && (u_97 != t)))
        _fail(t);
      else
        u_97 = t;
      return(t);
    }
    t = fetch_1_0(l_6, t);
  }
  t = not_null(q_97);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm b_98 = NULL;
  if(((b_98 != NULL) && (b_98 != t)))
    _fail(t);
  else
    b_98 = t;
  return(t);
}
ATerm union_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_97 != NULL) && (y_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_97 = ATgetArgument(t, 0);
      if(((x_97 != NULL) && (x_97 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_98 != NULL) && (a_98 != t)))
    _fail(t);
  else
    a_98 = t;
  t = not_null(y_97);
  {
    static ATerm c_98 (ATerm t);
    static ATerm c_98 (ATerm t)
    {
      ATerm t_57 = t;
      int u_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(x_97);
          LocalPopChoice(u_57);
        }
      else
        {
          t = t_57;
          {
            ATerm v_57 = t;
            int w_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm m_6 (ATerm t);
                static ATerm m_6 (ATerm t)
                {
                  t = not_null(x_97);
                  return(t);
                }
                t = HdMember_p__2_0(p_127, m_6, t);
                t = c_98(t);
                LocalPopChoice(w_57);
              }
            else
              {
                t = v_57;
                t = Cons_2_0(n_6, c_98, t);
              }
          }
        }
      return(t);
    }
    t = c_98(t);
  }
  if(((z_97 != NULL) && (z_97 != t)))
    _fail(t);
  else
    z_97 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm e_98 = NULL;
  if(((e_98 != NULL) && (e_98 != t)))
    _fail(t);
  else
    e_98 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm c_80, ATerm t)
{
  static ATerm p_6 (ATerm t);
  static ATerm p_6 (ATerm t)
  {
    ATerm f_98 = NULL,g_98 = NULL;
    if(((g_98 != NULL) && (g_98 != t)))
      _fail(t);
    else
      g_98 = t;
    if(((f_98 != NULL) && (f_98 != t)))
      _fail(t);
    else
      f_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_98), not_null(c_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(o_6, p_6, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm b_80, ATerm t)
{
  static ATerm q_6 (ATerm t);
  static ATerm q_6 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(b_80), t);
    return(t);
  }
  t = map_1_0(q_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL;
  if(((p_98 != NULL) && (p_98 != t)))
    _fail(t);
  else
    p_98 = t;
  t = Fst_0_0(t);
  if(((m_98 != NULL) && (m_98 != t)))
    _fail(t);
  else
    m_98 = t;
  t = not_null(p_98);
  if(((o_98 != NULL) && (o_98 != t)))
    _fail(t);
  else
    o_98 = t;
  t = Snd_0_0(t);
  if(((n_98 != NULL) && (n_98 != t)))
    _fail(t);
  else
    n_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_49, not_null(m_98), not_null(n_98));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm u_0, ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
  if(((i_98 != NULL) && (i_98 != t)))
    _fail(t);
  else
    i_98 = t;
  if(match_cons(t, sym_Reference_1))
    {
      j_98 = ATgetArgument(t, 0);
      {
        ATerm l_98 = NULL;
        t = not_null(j_98);
        if(((l_98 != NULL) && (l_98 != t)))
          _fail(t);
        else
          l_98 = t;
        t = xtc_add_meta_all_0_1(not_null(u_0), t);
        t = map_1_0(r_6, t);
      }
    }
  else
    {
      ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((j_98 != NULL) && (j_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_98 = ATgetArgument(t, 0);
          if(((k_98 != NULL) && (k_98 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_98 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(j_98);
      if(((q_98 != NULL) && (q_98 != t)))
        _fail(t);
      else
        q_98 = t;
      t = not_null(k_98);
      if(((r_98 != NULL) && (r_98 != t)))
        _fail(t);
      else
        r_98 = t;
      t = not_null(i_98);
      if(((t_98 != NULL) && (t_98 != t)))
        _fail(t);
      else
        t_98 = t;
      t = not_null(r_98);
      t = xtc_add_meta_all_0_1(not_null(u_0), t);
      if(((s_98 != NULL) && (s_98 != t)))
        _fail(t);
      else
        s_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_56, not_null(q_98), not_null(s_98));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm h_79, ATerm t)
{
  static ATerm s_6 (ATerm t);
  static ATerm s_6 (ATerm t)
  {
    static ATerm t_6 (ATerm t);
    static ATerm t_6 (ATerm t)
    {
      t = xtc_register_0_1(not_null(h_79), t);
      return(t);
    }
    t = map_1_0(t_6, t);
    return(t);
  }
  t = Repository_1_0(s_6, t);
  return(t);
}
ATerm Repository_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,u_6 = NULL,e_12 = NULL;
  if(((z_98 != NULL) && (z_98 != t)))
    _fail(t);
  else
    z_98 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((v_98 != NULL) && (v_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((a_99 != NULL) && (a_99 != t)))
    _fail(t);
  else
    a_99 = t;
  t = SSLgetAnnotations(not_null(z_98));
  if(((u_98 != NULL) && (u_98 != t)))
    _fail(t);
  else
    u_98 = t;
  t = not_null(v_98);
  t = c_109(t);
  if(((w_98 != NULL) && (w_98 != t)))
    _fail(t);
  else
    w_98 = t;
  if(((y_98 != NULL) && (y_98 != t)))
    _fail(t);
  else
    y_98 = t;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(w_98));
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  t = SSLsetAnnotations(not_null(u_6), not_null(u_98));
  if(((x_98 != NULL) && (x_98 != t)))
    _fail(t);
  else
    x_98 = t;
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  if(((c_99 != NULL) && (c_99 != t)))
    _fail(t);
  else
    c_99 = t;
  if(((b_99 != NULL) && (b_99 != t)))
    _fail(t);
  else
    b_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_x_57), not_null(b_99));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL;
  if(((e_99 != NULL) && (e_99 != t)))
    _fail(t);
  else
    e_99 = t;
  t = get_extension_0_0(t);
  if(((d_99 != NULL) && (d_99 != t)))
    _fail(t);
  else
    d_99 = t;
  {
    ATerm y_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_99 = NULL;
        if(((f_99 != NULL) && (f_99 != t)))
          _fail(t);
        else
          f_99 = t;
        t = not_null(d_99);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(f_99);
        LocalPopChoice(z_57);
        t = (ATerm) ATinsert(ATempty, term_d_58);
      }
    else
      {
        t = y_57;
        t = not_null(e_99);
        {
          ATerm e_58 = t;
          int f_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_99 = NULL;
              if(((g_99 != NULL) && (g_99 != t)))
                _fail(t);
              else
                g_99 = t;
              t = not_null(d_99);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(g_99);
              LocalPopChoice(f_58);
              t = (ATerm) ATinsert(ATempty, term_v_59);
            }
          else
            {
              t = e_58;
              t = not_null(e_99);
              {
                ATerm w_59 = t;
                int z_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_99 = NULL;
                    if(((h_99 != NULL) && (h_99 != t)))
                      _fail(t);
                    else
                      h_99 = t;
                    t = not_null(d_99);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(h_99);
                    LocalPopChoice(z_59);
                    t = (ATerm) ATinsert(ATempty, term_v_59);
                  }
                else
                  {
                    t = w_59;
                    t = not_null(e_99);
                    {
                      ATerm e_60 = t;
                      int f_60 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_99 = NULL;
                          if(((i_99 != NULL) && (i_99 != t)))
                            _fail(t);
                          else
                            i_99 = t;
                          t = not_null(d_99);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(i_99);
                          LocalPopChoice(f_60);
                          t = (ATerm) ATinsert(ATempty, term_i_60);
                        }
                      else
                        {
                          t = e_60;
                          t = not_null(e_99);
                          {
                            ATerm s_60 = t;
                            int v_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_99 = NULL;
                                if(((j_99 != NULL) && (j_99 != t)))
                                  _fail(t);
                                else
                                  j_99 = t;
                                t = not_null(d_99);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(j_99);
                                LocalPopChoice(v_60);
                                t = (ATerm) ATinsert(ATempty, term_f_61);
                              }
                            else
                              {
                                t = s_60;
                                t = not_null(e_99);
                                {
                                  ATerm g_61 = t;
                                  int h_61 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_99 = NULL;
                                      if(((k_99 != NULL) && (k_99 != t)))
                                        _fail(t);
                                      else
                                        k_99 = t;
                                      t = not_null(d_99);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(k_99);
                                      LocalPopChoice(h_61);
                                      t = (ATerm) ATinsert(ATempty, term_f_61);
                                    }
                                  else
                                    {
                                      t = g_61;
                                      t = not_null(e_99);
                                      {
                                        ATerm i_61 = t;
                                        int j_61 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm l_99 = NULL;
                                            if(((l_99 != NULL) && (l_99 != t)))
                                              _fail(t);
                                            else
                                              l_99 = t;
                                            t = not_null(d_99);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(l_99);
                                            LocalPopChoice(j_61);
                                            t = (ATerm) ATinsert(ATempty, term_m_61);
                                          }
                                        else
                                          {
                                            t = i_61;
                                            t = not_null(e_99);
                                            {
                                              ATerm n_61 = t;
                                              int o_61 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_99 = NULL;
                                                  if(((m_99 != NULL) && (m_99 != t)))
                                                    _fail(t);
                                                  else
                                                    m_99 = t;
                                                  t = not_null(d_99);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(m_99);
                                                  LocalPopChoice(o_61);
                                                  t = (ATerm) ATinsert(ATempty, term_r_61);
                                                }
                                              else
                                                {
                                                  t = n_61;
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
  ATerm n_99 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_99 != NULL) && (n_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_99 = ATgetArgument(t, 0);
      if(((n_99 != NULL) && (n_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm q_99 = NULL;
  if(((q_99 != NULL) && (q_99 != t)))
    _fail(t);
  else
    q_99 = t;
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
  ATerm r_99 = NULL;
  if(((r_99 != NULL) && (r_99 != t)))
    _fail(t);
  else
    r_99 = t;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm v_6 (ATerm t);
    static ATerm v_6 (ATerm t)
    {
      ATerm l_63 = t;
      int u_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(w_6, v_6, t);
          LocalPopChoice(u_65);
        }
      else
        {
          t = l_63;
          {
            ATerm v_65 = t;
            int w_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(x_6, y_6, t);
                LocalPopChoice(w_65);
              }
            else
              {
                t = v_65;
                t = Cons_2_0(z_6, i_134, t);
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
  ATerm u_99 = NULL;
  if(((u_99 != NULL) && (u_99 != t)))
    _fail(t);
  else
    u_99 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(a_7, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL;
  if(((y_99 != NULL) && (y_99 != t)))
    _fail(t);
  else
    y_99 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((v_99 != NULL) && (v_99 != t)))
    _fail(t);
  else
    v_99 = t;
  t = not_null(y_99);
  if(((x_99 != NULL) && (x_99 != t)))
    _fail(t);
  else
    x_99 = t;
  t = base_filename_0_0(t);
  if(((w_99 != NULL) && (w_99 != t)))
    _fail(t);
  else
    w_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_99), not_null(w_99));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm x_65 = t;
  int y_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_99 = NULL;
      if(((z_99 != NULL) && (z_99 != t)))
        _fail(t);
      else
        z_99 = t;
      t = has_no_extension_0_0(t);
      t = not_null(z_99);
      LocalPopChoice(y_65);
      t = (ATerm) ATinsert(ATempty, term_e_66);
    }
  else
    {
      t = x_65;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL;
  if(((d_100 != NULL) && (d_100 != t)))
    _fail(t);
  else
    d_100 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((a_100 != NULL) && (a_100 != t)))
    _fail(t);
  else
    a_100 = t;
  t = not_null(d_100);
  if(((c_100 != NULL) && (c_100 != t)))
    _fail(t);
  else
    c_100 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((b_100 != NULL) && (b_100 != t)))
    _fail(t);
  else
    b_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_100), not_null(b_100));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL,j_100 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_100 != NULL) && (e_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_100 = ATgetArgument(t, 0);
      if(((f_100 != NULL) && (f_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_100 != NULL) && (h_100 != t)))
    _fail(t);
  else
    h_100 = t;
  if(((j_100 != NULL) && (j_100 != t)))
    _fail(t);
  else
    j_100 = t;
  t = not_null(f_100);
  t = xtc_default_xt_meta_0_0(t);
  if(((i_100 != NULL) && (i_100 != t)))
    _fail(t);
  else
    i_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_66, (ATerm) ATmakeAppl(sym_String_1, not_null(e_100)))), not_null(i_100));
  t = conc_0_0(t);
  if(((g_100 != NULL) && (g_100 != t)))
    _fail(t);
  else
    g_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_100), not_null(g_100));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_66 = ATgetArgument(t, 0);
      if(match_cons(j_66, sym_Tool_1))
        {
          if(((k_100 != NULL) && (k_100 != ATgetArgument(j_66, 0))))
            _fail(ATgetArgument(j_66, 0));
          else
            k_100 = ATgetArgument(j_66, 0);
        }
      else
        _fail(t);
      if(((l_100 != NULL) && (l_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_100 != NULL) && (n_100 != t)))
    _fail(t);
  else
    n_100 = t;
  t = not_null(l_100);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((m_100 != NULL) && (m_100 != t)))
    _fail(t);
  else
    m_100 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(k_100), not_null(m_100));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL;
  if(((s_100 != NULL) && (s_100 != t)))
    _fail(t);
  else
    s_100 = t;
  if(((r_100 != NULL) && (r_100 != t)))
    _fail(t);
  else
    r_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_100), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_66 = ATgetArgument(t, 0);
      if(!(match_cons(t_66, sym_Import_0)))
        _fail(t);
      if(((o_100 != NULL) && (o_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_100 != NULL) && (q_100 != t)))
    _fail(t);
  else
    q_100 = t;
  t = not_null(o_100);
  t = map_1_0(b_7, t);
  if(((p_100 != NULL) && (p_100 != t)))
    _fail(t);
  else
    p_100 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(p_100));
  return(t);
}
ATerm restore_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t)
{
  ATerm v_67 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_115(t);
      LocalPopChoice(d_69);
    }
  else
    {
      t = v_67;
      t = q_115(t);
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
  ATerm t_100 = NULL,u_100 = NULL;
  t = term_n_13;
  if(((u_100 != NULL) && (u_100 != t)))
    _fail(t);
  else
    u_100 = t;
  t = term_e_69;
  if(((t_100 != NULL) && (t_100 != t)))
    _fail(t);
  else
    t_100 = t;
  t = not_null(u_100);
  t = err_0_1(not_null(t_100), t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm u_69 = t;
  int v_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(v_69);
    }
  else
    {
      t = u_69;
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
  ATerm x_100 = NULL,y_100 = NULL;
  if(((y_100 != NULL) && (y_100 != t)))
    _fail(t);
  else
    y_100 = t;
  t = xtc_convert_0_0(t);
  if(((x_100 != NULL) && (x_100 != t)))
    _fail(t);
  else
    x_100 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(x_100));
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm z_100 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_100 != NULL) && (z_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_100 = ATgetArgument(t, 0);
      {
        ATerm w_69 = ATgetArgument(t, 1);
        if(match_cons(w_69, sym_Stream_1))
          {
            if(((c_101 != NULL) && (c_101 != ATgetArgument(w_69, 0))))
              _fail(ATgetArgument(w_69, 0));
            else
              c_101 = ATgetArgument(w_69, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(z_100), not_null(c_101));
  if(((e_101 != NULL) && (e_101 != t)))
    _fail(t);
  else
    e_101 = t;
  if(((d_101 != NULL) && (d_101 != t)))
    _fail(t);
  else
    d_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_101));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
  if(((i_101 != NULL) && (i_101 != t)))
    _fail(t);
  else
    i_101 = t;
  if(((f_101 != NULL) && (f_101 != t)))
    _fail(t);
  else
    f_101 = t;
  t = not_null(i_101);
  if(((h_101 != NULL) && (h_101 != t)))
    _fail(t);
  else
    h_101 = t;
  t = term_n_13;
  t = log_stream_0_0(t);
  if(((g_101 != NULL) && (g_101 != t)))
    _fail(t);
  else
    g_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_101), not_null(g_101));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_70 = ATgetArgument(t, 0);
      if(match_cons(g_70, sym_Stream_1))
        {
          if(((j_101 != NULL) && (j_101 != ATgetArgument(g_70, 0))))
            _fail(ATgetArgument(g_70, 0));
          else
            j_101 = ATgetArgument(g_70, 0);
        }
      else
        _fail(t);
      if(((k_101 != NULL) && (k_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(j_101), not_null(k_101));
  if(((m_101 != NULL) && (m_101 != t)))
    _fail(t);
  else
    m_101 = t;
  if(((l_101 != NULL) && (l_101 != t)))
    _fail(t);
  else
    l_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_101));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm h_70 = t;
  int i_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_70;
      t = get_config_0_0(t);
      LocalPopChoice(i_70);
    }
  else
    {
      t = h_70;
      t = term_n_13;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm n_101 = NULL,o_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_101 != NULL) && (n_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_101 = ATgetArgument(t, 0);
      if(((o_101 != NULL) && (o_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_70 = t;
    int m_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(n_101), not_null(o_101));
        LocalPopChoice(m_70);
      }
    else
      {
        t = l_70;
        t = SSL_subtr(not_null(n_101), not_null(o_101));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  static ATerm p_101 (ATerm t);
  static ATerm p_101 (ATerm t)
  {
    ATerm p_70 = t;
    int q_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_116(t);
        LocalPopChoice(q_70);
      }
    else
      {
        t = p_70;
        t = n_116(t);
        t = p_101(t);
      }
    return(t);
  }
  t = p_101(t);
  return(t);
}
ATerm for_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  t = p_116(t);
  t = while_not_2_0(q_116, r_116, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_101 != NULL) && (q_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_101 = ATgetArgument(t, 0);
      if(((r_101 != NULL) && (r_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(q_101), not_null(r_101), (ATerm) ATempty);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_70 = ATgetArgument(t, 0);
      if(((ATgetType(r_70) != AT_INT) || (ATgetInt((ATermInt) r_70) != 0)))
        _fail(t);
      if(((s_101 != NULL) && (s_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_101 = ATgetArgument(t, 1);
      if(((t_101 != NULL) && (t_101 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(t_101);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL;
  if(match_cons(t, sym__3))
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
    }
  else
    _fail(t);
  if(((z_101 != NULL) && (z_101 != t)))
    _fail(t);
  else
    z_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_101), term_u_12);
  t = geq_0_0(t);
  t = not_null(z_101);
  if(((y_101 != NULL) && (y_101 != t)))
    _fail(t);
  else
    y_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_101), term_u_12);
  t = subt_0_0(t);
  if(((x_101 != NULL) && (x_101 != t)))
    _fail(t);
  else
    x_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(x_101), not_null(v_101), (ATerm) ATinsert(CheckATermList(not_null(w_101)), not_null(v_101)));
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
  ATerm a_102 = NULL;
  if(((a_102 != NULL) && (a_102 != t)))
    _fail(t);
  else
    a_102 = t;
  t = SSL_strlen(not_null(a_102));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm c_102 = NULL;
  if(((c_102 != NULL) && (c_102 != t)))
    _fail(t);
  else
    c_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_s_70;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_t_70;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_u_70;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_v_70;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_w_70;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_x_70;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_y_70;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_z_70;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_a_71;
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
  ATerm e_102 = NULL;
  if(((e_102 != NULL) && (e_102 != t)))
    _fail(t);
  else
    e_102 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  static ATerm f_102 (ATerm t);
  static ATerm f_102 (ATerm t)
  {
    ATerm b_71 = t;
    int c_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_7, f_102, t);
        LocalPopChoice(c_71);
      }
    else
      {
        t = b_71;
        t = d_124(t);
      }
    return(t);
  }
  t = f_102(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm g_102 = NULL;
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
            ATerm d_71 = ATgetFirst((ATermList) t);
            if(((ATgetType(d_71) != AT_INT) || (ATgetInt((ATermInt) d_71) != 47)))
              _fail(t);
            if(((g_102 != NULL) && (g_102 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              g_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(k_7, t);
      t = not_null(g_102);
      return(t);
    }
    t = try_1_0(j_7, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm e_71 = t;
  int m_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(m_71);
    }
  else
    {
      t = e_71;
      t = term_p_71;
    }
  return(t);
}
ATerm log_0_2 (ATerm e_79, ATerm f_79, ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    ATerm h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL;
    if(((h_102 != NULL) && (h_102 != t)))
      _fail(t);
    else
      h_102 = t;
    if(((l_102 != NULL) && (l_102 != t)))
      _fail(t);
    else
      l_102 = t;
    t = log_src_0_0(t);
    if(((i_102 != NULL) && (i_102 != t)))
      _fail(t);
    else
      i_102 = t;
    t = not_null(l_102);
    if(((k_102 != NULL) && (k_102 != t)))
      _fail(t);
    else
      k_102 = t;
    t = not_null(e_79);
    t = severity_string_0_0(t);
    if(((j_102 != NULL) && (j_102 != t)))
      _fail(t);
    else
      j_102 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_71), not_null(f_79)), term_s_71), not_null(i_102)), term_r_71), not_null(j_102)), term_q_71);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(h_102);
    return(t);
  }
  t = if_log_severity_1_1(l_7, not_null(e_79), t);
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm p_150 (ATerm), ATerm a_79, ATerm t)
{
  ATerm c_72 = t;
  int d_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL;
      if(((n_102 != NULL) && (n_102 != t)))
        _fail(t);
      else
        n_102 = t;
      if(((p_102 != NULL) && (p_102 != t)))
        _fail(t);
      else
        p_102 = t;
      t = term_r_12;
      {
        ATerm e_72 = t;
        int f_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(f_72);
          }
        else
          {
            t = e_72;
            t = term_g_72;
          }
      }
      if(((o_102 != NULL) && (o_102 != t)))
        _fail(t);
      else
        o_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_102), not_null(a_79));
      t = geq_0_0(t);
      t = not_null(n_102);
      LocalPopChoice(d_72);
      t = p_150(t);
    }
  else
    {
      t = c_72;
      {
        ATerm q_102 = NULL;
        if(((q_102 != NULL) && (q_102 != t)))
          _fail(t);
        else
          q_102 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm s_102 = NULL;
  if(((s_102 != NULL) && (s_102 != t)))
    _fail(t);
  else
    s_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_y_16;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_s_15;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_i_14;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_e_14;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_u_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_g_72;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_v_73;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_w_73;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_x_73;
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
ATerm if_log_severity_1_1 (ATerm q_150 (ATerm), ATerm g_79, ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL;
  if(((u_102 != NULL) && (u_102 != t)))
    _fail(t);
  else
    u_102 = t;
  if(((w_102 != NULL) && (w_102 != t)))
    _fail(t);
  else
    w_102 = t;
  t = not_null(g_79);
  t = verbose_level_0_0(t);
  if(((v_102 != NULL) && (v_102 != t)))
    _fail(t);
  else
    v_102 = t;
  if(((t_102 != NULL) && (t_102 != t)))
    _fail(t);
  else
    t_102 = t;
  t = not_null(u_102);
  t = log_if_verbose_1_1(q_150, not_null(t_102), t);
  return(t);
}
ATerm log_0_3 (ATerm b_79, ATerm c_79, ATerm d_79, ATerm t)
{
  static ATerm m_7 (ATerm t);
  static ATerm m_7 (ATerm t)
  {
    ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL;
    t = log_0_2(not_null(b_79), not_null(c_79), t);
    if(((x_102 != NULL) && (x_102 != t)))
      _fail(t);
    else
      x_102 = t;
    if(((b_103 != NULL) && (b_103 != t)))
      _fail(t);
    else
      b_103 = t;
    if(((d_103 != NULL) && (d_103 != t)))
      _fail(t);
    else
      d_103 = t;
    t = not_null(b_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((c_103 != NULL) && (c_103 != t)))
      _fail(t);
    else
      c_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_103), term_i_14);
    t = add_0_0(t);
    if(((a_103 != NULL) && (a_103 != t)))
      _fail(t);
    else
      a_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_103), term_y_73);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((z_102 != NULL) && (z_102 != t)))
      _fail(t);
    else
      z_102 = t;
    t = log_stream_0_0(t);
    if(((y_102 != NULL) && (y_102 != t)))
      _fail(t);
    else
      y_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_102), not_null(d_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_t_71;
    t = log_puts_0_0(t);
    t = not_null(x_102);
    return(t);
  }
  t = if_log_severity_1_1(m_7, not_null(b_79), t);
  return(t);
}
ATerm notice_0_1 (ATerm y_78, ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL;
  if(((j_103 != NULL) && (j_103 != t)))
    _fail(t);
  else
    j_103 = t;
  t = term_z_73;
  if(((e_103 != NULL) && (e_103 != t)))
    _fail(t);
  else
    e_103 = t;
  t = not_null(j_103);
  if(((g_103 != NULL) && (g_103 != t)))
    _fail(t);
  else
    g_103 = t;
  if(((i_103 != NULL) && (i_103 != t)))
    _fail(t);
  else
    i_103 = t;
  if(((h_103 != NULL) && (h_103 != t)))
    _fail(t);
  else
    h_103 = t;
  if(((f_103 != NULL) && (f_103 != t)))
    _fail(t);
  else
    f_103 = t;
  t = not_null(g_103);
  t = log_0_3(not_null(e_103), not_null(y_78), not_null(f_103), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_74 = ATgetArgument(t, 0);
      if(match_cons(a_74, sym_Stream_1))
        {
          if(((k_103 != NULL) && (k_103 != ATgetArgument(a_74, 0))))
            _fail(ATgetArgument(a_74, 0));
          else
            k_103 = ATgetArgument(a_74, 0);
        }
      else
        _fail(t);
      if(((l_103 != NULL) && (l_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(k_103), not_null(l_103));
  if(((n_103 != NULL) && (n_103 != t)))
    _fail(t);
  else
    n_103 = t;
  if(((m_103 != NULL) && (m_103 != t)))
    _fail(t);
  else
    m_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_103));
  return(t);
}
static ATerm a_104 (ATerm r_103, ATerm s_103, ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL;
  t = not_null(r_103);
  if(((t_103 != NULL) && (t_103 != t)))
    _fail(t);
  else
    t_103 = t;
  t = SSL_fclose(not_null(t_103));
  return(t);
}
static ATerm b_104 (ATerm v_103, ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL;
  t = not_null(v_103);
  if(((x_103 != NULL) && (x_103 != t)))
    _fail(t);
  else
    x_103 = t;
  t = SSL_fclose(not_null(x_103));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL;
  if(((z_103 != NULL) && (z_103 != t)))
    _fail(t);
  else
    z_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_103 = ATgetArgument(t, 0);
      {
        ATerm m_74 = t;
        int n_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_104(not_null(y_103), not_null(z_103), t);
            LocalPopChoice(n_74);
          }
        else
          {
            t = m_74;
            t = b_104(not_null(z_103), t);
          }
      }
    }
  else
    {
      t = b_104(not_null(z_103), t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_104 != NULL) && (c_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_104 = ATgetArgument(t, 0);
      if(((d_104 != NULL) && (d_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(c_104), not_null(d_104));
  if(((f_104 != NULL) && (f_104 != t)))
    _fail(t);
  else
    f_104 = t;
  if(((e_104 != NULL) && (e_104 != t)))
    _fail(t);
  else
    e_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_104));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL;
  t = SSL_stdin_stream();
  if(((h_104 != NULL) && (h_104 != t)))
    _fail(t);
  else
    h_104 = t;
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_104));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL;
  t = SSL_stdout_stream();
  if(((j_104 != NULL) && (j_104 != t)))
    _fail(t);
  else
    j_104 = t;
  if(((i_104 != NULL) && (i_104 != t)))
    _fail(t);
  else
    i_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_104));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL;
  t = SSL_stderr_stream();
  if(((l_104 != NULL) && (l_104 != t)))
    _fail(t);
  else
    l_104 = t;
  if(((k_104 != NULL) && (k_104 != t)))
    _fail(t);
  else
    k_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_104));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm n_104 = NULL;
  if(((n_104 != NULL) && (n_104 != t)))
    _fail(t);
  else
    n_104 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(n_104);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(n_104);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(n_104);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm q_104 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((q_104 != NULL) && (q_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(q_104);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm r_104 = NULL;
  if(((r_104 != NULL) && (r_104 != t)))
    _fail(t);
  else
    r_104 = t;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm s_104 = NULL;
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_74 = ATgetArgument(t, 0);
      ATerm p_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_74 = t;
    int r_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(r_74);
      }
    else
      {
        t = q_74;
        {
          ATerm s_74 = t;
          int t_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(n_7, o_7, t);
              t = fopen_0_0(t);
              LocalPopChoice(t_74);
            }
          else
            {
              t = s_74;
              t = _2_0(is_string_0_0, p_7, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_122 (ATerm), ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_104 != NULL) && (y_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_104 = ATgetArgument(t, 0);
      if(((t_104 != NULL) && (t_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_104);
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  if(((w_104 != NULL) && (w_104 != t)))
    _fail(t);
  else
    w_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_104), term_u_74);
  t = open_stream_0_0(t);
  if(((v_104 != NULL) && (v_104 != t)))
    _fail(t);
  else
    v_104 = t;
  if(((u_104 != NULL) && (u_104 != t)))
    _fail(t);
  else
    u_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_104), not_null(t_104));
  t = y_122(t);
  t = fclose_0_0(t);
  t = not_null(t_104);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm z_104 = NULL;
  if(((z_104 != NULL) && (z_104 != t)))
    _fail(t);
  else
    z_104 = t;
  t = SSL_creat(not_null(z_104));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
  static ATerm q_7 (ATerm t);
  static ATerm q_7 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_105 != NULL) && (a_105 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_105 = ATgetFirst((ATermList) t);
        {
          ATerm v_74 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(v_74) != AT_LIST) || !(ATisEmpty(v_74))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(q_7, t);
  if(((c_105 != NULL) && (c_105 != t)))
    _fail(t);
  else
    c_105 = t;
  if(((b_105 != NULL) && (b_105 != t)))
    _fail(t);
  else
    b_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_105), not_null(a_105));
  return(t);
}
ATerm repeat_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t)
{
  static ATerm d_105 (ATerm t);
  static ATerm d_105 (ATerm t)
  {
    ATerm j_75 = t;
    int b_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_115(t);
        t = d_105(t);
        LocalPopChoice(b_76);
      }
    else
      {
        t = j_75;
        t = w_115(t);
      }
    return(t);
  }
  t = d_105(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm f_105 = NULL;
  if(((f_105 != NULL) && (f_105 != t)))
    _fail(t);
  else
    f_105 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  t = repeat_2_0(y_115, r_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm i_105 = NULL;
  if(((i_105 != NULL) && (i_105 != t)))
    _fail(t);
  else
    i_105 = t;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm j_105 = NULL;
  if(((j_105 != NULL) && (j_105 != t)))
    _fail(t);
  else
    j_105 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm g_124 (ATerm), ATerm t)
{
  static ATerm k_105 (ATerm t);
  static ATerm k_105 (ATerm t)
  {
    ATerm c_76 = t;
    int t_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_7, Nil_0_0, t);
        t = g_124(t);
        LocalPopChoice(t_76);
      }
    else
      {
        t = c_76;
        t = Cons_2_0(t_7, k_105, t);
      }
    return(t);
  }
  t = k_105(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  t = at_last_1_0(Tl_0_0, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm a_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = a_134(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = try_1_0(v_7, t);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATinsert(ATempty, term_j_78);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(w_7, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_x_57);
        }
      else
        {
          t = repeat_1_0(z_7, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_j_78);
            }
          else
            {
              ATerm q_105 = NULL;
              if(((q_105 != NULL) && (q_105 != t)))
                _fail(t);
              else
                q_105 = t;
            }
        }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm n_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((n_105 != NULL) && (n_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_105 = ATgetArgument(t, 0);
      {
        ATerm i_79 = ATgetArgument(t, 1);
        if(((ATgetType(i_79) != AT_INT) || (ATgetInt((ATermInt) i_79) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(n_105);
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
  ATerm o_105 = NULL;
  if(((o_105 != NULL) && (o_105 != t)))
    _fail(t);
  else
    o_105 = t;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm j_79 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_79;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm p_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((p_105 != NULL) && (p_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_105 = ATgetArgument(t, 0);
      {
        ATerm k_79 = ATgetArgument(t, 1);
        if(((ATgetType(k_79) != AT_INT) || (ATgetInt((ATermInt) k_79) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(p_105);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(u_7, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm r_105 = NULL;
  if(((r_105 != NULL) && (r_105 != t)))
    _fail(t);
  else
    r_105 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(r_105);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm l_79 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_79;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL;
  if(((t_105 != NULL) && (t_105 != t)))
    _fail(t);
  else
    t_105 = t;
  if(((s_105 != NULL) && (s_105 != t)))
    _fail(t);
  else
    s_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_105), (ATerm) ATinsert(ATempty, term_m_79));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm s_79, ATerm t)
{
  ATerm n_79 = t;
  int o_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_105 = NULL;
      if(((u_105 != NULL) && (u_105 != t)))
        _fail(t);
      else
        u_105 = t;
      t = not_null(s_79);
      {
        ATerm p_79 = t;
        int q_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(q_79);
          }
        else
          {
            t = p_79;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(u_105);
      LocalPopChoice(o_79);
      {
        ATerm v_105 = NULL,w_105 = NULL;
        if(((w_105 != NULL) && (w_105 != t)))
          _fail(t);
        else
          w_105 = t;
        if(((v_105 != NULL) && (v_105 != t)))
          _fail(t);
        else
          v_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_79), not_null(v_105));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = n_79;
      {
        ATerm x_105 = NULL,y_105 = NULL;
        t = not_null(s_79);
        if(((y_105 != NULL) && (y_105 != t)))
          _fail(t);
        else
          y_105 = t;
        t = term_r_79;
        if(((x_105 != NULL) && (x_105 != t)))
          _fail(t);
        else
          x_105 = t;
        t = not_null(y_105);
        t = err_0_1(not_null(x_105), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm z_105 = NULL;
  if(((z_105 != NULL) && (z_105 != t)))
    _fail(t);
  else
    z_105 = t;
  {
    ATerm v_79 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_79;
      }
  }
  t = term_x_79;
  t = xtc_save_file_0_1(not_null(z_105), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm a_106 = NULL;
  if(((a_106 != NULL) && (a_106 != t)))
    _fail(t);
  else
    a_106 = t;
  {
    ATerm e_80 = t;
    int g_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_106 = NULL,c_106 = NULL;
        t = not_null(a_106);
        if(((c_106 != NULL) && (c_106 != t)))
          _fail(t);
        else
          c_106 = t;
        t = not_null(a_106);
        if(((b_106 != NULL) && (b_106 != t)))
          _fail(t);
        else
          b_106 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_106));
        t = read_from_0_0(t);
        LocalPopChoice(g_80);
      }
    else
      {
        t = e_80;
        {
          ATerm i_80 = t;
          int j_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_106 = NULL,e_106 = NULL,f_106 = NULL;
              t = not_null(a_106);
              if(((f_106 != NULL) && (f_106 != t)))
                _fail(t);
              else
                f_106 = t;
              t = not_null(a_106);
              t = xtc_create_new_0_0(t);
              t = not_null(f_106);
              if(((e_106 != NULL) && (e_106 != t)))
                _fail(t);
              else
                e_106 = t;
              if(((d_106 != NULL) && (d_106 != t)))
                _fail(t);
              else
                d_106 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_106));
              t = read_from_0_0(t);
              LocalPopChoice(j_80);
            }
          else
            {
              t = i_80;
              {
                ATerm g_106 = NULL,h_106 = NULL;
                t = not_null(a_106);
                if(((h_106 != NULL) && (h_106 != t)))
                  _fail(t);
                else
                  h_106 = t;
                t = term_v_80;
                if(((g_106 != NULL) && (g_106 != t)))
                  _fail(t);
                else
                  g_106 = t;
                t = not_null(h_106);
                t = err_0_1(not_null(g_106), t);
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
  ATerm i_106 = NULL;
  if(((i_106 != NULL) && (i_106 != t)))
    _fail(t);
  else
    i_106 = t;
  {
    ATerm w_80 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_106 = NULL,k_106 = NULL;
        t = not_null(i_106);
        if(((k_106 != NULL) && (k_106 != t)))
          _fail(t);
        else
          k_106 = t;
        t = not_null(i_106);
        if(((j_106 != NULL) && (j_106 != t)))
          _fail(t);
        else
          j_106 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(j_106));
        t = read_from_0_0(t);
        LocalPopChoice(k_81);
      }
    else
      {
        t = w_80;
        {
          ATerm l_106 = NULL,m_106 = NULL;
          t = not_null(i_106);
          if(((m_106 != NULL) && (m_106 != t)))
            _fail(t);
          else
            m_106 = t;
          t = term_l_81;
          if(((l_106 != NULL) && (l_106 != t)))
            _fail(t);
          else
            l_106 = t;
          t = not_null(m_106);
          t = err_0_1(not_null(l_106), t);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm r_106 = NULL;
  if(((r_106 != NULL) && (r_106 != t)))
    _fail(t);
  else
    r_106 = t;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm w_106 = NULL;
  if(((w_106 != NULL) && (w_106 != t)))
    _fail(t);
  else
    w_106 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm w_79, ATerm t)
{
  ATerm p_106 = NULL;
  if(((p_106 != NULL) && (p_106 != t)))
    _fail(t);
  else
    p_106 = t;
  {
    ATerm m_81 = t;
    int o_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_106 = NULL;
        if(((q_106 != NULL) && (q_106 != t)))
          _fail(t);
        else
          q_106 = t;
        t = is_url_http_0_0(t);
        t = not_null(q_106);
        LocalPopChoice(o_81);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = m_81;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm p_81 = t;
    int q_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(a_8, t);
        LocalPopChoice(q_81);
      }
    else
      {
        t = p_81;
        {
          ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL;
          if(((s_106 != NULL) && (s_106 != t)))
            _fail(t);
          else
            s_106 = t;
          if(((t_106 != NULL) && (t_106 != t)))
            _fail(t);
          else
            t_106 = t;
          t = not_null(p_106);
          if(((v_106 != NULL) && (v_106 != t)))
            _fail(t);
          else
            v_106 = t;
          t = term_r_81;
          if(((u_106 != NULL) && (u_106 != t)))
            _fail(t);
          else
            u_106 = t;
          t = not_null(v_106);
          t = notice_0_1(not_null(u_106), t);
          t = not_null(t_106);
          t = xtc_convert_repository_0_0(t);
        }
      }
  }
  t = Repository_1_0(b_8, t);
  t = xtc_aterm2table_0_1(not_null(w_79), t);
  return(t);
}
ATerm hashtable_keys_0_0 (ATerm t)
{
  ATerm x_106 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((x_106 != NULL) && (x_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(x_106));
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm y_106 = NULL;
  if(((y_106 != NULL) && (y_106 != t)))
    _fail(t);
  else
    y_106 = t;
  t = lookup_table_0_1(not_null(y_106), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm z_79, ATerm a_80, ATerm t)
{
  ATerm z_106 = NULL;
  if(((z_106 != NULL) && (z_106 != t)))
    _fail(t);
  else
    z_106 = t;
  {
    ATerm s_81 = t;
    int t_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_56;
        t = table_keys_0_0(t);
        {
          ATerm w_81 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_81;
            }
        }
        LocalPopChoice(t_81);
      }
    else
      {
        t = s_81;
        t = not_null(z_79);
        t = xtc_load_0_1(not_null(a_80), t);
      }
  }
  t = not_null(z_106);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm a_107 = NULL;
  if(((a_107 != NULL) && (a_107 != t)))
    _fail(t);
  else
    a_107 = t;
  t = SSL_getenv(not_null(a_107));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_81 = t;
  int y_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_81;
      t = getenv_0_0(t);
      LocalPopChoice(y_81);
    }
  else
    {
      t = x_81;
      {
        ATerm a_82 = t;
        int b_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(b_82);
          }
        else
          {
            t = a_82;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL;
  if(((e_107 != NULL) && (e_107 != t)))
    _fail(t);
  else
    e_107 = t;
  if(((g_107 != NULL) && (g_107 != t)))
    _fail(t);
  else
    g_107 = t;
  t = xtc_location_0_0(t);
  if(((f_107 != NULL) && (f_107 != t)))
    _fail(t);
  else
    f_107 = t;
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  t = not_null(e_107);
  if(((d_107 != NULL) && (d_107 != t)))
    _fail(t);
  else
    d_107 = t;
  t = (ATerm) ATempty;
  if(((c_107 != NULL) && (c_107 != t)))
    _fail(t);
  else
    c_107 = t;
  t = not_null(d_107);
  t = xtc_init_0_2(not_null(b_107), not_null(c_107), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t)
{
  ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,p_107 = NULL,q_107 = NULL,c_8 = NULL,f_12 = NULL;
  if(((p_107 != NULL) && (p_107 != t)))
    _fail(t);
  else
    p_107 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((i_107 != NULL) && (i_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_107 = ATgetArgument(t, 0);
      if(((j_107 != NULL) && (j_107 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_107 != NULL) && (q_107 != t)))
    _fail(t);
  else
    q_107 = t;
  t = SSLgetAnnotations(not_null(p_107));
  if(((h_107 != NULL) && (h_107 != t)))
    _fail(t);
  else
    h_107 = t;
  t = not_null(i_107);
  t = h_110(t);
  if(((k_107 != NULL) && (k_107 != t)))
    _fail(t);
  else
    k_107 = t;
  t = not_null(j_107);
  t = i_110(t);
  if(((l_107 != NULL) && (l_107 != t)))
    _fail(t);
  else
    l_107 = t;
  if(((n_107 != NULL) && (n_107 != t)))
    _fail(t);
  else
    n_107 = t;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(k_107), not_null(l_107));
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = SSLsetAnnotations(not_null(c_8), not_null(h_107));
  if(((m_107 != NULL) && (m_107 != t)))
    _fail(t);
  else
    m_107 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL,d_8 = NULL,g_12 = NULL;
  if(((w_107 != NULL) && (w_107 != t)))
    _fail(t);
  else
    w_107 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((s_107 != NULL) && (s_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((x_107 != NULL) && (x_107 != t)))
    _fail(t);
  else
    x_107 = t;
  t = SSLgetAnnotations(not_null(w_107));
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  t = not_null(s_107);
  t = g_110(t);
  if(((t_107 != NULL) && (t_107 != t)))
    _fail(t);
  else
    t_107 = t;
  if(((v_107 != NULL) && (v_107 != t)))
    _fail(t);
  else
    v_107 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(t_107));
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  t = SSLsetAnnotations(not_null(d_8), not_null(r_107));
  if(((u_107 != NULL) && (u_107 != t)))
    _fail(t);
  else
    u_107 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm y_107 = NULL;
  if(((y_107 != NULL) && (y_107 != t)))
    _fail(t);
  else
    y_107 = t;
  t = SSL_is_string(not_null(y_107));
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm a_108 = NULL,b_108 = NULL,c_108 = NULL;
  if(((c_108 != NULL) && (c_108 != t)))
    _fail(t);
  else
    c_108 = t;
  if(match_cons(t, sym__2))
    {
      a_108 = ATgetArgument(t, 0);
      b_108 = ATgetArgument(t, 1);
      {
        ATerm c_82 = t;
        int d_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
            t = not_null(c_108);
            if(((d_108 != NULL) && (d_108 != t)))
              _fail(t);
            else
              d_108 = t;
            t = not_null(c_108);
            if(((f_108 != NULL) && (f_108 != t)))
              _fail(t);
            else
              f_108 = t;
            t = not_null(d_108);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(d_108));
            LocalPopChoice(d_82);
          }
        else
          {
            t = c_82;
            {
              ATerm e_82 = t;
              int f_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL;
                  t = not_null(a_108);
                  if(((h_108 != NULL) && (h_108 != t)))
                    _fail(t);
                  else
                    h_108 = t;
                  t = not_null(b_108);
                  if(((g_108 != NULL) && (g_108 != t)))
                    _fail(t);
                  else
                    g_108 = t;
                  t = not_null(c_108);
                  if(((j_108 != NULL) && (j_108 != t)))
                    _fail(t);
                  else
                    j_108 = t;
                  t = not_null(h_108);
                  t = is_string_0_0(t);
                  t = not_null(g_108);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(h_108), not_null(g_108));
                  LocalPopChoice(f_82);
                }
              else
                {
                  t = e_82;
                  {
                    ATerm g_82 = t;
                    int h_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL;
                        t = not_null(a_108);
                        if(((k_108 != NULL) && (k_108 != t)))
                          _fail(t);
                        else
                          k_108 = t;
                        t = not_null(b_108);
                        if(((l_108 != NULL) && (l_108 != t)))
                          _fail(t);
                        else
                          l_108 = t;
                        t = not_null(c_108);
                        if(((m_108 != NULL) && (m_108 != t)))
                          _fail(t);
                        else
                          m_108 = t;
                        t = not_null(k_108);
                        t = is_string_0_0(t);
                        t = not_null(l_108);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(k_108), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_66, (ATerm) ATmakeAppl(sym_String_1, not_null(l_108)))));
                        LocalPopChoice(h_82);
                      }
                    else
                      {
                        t = g_82;
                        {
                          ATerm n_108 = NULL,o_108 = NULL;
                          t = not_null(c_108);
                          if(((n_108 != NULL) && (n_108 != t)))
                            _fail(t);
                          else
                            n_108 = t;
                          t = not_null(c_108);
                          if(((o_108 != NULL) && (o_108 != t)))
                            _fail(t);
                          else
                            o_108 = t;
                          t = not_null(n_108);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(n_108));
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
      ATerm i_82 = t;
      int j_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
          t = not_null(c_108);
          if(((p_108 != NULL) && (p_108 != t)))
            _fail(t);
          else
            p_108 = t;
          t = not_null(c_108);
          if(((r_108 != NULL) && (r_108 != t)))
            _fail(t);
          else
            r_108 = t;
          t = not_null(p_108);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(p_108));
          LocalPopChoice(j_82);
        }
      else
        {
          t = i_82;
          {
            ATerm s_108 = NULL,t_108 = NULL;
            t = not_null(c_108);
            if(((s_108 != NULL) && (s_108 != t)))
              _fail(t);
            else
              s_108 = t;
            t = not_null(c_108);
            if(((t_108 != NULL) && (t_108 != t)))
              _fail(t);
            else
              t_108 = t;
            t = not_null(s_108);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(s_108));
          }
        }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm d_109 = NULL;
  if(((d_109 != NULL) && (d_109 != t)))
    _fail(t);
  else
    d_109 = t;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm e_109 = NULL;
  if(((e_109 != NULL) && (e_109 != t)))
    _fail(t);
  else
    e_109 = t;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm f_109 = NULL;
  if(((f_109 != NULL) && (f_109 != t)))
    _fail(t);
  else
    f_109 = t;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm g_109 = NULL;
  if(((g_109 != NULL) && (g_109 != t)))
    _fail(t);
  else
    g_109 = t;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm h_109 = NULL;
  if(((h_109 != NULL) && (h_109 != t)))
    _fail(t);
  else
    h_109 = t;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm i_109 = NULL;
  if(((i_109 != NULL) && (i_109 != t)))
    _fail(t);
  else
    i_109 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm k_82 = t;
  int l_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_82 = t;
      if((PushChoice() == 0))
        {
          ATerm n_82 = t;
          int o_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(e_8, t);
              LocalPopChoice(o_82);
            }
          else
            {
              t = n_82;
              t = XtcQuery_2_0(f_8, g_8, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_82;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(t_0, t);
      LocalPopChoice(l_82);
    }
  else
    {
      t = k_82;
      {
        ATerm p_82 = t;
        int q_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(h_8, t);
            LocalPopChoice(q_82);
          }
        else
          {
            t = p_82;
            t = XtcQuery_2_0(i_8, j_8, t);
          }
      }
      {
        ATerm r_82 = t;
        int s_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(t_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(s_82);
          }
        else
          {
            t = r_82;
            {
              ATerm m_109 = NULL,p_109 = NULL;
              if(((m_109 != NULL) && (m_109 != t)))
                _fail(t);
              else
                m_109 = t;
              if(((p_109 != NULL) && (p_109 != t)))
                _fail(t);
              else
                p_109 = t;
              t = not_null(m_109);
              t = xtc_import_local_0_0(t);
              t = not_null(p_109);
              t = xtc_find_reg_local_1_0(t_0, t);
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
ATerm filter_1_0 (ATerm h_131 (ATerm), ATerm t)
{
  ATerm t_82 = t;
  int u_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(u_82);
    }
  else
    {
      t = t_82;
      {
        ATerm v_82 = t;
        int w_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_8 (ATerm t);
            static ATerm k_8 (ATerm t)
            {
              t = filter_1_0(h_131, t);
              return(t);
            }
            t = Cons_2_0(h_131, k_8, t);
            LocalPopChoice(w_82);
          }
        else
          {
            t = v_82;
            {
              ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL;
              if(((r_109 != NULL) && (r_109 != t)))
                _fail(t);
              else
                r_109 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((s_109 != NULL) && (s_109 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    s_109 = ATgetFirst((ATermList) t);
                  if(((t_109 != NULL) && (t_109 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    t_109 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(t_109);
              if(((u_109 != NULL) && (u_109 != t)))
                _fail(t);
              else
                u_109 = t;
              t = filter_1_0(h_131, t);
            }
          }
      }
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm x_82 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_82;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm v_109 = NULL;
  if(((v_109 != NULL) && (v_109 != t)))
    _fail(t);
  else
    v_109 = t;
  t = filter_1_0(l_8, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm y_82 = t;
  int z_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_109 = NULL;
      if(((x_109 != NULL) && (x_109 != t)))
        _fail(t);
      else
        x_109 = t;
      t = (ATerm) ATinsert(ATempty, term_t_18);
      {
        ATerm a_83 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_83;
          }
      }
      t = not_null(x_109);
      LocalPopChoice(z_82);
      {
        ATerm y_109 = NULL,z_109 = NULL;
        if(((z_109 != NULL) && (z_109 != t)))
          _fail(t);
        else
          z_109 = t;
        t = term_b_83;
        if(((y_109 != NULL) && (y_109 != t)))
          _fail(t);
        else
          y_109 = t;
        t = not_null(z_109);
        t = err_0_1(not_null(y_109), t);
        _fail(t);
      }
    }
  else
    {
      t = y_82;
      {
        ATerm a_110 = NULL;
        if(((a_110 != NULL) && (a_110 != t)))
          _fail(t);
        else
          a_110 = t;
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL;
  if(((c_110 != NULL) && (c_110 != t)))
    _fail(t);
  else
    c_110 = t;
  if(((b_110 != NULL) && (b_110 != t)))
    _fail(t);
  else
    b_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_v_18), term_u_18), not_null(b_110));
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
  ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL,j_110 = NULL,k_110 = NULL;
  if(((f_110 != NULL) && (f_110 != t)))
    _fail(t);
  else
    f_110 = t;
  if(((j_110 != NULL) && (j_110 != t)))
    _fail(t);
  else
    j_110 = t;
  t = not_null(f_110);
  if(((k_110 != NULL) && (k_110 != t)))
    _fail(t);
  else
    k_110 = t;
  t = SSL_explode_term(not_null(k_110));
  if(match_cons(t, sym__2))
    {
      ATerm c_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_83 = ATgetArgument(t, 1);
        if(((ATgetType(d_83) == AT_LIST) && !(ATisEmpty(d_83))))
          {
            if(((e_110 != NULL) && (e_110 != ATgetFirst((ATermList) d_83))))
              _fail(ATgetFirst((ATermList) d_83));
            else
              e_110 = ATgetFirst((ATermList) d_83);
            if(((d_110 != NULL) && (d_110 != (ATerm) ATgetNext((ATermList) d_83))))
              _fail((ATerm) ATgetNext((ATermList) d_83));
            else
              d_110 = (ATerm) ATgetNext((ATermList) d_83);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(e_110);
  return(t);
}
ATerm _2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,o_8 = NULL,h_12 = NULL;
  if(((s_110 != NULL) && (s_110 != t)))
    _fail(t);
  else
    s_110 = t;
  if(match_cons(t, sym__2))
    {
      if(((m_110 != NULL) && (m_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_110 = ATgetArgument(t, 0);
      if(((n_110 != NULL) && (n_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_110 != NULL) && (t_110 != t)))
    _fail(t);
  else
    t_110 = t;
  t = SSLgetAnnotations(not_null(s_110));
  if(((l_110 != NULL) && (l_110 != t)))
    _fail(t);
  else
    l_110 = t;
  t = not_null(m_110);
  t = a_101(t);
  if(((o_110 != NULL) && (o_110 != t)))
    _fail(t);
  else
    o_110 = t;
  t = not_null(n_110);
  t = b_101(t);
  if(((p_110 != NULL) && (p_110 != t)))
    _fail(t);
  else
    p_110 = t;
  if(((r_110 != NULL) && (r_110 != t)))
    _fail(t);
  else
    r_110 = t;
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_110), not_null(p_110));
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSLsetAnnotations(not_null(o_8), not_null(l_110));
  if(((q_110 != NULL) && (q_110 != t)))
    _fail(t);
  else
    q_110 = t;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm o_111 = NULL;
  if(((o_111 != NULL) && (o_111 != t)))
    _fail(t);
  else
    o_111 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm p_111 (ATerm t);
  static ATerm p_111 (ATerm t)
  {
    ATerm e_83 = t;
    int f_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,m_111 = NULL,n_111 = NULL;
        if(((y_110 != NULL) && (y_110 != t)))
          _fail(t);
        else
          y_110 = t;
        if(match_cons(t, sym__2))
          {
            if(((z_110 != NULL) && (z_110 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              z_110 = ATgetArgument(t, 0);
            if(((c_111 != NULL) && (c_111 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              c_111 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(z_110);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((a_111 != NULL) && (a_111 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              a_111 = ATgetFirst((ATermList) t);
            if(((b_111 != NULL) && (b_111 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              b_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_111);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_111 != NULL) && (d_111 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_111 = ATgetFirst((ATermList) t);
            if(((e_111 != NULL) && (e_111 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              e_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(a_111);
        if(((g_111 != NULL) && (g_111 != t)))
          _fail(t);
        else
          g_111 = t;
        t = not_null(b_111);
        if(((f_111 != NULL) && (f_111 != t)))
          _fail(t);
        else
          f_111 = t;
        t = not_null(d_111);
        if(((g_111 != NULL) && (g_111 != t)))
          _fail(t);
        else
          g_111 = t;
        t = not_null(e_111);
        if(((h_111 != NULL) && (h_111 != t)))
          _fail(t);
        else
          h_111 = t;
        t = not_null(y_110);
        if(((n_111 != NULL) && (n_111 != t)))
          _fail(t);
        else
          n_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_111), not_null(h_111));
        t = p_111(t);
        if(((m_111 != NULL) && (m_111 != t)))
          _fail(t);
        else
          m_111 = t;
        LocalPopChoice(f_83);
      }
    else
      {
        t = e_83;
        t = _2_0(p_8, Nil_0_0, t);
      }
    return(t);
  }
  t = p_111(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm string_starts_with_0_1 (ATerm d_43, ATerm t)
{
  ATerm q_111 = NULL,r_111 = NULL,s_111 = NULL,v_111 = NULL,w_111 = NULL;
  if(((q_111 != NULL) && (q_111 != t)))
    _fail(t);
  else
    q_111 = t;
  if(((w_111 != NULL) && (w_111 != t)))
    _fail(t);
  else
    w_111 = t;
  t = explode_string_0_0(t);
  if(((r_111 != NULL) && (r_111 != t)))
    _fail(t);
  else
    r_111 = t;
  t = not_null(w_111);
  if(((v_111 != NULL) && (v_111 != t)))
    _fail(t);
  else
    v_111 = t;
  t = not_null(d_43);
  t = explode_string_0_0(t);
  if(((s_111 != NULL) && (s_111 != t)))
    _fail(t);
  else
    s_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_111), not_null(s_111));
  t = left_match_0_0(t);
  t = not_null(q_111);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm y_111 = NULL;
  if(((y_111 != NULL) && (y_111 != t)))
    _fail(t);
  else
    y_111 = t;
  {
    ATerm g_83 = t;
    int h_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_111 = NULL,a_112 = NULL;
        t = not_null(y_111);
        if(((a_112 != NULL) && (a_112 != t)))
          _fail(t);
        else
          a_112 = t;
        t = term_i_83;
        if(((z_111 != NULL) && (z_111 != t)))
          _fail(t);
        else
          z_111 = t;
        t = not_null(a_112);
        t = string_starts_with_0_1(not_null(z_111), t);
        LocalPopChoice(h_83);
      }
    else
      {
        t = g_83;
        {
          ATerm b_112 = NULL,c_112 = NULL;
          t = not_null(y_111);
          if(((c_112 != NULL) && (c_112 != t)))
            _fail(t);
          else
            c_112 = t;
          t = term_j_83;
          if(((b_112 != NULL) && (b_112 != t)))
            _fail(t);
          else
            b_112 = t;
          t = not_null(c_112);
          t = string_starts_with_0_1(not_null(b_112), t);
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL;
  if(((e_112 != NULL) && (e_112 != t)))
    _fail(t);
  else
    e_112 = t;
  if(match_cons(t, sym_URL_1))
    {
      f_112 = ATgetArgument(t, 0);
      {
        ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
        t = not_null(f_112);
        if(((i_112 != NULL) && (i_112 != t)))
          _fail(t);
        else
          i_112 = t;
        t = is_url_http_0_0(t);
        if(((h_112 != NULL) && (h_112 != t)))
          _fail(t);
        else
          h_112 = t;
        if(((g_112 != NULL) && (g_112 != t)))
          _fail(t);
        else
          g_112 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_l_83), not_null(g_112));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm j_112 = NULL,k_112 = NULL;
          t = not_null(e_112);
          if(((k_112 != NULL) && (k_112 != t)))
            _fail(t);
          else
            k_112 = t;
          t = term_k_53;
          t = ReadFromFile_0_0(t);
          if(((j_112 != NULL) && (j_112 != t)))
            _fail(t);
          else
            j_112 = t;
        }
      else
        {
          ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((f_112 != NULL) && (f_112 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_112);
          if(((l_112 != NULL) && (l_112 != t)))
            _fail(t);
          else
            l_112 = t;
          t = not_null(e_112);
          if(((n_112 != NULL) && (n_112 != t)))
            _fail(t);
          else
            n_112 = t;
          t = not_null(l_112);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((m_112 != NULL) && (m_112 != t)))
            _fail(t);
          else
            m_112 = t;
        }
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
  ATerm o_112 = NULL,p_112 = NULL;
  if(((p_112 != NULL) && (p_112 != t)))
    _fail(t);
  else
    p_112 = t;
  t = get_errno_0_0(t);
  if(((o_112 != NULL) && (o_112 != t)))
    _fail(t);
  else
    o_112 = t;
  t = (ATerm) ATmakeAppl(sym_ErrorNumber_1, not_null(o_112));
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm q_112 = NULL,r_112 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_112 != NULL) && (r_112 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_112 = ATgetArgument(t, 0);
      if(((q_112 != NULL) && (q_112 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_83 = t;
    int n_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_rename(not_null(r_112), not_null(q_112));
        LocalPopChoice(n_83);
      }
    else
      {
        t = m_83;
        {
          ATerm s_112 = NULL;
          t = get_last_error_0_0(t);
          if(match_cons(t, sym_ErrorNumber_1))
            {
              if(((s_112 != NULL) && (s_112 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_n_13;
          t = EXDEV_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_112), not_null(q_112));
          t = copy_file_0_0(t);
          t = not_null(r_112);
          t = remove_file_0_0(t);
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  static ATerm k_113 (ATerm w_112, ATerm x_112, ATerm t);
  static ATerm l_113 (ATerm a_113, ATerm b_113, ATerm t);
  static ATerm k_113 (ATerm w_112, ATerm x_112, ATerm t)
  {
    ATerm y_112 = NULL,z_112 = NULL;
    t = not_null(w_112);
    if(((y_112 != NULL) && (y_112 != t)))
      _fail(t);
    else
      y_112 = t;
    t = not_null(x_112);
    if(((z_112 != NULL) && (z_112 != t)))
      _fail(t);
    else
      z_112 = t;
    t = r_0(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_112), term_o_83);
    t = copy_file_0_0(t);
    t = not_null(y_112);
    t = remove_file_0_0(t);
    t = term_o_83;
    return(t);
  }
  static ATerm l_113 (ATerm a_113, ATerm b_113, ATerm t)
  {
    ATerm c_113 = NULL,d_113 = NULL,e_113 = NULL;
    t = not_null(a_113);
    if(((c_113 != NULL) && (c_113 != t)))
      _fail(t);
    else
      c_113 = t;
    t = not_null(b_113);
    if(((e_113 != NULL) && (e_113 != t)))
      _fail(t);
    else
      e_113 = t;
    t = r_0(t);
    if(((d_113 != NULL) && (d_113 != t)))
      _fail(t);
    else
      d_113 = t;
    {
      ATerm p_83 = t;
      if((PushChoice() == 0))
        {
          ATerm q_83 = t;
          int r_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(r_83);
            }
          else
            {
              t = q_83;
              {
                ATerm f_113 = NULL;
                if(((f_113 != NULL) && (f_113 != t)))
                  _fail(t);
                else
                  f_113 = t;
                if(((c_113 != NULL) && (c_113 != t)))
                  _fail(t);
                else
                  c_113 = t;
                t = not_null(f_113);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_83;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_113), not_null(d_113));
    t = rename_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_113));
    return(t);
  }
  ATerm g_113 = NULL,h_113 = NULL;
  if(((g_113 != NULL) && (g_113 != t)))
    _fail(t);
  else
    g_113 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((h_113 != NULL) && (h_113 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_83 = t;
    int t_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_113(not_null(h_113), not_null(g_113), t);
        LocalPopChoice(t_83);
      }
    else
      {
        t = s_83;
        {
          ATerm u_83 = t;
          int v_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_113(not_null(h_113), not_null(g_113), t);
              LocalPopChoice(v_83);
            }
          else
            {
              t = u_83;
              {
                ATerm i_113 = NULL,j_113 = NULL;
                t = not_null(h_113);
                if(((i_113 != NULL) && (i_113 != t)))
                  _fail(t);
                else
                  i_113 = t;
                t = not_null(g_113);
                if(((j_113 != NULL) && (j_113 != t)))
                  _fail(t);
                else
                  j_113 = t;
                t = r_0(t);
                if(((i_113 != NULL) && (i_113 != t)))
                  _fail(t);
                else
                  i_113 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_113));
              }
            }
        }
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm i_114 (ATerm p_113, ATerm q_113, ATerm t);
  static ATerm j_114 (ATerm u_113, ATerm v_113, ATerm t);
  static ATerm i_114 (ATerm p_113, ATerm q_113, ATerm t)
  {
    ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
    t = not_null(p_113);
    if(((r_113 != NULL) && (r_113 != t)))
      _fail(t);
    else
      r_113 = t;
    t = not_null(q_113);
    if(((t_113 != NULL) && (t_113 != t)))
      _fail(t);
    else
      t_113 = t;
    t = p_0(t);
    if(((s_113 != NULL) && (s_113 != t)))
      _fail(t);
    else
      s_113 = t;
    {
      ATerm w_83 = t;
      int x_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          LocalPopChoice(x_83);
        }
      else
        {
          t = w_83;
          t = stderr_0_0(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_113), not_null(s_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_113));
    return(t);
  }
  static ATerm j_114 (ATerm u_113, ATerm v_113, ATerm t)
  {
    ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL;
    t = not_null(u_113);
    if(((w_113 != NULL) && (w_113 != t)))
      _fail(t);
    else
      w_113 = t;
    t = not_null(v_113);
    if(((y_113 != NULL) && (y_113 != t)))
      _fail(t);
    else
      y_113 = t;
    t = p_0(t);
    if(((x_113 != NULL) && (x_113 != t)))
      _fail(t);
    else
      x_113 = t;
    {
      ATerm y_83 = t;
      if((PushChoice() == 0))
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
              {
                ATerm b_84 = t;
                int c_84 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    LocalPopChoice(c_84);
                  }
                else
                  {
                    t = b_84;
                    {
                      ATerm z_113 = NULL;
                      if(((z_113 != NULL) && (z_113 != t)))
                        _fail(t);
                      else
                        z_113 = t;
                      if(((w_113 != NULL) && (w_113 != t)))
                        _fail(t);
                      else
                        w_113 = t;
                      t = not_null(z_113);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_83;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_113), not_null(x_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_113));
    return(t);
  }
  ATerm a_114 = NULL,b_114 = NULL;
  if(((a_114 != NULL) && (a_114 != t)))
    _fail(t);
  else
    a_114 = t;
  if(match_cons(t, sym_URL_1))
    {
      b_114 = ATgetArgument(t, 0);
      {
        ATerm d_84 = t;
        int e_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_114 = NULL,d_114 = NULL;
            t = not_null(b_114);
            if(((c_114 != NULL) && (c_114 != t)))
              _fail(t);
            else
              c_114 = t;
            t = not_null(a_114);
            if(((d_114 != NULL) && (d_114 != t)))
              _fail(t);
            else
              d_114 = t;
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(c_114));
            t = read_from_0_0(t);
            t = rename_to_1_0(p_0, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(c_114));
            LocalPopChoice(e_84);
          }
        else
          {
            t = d_84;
            {
              ATerm e_114 = NULL,f_114 = NULL;
              t = not_null(b_114);
              if(((e_114 != NULL) && (e_114 != t)))
                _fail(t);
              else
                e_114 = t;
              t = not_null(a_114);
              if(((f_114 != NULL) && (f_114 != t)))
                _fail(t);
              else
                f_114 = t;
              t = p_0(t);
              if(((e_114 != NULL) && (e_114 != t)))
                _fail(t);
              else
                e_114 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(e_114));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((b_114 != NULL) && (b_114 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm f_84 = t;
        int g_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_114(not_null(b_114), not_null(a_114), t);
            LocalPopChoice(g_84);
          }
        else
          {
            t = f_84;
            {
              ATerm h_84 = t;
              int i_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_114(not_null(b_114), not_null(a_114), t);
                  LocalPopChoice(i_84);
                }
              else
                {
                  t = h_84;
                  {
                    ATerm g_114 = NULL,h_114 = NULL;
                    t = not_null(b_114);
                    if(((g_114 != NULL) && (g_114 != t)))
                      _fail(t);
                    else
                      g_114 = t;
                    t = not_null(a_114);
                    if(((h_114 != NULL) && (h_114 != t)))
                      _fail(t);
                    else
                      h_114 = t;
                    t = p_0(t);
                    if(((g_114 != NULL) && (g_114 != t)))
                      _fail(t);
                    else
                      g_114 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_114));
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
  ATerm k_114 = NULL;
  if(((k_114 != NULL) && (k_114 != t)))
    _fail(t);
  else
    k_114 = t;
  t = SSL_concat_strings(not_null(k_114));
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm l_114 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_84 = ATgetFirst((ATermList) t);
      if(((l_114 != NULL) && (l_114 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(l_114);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm m_114 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((m_114 != NULL) && (m_114 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        m_114 = ATgetFirst((ATermList) t);
      {
        ATerm k_84 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(k_84) != AT_LIST) || !(ATisEmpty(k_84))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(m_114);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm l_84 = t;
  int m_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(m_84);
    }
  else
    {
      t = l_84;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm o_114 = NULL;
  if(((o_114 != NULL) && (o_114 != t)))
    _fail(t);
  else
    o_114 = t;
  t = SSL_implode_string(not_null(o_114));
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm q_114 = NULL;
  if(((q_114 != NULL) && (q_114 != t)))
    _fail(t);
  else
    q_114 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  static ATerm r_114 (ATerm t);
  static ATerm r_114 (ATerm t)
  {
    ATerm n_84 = t;
    int o_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_123(t);
        LocalPopChoice(o_84);
      }
    else
      {
        t = n_84;
        t = Cons_2_0(q_8, r_114, t);
      }
    return(t);
  }
  t = r_114(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm x_114 = NULL;
  if(((x_114 != NULL) && (x_114 != t)))
    _fail(t);
  else
    x_114 = t;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm z_114 = NULL;
  if(((z_114 != NULL) && (z_114 != t)))
    _fail(t);
  else
    z_114 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
  static ATerm r_8 (ATerm t);
  static ATerm r_8 (ATerm t)
  {
    t = Cons_2_0(r_123, s_8, t);
    {
      static ATerm u_8 (ATerm t);
      static ATerm u_8 (ATerm t)
      {
        if(((u_114 != NULL) && (u_114 != t)))
          _fail(t);
        else
          u_114 = t;
        return(t);
      }
      t = Cons_2_0(t_8, u_8, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_8, t);
  if(((w_114 != NULL) && (w_114 != t)))
    _fail(t);
  else
    w_114 = t;
  if(((v_114 != NULL) && (v_114 != t)))
    _fail(t);
  else
    v_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_114), not_null(u_114));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm e_133 (ATerm), ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL;
  ATerm p_84 = t;
  int q_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(e_133, t);
      LocalPopChoice(q_84);
    }
  else
    {
      t = p_84;
      {
        ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
        if(((e_115 != NULL) && (e_115 != t)))
          _fail(t);
        else
          e_115 = t;
        if(((g_115 != NULL) && (g_115 != t)))
          _fail(t);
        else
          g_115 = t;
        t = not_null(e_115);
        if(((f_115 != NULL) && (f_115 != t)))
          _fail(t);
        else
          f_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_115), (ATerm) ATempty);
      }
    }
  if(((h_115 != NULL) && (h_115 != t)))
    _fail(t);
  else
    h_115 = t;
  if(match_cons(t, sym__2))
    {
      if(((i_115 != NULL) && (i_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_115 = ATgetArgument(t, 0);
      if(((l_115 != NULL) && (l_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_115);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(l_115);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm o_115 = NULL,t_115 = NULL,u_115 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((m_115 != NULL) && (m_115 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                m_115 = ATgetFirst((ATermList) t);
              if(((n_115 != NULL) && (n_115 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                n_115 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(l_115);
          if(((o_115 != NULL) && (o_115 != t)))
            _fail(t);
          else
            o_115 = t;
          t = not_null(h_115);
          if(((u_115 != NULL) && (u_115 != t)))
            _fail(t);
          else
            u_115 = t;
          t = not_null(o_115);
          t = list_tokenize_1_0(e_133, t);
          if(((t_115 != NULL) && (t_115 != t)))
            _fail(t);
          else
            t_115 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_115 != NULL) && (j_115 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_115 = ATgetFirst((ATermList) t);
          if(((k_115 != NULL) && (k_115 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(l_115);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm z_115 = NULL;
          t = not_null(i_115);
          if(((z_115 != NULL) && (z_115 != t)))
            _fail(t);
          else
            z_115 = t;
          t = (ATerm) ATinsert(ATempty, not_null(z_115));
        }
      else
        {
          ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((m_115 != NULL) && (m_115 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                m_115 = ATgetFirst((ATermList) t);
              if(((n_115 != NULL) && (n_115 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                n_115 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(i_115);
          if(((a_116 != NULL) && (a_116 != t)))
            _fail(t);
          else
            a_116 = t;
          t = not_null(l_115);
          if(((b_116 != NULL) && (b_116 != t)))
            _fail(t);
          else
            b_116 = t;
          t = not_null(h_115);
          if(((d_116 != NULL) && (d_116 != t)))
            _fail(t);
          else
            d_116 = t;
          t = not_null(b_116);
          t = list_tokenize_1_0(e_133, t);
          if(((c_116 != NULL) && (c_116 != t)))
            _fail(t);
          else
            c_116 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(c_116)), not_null(a_116));
        }
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm e_116 = NULL;
  if(((e_116 != NULL) && (e_116 != t)))
    _fail(t);
  else
    e_116 = t;
  t = SSL_explode_string(not_null(e_116));
  return(t);
}
ATerm string_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = list_tokenize_1_0(d_133, t);
  t = map_1_0(implode_string_0_0, t);
  return(t);
}
ATerm string_tokenize_0_1 (ATerm e_46, ATerm t)
{
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    ATerm f_116 = NULL;
    static ATerm w_8 (ATerm t);
    static ATerm w_8 (ATerm t)
    {
      if(((f_116 != NULL) && (f_116 != t)))
        _fail(t);
      else
        f_116 = t;
      return(t);
    }
    if(((f_116 != NULL) && (f_116 != t)))
      _fail(t);
    else
      f_116 = t;
    t = not_null(e_46);
    t = fetch_1_0(w_8, t);
    return(t);
  }
  t = string_tokenize_1_0(v_8, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm g_116 = NULL,h_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_116 != NULL) && (g_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_116 = ATgetArgument(t, 0);
      if(((h_116 != NULL) && (h_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_116);
  t = string_tokenize_0_1(not_null(g_116), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL;
  if(((j_116 != NULL) && (j_116 != t)))
    _fail(t);
  else
    j_116 = t;
  if(((i_116 != NULL) && (i_116 != t)))
    _fail(t);
  else
    i_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_78), not_null(i_116));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm k_116 = NULL;
  if(((k_116 != NULL) && (k_116 != t)))
    _fail(t);
  else
    k_116 = t;
  t = SSL_S_ISDIR(not_null(k_116));
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm l_116 = NULL;
  if(((l_116 != NULL) && (l_116 != t)))
    _fail(t);
  else
    l_116 = t;
  t = SSL_perror(not_null(l_116));
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_116 != NULL) && (s_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_116 = ATgetArgument(t, 0);
      if(((t_116 != NULL) && (t_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_strcat(not_null(s_116), not_null(t_116));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = strcat_0_0(t);
  return(t);
}
static ATerm d_117 (ATerm v_116, ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL;
  t = not_null(v_116);
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  t = SSL_filemode(not_null(x_116));
  if(match_cons(t, sym__2))
    {
      if(((y_116 != NULL) && (y_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_116 = ATgetArgument(t, 0);
      {
        ATerm r_84 = ATgetArgument(t, 1);
        if(((ATgetType(r_84) != AT_INT) || (ATgetInt((ATermInt) r_84) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(y_116);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm z_116 = NULL;
  if(((z_116 != NULL) && (z_116 != t)))
    _fail(t);
  else
    z_116 = t;
  {
    ATerm s_84 = t;
    int t_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_117(not_null(z_116), t);
        LocalPopChoice(t_84);
      }
    else
      {
        t = s_84;
        {
          ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL;
          t = not_null(z_116);
          if(((c_117 != NULL) && (c_117 != t)))
            _fail(t);
          else
            c_117 = t;
          t = not_null(z_116);
          if(((b_117 != NULL) && (b_117 != t)))
            _fail(t);
          else
            b_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_84, not_null(b_117));
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
  ATerm e_117 = NULL,f_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_117 != NULL) && (e_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_117 = ATgetArgument(t, 0);
      if(((f_117 != NULL) && (f_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(e_117), not_null(f_117));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL;
  if(((h_117 != NULL) && (h_117 != t)))
    _fail(t);
  else
    h_117 = t;
  if(((g_117 != NULL) && (g_117 != t)))
    _fail(t);
  else
    g_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_117), (ATerm) ATinsert(ATempty, term_v_84));
  t = access_0_0(t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_117 != NULL) && (j_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_117 = ATgetArgument(t, 0);
      if(((i_117 != NULL) && (i_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_117 != NULL) && (l_117 != t)))
    _fail(t);
  else
    l_117 = t;
  {
    ATerm w_84 = t;
    int x_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_117 = NULL;
        if(((m_117 != NULL) && (m_117 != t)))
          _fail(t);
        else
          m_117 = t;
        t = not_null(i_117);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(m_117);
        LocalPopChoice(x_84);
        {
          ATerm n_117 = NULL,o_117 = NULL;
          if(((o_117 != NULL) && (o_117 != t)))
            _fail(t);
          else
            o_117 = t;
          t = not_null(j_117);
          t = base_filename_0_0(t);
          if(((n_117 != NULL) && (n_117 != t)))
            _fail(t);
          else
            n_117 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_117)), term_y_84), not_null(i_117));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = w_84;
        t = not_null(i_117);
      }
  }
  if(((k_117 != NULL) && (k_117 != t)))
    _fail(t);
  else
    k_117 = t;
  t = SSL_copy(not_null(j_117), not_null(k_117));
  return(t);
}
static ATerm w_117 (ATerm r_117, ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL;
  t = not_null(r_117);
  if(((t_117 != NULL) && (t_117 != t)))
    _fail(t);
  else
    t_117 = t;
  t = term_x_34;
  {
    ATerm z_84 = t;
    int a_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_85);
      }
    else
      {
        t = z_84;
        t = term_o_83;
      }
  }
  if(((s_117 != NULL) && (s_117 != t)))
    _fail(t);
  else
    s_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_53, not_null(s_117));
  t = copy_file_0_0(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm b_85 = t;
  int c_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_34;
      t = get_config_0_0(t);
      LocalPopChoice(c_85);
    }
  else
    {
      t = b_85;
      t = term_o_83;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL;
  if(((u_117 != NULL) && (u_117 != t)))
    _fail(t);
  else
    u_117 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = w_117(not_null(u_117), t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((v_117 != NULL) && (v_117 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(u_117);
      t = copy_to_1_0(x_8, t);
    }
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL,z_117 = NULL;
  if(((z_117 != NULL) && (z_117 != t)))
    _fail(t);
  else
    z_117 = t;
  if(match_cons(t, sym__2))
    {
      if(((x_117 != NULL) && (x_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_117 = ATgetArgument(t, 0);
      if(((y_117 != NULL) && (y_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(x_117), t);
  t = hashtable_remove_0_1(not_null(y_117), t);
  t = not_null(z_117);
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_118 != NULL) && (b_118 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_118 = ATgetArgument(t, 0);
      if(((c_118 != NULL) && (c_118 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_118 != NULL) && (d_118 != t)))
    _fail(t);
  else
    d_118 = t;
  {
    ATerm d_85 = t;
    int e_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_118), not_null(c_118));
        t = table_get_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_85 = ATgetFirst((ATermList) t);
            if(((a_118 != NULL) && (a_118 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_118 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_85);
        t = (ATerm) ATmakeAppl(sym__3, not_null(b_118), not_null(c_118), not_null(a_118));
        t = table_put_0_0(t);
      }
    else
      {
        t = d_85;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_118), not_null(c_118));
        t = table_remove_0_0(t);
      }
  }
  t = not_null(d_118);
  return(t);
}
ATerm end_scope_1_0 (ATerm u_111 (ATerm), ATerm t)
{
  ATerm e_118 = NULL,f_118 = NULL,g_118 = NULL,h_118 = NULL;
  if(((h_118 != NULL) && (h_118 != t)))
    _fail(t);
  else
    h_118 = t;
  t = u_111(t);
  if(((g_118 != NULL) && (g_118 != t)))
    _fail(t);
  else
    g_118 = t;
  {
    ATerm g_85 = t;
    int h_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_118), term_c_13);
        t = table_get_0_0(t);
        {
          ATerm i_85 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_85;
            }
        }
        LocalPopChoice(h_85);
      }
    else
      {
        t = g_85;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((f_118 != NULL) && (f_118 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        f_118 = ATgetFirst((ATermList) t);
      if(((e_118 != NULL) && (e_118 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        e_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(g_118), term_c_13, not_null(e_118));
  t = table_put_0_0(t);
  t = not_null(f_118);
  {
    static ATerm y_8 (ATerm t);
    static ATerm y_8 (ATerm t)
    {
      ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL;
      if(((i_118 != NULL) && (i_118 != t)))
        _fail(t);
      else
        i_118 = t;
      if(((k_118 != NULL) && (k_118 != t)))
        _fail(t);
      else
        k_118 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_118), not_null(i_118));
      t = table_pop_rm_0_0(t);
      if(((j_118 != NULL) && (j_118 != t)))
        _fail(t);
      else
        j_118 = t;
      return(t);
    }
    t = map_1_0(y_8, t);
  }
  t = not_null(h_118);
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm l_118 = NULL;
  if(((l_118 != NULL) && (l_118 != t)))
    _fail(t);
  else
    l_118 = t;
  t = SSL_remove(not_null(l_118));
  return(t);
}
ATerm restore_always_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t)
{
  ATerm j_85 = t;
  int k_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_115(t);
      t = s_115(t);
      LocalPopChoice(k_85);
    }
  else
    {
      t = j_85;
      t = s_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL;
  if(((n_118 != NULL) && (n_118 != t)))
    _fail(t);
  else
    n_118 = t;
  t = t_111(t);
  if(((m_118 != NULL) && (m_118 != t)))
    _fail(t);
  else
    m_118 = t;
  if(((p_118 != NULL) && (p_118 != t)))
    _fail(t);
  else
    p_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_118), term_c_13);
  {
    ATerm l_85 = t;
    int m_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(m_85);
      }
    else
      {
        t = l_85;
        t = (ATerm) ATempty;
      }
  }
  if(((o_118 != NULL) && (o_118 != t)))
    _fail(t);
  else
    o_118 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_118), term_c_13, (ATerm) ATinsert(CheckATermList(not_null(o_118)), (ATerm) ATempty));
  t = table_put_0_0(t);
  t = not_null(n_118);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_151 (ATerm), ATerm t)
{
  ATerm q_118 = NULL,r_118 = NULL;
  static ATerm a_9 (ATerm t);
  static ATerm a_9 (ATerm t)
  {
    ATerm s_118 = NULL;
    if(((s_118 != NULL) && (s_118 != t)))
      _fail(t);
    else
      s_118 = t;
    {
      ATerm n_85 = t;
      int o_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_p_85;
          t = table_get_0_0(t);
          LocalPopChoice(o_85);
        }
      else
        {
          t = n_85;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_118 != NULL) && (r_118 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_118 = ATgetFirst((ATermList) t);
        if(((q_118 != NULL) && (q_118 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          q_118 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = not_null(r_118);
    t = map_1_0(b_9, t);
    t = not_null(s_118);
    t = end_scope_1_0(c_9, t);
    return(t);
  }
  t = begin_scope_1_0(z_8, t);
  t = restore_always_2_0(u_151, a_9, t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_152 (ATerm), ATerm t)
{
  static ATerm d_9 (ATerm t);
  static ATerm d_9 (ATerm t)
  {
    ATerm r_85 = t;
    int s_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL;
        if(((t_118 != NULL) && (t_118 != t)))
          _fail(t);
        else
          t_118 = t;
        if(((v_118 != NULL) && (v_118 != t)))
          _fail(t);
        else
          v_118 = t;
        t = term_b_22;
        t = get_config_0_0(t);
        if(((u_118 != NULL) && (u_118 != t)))
          _fail(t);
        else
          u_118 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_118));
        LocalPopChoice(s_85);
      }
    else
      {
        t = r_85;
        t = term_k_53;
      }
    t = w_152(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm x_118 = NULL;
  if(((x_118 != NULL) && (x_118 != t)))
    _fail(t);
  else
    x_118 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(x_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(x_118);
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm y_118 = NULL,z_118 = NULL,a_119 = NULL;
  if(((y_118 != NULL) && (y_118 != t)))
    _fail(t);
  else
    y_118 = t;
  if(((a_119 != NULL) && (a_119 != t)))
    _fail(t);
  else
    a_119 = t;
  t = string_to_int_0_0(t);
  if(((z_118 != NULL) && (z_118 != t)))
    _fail(t);
  else
    z_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_85, not_null(z_118));
  t = set_config_0_0(t);
  t = not_null(y_118);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_u_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_9, f_9, g_9, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm b_119 = NULL;
  if(((b_119 != NULL) && (b_119 != t)))
    _fail(t);
  else
    b_119 = t;
  t = SSL_string_to_int(not_null(b_119));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm d_119 = NULL;
  if(((d_119 != NULL) && (d_119 != t)))
    _fail(t);
  else
    d_119 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(d_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(d_119);
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm e_119 = NULL;
  if(((e_119 != NULL) && (e_119 != t)))
    _fail(t);
  else
    e_119 = t;
  t = term_v_85;
  t = set_config_0_0(t);
  t = term_w_85;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_x_85;
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
  ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL;
  if(((h_119 != NULL) && (h_119 != t)))
    _fail(t);
  else
    h_119 = t;
  if(((j_119 != NULL) && (j_119 != t)))
    _fail(t);
  else
    j_119 = t;
  t = string_to_int_0_0(t);
  if(((i_119 != NULL) && (i_119 != t)))
    _fail(t);
  else
    i_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(i_119));
  t = set_config_0_0(t);
  t = not_null(h_119);
  if(((g_119 != NULL) && (g_119 != t)))
    _fail(t);
  else
    g_119 = t;
  if(((f_119 != NULL) && (f_119 != t)))
    _fail(t);
  else
    f_119 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_119));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_y_85;
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
  ATerm k_119 = NULL;
  if(((k_119 != NULL) && (k_119 != t)))
    _fail(t);
  else
    k_119 = t;
  t = term_z_85;
  t = set_config_0_0(t);
  t = term_a_86;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_b_86;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_86 = t;
  int d_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_9, i_9, j_9, t);
      LocalPopChoice(d_86);
    }
  else
    {
      t = c_86;
      {
        ATerm e_86 = t;
        int f_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_9, l_9, m_9, t);
            LocalPopChoice(f_86);
          }
        else
          {
            t = e_86;
            t = Option_3_0(n_9, o_9, p_9, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm g_86 = t;
  int h_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      LocalPopChoice(h_86);
    }
  else
    {
      t = g_86;
      t = keep_option_0_0(t);
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm m_119 = NULL;
  if(((m_119 != NULL) && (m_119 != t)))
    _fail(t);
  else
    m_119 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(m_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(m_119);
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL,r_119 = NULL;
  if(((p_119 != NULL) && (p_119 != t)))
    _fail(t);
  else
    p_119 = t;
  if(((r_119 != NULL) && (r_119 != t)))
    _fail(t);
  else
    r_119 = t;
  if(((q_119 != NULL) && (q_119 != t)))
    _fail(t);
  else
    q_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_34, not_null(q_119));
  t = set_config_0_0(t);
  t = not_null(p_119);
  if(((o_119 != NULL) && (o_119 != t)))
    _fail(t);
  else
    o_119 = t;
  if(((n_119 != NULL) && (n_119 != t)))
    _fail(t);
  else
    n_119 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_119));
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_i_86;
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
  ATerm s_119 = NULL;
  if(((s_119 != NULL) && (s_119 != t)))
    _fail(t);
  else
    s_119 = t;
  t = term_k_86;
  t = set_config_0_0(t);
  t = term_l_86;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_m_86;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_86 = t;
  int o_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(o_86);
    }
  else
    {
      t = n_86;
      t = Option_3_0(t_9, u_9, v_9, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL,z_119 = NULL;
  if(((v_119 != NULL) && (v_119 != t)))
    _fail(t);
  else
    v_119 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(v_119);
      t = register_usage_1_0(o_0, t);
    }
  else
    {
      ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_119 != NULL) && (w_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_119 = ATgetFirst((ATermList) t);
          if(((x_119 != NULL) && (x_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(x_119);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_119 != NULL) && (y_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_119 = ATgetFirst((ATermList) t);
          if(((z_119 != NULL) && (z_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_119);
      if(((c_120 != NULL) && (c_120 != t)))
        _fail(t);
      else
        c_120 = t;
      t = not_null(y_119);
      if(((a_120 != NULL) && (a_120 != t)))
        _fail(t);
      else
        a_120 = t;
      t = not_null(z_119);
      if(((b_120 != NULL) && (b_120 != t)))
        _fail(t);
      else
        b_120 = t;
      t = not_null(v_119);
      if(((f_120 != NULL) && (f_120 != t)))
        _fail(t);
      else
        f_120 = t;
      t = not_null(c_120);
      t = k_0(t);
      t = not_null(f_120);
      if(((e_120 != NULL) && (e_120 != t)))
        _fail(t);
      else
        e_120 = t;
      t = not_null(a_120);
      t = m_0(t);
      if(((d_120 != NULL) && (d_120 != t)))
        _fail(t);
      else
        d_120 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(b_120)), not_null(d_120));
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm h_120 = NULL;
  if(((h_120 != NULL) && (h_120 != t)))
    _fail(t);
  else
    h_120 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(h_120);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(h_120);
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL;
  if(((k_120 != NULL) && (k_120 != t)))
    _fail(t);
  else
    k_120 = t;
  if(((m_120 != NULL) && (m_120 != t)))
    _fail(t);
  else
    m_120 = t;
  if(((l_120 != NULL) && (l_120 != t)))
    _fail(t);
  else
    l_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, not_null(l_120));
  t = set_config_0_0(t);
  t = not_null(k_120);
  if(((j_120 != NULL) && (j_120 != t)))
    _fail(t);
  else
    j_120 = t;
  if(((i_120 != NULL) && (i_120 != t)))
    _fail(t);
  else
    i_120 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_120));
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_p_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, y_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm q_86 = t;
  int r_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = aterm_output_option_0_0(t);
            LocalPopChoice(t_86);
          }
        else
          {
            t = s_86;
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
  ATerm n_120 = NULL;
  if(((n_120 != NULL) && (n_120 != t)))
    _fail(t);
  else
    n_120 = t;
  t = term_u_86;
  t = set_config_0_0(t);
  t = term_y_47;
  t = set_config_0_0(t);
  t = not_null(n_120);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_v_86;
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
  ATerm o_120 = NULL;
  if(((o_120 != NULL) && (o_120 != t)))
    _fail(t);
  else
    o_120 = t;
  t = term_y_47;
  t = set_config_0_0(t);
  t = not_null(o_120);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_w_86;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(c_10, d_10, e_10, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm x_86 = t;
  int y_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(y_86);
    }
  else
    {
      t = x_86;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
ATerm long_description_1_0 (ATerm l_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm short_description_1_0 (ATerm k_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  static ATerm p_120 (ATerm t);
  static ATerm p_120 (ATerm t)
  {
    ATerm z_86 = t;
    int a_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(a_87);
      }
    else
      {
        t = z_86;
        t = Cons_2_0(g_123, p_120, t);
      }
    return(t);
  }
  t = p_120(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL,t_120 = NULL;
  if(((t_120 != NULL) && (t_120 != t)))
    _fail(t);
  else
    t_120 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_120 = ATgetFirst((ATermList) t);
      s_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_120 = NULL,v_120 = NULL,w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL;
        t = not_null(r_120);
        if(((u_120 != NULL) && (u_120 != t)))
          _fail(t);
        else
          u_120 = t;
        t = not_null(s_120);
        if(((v_120 != NULL) && (v_120 != t)))
          _fail(t);
        else
          v_120 = t;
        t = not_null(t_120);
        if(((x_120 != NULL) && (x_120 != t)))
          _fail(t);
        else
          x_120 = t;
        t = not_null(v_120);
        if(((z_120 != NULL) && (z_120 != t)))
          _fail(t);
        else
          z_120 = t;
        if(((e_121 != NULL) && (e_121 != t)))
          _fail(t);
        else
          e_121 = t;
        t = h_0(t);
        if(((a_121 != NULL) && (a_121 != t)))
          _fail(t);
        else
          a_121 = t;
        t = not_null(e_121);
        if(((d_121 != NULL) && (d_121 != t)))
          _fail(t);
        else
          d_121 = t;
        t = not_null(u_120);
        t = f_0(t);
        if(((c_121 != NULL) && (c_121 != t)))
          _fail(t);
        else
          c_121 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(a_121)), not_null(c_121));
        if(((y_120 != NULL) && (y_120 != t)))
          _fail(t);
        else
          y_120 = t;
        t = not_null(z_120);
        {
          static ATerm f_10 (ATerm t);
          static ATerm f_10 (ATerm t)
          {
            t = not_null(y_120);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_10, t);
        }
        if(((w_120 != NULL) && (w_120 != t)))
          _fail(t);
        else
          w_120 = t;
      }
    }
  else
    {
      ATerm f_121 = NULL,g_121 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(t_120);
      if(((g_121 != NULL) && (g_121 != t)))
        _fail(t);
      else
        g_121 = t;
      t = term_n_13;
      t = h_0(t);
      if(((f_121 != NULL) && (f_121 != t)))
        _fail(t);
      else
        f_121 = t;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm i_121 = NULL;
  if(((i_121 != NULL) && (i_121 != t)))
    _fail(t);
  else
    i_121 = t;
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
  ATerm k_121 = NULL,l_121 = NULL;
  if(((l_121 != NULL) && (l_121 != t)))
    _fail(t);
  else
    l_121 = t;
  if(((k_121 != NULL) && (k_121 != t)))
    _fail(t);
  else
    k_121 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_121)), term_b_87);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm m_145 (ATerm), ATerm n_145 (ATerm), ATerm t)
{
  ATerm j_121 = NULL;
  static ATerm m_10 (ATerm t);
  static ATerm m_10 (ATerm t)
  {
    ATerm m_121 = NULL,n_121 = NULL;
    if(((n_121 != NULL) && (n_121 != t)))
      _fail(t);
    else
      n_121 = t;
    t = n_145(t);
    if(((m_121 != NULL) && (m_121 != t)))
      _fail(t);
    else
      m_121 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(m_121)), term_t_71);
    t = echo_0_0(t);
    return(t);
  }
  ATerm c_87 = t;
  int d_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_87;
      t = get_config_0_0(t);
      if(((j_121 != NULL) && (j_121 != t)))
        _fail(t);
      else
        j_121 = t;
      LocalPopChoice(d_87);
    }
  else
    {
      t = c_87;
      {
        static ATerm i_10 (ATerm t);
        static ATerm i_10 (ATerm t)
        {
          static ATerm j_10 (ATerm t);
          static ATerm j_10 (ATerm t)
          {
            if(((j_121 != NULL) && (j_121 != t)))
              _fail(t);
            else
              j_121 = t;
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
      t = m_145(t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(k_10, t);
  }
  t = term_h_87;
  t = echo_0_0(t);
  t = term_k_87;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(l_10, t);
  t = try_1_0(m_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,n_10 = NULL,i_12 = NULL;
  if(((t_121 != NULL) && (t_121 != t)))
    _fail(t);
  else
    t_121 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((p_121 != NULL) && (p_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((u_121 != NULL) && (u_121 != t)))
    _fail(t);
  else
    u_121 = t;
  t = SSLgetAnnotations(not_null(t_121));
  if(((o_121 != NULL) && (o_121 != t)))
    _fail(t);
  else
    o_121 = t;
  t = not_null(p_121);
  t = a_109(t);
  if(((q_121 != NULL) && (q_121 != t)))
    _fail(t);
  else
    q_121 = t;
  if(((s_121 != NULL) && (s_121 != t)))
    _fail(t);
  else
    s_121 = t;
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_121));
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = SSLsetAnnotations(not_null(n_10), not_null(o_121));
  if(((r_121 != NULL) && (r_121 != t)))
    _fail(t);
  else
    r_121 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_121 = NULL,w_121 = NULL;
  static ATerm q_10 (ATerm t);
  static ATerm r_10 (ATerm t);
  static ATerm q_10 (ATerm t)
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      t = not_null(v_121);
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
      t = not_null(v_121);
      return(t);
    }
    t = long_description_1_0(t_10, t);
    return(t);
  }
  if(((w_121 != NULL) && (w_121 != t)))
    _fail(t);
  else
    w_121 = t;
  {
    ATerm l_87 = t;
    int m_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_87;
        t = get_config_0_0(t);
        if(((v_121 != NULL) && (v_121 != t)))
          _fail(t);
        else
          v_121 = t;
        LocalPopChoice(m_87);
      }
    else
      {
        t = l_87;
        {
          static ATerm o_10 (ATerm t);
          static ATerm o_10 (ATerm t)
          {
            static ATerm p_10 (ATerm t);
            static ATerm p_10 (ATerm t)
            {
              if(((v_121 != NULL) && (v_121 != t)))
                _fail(t);
              else
                v_121 = t;
              return(t);
            }
            t = Program_1_0(p_10, t);
            return(t);
          }
          t = option_defined_1_0(o_10, t);
        }
      }
  }
  t = not_null(w_121);
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
  ATerm n_87 = t;
  int o_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(o_87);
    }
  else
    {
      t = n_87;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm y_121 = NULL,z_121 = NULL,a_122 = NULL;
  if(((y_121 != NULL) && (y_121 != t)))
    _fail(t);
  else
    y_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(y_121);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((z_121 != NULL) && (z_121 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            z_121 = ATgetFirst((ATermList) t);
          if(((a_122 != NULL) && (a_122 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(y_121);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_122 = NULL,c_122 = NULL,d_122 = NULL;
  if(((b_122 != NULL) && (b_122 != t)))
    _fail(t);
  else
    b_122 = t;
  if(((d_122 != NULL) && (d_122 != t)))
    _fail(t);
  else
    d_122 = t;
  {
    ATerm p_87 = t;
    int q_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(q_87);
      }
    else
      {
        t = p_87;
        {
          ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL;
          if(((e_122 != NULL) && (e_122 != t)))
            _fail(t);
          else
            e_122 = t;
          if(((g_122 != NULL) && (g_122 != t)))
            _fail(t);
          else
            g_122 = t;
          t = not_null(e_122);
          if(((f_122 != NULL) && (f_122 != t)))
            _fail(t);
          else
            f_122 = t;
          t = (ATerm) ATinsert(ATempty, not_null(f_122));
        }
      }
  }
  if(((c_122 != NULL) && (c_122 != t)))
    _fail(t);
  else
    c_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_83, not_null(c_122));
  t = printnl_0_0(t);
  t = not_null(b_122);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_87;
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
  ATerm r_87 = t;
  int s_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(s_87);
    }
  else
    {
      t = r_87;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_122 = NULL,i_122 = NULL;
  t = report_run_time_0_0(t);
  if(((i_122 != NULL) && (i_122 != t)))
    _fail(t);
  else
    i_122 = t;
  t = term_n_13;
  t = whoami_0_0(t);
  if(((h_122 != NULL) && (h_122 != t)))
    _fail(t);
  else
    h_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, term_t_87), not_null(h_122)));
  t = printnl_0_0(t);
  t = term_u_12;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_87;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm j_122 = NULL;
  if(((j_122 != NULL) && (j_122 != t)))
    _fail(t);
  else
    j_122 = t;
  t = SSL_TicksToSeconds(not_null(j_122));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_122 != NULL) && (k_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_122 = ATgetArgument(t, 0);
      if(((l_122 != NULL) && (l_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_87 = t;
    int v_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(k_122), not_null(l_122));
        LocalPopChoice(v_87);
      }
    else
      {
        t = u_87;
        t = SSL_addr(not_null(k_122), not_null(l_122));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm t)
{
  ATerm w_87 = t;
  int x_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = d_130(t);
      LocalPopChoice(x_87);
    }
  else
    {
      t = w_87;
      {
        ATerm n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL;
        if(((n_122 != NULL) && (n_122 != t)))
          _fail(t);
        else
          n_122 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_122 != NULL) && (o_122 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_122 = ATgetFirst((ATermList) t);
            if(((p_122 != NULL) && (p_122 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(o_122);
        if(((q_122 != NULL) && (q_122 != t)))
          _fail(t);
        else
          q_122 = t;
        t = not_null(p_122);
        if(((r_122 != NULL) && (r_122 != t)))
          _fail(t);
        else
          r_122 = t;
        t = not_null(n_122);
        if(((t_122 != NULL) && (t_122 != t)))
          _fail(t);
        else
          t_122 = t;
        if(((v_122 != NULL) && (v_122 != t)))
          _fail(t);
        else
          v_122 = t;
        t = not_null(r_122);
        t = foldr_2_0(d_130, e_130, t);
        if(((u_122 != NULL) && (u_122 != t)))
          _fail(t);
        else
          u_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_122), not_null(u_122));
        t = e_130(t);
        if(((s_122 != NULL) && (s_122 != t)))
          _fail(t);
        else
          s_122 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm t)
{
  ATerm w_122 = NULL,x_122 = NULL,z_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL;
  if(((a_123 != NULL) && (a_123 != t)))
    _fail(t);
  else
    a_123 = t;
  if(((b_123 != NULL) && (b_123 != t)))
    _fail(t);
  else
    b_123 = t;
  t = not_null(a_123);
  if(((c_123 != NULL) && (c_123 != t)))
    _fail(t);
  else
    c_123 = t;
  t = SSL_explode_term(not_null(c_123));
  if(match_cons(t, sym__2))
    {
      ATerm z_87 = ATgetArgument(t, 0);
      if(((w_122 != NULL) && (w_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_123);
  if(((z_122 != NULL) && (z_122 != t)))
    _fail(t);
  else
    z_122 = t;
  t = not_null(w_122);
  t = foldr_2_0(a_135, b_135, t);
  if(((x_122 != NULL) && (x_122 != t)))
    _fail(t);
  else
    x_122 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_g_72;
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
  ATerm d_123 = NULL,f_123 = NULL,i_123 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_123 != NULL) && (d_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_123 = ATgetArgument(t, 0);
      if(((f_123 != NULL) && (f_123 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_123 != NULL) && (i_123 != t)))
    _fail(t);
  else
    i_123 = t;
  {
    ATerm a_88 = t;
    int b_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(d_123), not_null(f_123));
        LocalPopChoice(b_88);
      }
    else
      {
        t = a_88;
        t = SSL_gtr(not_null(d_123), not_null(f_123));
      }
  }
  t = not_null(i_123);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_123 = NULL;
  ATerm c_88 = t;
  int d_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_123 = NULL,m_123 = NULL,n_123 = NULL;
      if(((l_123 != NULL) && (l_123 != t)))
        _fail(t);
      else
        l_123 = t;
      if(match_cons(t, sym__2))
        {
          if(((m_123 != NULL) && (m_123 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_123 = ATgetArgument(t, 0);
          if(((n_123 != NULL) && (n_123 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(m_123);
      if(((k_123 != NULL) && (k_123 != t)))
        _fail(t);
      else
        k_123 = t;
      t = not_null(n_123);
      if(((k_123 != NULL) && (k_123 != t)))
        _fail(t);
      else
        k_123 = t;
      t = not_null(l_123);
      LocalPopChoice(d_88);
    }
  else
    {
      t = c_88;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_140 (ATerm), ATerm t)
{
  static ATerm v_10 (ATerm t);
  static ATerm v_10 (ATerm t)
  {
    ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL;
    if(((s_123 != NULL) && (s_123 != t)))
      _fail(t);
    else
      s_123 = t;
    if(((u_123 != NULL) && (u_123 != t)))
      _fail(t);
    else
      u_123 = t;
    t = term_r_12;
    t = get_config_0_0(t);
    if(((t_123 != NULL) && (t_123 != t)))
      _fail(t);
    else
      t_123 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_123), term_u_12);
    t = geq_0_0(t);
    t = not_null(s_123);
    t = j_140(t);
    return(t);
  }
  t = try_1_0(v_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm x_123 = NULL,y_123 = NULL,b_124 = NULL,c_124 = NULL;
  if(((c_124 != NULL) && (c_124 != t)))
    _fail(t);
  else
    c_124 = t;
  t = run_time_0_0(t);
  if(((x_123 != NULL) && (x_123 != t)))
    _fail(t);
  else
    x_123 = t;
  t = not_null(c_124);
  if(((b_124 != NULL) && (b_124 != t)))
    _fail(t);
  else
    b_124 = t;
  t = term_n_13;
  t = whoami_0_0(t);
  if(((y_123 != NULL) && (y_123 != t)))
    _fail(t);
  else
    y_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_88), not_null(x_123)), term_u_13), not_null(y_123)));
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
  t = term_g_72;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm f_124 = NULL,i_124 = NULL;
  if(((f_124 != NULL) && (f_124 != t)))
    _fail(t);
  else
    f_124 = t;
  if(((i_124 != NULL) && (i_124 != t)))
    _fail(t);
  else
    i_124 = t;
  t = term_f_88;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_88, term_g_88, not_null(f_124));
  t = table_put_0_0(t);
  t = not_null(i_124);
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm u_59, ATerm t)
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((j_124 != NULL) && (j_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(j_124), not_null(u_59));
  if(((l_124 != NULL) && (l_124 != t)))
    _fail(t);
  else
    l_124 = t;
  if(((k_124 != NULL) && (k_124 != t)))
    _fail(t);
  else
    k_124 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(k_124));
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((m_124 != NULL) && (m_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(m_124));
  if(((o_124 != NULL) && (o_124 != t)))
    _fail(t);
  else
    o_124 = t;
  if(((n_124 != NULL) && (n_124 != t)))
    _fail(t);
  else
    n_124 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(n_124));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_124 = NULL,q_124 = NULL,r_124 = NULL;
  if(((p_124 != NULL) && (p_124 != t)))
    _fail(t);
  else
    p_124 = t;
  if(((q_124 != NULL) && (q_124 != t)))
    _fail(t);
  else
    q_124 = t;
  t = table_hashtable_0_0(t);
  if(((r_124 != NULL) && (r_124 != t)))
    _fail(t);
  else
    r_124 = t;
  t = lookup_table_0_1(not_null(p_124), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(r_124);
  t = hashtable_remove_0_1(not_null(p_124), t);
  t = not_null(q_124);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm s_124 = NULL;
  if(((s_124 != NULL) && (s_124 != t)))
    _fail(t);
  else
    s_124 = t;
  t = SSL_exit(not_null(s_124));
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_124 != NULL) && (t_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_124 = ATgetArgument(t, 0);
      if(((u_124 != NULL) && (u_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((v_124 != NULL) && (v_124 != t)))
    _fail(t);
  else
    v_124 = t;
  t = SSL_printnl(not_null(t_124), not_null(u_124));
  t = not_null(v_124);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL,a_125 = NULL,b_125 = NULL,c_125 = NULL,x_10 = NULL,j_12 = NULL;
  if(((b_125 != NULL) && (b_125 != t)))
    _fail(t);
  else
    b_125 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((x_124 != NULL) && (x_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_125 != NULL) && (c_125 != t)))
    _fail(t);
  else
    c_125 = t;
  t = SSLgetAnnotations(not_null(b_125));
  if(((w_124 != NULL) && (w_124 != t)))
    _fail(t);
  else
    w_124 = t;
  t = not_null(x_124);
  t = b_109(t);
  if(((y_124 != NULL) && (y_124 != t)))
    _fail(t);
  else
    y_124 = t;
  if(((a_125 != NULL) && (a_125 != t)))
    _fail(t);
  else
    a_125 = t;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_124));
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  t = SSLsetAnnotations(not_null(x_10), not_null(w_124));
  if(((z_124 != NULL) && (z_124 != t)))
    _fail(t);
  else
    z_124 = t;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm f_125 = NULL;
  if(((f_125 != NULL) && (f_125 != t)))
    _fail(t);
  else
    f_125 = t;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm g_125 = NULL;
  if(((g_125 != NULL) && (g_125 != t)))
    _fail(t);
  else
    g_125 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm o_123 (ATerm), ATerm t)
{
  static ATerm h_125 (ATerm t);
  static ATerm h_125 (ATerm t)
  {
    ATerm h_88 = t;
    int i_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_123, y_10, t);
        LocalPopChoice(i_88);
      }
    else
      {
        t = h_88;
        t = Cons_2_0(z_10, h_125, t);
      }
    return(t);
  }
  t = h_125(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm d_144 (ATerm), ATerm t)
{
  t = fetch_1_0(d_144, t);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_125 = NULL,p_125 = NULL;
  if(((p_125 != NULL) && (p_125 != t)))
    _fail(t);
  else
    p_125 = t;
  if(((o_125 != NULL) && (o_125 != t)))
    _fail(t);
  else
    o_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_47, not_null(o_125));
  t = table_get_0_0(t);
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm y_114 (ATerm), ATerm t)
{
  ATerm j_88 = t;
  int k_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_114(t);
      LocalPopChoice(k_88);
    }
  else
    {
      t = j_88;
      {
        ATerm r_125 = NULL,s_125 = NULL;
        if(((r_125 != NULL) && (r_125 != t)))
          _fail(t);
        else
          r_125 = t;
        if(((s_125 != NULL) && (s_125 != t)))
          _fail(t);
        else
          s_125 = t;
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
  t = term_m_88;
  t = set_config_0_0(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_n_88;
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
  ATerm t_125 = NULL;
  if(((t_125 != NULL) && (t_125 != t)))
    _fail(t);
  else
    t_125 = t;
  t = term_m_88;
  t = set_config_0_0(t);
  t = term_p_88;
  t = set_config_0_0(t);
  t = term_q_88;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_r_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_88 = t;
  int t_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_11, b_11, c_11, t);
      LocalPopChoice(t_88);
    }
  else
    {
      t = s_88;
      t = Option_3_0(d_11, e_11, f_11, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_125 != NULL) && (u_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_125 = ATgetArgument(t, 0);
      if(((v_125 != NULL) && (v_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(u_125), t);
  t = hashtable_get_0_1(not_null(v_125), t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((x_125 != NULL) && (x_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_125 = ATgetArgument(t, 0);
      if(((y_125 != NULL) && (y_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_125 = ATgetArgument(t, 1);
      if(((w_125 != NULL) && (w_125 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_125 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((z_125 != NULL) && (z_125 != t)))
    _fail(t);
  else
    z_125 = t;
  if(((b_126 != NULL) && (b_126 != t)))
    _fail(t);
  else
    b_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_125), not_null(y_125));
  {
    ATerm u_88 = t;
    int v_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(v_88);
      }
    else
      {
        t = u_88;
        t = (ATerm) ATempty;
      }
  }
  if(((a_126 != NULL) && (a_126 != t)))
    _fail(t);
  else
    a_126 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(x_125), not_null(y_125), (ATerm) ATinsert(CheckATermList(not_null(a_126)), not_null(w_125)));
  t = table_put_0_0(t);
  t = not_null(z_125);
  return(t);
}
ATerm register_usage_1_0 (ATerm j_145 (ATerm), ATerm t)
{
  ATerm c_126 = NULL,d_126 = NULL;
  if(((d_126 != NULL) && (d_126 != t)))
    _fail(t);
  else
    d_126 = t;
  t = term_n_13;
  t = j_145(t);
  if(((c_126 != NULL) && (c_126 != t)))
    _fail(t);
  else
    c_126 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_87, term_j_87, not_null(c_126));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_126 = NULL,g_126 = NULL,h_126 = NULL;
  if(((f_126 != NULL) && (f_126 != t)))
    _fail(t);
  else
    f_126 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(f_126);
      t = register_usage_1_0(e_0, t);
    }
  else
    {
      ATerm i_126 = NULL,j_126 = NULL,k_126 = NULL,l_126 = NULL,m_126 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_126 != NULL) && (g_126 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_126 = ATgetFirst((ATermList) t);
          if(((h_126 != NULL) && (h_126 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_126 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_126);
      if(((j_126 != NULL) && (j_126 != t)))
        _fail(t);
      else
        j_126 = t;
      t = not_null(h_126);
      if(((i_126 != NULL) && (i_126 != t)))
        _fail(t);
      else
        i_126 = t;
      t = not_null(f_126);
      if(((m_126 != NULL) && (m_126 != t)))
        _fail(t);
      else
        m_126 = t;
      t = not_null(j_126);
      t = b_0(t);
      t = not_null(m_126);
      if(((l_126 != NULL) && (l_126 != t)))
        _fail(t);
      else
        l_126 = t;
      t = term_n_13;
      t = c_0(t);
      if(((k_126 != NULL) && (k_126 != t)))
        _fail(t);
      else
        k_126 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(i_126)), not_null(k_126));
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm o_126 = NULL;
  if(((o_126 != NULL) && (o_126 != t)))
    _fail(t);
  else
    o_126 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(o_126);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(o_126);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(o_126);
        }
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_x_88;
  t = set_config_0_0(t);
  t = term_y_88;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_z_88;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(g_11, h_11, i_11, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm p_126 = NULL,q_126 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((p_126 != NULL) && (p_126 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        p_126 = ATgetFirst((ATermList) t);
      if(((q_126 != NULL) && (q_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(q_126)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_126)));
  return(t);
}
ATerm Cons_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL,j_11 = NULL,k_12 = NULL;
  if(((y_126 != NULL) && (y_126 != t)))
    _fail(t);
  else
    y_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((s_126 != NULL) && (s_126 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        s_126 = ATgetFirst((ATermList) t);
      if(((t_126 != NULL) && (t_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        t_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((z_126 != NULL) && (z_126 != t)))
    _fail(t);
  else
    z_126 = t;
  t = SSLgetAnnotations(not_null(y_126));
  if(((r_126 != NULL) && (r_126 != t)))
    _fail(t);
  else
    r_126 = t;
  t = not_null(s_126);
  t = v_100(t);
  if(((u_126 != NULL) && (u_126 != t)))
    _fail(t);
  else
    u_126 = t;
  t = not_null(t_126);
  t = w_100(t);
  if(((v_126 != NULL) && (v_126 != t)))
    _fail(t);
  else
    v_126 = t;
  if(((x_126 != NULL) && (x_126 != t)))
    _fail(t);
  else
    x_126 = t;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(v_126)), not_null(u_126));
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = SSLsetAnnotations(not_null(j_11), not_null(r_126));
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
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
  ATerm a_127 = NULL,b_127 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_127 != NULL) && (a_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_127 = ATgetArgument(t, 0);
      if(((b_127 != NULL) && (b_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_47, not_null(a_127), not_null(b_127));
  t = table_put_0_0(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL;
  if(((g_127 != NULL) && (g_127 != t)))
    _fail(t);
  else
    g_127 = t;
  if(((i_127 != NULL) && (i_127 != t)))
    _fail(t);
  else
    i_127 = t;
  if(((h_127 != NULL) && (h_127 != t)))
    _fail(t);
  else
    h_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_87, not_null(h_127));
  t = set_config_0_0(t);
  t = not_null(g_127);
  if(((f_127 != NULL) && (f_127 != t)))
    _fail(t);
  else
    f_127 = t;
  if(((e_127 != NULL) && (e_127 != t)))
    _fail(t);
  else
    e_127 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_127));
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm j_127 = NULL;
  if(((j_127 != NULL) && (j_127 != t)))
    _fail(t);
  else
    j_127 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_145 (ATerm), ATerm t)
{
  ATerm d_127 = NULL;
  static ATerm m_11 (ATerm t);
  static ATerm m_11 (ATerm t)
  {
    ATerm a_89 = t;
    int b_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_89 = t;
        int d_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(d_89);
          }
        else
          {
            t = c_89;
            t = h_145(t);
            t = Cons_2_0(n_11, m_11, t);
          }
        LocalPopChoice(b_89);
      }
    else
      {
        t = a_89;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((d_127 != NULL) && (d_127 != t)))
    _fail(t);
  else
    d_127 = t;
  {
    static ATerm k_11 (ATerm t);
    static ATerm k_11 (ATerm t)
    {
      t = term_e_89;
      t = h_145(t);
      return(t);
    }
    t = try_1_0(k_11, t);
  }
  t = not_null(d_127);
  t = Cons_2_0(l_11, m_11, t);
  return(t);
}
ATerm hashtable_put_0_2 (ATerm p_59, ATerm q_59, ATerm t)
{
  ATerm n_127 = NULL,o_127 = NULL,r_127 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((n_127 != NULL) && (n_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(n_127), not_null(p_59), not_null(q_59));
  if(((r_127 != NULL) && (r_127 != t)))
    _fail(t);
  else
    r_127 = t;
  if(((o_127 != NULL) && (o_127 != t)))
    _fail(t);
  else
    o_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(o_127));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm s_59, ATerm t)
{
  ATerm u_127 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((u_127 != NULL) && (u_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(u_127), not_null(s_59));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm v_127 = NULL,w_127 = NULL;
  t = SSL_hashtable_create(not_null(x_59), not_null(y_59));
  if(((w_127 != NULL) && (w_127 != t)))
    _fail(t);
  else
    w_127 = t;
  if(((v_127 != NULL) && (v_127 != t)))
    _fail(t);
  else
    v_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(v_127));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL;
  if(((a_128 != NULL) && (a_128 != t)))
    _fail(t);
  else
    a_128 = t;
  t = term_f_89;
  if(((x_127 != NULL) && (x_127 != t)))
    _fail(t);
  else
    x_127 = t;
  t = not_null(a_128);
  if(((z_127 != NULL) && (z_127 != t)))
    _fail(t);
  else
    z_127 = t;
  t = term_g_89;
  if(((y_127 != NULL) && (y_127 != t)))
    _fail(t);
  else
    y_127 = t;
  t = not_null(z_127);
  t = new_hashtable_0_2(not_null(x_127), not_null(y_127), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL,e_128 = NULL;
  if(((b_128 != NULL) && (b_128 != t)))
    _fail(t);
  else
    b_128 = t;
  if(((e_128 != NULL) && (e_128 != t)))
    _fail(t);
  else
    e_128 = t;
  t = new_hashtable_0_0(t);
  if(((c_128 != NULL) && (c_128 != t)))
    _fail(t);
  else
    c_128 = t;
  t = not_null(e_128);
  if(((d_128 != NULL) && (d_128 != t)))
    _fail(t);
  else
    d_128 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(b_128), not_null(c_128), t);
  t = not_null(d_128);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_128 = NULL,g_128 = NULL;
  t = SSL_table_hashtable();
  if(((g_128 != NULL) && (g_128 != t)))
    _fail(t);
  else
    g_128 = t;
  if(((f_128 != NULL) && (f_128 != t)))
    _fail(t);
  else
    f_128 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(f_128));
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm h_89 = t;
    int i_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(m_56), t);
        LocalPopChoice(i_89);
      }
    else
      {
        t = h_89;
        {
          ATerm h_128 = NULL,i_128 = NULL;
          if(((h_128 != NULL) && (h_128 != t)))
            _fail(t);
          else
            h_128 = t;
          if(((i_128 != NULL) && (i_128 != t)))
            _fail(t);
          else
            i_128 = t;
          t = not_null(m_56);
          t = table_create_0_0(t);
          t = not_null(i_128);
          t = hashtable_get_0_1(not_null(m_56), t);
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL;
  if(((m_128 != NULL) && (m_128 != t)))
    _fail(t);
  else
    m_128 = t;
  if(match_cons(t, sym__3))
    {
      if(((j_128 != NULL) && (j_128 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_128 = ATgetArgument(t, 0);
      if(((k_128 != NULL) && (k_128 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_128 = ATgetArgument(t, 1);
      if(((l_128 != NULL) && (l_128 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_128 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(j_128), t);
  t = hashtable_put_0_2(not_null(k_128), not_null(l_128), t);
  t = not_null(m_128);
  return(t);
}
ATerm parse_options_3_0 (ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm g_145 (ATerm), ATerm t)
{
  ATerm o_128 = NULL,p_128 = NULL,q_128 = NULL;
  if(((q_128 != NULL) && (q_128 != t)))
    _fail(t);
  else
    q_128 = t;
  t = term_j_89;
  t = table_put_0_0(t);
  t = not_null(q_128);
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      ATerm k_89 = t;
      int l_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_145(t);
          LocalPopChoice(l_89);
        }
      else
        {
          t = k_89;
          {
            ATerm m_89 = t;
            int n_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(n_89);
              }
            else
              {
                t = m_89;
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
      ATerm o_89 = t;
      int p_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_128 (ATerm r_128, ATerm t);
          static ATerm v_128 (ATerm r_128, ATerm t)
          {
            ATerm s_128 = NULL;
            t = not_null(r_128);
            if(((s_128 != NULL) && (s_128 != t)))
              _fail(t);
            else
              s_128 = t;
            t = not_null(r_128);
            {
              ATerm q_89 = t;
              int r_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_88;
                  t = get_config_0_0(t);
                  LocalPopChoice(r_89);
                }
              else
                {
                  t = q_89;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(s_128);
            t = f_145(t);
            t = term_g_72;
            t = exit_0_0(t);
            return(t);
          }
          ATerm t_128 = NULL;
          if(((t_128 != NULL) && (t_128 != t)))
            _fail(t);
          else
            t_128 = t;
          {
            ATerm s_89 = t;
            int t_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_128(not_null(t_128), t);
                LocalPopChoice(t_89);
              }
            else
              {
                t = s_89;
                {
                  ATerm u_128 = NULL;
                  t = not_null(t_128);
                  if(((u_128 != NULL) && (u_128 != t)))
                    _fail(t);
                  else
                    u_128 = t;
                  t = term_l_88;
                  t = get_config_0_0(t);
                  t = not_null(u_128);
                  t = g_145(t);
                  t = term_g_72;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(p_89);
        }
      else
        {
          t = o_89;
          {
            static ATerm q_11 (ATerm t);
            static ATerm q_11 (ATerm t)
            {
              static ATerm r_11 (ATerm t);
              static ATerm r_11 (ATerm t)
              {
                if(((o_128 != NULL) && (o_128 != t)))
                  _fail(t);
                else
                  o_128 = t;
                return(t);
              }
              t = Undefined_1_0(r_11, t);
              return(t);
            }
            t = option_defined_1_0(q_11, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_128)), term_u_89));
          t = printnl_0_0(t);
          t = f_145(t);
          t = term_u_12;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(p_11, t);
  }
  if(((p_128 != NULL) && (p_128 != t)))
    _fail(t);
  else
    p_128 = t;
  t = term_i_87;
  t = table_destroy_0_0(t);
  t = not_null(p_128);
  return(t);
}
ATerm option_wrap_5_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm t)
{
  t = parse_options_3_0(h_143, i_143, j_143, t);
  t = store_options_0_0(t);
  t = k_143(t);
  {
    ATerm v_89 = t;
    int w_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(w_89);
      }
    else
      {
        t = v_89;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm t)
{
  t = option_wrap_5_0(d_143, e_143, system_about_0_0, f_143, g_143, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm x_128 = NULL;
  if(((x_128 != NULL) && (x_128 != t)))
    _fail(t);
  else
    x_128 = t;
  return(t);
}
ATerm option_wrap_2_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm t)
{
  t = option_wrap_4_0(b_143, system_usage_0_0, s_11, c_143, t);
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm g_152 (ATerm), ATerm h_152 (ATerm), ATerm t)
{
  static ATerm t_11 (ATerm t);
  static ATerm t_11 (ATerm t)
  {
    ATerm x_89 = t;
    int y_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_152(t);
        LocalPopChoice(y_89);
      }
    else
      {
        t = x_89;
        t = xtc_contract_options_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(t_11, h_152, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm p_152 (ATerm), ATerm q_152 (ATerm), ATerm t)
{
  static ATerm u_11 (ATerm t);
  static ATerm v_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    ATerm z_89 = t;
    int a_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_152(t);
        LocalPopChoice(a_90);
      }
    else
      {
        t = z_89;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm v_11 (ATerm t)
  {
    t = xtc_io_1_0(q_152, t);
    return(t);
  }
  t = xtc_wrap_2_0(u_11, v_11, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm n_152 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, n_152, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_b_90;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL;
  if(((l_129 != NULL) && (l_129 != t)))
    _fail(t);
  else
    l_129 = t;
  t = pass_verbose_0_0(t);
  if(((i_129 != NULL) && (i_129 != t)))
    _fail(t);
  else
    i_129 = t;
  t = not_null(l_129);
  if(((k_129 != NULL) && (k_129 != t)))
    _fail(t);
  else
    k_129 = t;
  t = xtc_pass_options_0_0(t);
  if(((j_129 != NULL) && (j_129 != t)))
    _fail(t);
  else
    j_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_129), not_null(j_129));
  t = conc_0_0(t);
  return(t);
}
ATerm main_test1_0_0 (ATerm t)
{
  ATerm y_128 = NULL;
  static ATerm w_11 (ATerm t);
  static ATerm w_11 (ATerm t)
  {
    ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL,c_129 = NULL,h_129 = NULL;
    t = read_from_0_0(t);
    if(((h_129 != NULL) && (h_129 != t)))
      _fail(t);
    else
      h_129 = t;
    if(((a_129 != NULL) && (a_129 != t)))
      _fail(t);
    else
      a_129 = t;
    t = not_null(h_129);
    if(((c_129 != NULL) && (c_129 != t)))
      _fail(t);
    else
      c_129 = t;
    if(((b_129 != NULL) && (b_129 != t)))
      _fail(t);
    else
      b_129 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_129), not_null(b_129));
    t = write_to_0_0(t);
    if(((z_128 != NULL) && (z_128 != t)))
      _fail(t);
    else
      z_128 = t;
    t = xtc_new_file_0_0(t);
    if(((y_128 != NULL) && (y_128 != t)))
      _fail(t);
    else
      y_128 = t;
    t = not_null(z_128);
    t = xtc_transform_2_0(x_11, y_11, t);
    return(t);
  }
  t = xtc_io_wrap_1_0(w_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_test1_0_0(t);
  return(t);
}
