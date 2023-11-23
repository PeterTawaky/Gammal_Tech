#include <stdio.h>
#include <stdlib.h>
void devider(){
    printf("========================================================================================================================\n");
}
int count;
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
                if(array[i][j]>0)
                    count++;
            }
        devider();
        for(i=0;i<x;i++)
            for(j=0;j<y;j++)
               if(array[i][j]>0)
                    printf("%d \n",array[i][j]);
        printf("#of positive= %d",count);


    return 0;
}
