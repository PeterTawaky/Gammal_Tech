#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
        int x[10],i;
        printf("Please, enter 10 numbers:\n");
        for(i=0;i<10;i++)
            scanf("%d",&x[i]);
        for(i=0;i<10;i++)
            if(x[i]==5){
                printf("found\n");
                break;   //for stopping loop
        }
    }
    return 0;
}
