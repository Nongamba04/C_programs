#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char c[]="GATE2023";
  char *p = c;
  printf("%s",p+p[3]-p[1]);
  return 0;
}