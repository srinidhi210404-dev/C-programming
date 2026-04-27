#include<stdio.h>
int main()
{
   int a[10],i,k,n,t=0;
   printf("enter the total no of elements:");
   scanf("%d",&n);
   printf("enter the elements one by one:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter the elements to be searched:");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
      if(a[i]==k)
      {
         t++;
      }
   }
   printf("The number of element %d is occuring %d times",k,t);
   return 0;
}
