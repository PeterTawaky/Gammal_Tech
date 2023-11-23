#include <stdio.h>
#include <stdlib.h>

int main()
{//float 3shan momken yb2a decimal msh rkm sa7ee7    %f
    float math,physics,chemistry,total,mp;
    printf("Please, enter your grade in math: ");
    scanf("%f",&math);
    printf("Please, enter your grade in physics: ");
    scanf("%f",&physics);
    printf("Please, enter your grade in chemistry: ");
    scanf("%f",&chemistry);
    total=math+physics+chemistry;
    mp=math+physics;
    printf("TOTAL= %f\nMATH + PHYSICS= %f\n",total,mp);
    if(math >= 65){
        if(physics >= 55){
            if(chemistry >= 50){
                if(total >= 190 || mp >= 140){
                    printf("foad is approved");
                }else printf("not approved");
            }else printf("not approved");
        }else printf("not approved");
    }else printf("not approved");


    return 0;
}
/*
ممكن تكتب هنا اي
حاجة علي
كذا سطر
عادي





*/
