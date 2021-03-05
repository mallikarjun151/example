#include<stdio.h>
#include<string.h>
int main()
{
int n,i=0,j=0,k;
char *p,r[30];
printf("enter the name\n");
scanf("%s",r);

n=strlen(r);

p=(char *)malloc(sizeof(char*)*n);
for(i=0;i<n;i++)
{
*(p+i)=r[i];
}
for(i=0;i<n;i++)
{
if(*(p+i)=='.')
j=i;
}
k=j-1;
for(i=k;i>=0;i--)
{
printf("%c",*(p+i));
}
printf(".");
for(i=n;i>=0;i--)
{
if(*(p+i)=='.')
exit(0);
printf("%c",*(p+i));
}
printf("\n%d",n);
return 0;
}
