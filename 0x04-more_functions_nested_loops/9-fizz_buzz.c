#include <stdio.h>

/**
 *main - program that prints the numbers from 1 to 100,
 *followed by a new line. But for multiples of three
 *print Fizz instead of the number and for the multiples
 *of five print Buzz. For numbers which are multiples
 *of both three and five print FizzBuzz.
 *Return: Always zero (success)
 */

int main(void)
{
int x;

x = 1;
while (x <= 100)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", x);
}

if (x != 100)
printf(" ");

x++;
}
printf("\n");

return (0);
}
