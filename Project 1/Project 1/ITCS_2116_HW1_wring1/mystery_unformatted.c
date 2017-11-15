/**
	@file mystery_unformatted.c
	@author Wesley Ring (wring1@uncc.edu)

	mystery_unformatted.c - An exercise in program formatting
*/

#include <stdio.h>

/*Return a constant value, just demonstrates a function call*/
int function(int in) {
	return in * 3;
}

/*Prints an example print statment*/
int main() {
	int a=1;
	int b=3;
	int c=5;
	int d =9;
	int e = 15;
	int f = 2;
	int g = 4;
	int h =6;
	int i= 8;
	int j=10;
	int k=0;
	int result1=0;
	int result2=1000;
	int total=0;

	//Adding letters a-e
	result1= a+b+c+d+e;

	//Adding f-j
	result2-= f+g+h+i+j; 

	//Adding the results, and multiplying by 7
	total= 7*(result1+result2);

	//Running the function that multiplies by three and returning to k
	k = function(total);

	//Printing all vars
	printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n"
		, a, b, c, d, e, f, g, h, i, j, k, result1, result2, total);

	return 0;
}

