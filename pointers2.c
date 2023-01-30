#include<stdio.h>

int foo(int *p, int*q){
  p=q;
  *p = 2;
}

int main()
{
  int r = 20,s=10;
  
  foo(&r, &s);
  printf("%d %d",r,s);
  return 0;
}