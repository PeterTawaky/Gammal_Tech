#include <stdio.h>
#include <stdlib.h>

int main()
{
//-->creating files       (w)
    FILE *x=fopen("1.txt","r");
    FILE *y=fopen("2.txt","r");
    FILE *z=fopen("3.txt","r");
    FILE *k=fopen("4.txt","r");
//-->creating variables
    char s1[30],s2[30],s3[20],s4[7];
//-->writing in files    (fprintf)
    fscanf(x,"%[^EOF]",s1);
    fscanf(y,"%[^w]",s2);
    fscanf(z,"%[^t]",s3);
    fscanf(k,"%s",s4);
//-->printing output
    printf("%s\n",s1);
    printf("%s\n",s2);
    printf("%s\n",s3);
    printf("%s\n",s4);

    return 0;
}
