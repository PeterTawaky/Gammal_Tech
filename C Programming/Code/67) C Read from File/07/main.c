#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p=fopen("name.txt","w");
    char name[15];
    int count=0,i;
    printf("Please,enter your name: ");
    scanf("%s",name);
    fprintf(p,"%s",name);
    for(i=0;name[i]!='\0';i++)
        count++;
    printf("%d",count);
    return 0;
}
