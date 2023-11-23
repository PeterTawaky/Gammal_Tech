#include <stdio.h>
#include <stdlib.h>

int main()
{
    // تستخدم للكشف عن الأرقام المتشابهة
    while(-321){  //اي رقم غير ال زيرو هيشغل ال لووب
        int n1,n2;
        printf("Please, enter two equal numbers: \n");
        scanf("%d%d",&n2,&n1);
        if(n1^n2)    //if the two numbers are equal then condition is zero then it's false
            printf("the two numbers are not equal\n");  //in true condition
        else
            printf("the two numbers are equal\n");  //in false condition
    }
    return 0;
}
