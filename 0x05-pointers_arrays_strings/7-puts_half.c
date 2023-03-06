#include "main.h"

/**
 *puts_half - function that prints half of a string, followed by a new lin
 *@str:String used
 *
 */

void puts_half(char *str)
{
int n, m;
int index;

index = 0;
m = 0;
while (str[index++])
m++;

if ((m % 2) == 0)
n = m / 2;
else
n = (m + 1) / 2;
for (index = n; index < m; index++)

_putchar(str[index]);

_putchar('\n');
}
