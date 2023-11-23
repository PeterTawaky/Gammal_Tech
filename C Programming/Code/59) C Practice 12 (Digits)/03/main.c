#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0,j=0,odd[10],even[10],counteven=0,countodd=0;
    printf("Please,enter a number: ");
    scanf("%d",&x);
    while(x){
        if((x%10)%2){
            odd[i]=x%10;
            i++;
            countodd++;
        }
        else{
            even[j]=x%10;
            j++;
            counteven++;
        }
        x/=10;
    }
    printf("odd numbers: \n");
    for(i=0;i<countodd;i++)
        printf("    %d\n",odd[i]);
    printf("Even numbers: \n");
    for(i=0;i<counteven;i++)
        printf("    %d\n",even[i]);
    return 0;
}
