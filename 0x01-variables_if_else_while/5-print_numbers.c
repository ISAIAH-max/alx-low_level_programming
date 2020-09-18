#include <stdio.h>
/**
 *main - function that prints base 10 numbers
 *Return: Zero
 */

int main(void)
{
int n;
char s = '\n';

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
putchar(s);

return (0);

}
