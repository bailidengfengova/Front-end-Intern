#include <stdio.h>

struct Data1 {
	char b;
	int a;
	char c;
};

int main() {
	struct Data1 a, b, c;
	printf("%d\n", sizeof(a));
	return 0;
} 
