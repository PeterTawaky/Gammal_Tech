#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(6>4){
        int n1,n2,n3;
        printf("enter three numbers: \n");
        scanf("%d %d %d",&n1,&n2,&n3);
        n1>n2?n1>n3?printf("1st no. %d is greater \n",n1):printf("3rd no. %d is greater \n",n3):n2>n3?printf("2nd no. %d is greater \n",n2):printf("3rd no. %d is greater \n",n3);
    }
    return 0;
}//the semi colon put at the end of the line only
// this code can't check if there is two equal numbers or not
