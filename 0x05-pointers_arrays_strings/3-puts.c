#include <stdio.h>
#include "main.h"
/**
 * _puts - writes the character c to stdout
 * @str: String to be printed to stdout
 *
 * Return: On success 1.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	putchar(str[i]);
	i++;
	}
	putchar ('\n');
}
