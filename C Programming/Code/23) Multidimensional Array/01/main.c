#include <stdio.h>
#include <stdlib.h>
int Devider(){
    printf("\t\t\t\t===============================================================================\n\n");
    return 0;
}
int main()
{
    while(5){
        int i,j,k,y;
        int array[3][2][2];
        Devider();
        printf("Enter the 12 numbers in the Array:\n");
        for(i=0;i<3;i++)
            for(j=0;j<2;j++)
                for(k=0;k<2;k++){
                    scanf("%d",&array[i][j][k]);
                    if(array[i][j][k]==5){
                        y=5;
                    }
                }
        if(y==5)
            printf("Found");
        else
            printf("Not found");
        Devider();
    }
    return 0;
}
