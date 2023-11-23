#include <stdio.h>
//n2dr n7ot awamr gwaa elakwas fii (while())

int main() {
  int x;
	do {
		printf("please enter the password: ");
		scanf("%d", &x);
	} while (x!=1111&&x!=2222&x!=3333&&printf("password is wrong\n"));
  printf("password is correct");

	return 0;
}
