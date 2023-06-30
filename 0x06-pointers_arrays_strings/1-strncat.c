#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strncat - writes the character c to stdout
 * @dest: Destination to concatenate
 * @n: source byte
 * @src: source to concatenate
 *
 * Return: On success 1.
 */
char *_strncat(char *dest, char *src, int n)
{
	int stringLength = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[stringLength] = src[i];
	stringLength++;
	}
	dest[stringLength] = '\0';
	return (dest);
}
