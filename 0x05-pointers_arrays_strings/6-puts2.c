#include <stdio.h>
#include "main.h"
/**
 * puts2 - writes the character c to stdout
 * @str: String to be printed to stdout
 *
 * Return: On success 1.
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
	if (z % 2 == 0)
	{
	putchar(str[z]);
	}
	z++;
	}
	putchar ('\n');
}
