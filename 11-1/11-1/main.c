#include <stdio.h>

int main() {
	//For the int
	int ame;
	int *pointAme = &ame;
	*pointAme = 100;
	printf("%d is in %p\n", *pointAme, pointAme);

	//For the float
	float dupo;
	float *pointDupo = &dupo;
	*pointDupo = 3.1416;
	printf("%f is in %p\n", *pointDupo, pointDupo);
	return 0;
}