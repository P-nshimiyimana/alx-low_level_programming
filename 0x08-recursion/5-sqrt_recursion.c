#include <string.h>
#include "main.h"
/**
 * _sqrt_recursion - print lower case
 * @n: string
 *
 * Return: 0 return successful executio
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n == 0 || n == 1)
	{
	return (n);
	}
	else if (n < 0)
	{
	return (-1);
	}
	x = _sqrt_recursion(n - 1);
	return ((x + n / x) / 2);
}
