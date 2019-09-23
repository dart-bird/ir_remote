#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=5;
	int *p=&i;
	int **pp=&p;

	printf("i: %d\n",i);
	printf("&i: %d\n",&i);
	printf("p: %d\n",p);
	printf("&p: %d\n",&p);
	printf("*p: %d\n",*p);
	printf("pp: %d\n",pp);
	printf("&pp: %d\n",&pp);
	printf("*pp: %d\n",*pp);
	printf("*&pp: %d\n",*&pp);
	printf("&*pp: %d\n", &*pp);
	printf("**pp: %d\n", **pp);
	return 0;
}
