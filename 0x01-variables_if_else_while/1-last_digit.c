#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main- Entry point
 *
 *Return: Always 0 success
 */

int main(void)
{
  int n;
  int l;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  
  l = n%10;
  if (l > 5)
    {
      printf("Last digit of %u is %u and is greater than 5\n", n, l);
    }
  else if (l == 0)
    {
      printf("Last digit of %u is %u and is 0\n", n, l);
    }
  else if ((l < 6) & ! 0)
    {
      printf("Last digit of %u is %u and is less than 6 and not 0\n", n, l);
    }  
  return (0);

}
