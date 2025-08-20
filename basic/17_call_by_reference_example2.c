#include <stdio.h>

void print_color(const int color);
void change_color(int *color);

int main() {
	int red = 0;
	print_color(red);

	change_color(&red);
	
	print_color(red);
	return 0;
}

void change_color(int *color) {
	*color = 1;
}

void print_color(const int color) {
	printf("color: %d\n", color);
}
