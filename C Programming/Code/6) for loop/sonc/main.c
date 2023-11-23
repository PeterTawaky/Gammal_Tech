#include <stdio.h>
#include <stdlib.h>

int main(){
    int i , x,product;
    printf("please, enter the number you want: ");
    scanf("%d",&x);
    for(i=1;i<=10;i++){
        product=i*x;
        printf("%d * %d = \"%d\"\n",i,x,product);
    }

    return 0;
}
