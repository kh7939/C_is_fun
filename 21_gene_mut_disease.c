#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	printf("\n\n === Find Pathogenic Mutation === \n\n");
	int answer;
	int mutations = rand() % 4; //4 mutations
	
	int cntShowMuts = 0; // how many mutations display
	int prevCntShowMuts = 0;

	// 3 tries
	for (int i=1; i<=3; i++) {
		int mutations[] = {0, 0, 0, 0}; // 4 mutations
		do {
			cntShowMuts = rand() % 2 + 2; //randomly display mutations 2 or 3
		} while (cntShowMuts == prevCntShowMuts);
	}

	return 0;
}
