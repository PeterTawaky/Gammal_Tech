#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("Please,enter a number: ");
    scanf("%d",&x);
    for(;x;){
        printf("%d \n",x%10);
        x/=10;
    }
    return 0;
}
