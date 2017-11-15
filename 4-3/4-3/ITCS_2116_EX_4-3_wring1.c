//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {
	char char1, char2;
	float float1;
	int int1;

	printf("Enter two characters, a space, a float, a space, and a decimal:");
	scanf("%c%c %f %d", &char1, &char2, &float1, &int1);

	printf("%c", char1);
	printf("%c\n", char2);
	printf("%f\n", float1);
	printf("%d", int1);

	return 0;
}