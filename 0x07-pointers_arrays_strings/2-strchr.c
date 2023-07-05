#include <stddef.h>
#include "main.h"
/**
 * _strchr - print lower case
 * @s: pointer to char
 * @c: char string
 *
 * Return: 0 return successful executio
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	return (&(s[i]));
	}
	}
	return (NULL);
}
