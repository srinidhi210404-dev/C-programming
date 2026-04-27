#include<stdio.h>
int main ()
{
   int a,b,sum,diff,prod,rem,quotient;
   printf("enter the two numbers\n");
   scanf("%d%d",&a,&b);
   sum=a+b;
   diff=a-b; // Fixed: changed * to -
   prod=a*b;
   quotient=a/b;
   rem=a%b;
   printf("addition:\t%d+%d=%d\n",a,b,sum);
   printf("difference:\t%d-%d=%d\n",a,b,diff);
   printf("product:\t%d*%d=%d\n",a,b,prod);
   printf("quotient:\t%d/%d=%d\n",a,b,quotient);
   printf("remainder:\t%d%%%d=%d\n",a,b,rem);
   return 0;
}
