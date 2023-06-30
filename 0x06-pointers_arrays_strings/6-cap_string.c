#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *cap_string - writes the character c to stdout
 * @str: source to concatenate
 *
 * Return: On success 1.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
	|| str[i] == ',' || str[i] == ';' || str[i] == '.'
	|| str[i] == '!' || str[i] == '?' || str[i] == '"'
	|| str[i] == '(' || str[i] == ')' || str[i] == '{'
	|| str[i] == '}')
	{
	capitalize = 1;
	}
	else if (capitalize)
	{
	str[i] = toupper(str[i]);
	capitalize = 0;
	}
	i++;
	}
	return (str);
}
