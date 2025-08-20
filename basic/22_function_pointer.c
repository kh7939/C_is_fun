#include <stdio.h>

void login_func() {
	printf("login_func()\n");
}

void order_func() {
	printf("order_func()\n");
}

void logout_func() {
	printf("logout_func()\n");
}

void (*func[3])() = {
	login_func,
	order_func,
	logout_func
};

enum {
	LOGIN_STATE,
	ORDER_STATE,
	LOGOUT_STATE
};

int main() {
	void (*func)();
	
	func = login_func;
	func();
	
	func = logout_func;
	func();
	return 0;
}
