#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	assert(strcmp(getenv("HELLO"), "WORLD") == 0);
}
