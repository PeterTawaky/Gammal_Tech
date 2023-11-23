#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,multiplication,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += i*i;                   //pow(i,i);
    }
    printf("%d",sum);
    return 0;
}
