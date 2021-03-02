#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{ char ch[5]="adaaa";
  char ch1[5]="adaaa";
  int c;
  c=strcmp(ch,ch1);
  printf("%d",c);
  return 0;
}