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
static Symbol sym_Path_1;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
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
static Symbol sym_XtcReg_0;
static Symbol sym_XtcRef_0;
static Symbol sym_XtcCache_0;
static Symbol sym_XtcImported_0;
static Symbol sym_XtcLoaded_0;
static Symbol sym_XtcConf_4;
static Symbol sym_Tool_1;
static Symbol sym_Import_0;
static Symbol sym_TempFiles_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_Definition_2;
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Definition_2 = ATmakeSymbol("Definition", 2, ATfalse);
  ATprotectSymbol(sym_Definition_2);
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
}
static ATerm term_u_94;
static ATerm term_t_94;
static ATerm term_z_93;
static ATerm term_x_93;
static ATerm term_w_93;
static ATerm term_n_93;
static ATerm term_m_93;
static ATerm term_f_93;
static ATerm term_c_93;
static ATerm term_b_93;
static ATerm term_a_93;
static ATerm term_e_91;
static ATerm term_o_90;
static ATerm term_w_89;
static ATerm term_v_89;
static ATerm term_o_89;
static ATerm term_n_89;
static ATerm term_f_89;
static ATerm term_e_89;
static ATerm term_d_89;
static ATerm term_a_89;
static ATerm term_z_88;
static ATerm term_v_88;
static ATerm term_o_88;
static ATerm term_l_88;
static ATerm term_s_87;
static ATerm term_r_87;
static ATerm term_z_86;
static ATerm term_y_86;
static ATerm term_v_86;
static ATerm term_i_86;
static ATerm term_h_86;
static ATerm term_e_86;
static ATerm term_d_86;
static ATerm term_c_86;
static ATerm term_b_86;
static ATerm term_a_86;
static ATerm term_q_85;
static ATerm term_p_85;
static ATerm term_o_85;
static ATerm term_n_85;
static ATerm term_f_85;
static ATerm term_e_85;
static ATerm term_d_85;
static ATerm term_c_85;
static ATerm term_b_85;
static ATerm term_a_85;
static ATerm term_z_84;
static ATerm term_y_84;
static ATerm term_x_84;
static ATerm term_p_84;
static ATerm term_k_84;
static ATerm term_j_84;
static ATerm term_i_84;
static ATerm term_h_84;
static ATerm term_d_84;
static ATerm term_z_83;
static ATerm term_k_83;
static ATerm term_f_83;
static ATerm term_i_81;
static ATerm term_b_81;
static ATerm term_z_79;
static ATerm term_y_79;
static ATerm term_x_79;
static ATerm term_w_79;
static ATerm term_v_79;
static ATerm term_u_79;
static ATerm term_t_79;
static ATerm term_s_79;
static ATerm term_x_78;
static ATerm term_i_78;
static ATerm term_r_77;
static ATerm term_q_77;
static ATerm term_p_77;
static ATerm term_o_77;
static ATerm term_n_77;
static ATerm term_f_75;
static ATerm term_e_75;
static ATerm term_d_75;
static ATerm term_c_75;
static ATerm term_b_75;
static ATerm term_a_75;
static ATerm term_z_74;
static ATerm term_y_74;
static ATerm term_x_74;
static ATerm term_z_71;
static ATerm term_y_70;
static ATerm term_x_70;
static ATerm term_u_70;
static ATerm term_s_70;
static ATerm term_r_70;
static ATerm term_c_70;
static ATerm term_b_70;
static ATerm term_a_70;
static ATerm term_z_69;
static ATerm term_y_69;
static ATerm term_x_69;
static ATerm term_b_60;
static ATerm term_q_59;
static ATerm term_p_58;
static ATerm term_z_57;
static ATerm term_b_57;
static ATerm term_a_57;
static ATerm term_o_56;
static ATerm term_n_56;
static ATerm term_l_56;
static ATerm term_s_55;
static ATerm term_k_55;
static ATerm term_j_55;
static ATerm term_z_54;
static ATerm term_y_54;
static ATerm term_x_54;
static ATerm term_u_54;
static ATerm term_t_54;
static ATerm term_a_54;
static ATerm term_z_53;
static ATerm term_u_53;
static ATerm term_t_53;
static ATerm term_o_53;
static ATerm term_n_53;
static ATerm term_k_53;
static ATerm term_m_52;
static ATerm term_c_52;
static ATerm term_j_51;
static ATerm term_i_51;
static ATerm term_d_51;
static ATerm term_c_51;
static ATerm term_r_50;
static ATerm term_q_50;
static ATerm term_o_50;
static ATerm term_d_50;
static ATerm term_c_50;
static ATerm term_b_50;
static ATerm term_a_50;
static ATerm term_w_49;
static ATerm term_v_49;
static ATerm term_p_49;
static ATerm term_o_49;
static ATerm term_n_49;
static ATerm term_m_49;
static ATerm term_k_49;
static ATerm term_i_49;
static ATerm term_h_49;
static ATerm term_g_49;
static ATerm term_f_49;
static ATerm term_e_49;
static ATerm term_d_49;
static ATerm term_a_49;
static ATerm term_y_48;
static ATerm term_o_48;
static ATerm term_k_48;
static ATerm term_j_48;
static ATerm term_i_48;
static ATerm term_g_48;
static ATerm term_f_48;
static ATerm term_e_48;
static ATerm term_d_48;
static ATerm term_r_47;
static ATerm term_q_47;
static ATerm term_m_47;
static ATerm term_l_47;
static ATerm term_j_47;
static ATerm term_u_46;
static ATerm term_t_46;
static ATerm term_s_46;
static ATerm term_r_46;
static ATerm term_q_46;
static ATerm term_p_46;
static ATerm term_d_45;
static ATerm term_c_45;
static ATerm term_z_44;
static ATerm term_y_44;
static ATerm term_s_43;
static ATerm term_q_43;
static ATerm term_p_43;
static ATerm term_o_43;
static ATerm term_k_43;
static ATerm term_d_43;
static ATerm term_c_43;
static ATerm term_b_43;
static ATerm term_a_43;
static ATerm term_z_42;
static ATerm term_x_41;
static ATerm term_w_41;
static ATerm term_v_41;
static ATerm term_u_41;
static ATerm term_t_41;
static ATerm term_s_41;
static ATerm term_r_41;
static ATerm term_q_41;
static ATerm term_p_41;
static ATerm term_o_41;
static ATerm term_n_41;
static ATerm term_m_41;
static ATerm term_l_41;
static ATerm term_k_41;
static ATerm term_j_41;
static ATerm term_i_41;
static ATerm term_h_41;
static ATerm term_g_41;
static ATerm term_f_41;
static ATerm term_e_41;
static ATerm term_d_41;
static ATerm term_c_41;
static ATerm term_s_40;
static ATerm term_n_40;
static ATerm term_m_40;
static ATerm term_l_40;
static ATerm term_i_40;
static ATerm term_h_40;
static ATerm term_g_40;
static ATerm term_f_40;
static ATerm term_c_40;
static ATerm term_b_40;
static ATerm term_t_39;
static ATerm term_p_39;
static ATerm term_g_39;
static ATerm term_b_38;
static ATerm term_q_37;
static ATerm term_l_37;
static ATerm term_m_36;
static ATerm term_s_35;
static ATerm term_r_35;
static ATerm term_q_35;
static ATerm term_r_34;
static ATerm term_l_34;
static ATerm term_f_34;
static ATerm term_b_34;
static ATerm term_v_32;
static ATerm term_q_32;
static ATerm term_k_32;
static ATerm term_i_32;
static ATerm term_f_31;
static ATerm term_k_29;
static ATerm term_i_29;
static ATerm term_a_27;
static ATerm term_n_26;
static ATerm term_s_25;
static ATerm term_n_25;
static ATerm term_s_24;
static ATerm term_r_24;
static ATerm term_q_24;
static ATerm term_n_24;
static ATerm term_m_24;
static ATerm term_l_24;
static ATerm term_g_24;
static ATerm term_f_24;
static ATerm term_e_24;
static ATerm term_b_24;
static ATerm term_a_24;
static ATerm term_z_23;
static ATerm term_u_23;
static ATerm term_t_23;
static ATerm term_s_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_n_23;
static ATerm term_m_23;
static ATerm term_j_23;
static ATerm term_c_23;
static ATerm term_r_22;
static ATerm term_q_22;
static ATerm term_l_22;
static ATerm term_k_22;
static ATerm term_j_22;
static ATerm term_i_22;
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
static ATerm term_s_21;
static ATerm term_j_21;
static ATerm term_i_21;
static ATerm term_h_21;
static ATerm term_g_21;
static ATerm term_f_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_u_20;
static ATerm term_t_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_q_20;
static ATerm term_p_20;
static ATerm term_o_19;
static ATerm term_n_19;
static ATerm term_m_19;
static ATerm term_l_19;
static ATerm term_k_19;
static ATerm term_j_19;
static ATerm term_i_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_f_19;
static ATerm term_e_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_b_19;
static ATerm term_a_19;
static ATerm term_z_18;
static ATerm term_y_18;
static ATerm term_x_18;
static ATerm term_q_18;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_n_18;
static ATerm term_m_18;
static ATerm term_l_18;
static ATerm term_k_18;
static ATerm term_j_18;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_e_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_b_18;
static ATerm term_y_17;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_l_17;
static ATerm term_i_17;
static ATerm term_b_17;
static ATerm term_y_16;
static ATerm term_t_16;
static ATerm term_s_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_i_16;
static ATerm term_f_16;
static ATerm term_e_16;
static ATerm term_d_16;
static ATerm term_z_15;
static ATerm term_y_15;
static ATerm term_x_15;
static ATerm term_u_15;
static ATerm term_r_15;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_m_15;
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_h_15;
static ATerm term_e_15;
static ATerm term_d_15;
static ATerm term_v_14;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_m_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(", ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-M", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-transform", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-xtd", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".xtd", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Parsing definition", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition from file", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-defaults", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Registering using defaults", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("no-xtd", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Registering using definition file", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed!\n", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_c_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_d_15);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-m a | --meta a              Add ATerm a to meta information of tool", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-defaults                Toggle meta information defaults (default: on)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I loc | --Include loc       Include XTC definitions from directory\n", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_d_15);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_d_15);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_d_15);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-M | --Meta                  Show all meta-information of tool (default: off)", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_d_15);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_d_15);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_d_15);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register (-t tool)+ -V vers -l loc (-m aterm)*\n", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | (-t tool)+ [-V version] (-m aterm)*) [-L | -M]", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_i_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_d_15);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_d_15);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_d_15);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__3, term_h_21, term_i_21, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_String_1, term_n_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_m_23, term_o_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_String_1, term_s_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_m_23, term_t_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_String_1, term_z_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_m_23, term_a_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_String_1, term_e_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_m_23, term_f_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_String_1, term_l_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_m_23, term_m_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_String_1, term_q_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_m_23, term_r_24);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_n_25);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Template_2, term_n_26, term_a_27);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_s_25, term_i_29);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_38, term_f_18, term_g_39);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_39, term_b_40, term_c_40);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_40, term_h_40, term_i_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_40, term_n_40, term_s_40);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_41, term_e_41, term_f_41);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_41, term_i_41, term_j_41);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_41, term_m_41, term_n_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_41, term_q_41, term_r_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_41, term_u_41, term_v_41);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_41, term_z_42, term_a_43);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_43, term_d_43, term_k_43);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_43, term_q_43, term_s_43);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_44, term_c_45, term_d_45);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_46, term_j_47, term_l_47);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_47, term_r_47, term_d_48);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_48, term_g_48, term_i_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_48, term_o_48, term_y_48);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_49, term_e_49, term_f_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_49, term_i_49, term_k_49);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_49, term_o_49, term_p_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_49, term_a_50, term_b_50);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_50, term_o_50, term_q_50);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_51, term_d_51, term_i_51);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_52, term_m_52, term_k_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_53, term_t_53, term_u_53);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_54, term_t_54, term_u_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_54, term_z_54, term_j_55);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(sym_String_1, term_x_69);
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(sym_Some_1, term_y_69);
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(sym_File_1, term_z_69);
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(sym_Input_1, term_a_70);
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(sym_Some_1, term_b_70);
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_r_70);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(sym_Type_1, term_y_74);
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(sym_Some_1, term_z_74);
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(sym_Default_1, term_b_75);
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(sym_Some_1, term_c_75);
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_e_75);
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_n_77);
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_r_34);
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(sym_Some_1, term_r_77);
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(sym_String_1, term_x_78);
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(sym_Some_1, term_s_79);
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(sym_File_1, term_t_79);
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(sym_Output_1, term_u_79);
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(sym_Some_1, term_v_79);
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(sym_Streams_3, term_c_70, term_w_79, term_a_27);
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(sym_Exec_1, term_x_79);
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_y_79);
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(sym__2, term_i_84, term_j_84);
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_88));
  term_v_88 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_d_89));
  term_d_89 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_o_89));
  term_o_89 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_v_89));
  term_v_89 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_w_89));
  term_w_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_o_90));
  term_o_90 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_e_91));
  term_e_91 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_93));
  term_a_93 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_b_93));
  term_b_93 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_c_93));
  term_c_93 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_b_93);
  ATprotect(&(term_f_93));
  term_f_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_m_93));
  term_m_93 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_n_93));
  term_n_93 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_w_93));
  term_w_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_x_93));
  term_x_93 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_z_93));
  term_z_93 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_94));
  term_t_94 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_d_15);
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(ATmakeSymbol("Preloading ready", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm d_0 (ATerm t);
ATerm xtc_xtc_query_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_fetch_version_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm separate_by_0_1 (ATerm q_34, ATerm t);
ATerm separate_by_1_0 (ATerm h_124 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
ATerm xtc_print_0_1 (ATerm b_16, ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_xtc_query_all_0_0 (ATerm t);
ATerm xtc_xtc_query_repository_0_0 (ATerm t);
ATerm xtc_register_component_0_1 (ATerm o_3, ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm n_154 (ATerm), ATerm o_154 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm h_154 (ATerm), ATerm i_154 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_transform_1_0 (ATerm g_154 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm xtc_load_definition_0_0 (ATerm t);
static ATerm c_29 (ATerm t);
ATerm xtc_xtc_register_0_0 (ATerm t);
ATerm xtc_save_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_is_imported_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm xtc_ref2aterm_2_0 (ATerm z_151 (ATerm), ATerm a_152 (ATerm), ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm xtc_reg2aterm_1_0 (ATerm y_151 (ATerm), ATerm t);
ATerm split_2_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm t);
ATerm xtc_table2aterm_2_0 (ATerm w_151 (ATerm), ATerm x_151 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm xtc_save_0_1 (ATerm d_80, ATerm t);
ATerm xtc_xtc_save_0_0 (ATerm t);
ATerm xtc_register_reference_0_1 (ATerm n_3, ATerm t);
ATerm xtc_register_reference_0_0 (ATerm t);
ATerm xtc_xtc_reference_0_0 (ATerm t);
ATerm xtc_tool_0_0 (ATerm t);
ATerm dbg_0_1 (ATerm j_79, ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm xtc_create_tables_0_0 (ATerm t);
ATerm xtc_reset_0_0 (ATerm t);
ATerm xtc_load_deps_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm read_from_string_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm j_3 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm i_3 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm r_146 (ATerm), ATerm s_146 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm b_110 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm override_system_usage_0_0 (ATerm t);
ATerm system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm override_system_about_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm ticks_to_seconds_0_0 (ATerm t);
ATerm foldr_2_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm t);
ATerm crush_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_141 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm Undefined_1_0 (ATerm c_110 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm i_145 (ATerm), ATerm t);
ATerm Help_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm register_usage_1_0 (ATerm o_146 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm d_3 (ATerm), ATerm e_3 (ATerm), ATerm f_3 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm parse_options_p__1_0 (ATerm m_146 (ATerm), ATerm t);
ATerm parse_options_3_0 (ATerm j_146 (ATerm), ATerm k_146 (ATerm), ATerm l_146 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm q_144 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
ATerm option_wrap_2_0 (ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm t);
ATerm xtc_wrap_2_0 (ATerm l_153 (ATerm), ATerm m_153 (ATerm), ATerm t);
ATerm print_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm xtc_xtc_get_0_0 (ATerm t);
static ATerm f_43 (ATerm y_41, ATerm z_41, ATerm a_42, ATerm b_42, ATerm c_42, ATerm t);
ATerm xtc_get_0_0 (ATerm t);
ATerm xtc_xtc_call_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm m_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm l_80, ATerm t);
static ATerm c_6 (ATerm t);
ATerm xtc_register_0_1 (ATerm c_3, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm r_79, ATerm t);
ATerm Repository_1_0 (ATerm d_110 (ATerm), ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm basename_1_0 (ATerm n_135 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm notice_0_1 (ATerm i_79, ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm d_124 (ATerm), ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
ATerm repeat_1_0 (ATerm d_117 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm at_last_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm init_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm f_135 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm c_80, ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm err_0_1 (ATerm g_79, ATerm t);
static ATerm z_49 (ATerm j_49, ATerm l_49, ATerm t);
static ATerm e_50 (ATerm s_49, ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
static ATerm y_51 (ATerm k_51, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm call_1_0 (ATerm x_142 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm xtc_fetch_loc_0_0 (ATerm t);
ATerm xtc_find_loc_1_0 (ATerm v_154 (ATerm), ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm execvp_0_0 (ATerm t);
ATerm dup2_0_0 (ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm v_124 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm z_142 (ATerm), ATerm a_143 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm b_143 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm exec_http_0_1 (ATerm g_88, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm b_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm a_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm m_59 (ATerm s_58, ATerm t_58, ATerm t);
static ATerm n_59 (ATerm d_59, ATerm e_59, ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm b_61 (ATerm u_59, ATerm v_59, ATerm t);
static ATerm c_61 (ATerm q_60, ATerm r_60, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm u_110 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm d_63 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm t);
static ATerm e_63 (ATerm o_62, ATerm p_62, ATerm q_62, ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm b_65 (ATerm o_63, ATerm p_63, ATerm q_63, ATerm r_63, ATerm s_63, ATerm t_63, ATerm u_63, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm b_92, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm n_152 (ATerm), ATerm o_152 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
ATerm diff_1_0 (ATerm p_128 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm s_126 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm p_152 (ATerm), ATerm q_152 (ATerm), ATerm r_152 (ATerm), ATerm t);
static ATerm f_77 (ATerm h_71, ATerm m_71, ATerm n_71, ATerm o_71, ATerm p_71, ATerm t);
static ATerm g_77 (ATerm h_72, ATerm i_72, ATerm j_72, ATerm k_72, ATerm l_72, ATerm t);
static ATerm h_77 (ATerm z_72, ATerm a_73, ATerm b_73, ATerm c_73, ATerm d_73, ATerm t);
static ATerm i_77 (ATerm p_73, ATerm q_73, ATerm r_73, ATerm s_73, ATerm t_73, ATerm t);
static ATerm j_77 (ATerm c_74, ATerm d_74, ATerm e_74, ATerm f_74, ATerm g_74, ATerm t);
static ATerm k_77 (ATerm s_74, ATerm t_74, ATerm u_74, ATerm v_74, ATerm g_75, ATerm t);
static ATerm l_77 (ATerm q_75, ATerm r_75, ATerm s_75, ATerm t_75, ATerm u_75, ATerm t);
static ATerm m_77 (ATerm g_76, ATerm h_76, ATerm i_76, ATerm j_76, ATerm k_76, ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm z_2, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm y_2, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm w_2, ATerm x_2, ATerm t);
static ATerm h_9 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm i_92, ATerm j_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm u_0 (ATerm), ATerm z_0 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm z_131 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm t_152 (ATerm), ATerm g_92, ATerm h_92, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm s_152 (ATerm), ATerm e_92, ATerm f_92, ATerm t);
static ATerm p_9 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm m_0, ATerm o_0, ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm y_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm b_118 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm g_122 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm at_end_1_0 (ATerm a_125 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm v_105 (ATerm u_102, ATerm v_102, ATerm w_102, ATerm t);
static ATerm w_105 (ATerm j_103, ATerm k_103, ATerm t);
static ATerm x_105 (ATerm w_103, ATerm t);
static ATerm y_105 (ATerm b_104, ATerm t);
static ATerm z_105 (ATerm g_104, ATerm h_104, ATerm i_104, ATerm t);
static ATerm a_106 (ATerm o_104, ATerm p_104, ATerm q_104, ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm w_131 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm p_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm n_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm n_87, ATerm o_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm q_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm u_152 (ATerm), ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm i_125 (ATerm), ATerm t);
ATerm try_1_0 (ATerm d_116 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_0_2 (ATerm o_79, ATerm p_79, ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm log_if_verbose_1_1 (ATerm u_151 (ATerm), ATerm k_79, ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm if_log_severity_1_1 (ATerm v_151 (ATerm), ATerm q_79, ATerm t);
ATerm log_0_3 (ATerm l_79, ATerm m_79, ATerm n_79, ATerm t);
ATerm warn_0_1 (ATerm h_79, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm restore_always_2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t);
ATerm hashtable_remove_0_1 (ATerm e_60, ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm y_152 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm k_0 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm v_152 (ATerm), ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm h_0 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
ATerm restore_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t);
static ATerm p_11 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm y_85, ATerm t);
ATerm Some_1_0 (ATerm p_108 (ATerm), ATerm t);
ATerm option_1_0 (ATerm u_133 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm at_suffix_1_0 (ATerm e_125 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm split_fetch_1_0 (ATerm w_124 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm j_134 (ATerm), ATerm t);
ATerm string_tokenize_1_0 (ATerm i_134 (ATerm), ATerm t);
ATerm string_tokenize_0_1 (ATerm o_46, ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
static ATerm y_120 (ATerm r_120, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm xtc_command_1_0 (ATerm f_0 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm t_110 (ATerm), ATerm t);
ATerm close_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm assert_1_0 (ATerm c_113 (ATerm), ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_154 (ATerm), ATerm r_154 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm k_154 (ATerm), ATerm l_154 (ATerm), ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm b_152 (ATerm), ATerm c_152 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm j_136 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm collect_all_2_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm i_130 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm e_0, ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm set_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm fetch_1_0 (ATerm t_124 (ATerm), ATerm t);
ATerm HdMember_p__2_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t);
static ATerm v_12 (ATerm t);
ATerm union_1_0 (ATerm u_128 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm xtc_cache_put_0_1 (ATerm r_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_124 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm h_152 (ATerm), ATerm i_152 (ATerm), ATerm f_82, ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm xtc_query_one_2_1 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm e_82, ATerm t);
ATerm xtc_query_all_2_0 (ATerm d_152 (ATerm), ATerm e_152 (ATerm), ATerm t);
static ATerm d_13 (ATerm t);
ATerm xtc_search_1_0 (ATerm c_0 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm getenv_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_init_0_0 (ATerm t);
ATerm XtcQuery_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t);
ATerm XtcQuery_1_0 (ATerm m_111 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm xtc_desugar_query_0_0 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm b_0 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm m_132 (ATerm), ATerm t);
static ATerm p_13 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm _2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm t);
static ATerm t_13 (ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm n_43, ATerm t);
ATerm is_url_http_0_0 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm xtc_load_0_1 (ATerm g_80, ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm hashtable_get_0_1 (ATerm c_60, ATerm t);
ATerm hashtable_put_0_2 (ATerm z_59, ATerm a_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_60, ATerm i_60, ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm w_56, ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm xtc_init_0_2 (ATerm j_80, ATerm k_80, ATerm t);
ATerm xtc_init_0_1 (ATerm i_80, ATerm t);
static ATerm j_141 (ATerm z_139, ATerm a_140, ATerm b_140, ATerm c_140, ATerm d_140, ATerm e_140, ATerm t);
ATerm xtc_call_0_0 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm main_xtc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  ATerm d_25 = NULL;
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  return(t);
}
ATerm xtc_xtc_query_0_0 (ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm y_24 = NULL,z_24 = NULL;
    if(((y_24 != NULL) && (y_24 != t)))
      _fail(t);
    else
      y_24 = t;
    if(((z_24 != NULL) && (z_24 != t)))
      _fail(t);
    else
      z_24 = t;
    {
      ATerm k_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_25 = NULL,b_25 = NULL;
          t = not_null(z_24);
          if(((b_25 != NULL) && (b_25 != t)))
            _fail(t);
          else
            b_25 = t;
          t = term_m_14;
          t = get_config_0_0(t);
          if(((a_25 != NULL) && (a_25 != t)))
            _fail(t);
          else
            a_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(a_25));
          LocalPopChoice(l_14);
        }
      else
        {
          t = k_14;
          {
            ATerm c_25 = NULL;
            t = not_null(z_24);
            if(((c_25 != NULL) && (c_25 != t)))
              _fail(t);
            else
              c_25 = t;
          }
        }
    }
    {
      ATerm n_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = xtc_find_reg_1_0(d_0, t);
          LocalPopChoice(o_14);
          {
            static ATerm g_0 (ATerm t);
            static ATerm g_0 (ATerm t)
            {
              ATerm p_14 = t;
              int q_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_25 = NULL;
                  if(((e_25 != NULL) && (e_25 != t)))
                    _fail(t);
                  else
                    e_25 = t;
                  t = term_r_14;
                  t = get_config_0_0(t);
                  t = not_null(e_25);
                  LocalPopChoice(q_14);
                  {
                    ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
                    if(((g_25 != NULL) && (g_25 != t)))
                      _fail(t);
                    else
                      g_25 = t;
                    if(((i_25 != NULL) && (i_25 != t)))
                      _fail(t);
                    else
                      i_25 = t;
                    t = term_r_14;
                    t = get_config_0_0(t);
                    if(((h_25 != NULL) && (h_25 != t)))
                      _fail(t);
                    else
                      h_25 = t;
                    if(((f_25 != NULL) && (f_25 != t)))
                      _fail(t);
                    else
                      f_25 = t;
                    t = not_null(g_25);
                    t = xtc_has_meta_0_1(not_null(f_25), t);
                    t = xtc_print_0_1(not_null(y_24), t);
                  }
                }
              else
                {
                  t = p_14;
                  t = xtc_print_0_1(not_null(y_24), t);
                }
              return(t);
            }
            t = SRTS_some(g_0, t);
          }
        }
      else
        {
          t = n_14;
          t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_14), term_t_14), not_null(y_24)));
          t = print_0_0(t);
        }
    }
    return(t);
  }
  t = term_v_14;
  t = get_config_0_0(t);
  t = map_1_0(a_0, t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym_XtcMeta_2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("version", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(match_cons(x_14, sym_String_1))
          {
            if(((l_25 != NULL) && (l_25 != ATgetArgument(x_14, 0))))
              _fail(ATgetArgument(x_14, 0));
            else
              l_25 = ATgetArgument(x_14, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(l_25);
  return(t);
}
ATerm xtc_fetch_version_0_0 (ATerm t)
{
  ATerm j_25 = NULL;
  t = filter_1_0(i_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((j_25 != NULL) && (j_25 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        j_25 = ATgetFirst((ATermList) t);
      {
        ATerm y_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(j_25);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm o_25 = NULL;
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm r_25 = NULL;
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  return(t);
}
ATerm separate_by_0_1 (ATerm q_34, ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        static ATerm l_0 (ATerm t);
        static ATerm l_0 (ATerm t)
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              {
                ATerm p_25 = NULL,q_25 = NULL;
                t = Cons_2_0(n_0, l_0, t);
                if(((q_25 != NULL) && (q_25 != t)))
                  _fail(t);
                else
                  q_25 = t;
                if(((p_25 != NULL) && (p_25 != t)))
                  _fail(t);
                else
                  p_25 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(p_25)), not_null(q_34));
              }
            }
          return(t);
        }
        t = Cons_2_0(j_0, l_0, t);
      }
    }
  return(t);
}
ATerm separate_by_1_0 (ATerm h_124 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  if(((w_25 != NULL) && (w_25 != t)))
    _fail(t);
  else
    w_25 = t;
  t = term_d_15;
  t = h_124(t);
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  if(((t_25 != NULL) && (t_25 != t)))
    _fail(t);
  else
    t_25 = t;
  t = not_null(u_25);
  t = separate_by_0_1(not_null(t_25), t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_e_15;
  return(t);
}
ATerm xtc_print_0_1 (ATerm b_16, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_25 = NULL;
      if(((z_25 != NULL) && (z_25 != t)))
        _fail(t);
      else
        z_25 = t;
      t = term_h_15;
      t = get_config_0_0(t);
      t = not_null(z_25);
      LocalPopChoice(g_15);
      {
        ATerm a_26 = NULL,b_26 = NULL;
        if(((b_26 != NULL) && (b_26 != t)))
          _fail(t);
        else
          b_26 = t;
        t = Fst_0_0(t);
        if(((a_26 != NULL) && (a_26 != t)))
          _fail(t);
        else
          a_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATempty, term_u_14), not_null(a_26)));
        t = print_0_0(t);
      }
    }
  else
    {
      t = f_15;
      if(match_cons(t, sym__2))
        {
          if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_25 = ATgetArgument(t, 0);
          if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_26 = NULL;
            if(((c_26 != NULL) && (c_26 != t)))
              _fail(t);
            else
              c_26 = t;
            t = term_k_15;
            t = get_config_0_0(t);
            t = not_null(c_26);
            LocalPopChoice(j_15);
            {
              ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
              if(((e_26 != NULL) && (e_26 != t)))
                _fail(t);
              else
                e_26 = t;
              if(((g_26 != NULL) && (g_26 != t)))
                _fail(t);
              else
                g_26 = t;
              t = not_null(x_25);
              t = separate_by_1_0(p_0, t);
              if(((f_26 != NULL) && (f_26 != t)))
                _fail(t);
              else
                f_26 = t;
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATempty, term_l_15), not_null(b_16)), not_null(f_26), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_14), not_null(y_25)), term_m_15));
              t = conc_0_0(t);
              if(((d_26 != NULL) && (d_26 != t)))
                _fail(t);
              else
                d_26 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(d_26));
              t = print_0_0(t);
            }
          }
        else
          {
            t = i_15;
            {
              ATerm h_26 = NULL,i_26 = NULL;
              if(((i_26 != NULL) && (i_26 != t)))
                _fail(t);
              else
                i_26 = t;
              t = not_null(x_25);
              {
                ATerm n_15 = t;
                int o_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_fetch_version_0_0(t);
                    LocalPopChoice(o_15);
                  }
                else
                  {
                    t = n_15;
                    t = term_p_15;
                  }
              }
              if(((h_26 != NULL) && (h_26 != t)))
                _fail(t);
              else
                h_26 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), not_null(y_25)), term_m_15), not_null(h_26)), term_l_15), not_null(b_16)));
              t = print_0_0(t);
            }
          }
      }
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  static ATerm r_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    t = xtc_print_0_1(not_null(j_26), t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_26 = ATgetArgument(t, 0);
      if(((k_26 != NULL) && (k_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(k_26);
  t = map_1_0(r_0, t);
  return(t);
}
ATerm xtc_xtc_query_all_0_0 (ATerm t)
{
  t = term_q_15;
  t = table_getlist_0_0(t);
  t = map_1_0(q_0, t);
  return(t);
}
ATerm xtc_xtc_query_repository_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = xtc_location_0_0(t);
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_14), not_null(l_26)), term_r_15));
  t = print_0_0(t);
  return(t);
}
ATerm xtc_register_component_0_1 (ATerm o_3, ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  if(match_cons(t, sym__3))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
      o_26 = ATgetArgument(t, 2);
      {
        ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
        t = not_null(q_26);
        if(((s_26 != NULL) && (s_26 != t)))
          _fail(t);
        else
          s_26 = t;
        t = not_null(r_26);
        if(((t_26 != NULL) && (t_26 != t)))
          _fail(t);
        else
          t_26 = t;
        t = not_null(o_26);
        if(((u_26 != NULL) && (u_26 != t)))
          _fail(t);
        else
          u_26 = t;
        t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(s_26), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(t_26), not_null(u_26))));
        t = xtc_register_0_1(not_null(o_3), t);
      }
    }
  else
    {
      ATerm v_26 = NULL,w_26 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_26 = ATgetArgument(t, 0);
          if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(q_26);
      if(((v_26 != NULL) && (v_26 != t)))
        _fail(t);
      else
        v_26 = t;
      t = not_null(r_26);
      if(((w_26 != NULL) && (w_26 != t)))
        _fail(t);
      else
        w_26 = t;
      t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(v_26), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(w_26), (ATerm) ATempty)));
      t = xtc_register_0_1(not_null(o_3), t);
    }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  if(((y_26 != NULL) && (y_26 != t)))
    _fail(t);
  else
    y_26 = t;
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  t = xtc_new_file_0_0(t);
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(y_26));
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_26));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_154 (ATerm), ATerm o_154 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_154, o_154, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm d_27 = NULL;
  if(((d_27 != NULL) && (d_27 != t)))
    _fail(t);
  else
    d_27 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm h_154 (ATerm), ATerm i_154 (ATerm), ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL;
      if(((c_27 != NULL) && (c_27 != t)))
        _fail(t);
      else
        c_27 = t;
      t = term_u_15;
      if(((b_27 != NULL) && (b_27 != t)))
        _fail(t);
      else
        b_27 = t;
      t = not_null(c_27);
      t = dbg_0_1(not_null(b_27), t);
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(s_0, t);
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            t = stdin_0_0(t);
          }
      }
      LocalPopChoice(t_15);
      t = xtc_transform_file_2_0(h_154, i_154, t);
    }
  else
    {
      t = s_15;
      t = xtc_transform_term_2_0(h_154, i_154, t);
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm g_154 (ATerm), ATerm t)
{
  t = xtc_transform_2_0(g_154, t_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_x_15;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm xtc_load_definition_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  t = term_h_15;
  t = get_config_0_0(t);
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_15), not_null(e_27)), term_y_15), not_null(h_27));
  t = concat_strings_0_0(t);
  {
    ATerm a_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL;
        if(((j_27 != NULL) && (j_27 != t)))
          _fail(t);
        else
          j_27 = t;
        t = file_exists_0_0(t);
        t = not_null(j_27);
        LocalPopChoice(c_16);
        {
          ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
          if(((n_27 != NULL) && (n_27 != t)))
            _fail(t);
          else
            n_27 = t;
          if(((m_27 != NULL) && (m_27 != t)))
            _fail(t);
          else
            m_27 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_27));
          if(((l_27 != NULL) && (l_27 != t)))
            _fail(t);
          else
            l_27 = t;
          t = term_d_16;
          if(((k_27 != NULL) && (k_27 != t)))
            _fail(t);
          else
            k_27 = t;
          t = not_null(l_27);
          t = dbg_0_1(not_null(k_27), t);
          t = xtc_transform_1_0(v_0, t);
        }
      }
    else
      {
        t = a_16;
        {
          ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
          t = term_e_16;
          t = get_config_0_0(t);
          {
            static ATerm w_0 (ATerm t);
            static ATerm w_0 (ATerm t)
            {
              ATerm s_27 = NULL,t_27 = NULL;
              if(((t_27 != NULL) && (t_27 != t)))
                _fail(t);
              else
                t_27 = t;
              if(((s_27 != NULL) && (s_27 != t)))
                _fail(t);
              else
                s_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_15), not_null(e_27)), term_y_15), not_null(s_27));
              t = concat_strings_0_0(t);
              return(t);
            }
            t = map_1_0(w_0, t);
          }
          t = filter_1_0(file_exists_0_0, t);
          if(((r_27 != NULL) && (r_27 != t)))
            _fail(t);
          else
            r_27 = t;
          t = Hd_0_0(t);
          if(((q_27 != NULL) && (q_27 != t)))
            _fail(t);
          else
            q_27 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_27));
          if(((p_27 != NULL) && (p_27 != t)))
            _fail(t);
          else
            p_27 = t;
          t = term_d_16;
          if(((o_27 != NULL) && (o_27 != t)))
            _fail(t);
          else
            o_27 = t;
          t = not_null(p_27);
          t = dbg_0_1(not_null(o_27), t);
          t = xtc_transform_1_0(x_0, t);
        }
      }
  }
  t = read_from_0_0(t);
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  t = term_f_16;
  if(((f_27 != NULL) && (f_27 != t)))
    _fail(t);
  else
    f_27 = t;
  t = not_null(g_27);
  t = dbg_0_1(not_null(f_27), t);
  return(t);
}
static ATerm c_29 (ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
      if(((u_27 != NULL) && (u_27 != t)))
        _fail(t);
      else
        u_27 = t;
      if(((w_27 != NULL) && (w_27 != t)))
        _fail(t);
      else
        w_27 = t;
      t = term_m_14;
      t = get_config_0_0(t);
      if(((v_27 != NULL) && (v_27 != t)))
        _fail(t);
      else
        v_27 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_16, (ATerm) ATmakeAppl(sym_String_1, not_null(v_27))));
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_xtc_register_0_0 (ATerm t)
{
  static ATerm d_29 (ATerm x_27, ATerm t);
  static ATerm d_29 (ATerm x_27, ATerm t)
  {
    ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        if(((k_28 != NULL) && (k_28 != t)))
          _fail(t);
        else
          k_28 = t;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_r_14;
              t = get_config_0_0(t);
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              t = term_n_16;
              t = get_config_0_0(t);
            }
        }
        t = not_null(k_28);
        LocalPopChoice(k_16);
        t = (ATerm) ATempty;
      }
    else
      {
        t = j_16;
        t = not_null(x_27);
        t = xtc_default_xt_meta_0_0(t);
      }
    if(((j_28 != NULL) && (j_28 != t)))
      _fail(t);
    else
      j_28 = t;
    if(((e_28 != NULL) && (e_28 != t)))
      _fail(t);
    else
      e_28 = t;
    t = not_null(j_28);
    if(((g_28 != NULL) && (g_28 != t)))
      _fail(t);
    else
      g_28 = t;
    if(((i_28 != NULL) && (i_28 != t)))
      _fail(t);
    else
      i_28 = t;
    t = term_h_15;
    t = get_config_0_0(t);
    if(((h_28 != NULL) && (h_28 != t)))
      _fail(t);
    else
      h_28 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_27)), term_y_15), not_null(h_28));
    t = concat_strings_0_0(t);
    if(((f_28 != NULL) && (f_28 != t)))
      _fail(t);
    else
      f_28 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_27), not_null(f_28), not_null(e_28));
    if(((d_28 != NULL) && (d_28 != t)))
      _fail(t);
    else
      d_28 = t;
    t = term_o_16;
    if(((c_28 != NULL) && (c_28 != t)))
      _fail(t);
    else
      c_28 = t;
    t = not_null(d_28);
    t = dbg_0_1(not_null(c_28), t);
    if(((z_27 != NULL) && (z_27 != t)))
      _fail(t);
    else
      z_27 = t;
    if(((b_28 != NULL) && (b_28 != t)))
      _fail(t);
    else
      b_28 = t;
    t = c_29(t);
    if(((a_28 != NULL) && (a_28 != t)))
      _fail(t);
    else
      a_28 = t;
    if(((y_27 != NULL) && (y_27 != t)))
      _fail(t);
    else
      y_27 = t;
    t = not_null(z_27);
    t = xtc_register_component_0_1(not_null(y_27), t);
    return(t);
  }
  t = term_v_14;
  t = get_config_0_0(t);
  {
    static ATerm y_0 (ATerm t);
    static ATerm y_0 (ATerm t)
    {
      ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
      if(((l_28 != NULL) && (l_28 != t)))
        _fail(t);
      else
        l_28 = t;
      if(((q_28 != NULL) && (q_28 != t)))
        _fail(t);
      else
        q_28 = t;
      t = term_h_15;
      t = get_config_0_0(t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_28)), term_y_15), not_null(p_28));
      t = concat_strings_0_0(t);
      if(((m_28 != NULL) && (m_28 != t)))
        _fail(t);
      else
        m_28 = t;
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_16 = t;
            if((PushChoice() == 0))
              {
                t = term_s_16;
                t = get_config_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_16;
              }
            t = not_null(l_28);
            t = xtc_load_definition_0_0(t);
            if(match_cons(t, sym_Definition_2))
              {
                if(((n_28 != NULL) && (n_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_28 = ATgetArgument(t, 0);
                if(((o_28 != NULL) && (o_28 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_28), not_null(m_28), not_null(o_28));
            LocalPopChoice(q_16);
            {
              ATerm r_28 = NULL,s_28 = NULL;
              if(((s_28 != NULL) && (s_28 != t)))
                _fail(t);
              else
                s_28 = t;
              t = term_t_16;
              if(((r_28 != NULL) && (r_28 != t)))
                _fail(t);
              else
                r_28 = t;
              t = not_null(s_28);
              t = dbg_0_1(not_null(r_28), t);
              {
                ATerm u_16 = t;
                int v_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
                        if(((t_28 != NULL) && (t_28 != t)))
                          _fail(t);
                        else
                          t_28 = t;
                        t = not_null(o_28);
                        if(((v_28 != NULL) && (v_28 != t)))
                          _fail(t);
                        else
                          v_28 = t;
                        t = term_y_16;
                        if(((u_28 != NULL) && (u_28 != t)))
                          _fail(t);
                        else
                          u_28 = t;
                        t = not_null(v_28);
                        t = xtc_has_meta_0_1(not_null(u_28), t);
                        t = not_null(t_28);
                        LocalPopChoice(x_16);
                        t = xtc_register_component_0_1(not_null(o_28), t);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
                          if(((x_28 != NULL) && (x_28 != t)))
                            _fail(t);
                          else
                            x_28 = t;
                          if(((z_28 != NULL) && (z_28 != t)))
                            _fail(t);
                          else
                            z_28 = t;
                          if(((b_29 != NULL) && (b_29 != t)))
                            _fail(t);
                          else
                            b_29 = t;
                          t = c_29(t);
                          if(((a_29 != NULL) && (a_29 != t)))
                            _fail(t);
                          else
                            a_29 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), not_null(a_29));
                          t = conc_0_0(t);
                          if(((y_28 != NULL) && (y_28 != t)))
                            _fail(t);
                          else
                            y_28 = t;
                          if(((w_28 != NULL) && (w_28 != t)))
                            _fail(t);
                          else
                            w_28 = t;
                          t = not_null(x_28);
                          t = xtc_register_component_0_1(not_null(w_28), t);
                        }
                      }
                    LocalPopChoice(v_16);
                  }
                else
                  {
                    t = u_16;
                    t = d_29(not_null(l_28), t);
                  }
              }
            }
          }
        else
          {
            t = p_16;
            t = d_29(not_null(l_28), t);
          }
      }
      return(t);
    }
    t = map_1_0(y_0, t);
  }
  t = xtc_xtc_save_0_0(t);
  return(t);
}
ATerm xtc_save_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  t = xtc_location_0_0(t);
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  t = not_null(f_29);
  t = xtc_save_0_1(not_null(e_29), t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm j_29 = NULL;
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
ATerm xtc_is_imported_0_0 (ATerm t)
{
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    t = SRTS_one(c_1, t);
    return(t);
  }
  t = _2_0(a_1, b_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm l_29 = NULL;
  if(((l_29 != NULL) && (l_29 != t)))
    _fail(t);
  else
    l_29 = t;
  return(t);
}
ATerm xtc_ref2aterm_2_0 (ATerm z_151 (ATerm), ATerm a_152 (ATerm), ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_17;
      t = table_getlist_0_0(t);
      t = filter_1_0(z_151, t);
      {
        static ATerm d_1 (ATerm t);
        static ATerm d_1 (ATerm t)
        {
          static ATerm f_1 (ATerm t);
          static ATerm f_1 (ATerm t)
          {
            t = filter_1_0(a_152, t);
            return(t);
          }
          t = _2_0(e_1, f_1, t);
          return(t);
        }
        t = SRTS_some(d_1, t);
      }
      {
        ATerm c_17 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_17;
          }
      }
      LocalPopChoice(a_17);
      {
        ATerm m_29 = NULL,n_29 = NULL;
        if(((n_29 != NULL) && (n_29 != t)))
          _fail(t);
        else
          n_29 = t;
        if(((m_29 != NULL) && (m_29 != t)))
          _fail(t);
        else
          m_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Reference_1, not_null(m_29)));
      }
    }
  else
    {
      t = z_16;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm p_29 = NULL;
  if(((p_29 != NULL) && (p_29 != t)))
    _fail(t);
  else
    p_29 = t;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  t = Fst_0_0(t);
  if(((q_29 != NULL) && (q_29 != t)))
    _fail(t);
  else
    q_29 = t;
  t = not_null(t_29);
  if(((s_29 != NULL) && (s_29 != t)))
    _fail(t);
  else
    s_29 = t;
  t = Snd_0_0(t);
  {
    ATerm d_17 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_17;
      }
  }
  if(((r_29 != NULL) && (r_29 != t)))
    _fail(t);
  else
    r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(q_29), not_null(r_29));
  return(t);
}
ATerm xtc_reg2aterm_1_0 (ATerm y_151 (ATerm), ATerm t)
{
  t = term_q_15;
  t = table_getlist_0_0(t);
  {
    static ATerm g_1 (ATerm t);
    static ATerm g_1 (ATerm t)
    {
      static ATerm i_1 (ATerm t);
      static ATerm i_1 (ATerm t)
      {
        t = filter_1_0(y_151, t);
        return(t);
      }
      t = _2_0(h_1, i_1, t);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  t = filter_1_0(j_1, t);
  return(t);
}
ATerm split_2_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  if(((x_29 != NULL) && (x_29 != t)))
    _fail(t);
  else
    x_29 = t;
  t = b_133(t);
  if(((u_29 != NULL) && (u_29 != t)))
    _fail(t);
  else
    u_29 = t;
  t = not_null(x_29);
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  t = c_133(t);
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_29), not_null(v_29));
  return(t);
}
ATerm xtc_table2aterm_2_0 (ATerm w_151 (ATerm), ATerm x_151 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  static ATerm k_1 (ATerm t);
  static ATerm l_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    t = xtc_reg2aterm_1_0(w_151, t);
    return(t);
  }
  static ATerm l_1 (ATerm t)
  {
    t = xtc_ref2aterm_2_0(w_151, x_151, t);
    return(t);
  }
  t = split_2_0(k_1, l_1, t);
  if(((z_29 != NULL) && (z_29 != t)))
    _fail(t);
  else
    z_29 = t;
  t = conc_0_0(t);
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(y_29));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm a_30 = NULL;
  if(((a_30 != NULL) && (a_30 != t)))
    _fail(t);
  else
    a_30 = t;
  {
    ATerm e_17 = t;
    if((PushChoice() == 0))
      {
        t = xtc_is_imported_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_17;
      }
  }
  t = not_null(a_30);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm f_17 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_XtcLoaded_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_17;
    }
  return(t);
}
ATerm xtc_save_0_1 (ATerm d_80, ATerm t)
{
  t = xtc_table2aterm_2_0(m_1, n_1, t);
  t = xtc_save_file_0_1(not_null(d_80), t);
  return(t);
}
ATerm xtc_xtc_save_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_17;
      t = get_config_0_0(t);
      LocalPopChoice(h_17);
      {
        ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
        if(((c_30 != NULL) && (c_30 != t)))
          _fail(t);
        else
          c_30 = t;
        if(((e_30 != NULL) && (e_30 != t)))
          _fail(t);
        else
          e_30 = t;
        if(((d_30 != NULL) && (d_30 != t)))
          _fail(t);
        else
          d_30 = t;
        if(((b_30 != NULL) && (b_30 != t)))
          _fail(t);
        else
          b_30 = t;
        t = not_null(c_30);
        t = xtc_save_0_1(not_null(b_30), t);
      }
    }
  else
    {
      t = g_17;
      t = xtc_save_0_0(t);
    }
  return(t);
}
ATerm xtc_register_reference_0_1 (ATerm n_3, ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_30 = NULL,k_30 = NULL;
            t = not_null(g_30);
            if(((j_30 != NULL) && (j_30 != t)))
              _fail(t);
            else
              j_30 = t;
            t = not_null(h_30);
            if(((k_30 != NULL) && (k_30 != t)))
              _fail(t);
            else
              k_30 = t;
            t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(j_30), not_null(k_30))));
            t = xtc_register_0_1(not_null(n_3), t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm l_30 = NULL;
              t = not_null(i_30);
              if(((l_30 != NULL) && (l_30 != t)))
                _fail(t);
              else
                l_30 = t;
              t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(l_30), (ATerm) ATempty)));
              t = xtc_register_0_1(not_null(n_3), t);
            }
          }
      }
    }
  else
    {
      ATerm m_30 = NULL;
      t = not_null(i_30);
      if(((m_30 != NULL) && (m_30 != t)))
        _fail(t);
      else
        m_30 = t;
      t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_30), (ATerm) ATempty)));
      t = xtc_register_0_1(not_null(n_3), t);
    }
  return(t);
}
ATerm xtc_register_reference_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  if(((o_30 != NULL) && (o_30 != t)))
    _fail(t);
  else
    o_30 = t;
  t = (ATerm) ATempty;
  if(((n_30 != NULL) && (n_30 != t)))
    _fail(t);
  else
    n_30 = t;
  t = not_null(o_30);
  t = xtc_register_reference_0_1(not_null(n_30), t);
  return(t);
}
ATerm xtc_xtc_reference_0_0 (ATerm t)
{
  t = term_l_17;
  t = get_config_0_0(t);
  t = map_1_0(xtc_register_reference_0_0, t);
  t = xtc_xtc_save_0_0(t);
  return(t);
}
ATerm xtc_tool_0_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_17;
          t = get_config_0_0(t);
          LocalPopChoice(p_17);
          {
            ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
            if(((q_30 != NULL) && (q_30 != t)))
              _fail(t);
            else
              q_30 = t;
            if(((s_30 != NULL) && (s_30 != t)))
              _fail(t);
            else
              s_30 = t;
            if(((r_30 != NULL) && (r_30 != t)))
              _fail(t);
            else
              r_30 = t;
            if(((p_30 != NULL) && (p_30 != t)))
              _fail(t);
            else
              p_30 = t;
            t = not_null(q_30);
            t = xtc_init_0_1(not_null(p_30), t);
          }
        }
      else
        {
          t = o_17;
          t = xtc_init_0_0(t);
        }
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_17;
            t = get_config_0_0(t);
            t = xtc_xtc_reference_0_0(t);
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
                  t = term_u_17;
                  t = get_config_0_0(t);
                  t = xtc_xtc_register_0_0(t);
                  LocalPopChoice(t_17);
                }
              else
                {
                  t = s_17;
                  t = term_v_17;
                  t = get_config_0_0(t);
                  {
                    ATerm w_17 = t;
                    int x_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_17;
                        t = get_config_0_0(t);
                        t = xtc_xtc_query_repository_0_0(t);
                        LocalPopChoice(x_17);
                      }
                    else
                      {
                        t = w_17;
                        {
                          ATerm z_17 = t;
                          int a_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_b_18;
                              t = get_config_0_0(t);
                              t = xtc_xtc_query_all_0_0(t);
                              LocalPopChoice(a_18);
                            }
                          else
                            {
                              t = z_17;
                              t = xtc_xtc_query_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
      }
      t = term_c_18;
      t = exit_0_0(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      t = (ATerm) ATmakeAppl(sym__2, term_d_18, (ATerm) ATinsert(ATempty, term_e_18));
      t = print_0_0(t);
      t = term_f_18;
      t = exit_0_0(t);
    }
  return(t);
}
ATerm dbg_0_1 (ATerm j_79, ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  t = term_g_18;
  if(((t_30 != NULL) && (t_30 != t)))
    _fail(t);
  else
    t_30 = t;
  t = not_null(y_30);
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  if(((x_30 != NULL) && (x_30 != t)))
    _fail(t);
  else
    x_30 = t;
  if(((w_30 != NULL) && (w_30 != t)))
    _fail(t);
  else
    w_30 = t;
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  t = not_null(v_30);
  t = log_0_3(not_null(t_30), not_null(j_79), not_null(u_30), t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_30 != NULL) && (z_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_30 = ATgetArgument(t, 0);
      if(((a_31 != NULL) && (a_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_18, not_null(z_30), not_null(a_31));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_create_tables_0_0 (ATerm t)
{
  ATerm b_31 = NULL;
  if(((b_31 != NULL) && (b_31 != t)))
    _fail(t);
  else
    b_31 = t;
  t = map_1_0(table_create_0_0, t);
  t = not_null(b_31);
  return(t);
}
ATerm xtc_reset_0_0 (ATerm t)
{
  ATerm c_31 = NULL;
  if(((c_31 != NULL) && (c_31 != t)))
    _fail(t);
  else
    c_31 = t;
  t = term_q_15;
  t = table_destroy_0_0(t);
  t = term_b_17;
  t = table_destroy_0_0(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_17), term_q_15);
  t = xtc_create_tables_0_0(t);
  t = not_null(c_31);
  return(t);
}
ATerm xtc_load_deps_0_0 (ATerm t)
{
  ATerm d_31 = NULL;
  if(((d_31 != NULL) && (d_31 != t)))
    _fail(t);
  else
    d_31 = t;
  t = (ATerm) ATinsert(ATempty, term_x_15);
  t = map_1_0(xtc_find_0_0, t);
  t = not_null(d_31);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  t = SSL_string_to_int(not_null(e_31));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm g_31 = NULL;
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(g_31);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(g_31);
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm h_31 = NULL;
  if(((h_31 != NULL) && (h_31 != t)))
    _fail(t);
  else
    h_31 = t;
  t = term_j_18;
  t = set_config_0_0(t);
  t = term_k_18;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  if(((m_31 != NULL) && (m_31 != t)))
    _fail(t);
  else
    m_31 = t;
  t = string_to_int_0_0(t);
  if(((l_31 != NULL) && (l_31 != t)))
    _fail(t);
  else
    l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_18, not_null(l_31));
  t = set_config_0_0(t);
  t = not_null(k_31);
  if(((j_31 != NULL) && (j_31 != t)))
    _fail(t);
  else
    j_31 = t;
  if(((i_31 != NULL) && (i_31 != t)))
    _fail(t);
  else
    i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_31));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_31 = NULL;
  if(((n_31 != NULL) && (n_31 != t)))
    _fail(t);
  else
    n_31 = t;
  t = term_o_18;
  t = set_config_0_0(t);
  t = term_p_18;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_1, p_1, q_1, t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_1, s_1, t_1, t);
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = Option_3_0(u_1, v_1, w_1, t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_31 != NULL) && (p_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_31 = ATgetArgument(t, 0);
      if(((o_31 != NULL) && (o_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = not_null(p_31);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATempty;
      }
  }
  if(((s_31 != NULL) && (s_31 != t)))
    _fail(t);
  else
    s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), not_null(s_31));
  t = conc_0_0(t);
  if(((q_31 != NULL) && (q_31 != t)))
    _fail(t);
  else
    q_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_18, not_null(p_31), not_null(q_31));
  t = table_put_0_0(t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(w_31);
      t = register_usage_1_0(m_3, t);
    }
  else
    {
      ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_31 != NULL) && (x_31 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_31 = ATgetFirst((ATermList) t);
          if(((y_31 != NULL) && (y_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(y_31);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((z_31 != NULL) && (z_31 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            z_31 = ATgetFirst((ATermList) t);
          if(((a_32 != NULL) && (a_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(x_31);
      if(((d_32 != NULL) && (d_32 != t)))
        _fail(t);
      else
        d_32 = t;
      t = not_null(z_31);
      if(((b_32 != NULL) && (b_32 != t)))
        _fail(t);
      else
        b_32 = t;
      t = not_null(a_32);
      if(((c_32 != NULL) && (c_32 != t)))
        _fail(t);
      else
        c_32 = t;
      t = not_null(w_31);
      if(((g_32 != NULL) && (g_32 != t)))
        _fail(t);
      else
        g_32 = t;
      t = not_null(d_32);
      t = k_3(t);
      t = not_null(g_32);
      if(((f_32 != NULL) && (f_32 != t)))
        _fail(t);
      else
        f_32 = t;
      t = not_null(b_32);
      t = l_3(t);
      if(((e_32 != NULL) && (e_32 != t)))
        _fail(t);
      else
        e_32 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(c_32)), not_null(e_32));
    }
  return(t);
}
ATerm read_from_string_0_0 (ATerm t)
{
  ATerm h_32 = NULL;
  if(((h_32 != NULL) && (h_32 != t)))
    _fail(t);
  else
    h_32 = t;
  t = SSL_read_term_from_string(not_null(h_32));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm w_32 = NULL;
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  if(match_string(t, "-r"))
    {
      t = not_null(w_32);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = not_null(w_32);
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  if(((x_32 != NULL) && (x_32 != t)))
    _fail(t);
  else
    x_32 = t;
  if(((z_32 != NULL) && (z_32 != t)))
    _fail(t);
  else
    z_32 = t;
  if(((y_32 != NULL) && (y_32 != t)))
    _fail(t);
  else
    y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, not_null(y_32));
  t = set_config_0_0(t);
  t = not_null(x_32);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_x_18;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm a_33 = NULL;
  if(((a_33 != NULL) && (a_33 != t)))
    _fail(t);
  else
    a_33 = t;
  if(match_string(t, "i"))
    {
      t = not_null(a_33);
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = not_null(a_33);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = not_null(a_33);
        }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  if(((b_33 != NULL) && (b_33 != t)))
    _fail(t);
  else
    b_33 = t;
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATempty, not_null(c_33)));
  t = extend_config_0_0(t);
  t = not_null(b_33);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_y_18;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm e_33 = NULL;
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  if(match_string(t, "r"))
    {
      t = not_null(e_33);
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = not_null(e_33);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = not_null(e_33);
        }
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  if(((f_33 != NULL) && (f_33 != t)))
    _fail(t);
  else
    f_33 = t;
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  if(((g_33 != NULL) && (g_33 != t)))
    _fail(t);
  else
    g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, not_null(g_33));
  t = set_config_0_0(t);
  t = not_null(f_33);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_z_18;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm i_33 = NULL;
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  if(match_string(t, "-t"))
    {
      t = not_null(i_33);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = not_null(i_33);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  if(((l_33 != NULL) && (l_33 != t)))
    _fail(t);
  else
    l_33 = t;
  if(((k_33 != NULL) && (k_33 != t)))
    _fail(t);
  else
    k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATempty, not_null(k_33)));
  t = extend_config_0_0(t);
  t = not_null(j_33);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm m_33 = NULL;
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  if(match_string(t, "-l"))
    {
      t = not_null(m_33);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = not_null(m_33);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  if(((p_33 != NULL) && (p_33 != t)))
    _fail(t);
  else
    p_33 = t;
  if(((o_33 != NULL) && (o_33 != t)))
    _fail(t);
  else
    o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_15, not_null(o_33));
  t = set_config_0_0(t);
  t = not_null(n_33);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm q_33 = NULL;
  if(((q_33 != NULL) && (q_33 != t)))
    _fail(t);
  else
    q_33 = t;
  if(match_string(t, "-V"))
    {
      t = not_null(q_33);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = not_null(q_33);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  if(((r_33 != NULL) && (r_33 != t)))
    _fail(t);
  else
    r_33 = t;
  if(((t_33 != NULL) && (t_33 != t)))
    _fail(t);
  else
    t_33 = t;
  if(((s_33 != NULL) && (s_33 != t)))
    _fail(t);
  else
    s_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, not_null(s_33));
  t = set_config_0_0(t);
  t = not_null(r_33);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_c_19;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm u_33 = NULL;
  if(((u_33 != NULL) && (u_33 != t)))
    _fail(t);
  else
    u_33 = t;
  if(match_string(t, "-m"))
    {
      t = not_null(u_33);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--meta", 0, ATtrue)))
        _fail(t);
      t = not_null(u_33);
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,d_34 = NULL;
  if(((v_33 != NULL) && (v_33 != t)))
    _fail(t);
  else
    v_33 = t;
  if(((d_34 != NULL) && (d_34 != t)))
    _fail(t);
  else
    d_34 = t;
  t = read_from_string_0_0(t);
  if(((w_33 != NULL) && (w_33 != t)))
    _fail(t);
  else
    w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATempty, not_null(w_33)));
  t = extend_config_0_0(t);
  t = not_null(v_33);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_d_19;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-defaults", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm e_34 = NULL,j_34 = NULL,m_34 = NULL;
  if(((e_34 != NULL) && (e_34 != t)))
    _fail(t);
  else
    e_34 = t;
  if(((m_34 != NULL) && (m_34 != t)))
    _fail(t);
  else
    m_34 = t;
  if(((j_34 != NULL) && (j_34 != t)))
    _fail(t);
  else
    j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, not_null(j_34));
  t = set_config_0_0(t);
  t = not_null(e_34);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_e_19;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm n_34 = NULL;
  if(((n_34 != NULL) && (n_34 != t)))
    _fail(t);
  else
    n_34 = t;
  if(match_string(t, "-I"))
    {
      t = not_null(n_34);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = not_null(n_34);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,w_34 = NULL;
  if(((o_34 != NULL) && (o_34 != t)))
    _fail(t);
  else
    o_34 = t;
  if(((w_34 != NULL) && (w_34 != t)))
    _fail(t);
  else
    w_34 = t;
  if(((p_34 != NULL) && (p_34 != t)))
    _fail(t);
  else
    p_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATempty, not_null(p_34)));
  t = extend_config_0_0(t);
  t = not_null(o_34);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_f_19;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm x_34 = NULL;
  if(((x_34 != NULL) && (x_34 != t)))
    _fail(t);
  else
    x_34 = t;
  if(match_string(t, "q"))
    {
      t = not_null(x_34);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = not_null(x_34);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  if(((y_34 != NULL) && (y_34 != t)))
    _fail(t);
  else
    y_34 = t;
  if(((a_35 != NULL) && (a_35 != t)))
    _fail(t);
  else
    a_35 = t;
  if(((z_34 != NULL) && (z_34 != t)))
    _fail(t);
  else
    z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, not_null(z_34));
  t = set_config_0_0(t);
  t = not_null(y_34);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_g_19;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm b_35 = NULL;
  if(((b_35 != NULL) && (b_35 != t)))
    _fail(t);
  else
    b_35 = t;
  if(match_string(t, "-a"))
    {
      t = not_null(b_35);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = not_null(b_35);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm c_35 = NULL;
  if(((c_35 != NULL) && (c_35 != t)))
    _fail(t);
  else
    c_35 = t;
  t = term_h_19;
  t = set_config_0_0(t);
  t = not_null(c_35);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_i_19;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm f_35 = NULL;
  if(((f_35 != NULL) && (f_35 != t)))
    _fail(t);
  else
    f_35 = t;
  if(match_string(t, "-L"))
    {
      t = not_null(f_35);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = not_null(f_35);
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm g_35 = NULL;
  if(((g_35 != NULL) && (g_35 != t)))
    _fail(t);
  else
    g_35 = t;
  t = term_j_19;
  t = set_config_0_0(t);
  t = not_null(g_35);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm i_35 = NULL;
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  if(match_string(t, "-M"))
    {
      t = not_null(i_35);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Meta", 0, ATtrue)))
        _fail(t);
      t = not_null(i_35);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm j_35 = NULL;
  if(((j_35 != NULL) && (j_35 != t)))
    _fail(t);
  else
    j_35 = t;
  t = term_l_19;
  t = set_config_0_0(t);
  t = not_null(j_35);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_35 = NULL;
  if(((k_35 != NULL) && (k_35 != t)))
    _fail(t);
  else
    k_35 = t;
  if(match_string(t, "-R"))
    {
      t = not_null(k_35);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = not_null(k_35);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm l_35 = NULL;
  if(((l_35 != NULL) && (l_35 != t)))
    _fail(t);
  else
    l_35 = t;
  t = term_n_19;
  t = set_config_0_0(t);
  t = not_null(l_35);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_1, y_1, z_1, t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_2, b_2, c_2, t);
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm t_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_2, e_2, f_2, t);
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = t_19;
                  {
                    ATerm v_19 = t;
                    int w_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(g_2, h_2, i_2, t);
                        LocalPopChoice(w_19);
                      }
                    else
                      {
                        t = v_19;
                        {
                          ATerm x_19 = t;
                          int y_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(j_2, k_2, l_2, t);
                              LocalPopChoice(y_19);
                            }
                          else
                            {
                              t = x_19;
                              {
                                ATerm z_19 = t;
                                int a_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(m_2, n_2, o_2, t);
                                    LocalPopChoice(a_20);
                                  }
                                else
                                  {
                                    t = z_19;
                                    {
                                      ATerm b_20 = t;
                                      int c_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(p_2, q_2, r_2, t);
                                          LocalPopChoice(c_20);
                                        }
                                      else
                                        {
                                          t = b_20;
                                          {
                                            ATerm d_20 = t;
                                            int e_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(s_2, t_2, u_2, t);
                                                LocalPopChoice(e_20);
                                              }
                                            else
                                              {
                                                t = d_20;
                                                {
                                                  ATerm f_20 = t;
                                                  int g_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(v_2, p_3, q_3, t);
                                                      LocalPopChoice(g_20);
                                                    }
                                                  else
                                                    {
                                                      t = f_20;
                                                      {
                                                        ATerm h_20 = t;
                                                        int i_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(r_3, s_3, t_3, t);
                                                            LocalPopChoice(i_20);
                                                          }
                                                        else
                                                          {
                                                            t = h_20;
                                                            {
                                                              ATerm j_20 = t;
                                                              int k_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(u_3, v_3, w_3, t);
                                                                  LocalPopChoice(k_20);
                                                                }
                                                              else
                                                                {
                                                                  t = j_20;
                                                                  {
                                                                    ATerm l_20 = t;
                                                                    int m_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Option_3_0(x_3, y_3, z_3, t);
                                                                        LocalPopChoice(m_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_20;
                                                                        {
                                                                          ATerm n_20 = t;
                                                                          int o_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(a_4, b_4, c_4, t);
                                                                              LocalPopChoice(o_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_20;
                                                                              t = Option_3_0(d_4, e_4, f_4, t);
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
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm m_35 = NULL;
  if(((m_35 != NULL) && (m_35 != t)))
    _fail(t);
  else
    m_35 = t;
  t = term_q_20;
  t = set_config_0_0(t);
  t = term_s_20;
  t = set_config_0_0(t);
  t = not_null(m_35);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(g_4, h_4, i_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm t_35 = NULL;
  if(((t_35 != NULL) && (t_35 != t)))
    _fail(t);
  else
    t_35 = t;
  t = term_s_20;
  t = set_config_0_0(t);
  t = not_null(t_35);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
ATerm long_description_1_0 (ATerm j_3 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_20), term_x_20);
  return(t);
}
ATerm short_description_1_0 (ATerm i_3 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_21), term_a_21), term_z_20);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  if(((z_35 != NULL) && (z_35 != t)))
    _fail(t);
  else
    z_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_35 = ATgetFirst((ATermList) t);
      y_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
        t = not_null(x_35);
        if(((a_36 != NULL) && (a_36 != t)))
          _fail(t);
        else
          a_36 = t;
        t = not_null(y_35);
        if(((b_36 != NULL) && (b_36 != t)))
          _fail(t);
        else
          b_36 = t;
        t = not_null(z_35);
        if(((d_36 != NULL) && (d_36 != t)))
          _fail(t);
        else
          d_36 = t;
        t = not_null(b_36);
        if(((f_36 != NULL) && (f_36 != t)))
          _fail(t);
        else
          f_36 = t;
        if(((j_36 != NULL) && (j_36 != t)))
          _fail(t);
        else
          j_36 = t;
        t = h_3(t);
        if(((g_36 != NULL) && (g_36 != t)))
          _fail(t);
        else
          g_36 = t;
        t = not_null(j_36);
        if(((i_36 != NULL) && (i_36 != t)))
          _fail(t);
        else
          i_36 = t;
        t = not_null(a_36);
        t = g_3(t);
        if(((h_36 != NULL) && (h_36 != t)))
          _fail(t);
        else
          h_36 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(g_36)), not_null(h_36));
        if(((e_36 != NULL) && (e_36 != t)))
          _fail(t);
        else
          e_36 = t;
        t = not_null(f_36);
        {
          static ATerm m_4 (ATerm t);
          static ATerm m_4 (ATerm t)
          {
            t = not_null(e_36);
            return(t);
          }
          t = reverse_acc_2_0(g_3, m_4, t);
        }
        if(((c_36 != NULL) && (c_36 != t)))
          _fail(t);
        else
          c_36 = t;
      }
    }
  else
    {
      ATerm k_36 = NULL,l_36 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(z_35);
      if(((l_36 != NULL) && (l_36 != t)))
        _fail(t);
      else
        l_36 = t;
      t = term_d_15;
      t = h_3(t);
      if(((k_36 != NULL) && (k_36 != t)))
        _fail(t);
      else
        k_36 = t;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm n_36 = NULL;
  if(((n_36 != NULL) && (n_36 != t)))
    _fail(t);
  else
    n_36 = t;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(n_4, o_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  if(((q_36 != NULL) && (q_36 != t)))
    _fail(t);
  else
    q_36 = t;
  if(((p_36 != NULL) && (p_36 != t)))
    _fail(t);
  else
    p_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_36)), term_c_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm r_146 (ATerm), ATerm s_146 (ATerm), ATerm t)
{
  ATerm o_36 = NULL;
  static ATerm t_4 (ATerm t);
  static ATerm t_4 (ATerm t)
  {
    ATerm r_36 = NULL,s_36 = NULL;
    if(((s_36 != NULL) && (s_36 != t)))
      _fail(t);
    else
      s_36 = t;
    t = s_146(t);
    if(((r_36 != NULL) && (r_36 != t)))
      _fail(t);
    else
      r_36 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(r_36)), term_u_14);
    t = echo_0_0(t);
    return(t);
  }
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_21;
      t = get_config_0_0(t);
      if(((o_36 != NULL) && (o_36 != t)))
        _fail(t);
      else
        o_36 = t;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        static ATerm p_4 (ATerm t);
        static ATerm p_4 (ATerm t)
        {
          static ATerm q_4 (ATerm t);
          static ATerm q_4 (ATerm t)
          {
            if(((o_36 != NULL) && (o_36 != t)))
              _fail(t);
            else
              o_36 = t;
            return(t);
          }
          t = Program_1_0(q_4, t);
          return(t);
        }
        t = option_defined_1_0(p_4, t);
      }
    }
  {
    static ATerm r_4 (ATerm t);
    static ATerm r_4 (ATerm t)
    {
      t = r_146(t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(r_4, t);
  }
  t = term_g_21;
  t = echo_0_0(t);
  t = term_j_21;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(s_4, t);
  t = try_1_0(t_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,u_4 = NULL,y_13 = NULL;
  if(((y_36 != NULL) && (y_36 != t)))
    _fail(t);
  else
    y_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((u_36 != NULL) && (u_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_36 != NULL) && (z_36 != t)))
    _fail(t);
  else
    z_36 = t;
  t = SSLgetAnnotations(not_null(y_36));
  if(((t_36 != NULL) && (t_36 != t)))
    _fail(t);
  else
    t_36 = t;
  t = not_null(u_36);
  t = b_110(t);
  if(((v_36 != NULL) && (v_36 != t)))
    _fail(t);
  else
    v_36 = t;
  if(((x_36 != NULL) && (x_36 != t)))
    _fail(t);
  else
    x_36 = t;
  if(((y_13 != NULL) && (y_13 != t)))
    _fail(t);
  else
    y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_36));
  if(((u_4 != NULL) && (u_4 != t)))
    _fail(t);
  else
    u_4 = t;
  t = SSLsetAnnotations(not_null(u_4), not_null(t_36));
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  static ATerm x_4 (ATerm t);
  static ATerm y_4 (ATerm t);
  static ATerm x_4 (ATerm t)
  {
    static ATerm z_4 (ATerm t);
    static ATerm z_4 (ATerm t)
    {
      t = not_null(a_37);
      return(t);
    }
    t = short_description_1_0(z_4, t);
    return(t);
  }
  static ATerm y_4 (ATerm t)
  {
    static ATerm a_5 (ATerm t);
    static ATerm a_5 (ATerm t)
    {
      t = not_null(a_37);
      return(t);
    }
    t = long_description_1_0(a_5, t);
    return(t);
  }
  if(((b_37 != NULL) && (b_37 != t)))
    _fail(t);
  else
    b_37 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_21;
        t = get_config_0_0(t);
        if(((a_37 != NULL) && (a_37 != t)))
          _fail(t);
        else
          a_37 = t;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
          static ATerm v_4 (ATerm t);
          static ATerm v_4 (ATerm t)
          {
            static ATerm w_4 (ATerm t);
            static ATerm w_4 (ATerm t)
            {
              if(((a_37 != NULL) && (a_37 != t)))
                _fail(t);
              else
                a_37 = t;
              return(t);
            }
            t = Program_1_0(w_4, t);
            return(t);
          }
          t = option_defined_1_0(v_4, t);
        }
      }
  }
  t = not_null(b_37);
  t = default_system_usage_2_0(x_4, y_4, t);
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  if(((c_37 != NULL) && (c_37 != t)))
    _fail(t);
  else
    c_37 = t;
  if(((e_37 != NULL) && (e_37 != t)))
    _fail(t);
  else
    e_37 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
          if(((f_37 != NULL) && (f_37 != t)))
            _fail(t);
          else
            f_37 = t;
          if(((h_37 != NULL) && (h_37 != t)))
            _fail(t);
          else
            h_37 = t;
          t = not_null(f_37);
          if(((g_37 != NULL) && (g_37 != t)))
            _fail(t);
          else
            g_37 = t;
          t = (ATerm) ATinsert(ATempty, not_null(g_37));
        }
      }
  }
  if(((d_37 != NULL) && (d_37 != t)))
    _fail(t);
  else
    d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(d_37));
  t = printnl_0_0(t);
  t = not_null(c_37);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_21;
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
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  t = report_run_time_0_0(t);
  if(((j_37 != NULL) && (j_37 != t)))
    _fail(t);
  else
    j_37 = t;
  t = term_d_15;
  t = whoami_0_0(t);
  if(((i_37 != NULL) && (i_37 != t)))
    _fail(t);
  else
    i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, term_s_21), not_null(i_37)));
  t = printnl_0_0(t);
  t = term_f_18;
  t = exit_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm k_37 = NULL;
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = SSL_TicksToSeconds(not_null(k_37));
  return(t);
}
ATerm foldr_2_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = i_131(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
        if(((m_37 != NULL) && (m_37 != t)))
          _fail(t);
        else
          m_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((n_37 != NULL) && (n_37 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              n_37 = ATgetFirst((ATermList) t);
            if(((o_37 != NULL) && (o_37 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              o_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(n_37);
        if(((p_37 != NULL) && (p_37 != t)))
          _fail(t);
        else
          p_37 = t;
        t = not_null(o_37);
        if(((u_37 != NULL) && (u_37 != t)))
          _fail(t);
        else
          u_37 = t;
        t = not_null(m_37);
        if(((w_37 != NULL) && (w_37 != t)))
          _fail(t);
        else
          w_37 = t;
        if(((y_37 != NULL) && (y_37 != t)))
          _fail(t);
        else
          y_37 = t;
        t = not_null(u_37);
        t = foldr_2_0(i_131, j_131, t);
        if(((x_37 != NULL) && (x_37 != t)))
          _fail(t);
        else
          x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_37), not_null(x_37));
        t = j_131(t);
        if(((v_37 != NULL) && (v_37 != t)))
          _fail(t);
        else
          v_37 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  if(((e_38 != NULL) && (e_38 != t)))
    _fail(t);
  else
    e_38 = t;
  if(((f_38 != NULL) && (f_38 != t)))
    _fail(t);
  else
    f_38 = t;
  t = not_null(e_38);
  if(((g_38 != NULL) && (g_38 != t)))
    _fail(t);
  else
    g_38 = t;
  t = SSL_explode_term(not_null(g_38));
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_38);
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  t = not_null(z_37);
  t = foldr_2_0(f_136, g_136, t);
  if(((c_38 != NULL) && (c_38 != t)))
    _fail(t);
  else
    c_38 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(b_5, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_141 (ATerm), ATerm t)
{
  static ATerm c_5 (ATerm t);
  static ATerm c_5 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
    if(((h_38 != NULL) && (h_38 != t)))
      _fail(t);
    else
      h_38 = t;
    if(((j_38 != NULL) && (j_38 != t)))
      _fail(t);
    else
      j_38 = t;
    t = term_i_18;
    t = get_config_0_0(t);
    if(((i_38 != NULL) && (i_38 != t)))
      _fail(t);
    else
      i_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), term_f_18);
    t = geq_0_0(t);
    t = not_null(h_38);
    t = o_141(t);
    return(t);
  }
  t = try_1_0(c_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  if(((n_38 != NULL) && (n_38 != t)))
    _fail(t);
  else
    n_38 = t;
  t = run_time_0_0(t);
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  t = not_null(n_38);
  if(((m_38 != NULL) && (m_38 != t)))
    _fail(t);
  else
    m_38 = t;
  t = term_d_15;
  t = whoami_0_0(t);
  if(((l_38 != NULL) && (l_38 != t)))
    _fail(t);
  else
    l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_21), not_null(k_38)), term_l_15), not_null(l_38)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_c_18;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  if(((o_38 != NULL) && (o_38 != t)))
    _fail(t);
  else
    o_38 = t;
  if(((p_38 != NULL) && (p_38 != t)))
    _fail(t);
  else
    p_38 = t;
  t = term_x_21;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_21, term_y_21, not_null(o_38));
  t = table_put_0_0(t);
  t = not_null(p_38);
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((q_38 != NULL) && (q_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(q_38));
  if(((s_38 != NULL) && (s_38 != t)))
    _fail(t);
  else
    s_38 = t;
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(r_38));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
  if(((t_38 != NULL) && (t_38 != t)))
    _fail(t);
  else
    t_38 = t;
  if(((u_38 != NULL) && (u_38 != t)))
    _fail(t);
  else
    u_38 = t;
  t = table_hashtable_0_0(t);
  if(((v_38 != NULL) && (v_38 != t)))
    _fail(t);
  else
    v_38 = t;
  t = lookup_table_0_1(not_null(t_38), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(v_38);
  t = hashtable_remove_0_1(not_null(t_38), t);
  t = not_null(u_38);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,e_5 = NULL,z_13 = NULL;
  if(((b_39 != NULL) && (b_39 != t)))
    _fail(t);
  else
    b_39 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((x_38 != NULL) && (x_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_39 != NULL) && (c_39 != t)))
    _fail(t);
  else
    c_39 = t;
  t = SSLgetAnnotations(not_null(b_39));
  if(((w_38 != NULL) && (w_38 != t)))
    _fail(t);
  else
    w_38 = t;
  t = not_null(x_38);
  t = c_110(t);
  if(((y_38 != NULL) && (y_38 != t)))
    _fail(t);
  else
    y_38 = t;
  if(((a_39 != NULL) && (a_39 != t)))
    _fail(t);
  else
    a_39 = t;
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_38));
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  t = SSLsetAnnotations(not_null(e_5), not_null(w_38));
  if(((z_38 != NULL) && (z_38 != t)))
    _fail(t);
  else
    z_38 = t;
  return(t);
}
ATerm option_defined_1_0 (ATerm i_145 (ATerm), ATerm t)
{
  t = fetch_1_0(i_145, t);
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_a_22;
  t = set_config_0_0(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_39 = NULL;
  if(((d_39 != NULL) && (d_39 != t)))
    _fail(t);
  else
    d_39 = t;
  t = term_a_22;
  t = set_config_0_0(t);
  t = term_d_22;
  t = set_config_0_0(t);
  t = term_e_22;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, h_5, t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      t = Option_3_0(i_5, j_5, k_5, t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_146 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  if(((f_39 != NULL) && (f_39 != t)))
    _fail(t);
  else
    f_39 = t;
  t = term_d_15;
  t = o_146(t);
  if(((e_39 != NULL) && (e_39 != t)))
    _fail(t);
  else
    e_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_21, term_i_21, not_null(e_39));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm d_3 (ATerm), ATerm e_3 (ATerm), ATerm f_3 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  if(((h_39 != NULL) && (h_39 != t)))
    _fail(t);
  else
    h_39 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(h_39);
      t = register_usage_1_0(f_3, t);
    }
  else
    {
      ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_39 != NULL) && (i_39 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_39 = ATgetFirst((ATermList) t);
          if(((j_39 != NULL) && (j_39 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(i_39);
      if(((l_39 != NULL) && (l_39 != t)))
        _fail(t);
      else
        l_39 = t;
      t = not_null(j_39);
      if(((k_39 != NULL) && (k_39 != t)))
        _fail(t);
      else
        k_39 = t;
      t = not_null(h_39);
      if(((o_39 != NULL) && (o_39 != t)))
        _fail(t);
      else
        o_39 = t;
      t = not_null(l_39);
      t = d_3(t);
      t = not_null(o_39);
      if(((n_39 != NULL) && (n_39 != t)))
        _fail(t);
      else
        n_39 = t;
      t = term_d_15;
      t = e_3(t);
      if(((m_39 != NULL) && (m_39 != t)))
        _fail(t);
      else
        m_39 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(k_39)), not_null(m_39));
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm q_39 = NULL;
  if(((q_39 != NULL) && (q_39 != t)))
    _fail(t);
  else
    q_39 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(q_39);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(q_39);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(q_39);
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_j_22;
  t = set_config_0_0(t);
  t = term_k_22;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(l_5, m_5, n_5, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((r_39 != NULL) && (r_39 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        r_39 = ATgetFirst((ATermList) t);
      if(((s_39 != NULL) && (s_39 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        s_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(s_39)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_39)));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  if(((x_39 != NULL) && (x_39 != t)))
    _fail(t);
  else
    x_39 = t;
  if(((z_39 != NULL) && (z_39 != t)))
    _fail(t);
  else
    z_39 = t;
  if(((y_39 != NULL) && (y_39 != t)))
    _fail(t);
  else
    y_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(y_39));
  t = set_config_0_0(t);
  t = not_null(x_39);
  if(((w_39 != NULL) && (w_39 != t)))
    _fail(t);
  else
    w_39 = t;
  if(((v_39 != NULL) && (v_39 != t)))
    _fail(t);
  else
    v_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_39));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm a_40 = NULL;
  if(((a_40 != NULL) && (a_40 != t)))
    _fail(t);
  else
    a_40 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_146 (ATerm), ATerm t)
{
  ATerm u_39 = NULL;
  static ATerm q_5 (ATerm t);
  static ATerm q_5 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = m_146(t);
            t = Cons_2_0(r_5, q_5, t);
          }
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((u_39 != NULL) && (u_39 != t)))
    _fail(t);
  else
    u_39 = t;
  {
    static ATerm o_5 (ATerm t);
    static ATerm o_5 (ATerm t)
    {
      t = term_q_22;
      t = m_146(t);
      return(t);
    }
    t = try_1_0(o_5, t);
  }
  t = not_null(u_39);
  t = Cons_2_0(p_5, q_5, t);
  return(t);
}
ATerm parse_options_3_0 (ATerm j_146 (ATerm), ATerm k_146 (ATerm), ATerm l_146 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,j_40 = NULL;
  if(((j_40 != NULL) && (j_40 != t)))
    _fail(t);
  else
    j_40 = t;
  t = term_r_22;
  t = table_put_0_0(t);
  t = not_null(j_40);
  {
    static ATerm s_5 (ATerm t);
    static ATerm s_5 (ATerm t)
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_146(t);
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          {
            ATerm u_22 = t;
            int v_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(v_22);
              }
            else
              {
                t = u_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
  }
  {
    static ATerm t_5 (ATerm t);
    static ATerm t_5 (ATerm t)
    {
      ATerm w_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_40 (ATerm k_40, ATerm t);
          static ATerm r_40 (ATerm k_40, ATerm t)
          {
            ATerm o_40 = NULL;
            t = not_null(k_40);
            if(((o_40 != NULL) && (o_40 != t)))
              _fail(t);
            else
              o_40 = t;
            t = not_null(k_40);
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_22;
                  t = get_config_0_0(t);
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = y_22;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(o_40);
            t = k_146(t);
            t = term_c_18;
            t = exit_0_0(t);
            return(t);
          }
          ATerm p_40 = NULL;
          if(((p_40 != NULL) && (p_40 != t)))
            _fail(t);
          else
            p_40 = t;
          {
            ATerm a_23 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_40(not_null(p_40), t);
                LocalPopChoice(b_23);
              }
            else
              {
                t = a_23;
                {
                  ATerm q_40 = NULL;
                  t = not_null(p_40);
                  if(((q_40 != NULL) && (q_40 != t)))
                    _fail(t);
                  else
                    q_40 = t;
                  t = term_z_21;
                  t = get_config_0_0(t);
                  t = not_null(q_40);
                  t = l_146(t);
                  t = term_c_18;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(x_22);
        }
      else
        {
          t = w_22;
          {
            static ATerm u_5 (ATerm t);
            static ATerm u_5 (ATerm t)
            {
              static ATerm v_5 (ATerm t);
              static ATerm v_5 (ATerm t)
              {
                if(((d_40 != NULL) && (d_40 != t)))
                  _fail(t);
                else
                  d_40 = t;
                return(t);
              }
              t = Undefined_1_0(v_5, t);
              return(t);
            }
            t = option_defined_1_0(u_5, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_40)), term_c_23));
          t = printnl_0_0(t);
          t = k_146(t);
          t = term_f_18;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(t_5, t);
  }
  if(((e_40 != NULL) && (e_40 != t)))
    _fail(t);
  else
    e_40 = t;
  t = term_h_21;
  t = table_destroy_0_0(t);
  t = not_null(e_40);
  return(t);
}
ATerm option_wrap_5_0 (ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm q_144 (ATerm), ATerm t)
{
  t = parse_options_3_0(m_144, n_144, o_144, t);
  t = store_options_0_0(t);
  t = p_144(t);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_144(t);
        t = report_success_0_0(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm), ATerm t)
{
  t = option_wrap_5_0(i_144, j_144, system_about_0_0, k_144, l_144, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_40 = NULL;
  if(((t_40 != NULL) && (t_40 != t)))
    _fail(t);
  else
    t_40 = t;
  return(t);
}
ATerm option_wrap_2_0 (ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm t)
{
  t = option_wrap_4_0(g_144, system_usage_0_0, w_5, h_144, t);
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm l_153 (ATerm), ATerm m_153 (ATerm), ATerm t)
{
  static ATerm x_5 (ATerm t);
  static ATerm x_5 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_153(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = xtc_contract_options_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(x_5, m_153, t);
  return(t);
}
ATerm print_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_40 != NULL) && (u_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_40 = ATgetArgument(t, 0);
      if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_40 != NULL) && (w_40 != t)))
    _fail(t);
  else
    w_40 = t;
  t = SSL_print(not_null(u_40), not_null(v_40));
  t = not_null(w_40);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  if(((b_41 != NULL) && (b_41 != t)))
    _fail(t);
  else
    b_41 = t;
  t = xtc_find_loc_0_0(t);
  if(((a_41 != NULL) && (a_41 != t)))
    _fail(t);
  else
    a_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_14), not_null(a_41));
  t = concat_strings_0_0(t);
  return(t);
}
ATerm xtc_xtc_get_0_0 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  if(((x_40 != NULL) && (x_40 != t)))
    _fail(t);
  else
    x_40 = t;
  if(((z_40 != NULL) && (z_40 != t)))
    _fail(t);
  else
    z_40 = t;
  t = not_null(x_40);
  t = map_1_0(y_5, t);
  if(((y_40 != NULL) && (y_40 != t)))
    _fail(t);
  else
    y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(y_40));
  t = print_0_0(t);
  t = term_c_18;
  t = exit_0_0(t);
  return(t);
}
static ATerm f_43 (ATerm y_41, ATerm z_41, ATerm a_42, ATerm b_42, ATerm c_42, ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  t = not_null(y_41);
  if(((d_42 != NULL) && (d_42 != t)))
    _fail(t);
  else
    d_42 = t;
  t = not_null(z_41);
  if(((e_42 != NULL) && (e_42 != t)))
    _fail(t);
  else
    e_42 = t;
  t = not_null(a_42);
  if(((f_42 != NULL) && (f_42 != t)))
    _fail(t);
  else
    f_42 = t;
  t = not_null(b_42);
  if(((g_42 != NULL) && (g_42 != t)))
    _fail(t);
  else
    g_42 = t;
  t = not_null(c_42);
  if(((h_42 != NULL) && (h_42 != t)))
    _fail(t);
  else
    h_42 = t;
  t = not_null(e_42);
  if(((i_42 != NULL) && (i_42 != t)))
    _fail(t);
  else
    i_42 = t;
  if(match_string(t, "-r"))
    {
      t = not_null(i_42);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = not_null(i_42);
    }
  t = not_null(h_42);
  t = xtc_init_0_1(not_null(f_42), t);
  t = not_null(g_42);
  t = xtc_xtc_get_0_0(t);
  return(t);
}
ATerm xtc_get_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  if(((j_42 != NULL) && (j_42 != t)))
    _fail(t);
  else
    j_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((k_42 != NULL) && (k_42 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        k_42 = ATgetFirst((ATermList) t);
      if(((l_42 != NULL) && (l_42 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(l_42);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((m_42 != NULL) && (m_42 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        m_42 = ATgetFirst((ATermList) t);
      if(((n_42 != NULL) && (n_42 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        n_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(n_42);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_42 = ATgetFirst((ATermList) t);
      p_42 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(p_42);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(q_42);
          if(match_string(t, "get"))
            {
              t = not_null(m_42);
              if(match_string(t, "get"))
                {
                  ATerm h_23 = t;
                  int i_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_42 = NULL,t_42 = NULL;
                      t = not_null(k_42);
                      if(((s_42 != NULL) && (s_42 != t)))
                        _fail(t);
                      else
                        s_42 = t;
                      t = not_null(n_42);
                      if(((t_42 != NULL) && (t_42 != t)))
                        _fail(t);
                      else
                        t_42 = t;
                      t = xtc_xtc_get_0_0(t);
                      LocalPopChoice(i_23);
                    }
                  else
                    {
                      t = h_23;
                      t = f_43(not_null(k_42), not_null(m_42), not_null(o_42), not_null(r_42), not_null(j_42), t);
                    }
                }
              else
                {
                  t = f_43(not_null(k_42), not_null(m_42), not_null(o_42), not_null(r_42), not_null(j_42), t);
                }
            }
          else
            {
              ATerm u_42 = NULL,v_42 = NULL;
              t = not_null(m_42);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
                _fail(t);
              t = not_null(k_42);
              if(((u_42 != NULL) && (u_42 != t)))
                _fail(t);
              else
                u_42 = t;
              t = not_null(n_42);
              if(((v_42 != NULL) && (v_42 != t)))
                _fail(t);
              else
                v_42 = t;
              t = xtc_xtc_get_0_0(t);
            }
        }
      else
        {
          ATerm w_42 = NULL,x_42 = NULL;
          t = not_null(m_42);
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = not_null(k_42);
          if(((w_42 != NULL) && (w_42 != t)))
            _fail(t);
          else
            w_42 = t;
          t = not_null(n_42);
          if(((x_42 != NULL) && (x_42 != t)))
            _fail(t);
          else
            x_42 = t;
          t = xtc_xtc_get_0_0(t);
        }
    }
  else
    {
      ATerm y_42 = NULL,e_43 = NULL;
      t = not_null(m_42);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
        _fail(t);
      t = not_null(k_42);
      if(((y_42 != NULL) && (y_42 != t)))
        _fail(t);
      else
        y_42 = t;
      t = not_null(n_42);
      if(((e_43 != NULL) && (e_43 != t)))
        _fail(t);
      else
        e_43 = t;
      t = xtc_xtc_get_0_0(t);
    }
  return(t);
}
ATerm xtc_xtc_call_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_43 != NULL) && (g_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_43 = ATgetArgument(t, 0);
      if(((h_43 != NULL) && (h_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_43 != NULL) && (j_43 != t)))
    _fail(t);
  else
    j_43 = t;
  t = not_null(g_43);
  t = xtc_find_loc_0_0(t);
  if(((i_43 != NULL) && (i_43 != t)))
    _fail(t);
  else
    i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_43), not_null(h_43));
  t = execvp_0_0(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_43 = NULL;
  if(((l_43 != NULL) && (l_43 != t)))
    _fail(t);
  else
    l_43 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm m_80, ATerm t)
{
  static ATerm a_6 (ATerm t);
  static ATerm a_6 (ATerm t)
  {
    ATerm m_43 = NULL,r_43 = NULL;
    if(((r_43 != NULL) && (r_43 != t)))
      _fail(t);
    else
      r_43 = t;
    if(((m_43 != NULL) && (m_43 != t)))
      _fail(t);
    else
      m_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_43), not_null(m_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(z_5, a_6, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm l_80, ATerm t)
{
  static ATerm b_6 (ATerm t);
  static ATerm b_6 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(l_80), t);
    return(t);
  }
  t = map_1_0(b_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  if(((a_44 != NULL) && (a_44 != t)))
    _fail(t);
  else
    a_44 = t;
  t = Fst_0_0(t);
  if(((x_43 != NULL) && (x_43 != t)))
    _fail(t);
  else
    x_43 = t;
  t = not_null(a_44);
  if(((z_43 != NULL) && (z_43 != t)))
    _fail(t);
  else
    z_43 = t;
  t = Snd_0_0(t);
  if(((y_43 != NULL) && (y_43 != t)))
    _fail(t);
  else
    y_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_17, not_null(x_43), not_null(y_43));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm c_3, ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  if(((t_43 != NULL) && (t_43 != t)))
    _fail(t);
  else
    t_43 = t;
  if(match_cons(t, sym_Reference_1))
    {
      u_43 = ATgetArgument(t, 0);
      {
        ATerm w_43 = NULL;
        t = not_null(u_43);
        if(((w_43 != NULL) && (w_43 != t)))
          _fail(t);
        else
          w_43 = t;
        t = xtc_add_meta_all_0_1(not_null(c_3), t);
        t = map_1_0(c_6, t);
      }
    }
  else
    {
      ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((u_43 != NULL) && (u_43 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_43 = ATgetArgument(t, 0);
          if(((v_43 != NULL) && (v_43 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(u_43);
      if(((b_44 != NULL) && (b_44 != t)))
        _fail(t);
      else
        b_44 = t;
      t = not_null(v_43);
      if(((c_44 != NULL) && (c_44 != t)))
        _fail(t);
      else
        c_44 = t;
      t = not_null(t_43);
      if(((e_44 != NULL) && (e_44 != t)))
        _fail(t);
      else
        e_44 = t;
      t = not_null(c_44);
      t = xtc_add_meta_all_0_1(not_null(c_3), t);
      if(((d_44 != NULL) && (d_44 != t)))
        _fail(t);
      else
        d_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_15, not_null(b_44), not_null(d_44));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm r_79, ATerm t)
{
  static ATerm d_6 (ATerm t);
  static ATerm d_6 (ATerm t)
  {
    static ATerm e_6 (ATerm t);
    static ATerm e_6 (ATerm t)
    {
      t = xtc_register_0_1(not_null(r_79), t);
      return(t);
    }
    t = map_1_0(e_6, t);
    return(t);
  }
  t = Repository_1_0(d_6, t);
  return(t);
}
ATerm Repository_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,f_6 = NULL,a_14 = NULL;
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((g_44 != NULL) && (g_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((l_44 != NULL) && (l_44 != t)))
    _fail(t);
  else
    l_44 = t;
  t = SSLgetAnnotations(not_null(k_44));
  if(((f_44 != NULL) && (f_44 != t)))
    _fail(t);
  else
    f_44 = t;
  t = not_null(g_44);
  t = d_110(t);
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  if(((j_44 != NULL) && (j_44 != t)))
    _fail(t);
  else
    j_44 = t;
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(h_44));
  if(((f_6 != NULL) && (f_6 != t)))
    _fail(t);
  else
    f_6 = t;
  t = SSLsetAnnotations(not_null(f_6), not_null(f_44));
  if(((i_44 != NULL) && (i_44 != t)))
    _fail(t);
  else
    i_44 = t;
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  if(((n_44 != NULL) && (n_44 != t)))
    _fail(t);
  else
    n_44 = t;
  if(((m_44 != NULL) && (m_44 != t)))
    _fail(t);
  else
    m_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_23), not_null(m_44));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(((p_44 != NULL) && (p_44 != t)))
    _fail(t);
  else
    p_44 = t;
  t = get_extension_0_0(t);
  if(((o_44 != NULL) && (o_44 != t)))
    _fail(t);
  else
    o_44 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_44 = NULL;
        if(((q_44 != NULL) && (q_44 != t)))
          _fail(t);
        else
          q_44 = t;
        t = not_null(o_44);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(q_44);
        LocalPopChoice(l_23);
        t = (ATerm) ATinsert(ATempty, term_p_23);
      }
    else
      {
        t = k_23;
        t = not_null(p_44);
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_44 = NULL;
              if(((r_44 != NULL) && (r_44 != t)))
                _fail(t);
              else
                r_44 = t;
              t = not_null(o_44);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(r_44);
              LocalPopChoice(r_23);
              t = (ATerm) ATinsert(ATempty, term_u_23);
            }
          else
            {
              t = q_23;
              t = not_null(p_44);
              {
                ATerm v_23 = t;
                int w_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_44 = NULL;
                    if(((s_44 != NULL) && (s_44 != t)))
                      _fail(t);
                    else
                      s_44 = t;
                    t = not_null(o_44);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(s_44);
                    LocalPopChoice(w_23);
                    t = (ATerm) ATinsert(ATempty, term_u_23);
                  }
                else
                  {
                    t = v_23;
                    t = not_null(p_44);
                    {
                      ATerm x_23 = t;
                      int y_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_44 = NULL;
                          if(((t_44 != NULL) && (t_44 != t)))
                            _fail(t);
                          else
                            t_44 = t;
                          t = not_null(o_44);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(t_44);
                          LocalPopChoice(y_23);
                          t = (ATerm) ATinsert(ATempty, term_b_24);
                        }
                      else
                        {
                          t = x_23;
                          t = not_null(p_44);
                          {
                            ATerm c_24 = t;
                            int d_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_44 = NULL;
                                if(((u_44 != NULL) && (u_44 != t)))
                                  _fail(t);
                                else
                                  u_44 = t;
                                t = not_null(o_44);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(u_44);
                                LocalPopChoice(d_24);
                                t = (ATerm) ATinsert(ATempty, term_g_24);
                              }
                            else
                              {
                                t = c_24;
                                t = not_null(p_44);
                                {
                                  ATerm h_24 = t;
                                  int i_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm v_44 = NULL;
                                      if(((v_44 != NULL) && (v_44 != t)))
                                        _fail(t);
                                      else
                                        v_44 = t;
                                      t = not_null(o_44);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(v_44);
                                      LocalPopChoice(i_24);
                                      t = (ATerm) ATinsert(ATempty, term_g_24);
                                    }
                                  else
                                    {
                                      t = h_24;
                                      t = not_null(p_44);
                                      {
                                        ATerm j_24 = t;
                                        int k_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_44 = NULL;
                                            if(((w_44 != NULL) && (w_44 != t)))
                                              _fail(t);
                                            else
                                              w_44 = t;
                                            t = not_null(o_44);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(w_44);
                                            LocalPopChoice(k_24);
                                            t = (ATerm) ATinsert(ATempty, term_n_24);
                                          }
                                        else
                                          {
                                            t = j_24;
                                            t = not_null(p_44);
                                            {
                                              ATerm o_24 = t;
                                              int p_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_44 = NULL;
                                                  if(((x_44 != NULL) && (x_44 != t)))
                                                    _fail(t);
                                                  else
                                                    x_44 = t;
                                                  t = not_null(o_44);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(x_44);
                                                  LocalPopChoice(p_24);
                                                  t = (ATerm) ATinsert(ATempty, term_s_24);
                                                }
                                              else
                                                {
                                                  t = o_24;
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
static ATerm h_6 (ATerm t)
{
  ATerm a_45 = NULL;
  if(((a_45 != NULL) && (a_45 != t)))
    _fail(t);
  else
    a_45 = t;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm b_45 = NULL;
  if(((b_45 != NULL) && (b_45 != t)))
    _fail(t);
  else
    b_45 = t;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm n_135 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm g_6 (ATerm t);
    static ATerm g_6 (ATerm t)
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(h_6, g_6, t);
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          {
            ATerm v_24 = t;
            int w_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(i_6, j_6, t);
                LocalPopChoice(w_24);
              }
            else
              {
                t = v_24;
                t = Cons_2_0(k_6, n_135, t);
                t = (ATerm) ATempty;
              }
          }
        }
      return(t);
    }
    t = try_1_0(g_6, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm e_45 = NULL;
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(l_6, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  if(((i_45 != NULL) && (i_45 != t)))
    _fail(t);
  else
    i_45 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  t = not_null(i_45);
  if(((h_45 != NULL) && (h_45 != t)))
    _fail(t);
  else
    h_45 = t;
  t = base_filename_0_0(t);
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_45), not_null(g_45));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm x_24 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_45 = NULL;
      if(((j_45 != NULL) && (j_45 != t)))
        _fail(t);
      else
        j_45 = t;
      t = has_no_extension_0_0(t);
      t = not_null(j_45);
      LocalPopChoice(m_25);
      t = (ATerm) ATinsert(ATempty, term_k_29);
    }
  else
    {
      t = x_24;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  if(((n_45 != NULL) && (n_45 != t)))
    _fail(t);
  else
    n_45 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((k_45 != NULL) && (k_45 != t)))
    _fail(t);
  else
    k_45 = t;
  t = not_null(n_45);
  if(((m_45 != NULL) && (m_45 != t)))
    _fail(t);
  else
    m_45 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((l_45 != NULL) && (l_45 != t)))
    _fail(t);
  else
    l_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_45), not_null(l_45));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_45 != NULL) && (o_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_45 = ATgetArgument(t, 0);
      if(((p_45 != NULL) && (p_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_45 != NULL) && (r_45 != t)))
    _fail(t);
  else
    r_45 = t;
  if(((t_45 != NULL) && (t_45 != t)))
    _fail(t);
  else
    t_45 = t;
  t = not_null(p_45);
  t = xtc_default_xt_meta_0_0(t);
  if(((s_45 != NULL) && (s_45 != t)))
    _fail(t);
  else
    s_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_16, (ATerm) ATmakeAppl(sym_String_1, not_null(o_45)))), not_null(s_45));
  t = conc_0_0(t);
  if(((q_45 != NULL) && (q_45 != t)))
    _fail(t);
  else
    q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_45), not_null(q_45));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      if(match_cons(o_29, sym_Tool_1))
        {
          if(((u_45 != NULL) && (u_45 != ATgetArgument(o_29, 0))))
            _fail(ATgetArgument(o_29, 0));
          else
            u_45 = ATgetArgument(o_29, 0);
        }
      else
        _fail(t);
      if(((v_45 != NULL) && (v_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_45 != NULL) && (x_45 != t)))
    _fail(t);
  else
    x_45 = t;
  t = not_null(v_45);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((w_45 != NULL) && (w_45 != t)))
    _fail(t);
  else
    w_45 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(u_45), not_null(w_45));
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  if(((b_46 != NULL) && (b_46 != t)))
    _fail(t);
  else
    b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_46), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if(!(match_cons(f_30, sym_Import_0)))
        _fail(t);
      if(((y_45 != NULL) && (y_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_46 != NULL) && (a_46 != t)))
    _fail(t);
  else
    a_46 = t;
  t = not_null(y_45);
  t = map_1_0(m_6, t);
  if(((z_45 != NULL) && (z_45 != t)))
    _fail(t);
  else
    z_45 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(z_45));
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = filter_1_0(p_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  t = term_d_15;
  if(((e_46 != NULL) && (e_46 != t)))
    _fail(t);
  else
    e_46 = t;
  t = term_f_31;
  if(((d_46 != NULL) && (d_46 != t)))
    _fail(t);
  else
    d_46 = t;
  t = not_null(e_46);
  t = err_0_1(not_null(d_46), t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = XtcConvertTool_0_0(t);
    }
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(n_6, o_6, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  if(((g_46 != NULL) && (g_46 != t)))
    _fail(t);
  else
    g_46 = t;
  t = xtc_convert_0_0(t);
  if(((f_46 != NULL) && (f_46 != t)))
    _fail(t);
  else
    f_46 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(f_46));
  return(t);
}
ATerm notice_0_1 (ATerm i_79, ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  if(((m_46 != NULL) && (m_46 != t)))
    _fail(t);
  else
    m_46 = t;
  t = term_i_32;
  if(((h_46 != NULL) && (h_46 != t)))
    _fail(t);
  else
    h_46 = t;
  t = not_null(m_46);
  if(((j_46 != NULL) && (j_46 != t)))
    _fail(t);
  else
    j_46 = t;
  if(((l_46 != NULL) && (l_46 != t)))
    _fail(t);
  else
    l_46 = t;
  if(((k_46 != NULL) && (k_46 != t)))
    _fail(t);
  else
    k_46 = t;
  if(((i_46 != NULL) && (i_46 != t)))
    _fail(t);
  else
    i_46 = t;
  t = not_null(j_46);
  t = log_0_3(not_null(h_46), not_null(i_79), not_null(i_46), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm n_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(match_cons(j_32, sym_Stream_1))
        {
          if(((n_46 != NULL) && (n_46 != ATgetArgument(j_32, 0))))
            _fail(ATgetArgument(j_32, 0));
          else
            n_46 = ATgetArgument(j_32, 0);
        }
      else
        _fail(t);
      if(((v_46 != NULL) && (v_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(n_46), not_null(v_46));
  if(((x_46 != NULL) && (x_46 != t)))
    _fail(t);
  else
    x_46 = t;
  if(((w_46 != NULL) && (w_46 != t)))
    _fail(t);
  else
    w_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_46));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_47 != NULL) && (d_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_47 = ATgetArgument(t, 0);
      if(((y_46 != NULL) && (y_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_47);
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  if(((b_47 != NULL) && (b_47 != t)))
    _fail(t);
  else
    b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_47), term_k_32);
  t = open_stream_0_0(t);
  if(((a_47 != NULL) && (a_47 != t)))
    _fail(t);
  else
    a_47 = t;
  if(((z_46 != NULL) && (z_46 != t)))
    _fail(t);
  else
    z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), not_null(y_46));
  t = d_124(t);
  t = fclose_0_0(t);
  t = not_null(y_46);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm e_47 = NULL;
  if(((e_47 != NULL) && (e_47 != t)))
    _fail(t);
  else
    e_47 = t;
  t = SSL_creat(not_null(e_47));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  static ATerm q_6 (ATerm t);
  static ATerm q_6 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_47 != NULL) && (f_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_47 = ATgetFirst((ATermList) t);
        {
          ATerm l_32 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(l_32) != AT_LIST) || !(ATisEmpty(l_32))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(q_6, t);
  if(((h_47 != NULL) && (h_47 != t)))
    _fail(t);
  else
    h_47 = t;
  if(((g_47 != NULL) && (g_47 != t)))
    _fail(t);
  else
    g_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_47), not_null(f_47));
  return(t);
}
ATerm repeat_2_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t)
{
  static ATerm i_47 (ATerm t);
  static ATerm i_47 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_117(t);
        t = i_47(t);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = b_117(t);
      }
    return(t);
  }
  t = i_47(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm k_47 = NULL;
  if(((k_47 != NULL) && (k_47 != t)))
    _fail(t);
  else
    k_47 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  t = repeat_2_0(d_117, r_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm n_47 = NULL;
  if(((n_47 != NULL) && (n_47 != t)))
    _fail(t);
  else
    n_47 = t;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm o_47 = NULL;
  if(((o_47 != NULL) && (o_47 != t)))
    _fail(t);
  else
    o_47 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  static ATerm p_47 (ATerm t);
  static ATerm p_47 (ATerm t)
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_6, Nil_0_0, t);
        t = l_125(t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = Cons_2_0(t_6, p_47, t);
      }
    return(t);
  }
  t = p_47(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  t = at_last_1_0(Tl_0_0, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm f_135 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = f_135(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = try_1_0(v_6, t);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATinsert(ATempty, term_q_32);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(w_6, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_j_23);
        }
      else
        {
          t = repeat_1_0(z_6, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_q_32);
            }
          else
            {
              ATerm v_47 = NULL;
              if(((v_47 != NULL) && (v_47 != t)))
                _fail(t);
              else
                v_47 = t;
            }
        }
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm s_47 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((s_47 != NULL) && (s_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_47 = ATgetArgument(t, 0);
      {
        ATerm r_32 = ATgetArgument(t, 1);
        if(((ATgetType(r_32) != AT_INT) || (ATgetInt((ATermInt) r_32) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(s_47);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = split_init_last_0_0(t);
  t = _2_0(x_6, y_6, t);
  t = Fst_0_0(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm t_47 = NULL;
  if(((t_47 != NULL) && (t_47 != t)))
    _fail(t);
  else
    t_47 = t;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm s_32 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_32;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm u_47 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((u_47 != NULL) && (u_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_47 = ATgetArgument(t, 0);
      {
        ATerm t_32 = ATgetArgument(t, 1);
        if(((ATgetType(t_32) != AT_INT) || (ATgetInt((ATermInt) t_32) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(u_47);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(u_6, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm w_47 = NULL;
  if(((w_47 != NULL) && (w_47 != t)))
    _fail(t);
  else
    w_47 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(w_47);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm u_32 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_32;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL;
  if(((y_47 != NULL) && (y_47 != t)))
    _fail(t);
  else
    y_47 = t;
  if(((x_47 != NULL) && (x_47 != t)))
    _fail(t);
  else
    x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_47), (ATerm) ATinsert(ATempty, term_v_32));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm c_80, ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_47 = NULL;
      if(((z_47 != NULL) && (z_47 != t)))
        _fail(t);
      else
        z_47 = t;
      t = not_null(c_80);
      {
        ATerm z_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(a_34);
          }
        else
          {
            t = z_33;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(z_47);
      LocalPopChoice(y_33);
      {
        ATerm a_48 = NULL,b_48 = NULL;
        if(((b_48 != NULL) && (b_48 != t)))
          _fail(t);
        else
          b_48 = t;
        if(((a_48 != NULL) && (a_48 != t)))
          _fail(t);
        else
          a_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_80), not_null(a_48));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = x_33;
      {
        ATerm c_48 = NULL,h_48 = NULL;
        t = not_null(c_80);
        if(((h_48 != NULL) && (h_48 != t)))
          _fail(t);
        else
          h_48 = t;
        t = term_b_34;
        if(((c_48 != NULL) && (c_48 != t)))
          _fail(t);
        else
          c_48 = t;
        t = not_null(h_48);
        t = err_0_1(not_null(c_48), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm l_48 = NULL;
  if(((l_48 != NULL) && (l_48 != t)))
    _fail(t);
  else
    l_48 = t;
  {
    ATerm c_34 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_34;
      }
  }
  t = term_f_34;
  t = xtc_save_file_0_1(not_null(l_48), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm m_48 = NULL;
  if(((m_48 != NULL) && (m_48 != t)))
    _fail(t);
  else
    m_48 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_48 = NULL,p_48 = NULL;
        t = not_null(m_48);
        if(((p_48 != NULL) && (p_48 != t)))
          _fail(t);
        else
          p_48 = t;
        t = not_null(m_48);
        if(((n_48 != NULL) && (n_48 != t)))
          _fail(t);
        else
          n_48 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_48));
        t = read_from_0_0(t);
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm i_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
              t = not_null(m_48);
              if(((s_48 != NULL) && (s_48 != t)))
                _fail(t);
              else
                s_48 = t;
              t = not_null(m_48);
              t = xtc_create_new_0_0(t);
              t = not_null(s_48);
              if(((r_48 != NULL) && (r_48 != t)))
                _fail(t);
              else
                r_48 = t;
              if(((q_48 != NULL) && (q_48 != t)))
                _fail(t);
              else
                q_48 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_48));
              t = read_from_0_0(t);
              LocalPopChoice(k_34);
            }
          else
            {
              t = i_34;
              {
                ATerm t_48 = NULL,u_48 = NULL;
                t = not_null(m_48);
                if(((u_48 != NULL) && (u_48 != t)))
                  _fail(t);
                else
                  u_48 = t;
                t = term_l_34;
                if(((t_48 != NULL) && (t_48 != t)))
                  _fail(t);
                else
                  t_48 = t;
                t = not_null(u_48);
                t = err_0_1(not_null(t_48), t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm err_0_1 (ATerm g_79, ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,z_48 = NULL,b_49 = NULL,c_49 = NULL;
  if(((c_49 != NULL) && (c_49 != t)))
    _fail(t);
  else
    c_49 = t;
  t = term_r_34;
  if(((v_48 != NULL) && (v_48 != t)))
    _fail(t);
  else
    v_48 = t;
  t = not_null(c_49);
  if(((x_48 != NULL) && (x_48 != t)))
    _fail(t);
  else
    x_48 = t;
  if(((b_49 != NULL) && (b_49 != t)))
    _fail(t);
  else
    b_49 = t;
  if(((z_48 != NULL) && (z_48 != t)))
    _fail(t);
  else
    z_48 = t;
  if(((w_48 != NULL) && (w_48 != t)))
    _fail(t);
  else
    w_48 = t;
  t = not_null(x_48);
  t = log_0_3(not_null(v_48), not_null(g_79), not_null(w_48), t);
  return(t);
}
static ATerm z_49 (ATerm j_49, ATerm l_49, ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  t = not_null(j_49);
  if(((q_49 != NULL) && (q_49 != t)))
    _fail(t);
  else
    q_49 = t;
  t = SSL_fclose(not_null(q_49));
  return(t);
}
static ATerm e_50 (ATerm s_49, ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL;
  t = not_null(s_49);
  if(((u_49 != NULL) && (u_49 != t)))
    _fail(t);
  else
    u_49 = t;
  t = SSL_fclose(not_null(u_49));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  if(((y_49 != NULL) && (y_49 != t)))
    _fail(t);
  else
    y_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_49 = ATgetArgument(t, 0);
      {
        ATerm s_34 = t;
        int t_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_49(not_null(x_49), not_null(y_49), t);
            LocalPopChoice(t_34);
          }
        else
          {
            t = s_34;
            t = e_50(not_null(y_49), t);
          }
      }
    }
  else
    {
      t = e_50(not_null(y_49), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm f_50 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((f_50 != NULL) && (f_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(f_50));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_50 != NULL) && (g_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_50 = ATgetArgument(t, 0);
      if(((h_50 != NULL) && (h_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(g_50), not_null(h_50));
  if(((j_50 != NULL) && (j_50 != t)))
    _fail(t);
  else
    j_50 = t;
  if(((i_50 != NULL) && (i_50 != t)))
    _fail(t);
  else
    i_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_50));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL;
  t = SSL_stdin_stream();
  if(((l_50 != NULL) && (l_50 != t)))
    _fail(t);
  else
    l_50 = t;
  if(((k_50 != NULL) && (k_50 != t)))
    _fail(t);
  else
    k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_50));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL;
  t = SSL_stdout_stream();
  if(((n_50 != NULL) && (n_50 != t)))
    _fail(t);
  else
    n_50 = t;
  if(((m_50 != NULL) && (m_50 != t)))
    _fail(t);
  else
    m_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_50));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm p_50 = NULL;
  if(((p_50 != NULL) && (p_50 != t)))
    _fail(t);
  else
    p_50 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(p_50);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(p_50);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(p_50);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm s_50 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((s_50 != NULL) && (s_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(s_50);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm t_50 = NULL;
  if(((t_50 != NULL) && (t_50 != t)))
    _fail(t);
  else
    t_50 = t;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_50 = NULL;
  if(((u_50 != NULL) && (u_50 != t)))
    _fail(t);
  else
    u_50 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      ATerm v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        {
          ATerm h_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(a_7, b_7, t);
              t = fopen_0_0(t);
              LocalPopChoice(n_35);
            }
          else
            {
              t = h_35;
              t = _2_0(is_string_0_0, c_7, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  if(((x_50 != NULL) && (x_50 != t)))
    _fail(t);
  else
    x_50 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_50 = NULL,z_50 = NULL;
        t = not_null(x_50);
        if(((z_50 != NULL) && (z_50 != t)))
          _fail(t);
        else
          z_50 = t;
        t = not_null(x_50);
        if(((y_50 != NULL) && (y_50 != t)))
          _fail(t);
        else
          y_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_50), term_q_35);
        t = open_stream_0_0(t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        {
          ATerm a_51 = NULL,b_51 = NULL;
          t = not_null(x_50);
          if(((b_51 != NULL) && (b_51 != t)))
            _fail(t);
          else
            b_51 = t;
          t = not_null(x_50);
          if(((a_51 != NULL) && (a_51 != t)))
            _fail(t);
          else
            a_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_35, not_null(a_51));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((w_50 != NULL) && (w_50 != t)))
    _fail(t);
  else
    w_50 = t;
  t = read_from_stream_0_0(t);
  if(((v_50 != NULL) && (v_50 != t)))
    _fail(t);
  else
    v_50 = t;
  t = not_null(w_50);
  t = fclose_0_0(t);
  t = not_null(v_50);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_51 != NULL) && (e_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_51 = ATgetArgument(t, 0);
      if(((f_51 != NULL) && (f_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(e_51), not_null(f_51));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  if(((h_51 != NULL) && (h_51 != t)))
    _fail(t);
  else
    h_51 = t;
  if(((g_51 != NULL) && (g_51 != t)))
    _fail(t);
  else
    g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), (ATerm) ATinsert(ATempty, term_s_35));
  t = access_0_0(t);
  return(t);
}
static ATerm y_51 (ATerm k_51, ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  t = not_null(k_51);
  if(((o_51 != NULL) && (o_51 != t)))
    _fail(t);
  else
    o_51 = t;
  t = not_null(k_51);
  if(((p_51 != NULL) && (p_51 != t)))
    _fail(t);
  else
    p_51 = t;
  t = not_null(o_51);
  if(((q_51 != NULL) && (q_51 != t)))
    _fail(t);
  else
    q_51 = t;
  t = SSL_explode_term(not_null(q_51));
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((l_51 != NULL) && (l_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_51);
  if(((n_51 != NULL) && (n_51 != t)))
    _fail(t);
  else
    n_51 = t;
  t = not_null(l_51);
  t = concat_0_0(t);
  if(((m_51 != NULL) && (m_51 != t)))
    _fail(t);
  else
    m_51 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  if(((t_51 != NULL) && (t_51 != t)))
    _fail(t);
  else
    t_51 = t;
  if(match_cons(t, sym__2))
    {
      r_51 = ATgetArgument(t, 0);
      s_51 = ATgetArgument(t, 1);
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
            t = not_null(r_51);
            if(((u_51 != NULL) && (u_51 != t)))
              _fail(t);
            else
              u_51 = t;
            t = not_null(s_51);
            if(((v_51 != NULL) && (v_51 != t)))
              _fail(t);
            else
              v_51 = t;
            t = not_null(t_51);
            if(((x_51 != NULL) && (x_51 != t)))
              _fail(t);
            else
              x_51 = t;
            t = not_null(u_51);
            {
              static ATerm d_7 (ATerm t);
              static ATerm d_7 (ATerm t)
              {
                t = not_null(v_51);
                return(t);
              }
              t = at_end_1_0(d_7, t);
            }
            if(((w_51 != NULL) && (w_51 != t)))
              _fail(t);
            else
              w_51 = t;
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
            t = y_51(not_null(t_51), t);
          }
      }
    }
  else
    {
      t = y_51(not_null(t_51), t);
    }
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm z_51 = NULL;
  if(((z_51 != NULL) && (z_51 != t)))
    _fail(t);
  else
    z_51 = t;
  t = SSL_exit(not_null(z_51));
  return(t);
}
ATerm call_1_0 (ATerm x_142 (ATerm), ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  static ATerm e_7 (ATerm t);
  static ATerm e_7 (ATerm t)
  {
    t = x_142(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_52), not_null(b_52));
    t = execvp_0_0(t);
    t = term_f_18;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((a_52 != NULL) && (a_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_52 = ATgetArgument(t, 0);
      if(((b_52 != NULL) && (b_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(e_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm d_52 = NULL;
  if(((d_52 != NULL) && (d_52 != t)))
    _fail(t);
  else
    d_52 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(f_7, t);
  return(t);
}
ATerm xtc_fetch_loc_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_find_loc_1_0 (ATerm v_154 (ATerm), ATerm t)
{
  t = xtc_find_reg_1_0(v_154, t);
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
  ATerm e_52 = NULL,f_52 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_52 != NULL) && (e_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_52 = ATgetArgument(t, 0);
      if(((f_52 != NULL) && (f_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(e_52), not_null(f_52));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_52 != NULL) && (g_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_52 = ATgetArgument(t, 0);
      if(((h_52 != NULL) && (h_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(g_52), not_null(h_52));
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
ATerm printnl_0_0 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_52 != NULL) && (i_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_52 = ATgetArgument(t, 0);
      if(((j_52 != NULL) && (j_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_52 != NULL) && (k_52 != t)))
    _fail(t);
  else
    k_52 = t;
  t = SSL_printnl(not_null(i_52), not_null(j_52));
  t = not_null(k_52);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm l_52 = NULL;
  if(((l_52 != NULL) && (l_52 != t)))
    _fail(t);
  else
    l_52 = t;
  t = SSL_int_to_string(not_null(l_52));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  if(((n_52 != NULL) && (n_52 != t)))
    _fail(t);
  else
    n_52 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_52 = ATgetArgument(t, 0);
      {
        ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
        t = not_null(o_52);
        if(((r_52 != NULL) && (r_52 != t)))
          _fail(t);
        else
          r_52 = t;
        t = not_null(n_52);
        if(((t_52 != NULL) && (t_52 != t)))
          _fail(t);
        else
          t_52 = t;
        if(((v_52 != NULL) && (v_52 != t)))
          _fail(t);
        else
          v_52 = t;
        t = not_null(r_52);
        t = int_to_string_0_0(t);
        if(((u_52 != NULL) && (u_52 != t)))
          _fail(t);
        else
          u_52 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_37), not_null(u_52)), term_m_36);
        t = concat_strings_0_0(t);
        if(((s_52 != NULL) && (s_52 != t)))
          _fail(t);
        else
          s_52 = t;
      }
    }
  else
    {
      ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((o_52 != NULL) && (o_52 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_52 = ATgetArgument(t, 0);
          if(((p_52 != NULL) && (p_52 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_52 = ATgetArgument(t, 1);
          if(((q_52 != NULL) && (q_52 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            q_52 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(o_52);
      if(((w_52 != NULL) && (w_52 != t)))
        _fail(t);
      else
        w_52 = t;
      t = not_null(p_52);
      if(((x_52 != NULL) && (x_52 != t)))
        _fail(t);
      else
        x_52 = t;
      t = not_null(q_52);
      if(((y_52 != NULL) && (y_52 != t)))
        _fail(t);
      else
        y_52 = t;
      t = not_null(n_52);
      if(((a_53 != NULL) && (a_53 != t)))
        _fail(t);
      else
        a_53 = t;
      if(((c_53 != NULL) && (c_53 != t)))
        _fail(t);
      else
        c_53 = t;
      t = not_null(x_52);
      t = int_to_string_0_0(t);
      if(((b_53 != NULL) && (b_53 != t)))
        _fail(t);
      else
        b_53 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_52)), term_q_37), not_null(b_53)), term_l_15), not_null(w_52));
      t = concat_strings_0_0(t);
      if(((z_52 != NULL) && (z_52 != t)))
        _fail(t);
      else
        z_52 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_124 (ATerm), ATerm t)
{
  ATerm d_53 = NULL;
  static ATerm g_7 (ATerm t);
  static ATerm g_7 (ATerm t)
  {
    t = v_124(t);
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    return(t);
  }
  t = fetch_1_0(g_7, t);
  t = not_null(d_53);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_53 = NULL;
  if(((e_53 != NULL) && (e_53 != t)))
    _fail(t);
  else
    e_53 = t;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_7 (ATerm t);
        static ATerm h_7 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_37 = ATgetArgument(t, 0);
              if(((e_53 != NULL) && (e_53 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_53 = ATgetArgument(t, 1);
              {
                ATerm a_38 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_55), term_x_54), term_z_53), term_n_53), term_j_51), term_r_50), term_c_50), term_v_49), term_m_49), term_g_49), term_a_49), term_j_48), term_e_48), term_m_47), term_t_46), term_p_46), term_y_44), term_o_43), term_b_43), term_w_41), term_s_41), term_o_41), term_k_41), term_g_41), term_c_41), term_l_40), term_f_40), term_p_39);
        t = fetch_elem_1_0(h_7, t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(e_53));
      }
  }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm l_55 = ATgetArgument(t, 0);
      if(((i_53 != NULL) && (i_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_53 = ATgetArgument(t, 1);
      {
        ATerm q_55 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(i_53);
  {
    ATerm r_55 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_55;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((h_53 != NULL) && (h_53 != t)))
    _fail(t);
  else
    h_53 = t;
  if(((g_53 != NULL) && (g_53 != t)))
    _fail(t);
  else
    g_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_53)), term_s_55));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_53 = NULL;
  if(((f_53 != NULL) && (f_53 != t)))
    _fail(t);
  else
    f_53 = t;
  t = try_1_0(i_7, t);
  t = not_null(f_53);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm j_53 = NULL;
  if(((j_53 != NULL) && (j_53 != t)))
    _fail(t);
  else
    j_53 = t;
  t = SSL_waitpid(not_null(j_53));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm z_142 (ATerm), ATerm a_143 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  if(((m_53 != NULL) && (m_53 != t)))
    _fail(t);
  else
    m_53 = t;
  t = fork_0_0(t);
  if(((l_53 != NULL) && (l_53 != t)))
    _fail(t);
  else
    l_53 = t;
  {
    ATerm t_55 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_53 = NULL;
        if(((p_53 != NULL) && (p_53 != t)))
          _fail(t);
        else
          p_53 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(m_53);
        t = z_142(t);
        LocalPopChoice(b_56);
      }
    else
      {
        t = t_55;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(m_53));
        t = a_143(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm b_143 (ATerm), ATerm t)
{
  ATerm q_53 = NULL;
  static ATerm j_7 (ATerm t);
  static ATerm j_7 (ATerm t)
  {
    ATerm r_53 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_53 = ATgetArgument(t, 0);
        if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(r_53);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm c_56 = ATgetArgument(t, 0);
        if(((ATgetType(c_56) != AT_INT) || (ATgetInt((ATermInt) c_56) != 0)))
          _fail(t);
        {
          ATerm d_56 = ATgetArgument(t, 1);
        }
        {
          ATerm k_56 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(q_53);
    return(t);
  }
  t = fork_2_0(b_143, j_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
  if(((g_54 != NULL) && (g_54 != t)))
    _fail(t);
  else
    g_54 = t;
  if(((d_54 != NULL) && (d_54 != t)))
    _fail(t);
  else
    d_54 = t;
  t = not_null(g_54);
  if(((f_54 != NULL) && (f_54 != t)))
    _fail(t);
  else
    f_54 = t;
  t = STDIN__FILENO_0_0(t);
  if(((e_54 != NULL) && (e_54 != t)))
    _fail(t);
  else
    e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_54), not_null(e_54));
  t = dup2_0_0(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  if(((k_54 != NULL) && (k_54 != t)))
    _fail(t);
  else
    k_54 = t;
  if(((h_54 != NULL) && (h_54 != t)))
    _fail(t);
  else
    h_54 = t;
  t = not_null(k_54);
  if(((j_54 != NULL) && (j_54 != t)))
    _fail(t);
  else
    j_54 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((i_54 != NULL) && (i_54 != t)))
    _fail(t);
  else
    i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_54), not_null(i_54));
  t = dup2_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  if(((o_54 != NULL) && (o_54 != t)))
    _fail(t);
  else
    o_54 = t;
  if(((l_54 != NULL) && (l_54 != t)))
    _fail(t);
  else
    l_54 = t;
  t = not_null(o_54);
  if(((n_54 != NULL) && (n_54 != t)))
    _fail(t);
  else
    n_54 = t;
  t = STDERR__FILENO_0_0(t);
  if(((m_54 != NULL) && (m_54 != t)))
    _fail(t);
  else
    m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_54), not_null(m_54));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm s_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,b_54 = NULL,c_54 = NULL;
  if(((c_54 != NULL) && (c_54 != t)))
    _fail(t);
  else
    c_54 = t;
  t = term_l_56;
  if(((b_54 != NULL) && (b_54 != t)))
    _fail(t);
  else
    b_54 = t;
  t = not_null(c_54);
  t = dbg_0_1(not_null(b_54), t);
  if(match_cons(t, sym__3))
    {
      if(((x_53 != NULL) && (x_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_53 = ATgetArgument(t, 0);
      {
        ATerm m_56 = ATgetArgument(t, 1);
        if(match_cons(m_56, sym__3))
          {
            if(((s_53 != NULL) && (s_53 != ATgetArgument(m_56, 0))))
              _fail(ATgetArgument(m_56, 0));
            else
              s_53 = ATgetArgument(m_56, 0);
            if(((v_53 != NULL) && (v_53 != ATgetArgument(m_56, 1))))
              _fail(ATgetArgument(m_56, 1));
            else
              v_53 = ATgetArgument(m_56, 1);
            if(((w_53 != NULL) && (w_53 != ATgetArgument(m_56, 2))))
              _fail(ATgetArgument(m_56, 2));
            else
              w_53 = ATgetArgument(m_56, 2);
          }
        else
          _fail(t);
      }
      if(((y_53 != NULL) && (y_53 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm k_7 (ATerm t);
    static ATerm k_7 (ATerm t)
    {
      t = not_null(s_53);
      t = option_1_0(l_7, t);
      t = not_null(v_53);
      t = option_1_0(m_7, t);
      t = not_null(w_53);
      t = option_1_0(n_7, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_53), not_null(y_53));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(k_7, t);
  }
  t = term_d_15;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_n_56;
  return(t);
}
ATerm exec_http_0_1 (ATerm g_88, ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,v_54 = NULL,w_54 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((w_54 != NULL) && (w_54 != t)))
    _fail(t);
  else
    w_54 = t;
  if(((v_54 != NULL) && (v_54 != t)))
    _fail(t);
  else
    v_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_o_56), term_n_18), not_null(v_54));
  t = conc_0_0(t);
  if(((s_54 != NULL) && (s_54 != t)))
    _fail(t);
  else
    s_54 = t;
  t = not_null(g_88);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((p_54 != NULL) && (p_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_54 = ATgetArgument(t, 0);
      if(((q_54 != NULL) && (q_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_54 = ATgetArgument(t, 1);
      if(((r_54 != NULL) && (r_54 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_54 = ATgetArgument(t, 2);
      {
        ATerm p_56 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_a_27, not_null(q_54), not_null(r_54), not_null(s_54));
  t = xtc_command_1_0(o_7, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  if(((a_55 != NULL) && (a_55 != t)))
    _fail(t);
  else
    a_55 = t;
  if(match_cons(t, sym__3))
    {
      if(((b_55 != NULL) && (b_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_55 = ATgetArgument(t, 0);
      if(((d_55 != NULL) && (d_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_55 = ATgetArgument(t, 1);
      if(((e_55 != NULL) && (e_55 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(b_55);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm f_55 = NULL,g_55 = NULL;
      t = not_null(d_55);
      if(((g_55 != NULL) && (g_55 != t)))
        _fail(t);
      else
        g_55 = t;
      t = not_null(e_55);
      if(((f_55 != NULL) && (f_55 != t)))
        _fail(t);
      else
        f_55 = t;
      t = exec_http_0_1(not_null(g_55), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          c_55 = ATgetArgument(t, 0);
          {
            ATerm h_55 = NULL,i_55 = NULL,m_55 = NULL;
            t = not_null(c_55);
            if(((h_55 != NULL) && (h_55 != t)))
              _fail(t);
            else
              h_55 = t;
            t = not_null(d_55);
            if(((m_55 != NULL) && (m_55 != t)))
              _fail(t);
            else
              m_55 = t;
            t = not_null(e_55);
            if(((i_55 != NULL) && (i_55 != t)))
              _fail(t);
            else
              i_55 = t;
            t = exec_http_0_1(not_null(m_55), t);
          }
        }
      else
        {
          ATerm n_55 = NULL,o_55 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((c_55 != NULL) && (c_55 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(c_55);
          if(((n_55 != NULL) && (n_55 != t)))
            _fail(t);
          else
            n_55 = t;
          t = not_null(e_55);
          if(((o_55 != NULL) && (o_55 != t)))
            _fail(t);
          else
            o_55 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm p_55 = NULL;
  if(((p_55 != NULL) && (p_55 != t)))
    _fail(t);
  else
    p_55 = t;
  t = SSL_open(not_null(p_55));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm b_3, ATerm t)
{
  static ATerm q_56 (ATerm u_55, ATerm v_55, ATerm t);
  static ATerm r_56 (ATerm a_56, ATerm t);
  static ATerm q_56 (ATerm u_55, ATerm v_55, ATerm t)
  {
    ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
    t = not_null(u_55);
    if(((w_55 != NULL) && (w_55 != t)))
      _fail(t);
    else
      w_55 = t;
    t = not_null(v_55);
    if(((y_55 != NULL) && (y_55 != t)))
      _fail(t);
    else
      y_55 = t;
    t = not_null(b_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm s_56 = ATgetArgument(t, 0);
        if(match_cons(s_56, sym_FILE_1))
          {
            if(((z_55 != NULL) && (z_55 != ATgetArgument(s_56, 0))))
              _fail(ATgetArgument(s_56, 0));
            else
              z_55 = ATgetArgument(s_56, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(z_55);
    t = open_0_0(t);
    if(((x_55 != NULL) && (x_55 != t)))
      _fail(t);
    else
      x_55 = t;
    return(t);
  }
  static ATerm r_56 (ATerm a_56, ATerm t)
  {
    ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
    t = not_null(a_56);
    if(((f_56 != NULL) && (f_56 != t)))
      _fail(t);
    else
      f_56 = t;
    t = not_null(b_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm x_56 = ATgetArgument(t, 0);
        if(match_cons(x_56, sym_FILE_1))
          {
            if(((g_56 != NULL) && (g_56 != ATgetArgument(x_56, 0))))
              _fail(ATgetArgument(x_56, 0));
            else
              g_56 = ATgetArgument(x_56, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(g_56);
    t = open_0_0(t);
    if(((e_56 != NULL) && (e_56 != t)))
      _fail(t);
    else
      e_56 = t;
    return(t);
  }
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  if(((i_56 != NULL) && (i_56 != t)))
    _fail(t);
  else
    i_56 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((j_56 != NULL) && (j_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(j_56);
  if(match_cons(t, sym_Some_1))
    {
      h_56 = ATgetArgument(t, 0);
      t = q_56(not_null(h_56), not_null(i_56), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = r_56(not_null(i_56), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm a_3, ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL;
  if(((t_56 != NULL) && (t_56 != t)))
    _fail(t);
  else
    t_56 = t;
  if(match_cons(t, sym_Error_1))
    {
      u_56 = ATgetArgument(t, 0);
      {
        ATerm v_56 = NULL,i_57 = NULL,j_57 = NULL;
        t = not_null(u_56);
        if(((v_56 != NULL) && (v_56 != t)))
          _fail(t);
        else
          v_56 = t;
        t = not_null(t_56);
        if(((j_57 != NULL) && (j_57 != t)))
          _fail(t);
        else
          j_57 = t;
        t = not_null(v_56);
        t = xtc_streamdef_to_fd_0_1(not_null(a_3), t);
        if(((i_57 != NULL) && (i_57 != t)))
          _fail(t);
        else
          i_57 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          u_56 = ATgetArgument(t, 0);
          {
            ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
            t = not_null(u_56);
            if(((k_57 != NULL) && (k_57 != t)))
              _fail(t);
            else
              k_57 = t;
            t = not_null(t_56);
            if(((m_57 != NULL) && (m_57 != t)))
              _fail(t);
            else
              m_57 = t;
            t = not_null(k_57);
            t = xtc_streamdef_to_fd_0_1(not_null(a_3), t);
            if(((l_57 != NULL) && (l_57 != t)))
              _fail(t);
            else
              l_57 = t;
          }
        }
      else
        {
          ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((u_56 != NULL) && (u_56 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_56 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(u_56);
          if(((n_57 != NULL) && (n_57 != t)))
            _fail(t);
          else
            n_57 = t;
          t = not_null(t_56);
          if(((p_57 != NULL) && (p_57 != t)))
            _fail(t);
          else
            p_57 = t;
          t = not_null(n_57);
          t = xtc_streamdef_to_fd_0_1(not_null(a_3), t);
          if(((o_57 != NULL) && (o_57 != t)))
            _fail(t);
          else
            o_57 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm y_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(z_56);
    }
  else
    {
      t = y_56;
      {
        ATerm r_57 = NULL,s_57 = NULL;
        if(((r_57 != NULL) && (r_57 != t)))
          _fail(t);
        else
          r_57 = t;
        if(match_cons(t, sym_URL_1))
          {
            s_57 = ATgetArgument(t, 0);
            {
              ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
              t = not_null(s_57);
              if(((t_57 != NULL) && (t_57 != t)))
                _fail(t);
              else
                t_57 = t;
              t = not_null(r_57);
              if(((v_57 != NULL) && (v_57 != t)))
                _fail(t);
              else
                v_57 = t;
              t = not_null(t_57);
              t = xtc_arg_to_string_0_0(t);
              if(((u_57 != NULL) && (u_57 != t)))
                _fail(t);
              else
                u_57 = t;
            }
          }
        else
          {
            ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((s_57 != NULL) && (s_57 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_57 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(s_57);
            if(((w_57 != NULL) && (w_57 != t)))
              _fail(t);
            else
              w_57 = t;
            t = not_null(r_57);
            if(((y_57 != NULL) && (y_57 != t)))
              _fail(t);
            else
              y_57 = t;
            t = not_null(w_57);
            t = xtc_arg_to_string_0_0(t);
            if(((x_57 != NULL) && (x_57 != t)))
              _fail(t);
            else
              x_57 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
  if(((b_58 != NULL) && (b_58 != t)))
    _fail(t);
  else
    b_58 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      c_58 = ATgetArgument(t, 0);
      a_58 = ATgetArgument(t, 1);
      {
        ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
        t = not_null(c_58);
        if(((d_58 != NULL) && (d_58 != t)))
          _fail(t);
        else
          d_58 = t;
        t = not_null(a_58);
        if(((e_58 != NULL) && (e_58 != t)))
          _fail(t);
        else
          e_58 = t;
        t = not_null(b_58);
        if(((i_58 != NULL) && (i_58 != t)))
          _fail(t);
        else
          i_58 = t;
        t = not_null(d_58);
        t = xtc_argterm_to_exec_0_0(t);
        if(((f_58 != NULL) && (f_58 != t)))
          _fail(t);
        else
          f_58 = t;
        t = not_null(i_58);
        if(((h_58 != NULL) && (h_58 != t)))
          _fail(t);
        else
          h_58 = t;
        t = not_null(e_58);
        t = xtc_argterm_to_exec_0_0(t);
        if(((g_58 != NULL) && (g_58 != t)))
          _fail(t);
        else
          g_58 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_58)), not_null(f_58));
      }
    }
  else
    {
      ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((c_58 != NULL) && (c_58 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(c_58);
      if(((j_58 != NULL) && (j_58 != t)))
        _fail(t);
      else
        j_58 = t;
      t = not_null(b_58);
      if(((l_58 != NULL) && (l_58 != t)))
        _fail(t);
      else
        l_58 = t;
      t = not_null(j_58);
      t = xtc_argterm_to_exec_0_0(t);
      if(((k_58 != NULL) && (k_58 != t)))
        _fail(t);
      else
        k_58 = t;
      t = (ATerm) ATinsert(ATempty, not_null(k_58));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm m_59 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL;
  t = not_null(s_58);
  if(((u_58 != NULL) && (u_58 != t)))
    _fail(t);
  else
    u_58 = t;
  t = not_null(t_58);
  if(((y_58 != NULL) && (y_58 != t)))
    _fail(t);
  else
    y_58 = t;
  t = not_null(u_58);
  t = xtc_argterm_to_http_0_0(t);
  if(((z_58 != NULL) && (z_58 != t)))
    _fail(t);
  else
    z_58 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_59 = ATgetArgument(t, 0);
      {
        ATerm b_59 = NULL;
        t = not_null(a_59);
        if(((b_59 != NULL) && (b_59 != t)))
          _fail(t);
        else
          b_59 = t;
      }
    }
  else
    {
      ATerm c_59 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((a_59 != NULL) && (a_59 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_59);
      if(((c_59 != NULL) && (c_59 != t)))
        _fail(t);
      else
        c_59 = t;
    }
  if(((v_58 != NULL) && (v_58 != t)))
    _fail(t);
  else
    v_58 = t;
  t = not_null(y_58);
  if(((x_58 != NULL) && (x_58 != t)))
    _fail(t);
  else
    x_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_58)), term_a_57);
  t = concat_strings_0_0(t);
  if(((w_58 != NULL) && (w_58 != t)))
    _fail(t);
  else
    w_58 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_57, not_null(w_58)));
  return(t);
}
static ATerm n_59 (ATerm d_59, ATerm e_59, ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
  t = not_null(d_59);
  if(((f_59 != NULL) && (f_59 != t)))
    _fail(t);
  else
    f_59 = t;
  t = not_null(e_59);
  if(((h_59 != NULL) && (h_59 != t)))
    _fail(t);
  else
    h_59 = t;
  t = not_null(f_59);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm c_57 = t;
    if((PushChoice() == 0))
      {
        ATerm d_57 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(p_7, t);
            LocalPopChoice(e_57);
          }
        else
          {
            t = d_57;
            t = URL_1_0(q_7, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_57;
      }
  }
  if(((g_59 != NULL) && (g_59 != t)))
    _fail(t);
  else
    g_59 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_57, not_null(g_59)));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm i_59 = NULL;
  if(((i_59 != NULL) && (i_59 != t)))
    _fail(t);
  else
    i_59 = t;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm j_59 = NULL;
  if(((j_59 != NULL) && (j_59 != t)))
    _fail(t);
  else
    j_59 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  if(((k_59 != NULL) && (k_59 != t)))
    _fail(t);
  else
    k_59 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((l_59 != NULL) && (l_59 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_59(not_null(l_59), not_null(k_59), t);
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = n_59(not_null(l_59), not_null(k_59), t);
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm h_57 = t;
  int q_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(q_57);
    }
  else
    {
      t = h_57;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(r_7, t);
  return(t);
}
static ATerm b_61 (ATerm u_59, ATerm v_59, ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  t = not_null(u_59);
  if(((w_59 != NULL) && (w_59 != t)))
    _fail(t);
  else
    w_59 = t;
  t = not_null(v_59);
  if(((l_60 != NULL) && (l_60 != t)))
    _fail(t);
  else
    l_60 = t;
  t = not_null(w_59);
  t = xtc_argterm_to_http_0_0(t);
  if(((m_60 != NULL) && (m_60 != t)))
    _fail(t);
  else
    m_60 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_60 = ATgetArgument(t, 0);
      {
        ATerm o_60 = NULL;
        t = not_null(n_60);
        if(((o_60 != NULL) && (o_60 != t)))
          _fail(t);
        else
          o_60 = t;
      }
    }
  else
    {
      ATerm p_60 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((n_60 != NULL) && (n_60 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_60);
      if(((p_60 != NULL) && (p_60 != t)))
        _fail(t);
      else
        p_60 = t;
    }
  if(((x_59 != NULL) && (x_59 != t)))
    _fail(t);
  else
    x_59 = t;
  t = not_null(l_60);
  if(((k_60 != NULL) && (k_60 != t)))
    _fail(t);
  else
    k_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_59)), term_z_57);
  t = concat_strings_0_0(t);
  if(((y_59 != NULL) && (y_59 != t)))
    _fail(t);
  else
    y_59 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_57, not_null(y_59)));
  return(t);
}
static ATerm c_61 (ATerm q_60, ATerm r_60, ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  t = not_null(q_60);
  if(((s_60 != NULL) && (s_60 != t)))
    _fail(t);
  else
    s_60 = t;
  t = not_null(r_60);
  if(((w_60 != NULL) && (w_60 != t)))
    _fail(t);
  else
    w_60 = t;
  t = not_null(s_60);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm m_58 = t;
    if((PushChoice() == 0))
      {
        ATerm n_58 = t;
        int o_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(s_7, t);
            LocalPopChoice(o_58);
          }
        else
          {
            t = n_58;
            t = URL_1_0(t_7, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_58;
      }
  }
  if(((t_60 != NULL) && (t_60 != t)))
    _fail(t);
  else
    t_60 = t;
  t = not_null(w_60);
  if(((v_60 != NULL) && (v_60 != t)))
    _fail(t);
  else
    v_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_60)), term_p_58);
  t = concat_strings_0_0(t);
  if(((u_60 != NULL) && (u_60 != t)))
    _fail(t);
  else
    u_60 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_57, not_null(u_60)));
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm x_60 = NULL;
  if(((x_60 != NULL) && (x_60 != t)))
    _fail(t);
  else
    x_60 = t;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm y_60 = NULL;
  if(((y_60 != NULL) && (y_60 != t)))
    _fail(t);
  else
    y_60 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL;
  if(((z_60 != NULL) && (z_60 != t)))
    _fail(t);
  else
    z_60 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((a_61 != NULL) && (a_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_58 = t;
    int r_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_61(not_null(a_61), not_null(z_60), t);
        LocalPopChoice(r_58);
      }
    else
      {
        t = q_58;
        t = c_61(not_null(a_61), not_null(z_60), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm u_110 (ATerm), ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,u_7 = NULL,b_14 = NULL;
  if(((i_61 != NULL) && (i_61 != t)))
    _fail(t);
  else
    i_61 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((e_61 != NULL) && (e_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((j_61 != NULL) && (j_61 != t)))
    _fail(t);
  else
    j_61 = t;
  t = SSLgetAnnotations(not_null(i_61));
  if(((d_61 != NULL) && (d_61 != t)))
    _fail(t);
  else
    d_61 = t;
  t = not_null(e_61);
  t = u_110(t);
  if(((f_61 != NULL) && (f_61 != t)))
    _fail(t);
  else
    f_61 = t;
  if(((h_61 != NULL) && (h_61 != t)))
    _fail(t);
  else
    h_61 = t;
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(f_61));
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  t = SSLsetAnnotations(not_null(u_7), not_null(d_61));
  if(((g_61 != NULL) && (g_61 != t)))
    _fail(t);
  else
    g_61 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm k_61 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((k_61 != NULL) && (k_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(k_61);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm o_59 = t;
  int p_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(p_59);
    }
  else
    {
      t = o_59;
      {
        ATerm m_61 = NULL,n_61 = NULL;
        if(((m_61 != NULL) && (m_61 != t)))
          _fail(t);
        else
          m_61 = t;
        if(match_cons(t, sym_URL_1))
          {
            n_61 = ATgetArgument(t, 0);
            {
              ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
              t = not_null(n_61);
              if(((o_61 != NULL) && (o_61 != t)))
                _fail(t);
              else
                o_61 = t;
              t = not_null(m_61);
              if(((q_61 != NULL) && (q_61 != t)))
                _fail(t);
              else
                q_61 = t;
              t = not_null(o_61);
              t = xtc_arg_to_string_0_0(t);
              if(((p_61 != NULL) && (p_61 != t)))
                _fail(t);
              else
                p_61 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(p_61));
            }
          }
        else
          {
            ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((n_61 != NULL) && (n_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(n_61);
            if(((r_61 != NULL) && (r_61 != t)))
              _fail(t);
            else
              r_61 = t;
            t = not_null(m_61);
            if(((t_61 != NULL) && (t_61 != t)))
              _fail(t);
            else
              t_61 = t;
            t = not_null(r_61);
            t = xtc_arg_to_string_0_0(t);
            if(((s_61 != NULL) && (s_61 != t)))
              _fail(t);
            else
              s_61 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_61));
          }
      }
    }
  return(t);
}
static ATerm d_63 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
  t = not_null(a_62);
  if(((d_62 != NULL) && (d_62 != t)))
    _fail(t);
  else
    d_62 = t;
  t = not_null(b_62);
  if(((f_62 != NULL) && (f_62 != t)))
    _fail(t);
  else
    f_62 = t;
  t = not_null(c_62);
  if(((j_62 != NULL) && (j_62 != t)))
    _fail(t);
  else
    j_62 = t;
  t = not_null(d_62);
  t = xtc_argterm_to_http_0_0(t);
  if(((e_62 != NULL) && (e_62 != t)))
    _fail(t);
  else
    e_62 = t;
  t = not_null(f_62);
  t = xtc_argterm_to_http_0_0(t);
  if(((k_62 != NULL) && (k_62 != t)))
    _fail(t);
  else
    k_62 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_62 = ATgetArgument(t, 0);
      {
        ATerm m_62 = NULL;
        t = not_null(l_62);
        if(((m_62 != NULL) && (m_62 != t)))
          _fail(t);
        else
          m_62 = t;
      }
    }
  else
    {
      ATerm n_62 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((l_62 != NULL) && (l_62 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(l_62);
      if(((n_62 != NULL) && (n_62 != t)))
        _fail(t);
      else
        n_62 = t;
    }
  if(((g_62 != NULL) && (g_62 != t)))
    _fail(t);
  else
    g_62 = t;
  t = not_null(j_62);
  if(((i_62 != NULL) && (i_62 != t)))
    _fail(t);
  else
    i_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_62)), term_q_59), not_null(e_62));
  t = concat_strings_0_0(t);
  if(((h_62 != NULL) && (h_62 != t)))
    _fail(t);
  else
    h_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_57, not_null(h_62)));
  return(t);
}
static ATerm e_63 (ATerm o_62, ATerm p_62, ATerm q_62, ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
  t = not_null(o_62);
  if(((r_62 != NULL) && (r_62 != t)))
    _fail(t);
  else
    r_62 = t;
  t = not_null(p_62);
  if(((t_62 != NULL) && (t_62 != t)))
    _fail(t);
  else
    t_62 = t;
  t = not_null(q_62);
  if(((x_62 != NULL) && (x_62 != t)))
    _fail(t);
  else
    x_62 = t;
  t = not_null(r_62);
  t = xtc_argterm_to_http_0_0(t);
  if(((s_62 != NULL) && (s_62 != t)))
    _fail(t);
  else
    s_62 = t;
  t = not_null(t_62);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm r_59 = t;
    if((PushChoice() == 0))
      {
        ATerm s_59 = t;
        int t_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(v_7, t);
            LocalPopChoice(t_59);
          }
        else
          {
            t = s_59;
            t = URL_1_0(w_7, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_59;
      }
  }
  if(((u_62 != NULL) && (u_62 != t)))
    _fail(t);
  else
    u_62 = t;
  t = not_null(x_62);
  if(((w_62 != NULL) && (w_62 != t)))
    _fail(t);
  else
    w_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_62)), term_b_60), not_null(s_62));
  t = concat_strings_0_0(t);
  if(((v_62 != NULL) && (v_62 != t)))
    _fail(t);
  else
    v_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_57, not_null(v_62)));
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm y_62 = NULL;
  if(((y_62 != NULL) && (y_62 != t)))
    _fail(t);
  else
    y_62 = t;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm z_62 = NULL;
  if(((z_62 != NULL) && (z_62 != t)))
    _fail(t);
  else
    z_62 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
  if(((a_63 != NULL) && (a_63 != t)))
    _fail(t);
  else
    a_63 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((b_63 != NULL) && (b_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_63 = ATgetArgument(t, 0);
      if(((c_63 != NULL) && (c_63 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_63(not_null(b_63), not_null(c_63), not_null(a_63), t);
        LocalPopChoice(f_60);
      }
    else
      {
        t = d_60;
        t = e_63(not_null(b_63), not_null(c_63), not_null(a_63), t);
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm g_60 = t;
  int j_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(j_60);
    }
  else
    {
      t = g_60;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(x_7, t);
  return(t);
}
static ATerm b_65 (ATerm o_63, ATerm p_63, ATerm q_63, ATerm r_63, ATerm s_63, ATerm t_63, ATerm u_63, ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
  t = not_null(o_63);
  if(((d_64 != NULL) && (d_64 != t)))
    _fail(t);
  else
    d_64 = t;
  t = not_null(p_63);
  if(((z_63 != NULL) && (z_63 != t)))
    _fail(t);
  else
    z_63 = t;
  t = not_null(q_63);
  if(((b_64 != NULL) && (b_64 != t)))
    _fail(t);
  else
    b_64 = t;
  t = not_null(r_63);
  if(((e_64 != NULL) && (e_64 != t)))
    _fail(t);
  else
    e_64 = t;
  t = not_null(s_63);
  if(((x_63 != NULL) && (x_63 != t)))
    _fail(t);
  else
    x_63 = t;
  t = not_null(t_63);
  if(((w_63 != NULL) && (w_63 != t)))
    _fail(t);
  else
    w_63 = t;
  t = not_null(u_63);
  if(((g_64 != NULL) && (g_64 != t)))
    _fail(t);
  else
    g_64 = t;
  t = not_null(x_63);
  t = xtc_args_to_exec_0_0(t);
  if(((y_63 != NULL) && (y_63 != t)))
    _fail(t);
  else
    y_63 = t;
  t = not_null(d_64);
  {
    ATerm l_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_7 (ATerm t);
        static ATerm y_7 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(z_63), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(y_7, t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = l_61;
        t = term_a_27;
      }
  }
  if(((a_64 != NULL) && (a_64 != t)))
    _fail(t);
  else
    a_64 = t;
  t = not_null(d_64);
  {
    ATerm v_61 = t;
    int w_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_7 (ATerm t);
        static ATerm z_7 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(b_64), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(z_7, t);
        LocalPopChoice(w_61);
      }
    else
      {
        t = v_61;
        t = term_a_27;
      }
  }
  if(((c_64 != NULL) && (c_64 != t)))
    _fail(t);
  else
    c_64 = t;
  t = not_null(d_64);
  {
    ATerm x_61 = t;
    int y_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_8 (ATerm t);
        static ATerm a_8 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(e_64), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(a_8, t);
        LocalPopChoice(y_61);
      }
    else
      {
        t = x_61;
        t = term_a_27;
      }
  }
  if(((f_64 != NULL) && (f_64 != t)))
    _fail(t);
  else
    f_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(w_63), (ATerm)ATmakeAppl(sym__3, not_null(a_64), not_null(c_64), not_null(f_64)), not_null(y_63));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  if(((h_64 != NULL) && (h_64 != t)))
    _fail(t);
  else
    h_64 = t;
  if(match_cons(t, sym__3))
    {
      if(((i_64 != NULL) && (i_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_64 = ATgetArgument(t, 0);
      if(((k_64 != NULL) && (k_64 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_64 = ATgetArgument(t, 1);
      if(((p_64 != NULL) && (p_64 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(i_64);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
      t = not_null(k_64);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((l_64 != NULL) && (l_64 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_64 = ATgetArgument(t, 0);
          if(((m_64 != NULL) && (m_64 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_64 = ATgetArgument(t, 1);
          if(((n_64 != NULL) && (n_64 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            n_64 = ATgetArgument(t, 2);
          if(((o_64 != NULL) && (o_64 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            o_64 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(p_64);
      if(match_cons(t, sym__2))
        {
          if(((q_64 != NULL) && (q_64 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_64 = ATgetArgument(t, 0);
          if(((r_64 != NULL) && (r_64 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(o_64);
      if(((t_64 != NULL) && (t_64 != t)))
        _fail(t);
      else
        t_64 = t;
      t = not_null(q_64);
      if(((s_64 != NULL) && (s_64 != t)))
        _fail(t);
      else
        s_64 = t;
      t = not_null(h_64);
      if(((v_64 != NULL) && (v_64 != t)))
        _fail(t);
      else
        v_64 = t;
      t = not_null(t_64);
      t = xtc_args_to_xtservice_0_0(t);
      if(((u_64 != NULL) && (u_64 != t)))
        _fail(t);
      else
        u_64 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(u_64)), not_null(s_64));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          j_64 = ATgetArgument(t, 0);
          {
            ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
            t = not_null(k_64);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((l_64 != NULL) && (l_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_64 = ATgetArgument(t, 0);
                if(((m_64 != NULL) && (m_64 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_64 = ATgetArgument(t, 1);
                if(((n_64 != NULL) && (n_64 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  n_64 = ATgetArgument(t, 2);
                if(((o_64 != NULL) && (o_64 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  o_64 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(p_64);
            if(match_cons(t, sym__2))
              {
                if(((q_64 != NULL) && (q_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_64 = ATgetArgument(t, 0);
                if(((r_64 != NULL) && (r_64 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(j_64);
            if(((w_64 != NULL) && (w_64 != t)))
              _fail(t);
            else
              w_64 = t;
            t = not_null(o_64);
            if(((y_64 != NULL) && (y_64 != t)))
              _fail(t);
            else
              y_64 = t;
            t = not_null(q_64);
            if(((x_64 != NULL) && (x_64 != t)))
              _fail(t);
            else
              x_64 = t;
            t = not_null(h_64);
            if(((a_65 != NULL) && (a_65 != t)))
              _fail(t);
            else
              a_65 = t;
            t = not_null(y_64);
            t = xtc_args_to_http_0_0(t);
            if(((z_64 != NULL) && (z_64 != t)))
              _fail(t);
            else
              z_64 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(z_64)), not_null(x_64));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((j_64 != NULL) && (j_64 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(k_64);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((l_64 != NULL) && (l_64 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_64 = ATgetArgument(t, 0);
              if(((m_64 != NULL) && (m_64 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_64 = ATgetArgument(t, 1);
              if(((n_64 != NULL) && (n_64 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                n_64 = ATgetArgument(t, 2);
              if(((o_64 != NULL) && (o_64 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                o_64 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(p_64);
          if(match_cons(t, sym__2))
            {
              if(((q_64 != NULL) && (q_64 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_64 = ATgetArgument(t, 0);
              if(((r_64 != NULL) && (r_64 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                r_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_65(not_null(j_64), not_null(l_64), not_null(m_64), not_null(n_64), not_null(o_64), not_null(q_64), not_null(h_64), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm b_92, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm z_61 = ATgetArgument(t, 0);
      if(!(match_cons(z_61, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(b_92);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL;
  static ATerm b_8 (ATerm t);
  static ATerm b_8 (ATerm t)
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(c_65), t);
        LocalPopChoice(g_63);
      }
    else
      {
        t = f_63;
        {
          ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
          if(((e_65 != NULL) && (e_65 != t)))
            _fail(t);
          else
            e_65 = t;
          if(((g_65 != NULL) && (g_65 != t)))
            _fail(t);
          else
            g_65 = t;
          t = not_null(e_65);
          if(((f_65 != NULL) && (f_65 != t)))
            _fail(t);
          else
            f_65 = t;
          t = (ATerm) ATinsert(ATempty, not_null(f_65));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((d_65 != NULL) && (d_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_65 = ATgetArgument(t, 0);
      if(((c_65 != NULL) && (c_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_65);
  t = mapconcat_1_0(b_8, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_65 != NULL) && (j_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_65 = ATgetArgument(t, 0);
      if(((i_65 != NULL) && (i_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_65 != NULL) && (m_65 != t)))
    _fail(t);
  else
    m_65 = t;
  t = Fst_0_0(t);
  {
    static ATerm c_8 (ATerm t);
    static ATerm c_8 (ATerm t)
    {
      ATerm n_65 = NULL;
      ATerm h_63 = t;
      int i_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_65 (ATerm o_65, ATerm t);
          static ATerm v_65 (ATerm o_65, ATerm t)
          {
            ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL;
            t = not_null(o_65);
            if(((n_65 != NULL) && (n_65 != t)))
              _fail(t);
            else
              n_65 = t;
            t = not_null(o_65);
            if(((q_65 != NULL) && (q_65 != t)))
              _fail(t);
            else
              q_65 = t;
            if(((r_65 != NULL) && (r_65 != t)))
              _fail(t);
            else
              r_65 = t;
            t = not_null(i_65);
            {
              static ATerm d_8 (ATerm t);
              static ATerm d_8 (ATerm t)
              {
                ATerm s_65 = NULL,t_65 = NULL;
                if(((t_65 != NULL) && (t_65 != t)))
                  _fail(t);
                else
                  t_65 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(t_65));
                if(((n_65 != NULL) && (n_65 != t)))
                  _fail(t);
                else
                  n_65 = t;
                return(t);
              }
              t = SRTS_one(d_8, t);
            }
            t = not_null(r_65);
            if(((p_65 != NULL) && (p_65 != t)))
              _fail(t);
            else
              p_65 = t;
            t = (ATerm) ATinsert(ATempty, not_null(p_65));
            return(t);
          }
          ATerm u_65 = NULL;
          if(((u_65 != NULL) && (u_65 != t)))
            _fail(t);
          else
            u_65 = t;
          t = v_65(not_null(u_65), t);
          LocalPopChoice(i_63);
        }
      else
        {
          t = h_63;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(c_8, t);
  }
  if(((k_65 != NULL) && (k_65 != t)))
    _fail(t);
  else
    k_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_65), not_null(k_65));
  t = diff_0_0(t);
  if(((l_65 != NULL) && (l_65 != t)))
    _fail(t);
  else
    l_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_65), not_null(l_65));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm n_152 (ATerm), ATerm o_152 (ATerm), ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((w_65 != NULL) && (w_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_65 = ATgetArgument(t, 0);
      if(((z_65 != NULL) && (z_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_65 = ATgetArgument(t, 1);
      if(((y_65 != NULL) && (y_65 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((c_66 != NULL) && (c_66 != t)))
    _fail(t);
  else
    c_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_65), not_null(z_65));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((d_66 != NULL) && (d_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_66 = ATgetArgument(t, 0);
      if(((x_65 != NULL) && (x_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_66);
  {
    ATerm j_63 = t;
    int k_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_66 = NULL;
        if(((e_66 != NULL) && (e_66 != t)))
          _fail(t);
        else
          e_66 = t;
        {
          ATerm l_63 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_63;
            }
        }
        t = not_null(e_66);
        LocalPopChoice(k_63);
        t = n_152(t);
      }
    else
      {
        t = j_63;
        {
          ATerm m_63 = t;
          int n_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_66 = NULL;
              if(((f_66 != NULL) && (f_66 != t)))
                _fail(t);
              else
                f_66 = t;
              t = not_null(y_65);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm v_63 = ATgetArgument(t, 0);
                  if(!(match_cons(v_63, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(f_66);
              LocalPopChoice(n_63);
              t = not_null(z_65);
              t = Hd_0_0(t);
              if(((a_66 != NULL) && (a_66 != t)))
                _fail(t);
              else
                a_66 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(a_66)));
            }
          else
            {
              t = m_63;
              t = o_152(t);
            }
        }
      }
  }
  if(((b_66 != NULL) && (b_66 != t)))
    _fail(t);
  else
    b_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_66), not_null(x_65));
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm p_66 = NULL;
  if(((p_66 != NULL) && (p_66 != t)))
    _fail(t);
  else
    p_66 = t;
  return(t);
}
ATerm diff_1_0 (ATerm p_128 (ATerm), ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_66 != NULL) && (l_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_66 = ATgetArgument(t, 0);
      if(((k_66 != NULL) && (k_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_66 != NULL) && (n_66 != t)))
    _fail(t);
  else
    n_66 = t;
  t = not_null(l_66);
  {
    static ATerm q_66 (ATerm t);
    static ATerm q_66 (ATerm t)
    {
      ATerm h_65 = t;
      int g_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(g_66);
        }
      else
        {
          t = h_65;
          {
            ATerm h_66 = t;
            int i_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm e_8 (ATerm t);
                static ATerm e_8 (ATerm t)
                {
                  t = not_null(k_66);
                  return(t);
                }
                t = HdMember_p__2_0(p_128, e_8, t);
                t = q_66(t);
                LocalPopChoice(i_66);
              }
            else
              {
                t = h_66;
                t = Cons_2_0(f_8, q_66, t);
              }
          }
        }
      return(t);
    }
    t = q_66(t);
  }
  if(((m_66 != NULL) && (m_66 != t)))
    _fail(t);
  else
    m_66 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm r_66 = NULL,t_66 = NULL,u_66 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_66 != NULL) && (t_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_66 = ATgetArgument(t, 0);
      {
        ATerm j_66 = ATgetArgument(t, 1);
        if(((ATgetType(j_66) == AT_LIST) && !(ATisEmpty(j_66))))
          {
            if(((r_66 != NULL) && (r_66 != ATgetFirst((ATermList) j_66))))
              _fail(ATgetFirst((ATermList) j_66));
            else
              r_66 = ATgetFirst((ATermList) j_66);
            if(((u_66 != NULL) && (u_66 != (ATerm) ATgetNext((ATermList) j_66))))
              _fail((ATerm) ATgetNext((ATermList) j_66));
            else
              u_66 = (ATerm) ATgetNext((ATermList) j_66);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_66)), not_null(r_66)), not_null(u_66));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_66 != NULL) && (v_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_66 = ATgetArgument(t, 0);
      if(((w_66 != NULL) && (w_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(w_66)), not_null(v_66));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_66 = ATgetArgument(t, 0);
      if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
        {
          if(((x_66 != NULL) && (x_66 != ATgetFirst((ATermList) o_66))))
            _fail(ATgetFirst((ATermList) o_66));
          else
            x_66 = ATgetFirst((ATermList) o_66);
          if(((z_66 != NULL) && (z_66 != (ATerm) ATgetNext((ATermList) o_66))))
            _fail((ATerm) ATgetNext((ATermList) o_66));
          else
            z_66 = (ATerm) ATgetNext((ATermList) o_66);
        }
      else
        _fail(t);
      {
        ATerm s_66 = ATgetArgument(t, 1);
        if(((ATgetType(s_66) == AT_LIST) && !(ATisEmpty(s_66))))
          {
            if(((y_66 != NULL) && (y_66 != ATgetFirst((ATermList) s_66))))
              _fail(ATgetFirst((ATermList) s_66));
            else
              y_66 = ATgetFirst((ATermList) s_66);
            if(((a_67 != NULL) && (a_67 != (ATerm) ATgetNext((ATermList) s_66))))
              _fail((ATerm) ATgetNext((ATermList) s_66));
            else
              a_67 = (ATerm) ATgetNext((ATermList) s_66);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_66), not_null(y_66)), (ATerm) ATmakeAppl(sym__2, not_null(z_66), not_null(a_67)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_67 = ATgetArgument(t, 0);
      if(((ATgetType(c_67) != AT_LIST) || !(ATisEmpty(c_67))))
        _fail(t);
      {
        ATerm u_67 = ATgetArgument(t, 1);
        if(((ATgetType(u_67) != AT_LIST) || !(ATisEmpty(u_67))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm genzip_4_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t)
{
  static ATerm b_67 (ATerm t);
  static ATerm b_67 (ATerm t)
  {
    ATerm v_67 = t;
    int z_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_126(t);
        LocalPopChoice(z_67);
      }
    else
      {
        t = v_67;
        t = o_126(t);
        t = _2_0(q_126, b_67, t);
        t = p_126(t);
      }
    return(t);
  }
  t = b_67(t);
  return(t);
}
ATerm zip_1_0 (ATerm s_126 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, s_126, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm r_67 = NULL;
  if(((r_67 != NULL) && (r_67 != t)))
    _fail(t);
  else
    r_67 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_68 = ATgetFirst((ATermList) t);
      if(match_cons(a_68, sym__2))
        {
          if(((l_67 != NULL) && (l_67 != ATgetArgument(a_68, 0))))
            _fail(ATgetArgument(a_68, 0));
          else
            l_67 = ATgetArgument(a_68, 0);
          if(((o_67 != NULL) && (o_67 != ATgetArgument(a_68, 1))))
            _fail(ATgetArgument(a_68, 1));
          else
            o_67 = ATgetArgument(a_68, 1);
        }
      else
        _fail(t);
      if(((g_67 != NULL) && (g_67 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((p_67 != NULL) && (p_67 != t)))
    _fail(t);
  else
    p_67 = t;
  t = not_null(o_67);
  if(((q_67 != NULL) && (q_67 != t)))
    _fail(t);
  else
    q_67 = t;
  t = SSL_explode_term(not_null(q_67));
  if(match_cons(t, sym__2))
    {
      if(((d_67 != NULL) && (d_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_67 = ATgetArgument(t, 0);
      if(((f_67 != NULL) && (f_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_67);
  if(((m_67 != NULL) && (m_67 != t)))
    _fail(t);
  else
    m_67 = t;
  t = not_null(l_67);
  if(((n_67 != NULL) && (n_67 != t)))
    _fail(t);
  else
    n_67 = t;
  t = SSL_explode_term(not_null(n_67));
  if(match_cons(t, sym__2))
    {
      if(((d_67 != NULL) && (d_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_67 = ATgetArgument(t, 0);
      if(((e_67 != NULL) && (e_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_67);
  if(((i_67 != NULL) && (i_67 != t)))
    _fail(t);
  else
    i_67 = t;
  if(((k_67 != NULL) && (k_67 != t)))
    _fail(t);
  else
    k_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_67), not_null(f_67));
  t = zip_1_0(g_8, t);
  if(((j_67 != NULL) && (j_67 != t)))
    _fail(t);
  else
    j_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_67), not_null(g_67));
  t = conc_0_0(t);
  if(((h_67 != NULL) && (h_67 != t)))
    _fail(t);
  else
    h_67 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_69 = ATgetFirst((ATermList) t);
      if(match_cons(c_69, sym__2))
        {
          if(((s_67 != NULL) && (s_67 != ATgetArgument(c_69, 0))))
            _fail(ATgetArgument(c_69, 0));
          else
            s_67 = ATgetArgument(c_69, 0);
          if(((s_67 != NULL) && (s_67 != ATgetArgument(c_69, 1))))
            _fail(ATgetArgument(c_69, 1));
          else
            s_67 = ATgetArgument(c_69, 1);
        }
      else
        _fail(t);
      if(((t_67 != NULL) && (t_67 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        t_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(t_67);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm w_67 = NULL;
  if(((w_67 != NULL) && (w_67 != t)))
    _fail(t);
  else
    w_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_67));
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = _2_0(k_8, Nil_0_0, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm d_69 = t;
  int e_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(l_8, m_8, t);
      LocalPopChoice(e_69);
    }
  else
    {
      t = d_69;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm x_67 = NULL;
  if(((x_67 != NULL) && (x_67 != t)))
    _fail(t);
  else
    x_67 = t;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm y_67 = NULL;
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm f_69 = t;
  int g_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(g_69);
    }
  else
    {
      t = f_69;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm h_69 = t;
  int i_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_8, i_8, j_8, t);
      LocalPopChoice(i_69);
    }
  else
    {
      t = h_69;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_68 != NULL) && (c_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_68 = ATgetArgument(t, 0);
      if(((b_68 != NULL) && (b_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_68 != NULL) && (f_68 != t)))
    _fail(t);
  else
    f_68 = t;
  t = Fst_0_0(t);
  {
    static ATerm n_8 (ATerm t);
    static ATerm n_8 (ATerm t)
    {
      ATerm g_68 = NULL,h_68 = NULL;
      ATerm j_69 = t;
      int k_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_68 (ATerm i_68, ATerm j_68, ATerm k_68, ATerm t);
          static ATerm r_68 (ATerm i_68, ATerm j_68, ATerm k_68, ATerm t)
          {
            ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
            t = not_null(i_68);
            if(((g_68 != NULL) && (g_68 != t)))
              _fail(t);
            else
              g_68 = t;
            t = not_null(j_68);
            if(((h_68 != NULL) && (h_68 != t)))
              _fail(t);
            else
              h_68 = t;
            t = not_null(k_68);
            if(((m_68 != NULL) && (m_68 != t)))
              _fail(t);
            else
              m_68 = t;
            if(((n_68 != NULL) && (n_68 != t)))
              _fail(t);
            else
              n_68 = t;
            t = not_null(b_68);
            {
              static ATerm o_8 (ATerm t);
              static ATerm o_8 (ATerm t)
              {
                if(((g_68 != NULL) && (g_68 != t)))
                  _fail(t);
                else
                  g_68 = t;
                return(t);
              }
              t = SRTS_one(o_8, t);
            }
            t = not_null(n_68);
            if(((l_68 != NULL) && (l_68 != t)))
              _fail(t);
            else
              l_68 = t;
            t = (ATerm) ATinsert(ATempty, not_null(l_68));
            return(t);
          }
          ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
          if(((o_68 != NULL) && (o_68 != t)))
            _fail(t);
          else
            o_68 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((p_68 != NULL) && (p_68 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_68 = ATgetArgument(t, 0);
              if(((q_68 != NULL) && (q_68 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                q_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_68(not_null(p_68), not_null(q_68), not_null(o_68), t);
          LocalPopChoice(k_69);
        }
      else
        {
          t = j_69;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(n_8, t);
  }
  if(((d_68 != NULL) && (d_68 != t)))
    _fail(t);
  else
    d_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_68), not_null(d_68));
  t = diff_0_0(t);
  if(((e_68 != NULL) && (e_68 != t)))
    _fail(t);
  else
    e_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_68), not_null(e_68));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm p_152 (ATerm), ATerm q_152 (ATerm), ATerm r_152 (ATerm), ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((t_68 != NULL) && (t_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_68 = ATgetArgument(t, 0);
      if(((u_68 != NULL) && (u_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_68 = ATgetArgument(t, 1);
      if(((w_68 != NULL) && (w_68 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_68 = ATgetArgument(t, 2);
      if(((s_68 != NULL) && (s_68 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        s_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((y_68 != NULL) && (y_68 != t)))
    _fail(t);
  else
    y_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_68), not_null(u_68));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((z_68 != NULL) && (z_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_68 = ATgetArgument(t, 0);
      if(((v_68 != NULL) && (v_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_68);
  {
    ATerm l_69 = t;
    int m_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_69 = NULL;
        if(((a_69 != NULL) && (a_69 != t)))
          _fail(t);
        else
          a_69 = t;
        {
          ATerm n_69 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_69;
            }
        }
        t = not_null(a_69);
        LocalPopChoice(m_69);
        t = p_152(t);
      }
    else
      {
        t = l_69;
        {
          ATerm o_69 = t;
          int p_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_69 = NULL;
              if(((b_69 != NULL) && (b_69 != t)))
                _fail(t);
              else
                b_69 = t;
              t = not_null(w_68);
              {
                ATerm q_69 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_69;
                  }
              }
              t = not_null(b_69);
              LocalPopChoice(p_69);
              t = q_152(t);
            }
          else
            {
              t = o_69;
              t = r_152(t);
            }
        }
      }
  }
  if(((x_68 != NULL) && (x_68 != t)))
    _fail(t);
  else
    x_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_68), not_null(v_68));
  return(t);
}
static ATerm f_77 (ATerm h_71, ATerm m_71, ATerm n_71, ATerm o_71, ATerm p_71, ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,x_71 = NULL,y_71 = NULL;
  t = not_null(h_71);
  if(((s_71 != NULL) && (s_71 != t)))
    _fail(t);
  else
    s_71 = t;
  t = not_null(m_71);
  if(((t_71 != NULL) && (t_71 != t)))
    _fail(t);
  else
    t_71 = t;
  t = not_null(n_71);
  if(((r_71 != NULL) && (r_71 != t)))
    _fail(t);
  else
    r_71 = t;
  t = not_null(o_71);
  if(((q_71 != NULL) && (q_71 != t)))
    _fail(t);
  else
    q_71 = t;
  t = not_null(p_71);
  if(((y_71 != NULL) && (y_71 != t)))
    _fail(t);
  else
    y_71 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(q_71), not_null(s_71), not_null(t_71), not_null(r_71));
  {
    static ATerm q_8 (ATerm t);
    static ATerm q_8 (ATerm t)
    {
      static ATerm s_8 (ATerm t);
      static ATerm s_8 (ATerm t)
      {
        ATerm f_72 = NULL,g_72 = NULL;
        if(((g_72 != NULL) && (g_72 != t)))
          _fail(t);
        else
          g_72 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(u_71), not_null(g_72));
        return(t);
      }
      t = not_null(s_71);
      t = Hd_0_0(t);
      if(((u_71 != NULL) && (u_71 != t)))
        _fail(t);
      else
        u_71 = t;
      t = not_null(t_71);
      t = map_1_0(s_8, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(p_8, q_8, r_8, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((v_71 != NULL) && (v_71 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_71 = ATgetArgument(t, 0);
      if(((x_71 != NULL) && (x_71 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_71), not_null(x_71));
  return(t);
}
static ATerm g_77 (ATerm h_72, ATerm i_72, ATerm j_72, ATerm k_72, ATerm l_72, ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  t = not_null(h_72);
  if(((t_72 != NULL) && (t_72 != t)))
    _fail(t);
  else
    t_72 = t;
  t = not_null(i_72);
  if(((u_72 != NULL) && (u_72 != t)))
    _fail(t);
  else
    u_72 = t;
  t = not_null(j_72);
  if(((r_72 != NULL) && (r_72 != t)))
    _fail(t);
  else
    r_72 = t;
  t = not_null(k_72);
  if(((s_72 != NULL) && (s_72 != t)))
    _fail(t);
  else
    s_72 = t;
  t = not_null(l_72);
  if(((x_72 != NULL) && (x_72 != t)))
    _fail(t);
  else
    x_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(s_72), not_null(t_72), not_null(u_72));
  t = xtc_toption_to_args_2_0(t_8, u_8, t);
  if(match_cons(t, sym__2))
    {
      if(((v_72 != NULL) && (v_72 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_72 = ATgetArgument(t, 0);
      if(((w_72 != NULL) && (w_72 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_72), not_null(w_72));
  return(t);
}
static ATerm h_77 (ATerm z_72, ATerm a_73, ATerm b_73, ATerm c_73, ATerm d_73, ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  t = not_null(z_72);
  if(((g_73 != NULL) && (g_73 != t)))
    _fail(t);
  else
    g_73 = t;
  t = not_null(a_73);
  if(((h_73 != NULL) && (h_73 != t)))
    _fail(t);
  else
    h_73 = t;
  t = not_null(b_73);
  if(((f_73 != NULL) && (f_73 != t)))
    _fail(t);
  else
    f_73 = t;
  t = not_null(c_73);
  if(((e_73 != NULL) && (e_73 != t)))
    _fail(t);
  else
    e_73 = t;
  t = not_null(d_73);
  if(((l_73 != NULL) && (l_73 != t)))
    _fail(t);
  else
    l_73 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(e_73), not_null(g_73), not_null(h_73), not_null(f_73));
  {
    static ATerm w_8 (ATerm t);
    static ATerm w_8 (ATerm t)
    {
      static ATerm x_8 (ATerm t);
      static ATerm x_8 (ATerm t)
      {
        ATerm n_73 = NULL,o_73 = NULL;
        if(((o_73 != NULL) && (o_73 != t)))
          _fail(t);
        else
          o_73 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(i_73), not_null(o_73));
        return(t);
      }
      t = not_null(g_73);
      t = Hd_0_0(t);
      if(((i_73 != NULL) && (i_73 != t)))
        _fail(t);
      else
        i_73 = t;
      t = not_null(h_73);
      t = map_1_0(x_8, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(v_8, w_8, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((j_73 != NULL) && (j_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_73 = ATgetArgument(t, 0);
      if(((k_73 != NULL) && (k_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_73), not_null(k_73));
  return(t);
}
static ATerm i_77 (ATerm p_73, ATerm q_73, ATerm r_73, ATerm s_73, ATerm t_73, ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
  t = not_null(p_73);
  if(((w_73 != NULL) && (w_73 != t)))
    _fail(t);
  else
    w_73 = t;
  t = not_null(q_73);
  if(((x_73 != NULL) && (x_73 != t)))
    _fail(t);
  else
    x_73 = t;
  t = not_null(r_73);
  if(((u_73 != NULL) && (u_73 != t)))
    _fail(t);
  else
    u_73 = t;
  t = not_null(s_73);
  if(((v_73 != NULL) && (v_73 != t)))
    _fail(t);
  else
    v_73 = t;
  t = not_null(t_73);
  if(((a_74 != NULL) && (a_74 != t)))
    _fail(t);
  else
    a_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(v_73), not_null(w_73), not_null(x_73));
  t = xtc_toption_to_args_2_0(y_8, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((y_73 != NULL) && (y_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_73 = ATgetArgument(t, 0);
      if(((z_73 != NULL) && (z_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_73), not_null(z_73));
  return(t);
}
static ATerm j_77 (ATerm c_74, ATerm d_74, ATerm e_74, ATerm f_74, ATerm g_74, ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
  t = not_null(c_74);
  if(((j_74 != NULL) && (j_74 != t)))
    _fail(t);
  else
    j_74 = t;
  t = not_null(d_74);
  if(((k_74 != NULL) && (k_74 != t)))
    _fail(t);
  else
    k_74 = t;
  t = not_null(e_74);
  if(((i_74 != NULL) && (i_74 != t)))
    _fail(t);
  else
    i_74 = t;
  t = not_null(f_74);
  if(((h_74 != NULL) && (h_74 != t)))
    _fail(t);
  else
    h_74 = t;
  t = not_null(g_74);
  if(((p_74 != NULL) && (p_74 != t)))
    _fail(t);
  else
    p_74 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(h_74), not_null(j_74), not_null(k_74), not_null(i_74));
  {
    static ATerm a_9 (ATerm t);
    static ATerm a_9 (ATerm t)
    {
      t = not_null(j_74);
      t = Hd_0_0(t);
      if(((l_74 != NULL) && (l_74 != t)))
        _fail(t);
      else
        l_74 = t;
      t = not_null(k_74);
      t = Hd_0_0(t);
      if(((m_74 != NULL) && (m_74 != t)))
        _fail(t);
      else
        m_74 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(l_74), not_null(m_74)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(z_8, a_9, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((n_74 != NULL) && (n_74 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_74 = ATgetArgument(t, 0);
      if(((o_74 != NULL) && (o_74 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_74), not_null(o_74));
  return(t);
}
static ATerm k_77 (ATerm s_74, ATerm t_74, ATerm u_74, ATerm v_74, ATerm g_75, ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL;
  t = not_null(s_74);
  if(((j_75 != NULL) && (j_75 != t)))
    _fail(t);
  else
    j_75 = t;
  t = not_null(t_74);
  if(((k_75 != NULL) && (k_75 != t)))
    _fail(t);
  else
    k_75 = t;
  t = not_null(u_74);
  if(((h_75 != NULL) && (h_75 != t)))
    _fail(t);
  else
    h_75 = t;
  t = not_null(v_74);
  if(((i_75 != NULL) && (i_75 != t)))
    _fail(t);
  else
    i_75 = t;
  t = not_null(g_75);
  if(((n_75 != NULL) && (n_75 != t)))
    _fail(t);
  else
    n_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(i_75), not_null(j_75), not_null(k_75));
  t = xtc_toption_to_args_2_0(b_9, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((l_75 != NULL) && (l_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_75 = ATgetArgument(t, 0);
      if(((m_75 != NULL) && (m_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_75), not_null(m_75));
  return(t);
}
static ATerm l_77 (ATerm q_75, ATerm r_75, ATerm s_75, ATerm t_75, ATerm u_75, ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  t = not_null(q_75);
  if(((x_75 != NULL) && (x_75 != t)))
    _fail(t);
  else
    x_75 = t;
  t = not_null(r_75);
  if(((y_75 != NULL) && (y_75 != t)))
    _fail(t);
  else
    y_75 = t;
  t = not_null(s_75);
  if(((w_75 != NULL) && (w_75 != t)))
    _fail(t);
  else
    w_75 = t;
  t = not_null(t_75);
  if(((v_75 != NULL) && (v_75 != t)))
    _fail(t);
  else
    v_75 = t;
  t = not_null(u_75);
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(v_75), not_null(x_75), not_null(y_75), not_null(w_75));
  {
    static ATerm d_9 (ATerm t);
    static ATerm d_9 (ATerm t)
    {
      t = not_null(x_75);
      t = Hd_0_0(t);
      if(((z_75 != NULL) && (z_75 != t)))
        _fail(t);
      else
        z_75 = t;
      t = not_null(y_75);
      t = Hd_0_0(t);
      if(((a_76 != NULL) && (a_76 != t)))
        _fail(t);
      else
        a_76 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(z_75), not_null(a_76)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(c_9, d_9, e_9, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((b_76 != NULL) && (b_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_76 = ATgetArgument(t, 0);
      if(((c_76 != NULL) && (c_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_76), not_null(c_76));
  return(t);
}
static ATerm m_77 (ATerm g_76, ATerm h_76, ATerm i_76, ATerm j_76, ATerm k_76, ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL;
  t = not_null(g_76);
  if(((n_76 != NULL) && (n_76 != t)))
    _fail(t);
  else
    n_76 = t;
  t = not_null(h_76);
  if(((o_76 != NULL) && (o_76 != t)))
    _fail(t);
  else
    o_76 = t;
  t = not_null(i_76);
  if(((l_76 != NULL) && (l_76 != t)))
    _fail(t);
  else
    l_76 = t;
  t = not_null(j_76);
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  t = not_null(k_76);
  if(((r_76 != NULL) && (r_76 != t)))
    _fail(t);
  else
    r_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_76), not_null(n_76), not_null(o_76));
  t = xtc_toption_to_args_2_0(f_9, g_9, t);
  if(match_cons(t, sym__2))
    {
      if(((p_76 != NULL) && (p_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_76 = ATgetArgument(t, 0);
      if(((q_76 != NULL) && (q_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), not_null(q_76));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm e_72 = NULL;
  if(((e_72 != NULL) && (e_72 != t)))
    _fail(t);
  else
    e_72 = t;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm y_72 = NULL;
  if(((y_72 != NULL) && (y_72 != t)))
    _fail(t);
  else
    y_72 = t;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm m_73 = NULL;
  if(((m_73 != NULL) && (m_73 != t)))
    _fail(t);
  else
    m_73 = t;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm b_74 = NULL;
  if(((b_74 != NULL) && (b_74 != t)))
    _fail(t);
  else
    b_74 = t;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL;
  if(((r_74 != NULL) && (r_74 != t)))
    _fail(t);
  else
    r_74 = t;
  t = Hd_0_0(t);
  if(((q_74 != NULL) && (q_74 != t)))
    _fail(t);
  else
    q_74 = t;
  t = (ATerm) ATinsert(ATempty, not_null(q_74));
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  if(((p_75 != NULL) && (p_75 != t)))
    _fail(t);
  else
    p_75 = t;
  t = Hd_0_0(t);
  if(((o_75 != NULL) && (o_75 != t)))
    _fail(t);
  else
    o_75 = t;
  t = (ATerm) ATinsert(ATempty, not_null(o_75));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  if(((f_76 != NULL) && (f_76 != t)))
    _fail(t);
  else
    f_76 = t;
  t = Hd_0_0(t);
  if(((e_76 != NULL) && (e_76 != t)))
    _fail(t);
  else
    e_76 = t;
  t = (ATerm) ATinsert(ATempty, not_null(e_76));
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL;
  if(((t_76 != NULL) && (t_76 != t)))
    _fail(t);
  else
    t_76 = t;
  t = Hd_0_0(t);
  if(((s_76 != NULL) && (s_76 != t)))
    _fail(t);
  else
    s_76 = t;
  t = (ATerm) ATinsert(ATempty, not_null(s_76));
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
  if(((w_76 != NULL) && (w_76 != t)))
    _fail(t);
  else
    w_76 = t;
  if(match_cons(t, sym__2))
    {
      if(((x_76 != NULL) && (x_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_76 = ATgetArgument(t, 0);
      if(((e_77 != NULL) && (e_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(x_76);
  if(match_cons(t, sym_TVarStar_4))
    {
      y_76 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
      a_77 = ATgetArgument(t, 2);
      c_77 = ATgetArgument(t, 3);
      t = not_null(y_76);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(a_77);
          if(match_cons(t, sym_Some_1))
            {
              if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(b_77);
          if(match_cons(t, sym_Default_1))
            {
              if(((u_76 != NULL) && (u_76 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_76 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(u_76);
          if(match_cons(t, sym_Values_1))
            {
              if(((v_76 != NULL) && (v_76 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_76 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(c_77);
          if(match_cons(t, sym_Some_1))
            {
              if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_77(not_null(z_76), not_null(v_76), not_null(d_77), not_null(e_77), not_null(w_76), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(a_77);
          if(match_cons(t, sym_Some_1))
            {
              if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(c_77);
          if(match_cons(t, sym_Some_1))
            {
              if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_77(not_null(z_76), not_null(b_77), not_null(d_77), not_null(e_77), not_null(w_76), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          y_76 = ATgetArgument(t, 0);
          z_76 = ATgetArgument(t, 1);
          a_77 = ATgetArgument(t, 2);
          c_77 = ATgetArgument(t, 3);
          t = not_null(y_76);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(a_77);
              if(match_cons(t, sym_Some_1))
                {
                  if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(b_77);
              if(match_cons(t, sym_Default_1))
                {
                  if(((u_76 != NULL) && (u_76 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_76 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(u_76);
              if(match_cons(t, sym_Values_1))
                {
                  if(((v_76 != NULL) && (v_76 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_76 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(c_77);
              if(match_cons(t, sym_Some_1))
                {
                  if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_77(not_null(z_76), not_null(v_76), not_null(d_77), not_null(e_77), not_null(w_76), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(a_77);
              if(match_cons(t, sym_Some_1))
                {
                  if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(c_77);
              if(match_cons(t, sym_Some_1))
                {
                  if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_77(not_null(z_76), not_null(b_77), not_null(d_77), not_null(e_77), not_null(w_76), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              y_76 = ATgetArgument(t, 0);
              z_76 = ATgetArgument(t, 1);
              a_77 = ATgetArgument(t, 2);
              c_77 = ATgetArgument(t, 3);
              t = not_null(y_76);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(a_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(b_77);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((u_76 != NULL) && (u_76 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(u_76);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((v_76 != NULL) && (v_76 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(c_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_77(not_null(z_76), not_null(v_76), not_null(d_77), not_null(e_77), not_null(w_76), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(a_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(c_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = k_77(not_null(z_76), not_null(b_77), not_null(d_77), not_null(e_77), not_null(w_76), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((y_76 != NULL) && (y_76 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_76 = ATgetArgument(t, 0);
                  if(((z_76 != NULL) && (z_76 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    z_76 = ATgetArgument(t, 1);
                  if(((a_77 != NULL) && (a_77 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    a_77 = ATgetArgument(t, 2);
                  if(((c_77 != NULL) && (c_77 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    c_77 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(y_76);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(a_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(b_77);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((u_76 != NULL) && (u_76 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(u_76);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((v_76 != NULL) && (v_76 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(c_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_77(not_null(z_76), not_null(v_76), not_null(d_77), not_null(e_77), not_null(w_76), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(a_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((b_77 != NULL) && (b_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(c_77);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_77(not_null(z_76), not_null(b_77), not_null(d_77), not_null(e_77), not_null(w_76), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm z_2, ATerm t)
{
  static ATerm g_78 (ATerm s_77, ATerm t_77, ATerm t);
  static ATerm h_78 (ATerm y_77, ATerm t);
  static ATerm g_78 (ATerm s_77, ATerm t_77, ATerm t)
  {
    ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
    t = not_null(s_77);
    if(((u_77 != NULL) && (u_77 != t)))
      _fail(t);
    else
      u_77 = t;
    t = not_null(t_77);
    if(((w_77 != NULL) && (w_77 != t)))
      _fail(t);
    else
      w_77 = t;
    t = not_null(z_2);
    if(match_cons(t, sym_FILE_1))
      {
        if(((x_77 != NULL) && (x_77 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_77 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(x_77);
    if(((v_77 != NULL) && (v_77 != t)))
      _fail(t);
    else
      v_77 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(u_77), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(v_77)))));
    return(t);
  }
  static ATerm h_78 (ATerm y_77, ATerm t)
  {
    ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
    t = not_null(y_77);
    if(((a_78 != NULL) && (a_78 != t)))
      _fail(t);
    else
      a_78 = t;
    t = not_null(z_2);
    if(match_cons(t, sym_FILE_1))
      {
        if(((b_78 != NULL) && (b_78 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_78 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(b_78);
    if(((z_77 != NULL) && (z_77 != t)))
      _fail(t);
    else
      z_77 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(z_77)))));
    return(t);
  }
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL;
  if(((d_78 != NULL) && (d_78 != t)))
    _fail(t);
  else
    d_78 = t;
  if(match_cons(t, sym_File_1))
    {
      e_78 = ATgetArgument(t, 0);
      t = not_null(e_78);
      if(match_cons(t, sym_Some_1))
        {
          c_78 = ATgetArgument(t, 0);
          t = g_78(not_null(c_78), not_null(d_78), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = h_78(not_null(d_78), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((e_78 != NULL) && (e_78 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(e_78);
      if(match_cons(t, sym_Some_1))
        {
          c_78 = ATgetArgument(t, 0);
          {
            ATerm f_78 = NULL;
            t = not_null(c_78);
            if(((f_78 != NULL) && (f_78 != t)))
              _fail(t);
            else
              f_78 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(f_78)));
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
ATerm xtc_stream_to_arg_0_1 (ATerm y_2, ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL;
  if(((j_78 != NULL) && (j_78 != t)))
    _fail(t);
  else
    j_78 = t;
  if(match_cons(t, sym_Error_1))
    {
      k_78 = ATgetArgument(t, 0);
      {
        ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
        t = not_null(k_78);
        if(((l_78 != NULL) && (l_78 != t)))
          _fail(t);
        else
          l_78 = t;
        t = not_null(j_78);
        if(((n_78 != NULL) && (n_78 != t)))
          _fail(t);
        else
          n_78 = t;
        t = not_null(l_78);
        t = xtc_streamdef_to_arg_0_1(not_null(y_2), t);
        if(((m_78 != NULL) && (m_78 != t)))
          _fail(t);
        else
          m_78 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          k_78 = ATgetArgument(t, 0);
          {
            ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
            t = not_null(k_78);
            if(((o_78 != NULL) && (o_78 != t)))
              _fail(t);
            else
              o_78 = t;
            t = not_null(j_78);
            if(((q_78 != NULL) && (q_78 != t)))
              _fail(t);
            else
              q_78 = t;
            t = not_null(o_78);
            t = xtc_streamdef_to_arg_0_1(not_null(y_2), t);
            if(((p_78 != NULL) && (p_78 != t)))
              _fail(t);
            else
              p_78 = t;
          }
        }
      else
        {
          ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((k_78 != NULL) && (k_78 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(k_78);
          if(((r_78 != NULL) && (r_78 != t)))
            _fail(t);
          else
            r_78 = t;
          t = not_null(j_78);
          if(((t_78 != NULL) && (t_78 != t)))
            _fail(t);
          else
            t_78 = t;
          t = not_null(r_78);
          t = xtc_streamdef_to_arg_0_1(not_null(y_2), t);
          if(((s_78 != NULL) && (s_78 != t)))
            _fail(t);
          else
            s_78 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm u_78 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm r_69 = ATgetArgument(t, 0);
      if(match_cons(r_69, sym_Some_1))
        {
          if(((u_78 != NULL) && (u_78 != ATgetArgument(r_69, 0))))
            _fail(ATgetArgument(r_69, 0));
          else
            u_78 = ATgetArgument(r_69, 0);
        }
      else
        _fail(t);
      {
        ATerm s_69 = ATgetArgument(t, 1);
      }
      {
        ATerm t_69 = ATgetArgument(t, 2);
      }
      {
        ATerm u_69 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(u_78);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm v_78 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((v_78 != NULL) && (v_78 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_78 = ATgetArgument(t, 0);
      {
        ATerm v_69 = ATgetArgument(t, 1);
      }
      {
        ATerm w_69 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(v_78);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
  if(((y_78 != NULL) && (y_78 != t)))
    _fail(t);
  else
    y_78 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((z_78 != NULL) && (z_78 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(z_78);
  if(match_cons(t, sym_HTTP_1))
    {
      a_79 = ATgetArgument(t, 0);
      {
        ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
        t = not_null(a_79);
        if(((b_79 != NULL) && (b_79 != t)))
          _fail(t);
        else
          b_79 = t;
        t = not_null(y_78);
        if(((d_79 != NULL) && (d_79 != t)))
          _fail(t);
        else
          d_79 = t;
        t = not_null(b_79);
        t = xtc_stream_input_0_0(t);
        if(((c_79 != NULL) && (c_79 != t)))
          _fail(t);
        else
          c_79 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_c_70;
        }
      else
        {
          ATerm e_79 = NULL,f_79 = NULL,e_80 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((a_79 != NULL) && (a_79 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_79 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(a_79);
          if(((e_79 != NULL) && (e_79 != t)))
            _fail(t);
          else
            e_79 = t;
          t = not_null(y_78);
          if(((e_80 != NULL) && (e_80 != t)))
            _fail(t);
          else
            e_80 = t;
          t = not_null(e_79);
          t = xtc_stream_input_0_0(t);
          if(((f_79 != NULL) && (f_79 != t)))
            _fail(t);
          else
            f_79 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm r_80 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm d_70 = ATgetArgument(t, 0);
      ATerm e_70 = ATgetArgument(t, 1);
      if(match_cons(e_70, sym_Some_1))
        {
          if(((r_80 != NULL) && (r_80 != ATgetArgument(e_70, 0))))
            _fail(ATgetArgument(e_70, 0));
          else
            r_80 = ATgetArgument(e_70, 0);
        }
      else
        _fail(t);
      {
        ATerm f_70 = ATgetArgument(t, 2);
      }
      {
        ATerm g_70 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(r_80);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm u_80 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm h_70 = ATgetArgument(t, 0);
      if(((u_80 != NULL) && (u_80 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_80 = ATgetArgument(t, 1);
      {
        ATerm i_70 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(u_80);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm v_80 = NULL,y_80 = NULL,c_81 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm j_70 = ATgetArgument(t, 0);
      if(match_cons(j_70, sym_Exec_1))
        {
          if(((v_80 != NULL) && (v_80 != ATgetArgument(j_70, 0))))
            _fail(ATgetArgument(j_70, 0));
          else
            v_80 = ATgetArgument(j_70, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((c_81 != NULL) && (c_81 != t)))
    _fail(t);
  else
    c_81 = t;
  t = not_null(v_80);
  t = xtc_stream_output_0_0(t);
  if(((y_80 != NULL) && (y_80 != t)))
    _fail(t);
  else
    y_80 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm d_81 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm k_70 = ATgetArgument(t, 0);
      ATerm l_70 = ATgetArgument(t, 1);
      ATerm m_70 = ATgetArgument(t, 2);
      if(match_cons(m_70, sym_Some_1))
        {
          if(((d_81 != NULL) && (d_81 != ATgetArgument(m_70, 0))))
            _fail(ATgetArgument(m_70, 0));
          else
            d_81 = ATgetArgument(m_70, 0);
        }
      else
        _fail(t);
      {
        ATerm n_70 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(d_81);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm e_81 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm o_70 = ATgetArgument(t, 0);
      ATerm p_70 = ATgetArgument(t, 1);
      if(((e_81 != NULL) && (e_81 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(e_81);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm q_70 = ATgetArgument(t, 0);
      if(match_cons(q_70, sym_Exec_1))
        {
          if(((f_81 != NULL) && (f_81 != ATgetArgument(q_70, 0))))
            _fail(ATgetArgument(q_70, 0));
          else
            f_81 = ATgetArgument(q_70, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((h_81 != NULL) && (h_81 != t)))
    _fail(t);
  else
    h_81 = t;
  t = not_null(f_81);
  t = xtc_stream_error_0_0(t);
  if(((g_81 != NULL) && (g_81 != t)))
    _fail(t);
  else
    g_81 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm w_2, ATerm x_2, ATerm t)
{
  static ATerm b_95 (ATerm x_81, ATerm t);
  static ATerm c_95 (ATerm a_92, ATerm t);
  static ATerm f_95 (ATerm v_93, ATerm t);
  static ATerm b_95 (ATerm x_81, ATerm t)
  {
    ATerm q_91 = NULL,r_91 = NULL,t_91 = NULL,u_91 = NULL,w_91 = NULL,x_91 = NULL,z_91 = NULL;
    t = not_null(x_81);
    if(((r_91 != NULL) && (r_91 != t)))
      _fail(t);
    else
      r_91 = t;
    t = not_null(w_2);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((t_91 != NULL) && (t_91 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_91 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(t_91);
    if(((w_91 != NULL) && (w_91 != t)))
      _fail(t);
    else
      w_91 = t;
    if(((z_91 != NULL) && (z_91 != t)))
      _fail(t);
    else
      z_91 = t;
    t = not_null(x_2);
    t = xtc_conf_error_0_0(t);
    if(((x_91 != NULL) && (x_91 != t)))
      _fail(t);
    else
      x_91 = t;
    if(((u_91 != NULL) && (u_91 != t)))
      _fail(t);
    else
      u_91 = t;
    t = not_null(w_91);
    t = xtc_stream_to_arg_0_1(not_null(u_91), t);
    if(((q_91 != NULL) && (q_91 != t)))
      _fail(t);
    else
      q_91 = t;
    return(t);
  }
  static ATerm c_95 (ATerm a_92, ATerm t)
  {
    ATerm q_92 = NULL,r_92 = NULL,u_92 = NULL,v_92 = NULL,q_93 = NULL,r_93 = NULL,t_93 = NULL;
    t = not_null(a_92);
    if(((r_92 != NULL) && (r_92 != t)))
      _fail(t);
    else
      r_92 = t;
    t = not_null(w_2);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((u_92 != NULL) && (u_92 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_92 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(u_92);
    if(((q_93 != NULL) && (q_93 != t)))
      _fail(t);
    else
      q_93 = t;
    if(((t_93 != NULL) && (t_93 != t)))
      _fail(t);
    else
      t_93 = t;
    t = not_null(x_2);
    t = xtc_conf_output_0_0(t);
    if(((r_93 != NULL) && (r_93 != t)))
      _fail(t);
    else
      r_93 = t;
    if(((v_92 != NULL) && (v_92 != t)))
      _fail(t);
    else
      v_92 = t;
    t = not_null(q_93);
    t = xtc_stream_to_arg_0_1(not_null(v_92), t);
    if(((q_92 != NULL) && (q_92 != t)))
      _fail(t);
    else
      q_92 = t;
    return(t);
  }
  static ATerm f_95 (ATerm v_93, ATerm t)
  {
    ATerm y_93 = NULL,a_94 = NULL,c_94 = NULL,e_94 = NULL,g_94 = NULL,j_94 = NULL,l_94 = NULL;
    t = not_null(v_93);
    if(((a_94 != NULL) && (a_94 != t)))
      _fail(t);
    else
      a_94 = t;
    t = not_null(w_2);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((c_94 != NULL) && (c_94 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_94 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(c_94);
    if(((g_94 != NULL) && (g_94 != t)))
      _fail(t);
    else
      g_94 = t;
    if(((l_94 != NULL) && (l_94 != t)))
      _fail(t);
    else
      l_94 = t;
    t = not_null(x_2);
    t = xtc_conf_input_0_0(t);
    if(((j_94 != NULL) && (j_94 != t)))
      _fail(t);
    else
      j_94 = t;
    if(((e_94 != NULL) && (e_94 != t)))
      _fail(t);
    else
      e_94 = t;
    t = not_null(g_94);
    t = xtc_stream_to_arg_0_1(not_null(e_94), t);
    if(((y_93 != NULL) && (y_93 != t)))
      _fail(t);
    else
      y_93 = t;
    return(t);
  }
  ATerm n_94 = NULL,p_94 = NULL;
  if(((n_94 != NULL) && (n_94 != t)))
    _fail(t);
  else
    n_94 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((p_94 != NULL) && (p_94 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(p_94);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_s_70);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = b_95(not_null(n_94), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = c_95(not_null(n_94), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = f_95(not_null(n_94), t);
            }
        }
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm z_95 = NULL;
  if(((z_95 != NULL) && (z_95 != t)))
    _fail(t);
  else
    z_95 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm i_92, ATerm j_92, ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_70 = ATgetArgument(t, 0);
      if(match_cons(t_70, sym_TOr_2))
        {
          if(((h_95 != NULL) && (h_95 != ATgetArgument(t_70, 0))))
            _fail(ATgetArgument(t_70, 0));
          else
            h_95 = ATgetArgument(t_70, 0);
          if(((i_95 != NULL) && (i_95 != ATgetArgument(t_70, 1))))
            _fail(ATgetArgument(t_70, 1));
          else
            i_95 = ATgetArgument(t_70, 1);
        }
      else
        _fail(t);
      if(((j_95 != NULL) && (j_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_95 != NULL) && (m_95 != t)))
    _fail(t);
  else
    m_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_95), not_null(i_95));
  if(((o_95 != NULL) && (o_95 != t)))
    _fail(t);
  else
    o_95 = t;
  t = term_u_70;
  if(((n_95 != NULL) && (n_95 != t)))
    _fail(t);
  else
    n_95 = t;
  t = not_null(o_95);
  t = dbg_0_1(not_null(n_95), t);
  {
    ATerm v_70 = t;
    int w_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_95 = NULL,q_95 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_95), not_null(j_95));
        t = xtc_targ_thread_map_1_2(_fail, not_null(i_92), not_null(j_92), t);
        if(((q_95 != NULL) && (q_95 != t)))
          _fail(t);
        else
          q_95 = t;
        t = term_x_70;
        if(((p_95 != NULL) && (p_95 != t)))
          _fail(t);
        else
          p_95 = t;
        t = not_null(q_95);
        t = dbg_0_1(not_null(p_95), t);
        LocalPopChoice(w_70);
      }
    else
      {
        t = v_70;
        {
          ATerm u_95 = NULL,v_95 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_95), not_null(j_95));
          t = xtc_targ_thread_map_1_2(_fail, not_null(i_92), not_null(j_92), t);
          if(((v_95 != NULL) && (v_95 != t)))
            _fail(t);
          else
            v_95 = t;
          t = term_y_70;
          if(((u_95 != NULL) && (u_95 != t)))
            _fail(t);
          else
            u_95 = t;
          t = not_null(v_95);
          t = dbg_0_1(not_null(u_95), t);
        }
      }
  }
  t = _2_0(concat_0_0, h_9, t);
  if(match_cons(t, sym__2))
    {
      if(((k_95 != NULL) && (k_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_95 = ATgetArgument(t, 0);
      if(((l_95 != NULL) && (l_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_95), not_null(l_95));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm a_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_70 = ATgetArgument(t, 0);
      if(((ATgetType(z_70) != AT_LIST) || !(ATisEmpty(z_70))))
        _fail(t);
      if(((a_96 != NULL) && (a_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_96));
  return(t);
}
ATerm Cons_T_2_0 (ATerm u_0 (ATerm), ATerm z_0 (ATerm), ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_71 = ATgetArgument(t, 0);
      if(((ATgetType(a_71) == AT_LIST) && !(ATisEmpty(a_71))))
        {
          if(((e_96 != NULL) && (e_96 != ATgetFirst((ATermList) a_71))))
            _fail(ATgetFirst((ATermList) a_71));
          else
            e_96 = ATgetFirst((ATermList) a_71);
          if(((f_96 != NULL) && (f_96 != (ATerm) ATgetNext((ATermList) a_71))))
            _fail((ATerm) ATgetNext((ATermList) a_71));
          else
            f_96 = (ATerm) ATgetNext((ATermList) a_71);
        }
      else
        _fail(t);
      if(((b_96 != NULL) && (b_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_96 != NULL) && (i_96 != t)))
    _fail(t);
  else
    i_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_96), not_null(b_96));
  t = u_0(t);
  if(match_cons(t, sym__2))
    {
      if(((g_96 != NULL) && (g_96 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_96 = ATgetArgument(t, 0);
      if(((c_96 != NULL) && (c_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), not_null(c_96));
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      if(((h_96 != NULL) && (h_96 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_96 = ATgetArgument(t, 0);
      if(((d_96 != NULL) && (d_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_96)), not_null(g_96)), not_null(d_96));
  return(t);
}
ATerm thread_map_1_0 (ATerm z_131 (ATerm), ATerm t)
{
  static ATerm j_96 (ATerm t);
  static ATerm j_96 (ATerm t)
  {
    ATerm b_71 = t;
    int c_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(z_131, j_96, t);
        LocalPopChoice(c_71);
      }
    else
      {
        t = b_71;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = j_96(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm l_96 = NULL;
  if(((l_96 != NULL) && (l_96 != t)))
    _fail(t);
  else
    l_96 = t;
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm t_152 (ATerm), ATerm g_92, ATerm h_92, ATerm t)
{
  static ATerm i_9 (ATerm t);
  static ATerm i_9 (ATerm t)
  {
    ATerm d_71 = t;
    int e_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(g_92), not_null(h_92), t);
        LocalPopChoice(e_71);
      }
    else
      {
        t = d_71;
        {
          ATerm f_71 = t;
          int g_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm j_9 (ATerm t);
              static ATerm j_9 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(g_92), not_null(h_92), t);
                return(t);
              }
              t = _2_0(j_9, k_9, t);
              LocalPopChoice(g_71);
            }
          else
            {
              t = f_71;
              {
                ATerm i_71 = t;
                int j_71 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(j_71);
                  }
                else
                  {
                    t = i_71;
                    t = t_152(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(i_9, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm m_96 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm k_71 = ATgetArgument(t, 0);
      ATerm l_71 = ATgetArgument(t, 1);
      ATerm w_71 = ATgetArgument(t, 2);
      if(((m_96 != NULL) && (m_96 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        m_96 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(m_96);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL;
  if(((p_97 != NULL) && (p_97 != t)))
    _fail(t);
  else
    p_97 = t;
  t = Snd_0_0(t);
  if(((o_97 != NULL) && (o_97 != t)))
    _fail(t);
  else
    o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_97));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm q_97 = NULL;
  if(((q_97 != NULL) && (q_97 != t)))
    _fail(t);
  else
    q_97 = t;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL;
  if(((s_97 != NULL) && (s_97 != t)))
    _fail(t);
  else
    s_97 = t;
  t = Snd_0_0(t);
  if(((u_97 != NULL) && (u_97 != t)))
    _fail(t);
  else
    u_97 = t;
  t = term_z_71;
  if(((t_97 != NULL) && (t_97 != t)))
    _fail(t);
  else
    t_97 = t;
  t = not_null(u_97);
  t = err_0_1(not_null(t_97), t);
  t = not_null(s_97);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm a_72 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm b_72 = ATgetArgument(t, 0);
          if(!(match_cons(b_72, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_72;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm s_152 (ATerm), ATerm e_92, ATerm f_92, ATerm t)
{
  ATerm o_96 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL;
  if(((n_97 != NULL) && (n_97 != t)))
    _fail(t);
  else
    n_97 = t;
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  t = not_null(n_97);
  if(((m_97 != NULL) && (m_97 != t)))
    _fail(t);
  else
    m_97 = t;
  t = not_null(f_92);
  t = xtc_conf_args_0_0(t);
  if(((l_97 != NULL) && (l_97 != t)))
    _fail(t);
  else
    l_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_96), not_null(l_97));
  t = xtc_targ_thread_map_1_2(l_9, not_null(e_92), not_null(f_92), t);
  t = _2_0(concat_0_0, m_9, t);
  {
    ATerm c_72 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_97 = NULL;
        if(((r_97 != NULL) && (r_97 != t)))
          _fail(t);
        else
          r_97 = t;
        t = Snd_0_0(t);
        {
          ATerm m_72 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_72;
            }
        }
        t = not_null(r_97);
        LocalPopChoice(d_72);
        t = restore_2_0(s_152, n_9, t);
      }
    else
      {
        t = c_72;
        t = Fst_0_0(t);
        t = filter_1_0(o_9, t);
      }
  }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm n_72 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm o_72 = ATgetArgument(t, 0);
          if(!(match_cons(o_72, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_72;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL;
  if(((w_97 != NULL) && (w_97 != t)))
    _fail(t);
  else
    w_97 = t;
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = filter_1_0(p_9, t);
  if(((x_97 != NULL) && (x_97 != t)))
    _fail(t);
  else
    x_97 = t;
  {
    ATerm p_72 = t;
    int q_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_97 = NULL;
        if(((z_97 != NULL) && (z_97 != t)))
          _fail(t);
        else
          z_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_97), not_null(x_97));
        {
          ATerm w_74 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_74;
            }
        }
        t = not_null(z_97);
        LocalPopChoice(q_72);
        {
          ATerm a_98 = NULL,b_98 = NULL;
          if(((b_98 != NULL) && (b_98 != t)))
            _fail(t);
          else
            b_98 = t;
          t = term_x_74;
          if(((a_98 != NULL) && (a_98 != t)))
            _fail(t);
          else
            a_98 = t;
          t = not_null(b_98);
          t = err_0_1(not_null(a_98), t);
        }
      }
    else
      {
        t = p_72;
        {
          ATerm c_98 = NULL;
          if(((c_98 != NULL) && (c_98 != t)))
            _fail(t);
          else
            c_98 = t;
        }
      }
  }
  t = not_null(x_97);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm m_0, ATerm o_0, ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  if(((j_98 != NULL) && (j_98 != t)))
    _fail(t);
  else
    j_98 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((k_98 != NULL) && (k_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_98 = ATgetArgument(t, 0);
      if(((l_98 != NULL) && (l_98 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(k_98);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
      t = not_null(l_98);
      if(match_cons(t, sym_Some_1))
        {
          if(((m_98 != NULL) && (m_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_98);
      if(match_cons(t, sym_Layout_1))
        {
          if(((n_98 != NULL) && (n_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_98);
      if(((o_98 != NULL) && (o_98 != t)))
        _fail(t);
      else
        o_98 = t;
      t = not_null(j_98);
      if(((q_98 != NULL) && (q_98 != t)))
        _fail(t);
      else
        q_98 = t;
      t = not_null(o_98);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(m_0), not_null(o_0), t);
      if(((p_98 != NULL) && (p_98 != t)))
        _fail(t);
      else
        p_98 = t;
    }
  else
    {
      ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(l_98);
      if(match_cons(t, sym_Some_1))
        {
          if(((m_98 != NULL) && (m_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_98);
      if(match_cons(t, sym_Layout_1))
        {
          if(((n_98 != NULL) && (n_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_98);
      if(((r_98 != NULL) && (r_98 != t)))
        _fail(t);
      else
        r_98 = t;
      t = not_null(j_98);
      if(((t_98 != NULL) && (t_98 != t)))
        _fail(t);
      else
        t_98 = t;
      t = not_null(r_98);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(m_0), not_null(o_0), t);
      if(((s_98 != NULL) && (s_98 != t)))
        _fail(t);
      else
        s_98 = t;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm z_98 = NULL;
  if(((z_98 != NULL) && (z_98 != t)))
    _fail(t);
  else
    z_98 = t;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm a_99 = NULL;
  if(((a_99 != NULL) && (a_99 != t)))
    _fail(t);
  else
    a_99 = t;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm b_99 = NULL;
  if(((b_99 != NULL) && (b_99 != t)))
    _fail(t);
  else
    b_99 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm y_92, ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL;
  static ATerm t_9 (ATerm t);
  static ATerm t_9 (ATerm t)
  {
    t = not_null(x_98);
    t = xtc_template_to_args_0_2(not_null(y_98), not_null(y_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((y_98 != NULL) && (y_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_98 = ATgetArgument(t, 0);
      if(((x_98 != NULL) && (x_98 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_92);
  t = XtcConf_4_0(q_9, r_9, s_9, t_9, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL;
  if(((r_99 != NULL) && (r_99 != t)))
    _fail(t);
  else
    r_99 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      s_99 = ATgetArgument(t, 0);
      t_99 = ATgetArgument(t, 1);
      u_99 = ATgetArgument(t, 2);
      v_99 = ATgetArgument(t, 3);
      t = not_null(u_99);
      if(match_cons(t, sym_Some_1))
        {
          p_99 = ATgetArgument(t, 0);
          {
            ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL;
            t = not_null(v_99);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(s_99);
            if(((w_99 != NULL) && (w_99 != t)))
              _fail(t);
            else
              w_99 = t;
            t = not_null(t_99);
            if(((x_99 != NULL) && (x_99 != t)))
              _fail(t);
            else
              x_99 = t;
            t = not_null(p_99);
            if(((y_99 != NULL) && (y_99 != t)))
              _fail(t);
            else
              y_99 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(w_99), not_null(x_99), (ATerm)ATmakeAppl(sym_Some_1, not_null(y_99)), term_a_75);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(v_99);
          if(match_cons(t, sym_Some_1))
            {
              q_99 = ATgetArgument(t, 0);
              {
                ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL;
                t = not_null(s_99);
                if(((z_99 != NULL) && (z_99 != t)))
                  _fail(t);
                else
                  z_99 = t;
                t = not_null(t_99);
                if(((a_100 != NULL) && (a_100 != t)))
                  _fail(t);
                else
                  a_100 = t;
                t = not_null(q_99);
                if(((b_100 != NULL) && (b_100 != t)))
                  _fail(t);
                else
                  b_100 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(z_99), not_null(a_100), term_d_75, (ATerm) ATmakeAppl(sym_Some_1, not_null(b_100)));
              }
            }
          else
            {
              ATerm c_100 = NULL,d_100 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(s_99);
              if(((c_100 != NULL) && (c_100 != t)))
                _fail(t);
              else
                c_100 = t;
              t = not_null(t_99);
              if(((d_100 != NULL) && (d_100 != t)))
                _fail(t);
              else
                d_100 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(c_100), not_null(d_100), term_d_75, term_a_75);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          s_99 = ATgetArgument(t, 0);
          t_99 = ATgetArgument(t, 1);
          u_99 = ATgetArgument(t, 2);
          v_99 = ATgetArgument(t, 3);
          t = not_null(u_99);
          if(match_cons(t, sym_Some_1))
            {
              p_99 = ATgetArgument(t, 0);
              {
                ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
                t = not_null(v_99);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(s_99);
                if(((e_100 != NULL) && (e_100 != t)))
                  _fail(t);
                else
                  e_100 = t;
                t = not_null(t_99);
                if(((f_100 != NULL) && (f_100 != t)))
                  _fail(t);
                else
                  f_100 = t;
                t = not_null(p_99);
                if(((g_100 != NULL) && (g_100 != t)))
                  _fail(t);
                else
                  g_100 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(e_100), not_null(f_100), (ATerm)ATmakeAppl(sym_Some_1, not_null(g_100)), term_a_75);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(v_99);
              if(match_cons(t, sym_Some_1))
                {
                  q_99 = ATgetArgument(t, 0);
                  {
                    ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL;
                    t = not_null(s_99);
                    if(((h_100 != NULL) && (h_100 != t)))
                      _fail(t);
                    else
                      h_100 = t;
                    t = not_null(t_99);
                    if(((i_100 != NULL) && (i_100 != t)))
                      _fail(t);
                    else
                      i_100 = t;
                    t = not_null(q_99);
                    if(((j_100 != NULL) && (j_100 != t)))
                      _fail(t);
                    else
                      j_100 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(h_100), not_null(i_100), term_d_75, (ATerm) ATmakeAppl(sym_Some_1, not_null(j_100)));
                  }
                }
              else
                {
                  ATerm k_100 = NULL,l_100 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(s_99);
                  if(((k_100 != NULL) && (k_100 != t)))
                    _fail(t);
                  else
                    k_100 = t;
                  t = not_null(t_99);
                  if(((l_100 != NULL) && (l_100 != t)))
                    _fail(t);
                  else
                    l_100 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(k_100), not_null(l_100), term_d_75, term_a_75);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              s_99 = ATgetArgument(t, 0);
              t_99 = ATgetArgument(t, 1);
              u_99 = ATgetArgument(t, 2);
              v_99 = ATgetArgument(t, 3);
              t = not_null(u_99);
              if(match_cons(t, sym_Some_1))
                {
                  p_99 = ATgetArgument(t, 0);
                  {
                    ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
                    t = not_null(v_99);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(s_99);
                    if(((m_100 != NULL) && (m_100 != t)))
                      _fail(t);
                    else
                      m_100 = t;
                    t = not_null(t_99);
                    if(((n_100 != NULL) && (n_100 != t)))
                      _fail(t);
                    else
                      n_100 = t;
                    t = not_null(p_99);
                    if(((o_100 != NULL) && (o_100 != t)))
                      _fail(t);
                    else
                      o_100 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(m_100), not_null(n_100), (ATerm)ATmakeAppl(sym_Some_1, not_null(o_100)), term_a_75);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(v_99);
                  if(match_cons(t, sym_Some_1))
                    {
                      q_99 = ATgetArgument(t, 0);
                      {
                        ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
                        t = not_null(s_99);
                        if(((p_100 != NULL) && (p_100 != t)))
                          _fail(t);
                        else
                          p_100 = t;
                        t = not_null(t_99);
                        if(((q_100 != NULL) && (q_100 != t)))
                          _fail(t);
                        else
                          q_100 = t;
                        t = not_null(q_99);
                        if(((r_100 != NULL) && (r_100 != t)))
                          _fail(t);
                        else
                          r_100 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(p_100), not_null(q_100), term_d_75, (ATerm) ATmakeAppl(sym_Some_1, not_null(r_100)));
                      }
                    }
                  else
                    {
                      ATerm s_100 = NULL,t_100 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(s_99);
                      if(((s_100 != NULL) && (s_100 != t)))
                        _fail(t);
                      else
                        s_100 = t;
                      t = not_null(t_99);
                      if(((t_100 != NULL) && (t_100 != t)))
                        _fail(t);
                      else
                        t_100 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(s_100), not_null(t_100), term_d_75, term_a_75);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((s_99 != NULL) && (s_99 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_99 = ATgetArgument(t, 0);
                  if(((t_99 != NULL) && (t_99 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    t_99 = ATgetArgument(t, 1);
                  if(((u_99 != NULL) && (u_99 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    u_99 = ATgetArgument(t, 2);
                  if(((v_99 != NULL) && (v_99 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    v_99 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(u_99);
              if(match_cons(t, sym_Some_1))
                {
                  p_99 = ATgetArgument(t, 0);
                  {
                    ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL;
                    t = not_null(v_99);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(s_99);
                    if(((u_100 != NULL) && (u_100 != t)))
                      _fail(t);
                    else
                      u_100 = t;
                    t = not_null(t_99);
                    if(((v_100 != NULL) && (v_100 != t)))
                      _fail(t);
                    else
                      v_100 = t;
                    t = not_null(p_99);
                    if(((w_100 != NULL) && (w_100 != t)))
                      _fail(t);
                    else
                      w_100 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(u_100), not_null(v_100), (ATerm)ATmakeAppl(sym_Some_1, not_null(w_100)), term_a_75);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(v_99);
                  if(match_cons(t, sym_Some_1))
                    {
                      q_99 = ATgetArgument(t, 0);
                      {
                        ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
                        t = not_null(s_99);
                        if(((x_100 != NULL) && (x_100 != t)))
                          _fail(t);
                        else
                          x_100 = t;
                        t = not_null(t_99);
                        if(((y_100 != NULL) && (y_100 != t)))
                          _fail(t);
                        else
                          y_100 = t;
                        t = not_null(q_99);
                        if(((z_100 != NULL) && (z_100 != t)))
                          _fail(t);
                        else
                          z_100 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(x_100), not_null(y_100), term_d_75, (ATerm) ATmakeAppl(sym_Some_1, not_null(z_100)));
                      }
                    }
                  else
                    {
                      ATerm a_101 = NULL,b_101 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(s_99);
                      if(((a_101 != NULL) && (a_101 != t)))
                        _fail(t);
                      else
                        a_101 = t;
                      t = not_null(t_99);
                      if(((b_101 != NULL) && (b_101 != t)))
                        _fail(t);
                      else
                        b_101 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(a_101), not_null(b_101), term_d_75, term_a_75);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL;
  if(((j_101 != NULL) && (j_101 != t)))
    _fail(t);
  else
    j_101 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((k_101 != NULL) && (k_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_101 = ATgetArgument(t, 0);
      if(((l_101 != NULL) && (l_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_101);
  if(match_cons(t, sym_Some_1))
    {
      h_101 = ATgetArgument(t, 0);
      {
        ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL;
        t = not_null(k_101);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(h_101);
        if(match_cons(t, sym_Layout_1))
          {
            if(((i_101 != NULL) && (i_101 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              i_101 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(i_101);
        if(((m_101 != NULL) && (m_101 != t)))
          _fail(t);
        else
          m_101 = t;
        t = not_null(j_101);
        if(((o_101 != NULL) && (o_101 != t)))
          _fail(t);
        else
          o_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_70), term_p_77), term_o_77), term_f_75), not_null(m_101));
        t = union_0_0(t);
        if(((n_101 != NULL) && (n_101 != t)))
          _fail(t);
        else
          n_101 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_q_77, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(n_101))));
      }
    }
  else
    {
      ATerm p_101 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(k_101);
      if(((p_101 != NULL) && (p_101 != t)))
        _fail(t);
      else
        p_101 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(p_101), term_i_78);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm w_78 = ATgetArgument(t, 0);
      if(!(match_cons(w_78, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_z_79;
  return(t);
}
ATerm bottomup_1_0 (ATerm b_118 (ATerm), ATerm t)
{
  static ATerm u_9 (ATerm t);
  static ATerm u_9 (ATerm t)
  {
    t = bottomup_1_0(b_118, t);
    return(t);
  }
  t = SRTS_all(u_9, t);
  t = b_118(t);
  return(t);
}
ATerm innermost_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  static ATerm v_9 (ATerm t);
  static ATerm v_9 (ATerm t)
  {
    static ATerm w_9 (ATerm t);
    static ATerm w_9 (ATerm t)
    {
      t = g_122(t);
      t = innermost_1_0(g_122, t);
      return(t);
    }
    t = try_1_0(w_9, t);
    return(t);
  }
  t = bottomup_1_0(v_9, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm a_80 = t;
  int b_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(b_80);
    }
  else
    {
      t = a_80;
      {
        ATerm f_80 = t;
        int h_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(h_80);
          }
        else
          {
            t = f_80;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(x_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm r_101 = NULL;
  if(((r_101 != NULL) && (r_101 != t)))
    _fail(t);
  else
    r_101 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  static ATerm s_101 (ATerm t);
  static ATerm s_101 (ATerm t)
  {
    ATerm o_80 = t;
    int q_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_9, s_101, t);
        LocalPopChoice(q_80);
      }
    else
      {
        t = o_80;
        t = Nil_0_0(t);
        t = a_125(t);
      }
    return(t);
  }
  t = s_101(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_80 = t;
  int t_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(t_80);
    }
  else
    {
      t = s_80;
      {
        ATerm u_101 = NULL,v_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,d_102 = NULL,e_102 = NULL;
        if(((u_101 != NULL) && (u_101 != t)))
          _fail(t);
        else
          u_101 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((v_101 != NULL) && (v_101 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              v_101 = ATgetFirst((ATermList) t);
            if(((y_101 != NULL) && (y_101 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              y_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(v_101);
        if(((z_101 != NULL) && (z_101 != t)))
          _fail(t);
        else
          z_101 = t;
        t = not_null(y_101);
        if(((a_102 != NULL) && (a_102 != t)))
          _fail(t);
        else
          a_102 = t;
        t = not_null(u_101);
        if(((e_102 != NULL) && (e_102 != t)))
          _fail(t);
        else
          e_102 = t;
        t = not_null(z_101);
        {
          static ATerm z_9 (ATerm t);
          static ATerm z_9 (ATerm t)
          {
            t = not_null(a_102);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_9, t);
        }
        if(((d_102 != NULL) && (d_102 != t)))
          _fail(t);
        else
          d_102 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm v_105 (ATerm u_102, ATerm v_102, ATerm w_102, ATerm t)
{
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL;
  t = not_null(u_102);
  if(((x_102 != NULL) && (x_102 != t)))
    _fail(t);
  else
    x_102 = t;
  t = not_null(v_102);
  if(((y_102 != NULL) && (y_102 != t)))
    _fail(t);
  else
    y_102 = t;
  t = not_null(w_102);
  if(((a_103 != NULL) && (a_103 != t)))
    _fail(t);
  else
    a_103 = t;
  t = not_null(x_102);
  t = is_string_0_0(t);
  t = not_null(y_102);
  {
    ATerm w_80 = t;
    int x_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(a_10, t);
        LocalPopChoice(x_80);
      }
    else
      {
        t = w_80;
        t = XtcQuery_2_0(b_10, c_10, t);
      }
  }
  {
    ATerm z_80 = t;
    int a_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_103 = NULL;
        if(((e_103 != NULL) && (e_103 != t)))
          _fail(t);
        else
          e_103 = t;
        t = xtc_find_0_0(t);
        if(((z_102 != NULL) && (z_102 != t)))
          _fail(t);
        else
          z_102 = t;
        t = not_null(e_103);
        LocalPopChoice(a_81);
        {
          ATerm f_103 = NULL,g_103 = NULL;
          if(((g_103 != NULL) && (g_103 != t)))
            _fail(t);
          else
            g_103 = t;
          t = term_b_81;
          if(((f_103 != NULL) && (f_103 != t)))
            _fail(t);
          else
            f_103 = t;
          t = not_null(g_103);
          t = dbg_0_1(not_null(f_103), t);
        }
      }
    else
      {
        t = z_80;
        {
          ATerm h_103 = NULL,i_103 = NULL;
          if(((i_103 != NULL) && (i_103 != t)))
            _fail(t);
          else
            i_103 = t;
          t = term_i_81;
          if(((h_103 != NULL) && (h_103 != t)))
            _fail(t);
          else
            h_103 = t;
          t = not_null(i_103);
          t = err_0_1(not_null(h_103), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(x_102)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(z_102)))));
  return(t);
}
static ATerm w_105 (ATerm j_103, ATerm k_103, ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
  t = not_null(j_103);
  if(((l_103 != NULL) && (l_103 != t)))
    _fail(t);
  else
    l_103 = t;
  t = not_null(k_103);
  if(((n_103 != NULL) && (n_103 != t)))
    _fail(t);
  else
    n_103 = t;
  t = not_null(l_103);
  {
    ATerm j_81 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(d_10, t);
        LocalPopChoice(k_81);
      }
    else
      {
        t = j_81;
        t = XtcQuery_2_0(e_10, f_10, t);
      }
  }
  {
    ATerm l_81 = t;
    int m_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_103 = NULL;
        if(((r_103 != NULL) && (r_103 != t)))
          _fail(t);
        else
          r_103 = t;
        t = xtc_find_0_0(t);
        if(((m_103 != NULL) && (m_103 != t)))
          _fail(t);
        else
          m_103 = t;
        t = not_null(r_103);
        LocalPopChoice(m_81);
        {
          ATerm s_103 = NULL,t_103 = NULL;
          if(((t_103 != NULL) && (t_103 != t)))
            _fail(t);
          else
            t_103 = t;
          t = term_b_81;
          if(((s_103 != NULL) && (s_103 != t)))
            _fail(t);
          else
            s_103 = t;
          t = not_null(t_103);
          t = dbg_0_1(not_null(s_103), t);
        }
      }
    else
      {
        t = l_81;
        {
          ATerm u_103 = NULL,v_103 = NULL;
          if(((v_103 != NULL) && (v_103 != t)))
            _fail(t);
          else
            v_103 = t;
          t = term_i_81;
          if(((u_103 != NULL) && (u_103 != t)))
            _fail(t);
          else
            u_103 = t;
          t = not_null(v_103);
          t = err_0_1(not_null(u_103), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(m_103)))));
  return(t);
}
static ATerm x_105 (ATerm w_103, ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL;
  t = not_null(w_103);
  if(((x_103 != NULL) && (x_103 != t)))
    _fail(t);
  else
    x_103 = t;
  t = not_null(w_103);
  if(((z_103 != NULL) && (z_103 != t)))
    _fail(t);
  else
    z_103 = t;
  t = not_null(x_103);
  if(match_cons(t, sym_URL_1))
    {
      if(((a_104 != NULL) && (a_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(a_104);
  if(((y_103 != NULL) && (y_103 != t)))
    _fail(t);
  else
    y_103 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(y_103)))));
  return(t);
}
static ATerm y_105 (ATerm b_104, ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL;
  t = not_null(b_104);
  if(((c_104 != NULL) && (c_104 != t)))
    _fail(t);
  else
    c_104 = t;
  t = not_null(b_104);
  if(((e_104 != NULL) && (e_104 != t)))
    _fail(t);
  else
    e_104 = t;
  t = not_null(c_104);
  if(match_cons(t, sym_FILE_1))
    {
      if(((f_104 != NULL) && (f_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(f_104);
  if(((d_104 != NULL) && (d_104 != t)))
    _fail(t);
  else
    d_104 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(d_104)))));
  return(t);
}
static ATerm z_105 (ATerm g_104, ATerm h_104, ATerm i_104, ATerm t)
{
  ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL;
  t = not_null(g_104);
  if(((j_104 != NULL) && (j_104 != t)))
    _fail(t);
  else
    j_104 = t;
  t = not_null(h_104);
  if(((k_104 != NULL) && (k_104 != t)))
    _fail(t);
  else
    k_104 = t;
  t = not_null(i_104);
  if(((m_104 != NULL) && (m_104 != t)))
    _fail(t);
  else
    m_104 = t;
  t = not_null(j_104);
  t = is_string_0_0(t);
  t = not_null(k_104);
  if(match_cons(t, sym_URL_1))
    {
      if(((n_104 != NULL) && (n_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(n_104);
  if(((l_104 != NULL) && (l_104 != t)))
    _fail(t);
  else
    l_104 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(j_104)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(l_104)))));
  return(t);
}
static ATerm a_106 (ATerm o_104, ATerm p_104, ATerm q_104, ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL;
  t = not_null(o_104);
  if(((r_104 != NULL) && (r_104 != t)))
    _fail(t);
  else
    r_104 = t;
  t = not_null(p_104);
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  t = not_null(q_104);
  if(((u_104 != NULL) && (u_104 != t)))
    _fail(t);
  else
    u_104 = t;
  t = not_null(r_104);
  t = is_string_0_0(t);
  t = not_null(s_104);
  if(match_cons(t, sym_FILE_1))
    {
      if(((v_104 != NULL) && (v_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(v_104);
  if(((t_104 != NULL) && (t_104 != t)))
    _fail(t);
  else
    t_104 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(r_104)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(t_104)))));
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm b_103 = NULL;
  if(((b_103 != NULL) && (b_103 != t)))
    _fail(t);
  else
    b_103 = t;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm c_103 = NULL;
  if(((c_103 != NULL) && (c_103 != t)))
    _fail(t);
  else
    c_103 = t;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm d_103 = NULL;
  if(((d_103 != NULL) && (d_103 != t)))
    _fail(t);
  else
    d_103 = t;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm o_103 = NULL;
  if(((o_103 != NULL) && (o_103 != t)))
    _fail(t);
  else
    o_103 = t;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm p_103 = NULL;
  if(((p_103 != NULL) && (p_103 != t)))
    _fail(t);
  else
    p_103 = t;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm q_103 = NULL;
  if(((q_103 != NULL) && (q_103 != t)))
    _fail(t);
  else
    q_103 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL;
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      y_104 = ATgetArgument(t, 0);
      z_104 = ATgetArgument(t, 1);
      t = not_null(y_104);
      if(match_cons(t, sym_String_1))
        {
          w_104 = ATgetArgument(t, 0);
          {
            ATerm n_81 = t;
            int o_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_105(not_null(w_104), not_null(z_104), not_null(x_104), t);
                LocalPopChoice(o_81);
              }
            else
              {
                t = n_81;
                {
                  ATerm p_81 = t;
                  int s_81 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_105(not_null(x_104), t);
                      LocalPopChoice(s_81);
                    }
                  else
                    {
                      t = p_81;
                      {
                        ATerm t_81 = t;
                        int u_81 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = y_105(not_null(x_104), t);
                            LocalPopChoice(u_81);
                          }
                        else
                          {
                            t = t_81;
                            {
                              ATerm a_105 = NULL,b_105 = NULL;
                              t = not_null(x_104);
                              if(((a_105 != NULL) && (a_105 != t)))
                                _fail(t);
                              else
                                a_105 = t;
                              t = not_null(x_104);
                              if(((b_105 != NULL) && (b_105 != t)))
                                _fail(t);
                              else
                                b_105 = t;
                              t = not_null(a_105);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(a_105))));
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
          ATerm v_81 = t;
          int w_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_105(not_null(x_104), t);
              LocalPopChoice(w_81);
            }
          else
            {
              t = v_81;
              {
                ATerm y_81 = t;
                int z_81 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_105(not_null(x_104), t);
                    LocalPopChoice(z_81);
                  }
                else
                  {
                    t = y_81;
                    {
                      ATerm c_105 = NULL,d_105 = NULL;
                      t = not_null(x_104);
                      if(((c_105 != NULL) && (c_105 != t)))
                        _fail(t);
                      else
                        c_105 = t;
                      t = not_null(x_104);
                      if(((d_105 != NULL) && (d_105 != t)))
                        _fail(t);
                      else
                        d_105 = t;
                      t = not_null(c_105);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(c_105))));
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
          y_104 = ATgetArgument(t, 0);
          {
            ATerm a_82 = t;
            int b_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_105(not_null(y_104), not_null(x_104), t);
                LocalPopChoice(b_82);
              }
            else
              {
                t = a_82;
                {
                  ATerm c_82 = t;
                  int d_82 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_105(not_null(x_104), t);
                      LocalPopChoice(d_82);
                    }
                  else
                    {
                      t = c_82;
                      {
                        ATerm g_82 = t;
                        int h_82 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = y_105(not_null(x_104), t);
                            LocalPopChoice(h_82);
                          }
                        else
                          {
                            t = g_82;
                            {
                              ATerm e_105 = NULL,f_105 = NULL;
                              t = not_null(x_104);
                              if(((e_105 != NULL) && (e_105 != t)))
                                _fail(t);
                              else
                                e_105 = t;
                              t = not_null(x_104);
                              if(((f_105 != NULL) && (f_105 != t)))
                                _fail(t);
                              else
                                f_105 = t;
                              t = not_null(e_105);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(e_105))));
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
              y_104 = ATgetArgument(t, 0);
              z_104 = ATgetArgument(t, 1);
              {
                ATerm i_82 = t;
                int j_82 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_105(not_null(x_104), t);
                    LocalPopChoice(j_82);
                  }
                else
                  {
                    t = i_82;
                    {
                      ATerm k_82 = t;
                      int l_82 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_105(not_null(x_104), t);
                          LocalPopChoice(l_82);
                        }
                      else
                        {
                          t = k_82;
                          {
                            ATerm m_82 = t;
                            int n_82 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_105 = NULL,h_105 = NULL;
                                t = not_null(x_104);
                                if(((g_105 != NULL) && (g_105 != t)))
                                  _fail(t);
                                else
                                  g_105 = t;
                                t = not_null(x_104);
                                if(((h_105 != NULL) && (h_105 != t)))
                                  _fail(t);
                                else
                                  h_105 = t;
                                t = not_null(g_105);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(g_105))));
                                LocalPopChoice(n_82);
                              }
                            else
                              {
                                t = m_82;
                                {
                                  ATerm o_82 = t;
                                  int p_82 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_105(not_null(y_104), not_null(z_104), not_null(x_104), t);
                                      LocalPopChoice(p_82);
                                    }
                                  else
                                    {
                                      t = o_82;
                                      {
                                        ATerm q_82 = t;
                                        int r_82 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = a_106(not_null(y_104), not_null(z_104), not_null(x_104), t);
                                            LocalPopChoice(r_82);
                                          }
                                        else
                                          {
                                            t = q_82;
                                            {
                                              ATerm s_82 = t;
                                              int t_82 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL;
                                                  t = not_null(y_104);
                                                  if(((i_105 != NULL) && (i_105 != t)))
                                                    _fail(t);
                                                  else
                                                    i_105 = t;
                                                  t = not_null(z_104);
                                                  if(((j_105 != NULL) && (j_105 != t)))
                                                    _fail(t);
                                                  else
                                                    j_105 = t;
                                                  t = not_null(x_104);
                                                  if(((k_105 != NULL) && (k_105 != t)))
                                                    _fail(t);
                                                  else
                                                    k_105 = t;
                                                  t = not_null(i_105);
                                                  t = is_string_0_0(t);
                                                  t = not_null(j_105);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(i_105)), (ATerm) ATmakeAppl(sym_String_1, not_null(j_105))));
                                                  LocalPopChoice(t_82);
                                                }
                                              else
                                                {
                                                  t = s_82;
                                                  {
                                                    ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL;
                                                    t = not_null(y_104);
                                                    if(((m_105 != NULL) && (m_105 != t)))
                                                      _fail(t);
                                                    else
                                                      m_105 = t;
                                                    t = not_null(z_104);
                                                    if(((l_105 != NULL) && (l_105 != t)))
                                                      _fail(t);
                                                    else
                                                      l_105 = t;
                                                    t = not_null(x_104);
                                                    if(((o_105 != NULL) && (o_105 != t)))
                                                      _fail(t);
                                                    else
                                                      o_105 = t;
                                                    t = not_null(m_105);
                                                    t = is_string_0_0(t);
                                                    t = not_null(l_105);
                                                    {
                                                      static ATerm g_10 (ATerm t);
                                                      static ATerm g_10 (ATerm t)
                                                      {
                                                        ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL;
                                                        if(((q_105 != NULL) && (q_105 != t)))
                                                          _fail(t);
                                                        else
                                                          q_105 = t;
                                                        if(((s_105 != NULL) && (s_105 != t)))
                                                          _fail(t);
                                                        else
                                                          s_105 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_105), not_null(q_105));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((r_105 != NULL) && (r_105 != t)))
                                                          _fail(t);
                                                        else
                                                          r_105 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(g_10, t);
                                                    }
                                                    if(((n_105 != NULL) && (n_105 != t)))
                                                      _fail(t);
                                                    else
                                                      n_105 = t;
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
              ATerm u_82 = t;
              int v_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_105(not_null(x_104), t);
                  LocalPopChoice(v_82);
                }
              else
                {
                  t = u_82;
                  {
                    ATerm w_82 = t;
                    int x_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_105(not_null(x_104), t);
                        LocalPopChoice(x_82);
                      }
                    else
                      {
                        t = w_82;
                        {
                          ATerm t_105 = NULL,u_105 = NULL;
                          t = not_null(x_104);
                          if(((t_105 != NULL) && (t_105 != t)))
                            _fail(t);
                          else
                            t_105 = t;
                          t = not_null(x_104);
                          if(((u_105 != NULL) && (u_105 != t)))
                            _fail(t);
                          else
                            u_105 = t;
                          t = not_null(t_105);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(t_105))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm y_82 = t;
  int z_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(z_82);
    }
  else
    {
      t = y_82;
      {
        ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
        if(((s_106 != NULL) && (s_106 != t)))
          _fail(t);
        else
          s_106 = t;
        if(((u_106 != NULL) && (u_106 != t)))
          _fail(t);
        else
          u_106 = t;
        t = not_null(s_106);
        if(((t_106 != NULL) && (t_106 != t)))
          _fail(t);
        else
          t_106 = t;
        t = (ATerm) ATinsert(ATempty, not_null(t_106));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL;
  static ATerm v_106 (ATerm t);
  static ATerm v_106 (ATerm t)
  {
    ATerm a_83 = t;
    int b_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_106 != NULL) && (b_106 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_106 = ATgetFirst((ATermList) t);
            {
              ATerm c_83 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(c_83) == AT_LIST) && !(ATisEmpty(c_83))))
                {
                  if(((c_106 != NULL) && (c_106 != ATgetFirst((ATermList) c_83))))
                    _fail(ATgetFirst((ATermList) c_83));
                  else
                    c_106 = ATgetFirst((ATermList) c_83);
                  if(((d_106 != NULL) && (d_106 != (ATerm) ATgetNext((ATermList) c_83))))
                    _fail((ATerm) ATgetNext((ATermList) c_83));
                  else
                    d_106 = (ATerm) ATgetNext((ATermList) c_83);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_83);
        {
          ATerm d_83 = t;
          int e_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_106 = NULL;
              if(((e_106 != NULL) && (e_106 != t)))
                _fail(t);
              else
                e_106 = t;
              t = not_null(b_106);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(e_106);
              LocalPopChoice(e_83);
              {
                ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL;
                if(((i_106 != NULL) && (i_106 != t)))
                  _fail(t);
                else
                  i_106 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_106), not_null(c_106));
                if(((k_106 != NULL) && (k_106 != t)))
                  _fail(t);
                else
                  k_106 = t;
                t = term_f_83;
                if(((j_106 != NULL) && (j_106 != t)))
                  _fail(t);
                else
                  j_106 = t;
                t = not_null(k_106);
                t = dbg_0_1(not_null(j_106), t);
                t = xtc_desugar_arg_0_0(t);
                if(((f_106 != NULL) && (f_106 != t)))
                  _fail(t);
                else
                  f_106 = t;
                t = not_null(i_106);
                if(((h_106 != NULL) && (h_106 != t)))
                  _fail(t);
                else
                  h_106 = t;
                t = not_null(d_106);
                t = v_106(t);
                if(((g_106 != NULL) && (g_106 != t)))
                  _fail(t);
                else
                  g_106 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(g_106)), not_null(f_106));
              }
            }
          else
            {
              t = d_83;
              {
                ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL;
                if(((o_106 != NULL) && (o_106 != t)))
                  _fail(t);
                else
                  o_106 = t;
                t = not_null(b_106);
                {
                  ATerm g_83 = t;
                  int h_83 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(h_83);
                    }
                  else
                    {
                      t = g_83;
                      {
                        ATerm p_106 = NULL,q_106 = NULL,r_106 = NULL;
                        if(((p_106 != NULL) && (p_106 != t)))
                          _fail(t);
                        else
                          p_106 = t;
                        if(((r_106 != NULL) && (r_106 != t)))
                          _fail(t);
                        else
                          r_106 = t;
                        t = not_null(p_106);
                        if(((q_106 != NULL) && (q_106 != t)))
                          _fail(t);
                        else
                          q_106 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(q_106));
                      }
                    }
                }
                if(((l_106 != NULL) && (l_106 != t)))
                  _fail(t);
                else
                  l_106 = t;
                t = not_null(o_106);
                if(((n_106 != NULL) && (n_106 != t)))
                  _fail(t);
                else
                  n_106 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(c_106)), not_null(d_106));
                t = conc_0_0(t);
                t = v_106(t);
                if(((m_106 != NULL) && (m_106 != t)))
                  _fail(t);
                else
                  m_106 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(m_106)), not_null(l_106));
              }
            }
        }
      }
    else
      {
        t = a_83;
        {
          ATerm i_83 = t;
          int j_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(h_10, v_106, t);
              LocalPopChoice(j_83);
            }
          else
            {
              t = i_83;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = v_106(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm z_106 = NULL;
  if(((z_106 != NULL) && (z_106 != t)))
    _fail(t);
  else
    z_106 = t;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm a_107 = NULL;
  if(((a_107 != NULL) && (a_107 != t)))
    _fail(t);
  else
    a_107 = t;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm b_107 = NULL;
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(i_10, j_10, k_10, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm l_107 = NULL;
  if(((l_107 != NULL) && (l_107 != t)))
    _fail(t);
  else
    l_107 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, l_10, t);
  if(match_cons(t, sym__2))
    {
      if(((d_107 != NULL) && (d_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_107 = ATgetArgument(t, 0);
      if(((e_107 != NULL) && (e_107 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((k_107 != NULL) && (k_107 != t)))
    _fail(t);
  else
    k_107 = t;
  t = term_k_83;
  if(((j_107 != NULL) && (j_107 != t)))
    _fail(t);
  else
    j_107 = t;
  t = not_null(k_107);
  t = xtc_fetch_meta_0_1(not_null(j_107), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm l_83 = ATgetArgument(t, 0);
      if(match_cons(l_83, sym_XtcDesc_1))
        {
          if(((f_107 != NULL) && (f_107 != ATgetArgument(l_83, 0))))
            _fail(ATgetArgument(l_83, 0));
          else
            f_107 = ATgetArgument(l_83, 0);
        }
      else
        _fail(t);
      {
        ATerm m_83 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(d_107), t);
  if(((g_107 != NULL) && (g_107 != t)))
    _fail(t);
  else
    g_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(f_107), not_null(g_107), not_null(e_107));
  t = xtc_prepare_0_0(t);
  if(((i_107 != NULL) && (i_107 != t)))
    _fail(t);
  else
    i_107 = t;
  if(((h_107 != NULL) && (h_107 != t)))
    _fail(t);
  else
    h_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(f_107), not_null(g_107), not_null(h_107));
  return(t);
}
ATerm mapconcat_1_0 (ATerm w_131 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, w_131, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm p_80, ATerm t)
{
  static ATerm m_10 (ATerm t);
  static ATerm m_10 (ATerm t)
  {
    ATerm n_107 = NULL;
    ATerm n_83 = t;
    int o_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_107 (ATerm o_107, ATerm t);
        static ATerm z_107 (ATerm o_107, ATerm t)
        {
          ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL;
          t = not_null(o_107);
          if(((s_107 != NULL) && (s_107 != t)))
            _fail(t);
          else
            s_107 = t;
          t = not_null(o_107);
          if(((t_107 != NULL) && (t_107 != t)))
            _fail(t);
          else
            t_107 = t;
          t = not_null(s_107);
          if(((u_107 != NULL) && (u_107 != t)))
            _fail(t);
          else
            u_107 = t;
          t = SSL_explode_term(not_null(u_107));
          if(match_cons(t, sym__2))
            {
              if(((n_107 != NULL) && (n_107 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_107 = ATgetArgument(t, 0);
              {
                ATerm p_83 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(t_107);
          if(((r_107 != NULL) && (r_107 != t)))
            _fail(t);
          else
            r_107 = t;
          t = not_null(p_80);
          {
            ATerm q_83 = t;
            if((PushChoice() == 0))
              {
                static ATerm n_10 (ATerm t);
                static ATerm n_10 (ATerm t)
                {
                  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL;
                  if(((v_107 != NULL) && (v_107 != t)))
                    _fail(t);
                  else
                    v_107 = t;
                  if(((w_107 != NULL) && (w_107 != t)))
                    _fail(t);
                  else
                    w_107 = t;
                  t = not_null(v_107);
                  if(((x_107 != NULL) && (x_107 != t)))
                    _fail(t);
                  else
                    x_107 = t;
                  t = SSL_explode_term(not_null(x_107));
                  if(match_cons(t, sym__2))
                    {
                      if(((n_107 != NULL) && (n_107 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_107 = ATgetArgument(t, 0);
                      {
                        ATerm r_83 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(w_107);
                  return(t);
                }
                t = SRTS_one(n_10, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_83;
              }
          }
          t = not_null(r_107);
          if(((q_107 != NULL) && (q_107 != t)))
            _fail(t);
          else
            q_107 = t;
          if(((p_107 != NULL) && (p_107 != t)))
            _fail(t);
          else
            p_107 = t;
          t = (ATerm) ATinsert(ATempty, not_null(p_107));
          return(t);
        }
        ATerm y_107 = NULL;
        if(((y_107 != NULL) && (y_107 != t)))
          _fail(t);
        else
          y_107 = t;
        t = z_107(not_null(y_107), t);
        LocalPopChoice(o_83);
      }
    else
      {
        t = n_83;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(m_10, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm n_80, ATerm t)
{
  ATerm a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_108 != NULL) && (a_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_108 = ATgetArgument(t, 0);
      if(((f_108 != NULL) && (f_108 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_108);
  t = xtc_filter_meta_0_1(not_null(n_80), t);
  if(((c_108 != NULL) && (c_108 != t)))
    _fail(t);
  else
    c_108 = t;
  if(((e_108 != NULL) && (e_108 != t)))
    _fail(t);
  else
    e_108 = t;
  if(((d_108 != NULL) && (d_108 != t)))
    _fail(t);
  else
    d_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_108), not_null(n_80));
  t = union_0_0(t);
  if(((b_108 != NULL) && (b_108 != t)))
    _fail(t);
  else
    b_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_108), not_null(b_108));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm n_87, ATerm o_87, ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_83 = ATgetArgument(t, 0);
      if(match_cons(s_83, sym_XtcConf_4))
        {
          if(((g_108 != NULL) && (g_108 != ATgetArgument(s_83, 0))))
            _fail(ATgetArgument(s_83, 0));
          else
            g_108 = ATgetArgument(s_83, 0);
          if(((h_108 != NULL) && (h_108 != ATgetArgument(s_83, 1))))
            _fail(ATgetArgument(s_83, 1));
          else
            h_108 = ATgetArgument(s_83, 1);
          if(((i_108 != NULL) && (i_108 != ATgetArgument(s_83, 2))))
            _fail(ATgetArgument(s_83, 2));
          else
            i_108 = ATgetArgument(s_83, 2);
          if(((j_108 != NULL) && (j_108 != ATgetArgument(s_83, 3))))
            _fail(ATgetArgument(s_83, 3));
          else
            j_108 = ATgetArgument(s_83, 3);
        }
      else
        _fail(t);
      {
        ATerm t_83 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((n_108 != NULL) && (n_108 != t)))
    _fail(t);
  else
    n_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_87), not_null(j_108));
  t = conc_0_0(t);
  if(((k_108 != NULL) && (k_108 != t)))
    _fail(t);
  else
    k_108 = t;
  t = not_null(n_108);
  if(((m_108 != NULL) && (m_108 != t)))
    _fail(t);
  else
    m_108 = t;
  t = not_null(n_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((l_108 != NULL) && (l_108 != t)))
    _fail(t);
  else
    l_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(g_108), not_null(h_108), not_null(i_108), not_null(k_108)), not_null(l_108));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm d_109 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((d_109 != NULL) && (d_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_109);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm e_109 = NULL;
  if(((e_109 != NULL) && (e_109 != t)))
    _fail(t);
  else
    e_109 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_83 = ATgetArgument(t, 0);
      if(match_cons(u_83, sym_XtcConf_4))
        {
          ATerm v_83 = ATgetArgument(u_83, 0);
          ATerm w_83 = ATgetArgument(u_83, 1);
          ATerm x_83 = ATgetArgument(u_83, 2);
          ATerm y_83 = ATgetArgument(u_83, 3);
        }
      else
        _fail(t);
      if(((q_108 != NULL) && (q_108 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_109 != NULL) && (a_109 != t)))
    _fail(t);
  else
    a_109 = t;
  t = not_null(q_108);
  if(((c_109 != NULL) && (c_109 != t)))
    _fail(t);
  else
    c_109 = t;
  t = term_z_83;
  if(((b_109 != NULL) && (b_109 != t)))
    _fail(t);
  else
    b_109 = t;
  t = not_null(c_109);
  t = xtc_fetch_meta_0_1(not_null(b_109), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((r_108 != NULL) && (r_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_108 = ATgetArgument(t, 0);
      {
        ATerm a_84 = ATgetArgument(t, 1);
        if(match_cons(a_84, sym_Some_1))
          {
            if(((s_108 != NULL) && (s_108 != ATgetArgument(a_84, 0))))
              _fail(ATgetArgument(a_84, 0));
            else
              s_108 = ATgetArgument(a_84, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(q_108);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm o_10 (ATerm t);
    static ATerm o_10 (ATerm t)
    {
      ATerm b_84 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((r_108 != NULL) && (r_108 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_108 = ATgetArgument(t, 0);
              {
                ATerm c_84 = ATgetArgument(t, 1);
                if(match_cons(c_84, sym_Some_1))
                  {
                    if(((s_108 != NULL) && (s_108 != ATgetArgument(c_84, 0))))
                      _fail(ATgetArgument(c_84, 0));
                    else
                      s_108 = ATgetArgument(c_84, 0);
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
          t = b_84;
        }
      return(t);
    }
    t = filter_1_0(o_10, t);
  }
  if(((t_108 != NULL) && (t_108 != t)))
    _fail(t);
  else
    t_108 = t;
  t = not_null(a_109);
  if(((x_108 != NULL) && (x_108 != t)))
    _fail(t);
  else
    x_108 = t;
  if(((z_108 != NULL) && (z_108 != t)))
    _fail(t);
  else
    z_108 = t;
  t = not_null(s_108);
  t = try_1_0(p_10, t);
  if(((y_108 != NULL) && (y_108 != t)))
    _fail(t);
  else
    y_108 = t;
  if(((w_108 != NULL) && (w_108 != t)))
    _fail(t);
  else
    w_108 = t;
  t = not_null(x_108);
  t = xtc_reconfigure_0_2(not_null(r_108), not_null(w_108), t);
  {
    static ATerm r_10 (ATerm t);
    static ATerm r_10 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(t_108), t);
      return(t);
    }
    t = _2_0(q_10, r_10, t);
  }
  if(((v_108 != NULL) && (v_108 != t)))
    _fail(t);
  else
    v_108 = t;
  t = term_d_84;
  if(((u_108 != NULL) && (u_108 != t)))
    _fail(t);
  else
    u_108 = t;
  t = not_null(v_108);
  t = dbg_0_1(not_null(u_108), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm e_84 = t;
  int f_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(f_84);
    }
  else
    {
      t = e_84;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL,s_10 = NULL,c_14 = NULL;
  if(((o_109 != NULL) && (o_109 != t)))
    _fail(t);
  else
    o_109 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((g_109 != NULL) && (g_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_109 = ATgetArgument(t, 0);
      if(((h_109 != NULL) && (h_109 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_109 = ATgetArgument(t, 1);
      if(((i_109 != NULL) && (i_109 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_109 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((p_109 != NULL) && (p_109 != t)))
    _fail(t);
  else
    p_109 = t;
  t = SSLgetAnnotations(not_null(o_109));
  if(((f_109 != NULL) && (f_109 != t)))
    _fail(t);
  else
    f_109 = t;
  t = not_null(g_109);
  t = p_110(t);
  if(((j_109 != NULL) && (j_109 != t)))
    _fail(t);
  else
    j_109 = t;
  t = not_null(h_109);
  t = q_110(t);
  if(((k_109 != NULL) && (k_109 != t)))
    _fail(t);
  else
    k_109 = t;
  t = not_null(i_109);
  t = r_110(t);
  if(((l_109 != NULL) && (l_109 != t)))
    _fail(t);
  else
    l_109 = t;
  if(((n_109 != NULL) && (n_109 != t)))
    _fail(t);
  else
    n_109 = t;
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(j_109), not_null(k_109), not_null(l_109));
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  t = SSLsetAnnotations(not_null(s_10), not_null(f_109));
  if(((m_109 != NULL) && (m_109 != t)))
    _fail(t);
  else
    m_109 = t;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm q_81, ATerm t)
{
  ATerm q_109 = NULL;
  if(((q_109 != NULL) && (q_109 != t)))
    _fail(t);
  else
    q_109 = t;
  t = not_null(q_81);
  t = is_string_0_0(t);
  t = not_null(q_109);
  {
    static ATerm t_10 (ATerm t);
    static ATerm t_10 (ATerm t)
    {
      ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL;
      if(((r_109 != NULL) && (r_109 != t)))
        _fail(t);
      else
        r_109 = t;
      if(((s_109 != NULL) && (s_109 != t)))
        _fail(t);
      else
        s_109 = t;
      t = not_null(r_109);
      if(((t_109 != NULL) && (t_109 != t)))
        _fail(t);
      else
        t_109 = t;
      t = SSL_explode_term(not_null(t_109));
      if(match_cons(t, sym__2))
        {
          if(((q_81 != NULL) && (q_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_81 = ATgetArgument(t, 0);
          {
            ATerm g_84 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(s_109);
      return(t);
    }
    t = collect_all_1_0(t_10, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  if(((w_109 != NULL) && (w_109 != t)))
    _fail(t);
  else
    w_109 = t;
  t = term_h_84;
  if(((v_109 != NULL) && (v_109 != t)))
    _fail(t);
  else
    v_109 = t;
  t = not_null(w_109);
  t = xtc_fetch_meta_0_1(not_null(v_109), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((u_109 != NULL) && (u_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(u_109);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm n_110 = NULL;
  if(((n_110 != NULL) && (n_110 != t)))
    _fail(t);
  else
    n_110 = t;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm o_110 = NULL;
  if(((o_110 != NULL) && (o_110 != t)))
    _fail(t);
  else
    o_110 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm u_152 (ATerm), ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm u_10 (ATerm t);
    static ATerm u_10 (ATerm t)
    {
      static ATerm v_10 (ATerm t);
      static ATerm v_10 (ATerm t)
      {
        ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL,l_110 = NULL,m_110 = NULL;
        if(((e_110 != NULL) && (e_110 != t)))
          _fail(t);
        else
          e_110 = t;
        if(((m_110 != NULL) && (m_110 != t)))
          _fail(t);
        else
          m_110 = t;
        if(((f_110 != NULL) && (f_110 != t)))
          _fail(t);
        else
          f_110 = t;
        t = not_null(m_110);
        if(((l_110 != NULL) && (l_110 != t)))
          _fail(t);
        else
          l_110 = t;
        t = term_k_84;
        t = u_152(t);
        if(((g_110 != NULL) && (g_110 != t)))
          _fail(t);
        else
          g_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_110), not_null(g_110));
        t = eq_0_0(t);
        t = not_null(e_110);
        return(t);
      }
      t = XtcContract_3_0(v_10, w_10, x_10, t);
      return(t);
    }
    t = filter_1_0(u_10, t);
  }
  if(((a_110 != NULL) && (a_110 != t)))
    _fail(t);
  else
    a_110 = t;
  t = term_h_84;
  if(((z_109 != NULL) && (z_109 != t)))
    _fail(t);
  else
    z_109 = t;
  t = not_null(a_110);
  t = dbg_0_1(not_null(z_109), t);
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm s_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_110 != NULL) && (s_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_110 = ATgetArgument(t, 0);
      {
        ATerm l_84 = ATgetArgument(t, 1);
        if(match_cons(l_84, sym_Stream_1))
          {
            if(((v_110 != NULL) && (v_110 != ATgetArgument(l_84, 0))))
              _fail(ATgetArgument(l_84, 0));
            else
              v_110 = ATgetArgument(l_84, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(s_110), not_null(v_110));
  if(((x_110 != NULL) && (x_110 != t)))
    _fail(t);
  else
    x_110 = t;
  if(((w_110 != NULL) && (w_110 != t)))
    _fail(t);
  else
    w_110 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_110));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL;
  if(((b_111 != NULL) && (b_111 != t)))
    _fail(t);
  else
    b_111 = t;
  if(((y_110 != NULL) && (y_110 != t)))
    _fail(t);
  else
    y_110 = t;
  t = not_null(b_111);
  if(((a_111 != NULL) && (a_111 != t)))
    _fail(t);
  else
    a_111 = t;
  t = term_d_15;
  t = log_stream_0_0(t);
  if(((z_110 != NULL) && (z_110 != t)))
    _fail(t);
  else
    z_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_110), not_null(z_110));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_84 = ATgetArgument(t, 0);
      if(match_cons(m_84, sym_Stream_1))
        {
          if(((c_111 != NULL) && (c_111 != ATgetArgument(m_84, 0))))
            _fail(ATgetArgument(m_84, 0));
          else
            c_111 = ATgetArgument(m_84, 0);
        }
      else
        _fail(t);
      if(((d_111 != NULL) && (d_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(c_111), not_null(d_111));
  if(((f_111 != NULL) && (f_111 != t)))
    _fail(t);
  else
    f_111 = t;
  if(((e_111 != NULL) && (e_111 != t)))
    _fail(t);
  else
    e_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_111));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL;
  t = SSL_stderr_stream();
  if(((h_111 != NULL) && (h_111 != t)))
    _fail(t);
  else
    h_111 = t;
  if(((g_111 != NULL) && (g_111 != t)))
    _fail(t);
  else
    g_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_111));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm n_84 = t;
  int o_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_84;
      t = get_config_0_0(t);
      LocalPopChoice(o_84);
    }
  else
    {
      t = n_84;
      t = term_d_15;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm i_111 = NULL,j_111 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_111 != NULL) && (i_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_111 = ATgetArgument(t, 0);
      if(((j_111 != NULL) && (j_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_84 = t;
    int r_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(i_111), not_null(j_111));
        LocalPopChoice(r_84);
      }
    else
      {
        t = q_84;
        t = SSL_subtr(not_null(i_111), not_null(j_111));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm t)
{
  static ATerm k_111 (ATerm t);
  static ATerm k_111 (ATerm t)
  {
    ATerm s_84 = t;
    int t_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_117(t);
        LocalPopChoice(t_84);
      }
    else
      {
        t = s_84;
        t = s_117(t);
        t = k_111(t);
      }
    return(t);
  }
  t = k_111(t);
  return(t);
}
ATerm for_3_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t)
{
  t = u_117(t);
  t = while_not_2_0(v_117, w_117, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm l_111 = NULL,p_111 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_111 != NULL) && (l_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_111 = ATgetArgument(t, 0);
      if(((p_111 != NULL) && (p_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_111), not_null(p_111), (ATerm) ATempty);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm q_111 = NULL,r_111 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm u_84 = ATgetArgument(t, 0);
      if(((ATgetType(u_84) != AT_INT) || (ATgetInt((ATermInt) u_84) != 0)))
        _fail(t);
      if(((q_111 != NULL) && (q_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_111 = ATgetArgument(t, 1);
      if(((r_111 != NULL) && (r_111 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_111 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(r_111);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((s_111 != NULL) && (s_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_111 = ATgetArgument(t, 0);
      if(((t_111 != NULL) && (t_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_111 = ATgetArgument(t, 1);
      if(((u_111 != NULL) && (u_111 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_111 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((x_111 != NULL) && (x_111 != t)))
    _fail(t);
  else
    x_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_111), term_f_18);
  t = geq_0_0(t);
  t = not_null(x_111);
  if(((w_111 != NULL) && (w_111 != t)))
    _fail(t);
  else
    w_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_111), term_f_18);
  t = subt_0_0(t);
  if(((v_111 != NULL) && (v_111 != t)))
    _fail(t);
  else
    v_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(v_111), not_null(t_111), (ATerm) ATinsert(CheckATermList(not_null(u_111)), not_null(t_111)));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(y_10, z_10, a_11, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  t = copy_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_111 != NULL) && (y_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_111 = ATgetArgument(t, 0);
      if(((z_111 != NULL) && (z_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_84 = t;
    int w_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(y_111), not_null(z_111));
        LocalPopChoice(w_84);
      }
    else
      {
        t = v_84;
        t = SSL_addr(not_null(y_111), not_null(z_111));
      }
  }
  return(t);
}
ATerm strlen_0_0 (ATerm t)
{
  ATerm a_112 = NULL;
  if(((a_112 != NULL) && (a_112 != t)))
    _fail(t);
  else
    a_112 = t;
  t = SSL_strlen(not_null(a_112));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm c_112 = NULL;
  if(((c_112 != NULL) && (c_112 != t)))
    _fail(t);
  else
    c_112 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_x_84;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_y_84;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_z_84;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_a_85;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_b_85;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_c_85;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_d_85;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_e_85;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_f_85;
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
static ATerm b_11 (ATerm t)
{
  ATerm e_112 = NULL;
  if(((e_112 != NULL) && (e_112 != t)))
    _fail(t);
  else
    e_112 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm i_125 (ATerm), ATerm t)
{
  static ATerm f_112 (ATerm t);
  static ATerm f_112 (ATerm t)
  {
    ATerm g_85 = t;
    int h_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_11, f_112, t);
        LocalPopChoice(h_85);
      }
    else
      {
        t = g_85;
        t = i_125(t);
      }
    return(t);
  }
  t = f_112(t);
  return(t);
}
ATerm try_1_0 (ATerm d_116 (ATerm), ATerm t)
{
  ATerm i_85 = t;
  int j_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_116(t);
      LocalPopChoice(j_85);
    }
  else
    {
      t = i_85;
      {
        ATerm h_112 = NULL,i_112 = NULL;
        if(((h_112 != NULL) && (h_112 != t)))
          _fail(t);
        else
          h_112 = t;
        if(((i_112 != NULL) && (i_112 != t)))
          _fail(t);
        else
          i_112 = t;
      }
    }
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm j_112 = NULL;
  t = explode_string_0_0(t);
  {
    static ATerm c_11 (ATerm t);
    static ATerm c_11 (ATerm t)
    {
      static ATerm d_11 (ATerm t);
      static ATerm d_11 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_85 = ATgetFirst((ATermList) t);
            if(((ATgetType(k_85) != AT_INT) || (ATgetInt((ATermInt) k_85) != 47)))
              _fail(t);
            if(((j_112 != NULL) && (j_112 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              j_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(d_11, t);
      t = not_null(j_112);
      return(t);
    }
    t = try_1_0(c_11, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm l_85 = t;
  int m_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(m_85);
    }
  else
    {
      t = l_85;
      t = term_n_85;
    }
  return(t);
}
ATerm log_0_2 (ATerm o_79, ATerm p_79, ATerm t)
{
  static ATerm e_11 (ATerm t);
  static ATerm e_11 (ATerm t)
  {
    ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL;
    if(((k_112 != NULL) && (k_112 != t)))
      _fail(t);
    else
      k_112 = t;
    if(((o_112 != NULL) && (o_112 != t)))
      _fail(t);
    else
      o_112 = t;
    t = log_src_0_0(t);
    if(((l_112 != NULL) && (l_112 != t)))
      _fail(t);
    else
      l_112 = t;
    t = not_null(o_112);
    if(((n_112 != NULL) && (n_112 != t)))
      _fail(t);
    else
      n_112 = t;
    t = not_null(o_79);
    t = severity_string_0_0(t);
    if(((m_112 != NULL) && (m_112 != t)))
      _fail(t);
    else
      m_112 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), not_null(p_79)), term_q_85), not_null(l_112)), term_p_85), not_null(m_112)), term_o_85);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(k_112);
    return(t);
  }
  t = if_log_severity_1_1(e_11, not_null(o_79), t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_112 != NULL) && (p_112 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_112 = ATgetArgument(t, 0);
      if(((q_112 != NULL) && (q_112 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_112 != NULL) && (r_112 != t)))
    _fail(t);
  else
    r_112 = t;
  {
    ATerm r_85 = t;
    int s_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(p_112), not_null(q_112));
        LocalPopChoice(s_85);
      }
    else
      {
        t = r_85;
        t = SSL_gtr(not_null(p_112), not_null(q_112));
      }
  }
  t = not_null(r_112);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_112 = NULL;
  ATerm t_85 = t;
  int u_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL;
      if(((w_112 != NULL) && (w_112 != t)))
        _fail(t);
      else
        w_112 = t;
      if(match_cons(t, sym__2))
        {
          if(((x_112 != NULL) && (x_112 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_112 = ATgetArgument(t, 0);
          if(((y_112 != NULL) && (y_112 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_112 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_112);
      if(((v_112 != NULL) && (v_112 != t)))
        _fail(t);
      else
        v_112 = t;
      t = not_null(y_112);
      if(((v_112 != NULL) && (v_112 != t)))
        _fail(t);
      else
        v_112 = t;
      t = not_null(w_112);
      LocalPopChoice(u_85);
    }
  else
    {
      t = t_85;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm u_151 (ATerm), ATerm k_79, ATerm t)
{
  ATerm v_85 = t;
  int w_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_113 = NULL,b_113 = NULL,d_113 = NULL;
      if(((a_113 != NULL) && (a_113 != t)))
        _fail(t);
      else
        a_113 = t;
      if(((d_113 != NULL) && (d_113 != t)))
        _fail(t);
      else
        d_113 = t;
      t = term_i_18;
      {
        ATerm x_85 = t;
        int z_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(z_85);
          }
        else
          {
            t = x_85;
            t = term_c_18;
          }
      }
      if(((b_113 != NULL) && (b_113 != t)))
        _fail(t);
      else
        b_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_113), not_null(k_79));
      t = geq_0_0(t);
      t = not_null(a_113);
      LocalPopChoice(w_85);
      t = u_151(t);
    }
  else
    {
      t = v_85;
      {
        ATerm e_113 = NULL;
        if(((e_113 != NULL) && (e_113 != t)))
          _fail(t);
        else
          e_113 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm g_113 = NULL;
  if(((g_113 != NULL) && (g_113 != t)))
    _fail(t);
  else
    g_113 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_i_49;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_q_43;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_h_40;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_b_40;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_f_18;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_c_18;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_a_86;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_b_86;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_c_86;
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
ATerm if_log_severity_1_1 (ATerm v_151 (ATerm), ATerm q_79, ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL;
  if(((i_113 != NULL) && (i_113 != t)))
    _fail(t);
  else
    i_113 = t;
  if(((k_113 != NULL) && (k_113 != t)))
    _fail(t);
  else
    k_113 = t;
  t = not_null(q_79);
  t = verbose_level_0_0(t);
  if(((j_113 != NULL) && (j_113 != t)))
    _fail(t);
  else
    j_113 = t;
  if(((h_113 != NULL) && (h_113 != t)))
    _fail(t);
  else
    h_113 = t;
  t = not_null(i_113);
  t = log_if_verbose_1_1(v_151, not_null(h_113), t);
  return(t);
}
ATerm log_0_3 (ATerm l_79, ATerm m_79, ATerm n_79, ATerm t)
{
  static ATerm f_11 (ATerm t);
  static ATerm f_11 (ATerm t)
  {
    ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL;
    t = log_0_2(not_null(l_79), not_null(m_79), t);
    if(((l_113 != NULL) && (l_113 != t)))
      _fail(t);
    else
      l_113 = t;
    if(((p_113 != NULL) && (p_113 != t)))
      _fail(t);
    else
      p_113 = t;
    if(((r_113 != NULL) && (r_113 != t)))
      _fail(t);
    else
      r_113 = t;
    t = not_null(l_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((q_113 != NULL) && (q_113 != t)))
      _fail(t);
    else
      q_113 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_113), term_h_40);
    t = add_0_0(t);
    if(((o_113 != NULL) && (o_113 != t)))
      _fail(t);
    else
      o_113 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_113), term_d_86);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((n_113 != NULL) && (n_113 != t)))
      _fail(t);
    else
      n_113 = t;
    t = log_stream_0_0(t);
    if(((m_113 != NULL) && (m_113 != t)))
      _fail(t);
    else
      m_113 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_113), not_null(n_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_u_14;
    t = log_puts_0_0(t);
    t = not_null(l_113);
    return(t);
  }
  t = if_log_severity_1_1(f_11, not_null(l_79), t);
  return(t);
}
ATerm warn_0_1 (ATerm h_79, ATerm t)
{
  ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL;
  if(((x_113 != NULL) && (x_113 != t)))
    _fail(t);
  else
    x_113 = t;
  t = term_e_86;
  if(((s_113 != NULL) && (s_113 != t)))
    _fail(t);
  else
    s_113 = t;
  t = not_null(x_113);
  if(((u_113 != NULL) && (u_113 != t)))
    _fail(t);
  else
    u_113 = t;
  if(((w_113 != NULL) && (w_113 != t)))
    _fail(t);
  else
    w_113 = t;
  if(((v_113 != NULL) && (v_113 != t)))
    _fail(t);
  else
    v_113 = t;
  if(((t_113 != NULL) && (t_113 != t)))
    _fail(t);
  else
    t_113 = t;
  t = not_null(u_113);
  t = log_0_3(not_null(s_113), not_null(h_79), not_null(t_113), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm f_86 = t;
  int g_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_113 = NULL;
      if(((y_113 != NULL) && (y_113 != t)))
        _fail(t);
      else
        y_113 = t;
      t = term_p_20;
      t = get_config_0_0(t);
      t = not_null(y_113);
      LocalPopChoice(g_86);
      {
        ATerm z_113 = NULL,a_114 = NULL;
        if(((a_114 != NULL) && (a_114 != t)))
          _fail(t);
        else
          a_114 = t;
        t = term_h_86;
        if(((z_113 != NULL) && (z_113 != t)))
          _fail(t);
        else
          z_113 = t;
        t = not_null(a_114);
        t = err_0_1(not_null(z_113), t);
        _fail(t);
      }
    }
  else
    {
      t = f_86;
      {
        ATerm b_114 = NULL,c_114 = NULL;
        if(((c_114 != NULL) && (c_114 != t)))
          _fail(t);
        else
          c_114 = t;
        t = term_i_86;
        if(((b_114 != NULL) && (b_114 != t)))
          _fail(t);
        else
          b_114 = t;
        t = not_null(c_114);
        t = warn_0_1(not_null(b_114), t);
      }
    }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t)
{
  ATerm j_86 = t;
  int k_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_116(t);
      t = x_116(t);
      LocalPopChoice(k_86);
    }
  else
    {
      t = j_86;
      t = x_116(t);
      _fail(t);
    }
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm e_60, ATerm t)
{
  ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((d_114 != NULL) && (d_114 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(d_114), not_null(e_60));
  if(((f_114 != NULL) && (f_114 != t)))
    _fail(t);
  else
    f_114 = t;
  if(((e_114 != NULL) && (e_114 != t)))
    _fail(t);
  else
    e_114 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(e_114));
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL;
  if(((i_114 != NULL) && (i_114 != t)))
    _fail(t);
  else
    i_114 = t;
  if(match_cons(t, sym__2))
    {
      if(((g_114 != NULL) && (g_114 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_114 = ATgetArgument(t, 0);
      if(((h_114 != NULL) && (h_114 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(g_114), t);
  t = hashtable_remove_0_1(not_null(h_114), t);
  t = not_null(i_114);
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm j_114 = NULL;
  if(((j_114 != NULL) && (j_114 != t)))
    _fail(t);
  else
    j_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, not_null(j_114));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm m_114 = NULL;
  if(((m_114 != NULL) && (m_114 != t)))
    _fail(t);
  else
    m_114 = t;
  t = term_s_20;
  t = set_config_0_0(t);
  t = not_null(m_114);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm y_152 (ATerm), ATerm t)
{
  ATerm l_86 = t;
  int m_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_114 = NULL;
      if(((k_114 != NULL) && (k_114 != t)))
        _fail(t);
      else
        k_114 = t;
      t = term_r_20;
      t = get_config_0_0(t);
      t = not_null(k_114);
      LocalPopChoice(m_86);
      {
        ATerm l_114 = NULL;
        if(((l_114 != NULL) && (l_114 != t)))
          _fail(t);
        else
          l_114 = t;
        t = term_r_20;
        t = rm_config_0_0(t);
        t = not_null(l_114);
        t = restore_always_2_0(y_152, g_11, t);
      }
    }
  else
    {
      t = l_86;
      t = y_152(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm n_86 = t;
  int o_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
      if(((o_114 != NULL) && (o_114 != t)))
        _fail(t);
      else
        o_114 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((p_114 != NULL) && (p_114 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(p_114);
      if(((q_114 != NULL) && (q_114 != t)))
        _fail(t);
      else
        q_114 = t;
      LocalPopChoice(o_86);
    }
  else
    {
      t = n_86;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  static ATerm l_116 (ATerm y_114, ATerm z_114, ATerm a_115, ATerm b_115, ATerm t);
  static ATerm m_116 (ATerm n_115, ATerm o_115, ATerm p_115, ATerm q_115, ATerm r_115, ATerm t);
  static ATerm l_116 (ATerm y_114, ATerm z_114, ATerm a_115, ATerm b_115, ATerm t)
  {
    ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL;
    t = not_null(y_114);
    if(((e_115 != NULL) && (e_115 != t)))
      _fail(t);
    else
      e_115 = t;
    t = not_null(z_114);
    if(((g_115 != NULL) && (g_115 != t)))
      _fail(t);
    else
      g_115 = t;
    t = not_null(a_115);
    if(((c_115 != NULL) && (c_115 != t)))
      _fail(t);
    else
      c_115 = t;
    t = not_null(b_115);
    t = Fst_0_0(t);
    t = k_0(t);
    if(((d_115 != NULL) && (d_115 != t)))
      _fail(t);
    else
      d_115 = t;
    t = not_null(c_115);
    t = some_or_empty_0_0(t);
    {
      ATerm p_86 = t;
      int q_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL;
          if(((h_115 != NULL) && (h_115 != t)))
            _fail(t);
          else
            h_115 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((i_115 != NULL) && (i_115 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_115 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(i_115);
          if(((j_115 != NULL) && (j_115 != t)))
            _fail(t);
          else
            j_115 = t;
          LocalPopChoice(q_86);
        }
      else
        {
          t = p_86;
          t = Nil_0_0(t);
        }
    }
    if(((f_115 != NULL) && (f_115 != t)))
      _fail(t);
    else
      f_115 = t;
    {
      ATerm r_86 = t;
      int s_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL;
          static ATerm h_11 (ATerm t);
          static ATerm h_11 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(g_115), t);
            return(t);
          }
          if(((k_115 != NULL) && (k_115 != t)))
            _fail(t);
          else
            k_115 = t;
          if(((m_115 != NULL) && (m_115 != t)))
            _fail(t);
          else
            m_115 = t;
          t = not_null(k_115);
          t = xtc_new_file_0_0(t);
          if(((l_115 != NULL) && (l_115 != t)))
            _fail(t);
          else
            l_115 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(d_115), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_115))), not_null(e_115), not_null(f_115));
          t = xtc_cc_disable_1_0(h_11, t);
          LocalPopChoice(s_86);
        }
      else
        {
          t = r_86;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm m_116 (ATerm n_115, ATerm o_115, ATerm p_115, ATerm q_115, ATerm r_115, ATerm t)
  {
    ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL;
    t = not_null(n_115);
    if(((t_115 != NULL) && (t_115 != t)))
      _fail(t);
    else
      t_115 = t;
    t = not_null(o_115);
    if(((u_115 != NULL) && (u_115 != t)))
      _fail(t);
    else
      u_115 = t;
    t = not_null(p_115);
    if(((v_115 != NULL) && (v_115 != t)))
      _fail(t);
    else
      v_115 = t;
    t = not_null(q_115);
    if(((s_115 != NULL) && (s_115 != t)))
      _fail(t);
    else
      s_115 = t;
    t = not_null(r_115);
    if(((w_115 != NULL) && (w_115 != t)))
      _fail(t);
    else
      w_115 = t;
    {
      ATerm t_86 = t;
      int u_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(s_115);
          t = xtc_fetch_contracts_1_0(k_0, t);
          LocalPopChoice(u_86);
          {
            static ATerm i_11 (ATerm t);
            static ATerm i_11 (ATerm t)
            {
              ATerm x_115 = NULL,y_115 = NULL;
              if(((y_115 != NULL) && (y_115 != t)))
                _fail(t);
              else
                y_115 = t;
              if(((x_115 != NULL) && (x_115 != t)))
                _fail(t);
              else
                x_115 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(t_115), not_null(u_115), not_null(v_115)), not_null(x_115));
              t = xtc_cc_1_0(k_0, t);
              return(t);
            }
            t = map_1_0(i_11, t);
          }
        }
      else
        {
          t = t_86;
          {
            ATerm z_115 = NULL;
            if(((z_115 != NULL) && (z_115 != t)))
              _fail(t);
            else
              z_115 = t;
          }
        }
    }
    t = not_null(w_115);
    return(t);
  }
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL;
  if(((e_116 != NULL) && (e_116 != t)))
    _fail(t);
  else
    e_116 = t;
  if(match_cons(t, sym__2))
    {
      if(((f_116 != NULL) && (f_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_116 = ATgetArgument(t, 0);
      if(((k_116 != NULL) && (k_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_116);
  if(match_cons(t, sym__3))
    {
      g_116 = ATgetArgument(t, 0);
      h_116 = ATgetArgument(t, 1);
      i_116 = ATgetArgument(t, 2);
      t = not_null(k_116);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((a_116 != NULL) && (a_116 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_116 = ATgetArgument(t, 0);
          if(((b_116 != NULL) && (b_116 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_116 = ATgetArgument(t, 1);
          if(((c_116 != NULL) && (c_116 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            c_116 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_116(not_null(i_116), not_null(b_116), not_null(c_116), not_null(e_116), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((g_116 != NULL) && (g_116 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_116 = ATgetArgument(t, 0);
          if(((h_116 != NULL) && (h_116 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_116 = ATgetArgument(t, 1);
          if(((i_116 != NULL) && (i_116 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            i_116 = ATgetArgument(t, 2);
          if(((j_116 != NULL) && (j_116 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            j_116 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = m_116(not_null(g_116), not_null(h_116), not_null(i_116), not_null(k_116), not_null(e_116), t);
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL;
  if(((o_116 != NULL) && (o_116 != t)))
    _fail(t);
  else
    o_116 = t;
  if(((n_116 != NULL) && (n_116 != t)))
    _fail(t);
  else
    n_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, not_null(n_116));
  t = table_get_0_0(t);
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL;
  if(((p_116 != NULL) && (p_116 != t)))
    _fail(t);
  else
    p_116 = t;
  t = term_r_20;
  t = get_config_0_0(t);
  if(((r_116 != NULL) && (r_116 != t)))
    _fail(t);
  else
    r_116 = t;
  t = term_v_86;
  if(((q_116 != NULL) && (q_116 != t)))
    _fail(t);
  else
    q_116 = t;
  t = not_null(r_116);
  t = notice_0_1(not_null(q_116), t);
  t = not_null(p_116);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm v_152 (ATerm), ATerm t)
{
  ATerm s_116 = NULL;
  ATerm w_86 = t;
  int x_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_116 = NULL;
      if(((t_116 != NULL) && (t_116 != t)))
        _fail(t);
      else
        t_116 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(t_116);
      LocalPopChoice(x_86);
      {
        ATerm y_116 = NULL,z_116 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL;
        if(((g_117 != NULL) && (g_117 != t)))
          _fail(t);
        else
          g_117 = t;
        t = term_y_86;
        if(((f_117 != NULL) && (f_117 != t)))
          _fail(t);
        else
          f_117 = t;
        t = not_null(g_117);
        t = dbg_0_1(not_null(f_117), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((e_117 != NULL) && (e_117 != t)))
          _fail(t);
        else
          e_117 = t;
        t = v_152(t);
        if(((s_116 != NULL) && (s_116 != t)))
          _fail(t);
        else
          s_116 = t;
        t = not_null(e_117);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(s_116);
        if(((z_116 != NULL) && (z_116 != t)))
          _fail(t);
        else
          z_116 = t;
        t = term_z_86;
        if(((y_116 != NULL) && (y_116 != t)))
          _fail(t);
        else
          y_116 = t;
        t = not_null(z_116);
        t = dbg_0_1(not_null(y_116), t);
      }
    }
  else
    {
      t = w_86;
      t = v_152(t);
    }
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_117 != NULL) && (i_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_117 = ATgetArgument(t, 0);
      if(((h_117 != NULL) && (h_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_117 != NULL) && (k_117 != t)))
    _fail(t);
  else
    k_117 = t;
  if(((l_117 != NULL) && (l_117 != t)))
    _fail(t);
  else
    l_117 = t;
  t = not_null(i_117);
  {
    ATerm a_87 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_87;
      }
  }
  t = not_null(l_117);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm b_87 = ATgetArgument(t, 0);
      if(((j_117 != NULL) && (j_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_117), not_null(j_117));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL;
  t = term_b_17;
  t = table_getlist_0_0(t);
  {
    ATerm c_87 = t;
    int d_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(d_87);
      }
    else
      {
        t = c_87;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((n_117 != NULL) && (n_117 != t)))
    _fail(t);
  else
    n_117 = t;
  if(((m_117 != NULL) && (m_117 != t)))
    _fail(t);
  else
    m_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(m_117));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm a_118 = NULL;
  if(((a_118 != NULL) && (a_118 != t)))
    _fail(t);
  else
    a_118 = t;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm c_118 = NULL;
  if(((c_118 != NULL) && (c_118 != t)))
    _fail(t);
  else
    c_118 = t;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm d_118 = NULL;
  if(((d_118 != NULL) && (d_118 != t)))
    _fail(t);
  else
    d_118 = t;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm e_118 = NULL;
  if(((e_118 != NULL) && (e_118 != t)))
    _fail(t);
  else
    e_118 = t;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm f_118 = NULL;
  if(((f_118 != NULL) && (f_118 != t)))
    _fail(t);
  else
    f_118 = t;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm g_118 = NULL;
  if(((g_118 != NULL) && (g_118 != t)))
    _fail(t);
  else
    g_118 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_87 = t;
  int f_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_87 = t;
      if((PushChoice() == 0))
        {
          ATerm h_87 = t;
          int i_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(j_11, t);
              LocalPopChoice(i_87);
            }
          else
            {
              t = h_87;
              t = XtcQuery_2_0(k_11, l_11, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_87;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(h_0, t);
      LocalPopChoice(f_87);
    }
  else
    {
      t = e_87;
      {
        ATerm j_87 = t;
        int k_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(m_11, t);
            LocalPopChoice(k_87);
          }
        else
          {
            t = j_87;
            t = XtcQuery_2_0(n_11, o_11, t);
          }
      }
      {
        ATerm l_87 = t;
        int m_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(h_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(m_87);
          }
        else
          {
            t = l_87;
            {
              ATerm h_118 = NULL,i_118 = NULL;
              if(((h_118 != NULL) && (h_118 != t)))
                _fail(t);
              else
                h_118 = t;
              if(((i_118 != NULL) && (i_118 != t)))
                _fail(t);
              else
                i_118 = t;
              t = not_null(h_118);
              t = xtc_import_0_0(t);
              t = not_null(i_118);
              t = xtc_find_reg_1_0(h_0, t);
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
ATerm restore_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  ATerm p_87 = t;
  int q_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_116(t);
      LocalPopChoice(q_87);
    }
  else
    {
      t = p_87;
      t = v_116(t);
      _fail(t);
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL;
  if(((k_118 != NULL) && (k_118 != t)))
    _fail(t);
  else
    k_118 = t;
  t = term_r_87;
  if(((j_118 != NULL) && (j_118 != t)))
    _fail(t);
  else
    j_118 = t;
  t = not_null(k_118);
  t = err_0_1(not_null(j_118), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, p_11, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm y_85, ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL;
  if(((r_118 != NULL) && (r_118 != t)))
    _fail(t);
  else
    r_118 = t;
  t = term_s_87;
  if(((q_118 != NULL) && (q_118 != t)))
    _fail(t);
  else
    q_118 = t;
  t = not_null(r_118);
  t = dbg_0_1(not_null(q_118), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm t_87 = ATgetArgument(t, 0);
      ATerm u_87 = ATgetArgument(t, 1);
      if(match_cons(u_87, sym_Some_1))
        {
          if(((l_118 != NULL) && (l_118 != ATgetArgument(u_87, 0))))
            _fail(ATgetArgument(u_87, 0));
          else
            l_118 = ATgetArgument(u_87, 0);
        }
      else
        _fail(t);
      {
        ATerm v_87 = ATgetArgument(t, 2);
      }
      {
        ATerm w_87 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((p_118 != NULL) && (p_118 != t)))
    _fail(t);
  else
    p_118 = t;
  if(((m_118 != NULL) && (m_118 != t)))
    _fail(t);
  else
    m_118 = t;
  t = not_null(p_118);
  if(((o_118 != NULL) && (o_118 != t)))
    _fail(t);
  else
    o_118 = t;
  t = not_null(y_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((n_118 != NULL) && (n_118 != t)))
    _fail(t);
  else
    n_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_118), not_null(n_118));
  t = xtc_cc_wrap_1_0(q_11, t);
  t = not_null(l_118);
  return(t);
}
ATerm Some_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,r_11 = NULL,d_14 = NULL;
  if(((x_118 != NULL) && (x_118 != t)))
    _fail(t);
  else
    x_118 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((t_118 != NULL) && (t_118 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((y_118 != NULL) && (y_118 != t)))
    _fail(t);
  else
    y_118 = t;
  t = SSLgetAnnotations(not_null(x_118));
  if(((s_118 != NULL) && (s_118 != t)))
    _fail(t);
  else
    s_118 = t;
  t = not_null(t_118);
  t = p_108(t);
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  if(((w_118 != NULL) && (w_118 != t)))
    _fail(t);
  else
    w_118 = t;
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(u_118));
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  t = SSLsetAnnotations(not_null(r_11), not_null(s_118));
  if(((v_118 != NULL) && (v_118 != t)))
    _fail(t);
  else
    v_118 = t;
  return(t);
}
ATerm option_1_0 (ATerm u_133 (ATerm), ATerm t)
{
  ATerm x_87 = t;
  int y_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(y_87);
    }
  else
    {
      t = x_87;
      t = Some_1_0(u_133, t);
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm z_118 = NULL;
  if(((z_118 != NULL) && (z_118 != t)))
    _fail(t);
  else
    z_118 = t;
  t = SSL_concat_strings(not_null(z_118));
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm a_119 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_87 = ATgetFirst((ATermList) t);
      if(((a_119 != NULL) && (a_119 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        a_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(a_119);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm b_119 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_119 != NULL) && (b_119 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_119 = ATgetFirst((ATermList) t);
      {
        ATerm a_88 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_88) != AT_LIST) || !(ATisEmpty(a_88))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(b_119);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm b_88 = t;
  int c_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(c_88);
    }
  else
    {
      t = b_88;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm d_119 = NULL;
  if(((d_119 != NULL) && (d_119 != t)))
    _fail(t);
  else
    d_119 = t;
  t = SSL_implode_string(not_null(d_119));
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm f_119 = NULL;
  if(((f_119 != NULL) && (f_119 != t)))
    _fail(t);
  else
    f_119 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm e_125 (ATerm), ATerm t)
{
  static ATerm g_119 (ATerm t);
  static ATerm g_119 (ATerm t)
  {
    ATerm d_88 = t;
    int e_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_125(t);
        LocalPopChoice(e_88);
      }
    else
      {
        t = d_88;
        t = Cons_2_0(s_11, g_119, t);
      }
    return(t);
  }
  t = g_119(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm m_119 = NULL;
  if(((m_119 != NULL) && (m_119 != t)))
    _fail(t);
  else
    m_119 = t;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm n_119 = NULL;
  if(((n_119 != NULL) && (n_119 != t)))
    _fail(t);
  else
    n_119 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm w_124 (ATerm), ATerm t)
{
  ATerm j_119 = NULL,k_119 = NULL,l_119 = NULL;
  static ATerm t_11 (ATerm t);
  static ATerm t_11 (ATerm t)
  {
    t = Cons_2_0(w_124, u_11, t);
    {
      static ATerm w_11 (ATerm t);
      static ATerm w_11 (ATerm t)
      {
        if(((j_119 != NULL) && (j_119 != t)))
          _fail(t);
        else
          j_119 = t;
        return(t);
      }
      t = Cons_2_0(v_11, w_11, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(t_11, t);
  if(((l_119 != NULL) && (l_119 != t)))
    _fail(t);
  else
    l_119 = t;
  if(((k_119 != NULL) && (k_119 != t)))
    _fail(t);
  else
    k_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_119), not_null(j_119));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm j_134 (ATerm), ATerm t)
{
  ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL;
  ATerm f_88 = t;
  int h_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(j_134, t);
      LocalPopChoice(h_88);
    }
  else
    {
      t = f_88;
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
        t = not_null(s_119);
        if(((t_119 != NULL) && (t_119 != t)))
          _fail(t);
        else
          t_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_119), (ATerm) ATempty);
      }
    }
  if(((v_119 != NULL) && (v_119 != t)))
    _fail(t);
  else
    v_119 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_119 != NULL) && (w_119 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_119 = ATgetArgument(t, 0);
      if(((z_119 != NULL) && (z_119 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_119);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(z_119);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((a_120 != NULL) && (a_120 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                a_120 = ATgetFirst((ATermList) t);
              if(((b_120 != NULL) && (b_120 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                b_120 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(z_119);
          if(((c_120 != NULL) && (c_120 != t)))
            _fail(t);
          else
            c_120 = t;
          t = not_null(v_119);
          if(((e_120 != NULL) && (e_120 != t)))
            _fail(t);
          else
            e_120 = t;
          t = not_null(c_120);
          t = list_tokenize_1_0(j_134, t);
          if(((d_120 != NULL) && (d_120 != t)))
            _fail(t);
          else
            d_120 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_119 != NULL) && (x_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_119 = ATgetFirst((ATermList) t);
          if(((y_119 != NULL) && (y_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(z_119);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm f_120 = NULL;
          t = not_null(w_119);
          if(((f_120 != NULL) && (f_120 != t)))
            _fail(t);
          else
            f_120 = t;
          t = (ATerm) ATinsert(ATempty, not_null(f_120));
        }
      else
        {
          ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((a_120 != NULL) && (a_120 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                a_120 = ATgetFirst((ATermList) t);
              if(((b_120 != NULL) && (b_120 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                b_120 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(w_119);
          if(((g_120 != NULL) && (g_120 != t)))
            _fail(t);
          else
            g_120 = t;
          t = not_null(z_119);
          if(((h_120 != NULL) && (h_120 != t)))
            _fail(t);
          else
            h_120 = t;
          t = not_null(v_119);
          if(((j_120 != NULL) && (j_120 != t)))
            _fail(t);
          else
            j_120 = t;
          t = not_null(h_120);
          t = list_tokenize_1_0(j_134, t);
          if(((i_120 != NULL) && (i_120 != t)))
            _fail(t);
          else
            i_120 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(i_120)), not_null(g_120));
        }
    }
  return(t);
}
ATerm string_tokenize_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = list_tokenize_1_0(i_134, t);
  t = map_1_0(implode_string_0_0, t);
  return(t);
}
ATerm string_tokenize_0_1 (ATerm o_46, ATerm t)
{
  static ATerm x_11 (ATerm t);
  static ATerm x_11 (ATerm t)
  {
    ATerm k_120 = NULL;
    static ATerm y_11 (ATerm t);
    static ATerm y_11 (ATerm t)
    {
      if(((k_120 != NULL) && (k_120 != t)))
        _fail(t);
      else
        k_120 = t;
      return(t);
    }
    if(((k_120 != NULL) && (k_120 != t)))
      _fail(t);
    else
      k_120 = t;
    t = not_null(o_46);
    t = fetch_1_0(y_11, t);
    return(t);
  }
  t = string_tokenize_1_0(x_11, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_120 != NULL) && (l_120 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_120 = ATgetArgument(t, 0);
      if(((m_120 != NULL) && (m_120 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_120);
  t = string_tokenize_0_1(not_null(l_120), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
{
  ATerm n_120 = NULL,o_120 = NULL;
  if(((o_120 != NULL) && (o_120 != t)))
    _fail(t);
  else
    o_120 = t;
  if(((n_120 != NULL) && (n_120 != t)))
    _fail(t);
  else
    n_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_q_32), not_null(n_120));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm p_120 = NULL;
  if(((p_120 != NULL) && (p_120 != t)))
    _fail(t);
  else
    p_120 = t;
  t = SSL_S_ISDIR(not_null(p_120));
  return(t);
}
static ATerm y_120 (ATerm r_120, ATerm t)
{
  ATerm s_120 = NULL,t_120 = NULL;
  t = not_null(r_120);
  if(((s_120 != NULL) && (s_120 != t)))
    _fail(t);
  else
    s_120 = t;
  t = SSL_filemode(not_null(s_120));
  if(match_cons(t, sym__2))
    {
      if(((t_120 != NULL) && (t_120 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_120 = ATgetArgument(t, 0);
      {
        ATerm i_88 = ATgetArgument(t, 1);
        if(((ATgetType(i_88) != AT_INT) || (ATgetInt((ATermInt) i_88) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(t_120);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm u_120 = NULL;
  if(((u_120 != NULL) && (u_120 != t)))
    _fail(t);
  else
    u_120 = t;
  {
    ATerm j_88 = t;
    int k_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_120(not_null(u_120), t);
        LocalPopChoice(k_88);
      }
    else
      {
        t = j_88;
        {
          ATerm v_120 = NULL,w_120 = NULL,x_120 = NULL;
          t = not_null(u_120);
          if(((x_120 != NULL) && (x_120 != t)))
            _fail(t);
          else
            x_120 = t;
          t = not_null(u_120);
          if(((w_120 != NULL) && (w_120 != t)))
            _fail(t);
          else
            w_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_88, not_null(w_120));
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
  ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL,c_121 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_121 != NULL) && (a_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_121 = ATgetArgument(t, 0);
      if(((z_120 != NULL) && (z_120 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_121 != NULL) && (c_121 != t)))
    _fail(t);
  else
    c_121 = t;
  {
    ATerm m_88 = t;
    int n_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_121 = NULL;
        if(((d_121 != NULL) && (d_121 != t)))
          _fail(t);
        else
          d_121 = t;
        t = not_null(z_120);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(d_121);
        LocalPopChoice(n_88);
        {
          ATerm e_121 = NULL,f_121 = NULL;
          if(((f_121 != NULL) && (f_121 != t)))
            _fail(t);
          else
            f_121 = t;
          t = not_null(a_121);
          t = base_filename_0_0(t);
          if(((e_121 != NULL) && (e_121 != t)))
            _fail(t);
          else
            e_121 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_121)), term_y_15), not_null(z_120));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = m_88;
        t = not_null(z_120);
      }
  }
  if(((b_121 != NULL) && (b_121 != t)))
    _fail(t);
  else
    b_121 = t;
  t = SSL_copy(not_null(a_121), not_null(b_121));
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm h_121 = NULL,i_121 = NULL;
  if(((h_121 != NULL) && (h_121 != t)))
    _fail(t);
  else
    h_121 = t;
  if(match_cons(t, sym_URL_1))
    {
      i_121 = ATgetArgument(t, 0);
      t = not_null(h_121);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm j_121 = NULL,k_121 = NULL;
          t = not_null(h_121);
          if(((k_121 != NULL) && (k_121 != t)))
            _fail(t);
          else
            k_121 = t;
          t = term_d_15;
          t = xtc_new_file_0_0(t);
          if(((j_121 != NULL) && (j_121 != t)))
            _fail(t);
          else
            j_121 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_88, not_null(j_121));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_121));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((i_121 != NULL) && (i_121 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_121 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(h_121);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t)
{
  ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL,o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL,z_11 = NULL,e_14 = NULL;
  if(((w_121 != NULL) && (w_121 != t)))
    _fail(t);
  else
    w_121 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((m_121 != NULL) && (m_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_121 = ATgetArgument(t, 0);
      if(((n_121 != NULL) && (n_121 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_121 = ATgetArgument(t, 1);
      if(((o_121 != NULL) && (o_121 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_121 = ATgetArgument(t, 2);
      if(((p_121 != NULL) && (p_121 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        p_121 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((x_121 != NULL) && (x_121 != t)))
    _fail(t);
  else
    x_121 = t;
  t = SSLgetAnnotations(not_null(w_121));
  if(((l_121 != NULL) && (l_121 != t)))
    _fail(t);
  else
    l_121 = t;
  t = not_null(m_121);
  t = h_110(t);
  if(((q_121 != NULL) && (q_121 != t)))
    _fail(t);
  else
    q_121 = t;
  t = not_null(n_121);
  t = i_110(t);
  if(((r_121 != NULL) && (r_121 != t)))
    _fail(t);
  else
    r_121 = t;
  t = not_null(o_121);
  t = j_110(t);
  if(((s_121 != NULL) && (s_121 != t)))
    _fail(t);
  else
    s_121 = t;
  t = not_null(p_121);
  t = k_110(t);
  if(((t_121 != NULL) && (t_121 != t)))
    _fail(t);
  else
    t_121 = t;
  if(((v_121 != NULL) && (v_121 != t)))
    _fail(t);
  else
    v_121 = t;
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(q_121), not_null(r_121), not_null(s_121), not_null(t_121));
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = SSLsetAnnotations(not_null(z_11), not_null(l_121));
  if(((u_121 != NULL) && (u_121 != t)))
    _fail(t);
  else
    u_121 = t;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = option_1_0(d_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = option_1_0(f_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = FILE_1_0(e_12, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm e_122 = NULL;
  if(((e_122 != NULL) && (e_122 != t)))
    _fail(t);
  else
    e_122 = t;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = FILE_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm f_122 = NULL;
  if(((f_122 != NULL) && (f_122 != t)))
    _fail(t);
  else
    f_122 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm p_88 = t;
  int q_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL;
      t = XtcConf_4_0(a_12, b_12, c_12, is_list_0_0, t);
      if(((b_122 != NULL) && (b_122 != t)))
        _fail(t);
      else
        b_122 = t;
      if(((d_122 != NULL) && (d_122 != t)))
        _fail(t);
      else
        d_122 = t;
      t = f_0(t);
      if(((c_122 != NULL) && (c_122 != t)))
        _fail(t);
      else
        c_122 = t;
      if(((a_122 != NULL) && (a_122 != t)))
        _fail(t);
      else
        a_122 = t;
      t = not_null(b_122);
      t = xtc_dispatch_0_1(not_null(a_122), t);
      LocalPopChoice(q_88);
    }
  else
    {
      t = p_88;
      {
        ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL;
        t = is_list_0_0(t);
        if(((h_122 != NULL) && (h_122 != t)))
          _fail(t);
        else
          h_122 = t;
        t = f_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((j_122 != NULL) && (j_122 != t)))
          _fail(t);
        else
          j_122 = t;
        if(((i_122 != NULL) && (i_122 != t)))
          _fail(t);
        else
          i_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_122), not_null(h_122));
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
ATerm FILE_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,h_12 = NULL,f_14 = NULL;
  if(((p_122 != NULL) && (p_122 != t)))
    _fail(t);
  else
    p_122 = t;
  if(match_cons(t, sym_FILE_1))
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
  t = t_110(t);
  if(((m_122 != NULL) && (m_122 != t)))
    _fail(t);
  else
    m_122 = t;
  if(((o_122 != NULL) && (o_122 != t)))
    _fail(t);
  else
    o_122 = t;
  if(((f_14 != NULL) && (f_14 != t)))
    _fail(t);
  else
    f_14 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_122));
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = SSLsetAnnotations(not_null(h_12), not_null(k_122));
  if(((n_122 != NULL) && (n_122 != t)))
    _fail(t);
  else
    n_122 = t;
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm r_122 = NULL;
  if(((r_122 != NULL) && (r_122 != t)))
    _fail(t);
  else
    r_122 = t;
  t = SSL_close(not_null(r_122));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((t_122 != NULL) && (t_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_122 = ATgetArgument(t, 0);
      if(((u_122 != NULL) && (u_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_122 = ATgetArgument(t, 1);
      if(((s_122 != NULL) && (s_122 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        s_122 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((v_122 != NULL) && (v_122 != t)))
    _fail(t);
  else
    v_122 = t;
  if(((x_122 != NULL) && (x_122 != t)))
    _fail(t);
  else
    x_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_122), not_null(u_122));
  {
    ATerm r_88 = t;
    int s_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(s_88);
      }
    else
      {
        t = r_88;
        t = (ATerm) ATempty;
      }
  }
  if(((w_122 != NULL) && (w_122 != t)))
    _fail(t);
  else
    w_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_122), not_null(u_122), (ATerm) ATinsert(CheckATermList(not_null(w_122)), not_null(s_122)));
  t = table_put_0_0(t);
  t = not_null(v_122);
  return(t);
}
ATerm assert_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm y_122 = NULL,z_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL,d_123 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_123 != NULL) && (a_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_123 = ATgetArgument(t, 0);
      if(((y_122 != NULL) && (y_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_123 != NULL) && (d_123 != t)))
    _fail(t);
  else
    d_123 = t;
  t = c_113(t);
  if(((z_122 != NULL) && (z_122 != t)))
    _fail(t);
  else
    z_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(z_122), not_null(a_123), not_null(y_122));
  t = table_push_0_0(t);
  {
    ATerm t_88 = t;
    int u_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_122), term_v_88);
        t = table_get_0_0(t);
        {
          ATerm w_88 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_88;
            }
        }
        LocalPopChoice(u_88);
      }
    else
      {
        t = t_88;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_123 != NULL) && (b_123 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_123 = ATgetFirst((ATermList) t);
      if(((c_123 != NULL) && (c_123 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_123 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(z_122), term_v_88, (ATerm) ATinsert(CheckATermList(not_null(c_123)), (ATerm) ATinsert(CheckATermList(not_null(b_123)), not_null(a_123))));
  t = table_put_0_0(t);
  t = not_null(d_123);
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm e_123 = NULL;
  if(((e_123 != NULL) && (e_123 != t)))
    _fail(t);
  else
    e_123 = t;
  t = SSL_perror(not_null(e_123));
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_123 = NULL;
  ATerm x_88 = t;
  int y_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm l_123 (ATerm h_123, ATerm t);
      static ATerm l_123 (ATerm h_123, ATerm t)
      {
        ATerm i_123 = NULL,j_123 = NULL;
        t = not_null(h_123);
        if(((j_123 != NULL) && (j_123 != t)))
          _fail(t);
        else
          j_123 = t;
        t = not_null(h_123);
        if(((i_123 != NULL) && (i_123 != t)))
          _fail(t);
        else
          i_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_123), term_z_88);
        t = conc_strings_0_0(t);
        if(((g_123 != NULL) && (g_123 != t)))
          _fail(t);
        else
          g_123 = t;
        t = SSL_mkstemp(not_null(g_123));
        return(t);
      }
      ATerm k_123 = NULL;
      if(((k_123 != NULL) && (k_123 != t)))
        _fail(t);
      else
        k_123 = t;
      t = l_123(not_null(k_123), t);
      LocalPopChoice(y_88);
    }
  else
    {
      t = x_88;
      t = term_a_89;
      t = perror_0_0(t);
      _fail(t);
    }
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm m_123 = NULL,n_123 = NULL;
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
  t = SSL_strcat(not_null(m_123), not_null(n_123));
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
  ATerm b_89 = t;
  int c_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_89;
      t = getenv_0_0(t);
      LocalPopChoice(c_89);
    }
  else
    {
      t = b_89;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm o_123 = NULL,p_123 = NULL;
  if(((p_123 != NULL) && (p_123 != t)))
    _fail(t);
  else
    p_123 = t;
  t = temp_dir_0_0(t);
  if(((o_123 != NULL) && (o_123 != t)))
    _fail(t);
  else
    o_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_123), term_e_89);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_f_89;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((r_123 != NULL) && (r_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_123 = ATgetArgument(t, 0);
      if(((q_123 != NULL) && (q_123 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_123 != NULL) && (s_123 != t)))
    _fail(t);
  else
    s_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_123), term_d_15);
  t = assert_1_0(i_12, t);
  t = not_null(q_123);
  t = close_0_0(t);
  t = not_null(r_123);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm z_123 = NULL;
  if(((z_123 != NULL) && (z_123 != t)))
    _fail(t);
  else
    z_123 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_154 (ATerm), ATerm r_154 (ATerm), ATerm t)
{
  ATerm u_123 = NULL,v_123 = NULL,w_123 = NULL;
  if(((u_123 != NULL) && (u_123 != t)))
    _fail(t);
  else
    u_123 = t;
  if(((w_123 != NULL) && (w_123 != t)))
    _fail(t);
  else
    w_123 = t;
  t = xtc_new_file_0_0(t);
  if(((v_123 != NULL) && (v_123 != t)))
    _fail(t);
  else
    v_123 = t;
  {
    ATerm g_89 = t;
    int h_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_123 = NULL,y_123 = NULL;
        t = not_null(u_123);
        {
          ATerm i_89 = t;
          int j_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(j_12, t);
              LocalPopChoice(j_89);
            }
          else
            {
              t = i_89;
              t = stdin_0_0(t);
            }
        }
        if(((y_123 != NULL) && (y_123 != t)))
          _fail(t);
        else
          y_123 = t;
        t = r_154(t);
        if(((x_123 != NULL) && (x_123 != t)))
          _fail(t);
        else
          x_123 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(u_123)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_123))), term_a_27, not_null(x_123));
        LocalPopChoice(h_89);
      }
    else
      {
        t = g_89;
        {
          ATerm a_124 = NULL,b_124 = NULL;
          t = not_null(u_123);
          t = None_0_0(t);
          if(((b_124 != NULL) && (b_124 != t)))
            _fail(t);
          else
            b_124 = t;
          t = r_154(t);
          if(((a_124 != NULL) && (a_124 != t)))
            _fail(t);
          else
            a_124 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_a_27, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_123))), term_a_27, not_null(a_124));
        }
      }
  }
  t = xtc_command_1_0(q_154, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_123));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm k_154 (ATerm), ATerm l_154 (ATerm), ATerm t)
{
  t = term_a_27;
  t = xtc_transform_file_2_0(k_154, l_154, t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm c_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((c_124 != NULL) && (c_124 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        c_124 = ATgetFirst((ATermList) t);
      {
        ATerm k_89 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(c_124);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm e_124 = NULL,f_124 = NULL;
  static ATerm k_12 (ATerm t);
  static ATerm k_12 (ATerm t)
  {
    ATerm g_124 = NULL,k_124 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((g_124 != NULL) && (g_124 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_124 = ATgetArgument(t, 0);
        if(((k_124 != NULL) && (k_124 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_124 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(f_124), not_null(g_124), not_null(k_124));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((f_124 != NULL) && (f_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_124 = ATgetArgument(t, 0);
      if(((e_124 != NULL) && (e_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(e_124);
  t = map_1_0(k_12, t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm l_89 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_89;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_124 != NULL) && (p_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_124 = ATgetArgument(t, 0);
      if(((n_124 != NULL) && (n_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_124 != NULL) && (r_124 != t)))
    _fail(t);
  else
    r_124 = t;
  t = not_null(n_124);
  {
    ATerm m_89 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(l_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_89;
      }
  }
  t = not_null(n_124);
  t = filter_1_0(m_12, t);
  if(((q_124 != NULL) && (q_124 != t)))
    _fail(t);
  else
    q_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_124), (ATerm) ATinsert(ATempty, term_n_89));
  t = union_0_0(t);
  if(((o_124 != NULL) && (o_124 != t)))
    _fail(t);
  else
    o_124 = t;
  t = not_null(p_124);
  if(((x_124 != NULL) && (x_124 != t)))
    _fail(t);
  else
    x_124 = t;
  if(((z_124 != NULL) && (z_124 != t)))
    _fail(t);
  else
    z_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_o_89), not_null(q_124));
  t = conc_0_0(t);
  if(((y_124 != NULL) && (y_124 != t)))
    _fail(t);
  else
    y_124 = t;
  if(((s_124 != NULL) && (s_124 != t)))
    _fail(t);
  else
    s_124 = t;
  t = not_null(x_124);
  t = xtc_load_0_1(not_null(s_124), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_124), not_null(o_124));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm c_125 = NULL,d_125 = NULL,g_125 = NULL,h_125 = NULL,k_125 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_125 != NULL) && (d_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_125 = ATgetArgument(t, 0);
      if(((c_125 != NULL) && (c_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_125 != NULL) && (h_125 != t)))
    _fail(t);
  else
    h_125 = t;
  if(((k_125 != NULL) && (k_125 != t)))
    _fail(t);
  else
    k_125 = t;
  t = not_null(d_125);
  t = file_exists_0_0(t);
  t = not_null(k_125);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm p_89 = ATgetArgument(t, 0);
      if(((g_125 != NULL) && (g_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_125), not_null(g_125));
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm n_125 = NULL,o_125 = NULL;
  t = term_b_17;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((o_125 != NULL) && (o_125 != t)))
    _fail(t);
  else
    o_125 = t;
  if(((n_125 != NULL) && (n_125 != t)))
    _fail(t);
  else
    n_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(n_125));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL;
  if(((s_125 != NULL) && (s_125 != t)))
    _fail(t);
  else
    s_125 = t;
  if(((t_125 != NULL) && (t_125 != t)))
    _fail(t);
  else
    t_125 = t;
  t = not_null(s_125);
  if(((u_125 != NULL) && (u_125 != t)))
    _fail(t);
  else
    u_125 = t;
  t = SSL_explode_term(not_null(u_125));
  if(match_cons(t, sym__2))
    {
      ATerm q_89 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_89) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_89 = ATgetArgument(t, 1);
        if(((ATgetType(r_89) == AT_LIST) && !(ATisEmpty(r_89))))
          {
            if(((p_125 != NULL) && (p_125 != ATgetFirst((ATermList) r_89))))
              _fail(ATgetFirst((ATermList) r_89));
            else
              p_125 = ATgetFirst((ATermList) r_89);
            {
              ATerm s_89 = (ATerm) ATgetNext((ATermList) r_89);
              if(((ATgetType(s_89) == AT_LIST) && !(ATisEmpty(s_89))))
                {
                  if(((r_125 != NULL) && (r_125 != ATgetFirst((ATermList) s_89))))
                    _fail(ATgetFirst((ATermList) s_89));
                  else
                    r_125 = ATgetFirst((ATermList) s_89);
                  if(((q_125 != NULL) && (q_125 != (ATerm) ATgetNext((ATermList) s_89))))
                    _fail((ATerm) ATgetNext((ATermList) s_89));
                  else
                    q_125 = (ATerm) ATgetNext((ATermList) s_89);
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
  t = not_null(r_125);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm b_152 (ATerm), ATerm c_152 (ATerm), ATerm t)
{
  ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL;
  if(((y_125 != NULL) && (y_125 != t)))
    _fail(t);
  else
    y_125 = t;
  if(((a_126 != NULL) && (a_126 != t)))
    _fail(t);
  else
    a_126 = t;
  t = not_null(y_125);
  if(((b_126 != NULL) && (b_126 != t)))
    _fail(t);
  else
    b_126 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      c_126 = ATgetArgument(t, 0);
      t = not_null(c_126);
      if(((x_125 != NULL) && (x_125 != t)))
        _fail(t);
      else
        x_125 = t;
      t = not_null(b_126);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((c_126 != NULL) && (c_126 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_126 = ATgetArgument(t, 0);
          if(((d_126 != NULL) && (d_126 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_126 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(c_126);
      if(((x_125 != NULL) && (x_125 != t)))
        _fail(t);
      else
        x_125 = t;
      t = not_null(d_126);
      if(((w_125 != NULL) && (w_125 != t)))
        _fail(t);
      else
        w_125 = t;
      t = not_null(b_126);
    }
  {
    ATerm t_89 = t;
    int u_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL;
        t = not_null(y_125);
        if(((i_126 != NULL) && (i_126 != t)))
          _fail(t);
        else
          i_126 = t;
        t = term_v_89;
        if(((h_126 != NULL) && (h_126 != t)))
          _fail(t);
        else
          h_126 = t;
        t = not_null(i_126);
        t = xtc_query_one_2_1(b_152, c_152, not_null(h_126), t);
        if(((e_126 != NULL) && (e_126 != t)))
          _fail(t);
        else
          e_126 = t;
        t = not_null(y_125);
        if(((g_126 != NULL) && (g_126 != t)))
          _fail(t);
        else
          g_126 = t;
        t = term_w_89;
        if(((f_126 != NULL) && (f_126 != t)))
          _fail(t);
        else
          f_126 = t;
        t = not_null(g_126);
        t = dbg_0_1(not_null(f_126), t);
        t = not_null(e_126);
        LocalPopChoice(u_89);
      }
    else
      {
        t = t_89;
        {
          ATerm j_126 = NULL,k_126 = NULL;
          t = not_null(x_125);
          if(((k_126 != NULL) && (k_126 != t)))
            _fail(t);
          else
            k_126 = t;
          t = term_q_15;
          if(((j_126 != NULL) && (j_126 != t)))
            _fail(t);
          else
            j_126 = t;
          t = not_null(k_126);
          t = xtc_query_one_2_1(b_152, c_152, not_null(j_126), t);
          t = xtc_cache_put_0_1(not_null(y_125), t);
        }
      }
  }
  if(((z_125 != NULL) && (z_125 != t)))
    _fail(t);
  else
    z_125 = t;
  return(t);
}
ATerm crush_3_0 (ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm j_136 (ATerm), ATerm t)
{
  ATerm l_126 = NULL,m_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL;
  if(((u_126 != NULL) && (u_126 != t)))
    _fail(t);
  else
    u_126 = t;
  if(((v_126 != NULL) && (v_126 != t)))
    _fail(t);
  else
    v_126 = t;
  t = not_null(u_126);
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  t = SSL_explode_term(not_null(w_126));
  if(match_cons(t, sym__2))
    {
      ATerm x_89 = ATgetArgument(t, 0);
      if(((l_126 != NULL) && (l_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(v_126);
  if(((t_126 != NULL) && (t_126 != t)))
    _fail(t);
  else
    t_126 = t;
  t = not_null(l_126);
  t = foldr_3_0(h_136, i_136, j_136, t);
  if(((m_126 != NULL) && (m_126 != t)))
    _fail(t);
  else
    m_126 = t;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_all_2_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm t)
{
  static ATerm c_127 (ATerm t);
  static ATerm c_127 (ATerm t)
  {
    ATerm y_89 = t;
    int z_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL;
        if(((x_126 != NULL) && (x_126 != t)))
          _fail(t);
        else
          x_126 = t;
        if(((b_127 != NULL) && (b_127 != t)))
          _fail(t);
        else
          b_127 = t;
        t = not_null(x_126);
        t = j_130(t);
        if(((y_126 != NULL) && (y_126 != t)))
          _fail(t);
        else
          y_126 = t;
        t = not_null(b_127);
        if(((a_127 != NULL) && (a_127 != t)))
          _fail(t);
        else
          a_127 = t;
        t = crush_3_0(n_12, k_130, c_127, t);
        if(((z_126 != NULL) && (z_126 != t)))
          _fail(t);
        else
          z_126 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(z_126)), not_null(y_126));
        LocalPopChoice(z_89);
      }
    else
      {
        t = y_89;
        t = crush_3_0(o_12, k_130, c_127, t);
      }
    return(t);
  }
  t = c_127(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  t = collect_all_2_0(i_130, union_0_0, t);
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm e_0, ATerm t)
{
  static ATerm p_127 (ATerm f_127, ATerm t);
  static ATerm q_127 (ATerm l_127, ATerm t);
  static ATerm p_127 (ATerm f_127, ATerm t)
  {
    ATerm g_127 = NULL,h_127 = NULL;
    t = not_null(f_127);
    if(((g_127 != NULL) && (g_127 != t)))
      _fail(t);
    else
      g_127 = t;
    t = not_null(f_127);
    if(((h_127 != NULL) && (h_127 != t)))
      _fail(t);
    else
      h_127 = t;
    t = not_null(e_0);
    t = is_list_0_0(t);
    {
      ATerm a_90 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_90;
        }
    }
    {
      static ATerm p_12 (ATerm t);
      static ATerm p_12 (ATerm t)
      {
        ATerm i_127 = NULL,j_127 = NULL,k_127 = NULL;
        if(((j_127 != NULL) && (j_127 != t)))
          _fail(t);
        else
          j_127 = t;
        if(((k_127 != NULL) && (k_127 != t)))
          _fail(t);
        else
          k_127 = t;
        t = not_null(g_127);
        t = xtc_has_meta_0_1(not_null(j_127), t);
        t = not_null(j_127);
        return(t);
      }
      t = filter_1_0(p_12, t);
    }
    if(((e_0 != NULL) && (e_0 != t)))
      _fail(t);
    else
      e_0 = t;
    t = not_null(g_127);
    return(t);
  }
  static ATerm q_127 (ATerm l_127, ATerm t)
  {
    ATerm m_127 = NULL;
    t = not_null(l_127);
    if(((m_127 != NULL) && (m_127 != t)))
      _fail(t);
    else
      m_127 = t;
    t = not_null(l_127);
    {
      static ATerm q_12 (ATerm t);
      static ATerm q_12 (ATerm t)
      {
        if(((e_0 != NULL) && (e_0 != t)))
          _fail(t);
        else
          e_0 = t;
        return(t);
      }
      t = collect_all_1_0(q_12, t);
    }
    {
      ATerm b_90 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_90;
        }
    }
    t = not_null(m_127);
    return(t);
  }
  ATerm n_127 = NULL;
  if(((n_127 != NULL) && (n_127 != t)))
    _fail(t);
  else
    n_127 = t;
  {
    ATerm c_90 = t;
    int d_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_127 = NULL;
        t = not_null(n_127);
        if(((o_127 != NULL) && (o_127 != t)))
          _fail(t);
        else
          o_127 = t;
        t = not_null(e_0);
        t = Nil_0_0(t);
        t = not_null(o_127);
        LocalPopChoice(d_90);
      }
    else
      {
        t = c_90;
        {
          ATerm e_90 = t;
          int f_90 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_127(not_null(n_127), t);
              LocalPopChoice(f_90);
            }
          else
            {
              t = e_90;
              t = q_127(not_null(n_127), t);
            }
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm r_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL;
  if(((u_127 != NULL) && (u_127 != t)))
    _fail(t);
  else
    u_127 = t;
  if(match_cons(t, sym__3))
    {
      if(((r_127 != NULL) && (r_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_127 = ATgetArgument(t, 0);
      if(((s_127 != NULL) && (s_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_127 = ATgetArgument(t, 1);
      if(((t_127 != NULL) && (t_127 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_127 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(r_127), t);
  t = hashtable_put_0_2(not_null(s_127), not_null(t_127), t);
  t = not_null(u_127);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm v_127 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_127 != NULL) && (v_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_127 = ATgetArgument(t, 0);
      if(((v_127 != NULL) && (v_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm y_127 = NULL;
  if(((y_127 != NULL) && (y_127 != t)))
    _fail(t);
  else
    y_127 = t;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm z_127 = NULL;
  if(((z_127 != NULL) && (z_127 != t)))
    _fail(t);
  else
    z_127 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  static ATerm a_128 (ATerm t);
  static ATerm a_128 (ATerm t)
  {
    ATerm g_90 = t;
    int h_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_124, r_12, t);
        LocalPopChoice(h_90);
      }
    else
      {
        t = g_90;
        t = Cons_2_0(s_12, a_128, t);
      }
    return(t);
  }
  t = a_128(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((c_128 != NULL) && (c_128 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        c_128 = ATgetFirst((ATermList) t);
      if(((b_128 != NULL) && (b_128 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((d_128 != NULL) && (d_128 != t)))
    _fail(t);
  else
    d_128 = t;
  t = y_128(t);
  {
    static ATerm t_12 (ATerm t);
    static ATerm t_12 (ATerm t)
    {
      ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL;
      if(((e_128 != NULL) && (e_128 != t)))
        _fail(t);
      else
        e_128 = t;
      if(((g_128 != NULL) && (g_128 != t)))
        _fail(t);
      else
        g_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_128), not_null(e_128));
      t = x_128(t);
      if(((f_128 != NULL) && (f_128 != t)))
        _fail(t);
      else
        f_128 = t;
      return(t);
    }
    t = fetch_1_0(t_12, t);
  }
  t = not_null(b_128);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm m_128 = NULL;
  if(((m_128 != NULL) && (m_128 != t)))
    _fail(t);
  else
    m_128 = t;
  return(t);
}
ATerm union_1_0 (ATerm u_128 (ATerm), ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL,l_128 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_128 != NULL) && (j_128 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_128 = ATgetArgument(t, 0);
      if(((i_128 != NULL) && (i_128 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_128 != NULL) && (l_128 != t)))
    _fail(t);
  else
    l_128 = t;
  t = not_null(j_128);
  {
    static ATerm n_128 (ATerm t);
    static ATerm n_128 (ATerm t)
    {
      ATerm i_90 = t;
      int j_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(i_128);
          LocalPopChoice(j_90);
        }
      else
        {
          t = i_90;
          {
            ATerm k_90 = t;
            int l_90 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm u_12 (ATerm t);
                static ATerm u_12 (ATerm t)
                {
                  t = not_null(i_128);
                  return(t);
                }
                t = HdMember_p__2_0(u_128, u_12, t);
                t = n_128(t);
                LocalPopChoice(l_90);
              }
            else
              {
                t = k_90;
                t = Cons_2_0(v_12, n_128, t);
              }
          }
        }
      return(t);
    }
    t = n_128(t);
  }
  if(((k_128 != NULL) && (k_128 != t)))
    _fail(t);
  else
    k_128 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_union_0_0 (ATerm t)
{
  ATerm o_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL,w_128 = NULL,z_128 = NULL,a_129 = NULL,b_129 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((r_128 != NULL) && (r_128 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_128 = ATgetArgument(t, 0);
      if(((s_128 != NULL) && (s_128 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_128 = ATgetArgument(t, 1);
      if(((o_128 != NULL) && (o_128 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_128 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((t_128 != NULL) && (t_128 != t)))
    _fail(t);
  else
    t_128 = t;
  if(((z_128 != NULL) && (z_128 != t)))
    _fail(t);
  else
    z_128 = t;
  if(((b_129 != NULL) && (b_129 != t)))
    _fail(t);
  else
    b_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_128), not_null(s_128));
  {
    ATerm m_90 = t;
    int n_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(n_90);
      }
    else
      {
        t = m_90;
        t = (ATerm) ATempty;
      }
  }
  if(((a_129 != NULL) && (a_129 != t)))
    _fail(t);
  else
    a_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_128), not_null(a_129));
  t = union_0_0(t);
  if(((w_128 != NULL) && (w_128 != t)))
    _fail(t);
  else
    w_128 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(r_128), not_null(s_128), not_null(w_128));
  t = set_0_0(t);
  t = not_null(t_128);
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm r_81, ATerm t)
{
  ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL,f_129 = NULL,g_129 = NULL;
  if(((c_129 != NULL) && (c_129 != t)))
    _fail(t);
  else
    c_129 = t;
  if(((g_129 != NULL) && (g_129 != t)))
    _fail(t);
  else
    g_129 = t;
  if(((f_129 != NULL) && (f_129 != t)))
    _fail(t);
  else
    f_129 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_89, not_null(r_81), (ATerm) ATinsert(ATempty, not_null(f_129)));
  t = table_union_0_0(t);
  t = not_null(r_81);
  if(((e_129 != NULL) && (e_129 != t)))
    _fail(t);
  else
    e_129 = t;
  t = term_o_90;
  if(((d_129 != NULL) && (d_129 != t)))
    _fail(t);
  else
    d_129 = t;
  t = not_null(e_129);
  t = dbg_0_1(not_null(d_129), t);
  t = not_null(c_129);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm h_129 = NULL,i_129 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_129 != NULL) && (h_129 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_129 = ATgetArgument(t, 0);
      if(((i_129 != NULL) && (i_129 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(i_129)), not_null(h_129));
  return(t);
}
ATerm foldr_3_0 (ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm p_90 = t;
  int q_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = k_131(t);
      LocalPopChoice(q_90);
    }
  else
    {
      t = p_90;
      {
        ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL,q_129 = NULL,r_129 = NULL,s_129 = NULL,t_129 = NULL,u_129 = NULL;
        if(((k_129 != NULL) && (k_129 != t)))
          _fail(t);
        else
          k_129 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_129 != NULL) && (l_129 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_129 = ATgetFirst((ATermList) t);
            if(((m_129 != NULL) && (m_129 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              m_129 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(l_129);
        if(((n_129 != NULL) && (n_129 != t)))
          _fail(t);
        else
          n_129 = t;
        t = not_null(m_129);
        if(((o_129 != NULL) && (o_129 != t)))
          _fail(t);
        else
          o_129 = t;
        t = not_null(k_129);
        if(((q_129 != NULL) && (q_129 != t)))
          _fail(t);
        else
          q_129 = t;
        if(((u_129 != NULL) && (u_129 != t)))
          _fail(t);
        else
          u_129 = t;
        t = not_null(n_129);
        t = m_131(t);
        if(((r_129 != NULL) && (r_129 != t)))
          _fail(t);
        else
          r_129 = t;
        t = not_null(u_129);
        if(((t_129 != NULL) && (t_129 != t)))
          _fail(t);
        else
          t_129 = t;
        t = not_null(o_129);
        t = foldr_3_0(k_131, l_131, m_131, t);
        if(((s_129 != NULL) && (s_129 != t)))
          _fail(t);
        else
          s_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_129), not_null(s_129));
        t = l_131(t);
        if(((p_129 != NULL) && (p_129 != t)))
          _fail(t);
        else
          p_129 = t;
      }
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm r_90 = t;
  int s_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, z_12, t);
      LocalPopChoice(s_90);
      t = conc_0_0(t);
    }
  else
    {
      t = r_90;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm t_90 = t;
  int u_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(u_90);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = t_90;
      {
        ATerm y_129 = NULL;
        if(((y_129 != NULL) && (y_129 != t)))
          _fail(t);
        else
          y_129 = t;
      }
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm x_129 = NULL;
  if(((x_129 != NULL) && (x_129 != t)))
    _fail(t);
  else
    x_129 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(w_12, x_12, y_12, t);
  return(t);
}
ATerm map_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  static ATerm z_129 (ATerm t);
  static ATerm z_129 (ATerm t)
  {
    ATerm v_90 = t;
    int w_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(w_90);
      }
    else
      {
        t = v_90;
        t = Cons_2_0(l_124, z_129, t);
      }
    return(t);
  }
  t = z_129(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_130 = NULL;
  static ATerm a_13 (ATerm t);
  static ATerm a_13 (ATerm t)
  {
    ATerm b_130 = NULL,c_130 = NULL,d_130 = NULL;
    if(((b_130 != NULL) && (b_130 != t)))
      _fail(t);
    else
      b_130 = t;
    if(((d_130 != NULL) && (d_130 != t)))
      _fail(t);
    else
      d_130 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_130), not_null(b_130));
    t = table_get_0_0(t);
    if(((c_130 != NULL) && (c_130 != t)))
      _fail(t);
    else
      c_130 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_130), not_null(c_130));
    return(t);
  }
  if(((a_130 != NULL) && (a_130 != t)))
    _fail(t);
  else
    a_130 = t;
  t = table_keys_0_0(t);
  t = map_1_0(a_13, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm h_152 (ATerm), ATerm i_152 (ATerm), ATerm f_82, ATerm t)
{
  t = not_null(f_82);
  t = table_getlist_0_0(t);
  {
    static ATerm b_13 (ATerm t);
    static ATerm b_13 (ATerm t)
    {
      ATerm e_130 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm x_90 = ATgetArgument(t, 0);
          if(((e_130 != NULL) && (e_130 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_130 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(e_130);
      t = h_152(t);
      return(t);
    }
    t = filter_1_0(b_13, t);
  }
  t = flatten_list_0_0(t);
  t = i_152(t);
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm f_130 = NULL,g_130 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_130 != NULL) && (f_130 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_130 = ATgetArgument(t, 0);
      if(((g_130 != NULL) && (g_130 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(f_130), t);
  t = hashtable_get_0_1(not_null(g_130), t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm e_82, ATerm t)
{
  ATerm h_130 = NULL,m_130 = NULL;
  if(((m_130 != NULL) && (m_130 != t)))
    _fail(t);
  else
    m_130 = t;
  if(((h_130 != NULL) && (h_130 != t)))
    _fail(t);
  else
    h_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_82), not_null(h_130));
  t = table_get_0_0(t);
  t = f_152(t);
  t = g_152(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm d_152 (ATerm), ATerm e_152 (ATerm), ATerm t)
{
  ATerm n_130 = NULL,o_130 = NULL,p_130 = NULL;
  if(((n_130 != NULL) && (n_130 != t)))
    _fail(t);
  else
    n_130 = t;
  if(((p_130 != NULL) && (p_130 != t)))
    _fail(t);
  else
    p_130 = t;
  {
    ATerm y_90 = t;
    int z_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL;
        t = not_null(n_130);
        if(((u_130 != NULL) && (u_130 != t)))
          _fail(t);
        else
          u_130 = t;
        t = term_v_89;
        if(((t_130 != NULL) && (t_130 != t)))
          _fail(t);
        else
          t_130 = t;
        t = not_null(u_130);
        t = xtc_query_one_2_1(d_152, e_152, not_null(t_130), t);
        if(((q_130 != NULL) && (q_130 != t)))
          _fail(t);
        else
          q_130 = t;
        t = not_null(n_130);
        if(((s_130 != NULL) && (s_130 != t)))
          _fail(t);
        else
          s_130 = t;
        t = term_w_89;
        if(((r_130 != NULL) && (r_130 != t)))
          _fail(t);
        else
          r_130 = t;
        t = not_null(s_130);
        t = dbg_0_1(not_null(r_130), t);
        t = not_null(q_130);
        LocalPopChoice(z_90);
      }
    else
      {
        t = y_90;
        {
          ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL;
          if(((v_130 != NULL) && (v_130 != t)))
            _fail(t);
          else
            v_130 = t;
          if(((x_130 != NULL) && (x_130 != t)))
            _fail(t);
          else
            x_130 = t;
          t = term_q_15;
          if(((w_130 != NULL) && (w_130 != t)))
            _fail(t);
          else
            w_130 = t;
          t = not_null(x_130);
          t = xtc_query_all_2_1(d_152, e_152, not_null(w_130), t);
          t = xtc_cache_put_0_1(not_null(n_130), t);
        }
      }
  }
  if(((o_130 != NULL) && (o_130 != t)))
    _fail(t);
  else
    o_130 = t;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm r_131 = NULL;
  if(((r_131 != NULL) && (r_131 != t)))
    _fail(t);
  else
    r_131 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm c_0 (ATerm), ATerm t)
{
  ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL;
  if(((b_131 != NULL) && (b_131 != t)))
    _fail(t);
  else
    b_131 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      c_131 = ATgetArgument(t, 0);
      {
        ATerm a_91 = t;
        int b_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_131 = NULL,e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL;
            t = not_null(b_131);
            if(((e_131 != NULL) && (e_131 != t)))
              _fail(t);
            else
              e_131 = t;
            t = not_null(c_131);
            if(((d_131 != NULL) && (d_131 != t)))
              _fail(t);
            else
              d_131 = t;
            t = not_null(b_131);
            if(((h_131 != NULL) && (h_131 != t)))
              _fail(t);
            else
              h_131 = t;
            t = not_null(d_131);
            t = is_list_0_0(t);
            t = not_null(e_131);
            {
              static ATerm c_13 (ATerm t);
              static ATerm c_13 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(d_131), t);
                return(t);
              }
              t = xtc_query_all_2_0(c_13, c_0, t);
            }
            if(((g_131 != NULL) && (g_131 != t)))
              _fail(t);
            else
              g_131 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_131), not_null(g_131));
            LocalPopChoice(b_91);
          }
        else
          {
            t = a_91;
            {
              ATerm n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL;
              t = not_null(b_131);
              if(((o_131 != NULL) && (o_131 != t)))
                _fail(t);
              else
                o_131 = t;
              t = not_null(c_131);
              if(((n_131 != NULL) && (n_131 != t)))
                _fail(t);
              else
                n_131 = t;
              t = not_null(b_131);
              if(((q_131 != NULL) && (q_131 != t)))
                _fail(t);
              else
                q_131 = t;
              t = not_null(n_131);
              t = is_string_0_0(t);
              t = not_null(o_131);
              t = xtc_query_one_2_0(d_13, c_0, t);
              if(((p_131 != NULL) && (p_131 != t)))
                _fail(t);
              else
                p_131 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_131), not_null(p_131));
            }
          }
      }
    }
  else
    {
      ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL,v_131 = NULL,y_131 = NULL,b_132 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((c_131 != NULL) && (c_131 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_131 = ATgetArgument(t, 0);
          if(((a_131 != NULL) && (a_131 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_131 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(b_131);
      if(((u_131 != NULL) && (u_131 != t)))
        _fail(t);
      else
        u_131 = t;
      t = not_null(c_131);
      if(((t_131 != NULL) && (t_131 != t)))
        _fail(t);
      else
        t_131 = t;
      t = not_null(a_131);
      if(((s_131 != NULL) && (s_131 != t)))
        _fail(t);
      else
        s_131 = t;
      t = not_null(b_131);
      if(((b_132 != NULL) && (b_132 != t)))
        _fail(t);
      else
        b_132 = t;
      t = not_null(t_131);
      t = is_string_0_0(t);
      t = not_null(s_131);
      t = is_list_0_0(t);
      t = not_null(u_131);
      {
        static ATerm e_13 (ATerm t);
        static ATerm e_13 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(s_131), t);
          return(t);
        }
        t = xtc_query_one_2_0(e_13, c_0, t);
      }
      if(((y_131 != NULL) && (y_131 != t)))
        _fail(t);
      else
        y_131 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_131), not_null(y_131));
    }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm c_132 = NULL;
  if(((c_132 != NULL) && (c_132 != t)))
    _fail(t);
  else
    c_132 = t;
  t = SSL_getenv(not_null(c_132));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_91 = t;
  int d_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_91;
      t = getenv_0_0(t);
      LocalPopChoice(d_91);
    }
  else
    {
      t = c_91;
      {
        ATerm f_91 = t;
        int g_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(g_91);
          }
        else
          {
            t = f_91;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL;
  if(((g_132 != NULL) && (g_132 != t)))
    _fail(t);
  else
    g_132 = t;
  if(((i_132 != NULL) && (i_132 != t)))
    _fail(t);
  else
    i_132 = t;
  t = xtc_location_0_0(t);
  if(((h_132 != NULL) && (h_132 != t)))
    _fail(t);
  else
    h_132 = t;
  if(((d_132 != NULL) && (d_132 != t)))
    _fail(t);
  else
    d_132 = t;
  t = not_null(g_132);
  if(((f_132 != NULL) && (f_132 != t)))
    _fail(t);
  else
    f_132 = t;
  t = (ATerm) ATempty;
  if(((e_132 != NULL) && (e_132 != t)))
    _fail(t);
  else
    e_132 = t;
  t = not_null(f_132);
  t = xtc_init_0_2(not_null(d_132), not_null(e_132), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  ATerm j_132 = NULL,k_132 = NULL,l_132 = NULL,n_132 = NULL,o_132 = NULL,p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL,f_13 = NULL,g_14 = NULL;
  if(((r_132 != NULL) && (r_132 != t)))
    _fail(t);
  else
    r_132 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((k_132 != NULL) && (k_132 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_132 = ATgetArgument(t, 0);
      if(((l_132 != NULL) && (l_132 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_132 != NULL) && (s_132 != t)))
    _fail(t);
  else
    s_132 = t;
  t = SSLgetAnnotations(not_null(r_132));
  if(((j_132 != NULL) && (j_132 != t)))
    _fail(t);
  else
    j_132 = t;
  t = not_null(k_132);
  t = n_111(t);
  if(((n_132 != NULL) && (n_132 != t)))
    _fail(t);
  else
    n_132 = t;
  t = not_null(l_132);
  t = o_111(t);
  if(((o_132 != NULL) && (o_132 != t)))
    _fail(t);
  else
    o_132 = t;
  if(((q_132 != NULL) && (q_132 != t)))
    _fail(t);
  else
    q_132 = t;
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(n_132), not_null(o_132));
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = SSLsetAnnotations(not_null(f_13), not_null(j_132));
  if(((p_132 != NULL) && (p_132 != t)))
    _fail(t);
  else
    p_132 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm m_111 (ATerm), ATerm t)
{
  ATerm t_132 = NULL,u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL,z_132 = NULL,g_13 = NULL,h_14 = NULL;
  if(((y_132 != NULL) && (y_132 != t)))
    _fail(t);
  else
    y_132 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((u_132 != NULL) && (u_132 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_132 != NULL) && (z_132 != t)))
    _fail(t);
  else
    z_132 = t;
  t = SSLgetAnnotations(not_null(y_132));
  if(((t_132 != NULL) && (t_132 != t)))
    _fail(t);
  else
    t_132 = t;
  t = not_null(u_132);
  t = m_111(t);
  if(((v_132 != NULL) && (v_132 != t)))
    _fail(t);
  else
    v_132 = t;
  if(((x_132 != NULL) && (x_132 != t)))
    _fail(t);
  else
    x_132 = t;
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(v_132));
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = SSLsetAnnotations(not_null(g_13), not_null(t_132));
  if(((w_132 != NULL) && (w_132 != t)))
    _fail(t);
  else
    w_132 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm a_133 = NULL;
  if(((a_133 != NULL) && (a_133 != t)))
    _fail(t);
  else
    a_133 = t;
  t = SSL_is_string(not_null(a_133));
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm e_133 = NULL,f_133 = NULL,g_133 = NULL;
  if(((e_133 != NULL) && (e_133 != t)))
    _fail(t);
  else
    e_133 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(e_133);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_133 != NULL) && (f_133 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_133 = ATgetFirst((ATermList) t);
          if(((g_133 != NULL) && (g_133 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_133 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_133);
    }
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm i_133 = NULL,j_133 = NULL,k_133 = NULL;
  if(((k_133 != NULL) && (k_133 != t)))
    _fail(t);
  else
    k_133 = t;
  if(match_cons(t, sym__2))
    {
      i_133 = ATgetArgument(t, 0);
      j_133 = ATgetArgument(t, 1);
      {
        ATerm h_91 = t;
        int i_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL;
            t = not_null(k_133);
            if(((l_133 != NULL) && (l_133 != t)))
              _fail(t);
            else
              l_133 = t;
            t = not_null(k_133);
            if(((n_133 != NULL) && (n_133 != t)))
              _fail(t);
            else
              n_133 = t;
            t = not_null(l_133);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(l_133));
            LocalPopChoice(i_91);
          }
        else
          {
            t = h_91;
            {
              ATerm j_91 = t;
              int k_91 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL;
                  t = not_null(i_133);
                  if(((p_133 != NULL) && (p_133 != t)))
                    _fail(t);
                  else
                    p_133 = t;
                  t = not_null(j_133);
                  if(((o_133 != NULL) && (o_133 != t)))
                    _fail(t);
                  else
                    o_133 = t;
                  t = not_null(k_133);
                  if(((r_133 != NULL) && (r_133 != t)))
                    _fail(t);
                  else
                    r_133 = t;
                  t = not_null(p_133);
                  t = is_string_0_0(t);
                  t = not_null(o_133);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(p_133), not_null(o_133));
                  LocalPopChoice(k_91);
                }
              else
                {
                  t = j_91;
                  {
                    ATerm l_91 = t;
                    int m_91 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_133 = NULL,t_133 = NULL,v_133 = NULL;
                        t = not_null(i_133);
                        if(((s_133 != NULL) && (s_133 != t)))
                          _fail(t);
                        else
                          s_133 = t;
                        t = not_null(j_133);
                        if(((t_133 != NULL) && (t_133 != t)))
                          _fail(t);
                        else
                          t_133 = t;
                        t = not_null(k_133);
                        if(((v_133 != NULL) && (v_133 != t)))
                          _fail(t);
                        else
                          v_133 = t;
                        t = not_null(s_133);
                        t = is_string_0_0(t);
                        t = not_null(t_133);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(s_133), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_16, (ATerm) ATmakeAppl(sym_String_1, not_null(t_133)))));
                        LocalPopChoice(m_91);
                      }
                    else
                      {
                        t = l_91;
                        {
                          ATerm w_133 = NULL,y_133 = NULL;
                          t = not_null(k_133);
                          if(((w_133 != NULL) && (w_133 != t)))
                            _fail(t);
                          else
                            w_133 = t;
                          t = not_null(k_133);
                          if(((y_133 != NULL) && (y_133 != t)))
                            _fail(t);
                          else
                            y_133 = t;
                          t = not_null(w_133);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(w_133));
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
      ATerm n_91 = t;
      int o_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_133 = NULL,a_134 = NULL,b_134 = NULL;
          t = not_null(k_133);
          if(((z_133 != NULL) && (z_133 != t)))
            _fail(t);
          else
            z_133 = t;
          t = not_null(k_133);
          if(((b_134 != NULL) && (b_134 != t)))
            _fail(t);
          else
            b_134 = t;
          t = not_null(z_133);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(z_133));
          LocalPopChoice(o_91);
        }
      else
        {
          t = n_91;
          {
            ATerm c_134 = NULL,d_134 = NULL;
            t = not_null(k_133);
            if(((c_134 != NULL) && (c_134 != t)))
              _fail(t);
            else
              c_134 = t;
            t = not_null(k_133);
            if(((d_134 != NULL) && (d_134 != t)))
              _fail(t);
            else
              d_134 = t;
            t = not_null(c_134);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(c_134));
          }
        }
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm m_134 = NULL;
  if(((m_134 != NULL) && (m_134 != t)))
    _fail(t);
  else
    m_134 = t;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm n_134 = NULL;
  if(((n_134 != NULL) && (n_134 != t)))
    _fail(t);
  else
    n_134 = t;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm o_134 = NULL;
  if(((o_134 != NULL) && (o_134 != t)))
    _fail(t);
  else
    o_134 = t;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm p_134 = NULL;
  if(((p_134 != NULL) && (p_134 != t)))
    _fail(t);
  else
    p_134 = t;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm q_134 = NULL;
  if(((q_134 != NULL) && (q_134 != t)))
    _fail(t);
  else
    q_134 = t;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm r_134 = NULL;
  if(((r_134 != NULL) && (r_134 != t)))
    _fail(t);
  else
    r_134 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm b_0 (ATerm), ATerm t)
{
  ATerm p_91 = t;
  int s_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_91 = t;
      if((PushChoice() == 0))
        {
          ATerm y_91 = t;
          int c_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(h_13, t);
              LocalPopChoice(c_92);
            }
          else
            {
              t = y_91;
              t = XtcQuery_2_0(i_13, j_13, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_91;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(b_0, t);
      LocalPopChoice(s_91);
    }
  else
    {
      t = p_91;
      {
        ATerm d_92 = t;
        int k_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(k_13, t);
            LocalPopChoice(k_92);
          }
        else
          {
            t = d_92;
            t = XtcQuery_2_0(l_13, m_13, t);
          }
      }
      {
        ATerm l_92 = t;
        int m_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(b_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(m_92);
          }
        else
          {
            t = l_92;
            {
              ATerm s_134 = NULL,t_134 = NULL;
              if(((s_134 != NULL) && (s_134 != t)))
                _fail(t);
              else
                s_134 = t;
              if(((t_134 != NULL) && (t_134 != t)))
                _fail(t);
              else
                t_134 = t;
              t = not_null(s_134);
              t = xtc_import_local_0_0(t);
              t = not_null(t_134);
              t = xtc_find_reg_local_1_0(b_0, t);
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
ATerm Cons_2_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm t)
{
  ATerm u_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL,y_134 = NULL,z_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL,n_13 = NULL,i_14 = NULL;
  if(((b_135 != NULL) && (b_135 != t)))
    _fail(t);
  else
    b_135 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((v_134 != NULL) && (v_134 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        v_134 = ATgetFirst((ATermList) t);
      if(((w_134 != NULL) && (w_134 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        w_134 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((c_135 != NULL) && (c_135 != t)))
    _fail(t);
  else
    c_135 = t;
  t = SSLgetAnnotations(not_null(b_135));
  if(((u_134 != NULL) && (u_134 != t)))
    _fail(t);
  else
    u_134 = t;
  t = not_null(v_134);
  t = w_101(t);
  if(((x_134 != NULL) && (x_134 != t)))
    _fail(t);
  else
    x_134 = t;
  t = not_null(w_134);
  t = x_101(t);
  if(((y_134 != NULL) && (y_134 != t)))
    _fail(t);
  else
    y_134 = t;
  if(((a_135 != NULL) && (a_135 != t)))
    _fail(t);
  else
    a_135 = t;
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(y_134)), not_null(x_134));
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  t = SSLsetAnnotations(not_null(n_13), not_null(u_134));
  if(((z_134 != NULL) && (z_134 != t)))
    _fail(t);
  else
    z_134 = t;
  return(t);
}
ATerm filter_1_0 (ATerm m_132 (ATerm), ATerm t)
{
  ATerm n_92 = t;
  int o_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(o_92);
    }
  else
    {
      t = n_92;
      {
        ATerm p_92 = t;
        int s_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_13 (ATerm t);
            static ATerm o_13 (ATerm t)
            {
              t = filter_1_0(m_132, t);
              return(t);
            }
            t = Cons_2_0(m_132, o_13, t);
            LocalPopChoice(s_92);
          }
        else
          {
            t = p_92;
            {
              ATerm e_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL;
              if(((e_135 != NULL) && (e_135 != t)))
                _fail(t);
              else
                e_135 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((g_135 != NULL) && (g_135 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    g_135 = ATgetFirst((ATermList) t);
                  if(((h_135 != NULL) && (h_135 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    h_135 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(h_135);
              if(((i_135 != NULL) && (i_135 != t)))
                _fail(t);
              else
                i_135 = t;
              t = filter_1_0(m_132, t);
            }
          }
      }
    }
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm t_92 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_92;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm j_135 = NULL;
  if(((j_135 != NULL) && (j_135 != t)))
    _fail(t);
  else
    j_135 = t;
  t = filter_1_0(p_13, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm w_92 = t;
  int x_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_135 = NULL;
      if(((l_135 != NULL) && (l_135 != t)))
        _fail(t);
      else
        l_135 = t;
      t = (ATerm) ATinsert(ATempty, term_n_56);
      {
        ATerm z_92 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_92;
          }
      }
      t = not_null(l_135);
      LocalPopChoice(x_92);
      {
        ATerm m_135 = NULL,p_135 = NULL;
        if(((p_135 != NULL) && (p_135 != t)))
          _fail(t);
        else
          p_135 = t;
        t = term_a_93;
        if(((m_135 != NULL) && (m_135 != t)))
          _fail(t);
        else
          m_135 = t;
        t = not_null(p_135);
        t = err_0_1(not_null(m_135), t);
        _fail(t);
      }
    }
  else
    {
      t = w_92;
      {
        ATerm q_135 = NULL;
        if(((q_135 != NULL) && (q_135 != t)))
          _fail(t);
        else
          q_135 = t;
      }
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_n_56;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm r_135 = NULL,s_135 = NULL;
  if(((s_135 != NULL) && (s_135 != t)))
    _fail(t);
  else
    s_135 = t;
  if(((r_135 != NULL) && (r_135 != t)))
    _fail(t);
  else
    r_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_o_56), term_n_18), not_null(r_135));
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(q_13, r_13, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_135 = NULL,v_135 = NULL;
  if(((u_135 != NULL) && (u_135 != t)))
    _fail(t);
  else
    u_135 = t;
  if(match_cons(t, sym_URL_1))
    {
      v_135 = ATgetArgument(t, 0);
      {
        ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL;
        t = not_null(v_135);
        if(((y_135 != NULL) && (y_135 != t)))
          _fail(t);
        else
          y_135 = t;
        t = is_url_http_0_0(t);
        if(((x_135 != NULL) && (x_135 != t)))
          _fail(t);
        else
          x_135 = t;
        if(((w_135 != NULL) && (w_135 != t)))
          _fail(t);
        else
          w_135 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_c_93), not_null(w_135));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm z_135 = NULL,a_136 = NULL;
          t = not_null(u_135);
          if(((a_136 != NULL) && (a_136 != t)))
            _fail(t);
          else
            a_136 = t;
          t = term_o_88;
          t = ReadFromFile_0_0(t);
          if(((z_135 != NULL) && (z_135 != t)))
            _fail(t);
          else
            z_135 = t;
        }
      else
        {
          ATerm b_136 = NULL,c_136 = NULL,d_136 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((v_135 != NULL) && (v_135 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_135 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(v_135);
          if(((b_136 != NULL) && (b_136 != t)))
            _fail(t);
          else
            b_136 = t;
          t = not_null(u_135);
          if(((d_136 != NULL) && (d_136 != t)))
            _fail(t);
          else
            d_136 = t;
          t = not_null(b_136);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((c_136 != NULL) && (c_136 != t)))
            _fail(t);
          else
            c_136 = t;
        }
    }
  return(t);
}
ATerm xtc_load_url_0_0 (ATerm t)
{
  ATerm e_136 = NULL;
  if(((e_136 != NULL) && (e_136 != t)))
    _fail(t);
  else
    e_136 = t;
  {
    ATerm d_93 = t;
    int e_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_136 = NULL,l_136 = NULL;
        t = not_null(e_136);
        if(((l_136 != NULL) && (l_136 != t)))
          _fail(t);
        else
          l_136 = t;
        t = not_null(e_136);
        if(((k_136 != NULL) && (k_136 != t)))
          _fail(t);
        else
          k_136 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(k_136));
        t = read_from_0_0(t);
        LocalPopChoice(e_93);
      }
    else
      {
        t = d_93;
        {
          ATerm m_136 = NULL,n_136 = NULL;
          t = not_null(e_136);
          if(((n_136 != NULL) && (n_136 != t)))
            _fail(t);
          else
            n_136 = t;
          t = term_f_93;
          if(((m_136 != NULL) && (m_136 != t)))
            _fail(t);
          else
            m_136 = t;
          t = not_null(n_136);
          t = err_0_1(not_null(m_136), t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm o_136 = NULL,p_136 = NULL,q_136 = NULL,r_136 = NULL,s_136 = NULL;
  if(((q_136 != NULL) && (q_136 != t)))
    _fail(t);
  else
    q_136 = t;
  if(((r_136 != NULL) && (r_136 != t)))
    _fail(t);
  else
    r_136 = t;
  t = not_null(q_136);
  if(((s_136 != NULL) && (s_136 != t)))
    _fail(t);
  else
    s_136 = t;
  t = SSL_explode_term(not_null(s_136));
  if(match_cons(t, sym__2))
    {
      ATerm g_93 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_93) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_93 = ATgetArgument(t, 1);
        if(((ATgetType(h_93) == AT_LIST) && !(ATisEmpty(h_93))))
          {
            if(((p_136 != NULL) && (p_136 != ATgetFirst((ATermList) h_93))))
              _fail(ATgetFirst((ATermList) h_93));
            else
              p_136 = ATgetFirst((ATermList) h_93);
            if(((o_136 != NULL) && (o_136 != (ATerm) ATgetNext((ATermList) h_93))))
              _fail((ATerm) ATgetNext((ATermList) h_93));
            else
              o_136 = (ATerm) ATgetNext((ATermList) h_93);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(p_136);
  return(t);
}
ATerm _2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm t)
{
  ATerm t_136 = NULL,u_136 = NULL,v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL,z_136 = NULL,a_137 = NULL,b_137 = NULL,s_13 = NULL,j_14 = NULL;
  if(((a_137 != NULL) && (a_137 != t)))
    _fail(t);
  else
    a_137 = t;
  if(match_cons(t, sym__2))
    {
      if(((u_136 != NULL) && (u_136 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_136 = ATgetArgument(t, 0);
      if(((v_136 != NULL) && (v_136 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_137 != NULL) && (b_137 != t)))
    _fail(t);
  else
    b_137 = t;
  t = SSLgetAnnotations(not_null(a_137));
  if(((t_136 != NULL) && (t_136 != t)))
    _fail(t);
  else
    t_136 = t;
  t = not_null(u_136);
  t = b_102(t);
  if(((w_136 != NULL) && (w_136 != t)))
    _fail(t);
  else
    w_136 = t;
  t = not_null(v_136);
  t = c_102(t);
  if(((x_136 != NULL) && (x_136 != t)))
    _fail(t);
  else
    x_136 = t;
  if(((z_136 != NULL) && (z_136 != t)))
    _fail(t);
  else
    z_136 = t;
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_136), not_null(x_136));
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  t = SSLsetAnnotations(not_null(s_13), not_null(t_136));
  if(((y_136 != NULL) && (y_136 != t)))
    _fail(t);
  else
    y_136 = t;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm s_137 = NULL;
  if(((s_137 != NULL) && (s_137 != t)))
    _fail(t);
  else
    s_137 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm t_137 (ATerm t);
  static ATerm t_137 (ATerm t)
  {
    ATerm i_93 = t;
    int j_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_137 = NULL,h_137 = NULL,i_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL,m_137 = NULL,n_137 = NULL,o_137 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL;
        if(((g_137 != NULL) && (g_137 != t)))
          _fail(t);
        else
          g_137 = t;
        if(match_cons(t, sym__2))
          {
            if(((h_137 != NULL) && (h_137 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              h_137 = ATgetArgument(t, 0);
            if(((k_137 != NULL) && (k_137 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              k_137 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(h_137);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((i_137 != NULL) && (i_137 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              i_137 = ATgetFirst((ATermList) t);
            if(((j_137 != NULL) && (j_137 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              j_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(k_137);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_137 != NULL) && (l_137 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_137 = ATgetFirst((ATermList) t);
            if(((m_137 != NULL) && (m_137 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              m_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(i_137);
        if(((o_137 != NULL) && (o_137 != t)))
          _fail(t);
        else
          o_137 = t;
        t = not_null(j_137);
        if(((n_137 != NULL) && (n_137 != t)))
          _fail(t);
        else
          n_137 = t;
        t = not_null(l_137);
        if(((o_137 != NULL) && (o_137 != t)))
          _fail(t);
        else
          o_137 = t;
        t = not_null(m_137);
        if(((p_137 != NULL) && (p_137 != t)))
          _fail(t);
        else
          p_137 = t;
        t = not_null(g_137);
        if(((r_137 != NULL) && (r_137 != t)))
          _fail(t);
        else
          r_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_137), not_null(p_137));
        t = t_137(t);
        if(((q_137 != NULL) && (q_137 != t)))
          _fail(t);
        else
          q_137 = t;
        LocalPopChoice(j_93);
      }
    else
      {
        t = i_93;
        t = _2_0(t_13, Nil_0_0, t);
      }
    return(t);
  }
  t = t_137(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm u_137 = NULL;
  if(((u_137 != NULL) && (u_137 != t)))
    _fail(t);
  else
    u_137 = t;
  t = SSL_explode_string(not_null(u_137));
  return(t);
}
ATerm string_starts_with_0_1 (ATerm n_43, ATerm t)
{
  ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL,y_137 = NULL,z_137 = NULL;
  if(((v_137 != NULL) && (v_137 != t)))
    _fail(t);
  else
    v_137 = t;
  if(((z_137 != NULL) && (z_137 != t)))
    _fail(t);
  else
    z_137 = t;
  t = explode_string_0_0(t);
  if(((w_137 != NULL) && (w_137 != t)))
    _fail(t);
  else
    w_137 = t;
  t = not_null(z_137);
  if(((y_137 != NULL) && (y_137 != t)))
    _fail(t);
  else
    y_137 = t;
  t = not_null(n_43);
  t = explode_string_0_0(t);
  if(((x_137 != NULL) && (x_137 != t)))
    _fail(t);
  else
    x_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_137), not_null(x_137));
  t = left_match_0_0(t);
  t = not_null(v_137);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm a_138 = NULL;
  if(((a_138 != NULL) && (a_138 != t)))
    _fail(t);
  else
    a_138 = t;
  {
    ATerm k_93 = t;
    int l_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_138 = NULL,c_138 = NULL;
        t = not_null(a_138);
        if(((c_138 != NULL) && (c_138 != t)))
          _fail(t);
        else
          c_138 = t;
        t = term_m_93;
        if(((b_138 != NULL) && (b_138 != t)))
          _fail(t);
        else
          b_138 = t;
        t = not_null(c_138);
        t = string_starts_with_0_1(not_null(b_138), t);
        LocalPopChoice(l_93);
      }
    else
      {
        t = k_93;
        {
          ATerm d_138 = NULL,e_138 = NULL;
          t = not_null(a_138);
          if(((e_138 != NULL) && (e_138 != t)))
            _fail(t);
          else
            e_138 = t;
          t = term_n_93;
          if(((d_138 != NULL) && (d_138 != t)))
            _fail(t);
          else
            d_138 = t;
          t = not_null(e_138);
          t = string_starts_with_0_1(not_null(d_138), t);
        }
      }
  }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm j_138 = NULL;
  if(((j_138 != NULL) && (j_138 != t)))
    _fail(t);
  else
    j_138 = t;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm o_138 = NULL;
  if(((o_138 != NULL) && (o_138 != t)))
    _fail(t);
  else
    o_138 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm g_80, ATerm t)
{
  ATerm h_138 = NULL;
  if(((h_138 != NULL) && (h_138 != t)))
    _fail(t);
  else
    h_138 = t;
  {
    ATerm o_93 = t;
    int p_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_138 = NULL;
        if(((i_138 != NULL) && (i_138 != t)))
          _fail(t);
        else
          i_138 = t;
        t = is_url_http_0_0(t);
        t = not_null(i_138);
        LocalPopChoice(p_93);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = o_93;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm s_93 = t;
    int u_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(u_13, t);
        LocalPopChoice(u_93);
      }
    else
      {
        t = s_93;
        {
          ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL,n_138 = NULL;
          if(((k_138 != NULL) && (k_138 != t)))
            _fail(t);
          else
            k_138 = t;
          if(((l_138 != NULL) && (l_138 != t)))
            _fail(t);
          else
            l_138 = t;
          t = not_null(h_138);
          if(((n_138 != NULL) && (n_138 != t)))
            _fail(t);
          else
            n_138 = t;
          t = term_w_93;
          if(((m_138 != NULL) && (m_138 != t)))
            _fail(t);
          else
            m_138 = t;
          t = not_null(n_138);
          t = notice_0_1(not_null(m_138), t);
          t = not_null(l_138);
          t = xtc_convert_repository_0_0(t);
        }
      }
  }
  t = Repository_1_0(v_13, t);
  t = xtc_aterm2table_0_1(not_null(g_80), t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm hashtable_keys_0_0 (ATerm t)
{
  ATerm p_138 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((p_138 != NULL) && (p_138 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(p_138));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm c_60, ATerm t)
{
  ATerm q_138 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((q_138 != NULL) && (q_138 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(q_138), not_null(c_60));
  return(t);
}
ATerm hashtable_put_0_2 (ATerm z_59, ATerm a_60, ATerm t)
{
  ATerm r_138 = NULL,s_138 = NULL,t_138 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((r_138 != NULL) && (r_138 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(r_138), not_null(z_59), not_null(a_60));
  if(((t_138 != NULL) && (t_138 != t)))
    _fail(t);
  else
    t_138 = t;
  if(((s_138 != NULL) && (s_138 != t)))
    _fail(t);
  else
    s_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(s_138));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_60, ATerm i_60, ATerm t)
{
  ATerm u_138 = NULL,v_138 = NULL;
  t = SSL_hashtable_create(not_null(h_60), not_null(i_60));
  if(((v_138 != NULL) && (v_138 != t)))
    _fail(t);
  else
    v_138 = t;
  if(((u_138 != NULL) && (u_138 != t)))
    _fail(t);
  else
    u_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(u_138));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm w_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL;
  if(((z_138 != NULL) && (z_138 != t)))
    _fail(t);
  else
    z_138 = t;
  t = term_x_93;
  if(((w_138 != NULL) && (w_138 != t)))
    _fail(t);
  else
    w_138 = t;
  t = not_null(z_138);
  if(((y_138 != NULL) && (y_138 != t)))
    _fail(t);
  else
    y_138 = t;
  t = term_z_93;
  if(((x_138 != NULL) && (x_138 != t)))
    _fail(t);
  else
    x_138 = t;
  t = not_null(y_138);
  t = new_hashtable_0_2(not_null(w_138), not_null(x_138), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL;
  if(((a_139 != NULL) && (a_139 != t)))
    _fail(t);
  else
    a_139 = t;
  if(((d_139 != NULL) && (d_139 != t)))
    _fail(t);
  else
    d_139 = t;
  t = new_hashtable_0_0(t);
  if(((b_139 != NULL) && (b_139 != t)))
    _fail(t);
  else
    b_139 = t;
  t = not_null(d_139);
  if(((c_139 != NULL) && (c_139 != t)))
    _fail(t);
  else
    c_139 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(a_139), not_null(b_139), t);
  t = not_null(c_139);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_139 = NULL,f_139 = NULL;
  t = SSL_table_hashtable();
  if(((f_139 != NULL) && (f_139 != t)))
    _fail(t);
  else
    f_139 = t;
  if(((e_139 != NULL) && (e_139 != t)))
    _fail(t);
  else
    e_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(e_139));
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm b_94 = t;
    int d_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(w_56), t);
        LocalPopChoice(d_94);
      }
    else
      {
        t = b_94;
        {
          ATerm g_139 = NULL,h_139 = NULL;
          if(((g_139 != NULL) && (g_139 != t)))
            _fail(t);
          else
            g_139 = t;
          if(((h_139 != NULL) && (h_139 != t)))
            _fail(t);
          else
            h_139 = t;
          t = not_null(w_56);
          t = table_create_0_0(t);
          t = not_null(h_139);
          t = hashtable_get_0_1(not_null(w_56), t);
        }
      }
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm i_139 = NULL;
  if(((i_139 != NULL) && (i_139 != t)))
    _fail(t);
  else
    i_139 = t;
  t = lookup_table_0_1(not_null(i_139), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm j_80, ATerm k_80, ATerm t)
{
  ATerm j_139 = NULL;
  if(((j_139 != NULL) && (j_139 != t)))
    _fail(t);
  else
    j_139 = t;
  {
    ATerm f_94 = t;
    int h_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_15;
        t = table_keys_0_0(t);
        {
          ATerm i_94 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_94;
            }
        }
        LocalPopChoice(h_94);
      }
    else
      {
        t = f_94;
        t = not_null(j_80);
        t = xtc_load_0_1(not_null(k_80), t);
      }
  }
  t = not_null(j_139);
  return(t);
}
ATerm xtc_init_0_1 (ATerm i_80, ATerm t)
{
  ATerm k_139 = NULL,l_139 = NULL;
  if(((l_139 != NULL) && (l_139 != t)))
    _fail(t);
  else
    l_139 = t;
  t = (ATerm) ATempty;
  if(((k_139 != NULL) && (k_139 != t)))
    _fail(t);
  else
    k_139 = t;
  t = not_null(l_139);
  t = xtc_init_0_2(not_null(i_80), not_null(k_139), t);
  return(t);
}
static ATerm j_141 (ATerm z_139, ATerm a_140, ATerm b_140, ATerm c_140, ATerm d_140, ATerm e_140, ATerm t)
{
  ATerm f_140 = NULL,g_140 = NULL,h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL,l_140 = NULL;
  t = not_null(z_139);
  if(((f_140 != NULL) && (f_140 != t)))
    _fail(t);
  else
    f_140 = t;
  t = not_null(a_140);
  if(((g_140 != NULL) && (g_140 != t)))
    _fail(t);
  else
    g_140 = t;
  t = not_null(b_140);
  if(((h_140 != NULL) && (h_140 != t)))
    _fail(t);
  else
    h_140 = t;
  t = not_null(c_140);
  if(((i_140 != NULL) && (i_140 != t)))
    _fail(t);
  else
    i_140 = t;
  t = not_null(d_140);
  if(((j_140 != NULL) && (j_140 != t)))
    _fail(t);
  else
    j_140 = t;
  t = not_null(e_140);
  if(((k_140 != NULL) && (k_140 != t)))
    _fail(t);
  else
    k_140 = t;
  t = not_null(g_140);
  if(((l_140 != NULL) && (l_140 != t)))
    _fail(t);
  else
    l_140 = t;
  if(match_string(t, "-r"))
    {
      t = not_null(l_140);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = not_null(l_140);
    }
  t = not_null(k_140);
  t = xtc_init_0_1(not_null(h_140), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_140), not_null(j_140));
  t = xtc_xtc_call_0_0(t);
  return(t);
}
ATerm xtc_call_0_0 (ATerm t)
{
  ATerm m_140 = NULL,n_140 = NULL,o_140 = NULL,p_140 = NULL,q_140 = NULL,r_140 = NULL,s_140 = NULL,t_140 = NULL,u_140 = NULL,v_140 = NULL,w_140 = NULL;
  if(((m_140 != NULL) && (m_140 != t)))
    _fail(t);
  else
    m_140 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((n_140 != NULL) && (n_140 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        n_140 = ATgetFirst((ATermList) t);
      if(((o_140 != NULL) && (o_140 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(o_140);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((p_140 != NULL) && (p_140 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        p_140 = ATgetFirst((ATermList) t);
      if(((q_140 != NULL) && (q_140 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(q_140);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((r_140 != NULL) && (r_140 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        r_140 = ATgetFirst((ATermList) t);
      if(((s_140 != NULL) && (s_140 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        s_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(s_140);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_140 = ATgetFirst((ATermList) t);
      u_140 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(u_140);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_140 = ATgetFirst((ATermList) t);
          w_140 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(t_140);
          if(match_string(t, "call"))
            {
              t = not_null(p_140);
              if(match_string(t, "call"))
                {
                  ATerm k_94 = t;
                  int m_94 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_140 = NULL,y_140 = NULL,z_140 = NULL;
                      t = not_null(n_140);
                      if(((x_140 != NULL) && (x_140 != t)))
                        _fail(t);
                      else
                        x_140 = t;
                      t = not_null(r_140);
                      if(((y_140 != NULL) && (y_140 != t)))
                        _fail(t);
                      else
                        y_140 = t;
                      t = not_null(s_140);
                      if(((z_140 != NULL) && (z_140 != t)))
                        _fail(t);
                      else
                        z_140 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_140), not_null(z_140));
                      t = xtc_xtc_call_0_0(t);
                      LocalPopChoice(m_94);
                    }
                  else
                    {
                      t = k_94;
                      t = j_141(not_null(n_140), not_null(p_140), not_null(r_140), not_null(v_140), not_null(w_140), not_null(m_140), t);
                    }
                }
              else
                {
                  t = j_141(not_null(n_140), not_null(p_140), not_null(r_140), not_null(v_140), not_null(w_140), not_null(m_140), t);
                }
            }
          else
            {
              ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL;
              t = not_null(p_140);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("call", 0, ATtrue)))
                _fail(t);
              t = not_null(n_140);
              if(((a_141 != NULL) && (a_141 != t)))
                _fail(t);
              else
                a_141 = t;
              t = not_null(r_140);
              if(((b_141 != NULL) && (b_141 != t)))
                _fail(t);
              else
                b_141 = t;
              t = not_null(s_140);
              if(((c_141 != NULL) && (c_141 != t)))
                _fail(t);
              else
                c_141 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_141), not_null(c_141));
              t = xtc_xtc_call_0_0(t);
            }
        }
      else
        {
          ATerm d_141 = NULL,e_141 = NULL,f_141 = NULL;
          t = not_null(p_140);
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("call", 0, ATtrue)))
            _fail(t);
          t = not_null(n_140);
          if(((d_141 != NULL) && (d_141 != t)))
            _fail(t);
          else
            d_141 = t;
          t = not_null(r_140);
          if(((e_141 != NULL) && (e_141 != t)))
            _fail(t);
          else
            e_141 = t;
          t = not_null(s_140);
          if(((f_141 != NULL) && (f_141 != t)))
            _fail(t);
          else
            f_141 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_141), not_null(f_141));
          t = xtc_xtc_call_0_0(t);
        }
    }
  else
    {
      ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL;
      t = not_null(p_140);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("call", 0, ATtrue)))
        _fail(t);
      t = not_null(n_140);
      if(((g_141 != NULL) && (g_141 != t)))
        _fail(t);
      else
        g_141 = t;
      t = not_null(r_140);
      if(((h_141 != NULL) && (h_141 != t)))
        _fail(t);
      else
        h_141 = t;
      t = not_null(s_140);
      if(((i_141 != NULL) && (i_141 != t)))
        _fail(t);
      else
        i_141 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_141), not_null(i_141));
      t = xtc_xtc_call_0_0(t);
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm o_94 = t;
  int q_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_options_0_0(t);
      LocalPopChoice(q_94);
    }
  else
    {
      t = o_94;
      t = verbose_option_0_0(t);
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm k_141 = NULL,l_141 = NULL;
  ATerm r_94 = t;
  int s_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_load_deps_0_0(t);
      t = xtc_reset_0_0(t);
      LocalPopChoice(s_94);
    }
  else
    {
      t = r_94;
      t = term_t_94;
      t = set_config_0_0(t);
    }
  if(((l_141 != NULL) && (l_141 != t)))
    _fail(t);
  else
    l_141 = t;
  t = term_u_94;
  if(((k_141 != NULL) && (k_141 != t)))
    _fail(t);
  else
    k_141 = t;
  t = not_null(l_141);
  t = dbg_0_1(not_null(k_141), t);
  t = xtc_tool_0_0(t);
  return(t);
}
ATerm main_xtc_0_0 (ATerm t)
{
  ATerm v_94 = t;
  int w_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_call_0_0(t);
      LocalPopChoice(w_94);
    }
  else
    {
      t = v_94;
      {
        ATerm x_94 = t;
        int y_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_get_0_0(t);
            LocalPopChoice(y_94);
          }
        else
          {
            t = x_94;
            t = xtc_wrap_2_0(w_13, x_13, t);
          }
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_xtc_0_0(t);
  return(t);
}
