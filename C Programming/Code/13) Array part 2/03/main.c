#include <stdio.h>
#include <stdlib.h>

int main()
{
      while(5){
        int x[10],sum=0,i;
        printf("Please, enter 10 numbers: \n");
        for(i=0;i<10;i++)
            scanf("%d",&x[i]);
        for(i=0;i<10;i++)
            if(x[i]==5)
                sum++;

            if(sum!=0)
                printf("found %d times\n",sum);
            else
                printf("NOT FOUND\n");
    }
    return 0;
}
