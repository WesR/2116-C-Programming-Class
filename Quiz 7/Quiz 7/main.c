#include <stdio.h>

int main() {
	int temperature_readings[30][24];
	int sum = 0;
	int hours = 30 * 24;
	
	for (int i = 0; i < 30; i++) {
		for (int k = 0; k < 24; k++) {
			sum += temperature_readings[i][k];
		}
	}

	int average = sum / hours;

	return 0;
}