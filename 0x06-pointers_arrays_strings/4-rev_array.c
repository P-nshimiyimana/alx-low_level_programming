#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - writes the character c to stdout
 * @a: Destination to concatenate
 * @n: source to concatenate
 *
 * Return: On success 1.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
	}
}
