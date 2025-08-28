#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int i = rand() & 3;
	
	switch (i) {
		case 0:
			printf("scissors\n");
			break;
		case 1: 
			printf("paper\n");
			break;
		case 2: 
			printf("rock\n");
			break;
		default:
			printf("N/A\n");
	}


}
