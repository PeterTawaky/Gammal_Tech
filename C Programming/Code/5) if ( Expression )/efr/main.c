#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1,t2,t;
    printf("\aenter your tall nw: ");
    scanf("%d",&t1);
    printf("enter your tall last year: ");
    scanf("%d",&t2);
    t=t1-t2;
    printf("%d\n",t);
    if(t==0){
            printf("same tall");
    }
    else {
        printf("taller tha last year");
    }
    return 0;
}
