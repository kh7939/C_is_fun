#include <stdio.h>

/*
Thing	Goes to caller?	Shown on screen?
return		✅ yes			❌ no (unless you print it)
printf		❌ no			✅ yes
*/

void with_out_return();
int with_return();


int main() {

	with_out_return();
	
	with_return();

	int result = with_return();
	printf("%d\n", result);
	
	printf("%d\n", with_return());
	return 0;
}

void with_out_return() {
	printf("with_out_return\n");
}

int with_return() {
	printf("hehe\n");
	return 10;
}
