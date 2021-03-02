#include<stdio.h>
int main(int argc,char *argv[])
{
        FILE *fp1,*fp2;
        char c;
        if(argc<3)
        {
                printf("need more arg\n");
        }
        else
        {
                fp1=fopen(argv[1],"r");
                fp2=fopen(argv[2],"w+");
 
                c=fgetc(fp1);
                while(c!=EOF)
                     {
                        fputc(c,fp2);
                        c=fgetc(fp1);
                     }
                printf("contents r copied to %s",argv[2]);
                fclose(fp1);
                fclose(fp2);
        }
 
}