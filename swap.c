#include<stdio.h>
 int main()
 {int a,b,c;
        printf("enter a and b\n");
        scanf("%d %d",&a,&b);
        c=a;
        a=b;
        b=c;
        printf("%d\n%d\n",a,b);
        return 0;
 }
