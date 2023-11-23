#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,j,x[10];
    for (i=0;i<10;i++){
        scanf("%d",&x[i]);
        sum += x[i];
    }
    for (i=0,j=9;i<10;i++,j--)
        printf("%d     %d\n",x[i],x[j]);
    printf("SUM= %d",sum);


    return 0;
}
