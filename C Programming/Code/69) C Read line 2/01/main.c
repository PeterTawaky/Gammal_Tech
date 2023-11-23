#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    p=fopen("test.txt","r");
    int i,y=0;
    char x;
    for(i=1;i<=3;i++){
        fscanf(p,"%c",&x);
        y=(y*10)+x;
    }
    printf("Code: %d",y);
    printf("\nPhone number: ");
    while(fscanf(p,"%c",&x)!=EOF)
        printf("%c",x);
    return 0;
}
