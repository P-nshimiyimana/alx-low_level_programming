#include "main.h"
/**
 * _memcpy - print lower case
 * @dest: copy destination
 * @src: copy source file
 * @n: number of bytes to be copied
 *
 * Return: 0 return successful executio
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
