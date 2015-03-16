#include <stdio.h>

int main() {
  int j;
  int max = 522437;

  printf("#!/bin/bash\n\n");

  printf("./ex10 ");
  for (j = 0; j < max; j++) {
    printf("foo ");
  }
  printf("\n");

  return 0;
}
