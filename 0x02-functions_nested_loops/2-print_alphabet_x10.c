#include "main.h"

/**
 * print_alphabet_x10 - print lowcase ten times
 *
 * Return: 0 shows successful execution
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	i = 0;

	while (i < 10)
	{
	for (c = 97; c <= 122; c++)
	{
	_putchar (c);
	}
	_putchar ('\n');
	i++;
	}
}
