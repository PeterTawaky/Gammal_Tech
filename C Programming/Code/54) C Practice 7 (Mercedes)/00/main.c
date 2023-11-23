#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    while(5){
        int i,count=0;
        char phones[22][10]={"iphone","huawei","samsung","oppo","oppo","iphone","iphone","alcatel","iphone","iphone","huawei","samsung","oppo","huawei","huawei","huawei","huawei","huawei","huawei","huawei","huawei"};
        char x[10];
        printf("Please, enter the type of mobile: ");
        scanf("%s",x);
        for(i=0;i<22;i++)
            if (strcmp(phones[i],x)==0)
                count++;
        printf("%d\n",count);
    }
    return 0;
}
