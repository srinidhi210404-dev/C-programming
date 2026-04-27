#include<stdio.h>
int factorial(int);
int main()
{
   int f,n;
   printf("enter the number for finding factorial:");
   scanf("%d",&n);
   f=factorial(n);
   printf("\n factorial of %d is %d",n,f);
   return 0;
}
int factorial(int n)
{
   if(n==0)
      return 1;
   else
      return n*factorial(n-1);
}
