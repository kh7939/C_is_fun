#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
Thing	Goes to caller?  	Shown on screen?
return		✅ yes			❌ no (unless you print it)
printf		❌ no			✅ yes
*/

// Using "()", to call a function

void with_out_return();
int with_return();
void with_para();
int with_para_return();

int main() {
	srand(time(NULL));

	with_out_return();
	
	//wiil do anything except returning value
	with_return();
	
	//will go thru the function and return value
	int result = with_return();
	printf("%d\n", result);
	
	//will also go thru the function and return value
	printf("%d\n", with_return());

	with_para(1, 3, 5);

	int num1 = rand();
	int num2 = rand();
	printf("result : %d\n" ,with_para_return(num1, num2));

	printf("random max : %d\n", RAND_MAX);
	return 0;
}

void with_out_return() {
	printf("with_out_return\n");
}

int with_return() {
	printf("haha\n");
	return 10;
}

void with_para(int num1, int num2, int num3) {
	printf("%d, %d, %d\n", num1, num2, num3);
}

int with_para_return(int n1, int n2) {
	return n1-n2;
}
