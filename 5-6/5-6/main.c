#include <stdio.h>

int main() {
	int areaCode;
	char *printLoc;

	printf("Please enter an area code:");
	scanf(" %d", &areaCode);

	switch (areaCode) {
		case 229:
			printLoc = "Albany";
			break;
		case 404:
			printLoc = "Atlanta";
			break;
		case 470:
			printLoc = "Atlanta";
			break;
		case 478:
			printLoc = "Macon";
			break;
		case 678:
			printLoc = "Atlanta";
			break;
		case 706:
			printLoc = "Columbus";
			break;
		case 762:
			printLoc = "Columbus";
			break;
		case 770:
			printLoc = "Atlanta";
			break;
		case 912:
			printLoc = "Savannah";
			break;
		default:
			printLoc = "Unknown";
	}

	printf("The location of the area code is %s", printLoc);

	return 0;
}