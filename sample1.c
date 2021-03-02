#include <stdio.h>
int a=10;
int main()
{ 
    f();
    f();
    f();
    return 0;
}
void f()
{ 
    a++;
    printf("%d\n",a);
}