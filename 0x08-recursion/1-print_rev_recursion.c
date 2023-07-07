#include "main.h"
/**
 * _print_rev_recursion - print lower case
 * @s: string
 *
 * Return: 0 return successful executio
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	else
	{
	_print_rev_recursion(s + 1);
	_putchar (*s);
	}
}
