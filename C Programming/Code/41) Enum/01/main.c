#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum{fri=1,thu,wed,tue,mon,sun,sat};  // اذا عرفت بقيمة فهي تبدأ بالعد من القيمة المعرفة وتستمر في الزيادة
    printf("%d\n",sat);
    printf("%d\n",mon);
    printf("%d\n",fri);
    return 0;
}
