#include <stdio.h>
#include<stdlib.h>

int main(){
    int *a=(int *)malloc(10*sizeof(int));
    int search;
    printf("enter the numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&(*(a+i)));
    }
    printf("enter the number to be search\n");
    scanf("%d",&search);
    for(int j=0;j<10;j++)
    {
        if(*(a+j)==search)
        {
            printf("number is found\n");
            break;
        }
        else{
            printf("number is not found\n");
            
        }
    }    
    
}