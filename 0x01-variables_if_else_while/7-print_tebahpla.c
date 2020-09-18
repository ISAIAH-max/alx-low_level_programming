#include <stdio.h>
/**
 *main - function
 *Return: Zero
 */

int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
{
putchr(i);
}

putchar('\n');

return (0);
}
