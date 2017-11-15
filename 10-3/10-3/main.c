#include <stdio.h>

#define flipFlop(x,y) ( {x=x+y; y = x-y; x = x-y;})

int main() {
	int a = 12, b = 5;
	flipFlop(a, b);
	printf("A= %d, B = %d", a, b);
	return 0;
}