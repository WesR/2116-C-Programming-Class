#include <stdio.h>

int main() {
	int a, b, *ap, *bp;
	char c, d, *cp, *dp;
	float f, g, *fp, *gp;

	*fp = &gp;
	&gp = &fp;
	b = *a;
	b = &a;
}