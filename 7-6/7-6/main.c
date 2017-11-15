#include <stdio.h>

int main() {
	int ameArray[5][5];

	for (int i = 0; i < sizeof(ameArray) / sizeof(ameArray[0]); i++) {
		for (int k = 0; k < sizeof(ameArray) / sizeof(ameArray[0]); k++) {
			if (i == k) {
				ameArray[i][k] = 1;
			}
			else {
				ameArray[i][k] = 0;
			}
		}
	}

	for (int i = 0; i < sizeof(ameArray) / sizeof(ameArray[0]); i++) {
		for (int k = 0; k < sizeof(ameArray) / sizeof(ameArray[0]); k++) {
			printf("%d, ", ameArray[i][k]);
		}
		printf("\n");
	}

	getchar();
	return 0;
}