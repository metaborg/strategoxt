#include <stdio.h>
#include <aterm1.h>


int main(int argc, char *argv[])
{
  ATerm bottomOfStack;
  ATinit(argc, argv, &bottomOfStack);

  ATprintf("%t\n", 
	   ATmake("RDef(<str>,[<list>],<appl>,1)",
		  ATmake("<str>", "A"),
		  ATmake("[<str>,<str>,<str>]", "x", "y", "z"),
		  ATmake("<appl(<int>)>", "F", 1)));
  return 0;
}
 
