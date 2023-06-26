#include <stdio.h>
#include "main.h"
/**
 * puts_half - writes the character c to stdout
 * @str: String to be printed to stdout
 *
 * Return: On success 1.
 */
void puts_half(char *str)
{
	int full_string, half_string;

	full_string = 0;
	while (str[full_string] != '\0')
	{
	full_string++;
	}
	half_string = full_string / 2;
	if (half_string < full_string)
	{
	putchar (str[half_string]);
	half_string++;
	}
	putchar('\n');
}
