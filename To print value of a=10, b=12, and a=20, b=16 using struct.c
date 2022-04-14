#include <stdio.h>
struct Struct_name
{
  int a,b;
};

int
main ()
{
  struct Struct_name StruVar1,StruVar2;

 StruVar1.a = 10;
 StruVar1.b = 12;
 StruVar2.a = 20;
 StruVar2.b = 16;

  printf ("a = %d \n", StruVar1.a);
  printf ("b = %d \n", StruVar1.b);
  
  printf("\n\n Also \n\n");
  
  printf ("a = %d \n", StruVar2.a);
  printf ("b = %d \n", StruVar2.b);

}
