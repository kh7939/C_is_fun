#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	
	printf("\n\n === Find Pathogenic Mutation === \n\n");
	int answer;
	int pathogenic = rand() % 4; //randomly pick pathogenic mutation
	
	int cntShowMuts = 0; // how many mutations display
	int prevCntShowMuts = 0;

	// 3 tries
	for (int i=1; i<=3; i++) {
		int mutations[] = {0, 0, 0, 0}; // 4 mutations
		do {
			cntShowMuts = rand() % 2 + 2; //randomly display mutations 2 or 3
		} while (cntShowMuts == prevCntShowMuts); //doing cntShowMuts until cntShowMuts is not prevCntShowMuts, that way you get different muts all the time, for example, 2 muts or 3 muts, if you got 2 muts then you won't get 2 muts. 
		prevCntShowMuts = cntShowMuts;

		int isIncluded = 0; //will show you if there is a pathogenic mutation every rounds (1: yes, 0: no)
		printf(" > attempt %d : ", i); 
		
		//which mutations?
		for (int j = 0; j < cntShowMuts; j++) {
			int randMuts = rand() % 4;

			if (mutations[randMuts] == 0) {
				mutations[randMuts] = 1;
				if (randMuts == pathogenic) {
					isIncluded = 1;
				}
			}

			else {
				j--;
			}
		}
		
		for (int k = 0; k < 4; k++) {
			if (mutations[k] == 1) {
				printf("%d ", k + 1);
			} 
		}
		printf("mutations selected\n\n");

		if (isIncluded == 1) {
			printf(" >> Pathogenic mutation detected\n");
		}
		else {
			printf(" >> Pathongenic mutations NOT detected\n");
		}
		printf("\nPress Enter to continue\n");
		getchar();
	}

	printf("\n\nWhich one is the pathogenic mutation? ");
	scanf("%d", &answer);

	if (answer == pathogenic + 1) {
		printf("\n >> You found it!\n");
	}
	else {
		printf("\n >> Wrong, the pathogenic mutation is %d\n", pathogenic + 1);
	}
	return 0;
}

