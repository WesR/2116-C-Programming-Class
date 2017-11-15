#include <stdio.h>
#include <string.h>

/*
	Wesley Ring
	C Programming
	10/18/17
*/
int main()
{
	char phone[15];//Holding the phone number
	printf("Enter a telephone number using the format (xxx)xxx-xxxx\n: ");
	scanf("%s", &phone);

	char area[5];//Getting the first four char ex "(336"
	strncpy(area, phone, 4);
	area[5] = '\0';

	if (!strcmp("(704", area)) {//Checking if its charlotte
		printf("This is a Charlotte phone number.\n");
	}

	printf("%.3s.%.3s.%.4s\n", phone + 1, phone + 5, phone + 9);//Printing only the numbers
	return 0;
}