#include <stdio.h>

/*
	Wesley Ring
	C Programming
	10/18/17
*/

int totalColumn(int userArray[5][5], int column) {
	int total;

	for (int i = 0; i < 5; i++) {
		total += userArray[i][column];
	}

	return total;
}

int totalRow(int userArray[5][5], int row) {
	int total;

	for (int i = 0; i < 5; i++) {
		total += userArray[row][i];
	}

	return total;
}

int main()
{
	int userArray[5][5];
	
	for (int i = 0; i < 5; i++) {
		printf("Enter row %d: ", i+1);
		scanf("%d %d %d %d %d", &userArray[i][0], &userArray[i][1], &userArray[i][2], &userArray[i][3], &userArray[i][4]);
	}

	printf("Row totals: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", totalRow(userArray, i));
	}

	printf("\nColumn totals: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", totalColumn(userArray, i));
	}

	return 0;
}