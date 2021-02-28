#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp{
int empid;
char empname[10];
char cmpny[10];
};
typedef struct emp ll;
ll empl[10];
int i,flag=0,k=0,search,size=10;
main()
{
FILE *fp,*fp1;
fp=fopen("employeedb","rb");
fp1=fopen("employeedb1","w+b");
printf("enter the emp id to be deleted\n");
scanf("%d",&search);
fseek(fp,0,SEEK_SET);
	for(i=0;i<size;i++)
	{
			fread(&empl[i],sizeof(empl[i]),1,fp);
			if(search==(empl[i].empid))
			  {	flag=1;

				printf("deleted details of emp id %d with name %s\n",empl[i].empid,empl[i].empname);
                                i++;
				fread(&empl[i],sizeof(empl[i]),1,fp);			 	
				size--;
		          }
		
	                fwrite(&empl[i],sizeof(empl[i]),1,fp1);

			   
	}
	if(flag==0)
	{printf("entered id is not found\n");}
fclose(fp);
remove("employeedb");
rename("employeedb1","employeedb");
}

