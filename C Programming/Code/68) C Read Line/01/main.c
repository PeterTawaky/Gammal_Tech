#include <stdio.h>
#include <stdlib.h>
int number(int x){
    int count=0;
    for(;x !=0 ;){
        x/=10;
        count++;
    }
    return count;
}


int number_inverse(int x){
    int i,y;
    for(;x;){
        y = y * 10 + x % 10;
        x/=10;
    }
    return y;
}
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(number_inverse(x)==x)
        printf("correct  %d numbers",number(x));

    return 0;
}
