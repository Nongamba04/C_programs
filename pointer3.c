#include <stdio.h>

//Compiler version gcc  6.3.0
  int foo(int x, int *a, int **b){
    int m, n;
    **b+=1;
    m=**b;
    *a+=2;
    n=*a;
    x+=2;
    
    return x+m+n;
  }
int main()
{
  int t=5, *u, **v;
  u=&t;  // it means u = t
  v=&u;  // it means *v = u & **v = t
  
  printf("%d",foo(t,u,v));
  return 0;
}
