#include <stdio.h>
/*
Single and double quoates difference

Syntax		What it Means					Example
'A'		A character literal (type char)		'A' → 1 byte
"A"		A string literal (type char[])		"A" → 2 bytes ('A' + '\0')
*/

/*
int main() {
	printf("A : %d\n", 'A');
	printf("65: %c\n", 65);
	return 0;
}
*/

int main() {
	for (int i=65; i<=90; i+=1) {
		printf("%d : %c\n", i, i);
	}
	printf("a - A : %d\n", 'a'-'A');
	printf("30 - 20 : %d\n", 30 - 20);
	printf("20 * 20 : %d\n", 20 * 20);
	printf("100 : %c\n", 100);
	return 0;
}
