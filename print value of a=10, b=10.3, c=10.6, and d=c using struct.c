#include <stdio.h>
struct Struct_name
{
  int a;
  float b, c;
  char *d;
};

int
main ()
{
  struct Struct_name StruVariable;

  StruVariable.a = 10;
  StruVariable.b = 10.3;
  StruVariable.c = 10.6;
  StruVariable.d = "c";

  printf ("a = %d \n", StruVariable.a);
  printf ("b = %.1f \n", StruVariable.b);
  printf ("c = %.1f \n", StruVariable.c);
  printf ("d = %s \n", StruVariable.d);

}
