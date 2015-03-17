#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0, progArgs = argc - 1;

  if (progArgs == 1) {
    printf("You only have one argument. You suck.\n");
  } else if (progArgs > 1 && progArgs < 4) {
    printf("Here's your arguments:\n");

    for (i = 0; i < progArgs; i++) {
      printf("%s ", argv[i + 1]);
    }
    printf("\n");
  } else {
    printf("You have too many arguments. You suck.\n");
  }

  return 0;
}
