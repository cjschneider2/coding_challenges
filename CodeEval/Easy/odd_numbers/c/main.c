#include <stdio.h>

int main (void)
{
   int
      MIN = 1,
      MAX = 99;

   for (int itr = MIN; itr <= MAX; itr++)
   {
      printf ("%d\n", (itr%2)+1);
   }
   return 0;
}
