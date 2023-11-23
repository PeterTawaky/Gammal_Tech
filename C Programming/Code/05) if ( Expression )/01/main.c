#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w1,w2,w3,w4,w5,total_weight;
    printf("Please, enter the weight of five person: \n");
    scanf("%d%d%d%d%d",&w1,&w2,&w3,&w4,&w5);
    total_weight=w1+w2+w3+w4+w5;
    if (total_weight<=500)
        printf("OKAY");
    else
        printf("too much weight");
    return 0;
}
