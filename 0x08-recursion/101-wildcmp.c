#include "main.h"
/**
 * wildcmp - print lower case
 *@s1: jj
 @s2: jk
 
 * Return: 0 return successful executio
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
