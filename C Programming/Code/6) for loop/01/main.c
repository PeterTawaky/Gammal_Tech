#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("Please enter a number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        printf("%d\n",i);
    printf("--->FINISH");

    return 0;
}
