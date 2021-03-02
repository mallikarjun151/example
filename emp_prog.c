#include <stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[10];
};
int main()
{ int i,search;
 struct employee emp[5];
 for(i=0;i<5;i++)
 {   printf("enter id\n");
     scanf("%d",&emp[i].id);
     printf("enter name\n");
     scanf("%s",&emp[i].name);
     
 }
 printf("enter an id to be searched\n");
 scanf("%d",&search);
 for(i=0;i<5;i++)
 {
     if(search==emp[i].id)
     {
         printf("\n%s is employee name for id %d",emp[i].name,search);
         printf("\nenter the name to be updated");
         scanf("%s",&emp[i].name);
         printf("\n%s is the updated name for id %d",emp[i].name,search);
         
     }
     else
     {
         printf("\nnot found");
         break;
     }
 }
  for(i=0;i<5;i++)
 {   printf("\n %d \t %s",emp[i].id,emp[i].name);
     
     
     
 }
 
return 0;   
}