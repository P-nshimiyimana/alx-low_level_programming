#include "main.h"
/**
 * _isalpha - print lower case
 * @n: The character to print
 * Return: 0 return successful executio
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar (43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar (48);
	return (0);
	}
	else
	{
	_putchar (45);
	return (-1);
	}
	
}
