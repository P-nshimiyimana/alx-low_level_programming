#include "main.h"
/**
 * _isalpha - print lower case
 * @c: The character to print
 * Return: 0 return successful executio
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
