#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// in C, True = 1, False = 0

int main() {
	// Guess a number between 0 ~ 100
	srand(time(NULL));

	int	r_num = rand() % 100 + 1;
	//printf("%d\n", r_num);
	int guess;
	int chances = 5;

	while (chances>0) {
		printf("*** Remaining attempt : %d ***\n", chances);
		chances -= 1;
		printf("Guess the number : ");
		scanf("%d", &guess);

		if (guess > r_num) {
			printf("Lower than %d\n\n", guess); 
		}
		else if (guess < r_num) {
			printf("Higher than %d\n\n", guess);
		}
		else if (guess == r_num) {
			printf("You got it!\n");
			break;
		}
	}

	printf("Game Over\n");

	return 0;
}
