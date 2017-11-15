#include <stdio.h>

int main() {

	for (int i = 0; i < 40; i+=2) {
		printf("x=%d\n", i);
	}

	printf("Decending\n");

	for (int i = 49; i > 20; i -= 2) {
		printf("x=%d\n", i);
	}

	return 0;
}