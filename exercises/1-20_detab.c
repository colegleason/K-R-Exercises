#include <stdio.h>
#define SPACE ' '
#define TAB '\t'

/* K&R 1-20 detab: replaces tabs with spaces */
int Spaces(int N, int position);

main( int argc, char *argv[] )
{
  int N; //columns per tabstop
  int position, spaces, c, a;
  
  // N is set via command line or defaults to 5
  if (argc < 2)
	N = 5;
  else
	N = atoi(argv[1]);

  position = 1;
  while ((c = getchar()) != EOF) {

	if (c == TAB) {
	  spaces = Spaces(N, position);
	  for (a = spaces; a > 0; --a) {
		putchar(SPACE);
		++position;
	  }
	}
	else if (c == '\n') {
	  position = 1;
	  putchar('\n');
	}
	else {
	  putchar(c);
	  ++position;
	}
			}
}

int Spaces(int N, int position)
{
  if (position % N == 0)
	return 1;
  else
	return (N + 1) - (position % N);
}
