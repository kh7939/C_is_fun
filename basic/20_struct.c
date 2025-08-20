#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	char phone[16];
	int age;
} customer;

void print_user(customer user) {
	printf("name: %s\n", user.name);
	printf("phone: %s\n", user.phone);
	printf("age: %d\n", user.age);
}

void change_user(customer *user) {
	//(*user).age = 33;
	user->age = 33;
}

int main() {
	customer user = {
		name: "Jason",
		phone: "3774532987",
		age: 22,
	};
/*
	customer user;

	strcpy(user.name, "Jason");
	strcpy(user.phone, "3774532987");
	user.age = 22;
*/
	print_user(user);
	change_user(&user);
	print_user(user);
	return 0;

}
