#include <stdio.h>

char main() {
	int i = 0;
	while (1) {
		printf("i : %d\n", i);
		i += 1;

		if (i == 20) {
			break;
		}
	}
	return 0;
}
