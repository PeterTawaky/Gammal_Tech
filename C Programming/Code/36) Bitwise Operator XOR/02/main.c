#include <stdio.h>
#include <stdlib.h>

int main()
{
    // تستخدم لتبديل ال قيم في المتغيرات
    int x,y;
    printf("Please enter a two numbers: \n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    x=x^y;
    y=x^y;  //هنا تم اعطاء ال واي قيمة ال اكس بنجاح
    x=x^y;  // هنا تم اعطاء الاكس قيمة ال واي بنجاح
    printf("x= %d \t y=%d",x,y);
    return 0;
}
