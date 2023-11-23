#include <stdio.h>
#include <stdlib.h>

int main(){
    while(5){
    int x;
    printf("Please, enter a number greater than 10: ");
    scanf("%d",&x);
    if(x>10 || x%2==0)
            printf("correct\n");
    }
    return 0;
}
/*if(x>10)
    printf("correct\n");
if else(x%2==0)
    printf("correct\n"); */
