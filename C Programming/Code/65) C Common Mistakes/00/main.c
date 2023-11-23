#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count=0,x;
    printf("Please, enter a number: ");
    scanf("%d",&x);
    for(i=0;x;i++){
        count += (x%10)%2 ? 0 : 1;
        x/=10;
    }
    printf("%d",count);
    return 0;
}
