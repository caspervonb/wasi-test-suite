#include <stdio.h>
#include <stdlib.h>

int main() {
	if (fputs("Hello, stderr!\n", stderr) == 0) {
		return ferror(stdout);
	}

	return EXIT_SUCCESS;
}
