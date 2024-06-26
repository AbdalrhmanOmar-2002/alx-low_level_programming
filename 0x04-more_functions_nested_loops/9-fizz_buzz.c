#include <stdio.h>

/**
 * main - Entry point for the FizzBuzz program
 *
 * This program prints numbers from 1 to 100, replacing
 * multiples of 3 with "Fizz," multiples of 5 with "Buzz,"
 * and multiples of both 3 and 5 with "FizzBuzz."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && !(i % 5 == 0))
{
printf("Fizz");
}
else if (!(i % 3 == 0) && i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
