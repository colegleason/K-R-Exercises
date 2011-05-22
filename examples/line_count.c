#include <stdio.h>

/* counts lines of a file */

main()
{
  double lines;
  int c;

  while ((c = getchar()) != EOF)
	if (c == '\n')
	  ++lines;
  printf("%.0f\n", lines);
}
