#include <string.h>
#include "main.h"
/**
 * is_palindrome - print lower case
 * @s: string
 *
 * Return: 0 return successful executio
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	if (length == 0)
	{
	return (1);
	}
	for (i = 0; i < j; i++)
	{
	for (j = length - 1; j--; )
	{
	if (s[i] != s[j])
        {
        return (0);
        }
        }
	}
	return (1);
}
