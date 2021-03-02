#include <stdio.h>
#include<stdlib.h>

struct student{
    int roll_no[10];
    char name[10];
    int class;
};

int main(){
    typedef student std;
    int *student1=(int*)malloc(3*sizeof(int));
    strcpy(student1->roll_no,"231");
    strcpy(student1->name,"sadas");
    strcpy(student1->class,"10");
    printf("%d",student1->roll_no);
     printf("%c\n",student1->name);
      printf("%d\n",student1->class);
    
    
} 