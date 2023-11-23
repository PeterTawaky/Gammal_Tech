#include <stdio.h>
#include <stdlib.h>
void print_array (int x[5][5]){
    int i,j;
    printf("Please, enter 25 numbers: \n");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&x[i][j]);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
    return 0;
}
int main()
{
    int x[5][5];
    print_array(x);
    return 0;
}
