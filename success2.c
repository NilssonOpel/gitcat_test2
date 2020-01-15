#include <stdio.h>

extern int the_ladder_to_success3(int in);

int the_ladder_to_success2(int in)
{
  printf ("You are at the second    stage on the ladder to success\n");

  return the_ladder_to_success3(in);
}
