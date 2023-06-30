#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strcat - writes the character c to stdout
 * @dest: Destination to concatenate
 * @src: source to concatenate
 *
 * Return: On success 1.
 */
char *_strcat(char *dest, char *src)
{
	int stringLength = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[stringLength] = src[i];
	stringLength++;
	}
	dest[stringLength] = '\0';
	return (dest);
}
