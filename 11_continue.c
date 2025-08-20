#include <stdio.h>

int main() {
	for (int i=1; i<=10; i++) {
		if (i>=5 && i<=8) {
			if (i==7) {
				printf("Not printing #%d.....\n", i);
				continue;
			}
			printf("Printing out #%d.....\n", i);
		}
	}

	return 0;
}
