#include <stdio.h>

int main() {
	int age = 12; //int 4 bytes
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	
	float f = 46.5; // float 4 bytes
	printf("%.2f\n", f);
	double d = 4.428; // double 8 bytes
	printf("%f\n", d);

	const int YEAR = 1992; //with 'const', you can't chagen the value
	printf("Year born : %d\n", YEAR);
	
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7); 

	return 0;
}
