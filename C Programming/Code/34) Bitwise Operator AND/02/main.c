#include <stdio.h>
#include <stdlib.h>

int main(){
    while(5){
    int x;
    printf("Please, enter a number greater then 10: ");
    scanf("%d",&x);
    if(x>10 && x%2==0)
            printf("even\n");
    }
    return 0;
}
/*if(x>10)
        if(x%2==0)
            printf("even\n");
        else
            printf("odd\n"); */
