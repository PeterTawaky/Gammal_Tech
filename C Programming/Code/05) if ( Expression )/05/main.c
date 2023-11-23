#include <stdio.h>
#include <stdlib.h>

int main()
{//lma yb2a fiih aktr mn e7tmaiin
    int x;
    printf("Please, enter a number: ");
    scanf("%d",&x);
    if(x==10)
        printf("equal 10");
    else if(x>10)
        printf("Greater than 10");
    else
        printf("smaller than 10");
    return 0;
}
