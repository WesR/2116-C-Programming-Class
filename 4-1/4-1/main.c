#include <stdio.h>

main() {
	/*
	short a = -1;
	int b = -2;
	long c = -3;

	unsigned short d = (unsigned short)a;
	unsigned int e = (unsigned int)b;
	unsigned int f = (unsigned int)c;
	short g = (short)d;
	int h = (int)e;
	long i = (long)f;


	printf("%i\n", e);
	printf("%i\n", f);
	printf("%i\n", g);
	printf("%i\n", h);
	printf("%i\n", i);
	*/

	unsigned int a = 2147483648;
	short b = (short)a;
	int c = (int)a;
	long d = (long)a;

	printf("%i\n", b);
	printf("%i\n", c);
	printf("%i\n", d);
	(void)getchar();
}