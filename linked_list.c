#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
typedef struct node ll;
ll *first=NULL;
int choice=0,ele,sizeofll=0;
int main()
{
    while(choice!=9)
    {
        printf("\n1.insert_at_beg\n2.insert_at_end\n3.insert_at_pos\n");
        printf("4.delete_at_beg\n5.delete_at_end\n6.delete_at_pos");
        printf("\n7.search\n8.print\n9.exit\n");
        printf("enter d choice\n");
        scanf("%d",&choice);
        switch(choice!=9)
        {
            case 1:insert_at_beg();
            break;
            case 2:insert_at_end();
            break;
            case 3:insert_at_pos();
            break;
            case 4:del_at_beg();
            break;
            case 5:del_at_end();
            break;
            case 6:del_at_pos();
            break;
            case 7:search();
            break;
            case 8:print();
            break;
            default:exit(0);

        }
    }
return 0;
}
insert_at_beg()
{ ll *temp;
  if(first==NULL)
  {
   first=(ll*)malloc(sizeof(ll));
   printf("enter the ele\n");
  scanf("%d",&ele);
   ++sizeofll;
   first->data=ele;
   first->link=NULL;
  }
  else
  {
      temp=(ll*)malloc(sizeof(ll));
      ++sizeofll;
      printf("enter the ele\n");
      scanf("%d",&ele);
      temp->data=ele;
      temp->link=first;
      first=temp;
      
  }
}
insert_at_pos(){
    ll *temp,*temp1;
    int pos;
    printf("enter the pos after which node to b inserted\n");
    scanf("%d",&pos);
    
    if(first==NULL){
      printf("ll not exist\n");
    }
    else if(pos>sizeofll){
        printf("out of bounds\n");
    }
    else if(pos==0){
        insert_at_beg();
    }
    else 
        {
            temp=first;
            for(int i=1;i<pos;i++)
            {
                temp=temp->link;
            }
            temp1=(ll*)malloc(sizeof(ll));
            sizeofll++;
            printf("enter the data\n");
            scanf("%d",&ele);
            temp1->data=ele;
            temp1->link=temp->link;
            temp->link=temp1;
        }
}
insert_at_end()
{ll *temp,*temp1;
    if(first==NULL)
        {
            insert_at_beg();
        }
    else
        {
            temp=first;
            while(temp->link != NULL)
                { 
                    temp=temp->link;
                }
            temp1=(ll*)malloc(sizeof(ll));
            sizeofll++;
            printf("enter d ele\n");
            scanf("%d",&ele);
            temp->link=temp1;
            temp1->data=ele;
            temp1->link=NULL;
            
        }
        
    
}
del_at_beg()
{ ll *temp;
    if(first==NULL)
    {
        printf("linked list is empty\n");
    }
    else
    {
     temp=first;
     printf("deleted ele is %d\n",temp->data);
     first=temp->link;
     free(temp);
     sizeofll--;
    }
}
del_at_end()
{ ll *temp,*temp1;
    if(first==NULL)
    {
        printf("linked list is empty\n");
    }
    else
    {
     temp=first;
     while(temp->link!=NULL)
     { if(temp->link!=NULL)
        {
         temp1=temp;
        }
         temp=temp->link;     
    }
    printf("del ele is %d\n",temp->data);
    free(temp);
    temp1->link=NULL;
    sizeofll--;
    }
}
del_at_pos()
{    ll *temp,*temp1;
    int pos;
    printf("enter the pos after which node to b deleted\n");
    scanf("%d",&pos);
    
    if(first==NULL){
      printf("ll not exist\n");
    }
    else if(pos>sizeofll){
        printf("out of bounds\n");
    }
    else if(pos==0){
        del_at_beg();
    }
    else 
        {
          temp=first;
          for(int i=1;i<pos;i++)
          {
              temp=temp->link;
          }
          temp1=temp->link;
          
          temp->link=temp1->link;
          printf("del ele is %d\n",temp1->data);
          free(temp1);
          sizeofll--;
        }
}
search()
{
    ll *temp;
    int search,flag=0,index=0;
    temp=first;
    printf("enter the ele to b search\n");
    scanf("%d",&search);
    for(int i=0;temp!=NULL;i++)
    {   if((temp->data)==search)
        {
            flag=1;
            index=i;
            
        }
        temp=temp->link;
    }
    if(flag=1)
    {
        printf("the ele is at pos %d\n",index+1);
    }
    else{
        printf("ele not found\n");
    }
    
}
print()
{   ll *temp;
    if(first==NULL){
        printf("list is empty\n");
    }
    else{
        temp=first;
        while(temp!=NULL)
        {
            printf("[%d   %u] ->\t",temp->data,temp->link);
            temp=temp->link;
        }
      
    }
}
