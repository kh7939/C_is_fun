#include <stdio.h>

int main() {
	for (int i=0; i<100; i+=1 /* i++ */) {
		if (i%2==0) {
			continue;
		} 
		else if (i==51) {
			break;
		} 
		else {
			printf("i : %d\n", i);
		}
	}
	return 0;
}

