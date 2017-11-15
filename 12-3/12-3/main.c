#include <stdio.h>

void f(int n, int a[n], int *sum, int *largest) {
	int *p = a;
	*sum = 0;
	*largest = 0;
	p++;
	for (int i = 1; i<n - 1; i++) {
		if (*largest<*p) {
			*largest = *p;
		}
		*sum += *p;
		p++;
	}
}

int main() {
	int list[] = { 10, 2, 4, 5, 91, 1, 100, 3 };
	int sum = 0, largest = 0;
	int count = 8;
	f(count, list, &sum, &largest);
	printf("SUM = %d, LARGEST = %d", sum, largest);
	return 0;
}