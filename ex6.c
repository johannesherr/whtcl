#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 42;
  float power = 2.345f;
  double super_power = 56788.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %1$d, %1$x, %1$X, %1$o, %1$04X miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("pos of char: %p\n", &initial);
  printf("pos of int: %p\n", &distance);
  printf("pos of str: %p\n", &first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

  return 0;
}
