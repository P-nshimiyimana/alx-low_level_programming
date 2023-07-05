#include <stdio.h>
#include "main.h"
/**
 * _memset - print lower case
 * @S: pointer to a memory to be set 
 * @b: value to be assinged to each bytes was pointed to
 * @n: number of bytes to set
 *
 * Return: 0 return successful executio
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
int main()
{
	char buffer[10];
	char *result = _memset(buffer, 'A', 10);
	printf("%s\n", result);
	return (0);
}
