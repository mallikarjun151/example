#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
typedef struct node ll;
 
ll *first=NULL,*temp ,*temp1;int data=0,choice=0,sizeofll;
int main ()
{
    
    
while(choice != 9)
 
  { 
 
      menu(); 
 
      scanf("%d",&choice); 
 
      switch(choice) 
 
      { 
 
          case 1:
            insertbeg();
          break;
          case 2:
              insertend();
          break;
          case 3:
            insertatpos();
          break;    
          case 4:
          deletebeg();
            
          break;
          case 5:break;
          case 6:break;
          case 7:print(); break;
          case 8:break;
          case 9: exit(0);
          default : printf("Wrong choice");
          
                
                   
          
      } 
       
 
  } 
 
   
 
   
 
   
 
   
 
  
 
return 0; 
 
} 
 
  void  menu() 
 
  { 
 
      printf("\nEnter your choice\n"); 
      printf("1.Insert Beg \n2.Insert End \n3.Insert at position \n");
      printf("4.Del First \n5.Delete Last \n6.Delete node  at position \n");
      printf("7.Print \n8.Search \n9.Exit \n");
      return; 
 
  } 
 
  
 
 
  void insertbeg() 
  { 
      if(first == NULL) // if the list is empty  
      {
          first  = (ll *)malloc(sizeof(ll));
          ++sizeofll;
          printf("Enter data for the node \n");
          scanf("%d",&data);
          first->data = data;
          first->link = NULL;
      }
      
      else 
      { 
          temp = (ll *)malloc(sizeof(ll));
          printf("Enter data for the node \n");
          scanf("%d",&data);
          temp->data = data;
          temp->link = first;
          first = temp;
      }
 
  } 
 
void insertend() 
 
  {  
  
 
  } 
 
void insertatpos() 
 
{  int data,pos=0;
    printf("enter the pos");
    scanf("%d",&pos);
    if(first==NULL)
    {
        printf("linked list does not exist");
        return;
    }
    if(pos>sizeofll)
    {
        printf("pos is greater than size of ll");
        return;
    }
    if(pos==0)
    {
        insertbeg();
    }
    temp=first;
    for(int i=1;i<pos;i++)
    {
        temp=temp->link;
    }
    printf("enter the data");
    scanf("%d",&data);
    temp1=(struct node *)malloc(sizeof(struct node));
    
    temp1->data=data;
    temp1->link=temp->link;
    temp->link=temp1;
    
} 
void deletebeg() 
 
{ ll * temp1;
 if(first==NULL){
     printf("no ll");
     return;
 }
 printf("del data is %d",first->data);
 temp1=first;
 first=first->link;
 free(temp1);
 
     
 
} 
void deletelast() 
 
{ 
     
 
} 
void deletepos() 
{ 
     
 
} 
void print(){
    
    if(first == NULL)
    {
        printf("List is empty ");
    }
    else
    {
        temp = first;
        while(temp != NULL)
        {
           printf(" [%d   %u]-> \t",temp->data,temp->link);
           temp = temp -> link;
        }
        
    }
    
}
 
void search(){
    
    
}
