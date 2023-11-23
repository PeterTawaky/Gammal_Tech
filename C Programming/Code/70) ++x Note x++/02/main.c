#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum=0;
    printf("Please,enter two unequal numbers:\n");
    scanf("%d %d",&x,&y);
    for(;x<=y;x++){
        sum+=x;
        printf("%d\n",x);
    }
    printf("sum= %d",sum);
    return 0;
}
