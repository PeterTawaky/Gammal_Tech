#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
    int x,count=0;
        printf("Please,enter a number: ");
        scanf("%d",&x);
        do{
            x/=10;
            count++;
        }while(x);
        printf("%d \n",count);
    }
    return 0;
}
