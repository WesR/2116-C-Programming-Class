#include <stdio.h>

int main() {
	int list[] = { 10, 2, 4, 5, 91, 1, 100, 3 };
	int *p;
	p = &list[7];
	for (int i = 8; i > 0; i--) {
		printf("%d ", *p);
		p--;
	}
	return 0;
}