#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("Please,enter a number: ");
    scanf("%d",&x);
    while(x){
        for(i=2;i<x%10;i++){
           if((x%10)/i)              //for printing prime numbers
                printf("%d \n",x%10);
        }
        x/=10;
    }
    return 0;
}
