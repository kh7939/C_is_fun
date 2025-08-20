#include <stdio.h>

int main() {
	int input;

	printf("Type in a number : ");
	scanf("%d", &input);
	printf("The value : %d\n", input); 

	int one, two, three;

	printf("Type in three numbers\n");
	printf("use space between numbers\n"); 
	scanf("%d %d %d", &one, &two, &three);
	printf("The first num : %d\n", one);
	printf("The seoncd num : %d\n", two);
	printf("The third num : %d\n", three);
	
	char c = 'A';
	printf("%c\n", c);
	
	// arrays do not need '&' when scanf
	char str[100];
	printf("Type in a string : ");
	scanf("%[^\n]", str);
	printf("%s\n", str);

	return 0;
}
