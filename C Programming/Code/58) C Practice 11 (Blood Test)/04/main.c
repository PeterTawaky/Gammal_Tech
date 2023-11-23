#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    while(5){
        printf("Please,enter a number: ");
        scanf("%d",&x);
        for(i=2;i<x;i++){
            if(x%i){
                printf("prime \n");
                break;
            }
        }
        printf("not prime \n");
    }return 0;
}
