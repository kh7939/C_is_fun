#include <stdio.h>

void print_color(const int color);

int change_color_i(int color) {
	color = 1;
	return color;
}

void change_color_v(int color) {
	color = 1;
}

int main() {
	int red = 0;
	print_color(red);
	change_color_v(red); // it won't change red to 1 becuase it is passing a copy of red not the original 
	print_color(red);
	red = change_color_i(red);
	print_color(red);
	return 0;
}

void print_color(const int color) {
	printf("color: %d\n", color);
}
