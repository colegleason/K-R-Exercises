#include <stdio.h>
/* prints the number of chars in a file */
main()
{
  double chars;

  chars = 0;
  while (getchar() != EOF) {
	++chars;
							  }
  printf("%.0f\n", chars);
}
