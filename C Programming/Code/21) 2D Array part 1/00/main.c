#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x[5][5];
    printf("Please, enter 25 numbers: \n");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&x[i][j]);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%d \t\t",x[i][j]);
        printf("\n");
    }

    return 0;
}
