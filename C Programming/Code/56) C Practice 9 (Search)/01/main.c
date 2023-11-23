#include <stdio.h>
#include <string.h>
int main(){
    char number[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int i,x;
    start:
    printf("Please,enter a number: ");
    scanf("%d",&x);
    if(x>0 && x<10)
        for(i=0;i<=x;i++)
            printf("%d  %s \n",i,number[i]);
    else
        goto start;
    return 0;
}
