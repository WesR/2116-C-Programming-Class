#include <stdio.h>

int main()
{
	printf("Hello\n");

	#ifdef DEBUG
		printf("Debugging!\n");
	#endif

	return 0;
}