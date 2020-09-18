#include <stdio.h>

/**
 *main - function to print hexadecimal numbers
 *Return: Zero
 */

int main(void)
{
int j;
for (j = 48; j <= 58; j++)
{
putchar(j);
}
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);

}

putchar('\n');

return (0);
}
