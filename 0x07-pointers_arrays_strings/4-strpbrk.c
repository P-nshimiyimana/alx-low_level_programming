#include "main.h"
/**
 * _strpbrk - print lower case
 * @s: ptr
 * @accept: byte to be searched
 *
 * Return: 0 return successful executio
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
	{
	if (*s == accept[index])
	{
	return (s);
	}
	}
	s++;
	}
	return ('\0');
}
