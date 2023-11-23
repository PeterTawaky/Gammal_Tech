#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,age;
    printf("Please, enter your age:");
    scanf("%d",&age);
    printf("Please, enter your the year:");
    scanf("%d",&year);
    printf("%d",year-age);
    return 0;
}
