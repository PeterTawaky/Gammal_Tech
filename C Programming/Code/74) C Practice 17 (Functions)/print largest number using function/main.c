#include <stdio.h>
#include <stdlib.h>

int larger(int y1,int y2,int y3,int y4){
    if(y1>y2){
        if(y1>y3)
            if(y1>y4)
                return y1;
    }
    else{
        if(y2>y3){
            if (y2>y4)
                return y2;
        }
        else
            if(y3>y4)
                return y3;
            return y4;
    }
}


int main()
{
    int largest,i;
    int x[4];  //array contains 4 intiger numbers
    printf("Please, enter four numbers: \n");
    for(i=0;i<4;i++)
        scanf("%d",&x[i]);
    largest= larger (x[0],x[1],x[2],x[3]);
    printf("\nthe Largest number=%d",largest);
    return 0;
}
