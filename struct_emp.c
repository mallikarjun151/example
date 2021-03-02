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
     }
 }
 
return 0;   
}