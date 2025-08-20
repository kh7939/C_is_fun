#include <stdio.h>

#define RED_ANSI	"\033[0;31m"
#define ORANGE_ANSI	"\033[31m"
#define YELLOW_ANSI	"\033[0;33m"
#define GREEN_ANSI	"\033[0;32m"
#define BLUE_ANSI	"\033[0;34m"
#define NAVY_ANSI	"\033[38;5;17m"
#define PURPLE_ANSI	"\033[0;35m"
#define RESET_ANSI	"\033[0m"

#define RED_COLOR		0
#define ORANGE_COLOR	1
#define YELLOW_COLOR	2
#define GREEN_COLOR		3
#define BLUE_COLOR		4
#define NAVY_COLOR		5
#define PURPLE_COLOR	6
#define MAX_COLOR_NUM	7

int main() {
	int rainbow[MAX_COLOR_NUM] = {0,}; // int rainbow[7] = {0, 0, 0, 0, 0, 0, 0}
	
	rainbow[RED_COLOR]    = 1; 
	rainbow[ORANGE_COLOR] = 0; 
	rainbow[YELLOW_COLOR] = 1; 
	rainbow[GREEN_COLOR]  = 0; 
	rainbow[BLUE_COLOR]   = 1; 
	rainbow[NAVY_COLOR]   = 0; 
	rainbow[PURPLE_COLOR] = 1;
	
	for (int i=0; i<MAX_COLOR_NUM; i+=1) {

		if (i == RED_COLOR && rainbow[i]) {
			printf("%sred:    %d%s\n", RED_ANSI, rainbow[i], RESET_ANSI);
		} else if(i == ORANGE_COLOR && rainbow[i]) {
			printf("%sorange: %d%s\n", ORANGE_ANSI, rainbow[i], RESET_ANSI);
		} else if (i == YELLOW_COLOR && rainbow[i]) {
			printf("%syellow: %d%s\n", YELLOW_ANSI, rainbow[i], RESET_ANSI);
		} else if (i == GREEN_COLOR && rainbow[i]) {
			printf("%sgreen:  %d%s\n", GREEN_ANSI, rainbow[i], RESET_ANSI);
		} else if (i == BLUE_COLOR && rainbow[i]) {
			printf("%sblue:   %d%s\n", BLUE_ANSI, rainbow[i], RESET_ANSI);
		} else if (i == NAVY_COLOR && rainbow[i]) {
			printf("%snavy:   %d%s\n", NAVY_ANSI, rainbow[i], RESET_ANSI);
		} else if (i == PURPLE_COLOR && rainbow[i]) {
			printf("%spurple: %d%s\n", PURPLE_ANSI, rainbow[i], RESET_ANSI);
		} else {
			printf("colorless!\n");
		}
	}
	return 0;
}
