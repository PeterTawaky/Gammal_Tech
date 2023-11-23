#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
        int binary,decimal=0,y=1;
        printf("Please, enter a Binary number: ");
        scanf("%d",&binary);
        for(;binary != 0;){
            decimal += binary % 10 * y;
            binary /= 10;
            y *= 2;
        }
        printf("Decimal=%d \n",decimal);
    }
    return 0;
}
