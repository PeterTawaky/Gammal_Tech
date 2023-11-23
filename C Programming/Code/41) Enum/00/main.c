#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    enum{sat,sun,mon,tue,wed,thu,fri};   // لا يمكن استخدام هذه الأسماء كمتغيرات عادية  //اذا لم تعرف بأي قيمة فأنها تبدأ العد من الصفر
    printf("%d\n",sat);
    printf("%d\n",mon);
    printf("%d\n",fri);
    printf("============================================================================================================================================\n");
    for(i=sat;i<=fri;i++)
        printf("%d\n",i);

    return 0;
}
