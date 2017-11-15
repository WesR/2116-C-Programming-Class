#include <stdio.h>

/*
	Wesley Ring
	C Programming
	10/18/17
*/
int main()
{
	int total;
	int dollar_20, dollar_10, dollar_5, dollar_1;
	printf("Enter dollar amount to pay: $\n");
	scanf("%d", &total);

	dollar_20 = total / 20;
	total = total - dollar_20 * 20;

	dollar_10 = total / 10;
	total = total - dollar_10 * 10;

	dollar_5 = total / 5;
	total = total - dollar_5 * 5;

	dollar_1 = total;

	printf("$20 dollar Bills: %d\n", dollar_20);
	printf("$10 dollar Bills: %d\n", dollar_10);
	printf("$5 dollar Bills: %d\n", dollar_5);
	printf("$1 dollar Bills: %d", dollar_1);

	return 0;
}