#include <stdio.h>
#include <stdlib.h>

int diffrence(int y1, int y2){
    if(y1-y2>=0)
        return y1-y2;
    return y2-y1;
}


int main()
{
    int n1,n2,min;
    printf("Please, enter the 1st number: ");
    scanf("%d",&n1);
    printf("Please, enter the 2nd number: ");
    scanf("%d",&n2);
    min= diffrence(n1,n2);
    printf("%d",min);
    return 0;
}
