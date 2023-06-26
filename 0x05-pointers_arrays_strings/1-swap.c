#include "main.h"
/**
 * swap_int - writes the character c to stdout
 * @a: The character to print
 * @b: Number to be swamped
 *
 * Return: On success 1.
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
