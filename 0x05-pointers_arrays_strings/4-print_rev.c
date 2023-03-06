#include "main.h"

/**
 *print_rev -  function that prints a string, in reverse,
 *followed by a new line
 *@s: The string used
 */

void print_rev(char *s)
{
int forward, reverse;

for (forward = 0; s[forward] != '\0'; forward++)
{

}
for (reverse = forward - 1; reverse >= s[forward]; reverse--)
{
_putchar(s[reverse]);
}
_putchar('\n');
}
