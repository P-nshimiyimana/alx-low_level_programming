#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - writes the character c to stdout
 * @s1: Destination to concatenate
 * @s2: source to concatenate
 *
 * Return: On success 1.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
