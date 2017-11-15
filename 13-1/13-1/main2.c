#include<stdio.h>
#include<stdlib.h>

int main() {
	char *animals[] = { "Bear","Dog","Monkey","Apple","Orange","Potato","Carrot","Yellow","Blue" };
	char *yeh = animals[2];
	int i = 1;
	while (*yeh != '\0') {
		if (i == 4) {
			printf("%c", *(yeh));
			break;
		}
		*(yeh++);
		i++;
	}
	return 0;
}