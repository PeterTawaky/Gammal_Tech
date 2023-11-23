#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const float PI=22/7;   //constant name should be capital letter
    int radius ;
        printf("Please, enter the radius of the circle: ");
        scanf("%d",&radius);
    float circumference =2 * PI * radius , area = PI * pow(radius,2);

    printf("circumference= %f\n"
           "Area= %f",circumference,area);
    return 0;
}
