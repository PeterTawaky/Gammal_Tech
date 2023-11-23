#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,H,HP,LP,VP;
    printf("Hello sherif in Gammal Tech \n   Please, enter the number of Low & High quality videos:  ");
    scanf("%d%d",&L,&H);
    HP=H*3;
    LP=L*1;
    VP=HP+LP;
    printf("the total volunteering points= %d",VP);

    return 0;
}
