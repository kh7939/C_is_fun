#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/*
	Finding a pathogen out of 4 mutations
	- Randomly choose a pathogen
	- an array with 4 mutations
	- randomly select 2 or 3 mutations for 3 rounds
	- Guess the pathogen
	*/
	
	srand(time(NULL));
	
	int pathogen = rand() % 4; // pick one pathogen out of 4 mutations, 0, 1, 2, 3
	
	int preCntMuts = 0;
	
	//5 rounds
	for (int round = 0; round < 5; round++) 
	{
		int mutations[] = {0, 0, 0, 0, 0}; // 5 mutations
		int cntMuts;

		//need to pick 3 or 4 mutations randomly
		if (round == 0) cntMuts = rand() % 2 + 3;
		else cntMuts = (preCntMuts == 3) ? 4 : 3;
		printf("-----------------------------------\n");
		printf(">>> Find a Pathogen <<<\n\n");
		printf(">>>>> Round : %d\n", round + 1);
	
		//update 0s in mutations array to 1, so that we know which one has been picked
		//1 : selected mutations to show
		
		//Show users mutations selected
		int pathogenIncluded = 0;

		for (int picking = 0; picking < cntMuts; )
		{
			int randPicking = rand() % 5;

			if (mutations[randPicking] == 0)
			{
				mutations[randPicking] = 1;
				if (randPicking == pathogen) pathogenIncluded = 1;
				picking++;
			}
			else continue; 
		}
		
		printf("Selected mutations :");
		
		for (int show = 0; show < 5; show++)
		{
			if (mutations[show] == 1) printf(" %d", show);
		}
		
		//let users know if the pathogen is detected or not
		if (pathogenIncluded == 1) printf("\n\n*** Pathogen Detected ***\n");
		else printf("\n\n*** Pathogen Not Detected ***\n");
		printf("-----------------------------------\n");
		
		//getchar() alone : reads a char of standard input then ignores it.
		//here, to show each round and hit enter to show the next round
		getchar();

		preCntMuts = cntMuts;
	}
	//Time to answer which mutatoin is the pathogen
	int answer;
	printf("Which mutation is the pathogen?\n");
	scanf("%d", &answer);

	if (answer == pathogen) printf("\n!!! You Got It !!!\n");
	else printf("\n!!! Wrong !!!\n");

	return 0;
}
