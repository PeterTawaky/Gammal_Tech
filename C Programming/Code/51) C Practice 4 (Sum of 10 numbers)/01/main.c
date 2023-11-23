#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],sum=0,i;
    for(i=1;i<=100;i++){
        printf("%d  \n",i);
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
