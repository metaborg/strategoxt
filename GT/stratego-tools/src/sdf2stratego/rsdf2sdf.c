#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,w_12);
VARDECL(AFun,v_11);
VARDECL(AFun,y_10);
VARDECL(AFun,o_10);
VARDECL(AFun,a_7);
VARDECL(AFun,s_6);
VARDECL(AFun,o_6);
VARDECL(AFun,d_6);
VARDECL(AFun,g_3);
VARDECL(AFun,y_2);
VARDECL(AFun,s_2);
VARDECL(AFun,z_1);
VARDECL(AFun,r_1);
VARDECL(AFun,i_1);
VARDECL(AFun,h_1);
VARDECL(AFun,g_1);
VARDECL(AFun,d_1);
VARDECL(AFun,c_1);
VARDECL(AFun,w_0);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,h_0);
VARDECL(AFun,f_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_i_3);
PROCDECL(_stratego_j_3);
PROCDECL(_stratego_k_3);
PROCDECL(_stratego_l_3);
PROCDECL(_stratego_m_3);
PROCDECL(_stratego_n_3);
PROCDECL(_stratego_o_3);
PROCDECL(_stratego_p_3);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(w_12,ATmakeAFun("Undefined",1,0));
  MOVE(v_11,ATmakeAFun("Statistics",0,0));
  MOVE(y_10,ATmakeAFun("DeclVersion",1,0));
  MOVE(o_10,ATmakeAFun("Verbose",0,0));
  MOVE(a_7,ATmakeAFun("Help",0,0));
  MOVE(s_6,ATmakeAFun("Version",0,0));
  MOVE(o_6,ATmakeAFun("stdin",0,0));
  MOVE(d_6,ATmakeAFun("Input",1,0));
  MOVE(g_3,ATmakeAFun("Binary",0,0));
  MOVE(y_2,ATmakeAFun("stdout",0,0));
  MOVE(s_2,ATmakeAFun("Output",1,0));
  MOVE(z_1,ATmakeAFun("Runtime",1,0));
  MOVE(r_1,ATmakeAFun("Silent",0,0));
  MOVE(i_1,ATmakeAFun("Nil",0,0));
  MOVE(h_1,ATmakeAFun("stderr",0,0));
  MOVE(g_1,ATmakeAFun("TCons",2,0));
  MOVE(d_1,ATmakeAFun("Program",1,0));
  MOVE(c_1,ATmakeAFun("Cons",2,0));
  MOVE(w_0,ATmakeAFun("TNil",0,0));
  MOVE(j_0,ATmakeAFun("empty-grammar",0,0));
  MOVE(i_0,ATmakeAFun("Strategies",1,0));
  MOVE(h_0,ATmakeAFun("Rules",1,0));
  MOVE(f_0,ATmakeAFun("Overlays",1,0));
  MOVE(d_0,ATmakeAFun("Signature",1,0));
ENDPROC

PROC(_stratego_i_3)
  Epushd(0,2);
  MoveTop(0,1);
  goto p_2;
  p_2 :
  TestFunFC(d_0,&&c_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_0);
  goto e_4;
  c_0 :
  TestFunFC(f_0,&&e_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_0);
  goto f_4;
  e_0 :
  TestFunFC(h_0,&&g_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_0);
  goto g_4;
  g_0 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_0);
  goto h_4;
  b_0 :
  goto a_0;
  e_4 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  f_4 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  g_4 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  h_4 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  a_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_j_3)
  Rpush(k_0);
  i_4 :
  Cpush(m_0);
  Ccall(_stratego_i_3);
  goto l_0;
  m_0 :
  AllInit();
  o_0 :
  AllNextSon(&&p_0);
  Cpush(r_0);
  Rpush(s_0);
  goto i_4;
  s_0 :
  goto q_0;
  r_0 :
  goto t_0;
  q_0 :
  Cpop();
  t_0 :
  goto o_0;
  p_0 :
  AllBuild();
  goto n_0;
  l_0 :
  Cpop();
  n_0 :
  Return();
  k_0 :
ENDPROC

