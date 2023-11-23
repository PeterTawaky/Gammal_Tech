#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char phones[22][10]={"iphone","huawei","samsung","oppo","oppo","iphone","iphone","alcatel","iphone","iphone","huawei","samsung","oppo","huawei","huawei","huawei","huawei","huawei","huawei","huawei","huawei"};
    char x[10];
    int i,j,count=0;
    printf("Enter the model of Mobile: ");
    scanf("%s",x);
    for(i=0;x[i];i++)
        if(x[i]>='A' && x[i] <='Z')
            x[i]+= 32;
    for(i=0;i<21;i++){
        for(j=0;phones[i][j];j++)
            if(phones[i][j]>='A' && phones[i][j]<='Z')
                phones[i][j] += 32;
        count += strcmp(x,phones[i])==0;
    }
    printf("%d \n",count);

    return 0;
}
