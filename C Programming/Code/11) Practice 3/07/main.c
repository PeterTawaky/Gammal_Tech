#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=0,k=0,n=2;
    for(i=1;i<=9;i++){
            for(;j<=k;j++){
                printf("%d ",i);
            }
            printf("\n");
            k+=n;
            n++;
    }
    return 0;
}
