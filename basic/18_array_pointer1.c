#include <stdio.h>
/*
Expression		What it represents
data	     	Address of data[0] (first character)
&data[0]	 	Exact same address as data
*data	     	Value at data[0] (so, 'H')
*/

int main() {
	char data[6] = "hello"; //in C, a string has \0 at the end.
	printf("data[4]     : %d (%c)\n", data[4], data[4]);
	printf("*(data + 4) : %d (%c)\n", *(data + 4), *(data + 4));

	printf("data address    : %p\n", data);
	printf("&data address   : %p\n", &data);
	printf("&data[0] address: %p\n", &data[0]);
	printf("data[0] address : %p\n", data + 0);
	printf("data[1] address : %p\n", data + 1);
	printf("data[2] address : %p\n", data + 2);
	return 0;
}
