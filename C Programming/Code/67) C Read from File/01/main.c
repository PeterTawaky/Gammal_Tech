#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*p=fopen("gammal tech.txt","r");
    char x;
    while(fscanf(p,"%c",&x)!= EOF)   //to read the all file
        printf("%c",x);
    return 0;
}
