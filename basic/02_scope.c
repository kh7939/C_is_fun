#include <stdio.h>

const int YELLOW = 10;
const float PI = 3.14;

int main() {
	int green;
	int red = 1;
	printf("red1: %d\n", red);

	green = 7;
	red = 2;
	printf("red2: %d\n", red);
	printf("green: %d\n", green);
	
	{
		int red = 3;
		printf("red3: %d\n", red);
	}

	printf("red: %d\n", red);

	printf("yellow: %d\n", YELLOW);
	printf("PI: %f\n", PI);
	return 0;
}
