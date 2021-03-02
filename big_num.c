#include <stdio.h>

int main(){
    int a[10],big=0;
    for(int i=0;i<10;i++){
    printf("enter the numbers\n");
    scanf("%d",&a[i]);
    if(big<a[i])big=a[i];
    }
    printf("biggest num is %d",big);
    return 0;
}