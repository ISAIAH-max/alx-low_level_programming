#include <stdio.h>

/**
 * main -A function that prints all possible different
 *combinations of three digits
 * Return: Always 0.
 */
int main(void)
{
	int x, y, z;

	x = '0';
	y = x + 1;
	z = y + 1;

	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
	putchar('\n');
	return (0);
}
