#include <stdio.h>
#include <stdlib.h>

int main(){ //aktr mn Loop gwaa b3dhaa
    while(5){
        int i=1,x;
        printf("enter a number: ");
        scanf("%d",&x);
        while(i<=x){
            printf("%d\n",i);
            i++;
        }
        printf("--->FINISH\n\n");
    }
    return 0;
}
