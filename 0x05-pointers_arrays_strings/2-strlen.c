#include "main.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
	{
	string_length++;
	}
	return (string_length);
}
