#include <stdio.h>
#include <stdlib.h>

int main()
{// x[n]-->{0,1,2,...,n-1}------->x[5]-->{0,1,2,3,4} n refers to number of index
    int sum,j,i,n;  //i-->index increase   j-->index decrease
    printf("Please, enter the number of index of this array: ");
    scanf("%d",&n);
    int x[n];      // size of Array
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        sum += x[i];
    }
    for(i=0,j=n-1;i<n;i++,j--)  //value of j depends on the number of index(n)
        printf("%d      %d  \t i= %d  \t j= %d  \n",x[i],x[j],i,j);
    printf("SUM= %d",sum);
    return 0;
}
