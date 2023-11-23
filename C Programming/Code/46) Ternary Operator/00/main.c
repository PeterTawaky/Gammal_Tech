#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Please, enter two numbers: \n");
    scanf("%d %d",&n1,&n2);
    n1 > n2 ? printf("%d is greater",n1) : printf("%d is greater",n2);
    return 0;
}
