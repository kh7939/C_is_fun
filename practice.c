#include <stdio.h>

struct student {
	char name[12];
	int kor, math, sum, total;
};

int main() {
	struct student s[3] = {{"A", 90, 85}, {"B", 88, 91}, {"C", 80, 75}};
	struct student *p;

	p = &s[0];

	(p+1)->sum = (p+1)->kor + (p+2)->math;
	(p+1)->total = (p+1)->sum + p->kor + p->math;
	
	printf("%d\n", (p+1)->sum + (p+1)->total);

	return 0;
}
