#include <stdio.h>
/**
 *main - function that print lowercase alphabet except q and e
 *Return: Zero
 */

int main(void)
{
char x;
for (x = 97; x <= 122; x++)
{
if (x == 'e' || x == 'q')
{
continue;
}
putchar(x);
}
putchar('\n');
return  (0);
}
