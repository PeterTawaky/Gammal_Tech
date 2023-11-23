#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Please,enter the # of numbers: ");
    scanf("%d",&n);
    int x[n];
    printf("Please, enter the numbers: \n");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        sum += x[i]>0 ? x[i] : 0;
    }
    for(i=0;i<n;i++){
        if(x[i]>0)
            printf("%d ",x[i]);
    }
    printf("\n%d",sum);
    return 0;
}
