#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[20],y[20];
    printf("Please, enter your name: ");
    scanf("%s",x);
    strcpy(y,x);    //string copy-->copy characters in x then paste it in y
    printf("%s",y);
    return 0;
}
