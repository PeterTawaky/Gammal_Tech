#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum{sat=7,sun,mon=24,tue,wed,thu=2423,fri=10};
    printf("%d\n",sat);
    printf("%d\n",sun);
    printf("%d\n",mon);
    printf("%d\n",tue);
    printf("%d\n",wed);
    printf("%d\n",thu);
    printf("%d\n",fri);
    return 0;
}
