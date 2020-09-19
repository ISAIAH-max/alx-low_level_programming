#include <stdio.h>

/**
 *main - function to print hexadecimal numbers
 *Return: Zero
 */

int main(void)
{
int x;
for(x = 48; x <= 57; x++)
{
putchar(x);
}
int y;
for(y = 'a'; y <= 'f'; y++)
{
putchar(y);

}

putchar('\n');

return (0);
}
