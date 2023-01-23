/*
  array used to perform multiple operations with the help
  of command from the user. 
  
  also the pointer is used as a function. 
  
  */
  #include <stdio.h>

//Compiler version gcc  6.3.0
int add(int x, int y){
    int a = x + y;
    printf("%d",a);
   }
   
  int sub(int x, int y){
    int a = x-y;
    printf("%d",a);
   }
  int mult(int x, int y){
    int a = x*y;
    printf("%d",a);
   }
int main()
{
 void (*fp[])(int, int) = {add, sub, mult};
 int i;
 scanf("%d",&i);
 
 if(i==0)
 (*fp[i])(10,20);
 
 else if(i==1)
 (*fp[i])(100,20);
 
 else if(i==2)
 (*fp[i])(10,20);
 
 else 
 printf("Invalid input");
 
 return 0;
}

 
  