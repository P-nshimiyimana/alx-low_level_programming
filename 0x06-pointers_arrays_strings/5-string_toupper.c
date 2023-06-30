#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *string_toupper - writes the character c to stdout
 * @str: Destination to concatenate
 *
 * Return: On success 1.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	str[i] = toupper(str[i]);
	i++;
	}
	return (str);
}
