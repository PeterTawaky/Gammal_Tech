#include <stdio.h>
#include <stdlib.h>

int main()
{
        int x[10],i;
        printf("Please, enter 10 numbers:\n");
        for(i=0;i<10;i++)
            scanf("%d",&x[i]);   //for input the items of array
        for(i=0;i<10;i++)
            if(x[i]==5){
                printf("found\n");
                return 0;   //for stopping program
        }
        printf("not found\n");
    return 0;
}
