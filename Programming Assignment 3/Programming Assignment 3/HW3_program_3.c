#include <stdio.h> 

int main(void) {
	int vals[10];
	int k;

	//Getting the ints
	printf("Please enter 10 integers separated by a space:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &vals[i]);
	}
	
	//Sorting
	for (int i = 0; i < 10; i++) {
		int temp = vals[i];
		k = i - 1;
		//Time to take it baaaaack
		while ((temp < vals[k]) && (k >= 0)) {
			//printf("Movin");
			vals[k + 1] = vals[k];
			k = k - 1;
		}
		vals[k + 1] = temp;
	}

	//Outputting
	printf("The list after sorting:");
	for (int i = 0; i < 10; i++) {
		printf("%d ", vals[i]);
	}
}