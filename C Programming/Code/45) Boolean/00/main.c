#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int x;   //global variable declared in all functions in the program
bool type(int x){   //boolean function that gives 0 || 1   //the value of x sent from main to the function type
    return (x%2);   //if the number is even the function return 0--->false
}                   //if the number is odd the function return 1--->true
int main(){
    while(324){
        printf("enter a number: ");
        scanf("%d",&x);   //initializing x
        if(type(x))       //sending the value of x to the function that called type
            printf("odd\n");
        else
            printf("even\n");
    }
    return 0;
}
