#include <stdio.h>
#include <stdlib.h>

int main()
{// المختلفين بوحايد والمتشابهين بأصفار
    while(5>3){
        int x1,x2,x;
        printf("Please, enter two numbers:\n");
        scanf("%d%d",&x1,&x2);
        x=x1^x2;
        printf("the X0r result is: %d\n",x);
    }
    return 0;
}
