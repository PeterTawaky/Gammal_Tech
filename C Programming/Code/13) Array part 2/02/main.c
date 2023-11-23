#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
        int x[10],p,i;
        printf("Please, enter 10 numbers: \n");
        for(i=0;i<10;i++)
            scanf("%d",&x[i]);
        for(i=0;i<10;i++)
            if(x[i]==5){
                printf("found\n");
                p=5;
                break;
            }
            if(p!=5)
                printf("not found\n");
    }
    return 0;
}
