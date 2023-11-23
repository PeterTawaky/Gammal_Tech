#include <stdio.h>
#include <stdlib.h>
int x,y,sum;   //global variable
devider(){printf("\n=======================================================================================\n"); return 0;}
int main()
{
    printf("enter a two numbers:\n");
    scanf("%d%d",&x,&y);
    for(x;x<=y;x++){
        printf("%d \t",x);
        sum+=x;
    }
    devider();
    printf("sum= %d",sum);
    return 0;
}
