#include <assert.h>
#include <errno.h>
#include <stdio.h>

int main() {
  FILE* file = fopen("fopen-working-directory.c", "r");
  assert(file == NULL);
  assert(errno == ENOTCAPABLE);

  return 0;
}