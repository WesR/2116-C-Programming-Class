#include <stdio.h>
#include <math.h>

#define flipFlop(x,y) ( {x=x+y; y = x-y; x = x-y;})
#define cube(x) (x = x * x * x)
#define fourRem(x) (x = x % 4)
#define sumLess(x, y) (x+y < 100 ? 1 : 0)
#define double(x) (x*2)
#define CHECK(x,y,n) (x > 0 && x < (n-1) && y > 0 && y < (n-1) ? 1 : 0)
#define MEDIAN(x,y,z) ((x > y) ? (y > z) ? y : (x > z) ? z : x : (y > z) ? (x > z) ? x : z : y)
#define POLYNOMIAL(x) ((3 * pow(x,5)) + (2 * (pow(x, 4))) - (5 * (pow(x,3))) - (pow(x,2)) + (7 * x) - 6)

int main() {
	int ame = 123;
	int ameame = 12;
	int max = 30;
	//double(ame);
	printf("%d", MEDIAN(ame, ameame, max));

#if defined(ENGLISH)
	printf("Insert Disk 1");
#elif defined(FRENCH)
	printf("Inserz Le Disque 1");
#elif defined(SPANISH)
	printf("Inserte El Disco 1");
#endif

	return 0;
}