#include<stdio.h>
#include<stdlib.h>
struct node
{
    char empid[10];
    char empname[20];
    char cmpny[20];
}obj1[10];
int main()
{
 
   FILE *ptr;
   ptr = fopen("employee.txt","w");
   printf("Enter employee id name and company");
   for(int i=0;i<3;i++)
   {
        //printf("Enter employee id name and company");
       scanf("%s %s %s",&obj1[i].empid,&obj1[i].empname,&obj1[i].cmpny);
   }
   for(int i=0;i<3;i++)
  
   {
       fprintf(ptr,"%s %s %s",obj1[i].empid,obj1[i].empname,obj1[i].cmpny);
   }

   fclose(ptr);

   return 0;
}
