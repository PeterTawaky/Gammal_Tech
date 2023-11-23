#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,sumPositive=0;
    printf("please, enter 10 numbers: \n");
    for(i=0;i<10;i++){
        scanf("%d",&x);
        sumPositive += x>0  ? x : 0;
    }
    printf("sum Postitive=%d",sumPositive);
    return 0;
}
