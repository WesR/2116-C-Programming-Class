#include <stdio.h>
#include <ctype.h>

int main() {
	char array[] = "abcde";
	char array2[] = "a b\fc\nd\re\tf\vg";
	char array3[] = "1 2\f3\n4\r5\t6\v7";

	//1. Uppering everything
	for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		array[i] = toupper(array[i]);
	}
	printf("%s\n", array);

	//2. Replacing spaces
	for (int i = 0; i < (sizeof(array2) / sizeof(array2[0])); i++) {
		if (isspace(array2[i])) {
			array2[i] = '_';
		}
	}
	printf("%s\n", array2);

	//3. print not spaces
	for (int i = 0; i < (sizeof(array3) / sizeof(array3[0])); i++) {
		if (!isspace(array3[i])) {
			printf("%c", array3[i]);
		}
	}
	return 0;
}