#include <stdio.h>
struct Struct_name
{
  int x;
  float y;
  char *z;
};

int
main ()
{
  struct Struct_name StruVar1,StruVar2;

 StruVar1.x = 10;
 StruVar1.y = 2.5;
 StruVar1.z = "a";
 StruVar2.x = 15;
 StruVar2.y = 5.5;
 StruVar2.z = "b";

  printf ("x = %d \n", StruVar1.x);
  printf ("y = %.1f \n", StruVar1.y);
  printf ("z = %s \n",StruVar1.z);
  
  printf("\n\n Also \n\n");
  
  printf ("x = %d \n", StruVar2.x);
  printf ("y = %.1f \n", StruVar2.y);
  printf ("z = %s \n",StruVar2.z);
return 0;
}
