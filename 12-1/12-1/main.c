#include <stdio.h>

int main() {
	int list[] = { 10, 2, 4, 5, 91, 1, 100, 3 };
	int *p = &list[3], *q = &list[6];

	printf("%d", *(p + 2));
	printf("%d", q - p);
	printf("%d", (p > q));
	printf("%d", (*p > *q));
	return 0;
}