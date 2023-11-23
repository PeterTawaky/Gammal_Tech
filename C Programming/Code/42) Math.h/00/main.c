#include <stdio.h>
#include <stdlib.h>
#include <math.h>  //library used for math operations
int main()
{
    while(5){
        int number;
        float sq;
        printf("Please, enter a number: ");
        scanf("%d",&number);
        sq=sqrt( number ) ;
        printf("%f\n",sq);
        printf("%f\n",pow(sqrt(16),2));   //lazm hna atb3 bst5dam float minf3sh a7ot %d
    }

    return 0;
}
