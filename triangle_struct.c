#include <stdio.h>
#include<string.h>
struct Tri{
    int len;
    int width;
    int hight;
    int vol;
};
int main()
{ int n,i;
    printf("enter n value\n");
    scanf("%d",&n);
 struct Tri T1[n];
 for(i=0;i<n;i++)
 {   printf("enter length,width,hight\n");
     scanf("%d%d%d",&T1[i].len,&T1[i].width,&T1[i].hight);
     
 }
 for(i=0;i<n;i++)
 {
     if(T1[i].hight<41)
     {
         int v=T1[i].len*T1[i].width*T1[i].hight;
         printf("%d\n",v);
    }
     
 }
 
return 0;   
}