#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	
	for (int i=1; i<=10; i++) {
		int num = rand() % 3 + 1;
		printf("%d\n", num);
	}
	return 0;
}
