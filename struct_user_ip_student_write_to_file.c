#include<stdio.h>
struct student {
int roll_no;
char name[10];
};
typedef struct student ss;
ss std1;
main(){
        FILE *fp1;
        fp1=fopen("t.txt","w+");
        printf("enter name\n");
        scanf("%s",std1.name);
        printf("enter roll_no\n");
        scanf("%d",&std1.roll_no);
        fprintf(fp1,"%d\n",std1.roll_no);
        fprintf(fp1,"%s\n",std1.name);
        fclose(fp1);
        }