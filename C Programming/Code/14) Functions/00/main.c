#include <stdio.h>
#include <stdlib.h>
int i;                     //Global variable declared for all functions in the program
int greeting(){            //1st function called greeting
    printf("Hello Gammal Tech\n");
    return 0;
}
int percentage(){          //2nd function called percentage
    printf("degree= 98%%\n");
    return 0;
}
int devider(){          //3rd function called devider
    printf("============================\n");
    return 0;
}
int printing_numbers(){          //4th function called printing_numbers
    for(i=1;i<=100;i++)
        printf("%d  ",i);
    printf("\n");
    return 0;
}
void printing_numbers2(){          //5th function called printing_numbers2
    int n;                        //variable used for this function only
    printf("Please, enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d  ",i);
    printf("\n");
    return 0;
}

int main(){                //the main function which program Implemented
    greeting();
    percentage();
    devider();
    greeting();
    printing_numbers();
    devider();
    printing_numbers2();
    return 0;
}
