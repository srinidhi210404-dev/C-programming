#include<stdio.h>

void main()
{
   FILE* fptr;
   char name[20];
   int age;
   float salary;
   
   fptr = fopen("emp.rec", "w");
   if(fptr == NULL)
   {
      printf("file does not exist\n");
      return;
   }
   printf("enter the name \n");
   scanf("%s", name);
   fprintf(fptr, "Name=%s\n", name);
   printf("enter the age \n");
   scanf("%d", &age);
   fprintf(fptr, "age=%d\n", age); // Fixed: added missing age variable
   printf("enter the salary\n");
   scanf("%f", &salary);
   fprintf(fptr, "salary=%.2f\n", salary);
   fclose(fptr);
}
