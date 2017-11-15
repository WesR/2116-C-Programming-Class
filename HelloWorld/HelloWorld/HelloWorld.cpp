#include "stdafx.h"

int main()
{
	int bapple = 12;
	int dapple = 32;
	int sum = 0;

	for (int i = 0; i < 10000000; i++) {
		printf("%s", "Loop: ");
		printf("%d", i);
		printf("%s", "\n");
		sum += bapple * dapple;
	}
	
	printf("%s", "Totes: ");
	printf("%d", sum);

	getchar();

	return 0;
}