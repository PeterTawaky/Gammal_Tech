#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,S,P,Diff,D;
    int avg;
    printf("please enter the 1st no: ");
    scanf("%d",&n1);
    printf("please enter the 2nd no: ");
    scanf("%d",&n2);
    printf("\a\n\n\n\n");



    S=n1+n2;
    P=n1*n2;
    Diff=n1-n2;
    avg=S/2;
    D=n1/n2;


    printf("\t\t\t\t     *           *\n");
    printf("\t\t\t\t      * summ=%d *\n",S);
    printf("\t\t\t\t       *       *\n");
    printf("\t\t\t\t        *     *\n");
    printf("\t\t\t\t         *   *\n");
    printf("\t\t\t\t          * *\n");
    printf("\t\t\t\tpro=%d     *     div=%d\n",P,D);
    printf("\t\t\t\t          * *\n");
    printf("\t\t\t\t         *   *\n");
    printf("\t\t\t\t        *     *\n");
    printf("\t\t\t\t       *diff=%d *\n",Diff);
    printf("\t\t\t\t      *         *\n");

    printf("\t\t\t\t            *\n"
           "\t\t\t\t           * *\n"
           "\t\t\t\t          *   *\n"
           "\t\t\t\t         *     *\n"
           "\t\t\t\t        *       *\n"
           "\t\t\t\t       *  avg=%d *\n",avg);
    printf("\t\t\t\t      *************\n");






    return 0;
}
