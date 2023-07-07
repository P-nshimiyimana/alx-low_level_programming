#include <string.h>
#include "main.h"
/**
 * _pow_recursion - print lower case
 * @x: string
 * @y: string
 *
 * Return: 0 return successful executio
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	else if (y < 0)
	{
	return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
