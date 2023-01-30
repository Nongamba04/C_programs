#include <stdio.h>

int foo(int **p){
  static int q = 10;
  *p = &q;
}

int main()
{
  int r = 20;
  int *p=&r;
  foo(&p);
  printf("%d",*p);
  return 0;
}