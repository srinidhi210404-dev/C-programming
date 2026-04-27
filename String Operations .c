#include<stdio.h>
int main()
{
   char a[50],b[50];
   int i,j=0,l=0,flag=0,choice;
   printf("enter the string");
   scanf("%s",a);
   printf("enter the choice");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
         for(i=0;a[i]!='\0';i++)
         {
            l++;
         }
         printf("length of the string is %d",l);
         break;
      case 2:
         for(i=0;a[i]!='\0';i++)
         {
             l++;
         }
         for(i=0;i<l;i++)
         {
            b[i]=a[i];
         }
         b[i]='\0';
         printf("\n original string is %s",a);
         printf("\n copied string is %s",b);
         break;
      case 3:
         for(i=0;a[i]!='\0';i++)
         {
            l++;
         }
         printf("the reverse of string is ");
         for(i=l-1;i>=0;i--)
         {
            printf("%c",a[i]);
         }
         break;
      case 4:
         for(i=0; a[i]!='\0';i++)
         {
            l++;
         }
         for(i=0;i<l;i++)
         {
            if(a[i]!=a[l-i-1])
            {
               flag=1;
               break;
            }
         }
         if (flag==0)
            printf(" palindrome");
         else
            printf("not palindrome");
         break;
      default:
         printf("invalid choice");
         break;
   }
   return 0;
}
