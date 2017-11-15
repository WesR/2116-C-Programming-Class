#include <stdio.h>

int x = 15, y = 25;

int main(void)
{
	printf("%d\n", x); //1

	int x = 15;
	printf("DAD%d\n", x); //2

	x = y;
	printf("%d\n", x); //3

	for (int j = 0; j < 3; j++) {
		int y = 32;
		static int x = 35;
		x = 2 * x;
		printf("%d\n", x); //4
		y = y / 2;
		printf("%d\n", y); //5
	}

	int y = 100;
	printf("%d\n", y); //6

	return 0;
}