#include <stdio.h>
#include <ctype.h>
float compute_GPA(char grades[], int n) {
	//This program assumes that the array is full
	float total = 0.0;
	for (int i = 0; i < n; i++) {
		switch (tolower(grades[i])) {
			case 'a':
				total += 4.0;
				break;
			case 'b':
				total += 3.0;
				break;
			case 'c':
				total += 2.0;
				break;
			case 'd':
				total += 1.0;
				break;
			case 'f':
				break;
		}
	}

	return  total / n;
}

int main() {

	//double i = f(3.15, 9.28);
	//printf("%d", i);
	char grades[] = {'A', 'A', 'c'};
	float gpa = compute_GPA(grades, 3);
	printf("%f", gpa);
	return 0;
}

double triangle_area(double base, double height) {
	double product = base * height;
	return product / 2;
}