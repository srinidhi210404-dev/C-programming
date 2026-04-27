#include<stdio.h>
int main()
{
   int mark;
   printf("enter the mark");
   scanf("%d",&mark);
   if((mark>90)&&(mark<=100))
      printf("A grade");
   else if((mark>80)&&(mark<=90))
      printf("B grade");
   else if((mark>70)&&(mark<=80))
      printf("C grade");
   else if((mark>60)&&(mark<=70))
      printf("D grade");
   else if ((mark>50)&&(mark<=60))
      printf("E grade");
   else
      printf("fail");
   return 0;
}
