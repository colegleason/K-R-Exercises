#include <stdio.h>

/* replaces strings of one or more blanks with a single blank */

main()
{
  int c, nb;
  while ((c = getchar()) != EOF) {
	if (c == ' ') {
	  ++nb;
	  if (nb == 1)
		putchar(c);
	}	

	if (c != ' ') {
	  putchar(c);
	  nb = 0;
	}
  }
}
