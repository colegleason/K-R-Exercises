#include <stdio.h>
/* prints the number of chars in a file */
main()
{
int c, chars;

chars = 0;
 while ((c = getchar()) != EOF) {
  chars += 1;
							  }
 printf("%d\n", chars);
}
