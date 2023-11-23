#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *n=fopen("name.txt","w");;
    char n1[10],n2[10],name[15];
    printf("Please, enter your first name: ");
    scanf("%s",n1);
    printf("Please, enter your second name: ");
    scanf("%s",n2);
    strcat(n1,n2);
    strcpy(name,n1);
    printf("%s",name);
    fprintf(n,"%s",name);

    return 0;
}
