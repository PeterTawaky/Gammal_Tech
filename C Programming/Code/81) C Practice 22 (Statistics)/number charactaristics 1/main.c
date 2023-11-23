#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Please, enter a number: ");
    scanf("%d",&number);
    printf( number>0 ? "the number (%d) is Positive" : (number<0 ? "the number %d is negative" : "the number (%d) equal to zero" ) ,number); //+ve || -ve || zero
    printf("\n");
    printf( number%2 ? "the number is odd" : "the number is even");

    return 0;
}
