//
//  Sample code
//

#include <stdio.h>


double calculatearea(double side);


int main(void)
{
	//overflow
	signed short x = 32000;
	x += 800;
	printf("%d\n", x);


	//underflow
	unsigned short y = 15;
	y -= 600;
	printf("%d\n", y);

	(void)getchar();
	return (0);
}


// Notes:
// 3000000000-2147483648 = 852516352
// Then -2147483648+852516352=-1294967296
