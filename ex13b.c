#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc == 1) {
    printf("ERROR: You need at least one argument.\n");
    return 1;
  }

  int i = 0, j = 0;
  for (j = 1; j < argc; j++) {
    printf("processing argument: %d\n", j - 1);
    char letter;
    for (i = 0, letter = argv[j][i]; i < argv[j][i]; i++, letter = argv[j][i]) {

      if (letter >= 'A' && letter < 'a') {
        letter += 32;
      }

      switch(letter) {
      case 'a':
        printf("%d: 'A'\n", i);
        break;

      case 'e':
        printf("%d: 'E'\n", i);
        break;

      case 'i':
        printf("%d: 'I'\n", i);
        break;

      case 'o':
        printf("%d: 'O'\n", i);
        break;

      case 'u':
        printf("%d: 'U'\n", i);
        break;

      case 'y':
        if (i > 2) {
          // it's only sometimes Y
          printf("%d: 'Y'\n", i);
        }
        break;

      default:
        printf("%d: %c is not a vowel\n", i, letter);
      }
    }
  }

  return 0;
}
