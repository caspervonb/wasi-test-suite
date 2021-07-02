#include <assert.h>
#include <time.h>

int main() {
	struct timespec ts;
	assert(clock_getres(CLOCK_REALTIME, &ts) == 0);
}
