#include <stdio.h>
#include "main.h"
/**
 * print_rev - writes the character c to stdout
 * @s: String to be printed to stdout
 *
 * Return: On success 1.
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
	{
	start++;
	}
	while (start--)
	{
	putchar (s[start]);
	}
	putchar ('\n');
}
