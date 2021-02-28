#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{ int data;
  struct node *link;  
};
typedef struct node ll; 

ll *first=NULL,*temp,*llarr[4],*ptr;
int arr[4][3];
int choice=0,data,i=0,j=0,k;
int main()
{
while(1)
	{	printf("\n1.create 2d arr\n2.Display arr\n3.create ll\n4.Display ll\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		
	 switch(choice)
		{ 
		 case 1:entr_arr();
		 break;
		 case 2:arrele();
		 break;
		 case 3:createll();
		 break;
		 case 4:llele();
		 break;
		 default:printf("wrong choice\n");
		 exit(0);
		  
		}
	}
}
entr_arr()
{
 printf("enter arr ele\n");
 for(i=0;i<4;i++)
   {
	for(j=0;j<3;j++)
	 {
		scanf("%d",&arr[i][j]);
	 }
   }
}
arrele()
{
 printf("arr ele are\n");
 for(i=0;i<4;i++)
   {
	for(j=0;j<3;j++)
	{
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
   }
}


createll()
{ for(i=0;i<4;i++)
     {
 	  
	first=(ll*)malloc(sizeof(ll));
	first->data=arr[i][0];
	first->link=NULL;
        llarr[i]=first;
     	for(j=1;j<3;j++)
  	  
 	     {
		temp=(ll*)malloc(sizeof(ll));
		temp->data=arr[i][j];
		temp->link=NULL;
		struct node *p;
		p=llarr[i];
		while(p->link!=NULL)
		    { p=p->link;
		    }
		    p->link=temp;
	    }
     }
}

llele()
{ 
  for(i=0;i<4;i++)
	{  ptr=llarr[i];
	   while(ptr!=NULL)
		{
		 printf("%d\t",ptr->data);
		 ptr=ptr->link;	
		}
	   printf("\n");
	}
}
	
