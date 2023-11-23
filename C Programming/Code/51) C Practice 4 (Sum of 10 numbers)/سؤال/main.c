#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10],i;
    printf("Enter ten numbers: \n");
    for(i=0;i<10;i++)
        scanf("%d",&x[i]);
    for(i=0;i<10;i++)
        x[i]<0 ? printf("%d ",x[i]) : x[i]=5;


    return 0;
}
