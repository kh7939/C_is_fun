#include <stdio.h>

int main() {
	printf("hello world!\n");
	
	printf("%s %d %c\n", "hello world!", 123, 'A'); 
	// %s - string (double quote), %d - decimal, %c - character (single quote)
    
	printf("%10d %10d\n", 567, 890);

	printf("%-10d %-10d\n", 567, 890);

	return 0;
}



