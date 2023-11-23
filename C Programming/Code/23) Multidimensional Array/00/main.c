#include <stdio.h>
#include <stdlib.h>
int Devider(){
    printf("\t\t\t\t===============================================================================\n\n");
    return 0;
}
int main()
{
    int i,j,k,u,v,z;
    printf("Please,enter the number of index in the 1st Dimension of the Array: ");
    scanf("%d",&u);
    printf("Please,enter the number of index in the 2nd Dimension of the Array: ");
    scanf("%d",&v);
    printf("Please,enter the number of index in the 3rd Dimension of the Array: ");
    scanf("%d",&z);
    int array[u][v][z];
    Devider();
    printf("Enter the numbers in the Array:\n");
    for(i=0;i<u;i++)
        for(j=0;j<v;j++)
            for(k=0;k<z;k++)
                scanf("%d",&array[i][j][k]);
    Devider();
    for(i=0;i<u;i++)
        for(j=0;j<v;j++){
            for(k=0;k<z;k++)
                printf("Location[%d][%d][%d]: %d\t",i,j,k,array[i][j][k]);
            printf("\n");
        }
    return 0;
}
