#include <stdio.h>
#include <stdlib.h>
int devider(){
    printf("\n===============================================================================================\n");
    return 0;
}
int main(){
    while(5){
        int x[2],y;
        printf("enter the first number: ");
        scanf("%d",&x[0]);
        printf("enter the second number: ");
        scanf("%d",&x[1]);
        y=x[0]&x[1];
        printf("%d & %d = %d",x[0],x[1],y);
        devider();
    }
    return 0;
}
