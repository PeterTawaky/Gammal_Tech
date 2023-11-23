#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count=0;
    keri:
    count=0;
    printf("Please,enter a number: \n");
    scanf("%d",&x);
    while(x){
        count+= x%10 ? 1 : 0 ;
        x/=10;
    }
    printf("%d non zero digits \n",count);
    goto keri;
    return 0;
}
