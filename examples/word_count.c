#include <stdio.h>

#define IN 1
#define OUT 0

/* counts lines, words, and characters in the input */
main()
{
  double nl, nw, nc;
  int c, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
	++nc;
	if (c == '\n')
	  ++nl;
	if (c == ' ' || c == '\t' || c == '\n')
	  state = OUT;
	else if (state == OUT) {
	  state = IN;
	  ++nw;
	}
  }
  printf("Chars: %.0f\nWords: %.0f\nLines: %.0f\n", nc, nw, nl);
}
