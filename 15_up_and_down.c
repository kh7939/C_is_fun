#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// Guess a number between 0 ~ 100
	srand(time(NULL));

	int	r_num = rand() % 100 + 1;
	//printf("%d\n", r_num);

	int guess;
	
	while (guess != r_num) {
		printf("Guess the number : ");
		scanf("%d", &guess);
		
		if (guess > r_num) {
			printf("Lower than %d\n", guess); 
		}
		else if (guess < r_num) {
			printf("Higher than %d\n", guess);
		}
		else {
			printf("Enter a number between 1 - 100\n");
		}
	}

	printf("You got it!\n");

	return 0;
}
