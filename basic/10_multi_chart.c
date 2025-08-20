#include <stdio.h>

char main() {
	for(char i=2; i<=9; i+=1) {
		for(char j=1; j<=9; j+=1) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}

	return 0;
}
