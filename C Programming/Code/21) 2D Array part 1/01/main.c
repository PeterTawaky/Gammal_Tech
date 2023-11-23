#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,x[3][3];
    printf("Please, enter 9 numbers: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            scanf("%d",&x[i][j]);
            if(x[i][j]==5){
                printf("found\n");
                return 0;
            }

    }
    return 0;
}
