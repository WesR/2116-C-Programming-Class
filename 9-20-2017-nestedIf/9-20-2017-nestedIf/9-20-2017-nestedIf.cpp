#include "stdafx.h"


int main()
{
	int age = 12;
	int hasInshurnace = 1;
	int tagsUpdated = 1;

	if (age >= 16 && hasInshurnace == 1 && tagsUpdated == 1) {
		printf("Can drive");
	} else {

		if (!tagsUpdated) {
			printf("Tags need to be updated");
		} else if (!hasInshurnace) {
			printf("You need insurance");
		} else if (age < 16) {
			printf("Too young to drive");
		}

		printf("\nPlease re-apply later");
	}

	(void)getchar();
}

