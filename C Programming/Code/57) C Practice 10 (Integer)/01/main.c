#include <stdio.h>
#include <stdlib.h>
int count_even,count_odd;
int main()
{
    int x;
    peter:        // momken nktb ay kelma w nst5dmha m3 amr goto
    count_even=0,count_odd=0;
    printf("Please, enter a number: ");
    scanf("%d",&x);
    do{
        (x%10)%2 ? count_odd++ : count_even++;
        x/=10;
    }while(x);
    printf("# of evens is: %d \n",count_even);
    printf("# of odds is: %d \n",count_odd);
    printf("%d Digits  \n",count_even+count_odd);
    goto peter;
    return 0;
}
//fi lbrnamg daa est5dmna do while msh while
//while lw d5lha arkam esfar bs msh htd50l gwaa el loop asln 3shan el condition abl ltnfeez en el x mtb2ash b zero
// 3la 3ks do while ele keda keda htnfz el2wl w htt3aml m3 elrkm 7ta lw sefr w b3dha trg3 tt check
