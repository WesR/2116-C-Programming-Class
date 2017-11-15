#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension) {
	for (int i = 0; i < (sizeof(file_name) / sizeof(file_name[0])); i++) {
		if (file_name[i] == '.') {
			strncpy(extension, &file_name[i], (sizeof(file_name) / sizeof(file_name[0])));
			return;
		}
	}
}

int main(void)
{
	char filename[] = "memo.avi";
	char extension[20];
	get_extension(filename, extension);
	printf("Filename: %s, Extension: %s", filename, extension);
	return 0;
}