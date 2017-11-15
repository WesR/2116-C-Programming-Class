#include <stdio.h>

int main() {
	int arraySample[12];
	int sum = 0;

	//Zeroing out so we math right
	for (int i = 0; i < 12; i++) {
		arraySample[i] = 0;
	}

	//Adding the special numbers
	arraySample[1] = 1;
	arraySample[3] = 3;
	arraySample[7] = 7;

	printf("All the items in the array:\n");
	for (int i = 0; i < 12; i++) {
		printf("%d\n", arraySample[i]);
	}
	
	printf("Sum: ");
	//Counting everything up
	for (int i = 0; i < 12; i++) {
		sum += arraySample[i];
	}

	printf("%d", sum);
	return 0;
}	