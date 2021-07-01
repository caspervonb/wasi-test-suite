#include <stdlib.h>
#include <assert.h>

int main(void) {
	assert(getenv("ABSENT") == NULL);
    return 0;
}