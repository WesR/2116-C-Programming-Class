#include <stdio.h> 

float cube_volume(float x)
{
	return (x*x*x);
}

int main(void)
{
	printf("Volume of 5x5x5 cube: %f", cube_volume(5));
}