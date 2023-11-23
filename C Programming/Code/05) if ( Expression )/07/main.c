#include <stdio.h>
#include <stdlib.h>

int main()
{// akbr rkm fii ltlt arkaam using nested if
    int n1,n2,n3;
    printf("Please, enter the three numbers: \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2){
        if(n1>n3)
            printf("%d is the largest number",n1);
        else
            printf("%d is the largest number",n3);
    }
    else{
        if(n2>n3)
            printf("%d is the largest number",n2);
        else
            printf("%d is the largest number",n3);
    }
    return 0;
}
