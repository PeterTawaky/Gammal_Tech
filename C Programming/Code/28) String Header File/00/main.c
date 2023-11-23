#include <stdio.h>
#include <stdlib.h>
#include <string.h>   //new library
int main()
{
    char x[]="User Name: " ,y[20];
    printf("Please, enter your name: ");
    scanf("%s",y);
    strcat(x,y);    // bydmg eltneen string w y7otohom fi array x
    printf("%s",x);
    return 0;
}
