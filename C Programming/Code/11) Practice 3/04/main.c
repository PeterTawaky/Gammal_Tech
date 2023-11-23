#include <stdio.h>
#include <stdlib.h>

int main()
{//float 3shan momken yb2a decimal msh rkm sa7ee7
    float math,physics,chemistry,total;
    printf("Please, enter your grade in math: ");
    scanf("%f",&math);
    printf("Please, enter your grade in physics: ");
    scanf("%f",&physics);
    printf("Please, enter your grade in chemistry: ");
    scanf("%f",&chemistry);
    total=math+physics+chemistry;
    if((math >= 65)&&(physics >= 55)&&(chemistry >= 50)&&(total >= 190 || math+physics >= 140))
        printf("congratulations,you are accepted");
    else
        printf("not accepted");


    return 0;
}
