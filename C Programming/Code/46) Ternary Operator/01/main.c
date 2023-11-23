#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
        int n1,n2;
        printf("Please, enter two numbers: \n");
        scanf("%d %d",&n1,&n2);
        n1+n2>10 ? printf("more than 10 \n") : printf("Less than 10 \n");
    }
    return 0;
}
