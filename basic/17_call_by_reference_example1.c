#include <stdio.h>

/*
int main() {
	char data = 0;
	
	// * is called pointer, pointer is 8 bytes (int is 4 bytes)
	// data equals *(&data) -> & : to get a memory address where data is stored, * : to read the value in &data (address) 

	printf("data pointer(%p) , (%d)\n", &data, data);
	printf("data (%d) , (%d)\n", data, *(&data));
	return 0;
} 
*/

void switch_value(int *a, int *b) {
	int backup = *a;
	*a = *b;
	*b = backup;

	printf("a:%d , b:%d\n", *a, *b);
}

int main() {
	int x = 1;
	int y = 2;

	switch_value(&x, &y);
	
	printf("x:%d , y:%d\n", x, y);
	return 0;
}

