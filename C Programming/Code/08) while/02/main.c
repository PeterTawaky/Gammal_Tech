#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0;
    printf("Please, enter the number: ");
    scanf("%d",&x);
    while(i<=12){
        printf("%d*%d = %d\n",x,i,x*i);
        i++;
    }

    return 0;
}
