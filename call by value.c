#include <stdio.h>

int main(){
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    
}
int swap(int a1,int b1)
{
   int c1;
   c1=a1;
   a1=b1;
   b1=c1;
   printf("%d\n%d",a1,b1);
   
}