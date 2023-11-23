#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,sum=0,i;
    printf("Enter five numbers: \n");
    for(i=0;i<5;i++){
        scanf("%d",&number);
        sum += number;
    }
    printf("sum = %d",sum);
    return 0;
}
