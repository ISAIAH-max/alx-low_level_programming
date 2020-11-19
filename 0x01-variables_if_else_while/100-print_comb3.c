#include <stdio.h>

/**
 *main- a function that prints numbers
 *Return:Always zero(success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if (y > x)
			{
				putchar(x + '0');
				putchar(y + '0');

				if ((x * 10 + y) != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
