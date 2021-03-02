#include <stdio.h>
#include <string.h>
struct node
{
        int roll_no;
        char name[10];
};
typedef struct node ll;
int main () {
        FILE *fp;
        ll n2;// empty node
        fp = fopen("t1", "rb");
        fseek(fp, 0, SEEK_SET);
        fread(&n2, sizeof(n2), 1, fp);// fill n2 from file
        printf("%d\n",n2.roll_no);
        printf("%s\n",n2.name);
        fclose(fp);
return(0);
}
