#include <stdio.h>
int main(){
    int i,j,u,v;
    printf("Enter the size of the Array\n");
    printf("-->Firist dimension: ");
    scanf("%d",&u);
    printf("-->Second dimension: ");
    scanf("%d",&v);
    int x[u][v];
    for(i=0;i<u;i++)
        for(j=0;j<v;j++)
            scanf("%d",&x[i][j]);
    for(i=0;i<u;i++){
        for(j=0;j<v;j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
    return 0;
}
