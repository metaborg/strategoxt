#include "choice-cpl.h"


void init_constructors(void)
{
}

// ((!1 ++ !2) <+ !3); ?2

void mix_local_and_global_choice(void)
{
  int i;
  int ptr = stack_ptr;
  showPile("mix_local_and_global_choice");
  if(PushChoice() == 0)
    {
      showPile("b");
      if(GlobalPushChoice() == 0)
	{
	  fprintf(stderr, "s1a : i = %d ptr = %d\n", i, stack_ptr);
	  showPile("c");
	  i = 1;
	  fprintf(stderr, "s1b : i = %d ptr = %d\n", i, stack_ptr);
	}
      else
	{
	  fprintf(stderr, "s2a : i = %d ptr = %d\n", i, stack_ptr);
	  showPile("d");
	  i = 2;
	  fprintf(stderr, "s2b : i = %d ptr = %d\n", i, stack_ptr);
	}
      fprintf(stderr, "D1 : i = %d stack_ptr = %d ptr = %d\n", i, stack_ptr, ptr);
      showPile("e");
      LocalPopChoice(ptr); // PopChoice();
      fprintf(stderr, "D2 : i = %d stack_ptr = %d ptr = %d\n", i, stack_ptr, ptr);
      showPile("f");
    }
  else
    {
      fprintf(stderr, "s3a : i = %d ptr = %d\n", i, stack_ptr);
      showPile("g");
      i = 3;
      fprintf(stderr, "s3b : i = %d ptr = %d\n", i, stack_ptr);
    }
  fprintf(stderr, "s4a : i = %d ptr = %d\n", i, stack_ptr);
  showPile("h");
  if(i != 2)
    {
      showPile("i");
      _fail(NULL);
    }
  fprintf(stderr, "s4b : i = %d ptr = %d\n", i, stack_ptr);
}


int i;

void make_global_choice2(void)
{
  showPile("make_global_choice2");
  if(GlobalPushChoice() == 0)
    {
      fprintf(stderr, "s1a : i = %d ptr = %d\n", i, stack_ptr);
      showPile("c");
      i = 1;
      fprintf(stderr, "s1b : i = %d ptr = %d\n", i, stack_ptr);
    }
  else
    {
      fprintf(stderr, "s2a : i = %d ptr = %d\n", i, stack_ptr);
      showPile("d");
      i = 2;
      fprintf(stderr, "s2b : i = %d ptr = %d\n", i, stack_ptr);
    }
}

void mix_local_and_global_choice2(void)
{
  int ptr = stack_ptr;
  showPile("mix_local_and_global_choice2");
  if(PushChoice() == 0)
    {
      showPile("b");
      make_global_choice2();
      fprintf(stderr, "D1 : i = %d stack_ptr = %d ptr = %d\n", i, stack_ptr, ptr);
      showPile("e");
      removeChoicePoint(ptr); // PopChoice();
      fprintf(stderr, "D2 : i = %d stack_ptr = %d ptr = %d\n", i, stack_ptr, ptr);
      showPile("f");
    }
  else
    {
      fprintf(stderr, "s3a : i = %d ptr = %d\n", i, stack_ptr);
      showPile("g");
      i = 3;
      fprintf(stderr, "s3b : i = %d ptr = %d\n", i, stack_ptr);
    }
  fprintf(stderr, "s4a : i = %d ptr = %d\n", i, stack_ptr);
  showPile("h");
  if(i != 2)
    {
      showPile("i");
      _fail(NULL);
    }
  fprintf(stderr, "s4b : i = %d ptr = %d\n", i, stack_ptr);
}

ATerm main_0(ATerm t)
{
  fprintf(stderr, "main_0(%t)\n", t);
#ifdef HAVE_CPL
  mix_local_and_global_choice();
  mix_local_and_global_choice2();
#endif
  return t;
}

