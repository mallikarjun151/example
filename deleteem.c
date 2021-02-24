#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp{
int empid;
char empname[10];
char cmpny[10];
struct emp *link;
};
typedef struct emp ll;
ll *First=NULL,*temp;
int i,flag=0,k=0;
main()
{
FILE *fp;
fp=fopen("employeedb","rb");
temp=(ll*)malloc(sizeof(ll));

printf("enter the emp id to deleted\n");
scanf("%d",&search);
	while(k<10)
	{
		fseek(fp,sizeof(struct emp)*k,SEEK_SET);
		while(temp->link!=NULL)
		{
			fread(&em[k],sizeof(em[k]),1,fp);
			if((em[k].empid)==search)
			{
			
			}
		  { 
			fseek(fp,sizeof(em[i]),SEEK_SET);
			
		
		
	}
	
fclose(fp);

}
