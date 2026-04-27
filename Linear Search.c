#include<stdio.h>
int main ()
{
   int a[10],n,i,k,t=0;
   printf("enter the elements to be stored");
   scanf("%d",&n);
   printf("enter the elements one by one");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter the elements to be searched");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
      if (a[i]==k)
      {
         t=1;
         break;
      }
   }
   if(t==1)
      printf("given the number is present in the loop");
   else
      printf("given element is not present in the array");
   return 0;
}
