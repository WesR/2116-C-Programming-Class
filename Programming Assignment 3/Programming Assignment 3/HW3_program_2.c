#include <stdio.h> 

int main(void) {
	int temp[10];
	int high = -200;

	//Getting the temps
	printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");
	for (int i = 0; i < 10; i++) {
		printf("Enter a high temperature: ");
		scanf("%d", &temp[i]);

		//If its bigger then the last highest, record it
		if (high < temp[i]) {
			high = temp[i];
		}
	}

	//Displaying the temps
	printf("The highest recorded temperature in the 10-day period was: %d degrees. Recorded on the following days:\n", high);
	for (int i = 0; i < 10; i++) {
		if (high == temp[i]) {
			printf("\tDay %d\n", (i + 1));
		}

	}


}