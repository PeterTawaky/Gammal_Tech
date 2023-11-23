#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
        int x;
        printf("\nPlease enter the number of pieces: ");
        scanf("%d",&x);
        switch(x){
            case 0:
                break;
            case 1:
                printf("10%%");
                break;
            case 2:
                printf("20%%");
                break;
            case 3:
                printf("30%%");
                break;
            case 4:
                printf("40%%");
                break;
            default:
                printf("50%%");
        }
    }
    return 0;
}
