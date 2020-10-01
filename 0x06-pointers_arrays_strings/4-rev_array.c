#include "holberton.h"

/**
 *reverse_array - A function the reverse the content of
 *an array of intergers
 *@a: Array of intergers to be reversed
 *@n: Reverse array of intergers
 *
 */

void reverse_array(int *a, int n)
{
int x, y;

for (x = 0; x < (n / 2); x++)
{
y = a[x];
a[x] = a[n - x - 1];
a[n - x - 1] = y;
}
}
