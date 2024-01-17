#include <stdio.h>
#include <stdlib.h>

int my_recurse (int n) {
  
  if (n == 0) {
    return 0;
  } else {
    return my_recurse(n-1);
  }
}

int main (int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <integer>\n", argv[0]);
    return EXIT_SUCCESS;
  }
  else {
    int val;
    if ((val = atoi(argv[1])) == 0) {
      fprintf(stderr, "ERROR: main(): atoi() error when reading args\n");
      return EXIT_FAILURE;
    }
    printf("%d\n", my_recurse(val));
  }
  return EXIT_SUCCESS;
}
