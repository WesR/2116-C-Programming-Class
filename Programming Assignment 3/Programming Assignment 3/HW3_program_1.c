#include <stdio.h>

int main() {
	int num1, num2;
	int total;
	int div56 = 0, sum56 = 0;

	//Getting the range
	printf("Enter the low number:");
	scanf("%d", &num1);
	printf("Enter the high number:");
	scanf("%d", &num2);

	int small56 = (num2 + 5), large56 = (num1 - 5);

	//Counting up the stats
	for (int i = num1; i <= num2; i++) {
		//printf("%d\n", i);
		total += i;
		if ((i %5 == 0 || i%6 == 0) && !(i % 5 == 0 && i % 6 == 0)) {
			sum56 += i;
			div56++;

			if (i <= small56) {
				//printf("set");
				small56 = i;
			} else if (i >= large56) {
				//printf("SET");
				large56 = i;
			}
		}
	}

	//Displaying the stats
	printf("The number of integers between the two numbers is %d\n", ((num2 - num1) + 1));
	printf("There are %d integers that are divisible by 5 or 6 but not both\n", div56);
	printf("The sum of the integers that are divisible by 5 or 6 but not both is %d\n", sum56);
	printf("The sum of all the integers is %d\n", total);
	printf("The largest integer divisible by 5 or 6 but not both is %d\n", large56);
	printf("The smallest integer divisible by 5 or 6 but not both is %d\n", small56);
	printf("The average of %d and %d is %.2f\n", num1, num2, ((float)((num1 + num2) / 2)));
	return 0;
}