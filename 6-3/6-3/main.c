#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int isRunning = 1;
	int total = 0;
	do {
		int temp = 0;
		printf("Please enter the next number: ");
		scanf("%d", &temp);
		if (temp == -1) {
			isRunning = 0;
		} else {
			total += temp;
		}

		printf("Current sum: %d\n", total);
	} while (isRunning);

	printf("Done!");
	return 0;
}