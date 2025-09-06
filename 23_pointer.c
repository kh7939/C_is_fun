#include <stdio.h>

int main() {
	// use & to get an address

	int a = 1;
	int b = 2;
	int c = 3;

	printf("address of %d : %p\n", a, &a);
	printf("address of %d : %p\n", b, &b);
	printf("address of %d : %p\n", c, &c);
	
	// pointer

	int *p;

	p = &a;
	printf("(pointer) address of %d : %d\n", *p, p);

	return 0;
}
