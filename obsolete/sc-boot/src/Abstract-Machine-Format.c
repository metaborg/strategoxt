#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,e_28);
VARDECL(AFun,l_27);
VARDECL(AFun,y_26);
VARDECL(AFun,r_26);
VARDECL(AFun,b_22);
VARDECL(AFun,x_21);
VARDECL(AFun,t_21);
VARDECL(AFun,o_21);
VARDECL(AFun,b_21);
VARDECL(AFun,s_20);
VARDECL(AFun,n_20);
VARDECL(AFun,t_19);
VARDECL(AFun,j_19);
VARDECL(AFun,o_18);
VARDECL(AFun,a_18);
VARDECL(AFun,y_17);
VARDECL(AFun,v_17);
VARDECL(AFun,s_17);
VARDECL(AFun,q_17);
VARDECL(AFun,n_17);
VARDECL(AFun,k_17);
VARDECL(AFun,i_17);
VARDECL(AFun,f_17);
VARDECL(AFun,z_16);
VARDECL(AFun,n_16);
VARDECL(AFun,g_16);
VARDECL(AFun,u_15);
VARDECL(AFun,s_15);
VARDECL(AFun,q_15);
VARDECL(AFun,l_15);
VARDECL(AFun,h_15);
VARDECL(AFun,y_14);
VARDECL(AFun,s_14);
VARDECL(AFun,q_14);
VARDECL(AFun,j_14);
VARDECL(AFun,h_14);
VARDECL(AFun,f_14);
VARDECL(AFun,t_13);
VARDECL(AFun,s_13);
VARDECL(AFun,o_13);
VARDECL(AFun,y_11);
VARDECL(AFun,v_11);
VARDECL(AFun,t_11);
VARDECL(AFun,l_11);
VARDECL(AFun,s_10);
VARDECL(AFun,n_10);
VARDECL(AFun,h_10);
VARDECL(AFun,d_10);
VARDECL(AFun,x_9);
VARDECL(AFun,l_9);
VARDECL(AFun,z_8);
VARDECL(AFun,n_8);
VARDECL(AFun,b_8);
VARDECL(AFun,p_7);
VARDECL(AFun,d_7);
VARDECL(AFun,x_6);
VARDECL(AFun,u_6);
VARDECL(AFun,i_6);
VARDECL(AFun,f_6);
VARDECL(AFun,c_6);
VARDECL(AFun,s_5);
VARDECL(AFun,o_5);
VARDECL(AFun,r_3);
VARDECL(AFun,o_3);
VARDECL(AFun,l_3);
VARDECL(AFun,h_3);
VARDECL(AFun,e_3);
VARDECL(AFun,d_3);
VARDECL(AFun,b_3);
VARDECL(AFun,z_2);
VARDECL(AFun,x_2);
VARDECL(AFun,l_2);
VARDECL(AFun,a_2);
VARDECL(AFun,w_1);
VARDECL(AFun,r_1);
VARDECL(AFun,o_1);
VARDECL(AFun,g_1);
VARDECL(AFun,z_0);
VARDECL(AFun,t_0);
VARDECL(AFun,o_0);
VARDECL(AFun,j_0);
VARDECL(AFun,g_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_x_3);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);
PROCDECL(_stratego_a_4);
PROCDECL(_stratego_b_4);
PROCDECL(_stratego_c_4);
PROCDECL(_stratego_d_4);
PROCDECL(_stratego_e_4);
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_g_4);
PROCDECL(_stratego_h_4);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_j_4);
PROCDECL(_stratego_k_4);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);
PROCDECL(_stratego_n_4);
PROCDECL(_stratego_o_4);
PROCDECL(_stratego_p_4);
PROCDECL(_stratego_q_4);
PROCDECL(_stratego_r_4);
PROCDECL(_stratego_s_4);
PROCDECL(_stratego_t_4);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);
PROCDECL(_stratego_c_5);
PROCDECL(_stratego_d_5);
PROCDECL(_stratego_e_5);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(e_28,ATmakeAFun("Undefined",1,0));
  MOVE(l_27,ATmakeAFun("Statistics",0,0));
  MOVE(y_26,ATmakeAFun("DeclVersion",1,0));
  MOVE(r_26,ATmakeAFun("Verbose",0,0));
  MOVE(b_22,ATmakeAFun("Help",0,0));
  MOVE(x_21,ATmakeAFun("Version",0,0));
  MOVE(t_21,ATmakeAFun("stdin",0,0));
  MOVE(o_21,ATmakeAFun("Input",1,0));
  MOVE(b_21,ATmakeAFun("Binary",0,0));
  MOVE(s_20,ATmakeAFun("stdout",0,0));
  MOVE(n_20,ATmakeAFun("Output",1,0));
  MOVE(t_19,ATmakeAFun("Runtime",1,0));
  MOVE(j_19,ATmakeAFun("Silent",0,0));
  MOVE(o_18,ATmakeAFun("Program",1,0));
  MOVE(a_18,ATmakeAFun("Tset",1,0));
  MOVE(y_17,ATmakeAFun("NotNULLd",2,0));
  MOVE(v_17,ATmakeAFun("Ccontinue",1,0));
  MOVE(s_17,ATmakeAFun("MoveTop",2,0));
  MOVE(q_17,ATmakeAFun("Move",4,0));
  MOVE(n_17,ATmakeAFun("TestReal",4,0));
  MOVE(k_17,ATmakeAFun("TestInt",4,0));
  MOVE(i_17,ATmakeAFun("TestStr",4,0));
  MOVE(f_17,ATmakeAFun("MoveArg",5,0));
  MOVE(z_16,ATmakeAFun("SomeNextSon",1,0));
  MOVE(n_16,ATmakeAFun("Rpush",1,0));
  MOVE(g_16,ATmakeAFun("Label",1,0));
  MOVE(u_15,ATmakeAFun("Iprim",1,0));
  MOVE(s_15,ATmakeAFun("Goto",1,0));
  MOVE(q_15,ATmakeAFun("Epushd",2,0));
  MOVE(l_15,ATmakeAFun("Epopd",2,0));
  MOVE(h_15,ATmakeAFun("Cpush",1,0));
  MOVE(y_14,ATmakeAFun("BuildVard",2,0));
  MOVE(s_14,ATmakeAFun("BuildStr",1,0));
  MOVE(q_14,ATmakeAFun("BuildInt",1,0));
  MOVE(j_14,ATmakeAFun("BuildFun",2,0));
  MOVE(h_14,ATmakeAFun("Arg",1,0));
  MOVE(f_14,ATmakeAFun("AllNextSon",1,0));
  MOVE(t_13,ATmakeAFun("MOVE",2,0));
  MOVE(s_13,ATmakeAFun("TestFunTop",1,0));
  MOVE(o_13,ATmakeAFun("TestFunFC",3,0));
  MOVE(y_11,ATmakeAFun("Ccall",2,0));
  MOVE(v_11,ATmakeAFun("PROC",1,0));
  MOVE(t_11,ATmakeAFun("PROCDECL",1,0));
  MOVE(l_11,ATmakeAFun("VARDECL",2,0));
  MOVE(s_10,ATmakeAFun("Block",1,0));
  MOVE(n_10,ATmakeAFun("ENDPROC",0,0));
  MOVE(h_10,ATmakeAFun("AllBuild",0,0));
  MOVE(d_10,ATmakeAFun("AllInit",0,0));
  MOVE(x_9,ATmakeAFun("Cjump",0,0));
  MOVE(l_9,ATmakeAFun("Cpop",0,0));
  MOVE(z_8,ATmakeAFun("Crestore",0,0));
  MOVE(n_8,ATmakeAFun("IsAppl",0,0));
  MOVE(b_8,ATmakeAFun("OneBuild",0,0));
  MOVE(p_7,ATmakeAFun("OneInit",0,0));
  MOVE(d_7,ATmakeAFun("OneMatchNextSon",0,0));
  MOVE(x_6,ATmakeAFun("OneNextSon",0,0));
  MOVE(u_6,ATmakeAFun("Return",0,0));
  MOVE(i_6,ATmakeAFun("Tdrop",0,0));
  MOVE(f_6,ATmakeAFun("Tdupl",0,0));
  MOVE(c_6,ATmakeAFun("Tduplinv",0,0));
  MOVE(s_5,ATmakeAFun("Tpop",0,0));
  MOVE(o_5,ATmakeAFun("Tpush",0,0));
  MOVE(r_3,ATmakeAFun("TravInit",0,0));
  MOVE(o_3,ATmakeAFun("SomeInit",0,0));
  MOVE(l_3,ATmakeAFun("CounterOK",0,0));
  MOVE(h_3,ATmakeAFun("SomeBuild",0,0));
  MOVE(e_3,ATmakeAFun("Nil",0,0));
  MOVE(d_3,ATmakeAFun("stderr",0,0));
  MOVE(b_3,ATmakeAFun("MakeInt",1,0));
  MOVE(z_2,ATmakeAFun("ATmakeString",1,0));
  MOVE(x_2,ATmakeAFun("Egetd",2,0));
  MOVE(l_2,ATmakeAFun("TNil",0,0));
  MOVE(a_2,ATmakeAFun("TCons",2,0));
  MOVE(w_1,ATmakeAFun("Cons",2,0));
  MOVE(r_1,ATmakeAFun("ATmakeApplN",2,0));
  MOVE(o_1,ATmakeAFun("AppN",2,0));
  MOVE(g_1,ATmakeAFun("App6",7,0));
  MOVE(z_0,ATmakeAFun("App5",6,0));
  MOVE(t_0,ATmakeAFun("App4",5,0));
  MOVE(o_0,ATmakeAFun("App3",4,0));
  MOVE(j_0,ATmakeAFun("App2",3,0));
  MOVE(g_0,ATmakeAFun("App1",2,0));
  MOVE(e_0,ATmakeAFun("App0",1,0));
