#include <stdio.h>
#include "/home/kwan/learning_C/basic/15_function.h"

void print_rainbow(int rainbow[MAX_COLOR_NUM]) { 
	for (int i=0; i<MAX_COLOR_NUM; i+=1) {
		switch (i) {
			case RED_COLOR:
				if (rainbow[i]) printf("%sred:    %d%s\n", RED_ANSI, rainbow[i], RESET_ANSI);
				break;
			case ORANGE_COLOR:
				if (rainbow[i]) printf("%sorange: %d%s\n", ORANGE_ANSI, rainbow[i], RESET_ANSI);
				break;
			case YELLOW_COLOR:
				if (rainbow[i]) printf("%syellow: %d%s\n", YELLOW_ANSI, rainbow[i], RESET_ANSI);
				break;
			case GREEN_COLOR:
				if (rainbow[i]) printf("%sgreen:  %d%s\n", GREEN_ANSI, rainbow[i], RESET_ANSI);
				break;
			case BLUE_COLOR:
				if (rainbow[i]) printf("%sblue:   %d%s\n", BLUE_ANSI, rainbow[i], RESET_ANSI);
				break;
			case NAVY_COLOR:
				if (rainbow[i]) printf("%snavy:   %d%s\n", NAVY_ANSI, rainbow[i], RESET_ANSI);
				break;
			case PURPLE_COLOR:
				if (rainbow[i]) printf("%spurple: %d%s\n", PURPLE_ANSI, rainbow[i], RESET_ANSI);
				break;
			default:
				printf("Colorless!i\n");
				break;
		}
	}
}

int main() {
	int rainbow[MAX_COLOR_NUM] = {0,}; // int rainbow[7] = {0, 0, 0, 0, 0, 0, 0}
	
	rainbow[RED_COLOR]    = 1; 
	rainbow[ORANGE_COLOR] = 0; 
	rainbow[YELLOW_COLOR] = 1; 
	rainbow[GREEN_COLOR]  = 0; 
	rainbow[BLUE_COLOR]   = 1; 
	rainbow[NAVY_COLOR]   = 0; 
	rainbow[PURPLE_COLOR] = 1;

	print_rainbow(rainbow);

	return 0;
	}

