#include<stdio.h>
#include<stdlib.h>

int main() {
	char *animals[] = { "Bear","Dog","Monkey","Apple","Orange","Potato","Carrot","Yellow","Blue" };
	char *yeh = animals[4];
	while (*yeh != '\0') {
		printf("%c", *(yeh++));
	}
	return 0;
}