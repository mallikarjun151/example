#include<stdio.h>
int main()
  {int n,rev=0,rem,c;
    printf("enter n\n");
    scanf("%d",&n);
    c=n;
    while(n>0)
         {
           rem=n%10;
           rev=rev*10+rem;
           n=n/10;
        }
        printf("%d\n",rev);
        if(c==rev)
          { printf("num is palindrome");
          }
        else{
                printf("num is not a palindrome");
            }
        return 0;
   }