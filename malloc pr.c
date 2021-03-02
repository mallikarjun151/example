#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{ int ar[2][3];
int **p;
p=(int *)malloc(2*sizeof(int));
//for(int i=0;i<n;i++)
//scanf("%d",&p[i]);
*(p+0)=(int *)malloc(3*sizeof(int));
*(p+1)=(int *)malloc(3*sizeof(int));
*(*(p+0)+0)=100;
*(*(p+0)+1)=200;
*(*(p+1)+0)=300;
*(*(p+1)+1)=400;
for(int i=0;i<=1;i++)
    { for(int j=0;j<=1;j++)
        {
        printf("%d\n",p[i][j]);
        }
    }
}