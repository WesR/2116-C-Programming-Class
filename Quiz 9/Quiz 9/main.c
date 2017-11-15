#include <stdio.h>

int i = 0;

int main() {
	printf("%d", i);
	int i = 1;
	printf("%d", i);

	for (int i = 0; i < 5; i++) {
		printf("%d", i);
	}
	return 0;
}