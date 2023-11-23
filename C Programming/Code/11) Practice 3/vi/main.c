#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max,i,k=0,j=0,n=2,f;
    printf("Please, enter the max. number you want to reach: ");
    scanf("%d",&max);
    for(i=1;i<=max;i++){
        for(f=1;j<=k;j++,f++)
            printf("%d ",f);
        printf("\n");
        k += n;
        n++;
    }
    return 0;
}
