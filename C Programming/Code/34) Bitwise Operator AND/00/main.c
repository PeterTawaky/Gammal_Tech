#include <stdio.h>
int main(){
    int x=5;     //5-->101 in Binary
    int y=7;     //7-->111 in Binary
    int z=x&y;   //    TFT-->101-->5
    printf("%d\n",z);
    return 0;
}
