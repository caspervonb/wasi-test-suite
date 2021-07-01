#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	assert(strcmp(getenv("PRESENT"), "1") == 0);
}
