#include <stdio.h>
#include<stdlib.h>
int choice=0,arr[5],cap=5,f=0,r=0;
int main()
{
    while(choice!=4)
    {
        printf("\n1.insert\n2.delete\n3.print\n");
        printf("\nenter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:print();
            break;
            default:exit(0);

        }
    }
return 0;
}
insert()
{
  if(r==cap)
  {
      printf("q is full cant insert\n");
  }
  else{
      int ele;
      printf("enter the ele to b inserted\n");
      scanf("%d",&ele);
      arr[r]=ele;
      r++;
  }
}
delete()
{
    if(r==f){
        printf("q is empty cant pop\n");
    }
    else{
        printf("del ele is %d",arr[f]);
        for(int i=0;i<r;i++)
        {
            arr[i]=arr[i+1];
        }
        r--;
    }
    
}
print()
{
    for(int i=0;i<r;i++)
        {
            printf("%d\t",arr[i]);
        }
}
