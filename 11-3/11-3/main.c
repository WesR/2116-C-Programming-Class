#include <stdio.h>

int main() {
	int a, b, *ap, *bp;
	char c, d, *cp, *dp;
	float f, g, *fp, *gp;


	dp = ap;
	dp = 'Q';
	//fp = 3.14159;
	gp = &fp;
	*gp = 3.14159;
}