#include <stdio.h>
#define SPACE ' '
#define TAB '\t'

/* K&R 1-21 entab: replaces minimum number of spaces with tabs */

int main ( int argc, char *argv[] )
{
  int N; //columns per tabstop
  int c, a, nspaces, pos; 
  nspaces = 0;
  pos = 1; // position is 0 to begin

  // N is set via command line or defaults to 5
  if (argc < 2)
	N = 5;
  else
	N = atoi(argv[1]);

  while ((c = getchar()) != EOF) {
	
	if (c == SPACE)
	  nspaces++;
	else if (c == TAB) { // a tab sets spaces to 0
	  nspaces = 0;
	  pos += (N - (pos % N)); // and it sets pos to next tabstop
	  putchar(TAB);
	}
	else if (c == '\n') { // a newline resets
	  pos = nspaces = 0;
	  putchar('\n');
	}
	else { // anything else triggers emptying of spaces
	  for (a = nspaces; a > 0; a--)
		putchar(SPACE);
	  nspaces = 0;
	  putchar(c); // and puts the new char
	}
	// what to do if at a tabstop with spaces
	if (((pos % N) == 0) && (nspaces > 0)) {
		putchar(TAB);
		nspaces = 0;
	}
	pos++; // next pos
  }
}
