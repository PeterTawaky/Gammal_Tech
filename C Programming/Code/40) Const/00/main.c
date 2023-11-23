#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int W=2,L=W;   // special decleration in the memory that can't be changed called constnt
    int h,volume;
    printf("Please,enter the height of the box: ");
    scanf("%d",&h);
    volume=L*W*h;
    printf("Volume=%d",volume);
    return 0;
}
