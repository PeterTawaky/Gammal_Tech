#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("Please,enter a number: ");
    scanf("%d",&x);
    while(x){
        if((x%10)%2)
            printf("%d \n",x%10);
        x/=10;
    }
    return 0;
}
