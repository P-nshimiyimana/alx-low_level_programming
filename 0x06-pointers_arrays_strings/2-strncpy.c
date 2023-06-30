#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strncpy - writes the character c to stdout
 * @dest: Destination to concatenate
 * @src: source to concatenate
 * @n: nnnnn
 *
 * Return: On success 1.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
