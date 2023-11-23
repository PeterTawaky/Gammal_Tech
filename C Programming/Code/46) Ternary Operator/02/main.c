#include <stdio.h>
#include <stdlib.h>

int main(){
    while(!0){
            int n1,n2;
            printf("Please, enter two numbers: \n");
            scanf("%d %d",&n1,&n2);
            printf(n1>n2 ? "%d is greater \n",n1 : "%d is greater \n",n2);
    }
    return 0;
}
