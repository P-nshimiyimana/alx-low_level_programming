#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *rot13 - writes the character c to stdout
 * @str: source to concatenate
 *
 * Return: On success 1.
 */
char *rot13(char *str)
{
	char *p = str;
	int i;

	while (*p != '\0')
	{
	if (isalpha(*p))
	{
	for (i = 0; i < 13; i++)
	{
	if ((*p >= 'a' && *p < 'z') || (*p >= 'A' && *p < 'Z'))
	{
	*p += 1;
	}
	else if (*p == 'z')
	{
	*p = 'a';
	}
	else if (*p == 'Z')
	{
	*p = 'A';
	}
	}
	}
	p++;
	}
	return (str);

}