PROC(_stratego_k_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_4;
  k_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto m_4;
  v_0 :
  goto u_0;
  m_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_3)
  Epushd(0,1);
  Tdupl();
  Rpush(x_0);
  v_4 :
  Cpush(z_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_4;
  o_4 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_4;
  p_4 :
  TestFunFC(d_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_1);
  goto w_4;
  b_1 :
  goto a_1;
  w_4 :
  Move(0,1,1,3);
  Return();
  a_1 :
  Epopd(1,4);
  goto y_0;
  z_0 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_1);
  goto v_4;
  f_1 :
  AllBuild();
  goto e_1;
  y_0 :
  Cpop();
  e_1 :
  Return();
  x_0 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(g_1,(ATerm)ATmakeAppl0(h_1),(ATerm)ATmakeAppl2(g_1,(ATerm)ATmakeAppl2(c_1,ATmakeString("usage : "),(ATerm)ATmakeAppl2(c_1,Egetd(0,1),(ATerm)ATmakeAppl2(c_1,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(i_1)))),(ATerm)ATmakeAppl0(w_0))));
  Ccall(_stratego_o_3);
  Tset(MakeInt(1));
  Ccall(_stratego_n_3);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_3)
  Tset((ATerm)ATmakeAppl2(g_1,(ATerm)ATmakeAppl0(h_1),(ATerm)ATmakeAppl2(g_1,(ATerm)ATmakeAppl2(c_1,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(i_1)),(ATerm)ATmakeAppl0(w_0))));
  Ccall(_stratego_o_3);
  Tset(MakeInt(1));
  Ccall(_stratego_n_3);
ENDPROC

PROC(_stratego_n_3)
  _ST_exit();
ENDPROC

PROC(_stratego_o_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_p_3)
  Epushd(0,2);
  Tdupl();
  Cpush(k_1);
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Cpush(l_1);
  Tdupl();
  Rpush(m_1);
  t_5 :
  Cpush(o_1);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_4;
  y_4 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_4;
  z_4 :
  TestFunFC(r_1,&&fail,Egetd(1,2));
  Rpush(q_1);
  goto u_5;
  q_1 :
  goto p_1;
  u_5 :
  Return();
  p_1 :
  Epopd(1,3);
  goto n_1;
  o_1 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_1);
  goto t_5;
  t_1 :
  AllBuild();
  goto s_1;
  n_1 :
  Cpop();
  s_1 :
  Return();
  m_1 :
  Cpop();
  Crestore();
  Cjump();
  l_1 :
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Rpush(u_1);
  v_5 :
  Cpush(w_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_5;
  b_5 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_5;
  c_5 :
  TestFunFC(z_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_1);
  goto w_5;
  y_1 :
  goto x_1;
  w_5 :
  Move(0,2,1,3);
  Return();
  x_1 :
  Epopd(1,4);
  goto v_1;
  w_1 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_2);
  goto v_5;
  b_2 :
  AllBuild();
  goto a_2;
  v_1 :
  Cpop();
  a_2 :
  Return();
  u_1 :
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Rpush(c_2);
  x_5 :
  Cpush(e_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_5;
  e_5 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_5;
  f_5 :
  TestFunFC(d_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_2);
  goto y_5;
  g_2 :
  goto f_2;
  y_5 :
  Move(0,1,1,3);
  Return();
  f_2 :
  Epopd(1,4);
  goto d_2;
  e_2 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_2);
  goto x_5;
  i_2 :
  AllBuild();
  goto h_2;
  d_2 :
  Cpop();
  h_2 :
  Return();
  c_2 :
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(g_1,(ATerm)ATmakeAppl0(h_1),(ATerm)ATmakeAppl2(g_1,(ATerm)ATmakeAppl2(c_1,Egetd(0,1),(ATerm)ATmakeAppl2(c_1,ATmakeString(" ("),(ATerm)ATmakeAppl2(c_1,Egetd(0,2),(ATerm)ATmakeAppl2(c_1,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(i_1))))),(ATerm)ATmakeAppl0(w_0))));
  Ccall(_stratego_o_3);
  goto j_1;
  k_1 :
  goto j_2;
  j_1 :
  Cpop();
  j_2 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_n_3);
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_r_3)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,1);
  Tdupl();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Cpush(l_2);
  Rpush(m_2);
  y_6 :
  Cpush(o_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_6;
  b_6 :
  TestFunFC(s_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_2);
  goto z_6;
  r_2 :
  goto q_2;
  z_6 :
  Move(0,1,1,3);
  Return();
  q_2 :
  Epopd(1,4);
  goto n_2;
  o_2 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_2);
  goto y_6;
  w_2 :
  AllBuild();
  goto t_2;
  n_2 :
  Cpop();
  t_2 :
  Return();
  m_2 :
  goto k_2;
  l_2 :
  Tset((ATerm)ATmakeAppl0(y_2));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(y_2));
  MoveTop(0,1);
  Tpop();
  goto x_2;
  k_2 :
  Cpop();
  x_2 :
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(g_1,Egetd(0,1),(ATerm)ATmakeAppl2(g_1,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  Cpush(a_3);
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Rpush(b_3);
  e_7 :
  Cpush(d_3);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_6;
  h_6 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_6;
  i_6 :
  TestFunFC(g_3,&&fail,Egetd(1,2));
  Rpush(f_3);
  goto f_7;
  f_3 :
  goto e_3;
  f_7 :
  Return();
  e_3 :
  Epopd(1,3);
  goto c_3;
  d_3 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_4);
  goto e_7;
  c_4 :
  AllBuild();
  goto h_3;
  c_3 :
  Cpop();
  h_3 :
  Return();
  b_3 :
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  goto z_2;
  a_3 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_3);
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  goto d_4;
  z_2 :
  Cpop();
  d_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_3)
  _ST_dtime();
