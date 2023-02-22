#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Desc: Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned int fib1 = 1, fib2 = 2, next_fib;
	printf("%u, %u", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %u", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");
	return (0);
}
