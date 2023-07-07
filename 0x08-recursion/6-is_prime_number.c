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
	if (n <= 1)
	{
	return (0);
	}
	{
	if (n % 2 == 0)
	return (0);
	}
	return (1);
}
