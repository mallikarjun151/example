#include <stdio.h>
int stack[5];
  int top=-1;
  int choice=0,size=5;
  int ele;

int main()
{
    
  while(choice!=4)
  {
      menu();
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          if(top == size-1)
          {
          printf("stack is full cannot push\n");
          break;
          }
          else 
          {
              push();
              
          }
          break;
           case 2:
          if(top == -1)
          {printf("stack is empty cannot pop\n");
          break;
          }
          else {
          pop();
              
          }
          break;
          case 3:print();
          break;
          case 4:choice=4;break;
          default: printf("wrong choice\n");
          break;
          
      }
  }
  return 0;
}
  void menu()
  {
      printf("\nenter the choice\n 1.push\n 2.pop \n 3.print \n 4.exit\n");
      
  }
  void push()
  {
      printf("enter the element to be pushed\n");
      scanf("%d",&ele);
      ++top;
      stack[top]=ele;
      printf("pushed %d",ele);
      return;
  }
   void pop()
  {
      printf("poped element is %d\n",ele);
      --top;
      return;
      
  }
  void print()
  {
    printf("the stack is\n");
    for(int i=top;i>=0;i--)
    {
      printf("%d\n",stack[i]);
    }
  }