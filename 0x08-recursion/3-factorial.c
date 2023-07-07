#include <string.h>
#include "main.h"
/**
 * factorial - print lower case
 * @n: string
 *
 * Return: 0 return successful executio
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	return (n * factorial(n - 1));
}
