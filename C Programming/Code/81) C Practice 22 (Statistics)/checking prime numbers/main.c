#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("Please, enter a number: ");
    scanf("%d",&x);
    for(i=2; x>i ;i++){
        if(x%i==0){
            printf("not prime");
            break;

        }
        else{
            printf("Prime number");
            break;
        }

    }
    if(x==2)
        printf("prime number");
    else if(x==1)
        printf("not prime");
    return 0;
}
