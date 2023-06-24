#include "main.h"
/**
 * print_line - writes the character c to stdout
 * @n: Number of lines to print
 * Return: On success 1.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar ('_');
	}
	_putchar ('\n');
}
