#include <stdio.h>
#include <stdlib.h>

int main() {
	if (fputs("Hello, stdout!\n", stdout) == 0) {
		return ferror(stdout);
	}

	return EXIT_SUCCESS;
}
