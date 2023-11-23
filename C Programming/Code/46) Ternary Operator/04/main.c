#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(7>4){
        int n;
        printf("enter a number: ");
        scanf("%d",&n);
        printf(n >= 0 ? n == 0 ? "zero \n" : "positive \n" : "negative \n");
    }
    return 0;
}//ققرب ? بتقفل مع ققرب :
