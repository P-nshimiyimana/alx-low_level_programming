#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - print lower case
 * @s: string
 *
 * Return: 0 return successful executio
 */
int _strlen_recursion(char *s)
{
	int i = 0, n;

	n = strlen(s);
	if (*s == '\0')
	{
	return (0);
	}
	else if (i < n)
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
