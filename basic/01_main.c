#include <stdio.h>

// char : signed char, unsigned char (1 byte= 2 nibbles = 8 bits)
// short : signed short, unsigned short (2 bytes)
// int : signed int, unsigned short (4 bytes)
// long int : signed long int, unsigned long int (8 bytes)
// float : 4 bytes 
// double : 8 bytes

// sizeof() : unsigned long int, library that shows data type size

int main() {
	printf("char size: %ld\n", sizeof(char));
	printf("short size: %ld\n", sizeof(short));
	printf("int size: %ld\n", sizeof(int));
	printf("long int size: %ld\n", sizeof(long));
	printf("float size: %ld\n", sizeof(float));
	printf("double size: %ld\n\n", sizeof(double));
	
	printf("char* size: %ld\n", sizeof(char*));
	printf("short* size: %ld\n", sizeof(short*));
	printf("int* size: %ld\n", sizeof(int*));
	printf("long* int size: %ld\n", sizeof(long*));
	printf("float* size: %ld\n", sizeof(float*));
	printf("double* size: %ld\n", sizeof(double*));
	return 0;
}
