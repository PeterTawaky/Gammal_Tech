#include <stdio.h>
#include <stdlib.h>
int sum;  //global variable it's garbage =0
int main()
{
    int x,y,i,j;
    printf("Please,enter the size of 2D Array: \n");
    scanf("%d%d",&x,&y);
    int array[x][y];
    printf("enter the numbers in the array: \n");
    for(i=0;i<x;i++)
        for(j=0;j<y;j++){
            scanf("%d",&array[i][j]);
            sum += array[i][j];
        }
    printf("sum = %d",sum);
    return 0;
}
