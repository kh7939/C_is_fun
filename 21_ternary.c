#include <stdio.h>

/*
>>Ternary<<
condition ? expression_if_true : expression_if_false;
*/

int main() {
	
	int num1 = 10;
	int num2 = 5;
	int max_val;

	max_val = (num1 > num2) ? num1 : num2;

	printf("%d\n", max_val);

	return 0;
}
