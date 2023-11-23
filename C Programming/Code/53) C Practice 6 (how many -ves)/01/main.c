#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sumEven;
    printf("Enter the number of numbers you want to insert: ");
    scanf("%d",&n);
    int x[n];
    printf("Enter the elements of Array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        sumEven += x[i]%2 ? 0 : x[i];
        if(x[i]%2==0)
            printf("%d ",x[i]);
    }
    printf("%d",sumEven);
    return 0;
}
