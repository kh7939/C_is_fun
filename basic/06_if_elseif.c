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
	int red = 5;
	int orange = 1;
	int yellow = 1;
	int green = 1;
	int blue = 1;
	int navy = 1;
	int purple = 1;

	if (red == 1) {
		printf("%sred1:    %d%s\n", RED_ANSI, red, RESET_ANSI);
	} else if (red == 2) {
		printf("%sred2:    %d%s\n", RED_ANSI, red, RESET_ANSI);
	} else if (red == 3) {
		printf("%sred3:    %d%s\n", RED_ANSI, red, RESET_ANSI);
	} else {
		printf("It's not red\n");
	}
	if (orange) {
		printf("%sorange: %d%s\n", ORANGE_ANSI, orange, RESET_ANSI);
	}
	if (yellow) {
		printf("%syellow: %d%s\n", YELLOW_ANSI, yellow, RESET_ANSI);
	}
	if (green) {
		printf("%sgreen:  %d%s\n", GREEN_ANSI, green, RESET_ANSI);
	}
	if (blue) {
		printf("%sblue:   %d%s\n", BLUE_ANSI, blue, RESET_ANSI);
	}
	if (navy) {
		printf("%snavy:   %d%s\n", NAVY_ANSI, navy, RESET_ANSI);
	}
	if (purple) {
		printf("%spurple: %d%s\n", PURPLE_ANSI, purple, RESET_ANSI);
	}
	
	return 0;
}
