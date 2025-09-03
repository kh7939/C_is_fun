#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//Game >>> Find A Pathogen Out of 4 Mutations!

	printf(">>> Find A Pathogen Out of 4 Mutations! <<<\n");
	
	srand(time(NULL));
	int pathogen = rand() % 4; // pathogen will be either 0, 1, 2 or 3

	printf("%d\n", pathogen);

	//Show users mutations 3 times
	for (int i = 0; i < 3, i++) {
	
		//4 mutations
		//int mutations[] = {0, 1, 2, 3};

		//Randomly select 2 or 3 mutations
		int preCntSelectedMuts = 0;
		int cntSelectedMuts = (preCntSelectedMuts == 2) ? 3 : 2;

		//Picking different indices from mutation[]
		for (int j = 0; j < cntSelectedMuts; j++) {
			//picking one mutation
			int picking = rand() % 4;
				
		}
	}

	return 0;
}
