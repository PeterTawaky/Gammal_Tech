#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p=fopen("test.txt","r");
    char x[20],y[20];
    fscanf(p,"%[^\n]",x);
    fscanf(p,"%s",y);
    printf("%s%s",x,y);
    return 0;
}
