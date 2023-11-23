#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day,month,year;
    printf("Please, enter your birth date: ");
    scanf("%d%*c%d%*C%d",&day,&month,&year);
    printf("(%d/%d/%d)",day,month,year);
    return 0;
}
