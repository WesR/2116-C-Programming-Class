#include <stdio.h>

int main() {
	unsigned char c = (unsigned char)getchar();
	getchar();
	unsigned char c2 = (unsigned char)getchar();
	unsigned int n = (c - '0') * 10 + (c2 - '0');

	printf("%c, %c is %d\n", c, c2, n);

	return 0;
}