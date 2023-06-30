#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *leet - writes the character c to stdout
 * @str: source to concatenate
 *
 * Return: On success 1.
 */
char *leet(char *str)
{
	char *p = str;
	char leet_chars[] = {'A', 'E', 'O', 'T', 'L'};
	char leet_replacements[] = {'4', '3', '0', '7', '1'};
	int i;

	while (*p != '\0')
	{
	for (i = 0; i < 5; i++)
	{
	if (*p == leet_chars[i] || *p == (leet_chars[i] + 32))
	{
	*p = leet_replacements[i];
	break;
	}
	}
	p++;
	}
	return (str);
}
