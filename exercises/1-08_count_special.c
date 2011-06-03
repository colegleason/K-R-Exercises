#include <stdio.h>

/* count chars. tabs, blanks, and newlines */

int main()
{
  int c;
  double nc, nt, nb, nl;
  
  while ((c = getchar()) != EOF) {
	++nc;
	if (c == '\n')
	  ++nl;
	if (c == ' ')
	  ++nb;
	if (c == '\t')
	  ++nt;
  }
  printf("Chars: %.0f\nBlanks: %.0f\nTabs: %.0f\nLines: %.0f\n", nc, nb, nt, nl);
}
