#include <stdio.h>

/**
 *main - function that prints base 16 numbers in lowercase
 *Return: Zero
 */

int main(void)
{
int x;
int y;
for (x = 48; x <= 57; x++)
{
putchar(x);
}
for (y = 97; y <= 102; y++)
{
putchar(y);
}

putchar('\n');
return (0);
}
