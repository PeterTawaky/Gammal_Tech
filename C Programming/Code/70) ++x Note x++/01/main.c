#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&x);
     for(i=1;i<=x;i++){
        printf("%d\n",i);
        sum+=i;
     }
     printf("you looped: %d Times\n",i-1);
     printf("Sum= %d",sum);
    return 0;
}
