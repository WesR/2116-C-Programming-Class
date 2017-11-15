#include <stdio.h>

/*
	Wesley Ring
	C Programming
	10/18/17
*/

int main()
{
	int income;
	int dependents;
	float taxDue;

	printf("Enter Income: $");
	scanf("%d", &income);

	//Garduated income tax? Since it was not mentioned it will be left out
	//Using the rate for the selected income
	if (income < 9275) {
		taxDue = income * .1;
	} else if (income < 37650) {
		taxDue = income * .15;
	} else if (income < 91150) {
		taxDue = income * .25;
	} else if (income < 190150) {
		taxDue = income * .28;
	} else {
		taxDue = income * .33;
	}

	printf("Tax Due = $%.2f\n", taxDue);
	printf("Enter the number of dependents (0 for none):");
	scanf("%d", &dependents);

	//If we have less then 5 dependeds, break them 500 * that
	//Else just give them 2500 off
	if (dependents < 5) {
		taxDue -= dependents * 500;
		printf("Tax credit = %d\n", dependents * 500);
	} else {
		taxDue -= 2500;
		printf("Tax credit = %d\n", 2500);
	}

	printf("Adjusted Tax = $%.2f\n", taxDue);

	return 0;
}