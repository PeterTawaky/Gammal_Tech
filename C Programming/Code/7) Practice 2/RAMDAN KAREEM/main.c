#include<stdio.h>
int main(){
   //Part 1
    int i,j,x=16,y=0;  //j for drawing lines  //i for new Line  //x for left spaces  //y for right spaces
    for(i=0;i<2;i++)
        printf("                  R\n");
    for(i=0;i<8;i++){   // to start anew Line
        for(j=x;j>0;j--)  //  spaces for drawing a Left line
            printf(" ");
        printf("R");
        x=x-2;
        for(j=y;j<3;j++) // spaces for drawing a right line
            printf(" ");
        y=y-4;
        printf("R\n");
    }
    //Part 2
    printf(" ");
    for(j=0;j<18;j++)  // for drawing Horizontal line
        printf("R ");
    printf("\n");
    x=14,y=0;
    //Part 3
    for(i=0;i<12;i++){   // to start anew Line
        for(j=x;j<16;j++)  //  spaces for drawing a Left line
            printf(" ");
        printf("R");
        x--;
    for(j=y;j<31;j++)  // spaces for drawing a right line
        printf(" ");
    printf("R\n");
    y=y+2;
    }
    //Part 4
    for(i=0;i<13;i++)
        printf(" ");
    for(i=0;i<11;i++)
        printf("R");
    printf("\n");
    for(i=0;i<10;i++)
        printf(" ");
    for(i=0;i<17;i++)
        printf("R");
    printf("\n");
    for(i=0;i<7;i++)
        printf(" ");
    for(i=0;i<23;i++)
        printf("R");
    printf("\n");
    return 0;
}
