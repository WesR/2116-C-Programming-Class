/**
	@file calc_volume.c
	@author Wesley Ring (wring1@uncc.edu)

	Caculates the volume of a sphere
*/

#include <stdio.h>

#define PI (3.141592653589793)

int main() {
	float radius = 12.5;
	float volume = (4.0f / 3.0f) * PI * (radius * radius *radius);

	printf("Volume (cubic feet): %f", volume);

	return 0;
}