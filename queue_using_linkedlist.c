
#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
typedef struct node ll;
 
ll *first=NULL,*temp ,*temp1;int data=0,choice=0,sizeofll=0;
int main ()
{
while(choice != 4)
 
  { 
 
      choices(); 
 
      scanf("%d",&choice); 
 
      switch(choice) 
 
      { 
 
          case 1:
            insertatend();
          break;
          case 2:deletebeg();
            break;
          break;
          case 3:printing();
          break;
          case 4:exit(0);
          default:
            printf("wrong choice\n");
      }
      
  }
  return 0;
}
void  choices() 
 
  { 
 
      printf("Enter your choice\n"); 
      printf("1.Insert at end \n2.Del at beg\n3.print\n4.exit\n");
      return; 
 
  }
  
  insertatend()
  {
      if(first == NULL)
    {
        printf("List is empty\n");
         first = (ll *)malloc(sizeof(ll));
         sizeofll++;
          printf("Enter data for the node \n");
          scanf("%d",&data);
          first->data = data;
          first->link= NULL;
    }
    else
    {     
        
          temp = (ll *)malloc(sizeof(ll));
          printf("Enter data for the node \n");
          scanf("%d",&data);
          temp->data = data;
          temp->link =NULL;
          struct node* p1;
          p1=first;
          while(p1->link!=NULL)
          {
              p1=p1->link;
          }
          p1->link=temp;
          
    }
}
 
  printing()
    {
      if(first==NULL)
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
      
    deletebeg(){
        if(first==NULL)
        {
            printf("list is empty\n");
        }
        else
        {   struct node* ptr;
            ptr=first;
            printf("deleted data is %d\n",first->data);
            first=first->link;
            free(ptr);
            
            
        }
    }  