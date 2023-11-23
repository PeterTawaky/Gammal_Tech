#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count=0;
    start:                  //minf3sh start tt7at f2wl satr flbrnameg
    count=0;
    printf("Please, enter a number: ");
    scanf("%d",&x);
    for(;x;){  //until x!=0
        x /= 10;
        count++;
    }
    printf("%d Digits \n",count);
    goto start;
    return 0;
}
