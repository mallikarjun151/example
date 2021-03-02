#include<stdio.h>
struct student {
int roll_no;
char name[10];
};
typedef struct student ss;
ss std1;
main(){
        FILE *fp1;
        fp1=fopen("t1.txt","wb");
        printf("enter name\n");
        scanf("%s",std1.name);
        printf("enter roll_no\n");
        scanf("%d",&std1.roll_no);
        fwrite(&std1,sizeof(std1),1,fp1);
        fclose(fp1);
        }