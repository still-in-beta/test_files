/**
 * Double Free
 * https://cwe.mitre.org/data/definitions/415.html
 */

#include <stdbool.h>
#include <stdlib.h>

int main() {
  char * buffer = (char *) malloc(256);
  bool error = true;

  if (error)
    free(buffer);

  // [...]

  free(buffer); // second free
}
