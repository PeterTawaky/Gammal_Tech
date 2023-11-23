#include <stdio.h>
int summation(int n1,int n2){
    return n1+n2;
}

int main()
{
    int n1,n2,sum;
    printf("Please enter 1st number: ");
    scanf("%d",& n1);
    printf("Please enter 2nd number: ");
    scanf("%d",& n2);
    sum=summation(n1,n2);
    printf("%d",sum);
    return 0;
}
