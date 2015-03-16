#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // let's make our own array of strings
  char *states[] = {
    "California", NULL,
    "Washington", "Texas"
  };
  int num_states = 4;

  argv[1] = states[2];
  states[0] = argv[3];

    // go through each string in argv
  // why am I skipping arvg[0]?
  for (i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  for (i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
