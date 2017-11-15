#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int grade;
	char lgrade;

	printf("Grade: ");
	scanf("%d", &grade);

	if (grade >= 90 && grade <= 100) {
		lgrade = 'A';
	}
	else if (grade >= 90 && grade <= 89) {
		lgrade = 'B';
	}
	else if (grade >= 70 && grade <= 79) {
		lgrade = 'C';
	}
	else if (grade >= 60 && grade <= 69) {
		lgrade = 'D';
	}
	else if (grade >= 0 && grade <= 59) {
		lgrade = 'F';
	}
	else {
		lgrade = '?';
	}

	printf("Your grade is %c", lgrade);

	return 0;
}
