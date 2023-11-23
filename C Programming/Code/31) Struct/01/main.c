#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int devider(){
    printf("=========================================================================================================\n");
    return 0;
}
struct properities{
    int l,w,weight;
};
int main(){
    struct properities material;
    printf("Please, enter the weight of the material in Kg: ");
    scanf("%d",&material.weight);
    printf("Please, enter the length of the material: ");
    scanf("%d",&material.l);
    printf("Please, enter the width of the material: ");
    scanf("%d",&material.w);
    devider();
    printf("Material: \n");
    printf("weight: %d\nLength: %d \nWidth: %d",material.weight,material.l,material.w);
    return 0;
}
