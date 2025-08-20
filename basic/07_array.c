#include <stdio.h>

#define RED_ANSI	"\033[0;31m"
#define ORANGE_ANSI	"\033[31m"
#define YELLOW_ANSI	"\033[0;33m"
#define GREEN_ANSI	"\033[0;32m"
#define BLUE_ANSI	"\033[0;34m"
#define NAVY_ANSI	"\033[38;5;17m"
#define PURPLE_ANSI	"\033[0;35m"
#define RESET_ANSI	"\033[0m"

/*
int main() {
	char data[] = "hello";
	printf("%c\n", data[1]);
	printf("%c\n", data[4]);
	printf("%s\n", data);
	printf("size of this array: %ld\n", sizeof(data));
	
	int data1[] = {10, 20};
	printf("data[0]: %d, data[1]: %d\n", data1[0], data1[1]);
	printf("size of this array: %ld\n", sizeof(data1));
	return 0;
} */

int main() {
	int colors[7] = {0,}; // int colors[7] = {0, 0, 0, 0, 0, 0, 0}
	
	colors[0] = 1; //red
	colors[1] = 1; //orange
	colors[2] = 1; //yellow
	colors[3] = 1; //green
	colors[4] = 1; //blue
	colors[5] = 1; //navy
	colors[6] = 1; //purple
	
	if (colors[0]) {
		printf("%sred:    %d%s\n", RED_ANSI, colors[0], RESET_ANSI);
	}
	if (colors[1]) {
		printf("%sorange: %d%s\n", ORANGE_ANSI, colors[1], RESET_ANSI);
	}
	if (colors[2]) {
		printf("%syellow: %d%s\n", YELLOW_ANSI, colors[2], RESET_ANSI);
	}
	if (colors[3]) {
		printf("%sgreen:  %d%s\n", GREEN_ANSI, colors[3], RESET_ANSI);
	}
	if (colors[4]) {
		printf("%sblue:   %d%s\n", BLUE_ANSI, colors[4], RESET_ANSI);
	}
	if (colors[5]) {
		printf("%snavy:   %d%s\n", NAVY_ANSI, colors[5], RESET_ANSI);
	}
	if (colors[6]) {
		printf("%spurple: %d%s\n", PURPLE_ANSI, colors[6], RESET_ANSI);
	}
	
	return 0;
}
