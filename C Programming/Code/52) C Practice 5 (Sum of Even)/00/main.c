#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,sumOdd=0;
    printf("please, enter 10 numbers: \n");
    for(i=0;i<10;i++){
        scanf("%d",&x);
        sumOdd += x%2 ? x : 0;
    }
    printf("sum=%d",sumOdd);
    return 0;
}
