#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=1,sum=0;
    do{
        sum=sum+i;
        printf("%d\n",i);
        i++;
    }while(i<=100);
    printf("sum= %d",sum);

    return 0;
}