ENDPROC

PROC(_stratego_u_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,3);
  Tdupl();
  Cpush(n_4);
  Rpush(x_4);
  z_7 :
  Cpush(d_5);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_7;
  i_7 :
  TestFunFC(d_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_6);
  goto a_8;
  c_6 :
  goto z_5;
  a_8 :
  Move(0,1,1,3);
  Return();
  z_5 :
  Epopd(1,4);
  goto a_5;
  d_5 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_6);
  goto z_7;
  f_6 :
  AllBuild();
  goto e_6;
  a_5 :
  Cpop();
  e_6 :
  Return();
  x_4 :
  goto j_4;
  n_4 :
  Tset((ATerm)ATmakeAppl0(o_6));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(o_6));
  MoveTop(0,1);
  Tpop();
  goto g_6;
  j_4 :
  Cpop();
  g_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_u_3);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(g_1,Egetd(0,2),(ATerm)ATmakeAppl2(g_1,Egetd(0,3),(ATerm)ATmakeAppl0(w_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_8;
  g_8 :
  TestFunFC(s_6,&&fail,Egetd(0,1));
  Rpush(r_6);
  goto i_8;
  r_6 :
  goto q_6;
  i_8 :
  Return();
  q_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_8;
  k_8 :
  TestFunFC(a_7,&&fail,Egetd(0,1));
  Rpush(u_6);
  goto m_8;
  u_6 :
  goto t_6;
  m_8 :
  Return();
  t_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_3)
  _ST_table_put();
ENDPROC

PROC(_stratego_z_3)
  _ST_create_table();
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto e_11;
  e_11 :
  TestFunFC(c_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_11;
  f_11 :
  TestFunFC(c_1,&&d_7,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(j_7);
  Rpush(k_7);
  goto c_15;
  k_7 :
  goto g_7;
  j_7 :
  Ccontinue(l_7);
  Rpush(m_7);
  goto d_15;
  m_7 :
  goto g_7;
  l_7 :
  Ccontinue(s_7);
  Rpush(u_7);
  goto e_15;
  u_7 :
  goto g_7;
  s_7 :
  Ccontinue(v_7);
  Rpush(w_7);
  goto f_15;
  w_7 :
  goto g_7;
  v_7 :
  Ccontinue(y_7);
  Rpush(b_8);
  goto g_15;
  b_8 :
  goto g_7;
  y_7 :
  Ccontinue(c_8);
  Rpush(d_8);
  goto h_15;
  d_8 :
  goto g_7;
  c_8 :
  Ccontinue(e_8);
  Rpush(f_8);
  goto i_15;
  f_8 :
  goto g_7;
  e_8 :
  Ccontinue(j_8);
  Rpush(n_8);
  goto j_15;
  n_8 :
  goto g_7;
  j_8 :
  Ccontinue(o_8);
  Rpush(p_8);
  goto k_15;
  p_8 :
  goto g_7;
  o_8 :
  Ccontinue(q_8);
  Rpush(r_8);
  goto l_15;
  r_8 :
  goto g_7;
  q_8 :
  Ccontinue(s_8);
  Rpush(t_8);
  goto m_15;
  t_8 :
  goto g_7;
  s_8 :
  Ccontinue(u_8);
  Rpush(v_8);
  goto n_15;
  v_8 :
  goto g_7;
  u_8 :
  Ccontinue(w_8);
  Rpush(x_8);
  goto o_15;
  x_8 :
  goto g_7;
  w_8 :
  Ccontinue(y_8);
  Rpush(z_8);
  goto p_15;
  z_8 :
  goto g_7;
  y_8 :
  Rpush(b_9);
  goto q_15;
  b_9 :
  goto a_9;
  g_7 :
  Cpop();
  a_9 :
  goto c_7;
  d_7 :
  Cpush(e_9);
  Rpush(f_9);
  goto c_15;
  f_9 :
  goto c_9;
  e_9 :
  Ccontinue(h_9);
  Rpush(i_9);
  goto d_15;
  i_9 :
  goto c_9;
  h_9 :
  Ccontinue(k_9);
  Rpush(l_9);
  goto e_15;
  l_9 :
  goto c_9;
  k_9 :
  Ccontinue(n_9);
  Rpush(o_9);
  goto f_15;
  o_9 :
  goto c_9;
  n_9 :
  Ccontinue(q_9);
  Rpush(r_9);
  goto g_15;
  r_9 :
  goto c_9;
  q_9 :
  Ccontinue(t_9);
  Rpush(u_9);
  goto m_15;
  u_9 :
  goto c_9;
  t_9 :
  Ccontinue(v_9);
  Rpush(x_9);
  goto n_15;
  x_9 :
  goto c_9;
  v_9 :
  Ccontinue(y_9);
  Rpush(z_9);
  goto o_15;
  z_9 :
  goto c_9;
  y_9 :
  Ccontinue(b_10);
  Rpush(c_10);
  goto p_15;
  c_10 :
  goto c_9;
  b_10 :
  Rpush(f_10);
  goto q_15;
  f_10 :
  goto d_10;
  c_9 :
  Cpop();
  d_10 :
  goto c_7;
  c_7 :
  goto b_7;
  c_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_9;
  d_9 :
  TestStr(1,1,"-S",&&fail);
  Rpush(h_10);
  goto r_15;
  h_10 :
  goto g_10;
  r_15 :
  Return();
  g_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_1));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(r_1),Egetd(0,5)));
  Return();
  d_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_9;
  g_9 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_10);
  goto t_15;
  k_10 :
  goto j_10;
  t_15 :
  Return();
  j_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_1));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(r_1),Egetd(0,5)));
  Return();
  e_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_9;
  j_9 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(n_10);
  goto v_15;
  n_10 :
  goto l_10;
  v_15 :
  Return();
  l_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(o_10),Egetd(0,5)));
  Return();
  f_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_9;
  m_9 :
  TestStr(1,1,"-v",&&fail);
  Rpush(r_10);
  goto x_15;
  r_10 :
  goto q_10;
  x_15 :
  Return();
  q_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_6));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(s_6),Egetd(0,5)));
  Return();
  g_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_9;
  p_9 :
  TestStr(1,1,"--version",&&fail);
  Rpush(u_10);
  goto z_15;
  u_10 :
  goto t_10;
  z_15 :
  Return();
  t_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_6));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(s_6),Egetd(0,5)));
  Return();
  h_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_9;
  s_9 :
  TestStr(1,1,"@version",&&fail);
  Rpush(x_10);
  goto b_16;
  x_10 :
  goto w_10;
  b_16 :
  Return();
  w_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(y_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl1(y_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_9;
  w_9 :
  TestStr(1,1,"-i",&&fail);
  Rpush(a_11);
  goto e_16;
  a_11 :
  goto z_10;
  e_16 :
  Return();
  z_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(d_6,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl1(d_6,Egetd(0,1)),Egetd(0,2)));
  Return();
  j_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_10;
  a_10 :
  TestStr(1,1,"--input",&&fail);
  Rpush(d_11);
  goto h_16;
  d_11 :
  goto b_11;
  h_16 :
  Return();
  b_11 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(d_6,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl1(d_6,Egetd(0,1)),Egetd(0,2)));
  Return();
  k_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_10;
  e_10 :
  TestStr(1,1,"-o",&&fail);
  Rpush(m_11);
  goto k_16;
  m_11 :
  goto l_11;
  k_16 :
  Return();
  l_11 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl1(s_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  l_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_10;
  i_10 :
  TestStr(1,1,"--output",&&fail);
  Rpush(p_11);
  goto n_16;
  p_11 :
  goto o_11;
  n_16 :
  Return();
  o_11 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl1(s_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  m_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_10;
  m_10 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_11);
  goto q_16;
  r_11 :
  goto q_11;
  q_16 :
  Return();
  q_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(g_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(g_3),Egetd(0,5)));
  Return();
  n_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_10;
  p_10 :
  TestStr(1,1,"-s",&&fail);
  Rpush(u_11);
  goto s_16;
  u_11 :
  goto t_11;
  s_16 :
  Return();
  t_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_11));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(v_11),Egetd(0,5)));
  Return();
  o_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_10;
  s_10 :
  TestStr(1,1,"--help",&&fail);
  Rpush(y_11);
  goto u_16;
  y_11 :
  goto w_11;
  u_16 :
  Return();
  w_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(a_7),Egetd(0,5)));
  Return();
  p_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_10;
  v_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(a_12);
  goto w_16;
  a_12 :
  goto z_11;
  w_16 :
  Return();
  z_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(a_7),Egetd(0,5)));
  Return();
  q_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_11;
  c_11 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_12);
  goto y_16;
  d_12 :
  goto b_12;
  y_16 :
  Return();
  b_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(a_7),Egetd(0,5)));
  Return();
  b_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_17;
  b_17 :
  TestFunFC(i_1,&&fail,Egetd(0,1));
  Rpush(f_12);
  goto d_17;
  f_12 :
  goto e_12;
  d_17 :
  Return();
  e_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  Cpush(i_12);
  Ccall(_stratego_j_3);
  goto g_12;
  i_12 :
  Epushd(0,1);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(d_1,Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(k_12);
  k_18 :
  Cpush(m_12);
  Cpush(p_12);
  Ccall(_stratego_b_4);
  goto o_12;
  p_12 :
  Ccall(_stratego_a_4);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_12);
  goto k_18;
  r_12 :
  AllBuild();
  goto q_12;
  o_12 :
  Cpop();
  q_12 :
  goto l_12;
  m_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_17;
  g_17 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(u_12);
  goto l_18;
  u_12 :
  goto t_12;
  l_18 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl1(w_12,Egetd(1,2)),Egetd(1,3)));
  Return();
  t_12 :
  Epopd(1,3);
  goto s_12;
  l_12 :
  Cpop();
  s_12 :
  Return();
  k_12 :
  AllBuild();
  MoveTop(0,1);
  Tdupl();
  Tset(ATmakeString("option-table"));
  Ccall(_stratego_z_3);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(g_1,ATmakeString("option-table"),(ATerm)ATmakeAppl2(g_1,ATmakeString("options"),(ATerm)ATmakeAppl2(g_1,Egetd(0,1),(ATerm)ATmakeAppl0(w_0)))));
  Ccall(_stratego_y_3);
  Tpop();
  Cpush(y_12);
  Rpush(z_12);
  n_18 :
  Cpush(b_13);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Cpush(e_13);
  Ccall(_stratego_x_3);
  goto c_13;
  e_13 :
  Ccontinue(f_13);
  Epushd(1,2);
  MoveTop(1,1);
  goto j_17;
  j_17 :
  TestFunFC(w_12,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_13);
  goto o_18;
  h_13 :
  goto g_13;
  o_18 :
  Return();
  g_13 :
  Epopd(1,2);
  goto c_13;
  f_13 :
  Ccall(_stratego_w_3);
  goto i_13;
  c_13 :
  Cpop();
  i_13 :
  OneNextSon();
  AllBuild();
  goto a_13;
  b_13 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_13);
  goto n_18;
  k_13 :
  AllBuild();
  goto j_13;
  a_13 :
  Cpop();
  j_13 :
  Return();
  z_12 :
  Ccall(_stratego_l_3);
  goto x_12;
  y_12 :
  Ccontinue(m_13);
  Epushd(1,6);
  Ccall(_stratego_v_3);
  Tdupl();
  Ccall(_stratego_t_3);
  Tpop();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_3);
  OneNextSon();
  Ccall(_stratego_k_3);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_t_3);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto m_17;
  m_17 :
  TestFunFC(g_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_17;
  n_17 :
  TestFunFC(g_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_17;
  o_17 :
  TestFunFC(w_0,&&fail,Egetd(1,6));
  Rpush(o_13);
  goto q_18;
  o_13 :
  goto n_13;
  q_18 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl2(g_1,(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl1(z_1,Egetd(1,1)),Egetd(1,3)),(ATerm)ATmakeAppl2(g_1,Egetd(1,5),(ATerm)ATmakeAppl0(w_0))));
  Return();
  n_13 :
  Ccall(_stratego_s_3);
  Ccall(_stratego_p_3);
  Epopd(1,6);
  goto x_12;
  m_13 :
  Ccall(_stratego_m_3);
  goto p_13;
  x_12 :
  Cpop();
  p_13 :
  Epopd(0,1);
  goto j_12;
  g_12 :
  Cpop();
  j_12 :
ENDPROC

DOIT

