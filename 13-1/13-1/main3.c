#include<stdio.h>

int main() {
	char *animals[] = { "Bear","Dog","Monkey","Apple","Orange","Potato","Carrot","Yellow","Blue" };
	animals[8] = "Snake";
	printf(animals[8]);
	return 0;
}