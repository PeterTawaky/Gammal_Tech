#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("enter the numbers: \n");
    for(i=0;i<10;i++){
        scanf("%d",&x);
        printf(x==5?"found\n" :0);
    }
    return 0;
}
