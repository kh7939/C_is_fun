#include <stdio.h>

// array

int main() {
	/*	
	int subway_array[3]; // [0][1][2]
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for(int i = 0; i < 3; i++){
		printf("subway%d : %d\n", i+1, subway_array[i]);
	}
	*/

	//arrays need to be initialized
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int arr2[10] = {1,2}; //print 1, 2 and then the rest is 0

	int arr3[10] = {}; //empty curly bracket then 10 garbage numbers

	int arr4[] = {1, 2}; // same as int arr4[2] 

	float arr_f[5] = {1.0f, 2.0f, 3.0f}; // print 1.0, 2.0, 3.0 and the rest is 0

	// chracter and string

	char c = 'A';
	printf("%c\n", c);

	char str[7] = "coding"; // [c][o][d][i][n][g][\0]
	//char str[] = "coding";
	printf("%d\n", sizeof(str)); //size in byte
	printf("%s\n", str);

	for (int i=0; i<sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	
	return 0;
}
