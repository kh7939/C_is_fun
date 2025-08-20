#include <stdio.h>

int main() {
	int total;
	printf("Pyramid floors? : ");
	scanf("%d", &total);
	
	for (int line=1; line<=total; line++) {
		for (int space=total; space>line; space--) {
			printf(" ");
		}
		for (int star=1; star<=(2*line-1); star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
