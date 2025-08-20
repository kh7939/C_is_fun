#include <stdio.h>

#define RED_ANSI	"\033[0;31m"
#define ORANGE_ANSI	"\033[31m"
#define YELLOW_ANSI	"\033[0;33m"
#define GREEN_ANSI	"\033[0;32m"
#define BLUE_ANSI	"\033[0;34m"
#define NAVY_ANSI	"\033[38;5;17m"
#define PURPLE_ANSI	"\033[0;35m"
#define RESET_ANSI	"\033[0m"

int main() {
	int colors[7] = {0,}; // int colors[7] = {0, 0, 0, 0, 0, 0, 0}
	
	colors[0] = 1; //red
	colors[1] = 0; //orange
	colors[2] = 1; //yellow
	colors[3] = 0; //green
	colors[4] = 1; //blue
	colors[5] = 0; //navy
	colors[6] = 1; //purple
	
	for (int i=0; i<=6; i+=1) {

		if (i == 0 && colors[i]) {
			printf("%sred:    %d%s\n", RED_ANSI, colors[i], RESET_ANSI);
		} else if(i == 1 && colors[i]) {
			printf("%sorange: %d%s\n", ORANGE_ANSI, colors[i], RESET_ANSI);
		} else if (i == 2 && colors[i]) {
			printf("%syellow: %d%s\n", YELLOW_ANSI, colors[i], RESET_ANSI);
		} else if (i == 3 && colors[i]) {
			printf("%sgreen:  %d%s\n", GREEN_ANSI, colors[i], RESET_ANSI);
		} else if (i == 4 && colors[i]) {
			printf("%sblue:   %d%s\n", BLUE_ANSI, colors[i], RESET_ANSI);
		} else if (i == 5 && colors[i]) {
			printf("%snavy:   %d%s\n", NAVY_ANSI, colors[i], RESET_ANSI);
		} else if (i == 6 && colors[i]) {
			printf("%spurple: %d%s\n", PURPLE_ANSI, colors[i], RESET_ANSI);
		} else {
			printf("colorless!\n");
		}
	}
	return 0;
}
