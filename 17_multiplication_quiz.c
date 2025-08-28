#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber();
void showQuestion();
void success();

int main() {
	srand(time(NULL));

	int count = 0;
	for (int i = 1; i <= 5; i++) {
		
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		
		showQuestion(i, num1, num2);

		int answer;
		scanf("%d", &answer);
	
		if (answer == -1) {
			printf("You quit the quizz\n");
			break;
		}
		else if (answer == num1 * num2) {
			success();
			count += 1;
		}
		else {
			printf("\nWrong\n\n");
		}
	}	
	printf("You've answered %d out of 5 right\n", count);

	return 0;
}

int getRandomNumber(int i) {
	return rand() % (i * 3) + 1;
}

void showQuestion(int i, int num1, int num2) {
	printf("    Question # %d\n", i);
	printf("### What is %d * %d ###\n", num1, num2);
	printf("(To quit, type -1)\n");
}

void success() {
	printf("\nYou got it!\n\n");
}
