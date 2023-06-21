#include "main.h"
/**
 * print_last_digit - print lower case
 * @n: The character to print
 * Return: 0 return successful executio
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = -last;
	} 
	{
	_putchar (last + '0');
	return (last);
	}
}
