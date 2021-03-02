#include <stdio.h>
void main()

{   char s[100];
    printf("enter a sent\n");
    scanf("%[^\n]",&s);
    printf("%s",s);
}