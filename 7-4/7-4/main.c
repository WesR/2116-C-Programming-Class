#include <stdio.h>

int main() {
	float arraySample[5];
	float sum = 0.0f;

	printf("Please enter five numbers:\n");
	for (int i = 0; i < 5; i++) {
		scanf("%f", &arraySample[i]);
	}

	//Counting everything up
	for (int i = 0; i < 5; i++) {
		sum = sum + arraySample[i];
	}

	printf("Sum: %f\n", sum);
	printf("Average: %f\n", sum / 5);

	return 0;
}