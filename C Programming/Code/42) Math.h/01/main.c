#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,x;
    printf("Please, enter a number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        printf("%d^%d= %f\n",x,i,pow(x,i));
    return 0;
}
