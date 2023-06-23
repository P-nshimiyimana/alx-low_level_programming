#include "main.h"
/**
 * print_square - writes the character c to stdout
 *@size: Size of square
 *
 * Return: On success 1.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar ('\n');
	}
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < (size); j++)
	{
	_putchar ('#');
	}
	_putchar ('\n');
	}
}
