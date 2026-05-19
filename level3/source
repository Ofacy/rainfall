#include <stdio.h>

int m = 0;

void v(void) {
	char buff[520];

	fgets(buff, 520, stdin);
	printf(buff);
	if (m == 64) {
		fwrite("Wait what?\n", 1, 12, stdout);
		system("/bin/sh");
	}
}

int main(void) {
	v();
}
