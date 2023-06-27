#include <stdio.h>
#include "main.h"
/**
 * _strcpy - writes the character c to stdout
 * @src: String to be printed to stdout
 * @dest: charc
 *
 * Return: On success 1.
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
	z++;
	dest[z] = src[z];
	} while (src[z] != '\0');
	{
	return (dest);
	}
}
