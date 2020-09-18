#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main - function
 *Return: Zero
 */

int main(void)
{
char x;
char s = '\n';
char y;

for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}

for (y = 'A'; y <= 'Z'; y++)
{
putchar(y);
}
putchar(s);

return (0);
}
