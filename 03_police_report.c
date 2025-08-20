#include <stdio.h>

int main() {
	char name[128];
	printf("What is your name? : ");
	scanf("%s", name);

	int age;
	printf("How old are you? : ");
	scanf("%d", &age);

	float weight;
	printf("What is your weight? : ");
	scanf("%f", &weight);

	float height;
	printf("How tall are you? : ");
	scanf("%f", &height);

	char crime[128];
	printf("What crime did you commit? : ");
	scanf("%s", crime);

	printf("\n\n*** REPORT ***\n\n");
	printf("Name	: %s\n", name);
	printf("Age     : %d\n", age);
	printf("Weight	: %.2f\n", weight);
	printf("height	: %.2f\n", height);
	printf("Crime	: %s\n", crime);

	return 0;
}
