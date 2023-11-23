#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,i;
        printf("Please enter your age: ");
        scanf("%d",&x);
        if(x<=10){
            for(i=0;i<x;i++)
                printf("%d Happy birthday\n",i+1);
        }
        else
            printf("Happy birthday");
        return 0;
}

