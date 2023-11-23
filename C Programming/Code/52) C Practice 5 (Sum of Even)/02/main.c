#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,sum=0,i;
    printf("enter numbers: \n");
    for(i=0;i<10;i++){
        scanf("%d",&x);
        sum+= x%5? 0 : x;
    }
    printf("sum=%d",sum);
    return 0;
}
