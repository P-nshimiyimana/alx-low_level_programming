#include <stdio.h>
#include "main.h"
/**
 * more_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 */
void more_numbers(void)
{
	int i;
	int c;

	i = 0;
	while (i < 10)
	{
	for (c = 0; c <= 14; c++)
	{
	if (c > 9)
	{
	_putchar ((c / 10) + '0');
	}
	_putchar ((c % 10) + '0');
	}
	i++;
	_putchar ('\n');
	}
}
