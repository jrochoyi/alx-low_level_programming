#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms in the Fibonacci
 * sequence that do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long fib[3] = { 1, 1, 2 };
	long sum = 0;
	
	while (fib[2] < 4000000)
	{
		if (fib[2] % 2 == 0)
		{
			sum += fib[2];
		}
		
		fib[0] = fib[1];
		fib[1] = fib[2];
		fib[2] = fib[0] + fib[1];
	}
	printf("%ld\n", sum);
	return (0);
}
