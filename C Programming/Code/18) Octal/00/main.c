#include <stdio.h>
int main(){
    while(5){
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d",&decimal);
        printf("Decimal-->%d\n",decimal);
        printf("Octal-->%o\n",decimal);
    }
    return 0;
}
