#include <stdio.h>

/**
 *main - function that prints base 16 numbers in lowercase
 *Return: Zero
 */

int main(void)
{
int x;
for (x = 48; x <= 57; x++)
{
putchar(x);
}
int y;
for (x = 97; x <= 102; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
