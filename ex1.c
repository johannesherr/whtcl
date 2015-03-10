#include <stdio.h>

int main(int argc, char *argv[])
{
  puts("Hello world.");

  int i;
  for (i = 0; i < 5; i++) {
    putchar(i + 49);
    puts(") This is a line.");
  }

  return 0;
}
