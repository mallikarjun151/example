#include <stdio.h>
int main()

{   int a = 0;

    printf("Enter ch");

    scanf("%d",&a);

    switch(a)

    {

        case 1: printf("ONE"); break;

        case 2: printf("TWO"); break;

        case 3: printf("THREE"); break;

        default: printf("NONE"); break;

    }

    return 0;

}