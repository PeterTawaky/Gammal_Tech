#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables Declaration & Initialization:

    int i,n,z[30],x,gx=0,sx=0,dx=0,xd=0,ex=0;
    printf("Please, enter the number of numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter #%d: ",i+1);
        scanf("%d",&z[i]);
    }
    printf("now enter the number you want it's Data: ");
    scanf("%d",&x);

    //the algorithm of solution:

    for(i=0;i<n;i++){
        gx += x<z[i] ? 1 : 0;   //count greater than x
        sx += x>z[i] ? 1 : 0;   //count smaller than x
        ex += x==z[i] ? 1 : 0;  //count equal x
        dx += z[i]%x==0 ? 1 : 0;  //count x divisabl by number
        xd += x%z[i]==0 ? 1 : 0;  //count number divisabl by x
    }

    //the Output:

    printf("---------------------------\n"
           "%d greater than %d\n"
           "%d smaller than %d\n"
           "%d equal to %d\n"
           "%d divisable by %d\n"
           "%d divisable by %d",gx,x,sx,x,ex,x,dx,x,x,xd);



    return 0;
}
