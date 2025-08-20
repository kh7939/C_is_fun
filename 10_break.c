#include <stdio.h>

int main() {
	for (int i=1; i<=10; i++) {
		if (i>=6) {
			printf("Stop printing.\n");
			break;
		}
		printf("Printing out #%d.....\n", i);
	}

	return 0;
}