ENDPROC

PROC(_stratego_s_3)
  Rpush(a_0);
  l_6 :
  Cpush(c_0);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto b_0;
  c_0 :
  Ccontinue(f_0);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(h_0);
  goto l_6;
  h_0 :
  AllBuild();
  goto b_0;
  f_0 :
  Ccontinue(i_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(k_0);
  goto l_6;
  k_0 :
  OneNextSon();
  Rpush(m_0);
  goto l_6;
  m_0 :
  AllBuild();
  goto b_0;
  i_0 :
  Ccontinue(n_0);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(p_0);
  goto l_6;
  p_0 :
  OneNextSon();
  Rpush(q_0);
  goto l_6;
  q_0 :
  OneNextSon();
  Rpush(r_0);
  goto l_6;
  r_0 :
  AllBuild();
  goto b_0;
  n_0 :
  Ccontinue(s_0);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(u_0);
  goto l_6;
  u_0 :
  OneNextSon();
  Rpush(v_0);
  goto l_6;
  v_0 :
  OneNextSon();
  Rpush(w_0);
  goto l_6;
  w_0 :
  OneNextSon();
  Rpush(x_0);
  goto l_6;
  x_0 :
  AllBuild();
  goto b_0;
  s_0 :
  Ccontinue(y_0);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(a_1);
  goto l_6;
  a_1 :
  OneNextSon();
  Rpush(b_1);
  goto l_6;
  b_1 :
  OneNextSon();
  Rpush(c_1);
  goto l_6;
  c_1 :
  OneNextSon();
  Rpush(d_1);
  goto l_6;
  d_1 :
  OneNextSon();
  Rpush(e_1);
  goto l_6;
  e_1 :
  AllBuild();
  goto b_0;
  y_0 :
  Ccontinue(f_1);
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(h_1);
  goto l_6;
  h_1 :
  OneNextSon();
  Rpush(i_1);
  goto l_6;
  i_1 :
  OneNextSon();
  Rpush(j_1);
  goto l_6;
  j_1 :
  OneNextSon();
  Rpush(k_1);
  goto l_6;
  k_1 :
  OneNextSon();
  Rpush(l_1);
  goto l_6;
  l_1 :
  OneNextSon();
  Rpush(m_1);
  goto l_6;
  m_1 :
  AllBuild();
  goto b_0;
  f_1 :
  Ccontinue(n_1);
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(p_1);
  goto l_6;
  p_1 :
  AllBuild();
  goto b_0;
  n_1 :
  Ccontinue(q_1);
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Rpush(s_1);
  m_6 :
  Cpush(u_1);
  Ccall(_stratego_j_5);
  goto t_1;
  u_1 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  goto l_6;
  x_1 :
  OneNextSon();
  Rpush(y_1);
  goto m_6;
  y_1 :
  AllBuild();
  goto v_1;
  t_1 :
  Cpop();
  v_1 :
  Return();
  s_1 :
  AllBuild();
  goto b_0;
  q_1 :
  Ccontinue(z_1);
  _ST_explode_term();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto d_0;
  d_0 :
  TestStr(0,1,"ATmakeList",&&fail);
  Rpush(c_2);
  goto n_6;
  c_2 :
  goto b_2;
  n_6 :
  Return();
  b_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(d_2);
  o_6 :
  Cpush(f_2);
  Ccall(_stratego_j_5);
  goto e_2;
  f_2 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(h_2);
  goto l_6;
  h_2 :
  OneNextSon();
  Rpush(i_2);
  goto o_6;
  i_2 :
  AllBuild();
  goto g_2;
  e_2 :
  Cpop();
  g_2 :
  Return();
  d_2 :
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto l_0;
  l_0 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(k_2);
  goto p_6;
  k_2 :
  goto j_2;
  p_6 :
  Return();
  j_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto b_0;
  z_1 :
  Ccontinue(m_2);
  _ST_explode_term();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto i_3;
  i_3 :
  TestStr(0,1,"ATmakeReal",&&fail);
  Rpush(o_2);
  goto q_6;
  o_2 :
  goto n_2;
  q_6 :
  Return();
  n_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_3);
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto l_5;
  l_5 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(q_2);
  goto r_6;
  q_2 :
  goto p_2;
  r_6 :
  Return();
  p_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto b_0;
  m_2 :
  Ccontinue(r_2);
  _ST_explode_term();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto n_5;
  n_5 :
  TestStr(0,1,"ATmakeInt",&&fail);
  Rpush(t_2);
  goto s_6;
  t_2 :
  goto s_2;
  s_6 :
  Return();
  s_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto p_5;
  p_5 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(v_2);
  goto t_6;
  v_2 :
  goto u_2;
  t_6 :
  Return();
  u_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto b_0;
  r_2 :
  Ccontinue(w_2);
  TestFunTop(x_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto b_0;
  w_2 :
  Ccontinue(y_2);
  TestFunTop(z_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto b_0;
  y_2 :
  Ccontinue(a_3);
  TestFunTop(b_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto b_0;
  a_3 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("Not a build-term-expression: "),(ATerm)ATmakeAppl2(w_1,Egetd(0,1),(ATerm)ATmakeAppl0(e_3))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_w_4);
  Epopd(0,1);
  Tpop();
  goto c_3;
  b_0 :
  Cpop();
  c_3 :
  Return();
  a_0 :
ENDPROC

PROC(_stratego_t_3)
  _ST_is_int();
ENDPROC

PROC(_stratego_u_3)
  _ST_is_string();
ENDPROC

PROC(_stratego_v_3)
  _ST_is_real();
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_7;
  a_7 :
  TestFunFC(h_3,&&fail,Egetd(0,1));
  Rpush(g_3);
  goto c_7;
  g_3 :
  goto f_3;
  c_7 :
  Return();
  f_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_7;
  e_7 :
  TestFunFC(l_3,&&fail,Egetd(0,1));
  Rpush(k_3);
  goto g_7;
  k_3 :
  goto j_3;
  g_7 :
  Return();
  j_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_7;
  i_7 :
  TestFunFC(o_3,&&fail,Egetd(0,1));
  Rpush(n_3);
  goto k_7;
  n_3 :
  goto m_3;
  k_7 :
  Return();
  m_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_7;
  m_7 :
  TestFunFC(r_3,&&fail,Egetd(0,1));
  Rpush(q_3);
  goto o_7;
  q_3 :
  goto p_3;
  o_7 :
  Return();
  p_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_7;
  q_7 :
  TestFunFC(o_5,&&fail,Egetd(0,1));
  Rpush(m_5);
  goto s_7;
  m_5 :
  goto k_5;
  s_7 :
  Return();
  k_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_7;
  u_7 :
  TestFunFC(s_5,&&fail,Egetd(0,1));
  Rpush(r_5);
  goto w_7;
  r_5 :
  goto q_5;
  w_7 :
  Return();
  q_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_7;
  y_7 :
  TestFunFC(c_6,&&fail,Egetd(0,1));
  Rpush(u_5);
  goto a_8;
  u_5 :
  goto t_5;
  a_8 :
  Return();
  t_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_8;
  c_8 :
  TestFunFC(f_6,&&fail,Egetd(0,1));
  Rpush(e_6);
  goto e_8;
  e_6 :
  goto d_6;
  e_8 :
  Return();
  d_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_8;
  g_8 :
  TestFunFC(i_6,&&fail,Egetd(0,1));
  Rpush(h_6);
  goto i_8;
  h_6 :
  goto g_6;
  i_8 :
  Return();
  g_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_8;
  k_8 :
  TestFunFC(u_6,&&fail,Egetd(0,1));
  Rpush(k_6);
  goto m_8;
  k_6 :
  goto j_6;
  m_8 :
  Return();
  j_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_8;
  o_8 :
  TestFunFC(x_6,&&fail,Egetd(0,1));
  Rpush(w_6);
  goto q_8;
  w_6 :
  goto v_6;
  q_8 :
  Return();
  v_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_8;
  s_8 :
  TestFunFC(d_7,&&fail,Egetd(0,1));
  Rpush(z_6);
  goto u_8;
  z_6 :
  goto y_6;
  u_8 :
  Return();
  y_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_8;
  w_8 :
  TestFunFC(p_7,&&fail,Egetd(0,1));
  Rpush(l_7);
  goto y_8;
  l_7 :
  goto h_7;
  y_8 :
  Return();
  h_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_9;
  a_9 :
  TestFunFC(b_8,&&fail,Egetd(0,1));
  Rpush(x_7);
  goto c_9;
  x_7 :
  goto t_7;
  c_9 :
  Return();
  t_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_9;
  e_9 :
  TestFunFC(n_8,&&fail,Egetd(0,1));
  Rpush(j_8);
  goto g_9;
  j_8 :
  goto f_8;
  g_9 :
  Return();
  f_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_9;
  i_9 :
  TestFunFC(z_8,&&fail,Egetd(0,1));
  Rpush(v_8);
  goto k_9;
  v_8 :
  goto r_8;
  k_9 :
  Return();
  r_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_9;
  m_9 :
  TestFunFC(l_9,&&fail,Egetd(0,1));
  Rpush(h_9);
  goto o_9;
  h_9 :
  goto d_9;
  o_9 :
  Return();
  d_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_9;
  q_9 :
  TestFunFC(x_9,&&fail,Egetd(0,1));
  Rpush(t_9);
  goto s_9;
  t_9 :
  goto p_9;
  s_9 :
  Return();
  p_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_9;
  u_9 :
  TestFunFC(d_10,&&fail,Egetd(0,1));
  Rpush(b_10);
  goto w_9;
  b_10 :
  goto a_10;
  w_9 :
  Return();
  a_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_9;
  y_9 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  Rpush(g_10);
  goto c_10;
  g_10 :
  goto f_10;
  c_10 :
  Return();
  f_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_10;
  e_10 :
  TestFunFC(n_10,&&fail,Egetd(0,1));
  Rpush(m_10);
  goto j_10;
  m_10 :
  goto k_10;
  j_10 :
  Return();
  k_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_4)
  Epushd(0,1);
  Rpush(o_10);
  n_11 :
  Cpush(r_10);
  TestFunTop(s_10);
  TravInit();
  OneNextSon();
  Rpush(t_10);
  o_11 :
  Cpush(e_11);
  Ccall(_stratego_j_5);
  goto u_10;
  e_11 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(g_11);
  goto n_11;
  g_11 :
  OneNextSon();
  Rpush(h_11);
  goto o_11;
  h_11 :
  AllBuild();
  goto f_11;
  u_10 :
  Cpop();
  f_11 :
  Return();
  t_10 :
  AllBuild();
  goto q_10;
  r_10 :
  Ccontinue(i_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto l_10;
  l_10 :
  TestFunFC(l_11,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_11);
  goto p_11;
  k_11 :
  goto j_11;
  p_11 :
  Move(0,1,1,2);
  Return();
  j_11 :
  Epopd(1,3);
  goto q_10;
  i_11 :
  Ccontinue(m_11);
  TestFunTop(t_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  m_11 :
  Ccontinue(u_11);
  TestFunTop(v_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  u_11 :
  Ccontinue(w_11);
  Ccall(_stratego_q_4);
  goto q_10;
  w_11 :
  Ccontinue(x_11);
  TestFunTop(y_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  goto q_10;
  x_11 :
  Ccontinue(c_12);
  Epushd(1,4);
  MoveTop(1,2);
  goto p_10;
  p_10 :
  TestFunFC(o_13,&&s_12,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,1,1,2,2);
  Rpush(p_12);
  goto q_11;
  s_12 :
  TestFunFC(s_13,&&r_13,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_12);
  goto r_11;
  r_13 :
  TestFunFC(t_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  Rpush(p_12);
  goto s_11;
  p_12 :
  goto m_12;
  q_11 :
  Return();
  r_11 :
  Return();
  s_11 :
  Return();
  m_12 :
  Epopd(1,4);
  goto q_10;
  c_12 :
  Ccontinue(u_13);
  Ccall(_stratego_p_4);
  goto q_10;
  u_13 :
  Ccontinue(v_13);
  Ccall(_stratego_o_4);
  goto q_10;
  v_13 :
  Ccontinue(d_14);
  TestFunTop(f_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  d_14 :
  Ccontinue(g_14);
  TestFunTop(h_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  g_14 :
  Ccontinue(i_14);
  TestFunTop(j_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  i_14 :
  Ccontinue(p_14);
  TestFunTop(q_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  p_14 :
  Ccontinue(r_14);
  TestFunTop(s_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  r_14 :
  Ccontinue(v_14);
  TestFunTop(y_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  v_14 :
  Ccontinue(z_14);
  Ccall(_stratego_n_4);
  goto q_10;
  z_14 :
  Ccontinue(a_15);
  Ccall(_stratego_m_4);
  goto q_10;
  a_15 :
  Ccontinue(b_15);
  TestFunTop(h_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  b_15 :
  Ccontinue(j_15);
  Ccall(_stratego_l_4);
  goto q_10;
  j_15 :
  Ccontinue(k_15);
  TestFunTop(l_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  k_15 :
  Ccontinue(n_15);
  TestFunTop(q_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  n_15 :
  Ccontinue(r_15);
  TestFunTop(s_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  r_15 :
  Ccontinue(t_15);
  TestFunTop(u_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  t_15 :
  Ccontinue(y_15);
  Ccall(_stratego_k_4);
  goto q_10;
  y_15 :
  Ccontinue(c_16);
  Ccall(_stratego_k_4);
  goto q_10;
  c_16 :
  Ccontinue(d_16);
  Ccall(_stratego_k_4);
  goto q_10;
  d_16 :
  Ccontinue(e_16);
  Ccall(_stratego_k_4);
  goto q_10;
  e_16 :
  Ccontinue(f_16);
  TestFunTop(g_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  f_16 :
  Ccontinue(h_16);
  Ccall(_stratego_j_4);
  goto q_10;
  h_16 :
  Ccontinue(i_16);
  Ccall(_stratego_i_4);
  goto q_10;
  i_16 :
  Ccontinue(j_16);
  Ccall(_stratego_h_4);
  goto q_10;
  j_16 :
  Ccontinue(k_16);
  Ccall(_stratego_g_4);
  goto q_10;
  k_16 :
  Ccontinue(l_16);
  Ccall(_stratego_f_4);
  goto q_10;
  l_16 :
  Ccontinue(m_16);
  TestFunTop(n_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  m_16 :
  Ccontinue(o_16);
  Ccall(_stratego_e_4);
  goto q_10;
  o_16 :
  Ccontinue(p_16);
  Ccall(_stratego_d_4);
  goto q_10;
  p_16 :
  Ccontinue(q_16);
  Ccall(_stratego_c_4);
  goto q_10;
  q_16 :
  Ccontinue(r_16);
  Ccall(_stratego_b_4);
  goto q_10;
  r_16 :
  Ccontinue(t_16);
  Ccall(_stratego_a_4);
  goto q_10;
  t_16 :
  Ccontinue(u_16);
  Ccall(_stratego_z_3);
  goto q_10;
  u_16 :
  Ccontinue(w_16);
  Ccall(_stratego_y_3);
  goto q_10;
  w_16 :
  Ccontinue(x_16);
  TestFunTop(z_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  x_16 :
  Ccontinue(a_17);
  Ccall(_stratego_x_3);
  goto q_10;
  a_17 :
  Ccontinue(c_17);
  Ccall(_stratego_w_3);
  goto q_10;
  c_17 :
  Ccontinue(d_17);
  TestFunTop(f_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  d_17 :
  Ccontinue(g_17);
  TestFunTop(i_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  g_17 :
  Ccontinue(j_17);
  TestFunTop(k_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  j_17 :
  Ccontinue(m_17);
  TestFunTop(n_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_v_3);
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  m_17 :
  Ccontinue(o_17);
  TestFunTop(q_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  o_17 :
  Ccontinue(r_17);
  TestFunTop(s_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  r_17 :
  Ccontinue(u_17);
  TestFunTop(v_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  AllBuild();
  goto q_10;
  u_17 :
  Ccontinue(w_17);
  TestFunTop(y_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto q_10;
  w_17 :
  Ccontinue(z_17);
  TestFunTop(a_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto q_10;
  z_17 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("Not an instruction: "),(ATerm)ATmakeAppl2(w_1,Egetd(1,1),(ATerm)ATmakeAppl0(e_3))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_w_4);
  Epopd(1,1);
  Tpop();
  goto c_18;
  q_10 :
  Cpop();
  c_18 :
  Return();
  o_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_11;
  z_11 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(f_18);
  goto b_12;
  f_18 :
  goto d_18;
  b_12 :
  Return();
  d_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,1);
  Tdupl();
  Rpush(g_18);
  k_12 :
  Cpush(j_18);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_12;
  d_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_12;
  e_12 :
  TestFunFC(o_18,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_18);
  goto l_12;
  m_18 :
  goto l_18;
  l_12 :
  Move(0,1,1,3);
  Return();
  l_18 :
  Epopd(1,4);
  goto i_18;
  j_18 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_18);
  goto k_12;
  x_18 :
  AllBuild();
  goto w_18;
  i_18 :
  Cpop();
  w_18 :
  Return();
  g_18 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("usage : "),(ATerm)ATmakeAppl2(w_1,Egetd(0,1),(ATerm)ATmakeAppl2(w_1,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(e_3)))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_w_4);
  Tset(MakeInt(1));
  Ccall(_stratego_v_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_4)
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(e_3)),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_w_4);
  Tset(MakeInt(1));
  Ccall(_stratego_v_4);
ENDPROC

PROC(_stratego_v_4)
  _ST_exit();
ENDPROC

PROC(_stratego_w_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,2);
  Tdupl();
  Cpush(a_19);
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Cpush(b_19);
  Tdupl();
  Rpush(c_19);
  i_13 :
  Cpush(f_19);
  Epushd(1,3);
  MoveTop(1,1);
  goto n_12;
  n_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_12;
  o_12 :
  TestFunFC(j_19,&&fail,Egetd(1,2));
  Rpush(h_19);
  goto j_13;
  h_19 :
  goto g_19;
  j_13 :
  Return();
  g_19 :
  Epopd(1,3);
  goto e_19;
  f_19 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_19);
  goto i_13;
  l_19 :
  AllBuild();
  goto k_19;
  e_19 :
  Cpop();
  k_19 :
  Return();
  c_19 :
  Cpop();
  Crestore();
  Cjump();
  b_19 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(m_19);
  k_13 :
  Cpush(p_19);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_12;
  q_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_12;
  r_12 :
  TestFunFC(t_19,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_19);
  goto l_13;
  r_19 :
  goto q_19;
  l_13 :
  Move(0,2,1,3);
  Return();
  q_19 :
  Epopd(1,4);
  goto o_19;
  p_19 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_19);
  goto k_13;
  v_19 :
  AllBuild();
  goto u_19;
  o_19 :
  Cpop();
  u_19 :
  Return();
  m_19 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(w_19);
  m_13 :
  Cpush(z_19);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_12;
  t_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_12;
  u_12 :
  TestFunFC(o_18,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_20);
  goto n_13;
  b_20 :
  goto a_20;
  n_13 :
  Move(0,1,1,3);
  Return();
  a_20 :
  Epopd(1,4);
  goto x_19;
  z_19 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_20);
  goto m_13;
  d_20 :
  AllBuild();
  goto c_20;
  x_19 :
  Cpop();
  c_20 :
  Return();
  w_19 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,Egetd(0,1),(ATerm)ATmakeAppl2(w_1,ATmakeString(" ("),(ATerm)ATmakeAppl2(w_1,Egetd(0,2),(ATerm)ATmakeAppl2(w_1,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(e_3))))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_w_4);
  goto z_18;
  a_19 :
  goto e_20;
  z_18 :
  Cpop();
  e_20 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_v_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_z_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Cpush(h_20);
  Rpush(i_20);
  n_14 :
  Cpush(k_20);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_13;
  p_13 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_13;
  q_13 :
  TestFunFC(n_20,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_20);
  goto o_14;
  m_20 :
  goto l_20;
  o_14 :
  Move(0,1,1,3);
  Return();
  l_20 :
  Epopd(1,4);
  goto j_20;
  k_20 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_20);
  goto n_14;
  q_20 :
  AllBuild();
  goto p_20;
  j_20 :
  Cpop();
  p_20 :
  Return();
  i_20 :
  goto f_20;
  h_20 :
  Tset((ATerm)ATmakeAppl0(s_20));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(s_20));
  MoveTop(0,1);
  Tpop();
  goto r_20;
  f_20 :
  Cpop();
  r_20 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_2,Egetd(0,1),(ATerm)ATmakeAppl2(a_2,Egetd(1,1),(ATerm)ATmakeAppl0(l_2))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  Cpush(u_20);
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(v_20);
  t_14 :
  Cpush(y_20);
  Epushd(1,3);
  MoveTop(1,1);
  goto w_13;
  w_13 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_13;
  x_13 :
  TestFunFC(b_21,&&fail,Egetd(1,2));
  Rpush(a_21);
  goto u_14;
  a_21 :
  goto z_20;
  u_14 :
  Return();
  z_20 :
  Epopd(1,3);
  goto x_20;
  y_20 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_21);
  goto t_14;
  d_21 :
  AllBuild();
  goto c_21;
  x_20 :
  Cpop();
  c_21 :
  Return();
  v_20 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_4);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  goto t_20;
  u_20 :
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_4);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  goto f_21;
  t_20 :
  Cpop();
  f_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_c_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,3);
  Tdupl();
  Cpush(h_21);
  Rpush(i_21);
  o_15 :
  Cpush(k_21);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_14;
  w_14 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_14;
  x_14 :
  TestFunFC(o_21,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_21);
  goto p_15;
  n_21 :
  goto m_21;
  p_15 :
  Move(0,1,1,3);
  Return();
  m_21 :
  Epopd(1,4);
  goto j_21;
  k_21 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_21);
  goto o_15;
  r_21 :
  AllBuild();
  goto p_21;
  j_21 :
  Cpop();
  p_21 :
  Return();
  i_21 :
  goto g_21;
  h_21 :
  Tset((ATerm)ATmakeAppl0(t_21));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(t_21));
  MoveTop(0,1);
  Tpop();
  goto s_21;
  g_21 :
  Cpop();
  s_21 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_c_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_2,Egetd(0,2),(ATerm)ATmakeAppl2(a_2,Egetd(0,3),(ATerm)ATmakeAppl0(l_2))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_15;
  v_15 :
  TestFunFC(x_21,&&fail,Egetd(0,1));
  Rpush(w_21);
  goto x_15;
  w_21 :
  goto u_21;
  x_15 :
  Return();
  u_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_15;
  z_15 :
  TestFunFC(b_22,&&fail,Egetd(0,1));
  Rpush(z_21);
  goto b_16;
  z_21 :
  goto y_21;
  b_16 :
  Return();
  y_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_5)
  _ST_table_put();
ENDPROC

PROC(_stratego_h_5)
  _ST_create_table();
ENDPROC

PROC(_stratego_i_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto p_18;
  p_18 :
  TestFunFC(w_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_18;
  q_18 :
  TestFunFC(w_1,&&e_22,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(h_22);
  Rpush(y_22);
  goto i_22;
  y_22 :
  goto g_22;
  h_22 :
  Ccontinue(a_23);
  Rpush(c_23);
  goto j_22;
  c_23 :
  goto g_22;
  a_23 :
  Ccontinue(e_23);
  Rpush(g_23);
  goto k_22;
  g_23 :
  goto g_22;
  e_23 :
  Ccontinue(i_23);
  Rpush(j_23);
  goto l_22;
  j_23 :
  goto g_22;
  i_23 :
  Ccontinue(l_23);
  Rpush(m_23);
  goto m_22;
  m_23 :
  goto g_22;
  l_23 :
  Ccontinue(o_23);
  Rpush(p_23);
  goto n_22;
  p_23 :
  goto g_22;
  o_23 :
  Ccontinue(q_23);
  Rpush(s_23);
  goto o_22;
  s_23 :
  goto g_22;
  q_23 :
  Ccontinue(t_23);
  Rpush(v_23);
  goto p_22;
  v_23 :
  goto g_22;
  t_23 :
  Ccontinue(w_23);
  Rpush(y_23);
  goto q_22;
  y_23 :
  goto g_22;
  w_23 :
  Ccontinue(a_24);
  Rpush(c_24);
  goto r_22;
  c_24 :
  goto g_22;
  a_24 :
  Ccontinue(e_24);
  Rpush(g_24);
  goto s_22;
  g_24 :
  goto g_22;
  e_24 :
  Ccontinue(h_24);
  Rpush(l_24);
  goto t_22;
  l_24 :
  goto g_22;
  h_24 :
  Ccontinue(m_24);
  Rpush(o_24);
  goto u_22;
  o_24 :
  goto g_22;
  m_24 :
  Ccontinue(p_24);
  Rpush(r_24);
  goto v_22;
  r_24 :
  goto g_22;
  p_24 :
  Rpush(x_24);
  goto w_22;
  x_24 :
  goto s_24;
  g_22 :
  Cpop();
  s_24 :
  goto d_22;
  e_22 :
  Cpush(c_25);
  Rpush(e_25);
  goto i_22;
  e_25 :
  goto b_25;
  c_25 :
  Ccontinue(o_25);
  Rpush(p_25);
  goto j_22;
  p_25 :
  goto b_25;
  o_25 :
  Ccontinue(q_25);
  Rpush(t_25);
  goto k_22;
  t_25 :
  goto b_25;
  q_25 :
  Ccontinue(w_25);
  Rpush(y_25);
  goto l_22;
  y_25 :
  goto b_25;
  w_25 :
  Ccontinue(z_25);
  Rpush(a_26);
  goto m_22;
  a_26 :
  goto b_25;
  z_25 :
  Ccontinue(b_26);
  Rpush(c_26);
  goto s_22;
  c_26 :
  goto b_25;
  b_26 :
  Ccontinue(d_26);
  Rpush(e_26);
  goto t_22;
  e_26 :
  goto b_25;
  d_26 :
  Ccontinue(f_26);
  Rpush(g_26);
  goto u_22;
  g_26 :
  goto b_25;
  f_26 :
  Ccontinue(h_26);
  Rpush(i_26);
  goto v_22;
  i_26 :
  goto b_25;
  h_26 :
  Rpush(k_26);
  goto w_22;
  k_26 :
  goto j_26;
  b_25 :
  Cpop();
  j_26 :
  goto d_22;
  d_22 :
  goto c_22;
  i_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_16;
  s_16 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_26);
  goto x_22;
  m_26 :
  goto l_26;
  x_22 :
  Return();
  l_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_19));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(j_19),Egetd(0,5)));
  Return();
  j_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_16;
  v_16 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(o_26);
  goto z_22;
  o_26 :
  goto n_26;
  z_22 :
  Return();
  n_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_19));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(j_19),Egetd(0,5)));
  Return();
  k_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_16;
  y_16 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(q_26);
  goto b_23;
  q_26 :
  goto p_26;
  b_23 :
  Return();
  p_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_26));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(r_26),Egetd(0,5)));
  Return();
  l_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_17;
  b_17 :
  TestStr(1,1,"-v",&&fail);
  Rpush(t_26);
  goto d_23;
  t_26 :
  goto s_26;
  d_23 :
  Return();
  s_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(x_21),Egetd(0,5)));
  Return();
  m_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_17;
  e_17 :
  TestStr(1,1,"--version",&&fail);
  Rpush(v_26);
  goto f_23;
  v_26 :
  goto u_26;
  f_23 :
  Return();
  u_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(x_21),Egetd(0,5)));
  Return();
  n_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_17;
  h_17 :
  TestStr(1,1,"@version",&&fail);
  Rpush(x_26);
  goto h_23;
  x_26 :
  goto w_26;
  h_23 :
  Return();
  w_26 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(y_26,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(y_26,Egetd(0,1)),Egetd(0,2)));
  Return();
  o_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_17;
  l_17 :
  TestStr(1,1,"-i",&&fail);
  Rpush(a_27);
  goto k_23;
  a_27 :
  goto z_26;
  k_23 :
  Return();
  z_26 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(o_21,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(o_21,Egetd(0,1)),Egetd(0,2)));
  Return();
  p_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_17;
  p_17 :
  TestStr(1,1,"--input",&&fail);
  Rpush(c_27);
  goto n_23;
  c_27 :
  goto b_27;
  n_23 :
  Return();
  b_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(o_21,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(o_21,Egetd(0,1)),Egetd(0,2)));
  Return();
  q_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestStr(1,1,"-o",&&fail);
  Rpush(e_27);
  goto r_23;
  e_27 :
  goto d_27;
  r_23 :
  Return();
  d_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(n_20,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(n_20,Egetd(0,1)),Egetd(0,2)));
  Return();
  r_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_17;
  x_17 :
  TestStr(1,1,"--output",&&fail);
  Rpush(g_27);
  goto u_23;
  g_27 :
  goto f_27;
  u_23 :
  Return();
  f_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(n_20,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(n_20,Egetd(0,1)),Egetd(0,2)));
  Return();
  s_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_18;
  b_18 :
  TestStr(1,1,"-b",&&fail);
  Rpush(i_27);
  goto x_23;
  i_27 :
  goto h_27;
  x_23 :
  Return();
  h_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(b_21),Egetd(0,5)));
  Return();
  t_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_18;
  e_18 :
  TestStr(1,1,"-s",&&fail);
  Rpush(k_27);
  goto z_23;
  k_27 :
  goto j_27;
  z_23 :
  Return();
  j_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_27));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(l_27),Egetd(0,5)));
  Return();
  u_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_18;
  h_18 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_27);
  goto b_24;
  n_27 :
  goto m_27;
  b_24 :
  Return();
  m_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_22));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(b_22),Egetd(0,5)));
  Return();
  v_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_18;
  k_18 :
  TestStr(1,1,"-h",&&fail);
  Rpush(p_27);
  goto d_24;
  p_27 :
  goto o_27;
  d_24 :
  Return();
  o_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_22));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(b_22),Egetd(0,5)));
  Return();
  w_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_18;
  n_18 :
  TestStr(1,1,"-?",&&fail);
  Rpush(r_27);
  goto f_24;
  r_27 :
  goto q_27;
  f_24 :
  Return();
  q_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_22));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(b_22),Egetd(0,5)));
  Return();
  c_22 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_24;
  i_24 :
  TestFunFC(e_3,&&fail,Egetd(0,1));
  Rpush(t_27);
  goto k_24;
  t_27 :
  goto s_27;
  k_24 :
  Return();
  s_27 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  Epushd(0,1);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(o_18,Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(u_27);
  r_25 :
  Cpush(w_27);
  Cpush(y_27);
  Ccall(_stratego_j_5);
  goto x_27;
  y_27 :
  Ccall(_stratego_i_5);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_28);
  goto r_25;
  a_28 :
  AllBuild();
  goto z_27;
  x_27 :
  Cpop();
  z_27 :
  goto v_27;
  w_27 :
  Epushd(1,3);
  MoveTop(1,1);
  goto n_24;
  n_24 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_28);
  goto s_25;
  d_28 :
  goto c_28;
  s_25 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(e_28,Egetd(1,2)),Egetd(1,3)));
  Return();
  c_28 :
  Epopd(1,3);
  goto b_28;
  v_27 :
  Cpop();
  b_28 :
  Return();
  u_27 :
  AllBuild();
  MoveTop(0,1);
  Tdupl();
  Tset(ATmakeString("option-table"));
  Ccall(_stratego_h_5);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_2,ATmakeString("option-table"),(ATerm)ATmakeAppl2(a_2,ATmakeString("options"),(ATerm)ATmakeAppl2(a_2,Egetd(0,1),(ATerm)ATmakeAppl0(l_2)))));
  Ccall(_stratego_g_5);
  Tpop();
  Cpush(g_28);
  Rpush(h_28);
  u_25 :
  Cpush(j_28);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Cpush(l_28);
  Ccall(_stratego_f_5);
  goto k_28;
  l_28 :
  Ccontinue(m_28);
  Epushd(1,2);
  MoveTop(1,1);
  goto q_24;
  q_24 :
  TestFunFC(e_28,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(o_28);
  goto v_25;
  o_28 :
  goto n_28;
  v_25 :
  Return();
  n_28 :
  Epopd(1,2);
  goto k_28;
  m_28 :
  Ccall(_stratego_e_5);
  goto p_28;
  k_28 :
  Cpop();
  p_28 :
  OneNextSon();
  AllBuild();
  goto i_28;
  j_28 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_28);
  goto u_25;
  r_28 :
  AllBuild();
  goto q_28;
  i_28 :
  Cpop();
  q_28 :
  Return();
  h_28 :
  Ccall(_stratego_t_4);
  goto f_28;
  g_28 :
  Ccontinue(s_28);
  Epushd(1,6);
  Ccall(_stratego_d_5);
  Tdupl();
  Ccall(_stratego_b_5);
  Tpop();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_b_5);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto t_24;
  t_24 :
  TestFunFC(a_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto u_24;
  u_24 :
  TestFunFC(a_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto v_24;
  v_24 :
  TestFunFC(l_2,&&fail,Egetd(1,6));
  Rpush(u_28);
  goto x_25;
  u_28 :
  goto t_28;
  x_25 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(t_19,Egetd(1,1)),Egetd(1,3)),(ATerm)ATmakeAppl2(a_2,Egetd(1,5),(ATerm)ATmakeAppl0(l_2))));
  Return();
  t_28 :
  Ccall(_stratego_a_5);
  Ccall(_stratego_x_4);
  Epopd(1,6);
  goto f_28;
  s_28 :
  Ccall(_stratego_u_4);
  goto v_28;
  f_28 :
  Cpop();
  v_28 :
  Epopd(0,1);
ENDPROC

DOIT

