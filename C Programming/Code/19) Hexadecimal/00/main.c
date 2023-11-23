#include <stdio.h>
int main(){
    while(5){
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d",&decimal);
        printf("Decimal-->%d\n",decimal);
        printf("small Hexadecimal-->%x\n",decimal);
        printf("capital Hexadecimal-->%X\n",decimal);
    }
    return 0;
}
