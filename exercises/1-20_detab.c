#include <stdio.h>
#define N 5  /* columns per tabstop */

/* replaces tabs with spaces */

main()
{
  int position, spaces, c, a;

  position = 1;
  while ((c = getchar()) != EOF) {
	if (c == '\t') {
	  spaces = N - (position % N);
	  for (a = 0; a < spaces; ++a) {
		putchar(' ');
		++position;
	  }
	}
	else {
	  putchar(c);
	  ++position;
	}
			}

}
