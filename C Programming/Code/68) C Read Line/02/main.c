#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[100];
    FILE *p=fopen("fidaad.doc","r");
    fscanf(p,"%[^\n]",x);
    printf("%s",x);
    return 0;
}
