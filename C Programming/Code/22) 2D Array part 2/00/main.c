#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int x[6][5]={{1,2,3,4,5},
                 {5,4,3,2,1},
                 {6,7,8,9,10},
                 {10,9,8,7,6},
                 {10,20,30,40,50},
                 {1,2,3,0,2}};
    for(i=0;i<6;i++){
        for(j=0;j<5;j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
    return 0;
}
