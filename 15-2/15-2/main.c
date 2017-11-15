#include <stdio.h>

struct position {
	int x;
	int y;
	int z;
};

struct box {
	int itemnum;
	char color[25];
	struct position p;
	int hight;
	int width;
	int debth;
};

int main() {
	struct box a1 = {1, "red", {1,2,3}, 3,2,5};
	return 0;
}