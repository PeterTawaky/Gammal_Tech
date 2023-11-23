#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[20],y[20];    //array of character
    printf("Please, enter your 1st name: ");
    scanf("%s",x);    //%s refers to string
    printf("Please, enter your 2nd name: ");
    scanf("%s",y);
    printf("%s %s",x,y);
    printf("\n%s \n%s",x,y);

    return 0;
}
