#include <stdio.h>
#include <stdlib.h>
void pole(int x){
    printf(x>0 ? "positive\n" : (x<0 ? "negative\n" : "equal zero\n"));
}
void evenOdd(int x){
    printf(x%2 ? "odd\n" : "even\n");
}
int digits(int x){
    int count=0;
    while(x){
        x/=10;
        count++;
    }
    return count;
}
 int isPrime(int x){
    int i;
    for(i=2;i<x;i++)
        if(x%i==0)    //it's not prime
            return 0;
    return x>1?1:0;
 }
int main()
{
    int array[]={3,6,9,10,12,14,0,-15,1234},x,i,y=0;
    printf("Please, enter a number: ");
    scanf("%d",&x);
    for(i=0;i<9;i++){
        if (x==array[i]){
            y=5;
            break;
        }
    }
    if (y!=5)
        printf("Not found\n");
    else{
        printf("found\n");
        pole(x);
        evenOdd(x);
        printf("%d \n",digits(x));
        printf(isPrime(x) ? "prime" : "not prime" );
    }
    return 0;
}
