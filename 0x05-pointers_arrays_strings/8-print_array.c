#include <stdio.h>
/**
 * print_array - writes the character c to stdout
 * @a: String to be printed to stdout
 * @n: Int
 *
 * Return: On success 1.
 */
void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
	printf("%d", a[index_of_array]);
	if (index_of_array != (n - 1))
	{
	printf(",");
	}
	}
	putchar ("\n");
}
