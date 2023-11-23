#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[20];
    printf("Please, enter your 1st name: ");
    scanf("%s",x);
    printf("Please, enter your last name: ");
    scanf("%s",x);
    printf("%s %s",x,x);

    return 0;
}
