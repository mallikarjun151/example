#include <stdio.h>
#include<stdlib.h>

int main(){
    int *a=(int *)malloc(10*sizeof(int));
    int big=0;
    printf("enter the numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&(*(a+i)));
        if(big<*(a+i))
        {
            big=*(a+i);
        }
    }
    printf("%d",big);
    return 0;
}