#include <string.h>
#include <math.h>
#include "main.h"
/**
 * is_prime_number - print lower case
 * @n: string
 *
 * Return: 0 return successful executio
 */
int is_prime_number(int n)
{
	int i, q = sqrt(n);

	if (n <= 1)
	{
	return (0);
	}
	for (i = 2; i <= q; i++)
	{
	if (n % i == 0)
	return (0);
	}
	return (1);
}
