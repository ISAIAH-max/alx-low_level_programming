#include <stdio.h>

/**
 *main-A program that prints all possible combination
 *of two two-digit numbers
 *Return: Always zero(sucess)
 */

int main(void)
{
	int i, x, y, z;


	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 8; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if ((y != 0) || (z != 0))
					{
						putchar(i + '0');
						putchar(x + '0');
						putchar(' ');
						putchar(y + '0');
						putchar(z + '0');

						if (!((y == 9) && (z == 9)))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
