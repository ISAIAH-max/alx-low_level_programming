#include <stdio.h>

/**
 *main - function that prints the numbers from 00 to 99
 *Return: Zero
 */

int main(void)
{
int x, y;
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
putchar(x);
putchar(y);

if (x == 57 && y == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
