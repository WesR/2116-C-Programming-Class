#include <stdio.h>
#include <string.h>

int main() {
	char string[] = "123 3.14";
	int ameInt;
	float ameFloat;

	sscanf(string, "%d %f", &ameInt, &ameFloat);

	printf("The number is %d\n", ameInt);
	printf("and the number is %f\n", ameFloat);

	return 0;
}