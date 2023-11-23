#include <stdio.h>
#include <stdlib.h>
int negative,positive;
int main()
{
    int x=5,i;
    printf("Please, enter numbers: \n");
    for(i=0;x!=0;i++){
        scanf("%d",&x);
        if (x==0)
            break;
        x>0 ? positive++ : negative++ ;
    }
    printf("# of positive= %d\n# of negative= %d",positive,negative);

    return 0;
}
