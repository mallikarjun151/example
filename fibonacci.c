#include<stdio.h>
int main()
  {int n,firstnum=0,secnum=1,nextnum;
    printf("enter n\n");
    scanf("%d",&n);
    printf("%d\t%d\t",firstnum,secnum);
    while(n>0)
         {
           nextnum=firstnum+secnum;
           firstnum=secnum;
           secnum=nextnum;
           printf("%d\t",nextnum);
           n--;
        }
        return 0;
   }