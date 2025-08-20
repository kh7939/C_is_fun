#include <stdio.h>

/*
"And" 		== &&
"Or"  		== ||
"not equal" == !=

'=' vs '=='
= to assign a value
== to compare values
*/

int main() {
	int a=11;
	int b=11;
	int c=12;
	int d=12;
	if (a != b || c != d) {
		printf("They are all the same.\n");
	}
	else {
		printf("They are different.\n");
	}

	return 0;
}
