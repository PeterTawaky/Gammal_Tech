#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n1[20],n2[20],n3[20];
    FILE *h;
    h=fopen("file_test.txt","r");
    fscanf(h,"%s %s %s",n1,n2,n3);

    printf("%s\n",n1);
    printf("%s\n",n2);
    printf("%s",n3);
    return 0;
}
