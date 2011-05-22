#include <stdio.h>

/* verifys that getchar() != EOF results in 1 or 0 */

main()
{

  int c, a;

  while ((c = getchar()) != EOF)
	a = c;
  printf("Not EOF: %d\nIs EOF: %d\n", a != EOF, c != EOF);
}
