#include "holberton.h"

/**
 *main - Program that prints the alphabets in lowercase
 *print_alphabet - function that prints the alphabets in lowercase
 *Return: - Always Zero (success)
 */

int main(void)
{
void print_alphabet(void);

int alpha;

for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');

return (0);
}
