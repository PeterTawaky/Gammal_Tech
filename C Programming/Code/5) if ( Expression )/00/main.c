#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kilo;
    printf("Please, enter the number: ");
    scanf("%d",&kilo);
    if(kilo<=5)
        printf("enough");
    else
        printf("too much");
    return 0;
}
