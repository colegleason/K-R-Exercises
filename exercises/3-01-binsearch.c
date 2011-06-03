#include <stdio.h>

/* K&R 3-01: binsearch -- finds x in v[] */
int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  mid = (high + low) / 2;
  while (low <= high && x != v[mid]) {
	if (x < v[mid])
	  high = mid - 1;
	else
	  low = mid + 1;
	mid = (high + low) / 2;
  }
    if ( x == v[mid] )
        return mid;
    else
        return -1;
}

int main(void)
{
  int n = 10;
  int v[n];
  for (n -= 1; n >= 0; n--)
	v[n] = n;
  printf("%d\n", binsearch(1, v, 10));
}
