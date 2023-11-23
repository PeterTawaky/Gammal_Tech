#include <stdio.h>

int main(void) {
  int holidays;
  float salary;
  printf("Enter your salary: ");
  scanf("%f",&salary);
  printf("Enter number of holidays: ");
  scanf("%d",&holidays);
  salary+= holidays<=21? (salary*20)/100:(salary*10)/100;
  printf("%f",salary);
  return 0;
}
