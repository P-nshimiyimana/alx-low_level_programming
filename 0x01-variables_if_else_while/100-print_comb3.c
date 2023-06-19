#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - print "string"
 *
 * Description: This is the first function of the program
 * Return: retuns 0 shown succesful execution
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
	for (m = 49; m <= 57; m++)
	{
	if (m > n)
	{
	putchar(n);
	putchar(m);
	if (n != 56 || m != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
