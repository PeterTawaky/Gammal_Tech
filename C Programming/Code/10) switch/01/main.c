#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    for(;5;){
        printf("\nPlease, enter a number: ");
        scanf("%d",&x);
        switch(x){
            case 0:
                printf("not positive or negative");
                break;
            default:
                printf("just a number");
        }
    }
    return 0;
}
