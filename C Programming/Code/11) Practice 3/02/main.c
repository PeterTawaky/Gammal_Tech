#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
        int x;
        printf("\nenter the number of pieces: ");
        scanf("%d",&x);
        if(x==1)
            printf("10%%");
        else if(x==2)
            printf("20%%");
        else if(x==3)
            printf("30%%");
        else if(x==4)
            printf("40%%");
        else if(x>=5)
            printf("50%%");
    }
    return 0;
}
